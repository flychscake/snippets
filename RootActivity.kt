package com.gertz.reclameclient.autobanners.presentation.ui.activity.root

import android.annotation.SuppressLint
import android.app.ActivityManager
import android.content.ComponentName
import android.content.Context
import android.content.Intent
import android.content.ServiceConnection
import android.net.Uri
import android.os.Build
import android.os.Bundle
import android.os.Handler
import android.os.IBinder
import android.text.TextUtils
import android.util.Log
import android.view.View
import android.widget.TextView
import androidx.core.content.ContextCompat
import androidx.core.view.GravityCompat
import com.arellomobile.mvp.presenter.InjectPresenter
import com.arellomobile.mvp.presenter.ProvidePresenter
import com.gertz.reclameclient.autobanners.R
import com.gertz.reclameclient.autobanners.data.api.request.UserUpdateRequest
import com.gertz.reclameclient.autobanners.data.entity.Counters
import com.gertz.reclameclient.autobanners.data.entity.User
import com.gertz.reclameclient.autobanners.data.manager.IApiManager
import com.gertz.reclameclient.autobanners.data.manager.IPreferenceManager
import com.gertz.reclameclient.autobanners.presentation.navigation.base.Navigator
import com.gertz.reclameclient.autobanners.presentation.navigation.navigator.RootNavigator
import com.gertz.reclameclient.autobanners.presentation.navigation.navigator.view.IRootNavigatorView
import com.gertz.reclameclient.autobanners.presentation.navigation.screens.*
import com.gertz.reclameclient.autobanners.presentation.ui.activity.base.NavigableActivity
import com.gertz.reclameclient.autobanners.presentation.ui.activity.root.presenter.RootPresenter
import com.gertz.reclameclient.autobanners.presentation.ui.fragment.dialog.PrivacyDialogFragment
import com.gertz.reclameclient.autobanners.presentation.ui.service.LocationService
import com.gertz.reclameclient.autobanners.presentation.util.AppConstants
import com.gertz.reclameclient.autobanners.presentation.util.alert.Alert
import com.gertz.reclameclient.autobanners.presentation.util.ext.*
import dagger.Lazy
import kotlinx.android.synthetic.main.activity_root.*
import kotlinx.android.synthetic.main.frament_my_profile.*
import java.io.File
import javax.inject.Inject
import kotlin.properties.Delegates

/**
 * Экран который запускается после авторизации
 *
 */
class RootActivity : NavigableActivity(), IRootView, IRootNavigatorView {

    companion object {
        const val SCREEN_NAME = "RootActivityScreen"
        const val IS_NOTIFICATION = "IS_NOTIFICATION"
        const val NOTIFICATION_TITLE = "NOTIFICATION_TITLE"
        const val NOTIFICATION_TEXT = "NOTIFICATION_TEXT"
    }

    @Inject
    lateinit var daggerRootPresenter: Lazy<RootPresenter>
    @InjectPresenter
    lateinit var rootPresenter: RootPresenter

    @ProvidePresenter
    protected fun provideRootPresenter(): RootPresenter = daggerRootPresenter.get()

    @Inject
    lateinit var preferenceManager: IPreferenceManager

    @Inject
    lateinit var apiManager: IApiManager

    override fun getNavigator(): Navigator = RootNavigator(this, R.id.fragmentContainer)

    override val layoutResId: Int = R.layout.activity_root

    private val dividers by lazy { mutableListOf<View>(homeMenuTab, notificationsMenuTab, offersMenuTab, financesMenuTab, advertiseMenuTab, actionsMenuTab, supportMenuTab, policyMenuTab, inviteMenuTab, profileViewGroup) }

    /**
     * был ли проинициализирован этот View
     */
    private var isScreenInit: Boolean = false


    private var selectedLayout by Delegates.observable(6) { _, oldValue, newValue ->
        if (isScreenInit and (oldValue != newValue)) {
            dividers[oldValue].isSelected = false
            dividers[newValue].isSelected = true
        }
    }

    private var selectedScreen: Screen = HomeScreen()
        set(value) {
            selectTab(value)
        }

    private val isNotification by extraBoolean(IS_NOTIFICATION)
    private val notificationTitle by extraString(NOTIFICATION_TITLE)
    private val notificationText by extraString(NOTIFICATION_TEXT)


    private var locationService: LocationService? = null
    /* lifecycle */

