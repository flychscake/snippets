package com.gertz.reclameclient.autobanners.domain.interactors.impl

import com.gertz.reclameclient.autobanners.data.api.request.PhotoRequest
import com.gertz.reclameclient.autobanners.data.api.request.ReferralRequest
import com.gertz.reclameclient.autobanners.data.api.request.UserUpdateRequest
import com.gertz.reclameclient.autobanners.data.entity.User
import com.gertz.reclameclient.autobanners.data.manager.IApiManager
import com.gertz.reclameclient.autobanners.data.manager.IPreferenceManager
import com.gertz.reclameclient.autobanners.domain.interactors.IProfileInteractor
import io.reactivex.Completable
import io.reactivex.Observable
import io.reactivex.Single
import okhttp3.ResponseBody
import javax.inject.Inject

/**
 * Профиль пользователя
 *
 * @property apiManager
 * @property preferenceManager
 */
class ProfileInteractor @Inject constructor(
        private val apiManager: IApiManager,
        private val preferenceManager: IPreferenceManager
) : IProfileInteractor {

    /**
     * Получаем профиль пользователя
     *
     * @return
     */
    override fun getUserInfo(): Single<User?> {
        return apiManager.getUserInfo(preferenceManager.accessToken).map {
            preferenceManager.user = it.user
            it.user
        }
    }

    /**
     * Deprecated
     *
     * @param photo
     * @param windowWidth
     * @param windowHeight
     * @return
     */
    override fun sendCarPhoto(photo: String?, windowWidth: String, windowHeight: String): Single<ResponseBody> {
        return apiManager.sendCarPhoto(PhotoRequest(preferenceManager.accessToken, photo, windowWidth, windowHeight))
    }

    /**
     * Отправка введенных данных пользователя
     *
     * @param name Имя
     * @param surname Фамилия
     * @param email email
     * @param avatar url фото пользователя
     * @param phone Номер Телефона
     * @param city Город
     * @param car Марка Машины
     * @param fopName
     * @param account
     * @param kgr
     * @param mfo
     * @param egrpu
     * @param isFop
     * @return
     */
    override fun updateUser(name: String?, surname: String?, email: String?, avatar: String?,
                            phone: String?, city: String?,
                            car: String?,
                            fopName: String?, account: String?, kgr: String?, mfo: String?, egrpu: String?, isFop: Boolean?): Completable {
        return apiManager.updateUser(UserUpdateRequest(preferenceManager.accessToken, name = name, surname = surname, email = email, avatar = avatar,
                phone = phone, city = city, car = car, fopName = fopName, fopAccount = account,
                fopKgr = kgr, fopMfo = mfo, fopEdrp = egrpu, isFop = isFop))
    }

    /**
     * Подтверждение заполнения профиля после принятия инвайта
     *
     * @param invitedUser
     * @param refferedUser
     * @return
     */
    override fun sendInviteApproval(invitedUser: Int?, refferedUser: Int?): Completable {
        return apiManager.sendInviteApproval(preferenceManager.accessToken, ReferralRequest(invitedUser, refferedUser))
    }

    /**
     * Отправка фото + размеров
     *
     * @param photos Список с фото в base64
     * @param windowWidth
     * @param windowHeight
     * @return
     */
    override fun sendCarPhotos(photos: MutableList<String>, windowWidth: String, windowHeight: String): Single<MutableList<ResponseBody>> {
        return Observable.fromIterable(photos).flatMap { photo ->
            sendCarPhoto(photo, windowWidth, windowHeight).toObservable()
        }.toList()
    }
}