    /**
     * Вызывается после авторизации через гугл аккаунт
     * Здесь проверяем наличие разрешений,
     * запускаем фоновый сервис, меняем вкладку на "Главную"
     * также показываем уведомление если оно есть
     *
     * @param savedInstanceState
     */
    @SuppressLint("MissingPermission")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        router.newRootScreen(HomeScreen())
        isScreenInit = true
        if(!isMyServiceRunning(LocationService::class.java)) {
            checkPermissions({
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                    startForegroundService(Intent(this, LocationService::class.java))
                } else {
                    startService(Intent(this, LocationService::class.java))
                }
                bindService(Intent(this, LocationService::class.java), connectionService, Context.BIND_AUTO_CREATE)
            }, {}, android.Manifest.permission.ACCESS_COARSE_LOCATION, android.Manifest.permission.ACCESS_FINE_LOCATION)
        }
        else {
            bindService(Intent(this, LocationService::class.java), connectionService, Context.BIND_AUTO_CREATE)
        }
        setSelectedTab(0, getString(R.string.home))
        drawerLayout.setScrimColor(ContextCompat.getColor(this, R.color.white_alpha))
        menuButton.setOnClickListener { drawerLayout.openDrawer(GravityCompat.START) }
        closeMenuButton.setOnClickListener { drawerLayout.closeDrawer(GravityCompat.START) }
        /*profileViewGroup.setOnClickListener {
            drawerLayout.closeDrawer(GravityCompat.START)
            profileViewGroup.postDelayed({
                mainTitleTextView.text = getString(R.string.my_profile)
                router.navigateTo(ProfileScreen())
            }, 300)
        }*/
        profileViewGroup.setOnClickListener { setSelectedTab(9, getString(R.string.my_profile)) { router.navigateTo(ProfileScreen()) } }
        homeMenuTab.setOnClickListener { setSelectedTab(0, getString(R.string.home)) { router.navigateTo(HomeScreen()) } }
        notificationsMenuTab.setOnClickListener { setSelectedTab(1, getString(R.string.notifications)) { router.navigateTo(NotificationsScreen()) } }
        offersMenuTab.setOnClickListener { setSelectedTab(2, getString(R.string.offers)) { router.navigateTo(OffersScreen()) } }
        financesMenuTab.setOnClickListener { setSelectedTab(3, getString(R.string.finances)) { router.navigateTo(FinancesScreen()) } }
        advertiseMenuTab.setOnClickListener { setSelectedTab(4, getString(R.string.banners)) { router.navigateTo(BannersScreen()) } }
        actionsMenuTab.setOnClickListener { setSelectedTab(5, getString(R.string.actions)) { router.navigateTo(ActionsScreen()) } }
        supportMenuTab.setOnClickListener { setSelectedTab(6, getString(R.string.support)) { router.navigateTo(SupportScreen()) } }
        inviteMenuTab.setOnClickListener { setSelectedTab(8, getString(R.string.invite_text)) { router.navigateTo(InviteScreen()) } }
        policyMenuTab.setOnClickListener { setSelectedTab(7, getString(R.string.politics_text)) { router.navigateTo(PrivacyScreen()) } }
        logoutMenuTab.setOnClickListener {
            rootPresenter.accountLogout()
        }
        updateAppTextView.setOnClickListener { rootPresenter.checkForUpdates() }
        helpImageView.setOnClickListener {
            showTutorial()
        }
        if (isNotification) {
            router.navigateTo(NotificationScreen(notificationTitle, notificationText))
        }
    }

    /**
     * Вывод AlertDialog с уведомлением перед выходом
     */
    override fun onBackPressed() {
        val fragment = supportFragmentManager.findFragmentById(R.id.fragmentContainer)
        if (fragment != null && fragment?.tag != "HomeFragmentScreen") {
            router.exit()
        } else {
            val alert = Alert.newBuilder()
                    .setTitle(getString(R.string.app_name))
                    .setMessage(getString(R.string.exit_app_on_back))
                    .setDoOnSuccess({
                        router.exit()
                    })
                    .setDoOnCancel({ rootPresenter.hideAlertDialog() })
                    .create()
            rootPresenter.showAlertDialog(alert)
        }
    }

    /**
     * Проверка запусщен ли ForegroundService
     *
     * @param serviceClass в данном случае используется только с LocationService::java.class
     */
    private fun isMyServiceRunning(serviceClass:Class<*>):Boolean {
        val manager = getSystemService(Context.ACTIVITY_SERVICE) as ActivityManager
        for (service in manager.getRunningServices(Integer.MAX_VALUE))
        {
            if (serviceClass.getName() == service.service.getClassName())
            {
                Log.i("Service status", "Running")
                return true
            }
        }
        Log.i("Service status", "Not running")
        return false
    }

    /**
     * Закрытие приложения с проверкой на существование сервиса и статус трекинга
     */
    override fun onDestroy() {
        if (locationService != null) {
            if(!getService()?.isTrackerOn!!) {
                locationService?.stopAdvertising()
                stopService(Intent(this, LocationService::class.java))
            }
            unbindService(connectionService)
        }
        super.onDestroy()
    }

    /* public methods */

    /**
     * Получение LocationService (unsafe!)
     */

    override fun getService(): LocationService? = locationService

    /**
     * Переход на экран авторизации после выхода с аккаунта
     */
    override fun onLoggedOut() {
        router.newRootScreen(AuthScreen())
    }

    /**
     * Обновление профиля
     *
     * @param name имя аккаунта
     * @param surname фамилия аккаунта
     * @param imageFile файл аватара
     */
    override fun onProfileUpdated(name: String, surname: String, imageFile: File?) {
        if (preferenceManager.avatarUrl != null) {
            menuAvatarImageView.loadRoundedAvatar(url = preferenceManager.avatarUrl)
        } else {
            menuAvatarImageView.loadAvatarFile(file = imageFile)
        }
        menuNameTextView.text = String.format(getString(R.string.full_name), name, surname)
    }

    /**
     * Смена вкладки
     *
     * @param number ID вкладки
     */
    override fun changeTab(number: Int) {
        when (number) {
            0 -> homeMenuTab.setOnClickListener { setSelectedTab(0, getString(R.string.home)) { router.navigateTo(HomeScreen()) } }
            1 -> notificationsMenuTab.setOnClickListener { setSelectedTab(1, getString(R.string.notifications)) { router.navigateTo(NotificationsScreen()) } }
            2 -> offersMenuTab.setOnClickListener { setSelectedTab(2, getString(R.string.offers)) { router.navigateTo(OffersScreen()) } }
            3 -> financesMenuTab.setOnClickListener { setSelectedTab(3, getString(R.string.finances)) { router.navigateTo(FinancesScreen()) } }
            4 -> advertiseMenuTab.setOnClickListener { setSelectedTab(4, getString(R.string.banners)) { router.navigateTo(BannersScreen()) } }
            5 -> actionsMenuTab.setOnClickListener { setSelectedTab(5, getString(R.string.actions)) { router.navigateTo(ActionsScreen()) } }
            6 -> supportMenuTab.setOnClickListener { setSelectedTab(6, getString(R.string.support)) { router.navigateTo(SupportScreen()) } }
            7 -> policyMenuTab.setOnClickListener { setSelectedTab(7, getString(R.string.politics_text)) { router.navigateTo(PrivacyScreen()) } }
            8 -> inviteMenuTab.setOnClickListener { setSelectedTab(8, getString(R.string.invite_text)) { router.navigateTo(InviteScreen()) } }
            9 -> profileViewGroup.setOnClickListener { setSelectedTab(9, getString(R.string.my_profile)) { router.navigateTo(ProfileScreen()) } }
        }
    }

    /**
     * Вызывается после просмотра уведомлений с вкладок
     *
     * @param counterType один из AppConstants
     */
    override fun counterSeen(counterType: String?) {
        when (counterType) {
            AppConstants.NOTIFICATIONS -> setBadgeSeen(notificationsBadgeTextView)
            AppConstants.CAMPAIGNS -> setBadgeSeen(offersBadgeTextView)
            AppConstants.FINANCES -> setBadgeSeen(financesBadgeTextView)
            AppConstants.BANNERS -> setBadgeSeen(advertiseBadgeTextView)
            AppConstants.ACTIONS -> setBadgeSeen(actionsBadgeTextView)
            AppConstants.SUPPORT -> setBadgeSeen(supportBadgeTextView)
        }
    }

    /**
     * Ставим нужное кол-во в Badge
     *
     * @param counters
     */
    override fun onBadgesLoaded(counters: Counters?) {
        setBadgeUnseen(notificationsBadgeTextView, counters?.notifications)
        setBadgeUnseen(offersBadgeTextView, counters?.campaigns)
        setBadgeUnseen(financesBadgeTextView, counters?.payouts)
        setBadgeUnseen(advertiseBadgeTextView, counters?.banners)
        setBadgeUnseen(actionsBadgeTextView, counters?.promotions)
        setBadgeUnseen(supportBadgeTextView, counters?.tickets)
    }

    /**
     * После загрузки профиля с API
     *
     * @param user
     */
    override fun onProfileLoaded(user: User?) {
        menuNameTextView.text = String.format(getString(R.string.full_name),
                user?.name ?: "", user?.surname ?: "")
        if (preferenceManager.avatarUrl != null) {
            menuAvatarImageView.loadRoundedAvatar(url = preferenceManager.avatarUrl)
        } else {
            menuAvatarImageView.loadRoundedAvatar(url = user?.avatar)
        }
        if (user != null) {
            if(!user.isEulaAccepted) {
                //router.navigateTo(PrivacyDialogScreen())
            } else {
                val isValidProfile = validateName(user.name) and validateSurname(user.surname) and
                        validateEmail(user.email) and validateCity(user.city) and validatePhone(user.phone) and
                        validateCar(user.car)
                if (!isValidProfile) {
                    val alert = Alert.newBuilder()
                    alert.setTitle(getString(R.string.app_name))
                    alert.setMessage("Заполните обязательные поля в профиле!")
                    alert.setCancelable(false)
                    alert.setDoOnSuccess({
                        router.navigateTo(ProfileScreen())
                    }, "Перейти")
                    rootPresenter.showAlertDialog(alert.create())
                }
            }
        }


    }

    /**
     * Проверка на наличие новой версии
     *
     * @param hasUpdate
     */
    override fun onUpdatesChecked(hasUpdate: Boolean) {
        val alert = Alert.newBuilder()
        alert.setTitle(getString(R.string.app_name))
        alert.setMessage(getString(if (hasUpdate) R.string.update_available else R.string.no_update))
        if (hasUpdate) {
            alert.setDoOnError {
                startActivity(Intent(Intent.ACTION_VIEW, Uri.parse("")))
            }
        }
        rootPresenter.showAlertDialog(alert.create())
    }

    override fun updateCounters() {
        rootPresenter.getBadges()
    }

    /**
     * Смена текущего экрана
     *
     * @param screen
     */
    override fun setCurrentScreen(screen: Screen) {
        selectedScreen = screen
    }


    /* private functions */

    private fun setBadgeSeen(textView: TextView) {
        textView.apply {
            text = getString(R.string.zero)
            updateVisibility(false)
        }
    }

    private fun setBadgeUnseen(textView: TextView, counter: Int?) {
        if (counter ?: 0 > 0) {
            textView.apply {
                text = "$counter"
                updateVisibility(true)
            }
        }
    }

    private fun selectTab(screen: Screen) {
        when (screen) {
            is HomeScreen -> setSelectedTab(0, getString(R.string.home))
            is NotificationsScreen, is NotificationInfoScreen -> setSelectedTab(1, getString(R.string.notifications))
            is OffersScreen -> setSelectedTab(2, getString(R.string.offers))
            is FinancesScreen -> setSelectedTab(3, getString(R.string.finances))
            is BannersScreen -> setSelectedTab(4, getString(R.string.banners))
            is ActionsScreen -> setSelectedTab(5, getString(R.string.actions))
            is SupportScreen, is TicketChatScreen -> setSelectedTab(6, getString(R.string.support))
            is PrivacyScreen -> setSelectedTab(7, getString(R.string.politics_text))
            is InviteScreen -> setSelectedTab(8, getString(R.string.invite_text))
            is ProfileScreen -> setSelectedTab(9, getString(R.string.my_profile))
        }
    }

    private fun showTutorial() {
        drawerLayout.closeDrawer(GravityCompat.START)
        router.navigateTo(OnboardingScreen(true))
    }

    private fun setSelectedTab(layout: Int, title: String, route: (() -> Unit)? = {}) {
        drawerLayout.closeDrawer(GravityCompat.START)
        Handler().postDelayed({
            route?.invoke()
            selectedLayout = layout
            mainTitleTextView.text = title
        }, 300)
    }


    /* callbacks */

    private val connectionService: ServiceConnection = object : ServiceConnection {
        override fun onServiceConnected(name: ComponentName?, service: IBinder?) {
            locationService = (service as LocationService.LocationBinder).getLocationService()
        }

        override fun onServiceDisconnected(name: ComponentName?) {
            locationService = null
        }
    }

    private fun validateCar(car: String?): Boolean = !TextUtils.isEmpty(car)

    private fun validateCity(city: String?): Boolean = !TextUtils.isEmpty(city)

    private fun validateBank(bankName: String?): Boolean = !TextUtils.isEmpty(bankName)

    private fun validateCardNumber(cardNumber: String?): Boolean = !TextUtils.isEmpty(cardNumber)

    private fun validateEmail(email: String?): Boolean = !TextUtils.isEmpty(email)

    private fun validatePhone(phone: String?): Boolean = !TextUtils.isEmpty(phone)

    private fun validateLogin(login: String?): Boolean = !TextUtils.isEmpty(login)

    private fun validateSurname(surname: String?): Boolean = !TextUtils.isEmpty(surname)

    private fun validateName(name: String?): Boolean = !TextUtils.isEmpty(name)
}