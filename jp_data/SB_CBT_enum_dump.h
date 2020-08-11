enum class EImpactDamageOverride {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3
};

enum class ENiagaraAgeUpdateMode {
	TickDeltaTime = 0,
	DesiredAge = 1
};

enum class ENiagaraCollisionMode {
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3
};

enum class ENiagaraDataSetType {
	ParticleData = 0,
	Shared = 1,
	Event = 2
};

enum class ENiagaraInputNodeUsage {
	Undefined = 0,
	Parameter = 1,
	Attribute = 2,
	SystemConstant = 3,
	TranslatorConstant = 4,
	RapidIterationParameter = 5
};

enum class ENiagaraScriptCompileStatus {
	NCS_Unknown = 0,
	NCS_Dirty = 1,
	NCS_Error = 2,
	NCS_UpToDate = 3,
	NCS_BeingCreated = 4,
	NCS_UpToDateWithWarnings = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX = 7
};

enum class ENiagaraScriptGroup {
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3
};

enum class ENiagaraScriptUsage {
	Function = 0,
	Module = 1,
	DynamicInput = 2,
	ParticleSpawnScript = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript = 5,
	ParticleEventScript = 6,
	ParticleGPUComputeScript = 7,
	EmitterSpawnScript = 8,
	EmitterUpdateScript = 9,
	SystemSpawnScript = 10,
	SystemUpdateScript = 11
};

enum class ENiagaraSimTarget {
	CPUSim = 0,
	GPUComputeSim = 1
};

enum class ENDISkeletalMesh_SkinningMode {
	None = 0,
	SkinOnTheFly = 1,
	PreSkin = 2
};

enum class ENiagaraMeshFacingMode {
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3
};

enum class ENiagaraSortMode {
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4
};

enum class EScriptExecutionMode {
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2
};

enum class ENiagaraModuleDependencyScriptConstraint {
	SameScript = 0,
	AllScripts = 1
};

enum class ENiagaraModuleDependencyType {
	PreDependency = 0,
	PostDependency = 1
};

enum class ENiagaraPreviewGridResetMode {
	Never = 0,
	Individual = 1,
	All = 2
};

enum class ENiagaraRibbonAgeOffsetMode {
	Scale = 0,
	Clip = 1
};

enum class ENiagaraRibbonDrawDirection {
	FrontToBack = 0,
	BackToFront = 1
};

enum class ENiagaraRibbonFacingMode {
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2
};

enum class ENiagaraRibbonTessellationMode {
	Automatic = 0,
	Custom = 1,
	Disabled = 2
};

enum class ENiagaraSpriteAlignment {
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2
};

enum class ENiagaraSpriteFacingMode {
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4
};

enum class EUnusedAttributeBehaviour {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4
};

enum class ENiagaraExecutionState {
	Active = 0,
	Inactive = 1,
	InactiveClear = 2,
	Complete = 3,
	Disabled = 4,
	Num = 5
};

enum class ENiagaraExecutionStateSource {
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3
};

enum class ENiagaraNumericOutputTypeSelectionMode {
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3
};

enum class FNiagaraCompileEventSeverity {
	Log = 0,
	Warning = 1,
	Error = 2
};

enum class ECompPassConstructionType {
	Unknown = 0,
	EditorConstructed = 1,
	BlueprintConstructed = 2,
	CodeConstructed = 3
};

enum class EExrCompressionOptions {
	Compressed = 0,
	Uncompressed = 1
};

enum class EInheritedSourceType {
	Inherited = 0,
	Override = 1
};

enum class EParamType {
	UnknownParamType = 0,
	ScalarParam = 1,
	VectorParam = 2,
	TextureParam = 3,
	MediaTextureParam = 4
};

enum class ESceneCameraLinkType {
	Inherited = 0,
	Override = 1,
	Unused = 2
};

enum class ETargetUsageFlags {
	USAGE_None = 0,
	USAGE_Input = 1,
	USAGE_Transform = 2,
	USAGE_Output = 4,
	USAGE_Persistent = 32,
	USAGE_Intermediate0 = 8,
	USAGE_Intermediate1 = 16,
};

enum class EFileMediaOutputPixelFormat {
	B8G8R8A8 = 0,
	FloatRGBA = 1
};

enum class EMediaCaptureCroppingType {
	None = 0,
	Center = 1,
	TopLeft = 2,
	Custom = 3
};

enum class EMediaCaptureState {
	Error = 0,
	Capturing = 1,
	Preparing = 2,
	StopRequested = 3,
	Stopped = 4
};

enum class EMediaIOInputType {
	Fill = 0,
	FillAndKey = 1
};

enum class EMediaIOOutputType {
	Fill = 0,
	FillAndKey = 1
};

enum class EMediaIOQuadLinkTransportType {
	SquareDivision = 0,
	TwoSampleInterleave = 1
};

enum class EMediaIOReferenceType {
	FreeRun = 0,
	External = 1,
	Input = 2
};

enum class EMediaIOStandardType {
	Progressive = 0,
	Interlaced = 1,
	ProgressiveSegmentedFrame = 2
};

enum class EMediaIOTimecodeFormat {
	None = 0,
	LTC = 1,
	VITC = 2
};

enum class EMediaIOTransportType {
	SingleLink = 0,
	DualLink = 1,
	QuadLink = 2,
	HDMI = 3
};

enum class EASAlphaBlendOption {
	Linear = 0,
	Cubic = 1,
	HermiteCubic = 2,
	Sinusoidal = 3,
	QuadraticInOut = 4,
	CubicInOut = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	Custom = 14,
	Inertial = 15
};

enum class EASEasing {
	Step = 0,
	Linear = 1,
	Cubic = 2
};

enum class EASSMStateType {
	Sequence = 1,
	BlendSpace = 2,
	AimOffset = 3,
	StateMachine = 4
	Slot = 5,
};

enum class EASSMTransitionType {
	None = 0,
	Default = 1,
	EventDriven = 2
};

enum class EAnimCommandState {
	ACS_Failed = 0,
	ACS_Precede = 1,
	ASC_Just = 2
};

enum class ENextStateType {
	NST_Invalid = 0,
	NST_Sequence = 1,
	NST_BlendSpace = 2,
	NST_StateMachine = 3,
	NST_Conduit = 4,
	NST_Terminate = 5,
	NST_Through = 6,
	NST_Slot = 7
};

enum class ETransitionRule {
	TR_PlayEnd = 0,
	TR_Command = 1,
	TR_MovementMode = 2,
	TR_Blueprint = 3,
	TR_Custom = 4
};

enum class EAIFwBTStatus {
	Invalid = 0,
	Success = 1,
	Failure = 2,
	Running = 3
};

enum class EAIFwFocusPriority {
	Default = 0,
	Gameplay = 1
};

enum class EAIFwPTRunMode {
	Best = 0,
	Random = 1,
	All = 2
};

enum class EAIFwBTParamType {
	Bool = 0,
	Int = 1,
	Float = 2,
	String = 3,
	Unknown = 255,
};

enum class EAIFwPTEvalPathfindingMode {
	Exist = 0,
	Cost = 1,
	Length = 2
};

enum class EPTCriterionSlot {
	Slot1 = 0,
	Slot2 = 1,
	Slot3 = 2,
	Slot4 = 3
};

enum class EPTEvalOperation {
	Constant = 0,
	Linear = 1,
	InverseLinear = 2
};

enum class EPTEvalScoreType {
	Min = 0,
	Max = 1,
	Average = 2
};

enum class EUtilityBiasCooldownType {
	Step = 0,
	Linear = 1
};

enum class EUtilityEvaluateType {
	Linear = 0,
	Square = 1,
	Cube = 2,
	SquareRoot = 3,
	Cos = 4,
	Sigmoid = 5
};

enum class EUtilitySelectionMode {
	Priority = 0,
	Probability = 1
};

enum class ECGAICautionMode {
	Stop = 0,
	Growing = 1,
	Decay = 2
};

enum class ECharaPartsAccessoryLocation {
	None = 0,
	Head = 1,
	R_IndexFinger = 2,
	L_RingFinger = 3,
	BodyBack = 4,
	HipBack = 5,
	HandR = 6,
	HandL = 7,
	SheathBackCommon = 8,
	SheathFlute = 9,
	SheathSpine1RightDown = 10,
	SheathSpine1LeftDown = 11,
	SheathSpine1RightUp = 12,
	SheathSpine1LeftUp = 13,
	SheathQuiver = 14,
	MAX = 15
};

enum class ECharaPartsBody {
	C000 = 0,
	M000 = 1,
	M100 = 2,
	M200 = 3,
	M300 = 4,
	M400 = 5,
	M500 = 6,
	F000 = 7,
	F100 = 8,
	F200 = 9,
	F300 = 10,
	F400 = 11,
	F500 = 12,
	MAX = 13
};

enum class ECharaPartsCharacterType {
	Player = 0,
	Npc = 1,
	Mob = 2,
	FacialMob = 3,
	Enemy = 4,
	ShadowAvator = 5,
	MAX = 6
};

enum class ECharaPartsCharacterTypeIdentifier {
	Creation = 0,
	Npc = 1,
	Mob = 2
};

enum class ECharaPartsCostumeColor {
	Default = 0,
	Red = 1,
	Orange = 2,
	Yellow = 3,
	YellowGreen = 4,
	Green = 5,
	LightBlue = 6,
	Blue = 7,
	Violet = 8,
	Purple = 9,
	RedPurple = 10,
	Black = 11,
	White = 12,
	PureWhite = 13,
	MAX = 14
};

enum class ECharaPartsCrtBone {
	None = 0,
	CRT_L_Arm_UPPER = 1,
	CRT_L_ForeArm_UPPER1 = 2,
	CRT_L_ForeArm_UPPER2 = 3,
	CRT_L_ForeArm_UPPER3 = 4,
	CRT_Hip_Upper = 5,
	CRT_L_UpLeg_LOWER1 = 6,
	CRT_L_UpLeg_LOWER2 = 7,
	CRT_L_Leg_LOWER1 = 8,
	CRT_L_Leg_LOWER2 = 9,
	CRT_Hip_Lower = 10,
	MAX = 11
};

enum class ECharaPartsCrtLocation {
	None = 0,
	ARM = 1,
	LEG = 2,
	HIP = 3,
	MAX = 4
};

enum class ECharaPartsFaceType {
	Nomal = 0,
	Machismo = 1,
	Young = 2,
	MAX = 3
};

enum class ECharaPartsLocation {
	Face = 0,
	Face_Hair = 1,
	Full_Head = 2,
	Gloves = 3,
	Hair = 4,
	Hat = 5,
	Lower = 6,
	Upper = 7,
	Shoes = 8,
	Eye = 9,
	Mouth = 10,
	Brow = 11,
	Nose = 12,
	Line = 13,
	Beard = 14,
	Body = 15,
	Hair_Hat = 16,
	Accessory = 17,
	Accessory1 = 17,
	Accessory2 = 18,
	Accessory3 = 19,
	BackOfHead = 20,
	MAX = 21,
};

enum class ECharaPartsLocationIdentifier {
	_fac_ = 0,
	_fah_ = 1,
	_hef_ = 2,
	_glv_ = 3,
	_har_ = 4,
	_hat_ = 5,
	_bdl_ = 6,
	_bdu_ = 7,
	_sho_ = 8,
	_eye_ = 9,
	_mou_ = 10,
	_brw_ = 11,
	_nos_ = 12,
	_lin_ = 13,
	_bea_ = 14,
	_sta = 15,
	_har_h_ = 16,
	_acc_ = 17
};

enum class ECharaPartsSubLocation {
	Hat = 0,
	Upper = 1,
	Lower = 2,
	Gloves = 3,
	Shoes = 4,
	Hair = 5,
	Face = 6,
	Eye = 7,
	Mouth = 8,
	Brow = 9,
	Nose = 10,
	Line = 11,
	Beard = 12,
	BackOfHead = 13,
	MAX = 14
};

enum class EPlanarConstraint {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3
};

enum class EDatasmithAreaLightActorShape {
	Rectangle = 0,
	Disc = 1,
	Sphere = 2,
	Cylinder = 3,
	None = 4
};

enum class EDatasmithAreaLightActorType {
	Point = 0,
	Spot = 1,
	Rect = 2
};

enum class EDatasmithCADStitchingTechnique {
	StitchingNone = 0,
	StitchingHeal = 1,
	StitchingSew = 2
};

enum class EDatasmithImportActorPolicy {
	Update = 0,
	Full = 1,
	Ignore = 2
};

enum class EDatasmithImportAssetConflictPolicy {
	Replace = 0,
	Update = 1,
	Use = 2,
	Ignore = 3
};

enum class EDatasmithImportHierarchy {
	UseMultipleActors = 0,
	UseSingleActor = 1,
	UseOneBlueprint = 2
};

enum class EDatasmithImportLightmapMax {
	LIGHTMAP_64 = 0,
	LIGHTMAP_128 = 1,
	LIGHTMAP_256 = 2,
	LIGHTMAP_512 = 3,
	LIGHTMAP_1024 = 4,
	LIGHTMAP_2048 = 5,
	LIGHTMAP_4096 = 6
};

enum class EDatasmithImportLightmapMin {
	LIGHTMAP_16 = 0,
	LIGHTMAP_32 = 1,
	LIGHTMAP_64 = 2,
	LIGHTMAP_128 = 3,
	LIGHTMAP_256 = 4,
	LIGHTMAP_512 = 5
};

enum class EDatasmithImportMaterialQuality {
	UseNoFresnelCurves = 0,
	UseSimplifierFresnelCurves = 1,
	UseRealFresnelCurves = 2
};

enum class EDatasmithImportScene {
	NewLevel = 0,
	CurrentLevel = 1,
	AssetsOnly = 2
};

enum class EDatasmithImportSearchPackagePolicy {
	Current = 0,
	All = 1
};

enum class EVREDDataTableType {
	NotDatatable = 0,
	AnimClips = 1,
	AnimNodes = 2
};

enum class EPropertyValueCategory {
	Undefined = 0,
	Generic = 1,
	RelativeLocation = 2,
	RelativeRotation = 4,
	RelativeScale3D = 8,
	bVisible = 16,
	Material = 32,
	Color = 64,
};

enum class EActorSequenceObjectReferenceType {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2
};

enum class EInAppPurchaseState {
	Unknown = 0,
	Success = 1,
	Failed = 2,
	Cancelled = 3,
	Invalid = 4,
	NotAllowed = 5,
	Restored = 6,
	AlreadyOwned = 7
};

enum class EMPMatchOutcome {
	None = 0,
	Quit = 1,
	Won = 2,
	Lost = 3,
	Tied = 4,
	TimeExpired = 5,
	First = 6,
	Second = 7,
	Third = 8,
	Fourth = 9
};

enum class EBeaconConnectionState {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3
};

enum class EClientRequestType {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5
};

enum class EPartyReservationResult {
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	PartyLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15
};

enum class ESpectatorClientRequestType {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5
};

enum class ESpectatorReservationResult {
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	SpectatorLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15
};

enum class EInsetPolygonsMode {
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2
};

enum class ETriangleTessellationMode {
	ThreeTriangles = 0,
	FourTriangles = 1
};

enum class EMeshElementAttributeType {
	None = 0,
	FVector4 = 1,
	FVector = 2,
	FVector2D = 3,
	Float = 4,
	Int = 5,
	Bool = 6,
	FName = 7
};

enum class EMeshModificationType {
	FirstInterim = 0,
	Interim = 1,
	Final = 2
};

enum class EMeshTopologyChange {
	NoTopologyChange = 0,
	TopologyChange = 1
};

enum class EPolygonEdgeHardness {
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3
};

enum class EVehicleDifferential4W {
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5
};

enum class EWheelSweepType {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2
};

enum class EProcMeshSliceCapOption {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2
};

enum class EReflectionFilterBits {
	Wall = 0,
	Ceiling = 1,
	Floor = 2
};

enum class AkAcousticPortalState {
	Closed = 0,
	Open = 1
};

enum class AkActionOnEventType {
	Stop = 0,
	Pause = 1,
	Resume = 2,
	Break = 3,
	ReleaseEnvelope = 4
};

enum class AkChannelConfiguration {
	Ak_Parent = 0,
	Ak_LFE = 1,
	Ak_1_0 = 2,
	Ak_2_0 = 3,
	Ak_2_1 = 4,
	Ak_3_0 = 5,
	Ak_3_1 = 6,
	Ak_4_0 = 7,
	Ak_4_1 = 8,
	Ak_5_0 = 9,
	Ak_5_1 = 10,
	Ak_7_1 = 11,
	Ak_5_1_2 = 12,
	Ak_7_1_2 = 13,
	Ak_7_1_4 = 14,
	Ak_Auro_9_1 = 15,
	Ak_Auro_10_1 = 16,
	Ak_Auro_11_1 = 17,
	Ak_Auro_13_1 = 18,
	Ak_Ambisonics_1st_order = 19,
	Ak_Ambisonics_2nd_order = 20,
	Ak_Ambisonics_3rd_order = 21
};

enum class AkCodecId {
	Bank = 0,
	PCM = 1,
	ADPCM = 2,
	XMA = 3,
	Vorbis = 4,
	WiiADPCM = 5,
	PCMEX = 7,
	ExternalSource = 8,
	XWMA = 9,
	AAC = 10,
	FilePackage = 11,
	ATRAC9 = 12,
	VAG = 13,
	ProfilerCapture = 14,
	AnalysisFile = 15,
	MIDI = 16,
	OpusNX = 17,
	CAF = 18
	AkOpus = 19,
};

enum class AkMultiPositionType {
	SingleSource = 0,
	MultiSources = 1,
	MultiDirections = 2
};

enum class AkSpeakerConfiguration {
	Ak_Speaker_Front_Left = 1,
	Ak_Speaker_Front_Right = 2,
	Ak_Speaker_Front_Center = 4,
	Ak_Speaker_Low_Frequency = 8,
	Ak_Speaker_Back_Left = 16,
	Ak_Speaker_Back_Right = 32,
	Ak_Speaker_Back_Center = 256,
	Ak_Speaker_Side_Left = 512,
	Ak_Speaker_Side_Right = 1024,
	Ak_Speaker_Top = 2048,
	Ak_Speaker_Height_Front_Left = 4096,
	Ak_Speaker_Height_Front_Center = 8192,
	Ak_Speaker_Height_Front_Right = 16384,
	Ak_Speaker_Height_Back_Left = 32768,
	Ak_Speaker_Height_Back_Center = 65536,
	Ak_Speaker_Height_Back_Right = 131072,
};

enum class EAkAudioSessionCategory {
	Ambient = 0,
	SoloAmbient = 1,
	PlayAndRecord = 2
};

enum class EAkAudioSessionCategoryOptions {
	MixWithOthers = 0,
	DuckOthers = 1,
	AllowBluetooth = 2,
	DefaultToSpeaker = 3
};

enum class EAkAudioSessionMode {
	Default = 0,
	VoiceChat = 1,
	GameChat = 2,
	VideoRecording = 3,
	Measurement = 4,
	MoviePlayback = 5,
	VideoChat = 6
};

enum class EAkCallbackType {
	EndOfEvent = 0,
	Marker = 2,
	Duration = 3,
	Starvation = 5,
	MusicPlayStarted = 7,
	MusicSyncBeat = 8,
	MusicSyncBar = 9,
	MusicSyncEntry = 10,
	MusicSyncExit = 11,
	MusicSyncGrid = 12
	MusicSyncUserCue = 13,
	MusicSyncPoint = 14,
	MIDIEvent = 16,
};

enum class EAkChannelConfigType {
	Anonymous = 0,
	Standard = 1,
	Ambisonic = 2
};

enum class EAkChannelMask {
	FrontLeft = 0,
	FrontRight = 1,
	FrontCenter = 2,
	LowFrequency = 3,
	BackLeft = 4,
	BackRight = 5,
	BackCenter = 8,
	SideLeft = 9,
	SideRight = 10,
	Top = 11,
	HeightFrontLeft = 12,
	HeightFrontCenter = 13,
	HeightFrontRight = 14,
	HeightBackLeft = 15
	HeightBackCenter = 16,
	HeightBackRight = 17,
};

enum class EAkCurveInterpolation {
	Log3 = 0,
	Sine = 1,
	Log1 = 2,
	InvSCurve = 3,
	Linear = 4,
	SCurve = 5,
	Exp1 = 6,
	SineRecip = 7,
	Exp3 = 8,
	LastFadeCurve = 8,
	Constant = 9,
};

enum class EAkDiffractionFlags {
	UseBuiltInParam = 0,
	UseObstruction = 1,
	CalcEmitterVirtualPosition = 3,
};

enum class EAkMidiCcValues {
	AkMidiCcBankSelectCoarse = 0,
	AkMidiCcModWheelCoarse = 1,
	AkMidiCcBreathCtrlCoarse = 2,
	AkMidiCcCtrl3Coarse = 3,
	AkMidiCcFootPedalCoarse = 4,
	AkMidiCcPortamentoCoarse = 5,
	AkMidiCcDataEntryCoarse = 6,
	AkMidiCcVolumeCoarse = 7,
	AkMidiCcBalanceCoarse = 8,
	AkMidiCcCtrl9Coarse = 9,
	AkMidiCcPanPositionCoarse = 10,
	AkMidiCcExpressionCoarse = 11,
	AkMidiCcEffectCtrl1Coarse = 12,
	AkMidiCcEffectCtrl2Coarse = 13,
	AkMidiCcCtrl14Coarse = 14,
	AkMidiCcCtrl15Coarse = 15,
	AkMidiCcGenSlider1 = 16,
	AkMidiCcGenSlider2 = 17,
	AkMidiCcGenSlider3 = 18,
	AkMidiCcGenSlider4 = 19,
	AkMidiCcCtrl20Coarse = 20,
	AkMidiCcCtrl21Coarse = 21,
	AkMidiCcCtrl22Coarse = 22,
	AkMidiCcCtrl23Coarse = 23,
	AkMidiCcCtrl24Coarse = 24,
	AkMidiCcCtrl25Coarse = 25,
	AkMidiCcCtrl26Coarse = 26,
	AkMidiCcCtrl27Coarse = 27,
	AkMidiCcCtrl28Coarse = 28,
	AkMidiCcCtrl29Coarse = 29,
	AkMidiCcCtrl30Coarse = 30,
	AkMidiCcCtrl31Coarse = 31,
	AkMidiCcBankSelectFine = 32,
	AkMidiCcModWheelFine = 33,
	AkMidiCcBreathCtrlFine = 34,
	AkMidiCcCtrl3Fine = 35,
	AkMidiCcFootPedalFine = 36,
	AkMidiCcPortamentoFine = 37,
	AkMidiCcDataEntryFine = 38,
	AkMidiCcVolumeFine = 39,
	AkMidiCcBalanceFine = 40,
	AkMidiCcCtrl9Fine = 41,
	AkMidiCcPanPositionFine = 42,
	AkMidiCcExpressionFine = 43,
	AkMidiCcEffectCtrl1Fine = 44,
	AkMidiCcEffectCtrl2Fine = 45,
	AkMidiCcCtrl14Fine = 46,
	AkMidiCcCtrl15Fine = 47,
	AkMidiCcCtrl20Fine = 52,
	AkMidiCcCtrl21Fine = 53,
	AkMidiCcCtrl22Fine = 54,
	AkMidiCcCtrl23Fine = 55,
	AkMidiCcCtrl24Fine = 56,
	AkMidiCcCtrl25Fine = 57,
	AkMidiCcCtrl26Fine = 58,
	AkMidiCcCtrl27Fine = 59,
	AkMidiCcCtrl28Fine = 60,
	AkMidiCcCtrl29Fine = 61,
	AkMidiCcCtrl30Fine = 62,
	AkMidiCcCtrl31Fine = 63,
	AkMidiCcHoldPedal = 64,
	AkMidiCcPortamentoOnOff = 65,
	AkMidiCcSustenutoPedal = 66,
	AkMidiCcSoftPedal = 67,
	AkMidiCcLegatoPedal = 68,
	AkMidiCcHoldPedal2 = 69,
	AkMidiCcSoundVariation = 70,
	AkMidiCcSoundTimbre = 71,
	AkMidiCcSoundReleaseTime = 72,
	AkMidiCcSoundAttackTime = 73,
	AkMidiCcSoundBrightness = 74,
	AkMidiCcSoundCtrl6 = 75,
	AkMidiCcSoundCtrl7 = 76,
	AkMidiCcSoundCtrl8 = 77,
	AkMidiCcSoundCtrl9 = 78,
	AkMidiCcSoundCtrl10 = 79,
	AkMidiCcGeneralButton1 = 80,
	AkMidiCcGeneralButton2 = 81,
	AkMidiCcGeneralButton3 = 82,
	AkMidiCcGeneralButton4 = 83,
	AkMidiCcReverbLevel = 91,
	AkMidiCcTremoloLevel = 92,
	AkMidiCcChorusLevel = 93,
	AkMidiCcCelesteLevel = 94,
	AkMidiCcPhaserLevel = 95,
	AkMidiCcDataButtonP1 = 96
	AkMidiCcDataButtonM1 = 97,
	AkMidiCcNonRegisterCoarse = 98,
	AkMidiCcNonRegisterFine = 99,
	AkMidiCcAllSoundOff = 120,
	AkMidiCcAllControllersOff = 121,
	AkMidiCcLocalKeyboard = 122,
	AkMidiCcAllNotesOff = 123,
	AkMidiCcOmniModeOff = 124,
	AkMidiCcOmniModeOn = 125,
	AkMidiCcOmniMonophonicOn = 126,
	AkMidiCcOmniPolyphonicOn = 127,
};

enum class EAkMidiEventType {
	AkMidiEventTypeInvalid = 0,
	AkMidiEventTypeNoteOff = 128,
	AkMidiEventTypeNoteOn = 144,
	AkMidiEventTypeNoteAftertouch = 160,
	AkMidiEventTypeController = 176,
	AkMidiEventTypeProgramChange = 192,
	AkMidiEventTypeChannelAftertouch = 208,
	AkMidiEventTypePitchBend = 224,
	AkMidiEventTypeSysex = 240,
	AkMidiEventTypeEscape = 247,
	AkMidiEventTypeMeta = 255,
};

enum class EAkPanningRule {
	Speakers = 0,
	Headphones = 1
};

enum class EAkResult {
	NotImplemented = 0,
	Success = 1,
	Fail = 2,
	PartialSuccess = 3,
	NotCompatible = 4,
	AlreadyConnected = 5,
	InvalidFile = 7,
	AudioFileHeaderTooLarge = 8,
	MaxReached = 9,
	InvalidID = 14,
	IDNotFound = 15,
	InvalidInstanceID = 16,
	NoMoreData = 17,
	InvalidStateGroup = 20,
	ChildAlreadyHasAParent = 21,
	InvalidLanguage = 22,
	CannotAddItseflAsAChild = 23,
	InvalidParameter = 31,
	ElementAlreadyInList = 35,
	PathNotFound = 36,
	PathNoVertices = 37,
	PathNotRunning = 38,
	PathNotPaused = 39,
	PathNodeAlreadyInList = 40,
	PathNodeNotInList = 41,
	DataNeeded = 43,
	NoDataNeeded = 44,
	DataReady = 45,
	NoDataReady = 46,
	InsufficientMemory = 52,
	Cancelled = 53,
	UnknownBankID = 54,
	BankReadError = 56,
	InvalidSwitchType = 57
	FormatNotReady = 63,
	WrongBankVersion = 64,
	FileNotFound = 66,
	DeviceNotReady = 67,
	BankAlreadyLoaded = 69,
	RenderedFX = 71,
	ProcessNeeded = 72,
	ProcessDone = 73,
	MemManagerNotInitialized = 74,
	StreamMgrNotInitialized = 75,
	SSEInstructionsNotSupported = 76,
	Busy = 77,
	UnsupportedChannelConfig = 78,
	PluginMediaNotAvailable = 79,
	MustBeVirtualized = 80,
	CommandTooLarge = 81,
	RejectedByFilter = 82,
	InvalidCustomPlatformName = 83,
	DLLCannotLoad = 84,
	DLLPathNotFound = 85,
	NoJavaVM = 86,
	OpenSLError = 87,
	PluginNotRegistered = 88,
	DataAlignmentError = 89,
};

enum class ERTPCValueType {
	Default = 0,
	Global = 1,
	GameObject = 2,
	PlayingID = 3,
	Unavailable = 4
};

enum class PanningRule {
	PanningRule_Speakers = 0,
	PanningRule_Headphones = 1
};

enum class EAkWindowsAudioAPI {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2
};

enum class ESBAbilityConditionOperator {
	Greater = 0,
	GreaterEqual = 1,
	Less = 2,
	LessEqual = 3,
	Equal = 4,
	NotEqual = 5,
	Num = 6
};

enum class ESBAbilityConditionType {
	AnyTime = 0,
	DeadInstigator = 1,
	SkillAttack = 2,
	ActiveBattleEffective = 3,
	ActiveBattleEffectiveGroup = 4,
	ActiveAbilityID = 5,
	ActiveBattleStatusID = 6,
	ActiveBattleMode = 7,
	InWater = 8,
	InBattleMap = 9,
	InMap = 10,
	CharacterLevel = 11,
	PlayerClass = 12,
	PlayerClassTotalPower = 13,
	PlayerSpiritRank = 14,
	RemainHitPointRate = 15,
	Sheathe = 16,
	InParty = 17,
	WeaponElement = 18,
	WeaponEnhance = 19,
	WeaponProficiency = 20,
	WeaponTotalPower = 21,
	TimeZoneNoon = 22,
	TimeZoneNight = 23,
	Num = 24
};

enum class ESBAbilityDotAmountType {
	Fix = 0,
	Rate = 1,
	Scale = 2
};

enum class ESBAbilityExpirationType {
	UserAction = 0,
	TimeLimit = 1,
	Once = 2,
	Count = 3,
	DotTimeCount = 4,
	Num = 5
};

enum class ESBAbilityForceConditionType {
	NoCheck = 0,
	Success = 1,
	Failure = 2,
	Num = 3
};

enum class ESBAbilityValueLimitType {
	Max = 0,
	Min = 1
};

enum class ESBHealRecoveryType {
	HealSkill = 0,
	BattleImagine = 1,
	Item = 2
};

enum class ESBAbilityCalcSuccessRate {
	None = 0,
	Physical = 1,
	Mental = 2,
	Max = 3
};

enum class ESBAbilityCharacterStatusType {
	MoveSpeed = 0,
	StaminaRecoverySpeed = 1,
	ResurrectionSpeed = 2
};

enum class ESBAbilityControlBadCondition {
	Stun = 0,
	Sleep = 1,
	Poison = 2,
	Max = 3
};

enum class ESBAbilityEffectiveCategory {
	None = 0,
	Heal = 1,
	Damage = 2,
	StatusUp = 3,
	StatusDown = 4,
	GiveDamageUp = 5,
	GiveDamageDown = 6,
	ReceiveDamageUp = 7,
	ReceiveDamageDown = 8,
	HealAmountUp = 9,
	RapidInterval = 10,
	SlowInterval = 11,
	GoodCondition = 12,
	BadCondition = 13
};

enum class ESBAbilityExecuteEnv {
	All = 0,
	Server = 1,
	LocalController = 2
};

enum class ESBAbilityFlags {
	None = 0,
	Stun = 1,
	Freeze = 2,
	Sleep = 3,
	Fear = 4,
	DeathPenalty = 5,
	Player_CannotMove = 6,
	Player_CannotJump = 7,
	Player_CannotBattleAction = 8,
	Player_CannotSkill = 9,
	Player_CannotInteraction = 10,
	Player_CannotItem = 11,
	Player_StaminaZero = 12,
	Player_TransformNappo = 13,
	CurableByInteraction = 14,
	MGC_ElementAmp = 15,
	Max = 16
};

enum class ESBAbilityLimitParamType {
	None = 0,
	HP = 1,
	ST = 2,
	STR = 3,
	VIT = 4,
	DEX = 5,
	INT = 6,
	MND = 7,
	AttackPower = 8,
	DefencePower = 9,
	RecuperativePower = 10,
	CriticalRate = 11,
	CriticalPower = 12,
	ElementResist = 13,
	GiveDamage = 14,
	GiveDamage_Main = 15,
	GiveDamage_Sub = 16,
	GiveDamage_TSkill1 = 17,
	GiveDamage_TSkill2 = 18,
	GiveDamage_TSkill3 = 19,
	GiveDamage_TSkill4 = 20,
	GiveDamage_SpecialSkill = 21,
	GiveDamage_BI1 = 22,
	GiveDamage_BI2 = 23,
	GiveDamage_BI = 24,
	GiveDamage_Near = 25,
	GiveDamage_Far = 26,
	GiveDamage_Race = 27,
	ReceiveDamage = 28,
	ReceiveDamage_Near = 29,
	ReceiveDamage_Far = 30,
	ReceiveDamage_Element = 31,
	Amount_HealSkill = 32,
	Amount_BI = 33,
	SkillInterval_Sub = 34,
	SkillInterval_TSkill1 = 35,
	SkillInterval_TSkill2 = 36,
	SkillInterval_TSkill3 = 37,
	SkillInterval_TSkill4 = 38,
	SkillInterval_SpecialSkill = 39,
	SkillInterval_BI1 = 40,
	SkillInterval_BI2 = 41,
	SkillInterval_BI = 42,
	Success_Stun = 43,
	Success_Sleep = 44,
	Success_Poison = 45,
	ReduceStamina = 46,
	ReduceStamina_Dash = 47,
	ReduceStamina_Jump = 48,
	ReduceStamina_Dodge = 49,
	SkillButtonCharge = 50,
	MoveSpeed = 51
};

enum class ESBAbilityLimitSumParamType {
	None = 0,
	GiveDamage = 1,
	ReceiveDamage = 2,
	SkillInterval = 3
};

enum class ESBAbilityOnlyPlayerStatus {
	CannotMove = 0,
	CannotJump = 1,
	CannotBattleAction = 2,
	CannotSkill = 3,
	CannotInteraction = 4,
	CannotItem = 5,
	StaminaZero = 6,
	TransformNappo = 7,
	MGC_ElementAmp = 8
};

enum class ESBAbilityRecoveryAmountType {
	Fix = 0,
	Rate = 1
};

enum class ESBAbilityReduceStaminaType {
	Dash = 0,
	Jump = 1,
	Dodge = 2
};

enum class ESBAbilityRequestSource {
	None = 0,
	WeaponAbility = 1,
	WeaponTag = 2,
	Imagine1 = 3,
	Imagine2 = 4,
	Imagine3 = 5,
	Imagine4 = 6,
	Imagine5 = 7,
	BattleAbility = 8,
	Item = 9,
	BattleImagine1 = 10,
	BattleImagine2 = 11,
	Max = 12
};

enum class ESBAbilitySimultaneousActivationControl {
	Block = 0,
	FirstInFirstOut = 1,
	Max = 2
};

enum class ESBAbilitySkillPosition {
	Main = 0,
	Sub = 1,
	TacticalSkill1 = 2,
	TacticalSkill2 = 3,
	TacticalSkill3 = 4,
	TacticalSkill4 = 5,
	ULT = 6,
	BattleImagine1 = 7,
	BattleImagine2 = 8,
	MountImagine = 9,
	Max = 10
};

enum class ESBAbilityValueShortAndExten {
	Shorten = 0,
	Extension = 1
};

enum class ESBAbilityValueUpAndDown {
	Up = 0,
	Down = 1
};

enum class ESBBaseStatusBoostType {
	HP = 0,
	ST = 1,
	STR = 2,
	VIT = 3,
	DEX = 4,
	INT = 5,
	MND = 6,
	Attack = 7,
	Defence = 8,
	Recuperative = 9,
	CriticalHitRate = 10,
	CriticalHitPower = 11,
	FireResist = 12,
	IceResist = 13,
	ThunderResist = 14,
	EarthResist = 15,
	LightResist = 16,
	DarknessResist = 17
};

enum class ESBBattleEffective {
	None = 0,
	HPUp = 1,
	HPRateUp = 2,
	StaminaUp = 3,
	StaminaRateUp = 4,
	STRUp = 5,
	VITUp = 6,
	DEXUp = 7,
	INTUp = 8,
	MNDUp = 9,
	AttackUp = 10,
	DefenceUp = 11,
	RecuperativeUp = 12,
	CriticalHitRateUp = 13,
	CriticalHitPowerUp = 14,
	ArtsGiveDamageUp = 15,
	OneArtsSkillGiveDamageUp = 16,
	SpecialSkillGiveDamageUp = 17,
	ImagineSkillGiveDamageUp = 18,
	RaceGiveDamageUp = 19,
	AttributeGiveDamageUp = 20,
	GiveDamageUp = 21,
	GiveDamageDown = 22,
	DamageReceiveDown = 23,
	DamageReceiveUp = 24,
	RecoveryHPUp = 25,
	ArtsHealUp = 26,
	ImagineArtsHealUp = 27,
	NoBattleHealUp = 28,
	ItemHealUp = 29,
	GiveStatusFireCorrect = 30,
	GiveStatusIceCorrect = 31,
	GiveStatusThunderCorrect = 32,
	RecieveStatusFireCorrect = 33,
	RecieveStatusIceCorrect = 34,
	RecieveStatusThunderCorrect = 35,
	DotDamage = 36,
	DotRateDamage = 37,
	DotScaleDamage = 38,
	DotHeal = 39,
	DotRateHeal = 40,
	DotScaleHeal = 41,
	Regenerate = 42,
	RegenerateRate = 43,
	ProjectileOnTimes = 44,
	Invincible = 45,
	Paralyze = 46,
	Paralyze2 = 47,
	SuperArmor = 48,
	Stun = 49,
	InvalidStun = 50,
	InvalidPoison = 51,
	Freeze = 52,
	Sleep = 53,
	Fear = 54,
	MoveSpeedUp = 55,
	MoveSpeedDown = 56,
	StaminaRecoveryUp = 57,
	ResurrectionSpeedUp = 58,
	SpecialGaugeChargeUp = 59,
	StaminaReduceCorrect = 60,
	SendStatusWhenBackAttack = 61,
	SendStatusWhenAttack = 62,
	SendStatusWhenTargetSkillKill = 63,
	RapidSkillCoolTime = 64,
	SlowSkillCoolTime = 65,
	FastSkillButtonCharge = 66,
	SlowSkillButtonCharge = 67,
	Drain = 68,
	DrainByAttackScale = 69,
	PointGravity = 70,
	HealStaminaWhenAttackHit = 71,
	AddSpecialGaugeWhenWeakHit = 72,
	WeakDamageRateWhenWeakHit = 73,
	HealStaminaWhenRecieveHit = 74,
	AutoReloadWhenTargetSkillKill = 75,
	DrainPlus = 76,
	RecoverAttackerWhenRecieveDamage = 77,
	RapidSpecialSkillCoolTime = 78,
	SlowSpecialSkillCoolTime = 79,
	RapidImagineSkillCoolTime = 80,
	SlowImagineSkillCoolTime = 81,
	OneRapidSkillCoolTime = 82,
	WeakDamageRateWhenAttackWeakHit = 83,
	DamageRateWhenAttackBackHit = 84,
	ControlHate = 85,
	Player_CannotMove = 86,
	Player_CannotJump = 87,
	Player_CannotBattleAction = 88,
	Player_CannotSkill = 89,
	Player_CannotInteraction = 90,
	Player_CannotItem = 91,
	Player_StaminaZero = 92,
	Player_TransformNappo = 93,
	GetPowerGaugeWhenKillTarget = 94,
	ReducePowerGaugeForHP = 95,
	RecoveryMPWhenResurrection = 96,
	DamageBonusWhenMPRate = 97,
	MGC_DotRateMPHeal = 98,
	MGC_ElementAmp = 99,
	ChangeSpecialSkill = 100,
	ChangeLSkill = 101,
	ChangeRSkill = 102,
	GuardShieldDamageRate = 103,
	GuardSpecialGaugeRate = 104,
	GuardReduceSkillRecastTime = 105,
	HPHeal = 106,
	HPRateHeal = 107,
	Dispel = 108,
	StaminaFixRecovery = 109,
	StaminaRateRecovery = 110,
	ReduceStaminaByDodge = 111,
	ReduceStaminaByJump = 112,
	HateDown = 113,
	AllyAttack_AttackScale = 114,
	AllyAttack_Physics = 115,
	AllyAttack_Earth = 116,
	AllyAttack_Water = 117,
	AllyAttack_Fire = 118,
	AllyAttack_Wind = 119,
	AllyAttack_Ice = 120,
	AllyAttack_Thunder = 121,
	AllyAttack_Light = 122,
	AllyAttack_Darkness = 123,
	CurableByInteraction = 124,
	StatusAilmentHP = 125,
	ElementStatusReinforce_Earth = 126,
	ElementStatusReinforce_Fire = 127,
	ElementStatusReinforce_Ice = 128,
	ElementStatusReinforce_Thunder = 129,
	ElementStatusReinforce_Light = 130,
	ElementStatusReinforce_Darkness = 131,
	ElementAccumulationRate = 132,
	BaseStatusBoost = 133,
	BaseStatusRateBoost = 134,
	CharacterStatusBoost = 135,
	StaminaRecovery = 136,
	Poison = 137,
	GiveDamage = 138,
	SkillActionGiveDamage = 139,
	ReceiveDamage = 140,
	BattleImagineGiveDamage = 141,
	DamageAttackTypeGiveDamage = 142,
	DamageAttackTypeReceiveDamage = 143,
	ElementReceiveDamage = 144,
	RaceGiveDamage = 145,
	InvalidAbility = 146,
	SkillCoolTime = 147,
	AllSkillCoolTime = 148,
	BattleImagineCoolTime = 149,
	SuccessRateBadCondition = 150,
	ReduceStaminaByAll = 151,
	ReduceStaminaByAction = 152,
	SkillButtonChargeTime = 153,
	OnlyPlayerStatus = 154,
	AllyAttack_Element = 155,
	ElementStatusReinforce = 156,
	DotMPRateHeal = 157,
	SpecialGaugeCharge = 158,
	FixTarget = 159,
	SendSelfStatusWhenAttack = 160,
	InvalidGroup = 161,
	Num = 162
};

enum class ESBBattleEffectiveFeel {
	Positive = 0,
	Negative = 1
};

enum class EAchievementAcquisitionCondition1 {
	None = 0,
	MainQuest = 1,
	Follow = 2,
	ResurrectionCount = 3,
	Dungeon = 4,
	PhalanxClassLevel = 5,
	DestroyerClassLevel = 6,
	HunterClassLevel = 7,
	EngramerClassLevel = 8
};

enum class EAchievementAcquisitionCondition3 {
	None = 0,
	Cleared = 1,
	Registered = 2,
	Succeed = 3,
	Reached = 4
};

enum class EAestheShop {
	AppearanceInfo_Slot_Max = 5,
};

enum class ESBActivityCategory {
	Unknown = 0,
	Player = 1,
	Party = 2,
	Quest = 3,
	Colosseum = 4,
	Field = 5
};

enum class ESBActivityType {
	Unknown = 0,
	Login = 1,
	Logout = 2,
	StartParty = 3,
	JoinParty = 4,
	AcceptQuest = 5,
	CompleteQuest = 6,
	JoinColosseum = 7,
	ActivateField = 8,
	ActivateDungeon = 9,
	CraftSuccessed = 10,
	DefeatNamedEnemy = 11,
	Num = 12
};

enum class ESBActorHiddenType {
	WaitForLoading = 0,
	PlayerNumRestriction = 1,
	NpcPool = 2,
	PlayerAdmin = 3,
	NotDemoMember = 4,
	DemoHiddenRequest = 5,
	TalkMode = 6,
	QuestEventMode = 7,
	CoinPubPrivateRoom = 8,
	PlayerTransform = 9,
	FieldStatus = 10,
	CharaPartsUpdate = 11,
	Max = 12
};

enum class ESBAdditionalColor {
	Nomal = 0,
	Ignition = 1,
	Freeze = 2,
	Shock = 3
};

enum class ESBAIActionAreaType {
	Territory = 0,
	BuffArea = 1,
	Max = 2
};

enum class ESBAICustomPriority {
	Default = 0,
	PartsBreak = 1,
	Ultimate = 2
};

enum class ESBAIPositioningType {
	Vanguard = 0,
	Rearguard = 1
};

enum class EProjectileFollowSlopeRotType {
	None = 0,
	FollowPitchRoll = 1,
	FollowPitchOnly = 2,
	FollowRollOnly = 3
};

enum class ESBAITacticalSkill_GuardState {
	Normal = 0,
	Guarding = 1,
	Both = 2
};

enum class ESBAITacticalSkill_StateComparison {
	Equal = 0,
	NotEqual = 1,
	LessThan = 2,
	LessThanEqual = 3,
	GreaterThan = 4,
	GreaterThanEqual = 5
};

enum class ESBAITacticalSkill_StateOperation {
	Set = 0,
	Add = 1
};

enum class ESBAITacticalSkill_StateType {
	Bool = 0,
	Int = 1,
	Float = 2
};

enum class EPartsDamageState {
	Off = 0,
	On = 1,
	Cancel = 2
};

enum class ESBBoneModificationMode {
	SB_BMM_Ignore = 0,
	SB_BMM_Replace = 1,
	SB_BMM_Additive = 2
};

enum class ESBIKMode {
	Leg = 0,
	Climb = 1,
	Quadruped = 2,
	Arm = 3
};

enum class FSBCustomBoneScaleAxisSwapType {
	NoSwap = 0,
	ToYXZ = 1,
	ToXZY = 2,
	ToZYX = 3,
	ToYZX = 4,
	ToZXY = 5,
	Num = 6
};

enum class ESBSplineBoneAxis {
	X = 1,
	Y = 2
	Z = 3,
};

enum class ECameraAnimNotifyPlaySpace {
	PlaySpace_Local = 0,
	PlaySpace_World = 1
};

enum class ECameraSettingsType {
	CameraSettingsType_None = 0,
	CameraSettingsType_Default = 1,
	CameraSettingsType_Preset = 2,
	CameraSettingsType_Custom = 3
};

enum class ENotifyRuleLogic {
	AND = 0,
	OR = 1,
	NAND = 2,
	NOR = 3
};

enum class ESBAdjustRootMotionAdjustType {
	Scale = 0,
	Linear = 1
};

enum class ESBAdjustRootMotionTargetInterpolationType {
	None = 0,
	OldTargetInfo = 1,
	InterpLinear_DEPRECATED = 2,
	InterpParaboraTop = 3,
	InterpCliffOutside = 4
};

enum class ESBAnimNotifyPlayType {
	None = 0,
	Normal = 1,
	Berserker_BrutalBlow = 2
};

enum class EArenaMissionAchieveType {
	Unknown = 0,
	DealDamage = 1,
	DealDamageAmount = 2,
	CriticalAmount = 3,
	HitSkill = 4,
	KillTargetEnemy = 5,
	SummonImagine = 6,
	CastSkill = 7
};

enum class ESBSendMaterialParamCalcType {
	ElapsedTime = 0,
	ElapsedRate = 1
};

enum class EAutoWordEventType {
	None = 0,
	Spawn = 1,
	Respawn = 2,
	FewHp = 3,
	ReceiveHeal = 4,
	Dead = 5,
	Resurrection = 6,
	UsedUltimateSkill = 7,
	UsableUltimateSkill = 8,
	Num = 9
};

enum class ENavmeshDirection {
	Left = 0,
	Right = 1
};

enum class ESBAttackParam {
	None = 0,
	Common_StaminaRecovery = 1,
	Common_ShieldRecovery = 2,
	Rebellion_RageUp = 3
};

enum class ESBSortType {
	ASC = 0,
	DESC = 1
};

enum class ESBAttackMoveDestinationHeight {
	None = 0,
	OnStraightLine = 1,
	AttackerHeight = 2,
	TargetHeight = 3
};

enum class ESBBattleAreaOpenStatus {
	None = 0,
	Open = 1,
	BlockCountdown = 2,
	Blocked = 3
};

enum class ESBShieldGuardResult {
	Guard = 0,
	CannotGuard = 1
};

enum class ESBBattleStatusEffectTiming {
	In = 0,
	Override = 1,
	InOrOverride = 2,
	Out = 3
};

enum class ESBBattleStatusMaterialParam {
	FixValue = 0
};

enum class EAttackAttributeType {
	AttackAttributeType_None = 0,
	AttackAttributeType_Slash = 1,
	AttackAttributeType_Blow = 2,
	AttackAttributeType_Thrust = 3
};

enum class EAttackHitType {
	AttackHitType_None = 0,
	AttackHitType_Slash = 1,
	AttackHitType_Blow = 2,
	AttackHitType_Thrust = 3,
	AttackHitType_Claw = 4,
	AttackHitType_Fang = 5,
	AttackHitType_BH_Blow = 6
};

enum class ESBAttackAttribute {
	Explode = 0,
	ImagineArts = 1,
	Burst = 2
};

enum class ESBAttackDirectionOrigin {
	None = 0,
	Collision = 1,
	Owner = 2,
	Instigator = 3
};

enum class ESBAttackDirectionType {
	None = 0,
	Forward = 1,
	OtherCollision = 2,
	OtherActor = 3,
	Velocity = 4
};

enum class ESBAttackThroughType {
	None = 0,
	UnBlockable = 1,
	AbsoluteDamage = 2,
	Through = 3
};

enum class ESBBattleDebugParamVariableType {
	Invalid = 0,
	Bool = 1,
	Float = 2,
	Int32 = 3
};

enum class ESBBattleEffectiveGroup {
	None = 0,
	ChainRegenerate = 1,
	HealingFactor = 2,
	Rampage = 3,
	Unstoppable = 4,
	ArcBlade = 5,
	SupportGadget = 6,
	AcceleGate = 7,
	Rage = 8,
	Protection = 9,
	TripleAttack = 10,
	WeaponPerk = 11,
	Fire = 12,
	Ice = 13,
	Earth = 14,
	Water = 15,
	Wind = 16,
	Thunder = 17,
	Light = 18,
	Darkness = 19,
	FireBurst = 20,
	IceBurst = 21,
	EarthBurst = 22,
	ThunderBurst = 23,
	FireThunderBurst = 24,
	FireEarthBurst = 25,
	FireIceBurst = 26,
	ThunderEarthBurst = 27,
	ThunderIceBurst = 28,
	IceEarthBurst = 29,
	Berserk = 30,
	Sleep = 31,
	Fear = 32,
	DotDamageFire = 33,
	DotDamageIce = 34,
	DotDamageThunder = 35,
	DotDamagePoison = 36,
	NoBattleHeal = 37,
	Drain = 38,
	Transform = 39,
	Frailness = 40,
	Stun = 41,
	Max = 42
};

enum class ESBBattleStatusResistType {
	None = 0,
	Stun = 1,
	Sleep = 2,
	Poison = 3,
	FixTarget = 4,
	Fear = 5,
	Max = 6
};

enum class ESBCounterDamageState {
	None = 0,
	Attack = 1,
	Stun = 2,
	KneelDown = 3,
	Down = 4,
	UpperDown = 5,
	HiUpperDown = 6,
	Max = 7
};

enum class ESBDamageAttackType {
	MeleeAttack = 0,
	RangedAttack = 1,
	Max = 2
};

enum class ESBGuardKnockBackPower {
	None = 0,
	Small = 1,
	Mid = 2,
	Large = 3
};

enum class ESBHitKnockBackPower {
	None = 0,
	Small = 1,
	Mid = 2,
	Large = 3
};

enum class ESBHitKnockBackTime {
	None = 0,
	Short = 1,
	Mid = 2,
	Long = 3
};

enum class ESBHitSlomoPower {
	None = 0,
	Light = 1,
	Middle = 2,
	Heavy = 3,
	StormRush = 4
};

enum class ESBInvincibleAnimation {
	Default = 0,
	DodgeRoll = 1,
	DodgeStep = 2,
	BattleAction = 3,
	Max = 4
};

enum class ESBInvincibleLevel {
	None = 0,
	Level1 = 1,
	Level2 = 2,
	Level3 = 3,
	Level4 = 4
};

enum class ESBKnockBackWeightClass {
	None = 0,
	SuperLight = 1,
	Light = 2,
	Middle = 3,
	Heavy = 4
};

enum class ESBPassiveType {
	Character = 0,
	Weapon = 1,
	GameRule = 2,
	BattleComp = 3
};

enum class ESBStatusAilmentEffectTiming {
	In = 0,
	Override = 1,
	InOrOverride = 2,
	Out = 3
};

enum class ESBStatusAilmentGroup {
	None = 0,
	ChainRegenerate = 1,
	HealingFactor = 2,
	Rampage = 3,
	Unstoppable = 4,
	ArcBlade = 5,
	SupportGadget = 6,
	AcceleGate = 7,
	Rage = 8,
	Protection = 9,
	TripleAttack = 10,
	WeaponPerk = 11,
	Fire = 12,
	Ice = 13,
	Earth = 14,
	Water = 15,
	Wind = 16,
	Thunder = 17,
	Light = 18,
	Darkness = 19,
	FireBurst = 20,
	IceBurst = 21,
	EarthBurst = 22,
	ThunderBurst = 23,
	FireThunderBurst = 24,
	FireEarthBurst = 25,
	FireIceBurst = 26,
	ThunderEarthBurst = 27,
	ThunderIceBurst = 28,
	IceEarthBurst = 29,
	Berserk = 30,
	Sleep = 31,
	Fear = 32,
	DotDamageFire = 33,
	DotDamageIce = 34,
	DotDamageThunder = 35,
	DotDamagePoison = 36,
	NoBattleHeal = 37,
	Drain = 38,
	Transform = 39,
	Frailness = 40,
	Num = 41
};

enum class ESBStatusAilmentsFlag {
	None = 0,
	ChainRegenerate = 1,
	Invincible = 2,
	HealingFactor = 3,
	Rampage = 4,
	Unstoppable = 5,
	ArcBlade = 6,
	PointGravity = 7,
	Protection = 8,
	TripleAttack = 9,
	Fire = 10,
	Ice = 11,
	Earth = 12,
	Thunder = 13,
	FireBurst = 14,
	IceBurst = 15,
	EarthBurst = 16,
	ThunderBurst = 17,
	FireThunderBurst = 18,
	FireEarthBurst = 19,
	FireIceBurst = 20,
	ThunderEarthBurst = 21,
	ThunderIceBurst = 22,
	IceEarthBurst = 23,
	Berserk = 24,
	DotDamageFire = 25,
	DotDamageIce = 26,
	DotDamageThunder = 27,
	DotDamagePoison = 28,
	NoBattleHeal = 29,
	Drain = 30,
	Num = 31
};

enum class ESBStatusProjectileInvoker {
	Invoker = 0,
	Self = 1
};

enum class ESBStunDirection {
	None = 0,
	Down = 1,
	KnockBack = 2,
	Up = 3
};

enum class ESBStunValueCalculation {
	None = 0,
	Add = 1,
	Override = 2,
	WeakOverride = 3
};

enum class EInterruptMissionBGMType {
	NamedEnemy = 0
};

enum class ESBArenaBGMType {
	None = 0,
	InWaitingRoom = 1,
	PreStart = 2,
	Battle = 3,
	Result = 4
};

enum class ESBBattleBGMType {
	None = 0,
	Zako = 1,
	MiddleBoss = 2,
	LargeBoss = 3,
	RaidBattleA = 4,
	RaidBattleB = 5,
	RaidBattleC = 6,
	ArenaZako = 7,
	ArenaBoss = 8
};

enum class ESBBossBGMSettingType {
	RemainingHP = 0
};

enum class ESBDungeonBGMType {
	None = 0,
	Default = 1,
	Battle = 2
};

enum class ESBFieldBGMType {
	None = 0,
	Default = 1,
	Mounting = 2,
	Vigilance = 3,
	Battle = 4,
	InterruptMission = 5,
	Max = 6
};

enum class ESBInterruptMissionBGMState {
	None = 0,
	Start = 1,
	Battle = 2,
	Success = 3,
	Failed = 4,
	Leave = 5
};

enum class ESBIsRquestBlackListResult {
	Failure = 0,
	Registered_Black = 1,
	Registered_Safe = 2,
	Success = 3
};

enum class ESBRaidBattleBGMType {
	None = 0,
	BeforeBattle = 1,
	Battle = 2
};

enum class ESBRealTimeZone {
	Zone_UTC = 0,
	Zone_JST = 1,
	Zone_AWST = 2,
	Zone_KRAT = 3
};

enum class ESBResultBGMType {
	None = 0,
	Dungeon = 1,
	RaidBattle = 2,
	Arena = 3
};

enum class ECameraPriority {
	CameraPriority_0 = 0,
	CameraPriority_1 = 1,
	CameraPriority_2 = 2,
	CameraPriority_3 = 3,
	CameraPriority_4 = 4,
	CameraPriority_5 = 5,
	CameraPriority_6 = 6,
	CameraPriority_7 = 7,
	CameraPriority_8 = 8,
	CameraPriority_9 = 9,
	CameraPriority_PresetCamera = 10
};

enum class EPresetCamera {
	PresetCamera_None = 0,
	PresetCamera_1 = 1,
	PresetCamera_2 = 2,
	PresetCamera_3 = 3,
	PresetCamera_4 = 4,
	PresetCamera_5 = 5,
	PresetCamera_6 = 6,
	PresetCamera_7 = 7,
	PresetCamera_8 = 8,
	PresetCamera_9 = 9,
	PresetCamera_10 = 10
};

enum class ESBChallengeBoxRespawnTarget {
	SameSpot = 0,
	SameAreaSpot = 1,
	Rundom = 2,
	Max = 3
};

enum class ESBKeepCameraAimLocation {
	None = 0,
	KeepIn = 1,
	KeepInOut = 2,
	NoKeepOut = 3
};

enum class ECharaCreateBoneScaleID {
	Root_J = 0,
	Hip_J__offset = 1,
	HLP_Spine1__offset = 2,
	Spine1_J = 3,
	Spine1_J__offset = 4,
	Spine2_J__offset = 5,
	Neck_J = 6,
	Neck_J__offset = 7,
	Head_J = 8,
	Head_J__offset = 9,
	L_Clavicle_J = 10,
	L_Arm_J__offset = 11,
	L_ForeArm_J__offset = 12,
	L_Wrist_J = 13,
	HLP_L_ForeArm_Mid = 14,
	HLP_L_ForeArm_Btm = 15,
	HLP_L_ForeArm_Slide = 16,
	HLP_L_Arm_Mid = 17,
	HLP_L_Arm_Top = 18,
	HLP_L_Elbow = 19,
	HLP_L_Arm_Slide = 20,
	HLP_L_ShldrBlade = 21,
	HLP_L_ShldrBlade_Trans = 22,
	HLP_L_CollarBone = 23,
	Chest_J = 24,
	L_Pectoral_OPT001 = 25,
	L_Pectoral_OPT002 = 26,
	Rear_J = 27,
	L_UpLeg_J = 28,
	L_UpLeg_J__offset = 29,
	L_Leg_J__offset = 30,
	L_Foot_J = 31,
	L_Foot_J__offset = 32,
	HLP_L_Leg_Slide = 33,
	HLP_L_Leg_Btm = 34,
	HLP_L_Leg_Mid = 35,
	HLP_L_Knee = 36,
	HLP_L_UpLeg_Top = 37,
	HLP_L_UpLeg_Mid = 38,
	HLP_L_UpLeg_Slide = 39,
	HLP_L_Butt = 40,
	HLP_L_Butt_Trans = 41,
	HLP_L_Hip = 42,
	HLP_L_Hip_Trans = 43,
	MAX = 44
};

enum class ECharaCreateBoneScaleType {
	XYZ_Scale = 0,
	YZ_Scale = 1,
	X_Scale = 2,
	Y_Scale = 3,
	Z_Scale = 4
};

enum class ECharaCreateSliderType {
	Height = 0,
	Physique = 1,
	Bust = 2,
	MAX = 3
};

enum class ECharaPartsAsyncLoadState {
	None = 0,
	Standby = 1,
	WaitRequest = 2,
	Loading = 3
};

enum class ECharaPartsComponentGroupForFiltering {
	None = 0,
	All = 1,
	BodyPartsAndBodyComponent = 2,
	BodyPartsWithoutBodyComponent = 3,
	FacePartsAndFaceComponent = 4,
	FacePartsWithoutFaceComponent = 5,
	AccessoryComponent = 6,
	MAX = 7
};

enum class ESBChallengeBoxGimmickType {
	GatherPoint = 0,
	DestructibleObject = 1,
	Unknown = 2,
	Max = 3
};

enum class ESBCharaCreateMole {
	MoleNum = 8,
	MoleNumOnOneSide = 4,
};

enum class ESBCharacterBoneDisplay {
	None = 0,
	AllDisplay = 1,
	SelectDisplay = 2,
	Num = 3
};

enum class ESBCostumeSet {
	Naked = 0,
	Common = 1,
	Giken = 2,
	Hero = 3,
	Vanguard = 4,
	Wizard = 5,
	SwordSlayer = 6,
	Gunslinger = 7,
	Common2 = 8,
	Common3 = 9,
	Common4 = 10,
	Common5 = 11,
	Max = 12
};

enum class ESBPushOutOrigin {
	None = 0,
	OwnerActor = 1,
	Capsule = 2
};

enum class FSBCharaCreateMakeupIndex {
	Condition = 0,
	Lip = 1,
	Paint1 = 2,
	Paint2 = 3
};

enum class ESBCharaEquipType {
	Weapon = 0,
	Costume_Head = 1,
	Costume_Body = 2,
	Costume_Hand = 3,
	Costume_Leg = 4,
	Costume_Shoes = 5,
	Costume_Accessory1 = 6,
	Costume_Accessory2 = 7,
	Costume_Accessory3 = 8,
	Imagine_Active1 = 9,
	Imagine_Active2 = 10,
	Imagine_Passive1 = 11,
	Imagine_Passive2 = 12,
	Imagine_Passive3 = 13,
	Imagine_Passive4 = 14,
	Imagine_Passive5 = 15,
	Imagine_Mount = 16,
	Max = 17
};

enum class ESBCharacterGender {
	Male = 0,
	Female = 1
};

enum class ESBContentLockType {
	Unknown = 0,
	Warp = 1,
	MyCharacter = 2,
	Inventory = 3,
	Quest = 4,
	Map = 5,
	Library = 6,
	Contents = 7,
	Party = 8,
	Guild = 9,
	Gacha = 10,
	Option = 11,
	Photo = 12,
	Hud = 13,
	Communicate = 14
};

enum class ESBEquipImagineFrameType {
	Arts = 0,
	Support_1 = 1,
	Support_2 = 2,
	Support_3 = 3,
	Num = 4
};

enum class ESBOperateMode {
	MouseAndKeyboard = 0,
	Gamepad = 1,
	Max = 2
};

enum class ESBCharactersLogTypes {
	Item = 0,
	Weapon = 1,
	Npc = 2,
	Enemy = 3,
	Action = 4,
	TutorialHelp = 5,
	Craft = 6,
	Imagine = 7,
	Map = 8
};

enum class ESBDamageDirection {
	SBDD_Front = 0,
	SBDD_Back = 1,
	SBDD_Left = 2,
	SBDD_Right = 3
};

enum class ESBFootSESocketType {
	None = 0,
	L_Hand = 1,
	R_Hand = 2,
	L_Foot = 3,
	R_Foot = 4,
	L_ForeLeg = 5,
	R_ForeLeg = 6,
	L_BackLeg = 7,
	R_BackLeg = 8
};

enum class ESBRoleRangeType {
	Close = 0,
	Long = 1,
	Max = 2
};

enum class ESBRoleType {
	None = 0,
	Attacker = 1,
	Defender = 2,
	Supporter = 3,
	Max = 4
};

enum class ECharaPartsAgeGroup {
	Child = 0,
	Teenager = 1,
	Young = 2,
	Middle = 3,
	Senior = 4,
	MAX = 5
};

enum class ECharaPartsRegion {
	Common = 0,
	R01 = 1,
	R02 = 2,
	R03 = 3,
	R04 = 4,
	MAX = 5
};

enum class EMaterialLocation {
	None = 0,
	Upper = 1,
	Lower = 2,
	Gloves = 3,
	Shoes = 4,
	Hat = 5
};

enum class EMaterialType {
	Costume = 0,
	Skin = 1,
	Hair = 2,
	Outline = 3,
	Eye = 4,
	EyeLash = 5,
	Brow = 6,
	Socks = 7,
	EyeLeft = 8,
	EyeRight = 9
};

enum class EPlacesObtained {
	None = 0,
	Treasure = 1,
	GatherPoint = 2,
	EnemyDrop = 3,
	QuestTrigger = 4
};

enum class ESBAutoMessageTarget {
	Party = 0,
	All = 1
};

enum class ESBCharaCreateColorHue {
	Red = 0,
	YellowishRed = 1,
	ReddishOrange = 2,
	YellowishOrange = 3,
	Yellow = 4,
	Blond = 5,
	YellowGreen = 6,
	Green = 7,
	BlueGreen = 8,
	Blue = 9,
	Violet = 10,
	Purple = 11,
	RedPurple = 12,
	PurplishRed = 13,
	Achromatic = 14
};

enum class ESBCharaCreateColorTable {
	Costume = 0,
	Skin = 1,
	Hair = 2,
	Eye = 3,
	Scar = 4
};

enum class ESBChatFilterType {
	Area = 1,
	Field = 2,
	Party = 4,
	Team = 8,
	Direct = 16,
	SystemLog = 32,
	BattleLog = 64,
};

enum class ESBChatLogMode {
	AllLog = 0,
	BattleLog = 1,
	Max = 2
};

enum class ESBChatLogOption {
	None = 0,
	GetQuestTrigger = 1,
	NotifyBlackListed = 2,
	NotifyUnBlackListed = 3
};

enum class ESBChatLogType {
	CloseAreaChat = 0,
	OpenChat = 1,
	PartyChat = 2,
	TeamChat = 3,
	GuildChat = 4,
	DirectMessage = 5,
	SystemLog = 6,
	BattleLog = 7,
	None = 8
};

enum class ESBFacialType {
	Default = 0,
	Laugh = 1,
	Anger = 2,
	Sad = 3,
	Happy = 4,
	Hopeless = 5,
	Troubled = 6,
	Doubt = 7,
	Tease = 8,
	Endure = 9,
	Hustle = 10,
	Hurt = 11,
	Pinched = 12,
	Rushed = 13,
	Surprised = 14,
	Hate = 15,
	Flattering = 16,
	Fear = 17,
	Serious = 18,
	Smile = 19,
	Plot = 20,
	Attack = 21,
	Damage = 22,
	Dead = 23,
	Special = 24,
	CreationSmile = 25,
	CreationAnger = 26,
	CreationSad = 27,
	CreationPose1 = 28,
	CreationPose2 = 29,
	CreationPose3 = 30,
	CreationPose4 = 31,
	CreationPose5 = 32,
	Max = 33
};

enum class ESBIrisType {
	Left = 0,
	Right = 1
};

enum class ESBLipSyncType {
	Default = 0,
	Loop = 1,
	Close = 2,
	Open = 3,
	HalfOpen = 4
};

enum class ESBBattleLogType {
	Kill = 0,
	TakeDamage = 1,
	GiveDamage = 2,
	HealHP = 3,
	HealST = 4,
	UseSkill = 5,
	UseImagine = 6,
	UseSpecial = 7,
	Death = 8,
	StatusOff = 9,
	TakeWeaponExp = 10,
	TakeImagineExp = 11,
	ChainKill = 12,
	PlayerDeath = 13,
	EnemyDeath = 14,
	TakePlayerExp = 15,
	LevelUpPlayer = 16,
	GetBootyItem = 17,
	GetMoney = 18,
	DefeatEnemy = 19
};

enum class EClimbingEndActionType {
	ClimbingEndActionType_Drop = 0,
	ClimbingEndActionType_Clamber = 1
};

enum class EClimbingEndPointType {
	ClimbingEndPointType_None = 0,
	ClimbingEndPointType_Up = 1,
	ClimbingEndPointType_Down = 2
};

enum class ESBCommandMenuType {
	Unknown = 0,
	MyCharacter = 1,
	Inventory = 2,
	Quest = 3,
	Map = 4,
	Communicate = 5,
	Library = 6,
	Matching = 7,
	Party = 8,
	DungeonParty = 9,
	Option = 10,
	ExitGame = 11,
	CharSelect = 12,
	Guild = 13
};

enum class ESBConditionCheckType {
	None = 0,
	SkillLevel = 1,
	EquippedPassiveSkill = 2,
	PassiveSkillLevel = 3,
	EquippedPassiveSkillLevel = 4,
	SkillCastCount = 5,
	SkillChargeLevel = 6,
	ActiveStatusGroup = 7,
	AnimTag = 8,
	PlayerCharacter = 9,
	BossEnemyType = 10,
	BSK_ComboGaugeAmount = 11,
	Num = 12
};

enum class ECountdownResult {
	TimeUp = 0,
	Interaction = 1,
	Cancel = 2
};

enum class ECountdownType {
	RespawnFromDead = 0,
	Warp = 1,
	GameLogout = 2
};

enum class ESBCatalystEffectType {
	EFFECT_SUCCESS = 0,
	EFFECT_BONUS = 1,
	EFFECT_PERK = 2
};

enum class ESBCharacterBattleEffectVisibility {
	CharacterBattleEffect_All = 0,
	CharacterBattleEffect_Parties = 1,
	CharacterBattleEffect_Only = 2,
	CharacterBattleEffect_MAX = 3
};

enum class ESBChatLogWindowSlot {
	SLOT_1 = 0,
	SLOT_2 = 1,
	SLOT_3 = 2,
	SLOT_4 = 3,
	SLOT_MAX = 4
};

enum class ESBConfigSaveDataResult {
	RESULT_SUCCESS = 0,
	RESULT_FAIL = 1
};

enum class ESBConfigWindowType {
	WINDOWTYPE_FULLSCREEN = 0,
	WINDOWTYPE_WINDOW = 1,
	WINDOWTYPE_WINDOWED_FULLSCREEN = 2
};

enum class ESBConsumeLogType {
	CONSUME_TYPE_INVALID = 0,
	CONSUME_TYPE_USE = 1,
	CONSUME_TYPE_CRAFT = 2,
	CONSUME_TYPE_WEAPON_CRAFT = 3,
	CONSUME_TYPE_WEAPON_LEVELING = 4,
	CONSUME_TYPE_WEAPON_MERGE = 5,
	CONSUME_TYPE_PERK_SLOT_RELASE = 6,
	CONSUME_TYPE_IMAGINE_CRAFT = 7,
	CONSUME_TYPE_IMAGINE_LEVELING = 8
};

enum class ESBCraftErrorCode {
	ERROR_CODE_SUCCESS = 0,
	ERROR_CODE_CRAFT_LACK_ENGRAM = 1,
	ERROR_CODE_CRAFT_POINT_VALIDATION_ERROR = 2,
	ERROR_CODE_CRAFT_LACK_RESOURCE = 3,
	ERROR_CODE_CRAFT_HASNT_RECEPI = 4,
	ERROR_CODE_CRAFT_INVALID_DIFFICULTY = 5,
	ERROR_CODE_CRAFT_LACK_CATALYST = 6,
	ERROR_CODE_CRAFT_LACK_OPTION_ITEM = 7,
	ERROR_CODE_CRAFT_NOT_FOUND_MASTER_DATA = 8,
	ERROR_CODE_CRAFT_NOT_FOUND_ENTRY_DATA = 9,
	ERROR_CODE_CRAFT_RECEIVE_ONLY = 10,
	ERROR_CODE_CRAFT_CANCEL_REJECT = 11,
	ERROR_CODE_CRAFT_UNFINISHED = 12,
	ERROR_CODE_CRAFT_MAX_INVENTORY = 13,
	ERROR_CODE_UNKNOWN_ERROR = 14
};

enum class ESBCraftInscriptType {
	INSCRIPT_MANUAL = 0,
	INSCRIPT_AUTO = 1,
	INSCRIPT_NONE = 2
};

enum class ESBCreationType {
	Player = 0,
	Hero = 1,
	Enemy = 2,
	Max = 3
};

enum class ESBCustomHudLayoutSlot {
	HudLayoutSlot_Now = 0,
	HudLayoutSlot_Custom1 = 1,
	HudLayoutSlot_Custom2 = 2,
	HudLayoutSlot_Custom3 = 3
};

enum class ESBFrameRateLimitType {
	FPS_LIMIT_UNLIMIT = 0,
	FPS_LIMIT_30 = 1,
	FPS_LIMIT_60 = 2,
	FPS_LIMIT_120 = 3
};

enum class ESBKeyGuideDisplayType {
	KEYGUIDE_AUTO = 0,
	KEYGUIDE_INVISIBLE = 1,
	KEYGUIDE_VISIBLE = 2,
	KEYGUIDE_TYPE_MAX = 3
};

enum class ESBLowVGAMemory {
	SBLowVGA_Invalid = 0,
	SBLowVGA_Off = 1,
	SBLowVGA_On = 2
};

enum class ESBSoundVolumeType {
	VOLUME_MASTETR = 0,
	VOLUME_SOUNDEFFECT = 1,
	VOLUME_BGM = 2,
	VOLUME_VOICE = 3,
	VOLUME_SYSTEM = 4,
	VOLUME_AMBIENT = 5,
	VOLUME_TYPE_MAX = 6
};

enum class ESBStateAbnomal {
	Nomal = 0,
	Invisible = 1,
	Ignition = 2,
	Max = 3
};

enum class ESBDamageEventGeneralParam {
	None = 0,
	Berserker_ComboGaugeAmount = 1
};

enum class ESBDebugMenuType {
	SB_DEBUG_MENU_NONE = 0,
	SB_DEBUG_MENU_TOP = 1,
	SB_DEBUG_MENU_COMMAND = 2,
	SB_DEBUG_MENU_PLAYER = 3,
	SB_DEBUG_MENU_PLAYER_BATTLE = 4,
	SB_DEBUG_MENU_ENEMY = 5,
	SB_DEBUG_MENU_NEARBY_CHARACTER = 6,
	SB_DEBUG_MENU_EFFECT = 7,
	SB_DEBUG_MENU_UI = 8,
	SB_DEBUG_MENU_SCRIPT = 9,
	SB_DEBUG_MENU_CAMERA = 10,
	SB_DEBUG_MENU_RENDER = 11,
	SB_DEBUG_MENU_SOUND = 12,
	SB_DEBUG_MENU_FAST_TRAVEL = 13,
	SB_DEBUG_MENU_QUEST = 14,
	SB_DEBUG_MENU_TIME_SETTING = 15,
	SB_DEBUG_MENU_MAPS = 16,
	SB_DEBUG_MENU_ROUTEGUIDE = 17,
	SB_DEBUG_MENU_INTERRUPT_QUEST = 18,
	SB_DEBUG_MENU_LOAD = 19,
	SB_DEBUG_MENU_SAVE = 20,
	SB_DEBUG_MENU_RESET = 21,
	SB_DEBUG_MENU_CHANGECLASS = 22,
	SB_DEBUG_MENU_PROJECTILE = 23,
	SB_DEBUG_MENU_SEARCHPOINT = 24,
	SB_DEBUG_MENU_SYSYTEM = 25,
	SB_DEBUG_MENU_COMMAND_STAT = 26,
	SB_DEBUG_MENU_COMMAND_SHOWDEBUG = 27,
	SB_DEBUG_MENU_COMMON_FUNC_TOP = 28,
	SB_DEBUG_MENU_CHECK_BOX = 29,
	SB_DEBUG_MENU_FLOAT = 30,
	SB_DEBUG_MENU_INT32 = 31,
	SB_DEBUG_MENU_CONSOLE_COMMAND = 32,
	SB_DEBUG_MENU_STRING = 33,
	SB_DEBUG_MENU_COMBO_BOX = 34,
	SB_DEBUG_MENU_BUTTON = 35,
	SB_DEBUG_MENU_LIST = 36,
	SB_DEBUG_MENU_CHILD = 37,
	SB_DEBUG_MENU_SPECIFIC_FUNC_TOP = 38,
	SB_DEBUG_MENU_ACCEPTED_QUEST_ACTION = 39
};

enum class ESBDemoType {
	Demo_None = 0,
	Demo_Main = 1,
	Demo_Extra = 2,
	Demo_Sub = 3
};

enum class ESBDemoVisibleCharacterType {
	None = 0,
	VisibleEnemy = 1,
	VisibleNPC_ExceptStoryNPC = 2
};

enum class ESBMagnitudeRelation {
	None = 0,
	Less = 1,
	LessOrEqual = 2,
	Equal = 3,
	NotEqual = 4,
	GreaterOrEqual = 5,
	Greater = 6,
	AlwaysTrue = 7,
	AlwaysFalse = 8
};

enum class ESBSaveGameReturn {
	SB_SAVE_GAME_SUCCESS = 0,
	SB_SAVE_GAME_FAILURE = 1,
	SB_LOAD_GAME_SUCCESS = 2,
	SB_LOAD_GAME_FAILURE = 3,
	SB_LOAD_GAME_SEVERAL_FAILURES = 4
};

enum class EDialogPositionType {
	Default = 0,
	Type1 = 1,
	Type2 = 2,
	Type3 = 3,
	Type4 = 4
};

enum class EDialogResult {
	Ok = 0,
	Yes = 1,
	No = 2,
	Cancel = 3,
	None = 4
};

enum class ESBDroppingTextOption {
	None = 0,
	GetQuestTrigger = 1
};

enum class EYesNoDialogResult {
	Yes = 0,
	No = 1
};

enum class EDungeonClearConditionType {
	Unknown = 0,
	KillEnemy = 1,
	AnyCondition = 2
};

enum class EDungeonGameMode {
	Dungeon = 0,
	TeamMatchDungeon = 1,
	CaptureTheFlag = 2,
	Domination = 3,
	EngramRace = 4,
	DeathMatch = 5,
	Default = 6,
	Lobby = 7,
	Payload = 8,
	Bounty = 9,
	EnemyBattleNormal = 10,
	TutorialGameMode = 11,
	TrainingMode = 12,
	InstanceArea = 13,
	DungeonNormal = 14,
	DungeonScenario = 15,
	Num = 16
};

enum class ESBBattleRule {
	None = 0,
	CaptureTheFlag = 1,
	Domination = 2,
	EngramRace = 3,
	Payload = 4,
	Bounty = 5,
	EnemyBattleNormal = 6,
	InstanceArea = 7,
	DungeonNormal = 8,
	DungeonScenario = 9,
	Max = 10
};

enum class ESBDungeonBossBattleState {
	None = 0,
	Standby = 1,
	Battle = 2,
	Max = 3
};

enum class ESBDungeonClearCondition {
	PostLoad = 0,
	GameStart = 1,
	PreResult = 2,
	PostResult = 3,
	PreExit = 4,
	OverlapSomePlayer = 5,
	OverlapAllPlayers = 6,
	InteractionSw = 7,
	BattleAreaStart = 8,
	BattleAreaClear = 9,
	EnemySpawned = 10,
	EnemyDead = 11,
	EnemyDestroy = 12,
	Destructible = 13,
	AllPlayersScriptEnd = 14,
	ScriptCheck = 15
};

enum class ESBDungeonEvaluation {
	None = 0,
	Gold = 1,
	Silver = 2,
	Bronze = 3,
	Max = 4
};

enum class ESBDungeonLaterJoinType {
	No = 0,
	FriendOnly = 1
};

enum class ESBDungeonMatchMenuRegisterType {
	None = 0,
	WhenOpend = 1,
	WhenCompleted = 2
};

enum class ESBDungeonMvpType {
	Attack = 0,
	Support = 1,
	EscortTime = 2,
	EscortDistance = 3,
	Max = 4
};

enum class ESBDungeonProcessStatus {
	Wait = 0,
	Ready = 1,
	Cleared = 2,
	Failed = 3,
	None = 255,
};

enum class ESBDungeonScriptType {
	None = 0,
	Intro = 1,
	BossPre = 2,
	ResultPre = 3,
	ResultPost = 4,
	Max = 5
};

enum class EEffectId {
	None = 0,
	BuffAuraATK = 1,
	BuffAuraDEF = 2,
	EnemySpawn = 3,
	Slash = 4,
	Blow = 5,
	Thrust = 6,
	Claw = 7,
	Fang = 8,
	HiSlash = 9,
	HiBlow = 10,
	HiThrust = 11,
	HiClaw = 12,
	HiFang = 13,
	LowSlash = 14,
	LowBlow = 15,
	LowThrust = 16,
	LowClaw = 17,
	LowFang = 18,
	GeneralEffective = 19,
	SuperArmor = 20,
	EarthMelt = 21,
	FireMelt = 22,
	IceMelt = 23,
	ThunderMelt = 24,
	LightMelt = 25,
	DarknessMelt = 26,
	IceBreak = 27,
	StoneBreak = 28,
	ElementSpread = 29,
	Resurrection = 30,
	ResurrectionComp = 31,
	DodgeSuccess_Roll = 32,
	DodgeSuccess_Step = 33,
	ProjectileInWater = 34,
	ClassLevelUp = 35,
	MaxNum = 36
};

enum class EEffectTarget {
	EffectTarget_ActorRoot = 0,
	EffectTarget_ActorMesh = 1,
	EffectTarget_WeaponMesh_R = 2,
	EffectTarget_WeaponMesh_L = 3,
	EffectTarget_Inventory_0 = 4,
	EffectTarget_Inventory_1 = 5
};

enum class ESBDungeonCompleteType {
	Unopened = 0,
	Uncompleted = 1,
	Completed = 2,
	Unknown = 3
};

enum class ESBEffectShaderParamTarget {
	Actor = 0,
	Weapon_R = 1,
	Weapon_L = 2,
	Inventory_0 = 3,
	Inventory_1 = 4
};

enum class ESBEffectVisibleType {
	Default = 0,
	Battle = 1,
	UI = 2
};

enum class ESBHitDirection {
	Front = 0,
	Side = 1,
	Back = 2
};

enum class ESBEnemyActionTableActionType {
	None = 0,
	WaitAction = 1,
	SimpleAction = 2,
	WalkableMelee = 3,
	ThrowStone = 4,
	MagicAction = 5,
	ShieldGuard = 6,
	Tackle = 7
};

enum class ESBEnemyWalkingMode {
	Walk = 0,
	Run = 1,
	Dash = 2
};

enum class ESBEnemyDropItemConditionType {
	None = 0,
	Bonus = 1,
	Max = 2
};

enum class ESBEnemyDropItemType {
	Item = 0,
	Money = 1,
	Treasure = 2,
	Max = 3
};

enum class ESBEnemyExpBonusScaleType {
	OnePeople = 0,
	TwoPeople = 1,
	ThreePeople = 2,
	More = 3,
	Max = 4
};

enum class ESBEnemyReactionType {
	Default = 0,
	Middle = 1,
	Heavy = 2,
	SuperHeavy = 3,
	Max = 4
};

enum class ESBEnemySkillType {
	None = 0,
	Tactical = 1,
	Reactive = 2,
	Combo = 3,
	Max = 4
};

enum class EMarkerAfterChant {
	DestroyAtEndChant = 0,
	DestroyAtFired = 1,
	FixedAtEndChant = 2,
	FixedAtFired = 3,
	Targeting = 4
};

enum class EMarkerTargetingType {
	Fixed = 0,
	OwnerCharacter = 1,
	TargetActor = 2,
	TargetLocation = 3
};

enum class EMovabilityType {
	MV_NORMAL = 0,
	MV_UnmovableAndUnrotatable = 1,
	MV_UnmovableOnly = 2,
	MV_UnrotatableOnly = 3,
	Num = 4
};

enum class ESBEnemyActionManagerResult {
	Success = 0,
	Cancel = 1,
	Error = 2
};

enum class MarkerState {
	Waiting = 0,
	Chanting = 1,
	AfterChant = 2,
	Fired = 3
};

enum class ESBEnemyIconType {
	Normal = 0,
	Named = 1,
	Boss = 2,
	Target = 4
	Max = 5,
};

enum class ESBEnemyRaceType {
	None = 0,
	Boa = 1,
	HornGoat = 2,
	Horse = 3,
	Fox = 4,
	Hawk = 5,
	DarkEye = 6,
	Goblin = 20,
	LizardMan = 21,
	Kobold = 22,
	Ogre = 23
	Troll = 24,
	Human = 25,
	Dragonewt = 26,
	Insect = 40,
	InsectNest = 41,
	Viper = 42,
	QuadArm = 50,
	Golem = 51,
	Tyipod = 52,
	Homunculus = 60,
	Dragon = 61,
	Sandworm = 62,
	Max = 63,
};

enum class ESBEnemyTargetType {
	Projectile = 0,
	AdjustRootMotion = 1,
	Max = 2
};

enum class ESBEnemyWaveLocationType {
	Center = 0,
	Random = 1
};

enum class ESBEnemyWaveRuleType {
	None = 0,
	RemainingEnemies = 1,
	HP = 2
};

enum class ESBEventExecutorOption {
	RequireReceiver = 0,
	DontRequireReceiver = 1,
	MAX = 2
};

enum class EFacilityIconStatus {
	Enable = 0,
	Disable = 1
};

enum class EFacilityType {
	NONE = 0,
	CLASS_CHANGE = 1,
	PLAYER_CRAFT = 2,
	NPC_CRAFT = 3,
	CRAFT_RECEIVE = 4
};

enum class ESBEventTriggerConditionType {
	Unknown = 0,
	ScenarioFlag = 1,
	QuestStatus = 2,
	QuestStep = 3
};

enum class ESBFacilityType {
	None = 0,
	WeaponShop = 1,
	ItemShop = 2,
	HealStation = 3,
	TutorialGuide = 4,
	DungeonGuide = 5,
	WarpPoint = 6,
	LocalWarpPoint = 7,
	ExchangeShop = 8,
	ArmorShop = 9,
	QuestGuide = 10,
	Craft = 11,
	ClassChange = 12,
	SyntheShop = 13,
	ImagineLabo = 14,
	Aesthetician = 15,
	DyeingShop = 16,
	Restaurant = 17,
	ChallengeBox = 18,
	Arena = 19,
	Warehouse = 20,
	Guild = 21,
	GachaShop = 22,
	WeaponRemodeling = 23,
	MemoryStand = 24,
	CoinBower = 25,
	TimeAttack = 26
};

enum class EFieldStatus {
	Available = 0,
	Unavailable = 1,
	Visible = 2,
	Visible_NoDispose = 3,
	Invisible = 4
};

enum class ESBFieldStatusConditionType {
	Unknown = 0,
	QuestStatus = 1,
	ScenarioFlag = 2
};

enum class ESBGatherPointLotResult {
	Success = 0,
	InternalError = 1,
	InvalidData = 2,
	ItemStorageSizeOver = 3,
	InvalidObjectId = 4,
	CantLootObjectId = 5,
	InvalidMasterTreasureID = 6,
	GatherPointLotNoLot = 7,
	NotFoundObjectIsServerActor = 8,
	NotAuthor = 9,
	NotServer = 10,
	NotPlayer = 11,
	NotPlayerState = 12,
	CantInteractReach = 13,
	InvalidMasterData0 = 14,
	InvalidMasterData1 = 15,
	InvalidMasterData2 = 16,
	InvalidMasterData3 = 17,
	InvalidMasterTreasure = 18,
	ProcessingFieldActor = 19,
	InvalidMasterDataByItemAndWeapon = 20,
	InternalErrorByDBAccess0 = 21,
	InternalErrorByDBAccess1 = 22,
	InternalErrorByDBAccess2 = 23,
	TresureLotFuncError = 24,
	FailedGetFieldActorPickupComponent = 25,
	LotItemTypeUnknown = 26
};

enum class ESBGatherPointType {
	Normal = 0,
	ChallengeBox = 1,
	MAX = 2
};

enum class ESBTreasureBoxLotResult {
	Success = 0,
	InternalError = 1,
	InvalidData = 2,
	ItemStorageSizeOver = 3,
	InvalidObjectId = 4,
	CantLootObjectId = 5,
	InvalidMasterTreasureID = 6,
	TresureLotNoLot = 7,
	NotFoundObjectIsServerActor = 8,
	NotAuthor = 9,
	NotServer = 10,
	NotPlayer = 11,
	NotPlayerState = 12,
	CantInteractReach = 13,
	InvalidMasterData0 = 14,
	InvalidMasterData1 = 15,
	InvalidMasterData2 = 16,
	InvalidMasterData3 = 17,
	InvalidMasterTreasure = 18,
	ProcessingFieldActor = 19,
	InvalidMasterDataByItemAndWeapon = 20,
	InternalErrorByDBAccess0 = 21,
	InternalErrorByDBAccess1 = 22,
	InternalErrorByDBAccess2 = 23,
	TresureLotFuncError = 24
};

enum class EFootPrintSide {
	None = 0,
	Right = 1,
	Left = 2,
	RightForefoot = 3,
	LeftForefoot = 4,
	NUM = 5
};

enum class EFootPrintType {
	None = 0,
	WalkStart = 1,
	Walk = 2,
	Run = 3,
	Dash = 4,
	Jump = 5,
	Landing_S = 6,
	Landing_M = 7,
	Landing_L = 8,
	Down = 9,
	Down_M = 10,
	Down_L = 11,
	HeavyAttack = 12,
	Step = 13,
	Swimming = 14,
	DirectWaterIn = 15,
	DirectWaterOut = 16
};

enum class ESBFoliageReactions {
	Radial = 0,
	Speed = 1,
	Height = 2
};

enum class ESBKeyConfigAction {
	None = 0,
	Pad_Begin = 1,
	Pad_Dash = 2,
	Pad_AutoRun = 3,
	Pad_Jump = 4,
	Pad_MainAction = 5,
	Pad_SubAction = 6,
	Pad_LeftSkill = 7,
	Pad_RightSkill = 8,
	Pad_Skill1 = 9,
	Pad_Skill2 = 10,
	Pad_Skill3 = 11,
	Pad_Skill4 = 12,
	Pad_SpecialSkill = 13,
	Pad_Dodge = 14,
	Pad_Interaction = 15,
	Pad_Reload = 16,
	Pad_ItemShortcut1 = 17,
	Pad_ItemShortcut2 = 18,
	Pad_ItemShortcut3 = 19,
	Pad_ItemShortcut4 = 20,
	Pad_ItemShortcut5 = 21,
	Pad_ItemShortcut6 = 22,
	Pad_ItemShortcut7 = 23,
	Pad_ItemShortcut8 = 24,
	Pad_ShortcutExec = 25,
	Pad_ShortcutMoveLeft = 26,
	Pad_ShortcutMoveRight = 27,
	Pad_ShortcutPageNext = 28,
	Pad_ShortcutPageBack = 29,
	Pad_MainMenu = 30,
	Pad_ChatWindow = 31,
	Pad_ImagineArts = 32,
	Pad_ImagineArts2 = 33,
	Pad_ImagineMount = 34,
	Pad_CameraReset = 35,
	Pad_LockOn = 36,
	Pad_Function = 37,
	Pad_Function2 = 38,
	Pad_SupplyShortcut1 = 39,
	Pad_SupplyShortcut2 = 40,
	Pad_SupplyShortcut3 = 41,
	Pad_SupplyShortcut4 = 42,
	Pad_ShortcutRing = 43,
	Pad_End = 44,
	KB_Begin = 45,
	KB_MoveFront = 46,
	KB_MoveBack = 47,
	KB_MoveLeft = 48,
	KB_MoveRight = 49,
	KB_Walk = 50,
	KB_Dash = 51,
	KB_AutoRun = 52,
	KB_Jump = 53,
	KB_MainAction = 54,
	KB_SubAction = 55,
	KB_LeftSkill = 56,
	KB_RightSkill = 57,
	KB_Skill1 = 58,
	KB_Skill2 = 59,
	KB_Skill3 = 60,
	KB_Skill4 = 61,
	KB_SpecialSkill = 62,
	KB_Dodge = 63,
	KB_Interaction = 64,
	KB_Reload = 65,
	KB_ItemShortcut1 = 66,
	KB_ItemShortcut2 = 67,
	KB_ItemShortcut3 = 68,
	KB_ItemShortcut4 = 69,
	KB_ItemShortcut5 = 70,
	KB_ItemShortcut6 = 71,
	KB_ItemShortcut7 = 72,
	KB_ItemShortcut8 = 73,
	KB_ShortcutPageNext = 74,
	KB_ShortcutPageBack = 75,
	KB_MainMenu = 76,
	KB_ChatWindow = 77,
	KB_ImagineArts = 78,
	KB_ImagineArts2 = 79,
	KB_ImagineMount = 80,
	KB_CameraPitchUp = 81,
	KB_CameraPitchDown = 82,
	KB_CameraYawLeft = 83,
	KB_CameraYawRight = 84,
	KB_CameraZoomIn = 85,
	KB_CameraZoomOut = 86,
	KB_CameraReset = 87,
	KB_LockOn = 88,
	KB_LockOnTargetRight = 89,
	KB_LockOnTargetLeft = 90,
	KB_Function = 91,
	KB_QuickAccess_MyCharacter = 92,
	KB_QuickAccess_Inventory = 93,
	KB_QuickAccess_Quest = 94,
	KB_QuickAccess_Map = 95,
	KB_QuickAccess_Library = 96,
	KB_QuickAccess_Contents = 97,
	KB_QuickAccess_Party = 98,
	KB_QuickAccess_Guild = 99,
	KB_QuickAccess_Gacha = 100,
	KB_QuickAccess_Option = 101,
	KB_QuickAccess_Photo = 102,
	KB_QuickAccess_Hud = 103,
	KB_QuickAccess_Communicate = 104,
	KB_SupplyShortcut1 = 105,
	KB_SupplyShortcut2 = 106,
	KB_SupplyShortcut3 = 107,
	KB_SupplyShortcut4 = 108,
	KB_ShortcutRing = 109,
	KB_End = 110,
	Max = 111
};

enum class ESBKeyConfigFloatParam {
	None = 0,
	Pad_LeftStickInputThresholdX = 1,
	Pad_LeftStickInputStrengthX = 2,
	Pad_LeftStickInputThresholdY = 3,
	Pad_LeftStickInputStrengthY = 4,
	Pad_RightStickInputThresholdX = 5,
	Pad_RightStickInputStrengthX = 6,
	Pad_RightStickInputThresholdY = 7,
	Pad_RightStickInputStrengthY = 8,
	Pad_CameraSpeedRateYaw = 9,
	Pad_CameraSpeedRatePitch = 10,
	Pad_AimAssist_FitTargetStrength = 11,
	Pad_AimAssist_FollowTargetStrength = 12,
	Pad_AimAssist_CameraBrakeStrength = 13,
	KB_CameraSpeedRateYaw = 14,
	KB_CameraSpeedRatePitch = 15,
	KB_AimAssist_FitTargetStrength = 16,
	KB_AimAssist_FollowTargetStrength = 17,
	KB_AimAssist_CameraBrakeStrength = 18,
	Mouse_InputStrength = 19,
	Mouse_AimAssist_FitTargetStrength = 20,
	Mouse_AimAssist_FollowTargetStrength = 21,
	Mouse_AimAssist_CameraBrakeStrength = 22,
	Max = 23
};

enum class ESBKeyConfigGamepadKey {
	None = 0,
	X = 1,
	Y = 2,
	A = 3,
	B = 4,
	L1 = 5,
	L2 = 6,
	L3 = 7,
	R1 = 8,
	R2 = 9,
	R3 = 10,
	Start = 11,
	Select = 12,
	Direction_Up = 13,
	Direction_Down = 14,
	Direction_Left = 15,
	Direction_Right = 16,
	Fn_Begin = 17,
	Fn_X = 18,
	Fn_Y = 19,
	Fn_A = 20,
	Fn_B = 21,
	Fn_L3 = 22,
	Fn_R3 = 23,
	Fn_Direction_Up = 24,
	Fn_Direction_Down = 25,
	Fn_Direction_Left = 26,
	Fn_Direction_Right = 27,
	Fn_End = 28,
	Fn2_Begin = 29,
	Fn2_X = 30,
	Fn2_Y = 31,
	Fn2_A = 32,
	Fn2_B = 33,
	Fn2_L3 = 34,
	Fn2_R3 = 35,
	Fn2_Direction_Up = 36,
	Fn2_Direction_Down = 37,
	Fn2_Direction_Left = 38,
	Fn2_Direction_Right = 39,
	Fn2_End = 40,
	Max = 41
};

enum class ESBKeyConfigKeyboardKey {
	None = 0,
	A = 1,
	B = 2,
	C = 3,
	D = 4,
	E = 5,
	F = 6,
	G = 7,
	H = 8,
	I = 9,
	J = 10,
	K = 11,
	L = 12,
	M = 13,
	N = 14,
	O = 15,
	P = 16,
	Q = 17,
	R = 18,
	S = 19,
	T = 20,
	U = 21,
	V = 22,
	W = 23,
	X = 24,
	Y = 25,
	Z = 26,
	Escape = 27,
	Hyphen = 28,
	Caret = 29,
	BackSlash = 30,
	Backspace = 31,
	Tab = 32,
	AtSign = 33,
	LeftSquareBracket = 34,
	CapsLock = 35,
	SemiColon = 36,
	Colon = 37,
	RightSquareBracket = 38,
	Comma = 39,
	Period = 40,
	Slash = 41,
	Space = 42,
	Enter = 43,
	ScrollLock = 44,
	Pause = 45,
	Insert = 46,
	Home = 47,
	PageUp = 48,
	Delete = 49,
	End = 50,
	PageDown = 51,
	ArrowUp = 52,
	ArrowDown = 53,
	ArrowLeft = 54,
	ArrowRight = 55,
	LeftShift = 56,
	RightShift = 57,
	Shift = 58,
	LeftControl = 59,
	RightControl = 60,
	Control = 61,
	LeftAlt = 62,
	RightAlt = 63,
	Alt = 64,
	F1 = 65,
	F2 = 66,
	F3 = 67,
	F4 = 68,
	F5 = 69,
	F6 = 70,
	F7 = 71,
	F8 = 72,
	F9 = 73,
	F10 = 74,
	F11 = 75,
	F12 = 76,
	FullKey1 = 77,
	FullKey2 = 78,
	FullKey3 = 79,
	FullKey4 = 80,
	FullKey5 = 81,
	FullKey6 = 82,
	FullKey7 = 83,
	FullKey8 = 84,
	FullKey9 = 85,
	FullKey0 = 86,
	TenKeySlash = 87,
	TenKeyAsterisk = 88,
	TenKeyHyphen = 89,
	TenKeyPlus = 90,
	TenKey1 = 91,
	TenKey2 = 92,
	TenKey3 = 93,
	TenKey4 = 94,
	TenKey5 = 95,
	TenKey6 = 96,
	TenKey7 = 97,
	TenKey8 = 98,
	TenKey9 = 99,
	TenKey0 = 100,
	Max = 101
};

enum class ESBKeyConfigMouseKey {
	None = 0,
	LeftButton = 1,
	RightButton = 2,
	CenterButton = 3,
	ThumbButton1 = 4,
	ThumbButton2 = 5,
	WheelUp = 6,
	WheelDown = 7,
	Max = 8
};

enum class ESBOnlineSubsystemType {
	Unknown = 0,
	Session = 1,
	Party = 2,
	Chat = 3,
	Matchmaking = 4,
	Num = 5
};

enum class ECauseOfDetah {
	Unknown = 0,
	HitPoint0 = 1,
	FallDown = 2
};

enum class EPayloadState {
	PayloadState_Standby = 0,
	PayloadState_Battle = 1,
	PayloadState_BattleResult = 2,
	PayloadState_GameResult = 3,
	PayloadState_Max = 4
};

enum class ESBContentExitTravelTarget {
	PreviousMap = 0,
	LastTravelCity = 1
};

enum class ESBDungeonNormalProgress {
	WaitJoin = 0,
	WaitStart = 1,
	Playing = 2,
	Cleared = 3,
	WaitExit = 4,
	GameOver = 5
};

enum class ESBDungeonResultCause {
	Clear = 0,
	Fail = 1,
	Retire = 2
};

enum class ESBPayloadGameTurnState {
	None = 0,
	Defense = 1,
	Attack = 2,
	Max = 3
};

enum class ESBPayloadMoveState {
	None = 0,
	Forward = 1,
	Back = 2,
	Max = 3
};

enum class ESBPayloadResultType {
	None = 0,
	Success = 1,
	Failure = 2,
	Max = 3
};

enum class ESBLobbyChangedType {
	Player = 0,
	Room = 1
};

enum class EGuildAcceptType {
	NeedCertification = 0,
	AutoCertification = 1,
	InviteOnly = 2
};

enum class EGuildMemberRole {
	INVALID = -1,
	BASIC_GUILD_MEMBER = 0,
	SUB_MASTER = 1,
	GRAND_MASTER = 2,
};

enum class EGuildPolicy {
	INVALID = 0,
	TYPE_BEGIN = 1,
	CONTENTS_ATTACK_MAIN = 1,
	COMMUNICATE_MAIN = 2,
	TYPE_MAX = 3,
};

enum class EHealProcResult {
	HealDone = 1,
	ShortOfMoney = 2,
	HealUnnecessary = 3
	HealCanceled = 4,
};

enum class EHealStationDialogMessage {
	HealChargeConfirm = 1,
	ShortOfMoney = 2
	HealUnnecessary = 3,
};

enum class ESBGuildActivityTime {
	UNDECIDED = 0,
	EARLYMORNING = 1,
	MORNING = 2,
	NOON = 3,
	EVENING = 4,
	NIGHT = 5,
	LATENIGHT = 6,
	MAX = 7
};

enum class ESBGuildErrorCode {
	SUCCESS = 0,
	UNKNOWN_ERROR = 1,
	GUILD_NOT_FOUND = 2,
	GUILD_NOT_MEMBER = 3,
	GUILD_PERMISSION_DENIED = 4,
	GUILD_NO_ENTRY = 5,
	DUPLICATE_ENTRY = 6,
	GUILD_ALREDY_MEMBER = 7,
	DUPLICATE_NAME = 8,
	MEMBER_MAX = 9,
	NG_WORD = 10,
	CHARACTER_NOT_FOUND = 11
};

enum class ESBHTNStateComparison {
	Equal = 0,
	NotEqual = 1,
	LessThan = 2,
	LessThanEqual = 3,
	GreaterThan = 4,
	GreaterThanEqual = 5
};

enum class ESBHintShowTypes {
	MYCHARACTER = 0,
	ITEM_INVENTORY = 1,
	QUEST = 2,
	MAP = 3,
	COMMUNICATE = 4,
	EMOTE = 5,
	MATCHING = 6,
	PARTY = 7,
	OPTION = 8,
	DUNGEON = 9,
	NUM = 10
};

enum class ESBIKBoneNum {
	Two = 2
	Three = 3,
	Four = 4,
};

enum class ESBIKJointNum {
	Two = 2
	Three = 3,
	Four = 4,
};

enum class ESBLegIKRotateType {
	OneAxis = 0,
	TwoAxis = 1,
	ThreeAxis = 2,
	Num = 3
};

enum class ESBMaxShieldDurability {
	None = 0,
	FixedValue = 1,
	OwnerHP = 2
};

enum class ESBImagineCategory {
	Arts = 0,
	Passive = 1,
	Item = 2,
	Worker = 3
};

enum class ESBImagineSummonCharacter {
	None = 0,
	Mount = 1
};

enum class ESBInfluencePropagationType {
	Linear = 0,
	Constant = 1,
	Custom = 2
};

enum class EEquipableGender {
	Unknown = 0,
	Common = 1,
	Male = 2,
	Female = 3
};

enum class EInteractionTargetType {
	Default = 0,
	OtherCharacter = 1,
	Npc = 2,
	GatherPoint = 3,
	WarpPoint = 4,
	NoticeBoard = 5,
	Gimmick = 6,
	TreasureBox = 7
};

enum class EInterruptQuestConditionType {
	QuestAreaIn = 0,
	GimickAreaIn = 1,
	KillTarget_QuestArea = 2,
	KillTarget_GimmickArea = 3
};

enum class EInterruptQuestResult {
	Unknown = 0,
	Sucs = 1,
	Failed = 2
};

enum class EInterruptQuestStatus {
	Idle = 0,
	Loading = 1,
	Loaded = 2,
	InitWait = 3,
	Running = 4,
	Done = 5
};

enum class EItemCategory {
	Consumption = 0,
	Sale = 1,
	Smelting = 2,
	Craft = 3
};

enum class EItemEfficacyType {
	Invalid = 0,
	HPRecovery = 1,
	MPRecovery = 2,
	SkillRecastReset = 3,
	SpecialRecovery = 4,
	ArtsRecovery = 5,
	GiveDamageUp = 6,
	DamageRecieveDown = 7,
	FireStatusRecovery = 8,
	IceStatusRecovery = 9,
	ThunderStatusRecovery = 10,
	StaminaReduceCorrect = 11,
	HPMaxRateUp = 12,
	HPDotRecovery = 13,
	ChallengeBox = 14,
	ItemEfficacyType_Num = 15
};

enum class EItemObtainRouteType {
	Invalid = 0,
	Subdue = 1,
	Picking = 2,
	Craft = 3,
	DungeonClear = 4
};

enum class EItemType {
	ItemType_Invalid = 0,
	ItemType_Item = 1,
	ItemType_Weapon = 2,
	ItemType_Costume = 3,
	ItemType_Imagine = 5,
	ItemType_MountImagine = 6
	ItemType_Num = 7,
};

enum class EProtectorCategory {
	Unknown = 0,
	Head = 1,
	Body = 2,
	Hand = 3,
	Leg = 4,
	Shoes = 5,
	Accessory_HeadTop = 6,
	Accessory_Eye = 7,
	Accessory_Cheek = 8,
	Accessory_Ear = 9,
	Accessory_RightHandFinger = 10,
	Accessory_LeftHandFinger = 11,
	Accessory_Back = 12,
	Accessory_Hip = 13
};

enum class ESBCostumeMaterial {
	Normal = 0,
	Robe = 1,
	Leather_Plastic = 2,
	Light_Metal = 3,
	Metal = 4,
	Sneaker = 101,
	Heel = 102,
	Leather = 103,
	Leather_Light = 104,
	Leather_Heavy = 105,
};

enum class EItemAppraisalResultPhase {
	UNIDENTIFED = 0,
	UNDERAPPRAISA = 1,
	APPRAISED = 2,
	SALE = 3,
	END = 4,
	MAX = 5
};

enum class EItemFilterType {
	None = 0,
	Filter_WeaponType_ShieldSword = 1,
	Filter_WeaponType_Axe = 2,
	Filter_WeaponType_Bow = 3,
	Filter_WeaponType_Cane = 4,
	Filter_Imagine_Active = 5,
	Filter_Imagine_Passive = 6,
	Filter_Imagine_Passive_Position1 = 7,
	Filter_Imagine_Passive_Position2 = 8,
	Filter_Imagine_Passive_Position3 = 9,
	Filter_Imagine_Passive_Position4 = 10,
	Filter_Imagine_Passive_Position5 = 11,
	Filter_Effective_None = 12,
	Filter_Effective_Physics = 13,
	Filter_Effective_Earth = 14,
	Filter_Effective_Fire = 15,
	Filter_Effective_Ice = 16,
	Filter_Effective_Thunder = 17,
	Filter_Effective_Light = 18,
	Filter_Effective_Darkness = 19,
	Filter_Items_CanUse = 20,
	Filter_Items_Material = 21,
	Filter_Items_Item = 22,
	Filter_Items_Weapon = 23,
	Filter_Items_Costume = 24,
	Filter_Items_Accessory = 25,
	Filter_Items_Equipment = 26,
	Filter_Items_Imagine = 27,
	Filter_Items_MountImagine = 28,
	Filter_Locked = 29,
	Filter_Costume_Protector_Head = 30,
	Filter_Costume_Protector_Body = 31,
	Filter_Costume_Protector_Hand = 32,
	Filter_Costume_Protector_Leg = 33,
	Filter_Costume_Protector_Shoes = 34,
	Filter_Costume_Protector_Accessory_HeadTop = 35,
	Filter_Costume_Protector_Accessory_Eye = 36,
	Filter_Costume_Protector_Accessory_Cheek = 37,
	Filter_Costume_Protector_Accessory_Ear = 38,
	Filter_Costume_Protector_Accessory_RightHandFinger = 39,
	Filter_Costume_Protector_Accessory_LeftHandFinger = 40,
	Filter_Costume_Protector_Accessory_Back = 41,
	Filter_Costume_Protector_Accessory_Hip = 42,
	Filter_Quest_Slay = 43,
	Filter_Quest_Errand = 44,
	Filter_Quest_Collect = 45,
	Filter_Quest_Rebellion = 46,
	Filter_Quest_Berserker = 47,
	Filter_Quest_Blaster = 48,
	Filter_Quest_Magician = 49,
	Filter_Quest_Level1 = 50,
	Filter_Quest_Level11 = 51,
	Filter_Quest_Level21 = 52,
	Filter_Quest_Level31 = 53,
	Filter_Quest_Level41 = 54,
	Filter_Quest_CantReceive = 55,
	Filter_Quest_Category_Main = 56,
	Filter_Quest_Category_Sub = 57,
	Filter_Quest_Category_Class = 58,
	Filter_Quest_Category_Extra = 59,
	Filter_Quest_Category_ReleaseFunctions = 60,
	Filter_Imagine_IllustImagine = 61,
	Filter_LevelMax = 62,
	Filter_NotLevelMax = 63,
	Filter_SyntheableWeapons = 64,
	Filter_HasAbilities = 65,
	FILTER_MAX = 66
};

enum class EJingleType {
	None = 0,
	STORY_UPDATE = 1,
	QUEST_ACCEPT = 2,
	QUEST_UPDATE = 3,
	QUEST_CLEAR = 4,
	INTERRUPT_QUEST_ACCEPT = 5,
	INTERRUPT_QUEST_CLEAR = 6,
	INTERRUPT_QUEST_FAILED = 7,
	WEAPON_LEVEL_UP = 8,
	TUTORIAL_HELP = 9,
	RAID_BATTLE_START = 10,
	RAID_BATTLE_CLEAR = 11,
	RAID_BATTLE_FAILE = 12
};

enum class ESBItemSortType {
	Default_Time = 0,
	Default_Time_Reverse = 1,
	ItemId = 2,
	ItemId_Reverse = 3,
	ItemLevel = 4,
	ItemLevel_Reverse = 5,
	ItemType = 6,
	SortId = 7,
	SortId_Reverse = 8,
	Str = 9,
	Dex = 10,
	Vit = 11,
	Mnd = 12,
	Int = 13,
	HP = 14,
	Attack = 15,
	SORT_TYPE_MAX = 16
};

enum class ESBLevelSequenceType {
	Default = 0,
	Demo = 1
};

enum class EAreaMapNum {
	Num = 5,
};

enum class ELoadingType {
	Common = 0,
	Dungeon = 1,
	PvP = 2,
	Simple = 3,
	Max = 4
};

enum class EMapFuncIconType {
	MapFuncIcon_CurrMap = 0,
	MapFuncIcon_WorldMap = 1,
	MapFuncIcon_MapOneBefore = 2,
	MapFuncIcon_LayerToggle = 3,
	MapFuncIcon_Max = 4
};

enum class EMapPinType {
	MapPin_Type1 = 0,
	MapPin_Type2 = 1,
	MapPin_Type3 = 2,
	MapPin_Type4 = 3,
	MapPin_Type5 = 4,
	MapPin_Eraser = 5,
	MapPin_Max = 6
};

enum class EMapSymbolIconType {
	MapSymbolIcon_Player = 0,
	MapSymbolIcon_PartyMember = 1,
	MapSymbolIcon_PartyMember_Dead = 2,
	MapSymbolIcon_FieldEnemy = 3,
	MapSymbolIcon_MainQuest_Acceptable = 4,
	MapSymbolIcon_MainQuest_InProgress = 5,
	MapSymbolIcon_MainQuest_Reportable = 6,
	MapSymbolIcon_MainQuest_Unprocessable = 7,
	MapSymbolIcon_SubQuest_Acceptable = 8,
	MapSymbolIcon_SubQuest_InProgress = 9,
	MapSymbolIcon_SubQuest_Reportable = 10,
	MapSymbolIcon_SubQuest_Unprocessable = 11,
	MapSymbolIcon_ExtraQuest_Acceptable = 12,
	MapSymbolIcon_ExtraQuest_InProgress = 13,
	MapSymbolIcon_ExtraQuest_Reportable = 14,
	MapSymbolIcon_ExtraQuest_Unprocessable = 15,
	MapSymbolIcon_MainQuest_Acceptable_Outside = 16,
	MapSymbolIcon_MainQuest_InProgress_Outside = 17,
	MapSymbolIcon_MainQuest_Reportable_Outside = 18,
	MapSymbolIcon_MainQuest_Unprocessable_Outside = 19,
	MapSymbolIcon_SubQuest_Acceptable_Outside = 20,
	MapSymbolIcon_SubQuest_InProgress_Outside = 21,
	MapSymbolIcon_SubQuest_Reportable_Outside = 22,
	MapSymbolIcon_SubQuest_Unprocessable_Outside = 23,
	MapSymbolIcon_ExtraQuest_Acceptable_Outside = 24,
	MapSymbolIcon_ExtraQuest_InProgress_Outside = 25,
	MapSymbolIcon_ExtraQuest_Reportable_Outside = 26,
	MapSymbolIcon_ExtraQuest_Unprocessable_Outside = 27,
	MapSymbolIcon_InterruptQuest_InProgress = 28,
	MapSymbolIcon_Shop_Weapon = 29,
	MapSymbolIcon_HealStation = 30,
	MapSymbolIcon_Shop_Item = 31,
	MapSymbolIcon_Shop_Peddler = 32,
	MapSymbolIcon_Npc_Tutorial = 33,
	MapSymbolIcon_Npc_Dungeon = 34,
	MapSymbolIcon_WarpPoint = 35,
	MapSymbolIcon_LocalWarpPoint = 36,
	MapSymbolIcon_InstanceDungeon = 37,
	MapSymbolIcon_Shop_Protector = 38,
	MapSymbolIcon_Npc_Quest = 39,
	MapSymbolIcon_Shop_Aesthe = 40,
	MapSymbolIcon_Shop_Dyeing = 41,
	MapSymbolIcon_ImagineLabo = 42,
	MapSymbolIcon_Workshop = 43,
	MapSymbolIcon_UserQuestHouse = 44,
	MapSymbolIcon_ExchangeShop = 45,
	MapSymbolIcon_CoinHouse = 46,
	MapSymbolIcon_Pin = 47,
	MapSymbolIcon_Craft = 48,
	MapSymbolIcon_ClassChange = 49,
	MapSymbolIcon_Shop_Synthe = 50,
	MapSymbolIcon_Restuarant = 51,
	MapSymbolIcon_ChallengeBox = 52,
	MapSymbolIcon_Arena = 53,
	MapSymbolIcon_Warehouse = 54,
	MapSymbolIcon_Guild = 55,
	MapSymbolIcon_GachaShop = 56,
	MapSymbolIcon_WeaponRemodeling = 57,
	MapSymbolIcon_MemoryStand = 58,
	MapSymbolIcon_TimeAttack = 59,
	MapSymbolIcon_Unknown = 60
};

enum class EPinMaxPerMap {
	Max = 5,
};

enum class ESBLiquidMemory {
	LevelMax = 2,
	AccumulateConditionMax = 5,
};

enum class ESBLiquidMemoryAccumulateConditionType {
	None = 0,
	TimeElapse = 1,
	EnemyKill = 2,
	Gather = 3,
	BattleImajinnCreate = 4,
	BattleImajinnEnhance = 5,
	Num = 6
};

enum class ESBLiquidMemoryAccumulationType {
	Quantitative = 0,
	Random = 1,
	Num = 2
};

enum class ESBLiquidMemoryCategory {
	None = 0,
	Craft_Weapon = 1,
	Craft_Item = 2,
	Craft_BattleImajinn = 3,
	Craft_Attachment = 4,
	Enhance_Weapon = 5,
	Enhance_BattleImajinn = 6,
	Enhance_Attachment = 7,
	Gather = 8,
	Enemy = 9,
	NpcFacility = 10,
	Num = 11
};

enum class ESBLiquidMemoryEfficacyType {
	None = 0,
	Craft_CriticalRateUp = 1,
	Craft_AbilityAddRateUp = 2,
	Craft_WeaponMinimumLevelHighRateUp = 3,
	Enhance_ExpUp = 4,
	GatherTimeReduce = 5,
	GatherSpotRepopRateUp = 6,
	Enemy_DropRateUp = 7,
	Enemy_ExpUp = 8,
	Enemy_MoneyUp = 9,
	NpcFacility_MoneyConsumptionDiscount = 10,
	Num = 11
};

enum class ESBLiquidMemoryEfficacyValueType {
	None = 0,
	Time = 1,
	Number = 2,
	Rate = 3,
	Num = 4
};

enum class ESBLiquidMemoryInfoSortType {
	LiquidMemoryId_Ascending = 0,
	LiquidMemoryId_Descending = 1,
	Num = 2
};

enum class ESBLocationInfoType {
	None = 0,
	InstanceDungeon = 1
};

enum class ESBMailAttachmentTypes {
	ID_MONEY = 0,
	ID_ENGRAM = 1,
	ID_ITEM = 2,
	ID_WEAPON = 3,
	ID_COSTUME = 4,
	ID_MAX = 5
};

enum class ESBMailReadStatus {
	MAIL_NOREAD = 0,
	MAIL_READED = 1,
	MAIL_GETED = 2,
	MAIL_TRANSED = 4
	MAIL_ALL = 7,
};

enum class ESBMailType {
	MailType_Management = 0,
	MailType_System = 1,
	MailType_Avator = 2,
	MailType_StoregeBox = 3
};

enum class ESBMakeupType {
	None = 0,
	Condition = 1,
	Lip = 2,
	Paint = 3,
	MAX = 4
};

enum class ESBMapErrorCode {
	SUCCESS = 0,
	HIT_NG_WORD = 1,
	UNKNOWN_ERROR = 2,
	MAX = 3
};

enum class ESBMapRegion {
	MapRegion_None = 0,
	MapRegion_R01 = 1,
	MapRegion_R02 = 2,
	MapRegion_R03 = 3,
	MapRegion_R04 = 4
};

enum class ESBMapType {
	MapType_None = 0,
	MapType_OutGame = 1,
	MapType_City = 2,
	MapType_Field = 3,
	MapType_InstanceDungeon = 4,
	MapType_InstanceArea = 5,
	MapType_OfflineBattle = 6,
	MapType_RaidBattle = 7,
	MapType_Arena = 8
};

enum class ESBImagineCategoryType {
	ImaginePassive = 0,
	ImagineActive = 1
};

enum class ESBMatchingGameStateStatusType {
	Matching = 0,
	Canceled = 1
};

enum class ESBMatchingMenuCancelMatchResult {
	Success = 0,
	UnknownFailure = 1,
	NotLeader = 2
};

enum class ESBMatchingMenuStartMatchResult {
	Success = 0,
	UnknownFailure = 1,
	NoContents = 2,
	NotLeader = 3,
	Unopened = 4,
	Test_OnlyOne = 5
};

enum class ESBObjectConditionType {
	Daytime = 0,
	Nighttime = 1,
	Alltime = 2
};

enum class ESBTreasureBoxRarity {
	NotUse = 0,
	Silver = 1,
	Gold = 2,
	Gorgeous = 3,
	Reserved0 = 4,
	Reserved1 = 5,
	Reserved2 = 6,
	Event = 7,
	Reserved3 = 8,
	Reserved4 = 9,
	Plant = 10,
	Mineral = 11,
	Aquatic = 12,
	AnyGatherPoint = 13
};

enum class ESBTreasureBoxRewardType {
	Money = 0,
	Item = 1,
	Imagine = 2
};

enum class EMoneyUIText {
	Currency = 1,
};

enum class ESBMatchingFailureType {
	Unknown = 0,
	InternalError = 1,
	Canceld = 2,
	Declined = 3,
	NotPartyLeader = 4,
	TooMuchMember = 5,
	AlreadyStartMatchmaking = 6,
	OnlyOneSelect = 7,
	LackTotalPower = 8,
	NotOpenDungeon = 9,
	Inviting = 10,
	Recruiting = 11,
	InvalidDungeon = 12
};

enum class ESBMissionQuestContentsType {
	None = 0,
	EnemyKill = 1,
	EnemyRaceKil = 2,
	InstanceDungeonClear = 3,
	InstanceDungeonTimeAttack = 4,
	UltArtsUsedNum = 5,
	ImagineArtsUsedNum = 6,
	ImagineSeedUsedNum = 7,
	ImagineSeedGetNum = 8,
	MoveDistance = 9,
	GatherNum = 10,
	GetMoney = 11,
	SubQuestClear = 12
};

enum class ESBMissionQuestType {
	None = 0,
	MainMission = 1,
	DailyMission = 2,
	WeeklyMission = 3,
	EventMission = 4
};

enum class EMyCharacterWeaponSortType {
	SortType_WeaponName = 0,
	SortType_WeaponAura = 1,
	SortType_WeaponRarity = 2,
	SortType_Max = 3
};

enum class ESBFireNotifiesAtPosition {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	None = 3
};

enum class ESBMovieSceneTextWindowGender {
	TWG_None = 0,
	TWG_Male = 1,
	TWG_Female = 2
};

enum class ESBRootMotionType {
	Disable = 1,
	Absolute = 2
	Relative = 4,
};

enum class NavigationTestingType {
	PathFinding = 0,
	RunAwayPathFinding = 1
};

enum class ENpcJob {
	Common = 0,
	Ordinary = 1,
	Guide = 2,
	Adventurer = 3,
	Noble = 4,
	Farmer = 5,
	Rogue = 6,
	Traveller = 7,
	Merchant = 8,
	Craftsman = 9,
	Guard = 10,
	Priest = 11,
	Sister = 12,
	Sailor = 13,
	Cook = 14,
	Artist = 15,
	Bandman = 16,
	Maid = 17,
	Butler = 18,
	Soothsayer = 19,
	Entertainer = 20,
	Scientist = 21,
	Exchange = 22,
	Brigade = 23,
	Sokoban = 24,
	ItemStore = 25,
	GeneralStore = 26,
	WeaponStore = 27,
	ImagineStore = 28,
	BeautySalon = 29,
	Dyers = 30,
	Arena = 31,
	CoinTei = 32,
	ClassChange = 33,
	Liquid = 34,
	ChallengeBox = 35,
	MAX = 36
};

enum class ENpcState {
	Idle = 0,
	Talk = 1,
	Stagger = 2
};

enum class ENpcType {
	None = 0,
	Shop = 1,
	GatherPoint = 2,
	WarpPoint = 3,
	QuestBoard = 4,
	DungeonEntrance = 5
};

enum class ESBNgWordTarget {
	All = 0,
	Name = 1,
	Text = 2
};

enum class ESBNpcLaneDirection {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2
};

enum class EPathDirection {
	OneWay = 0,
	BothWay = 1
};

enum class EPathTarget {
	None = 0
};

enum class ESBNpcPathFindQueryFlag {
	SearchName = 0,
	SearchTarget = 1,
	SearchDirection = 2
};

enum class ESBNpcSpawnPointCharacterType {
	RandomAppearance = 0,
	CharaCreate = 1,
	ExtraNPC = 2,
	Animal = 3
};

enum class EAddItemOpResult {
	Succeeded = 0,
	Error_CapacityOver = 1,
	Error_StackOver = 2
};

enum class ESBParabolaMoveType {
	SpawnDirection = 0,
	Degree = 1,
	ReachHeight = 2,
	ReachTime = 3,
	DirectionDegree = 4
};

enum class ESBStorageNumber {
	Inventory = -1,
	DungeonBag = -4,
	EquipmentBag = -5,
	CharacterStorage = 0,
	AccountStorage = 1,
	Drop = -99,
};

enum class EStorageSortRule {
	Default = 0,
	ItemId = 1,
	Kana = 2,
	ItemLevel = 3,
	Default_Reverse = 4,
	ItemId_Reverse = 5,
	Kana_Reverse = 6,
	ItemLevel_Reverse = 7,
	ItemType = 8
};

enum class ESBPartySystemTextType {
	Unknown = 0,
	ConfirmInvite = 1,
	InviteSuccess = 2,
	InviteFail = 3,
	InviteCancel = 4,
	InviteReceive = 5,
	ConfirmJoin = 6,
	JoinSuccess = 7,
	JoinFail = 8,
	MemberJoin = 9,
	ConfirmLeave = 10,
	LeaveSuccess = 11,
	LeaveFail = 12,
	MemberExit = 13,
	ConfirmRelease = 14,
	ReleaseSuccess = 15,
	ReleaseFail = 16,
	ReleasedParty = 17,
	ConfirmPromote = 18,
	PromoteSuccess = 19,
	PromoteFail = 20,
	PromotedLeader = 21,
	PromotedMember = 22,
	ConfirmKick = 23,
	KickSuccess = 24,
	KickFail = 25,
	KickedTarget = 26,
	KickedMember = 27,
	InacceptInvite = 28,
	ChannelMigrationReject = 29,
	ChannelMigrationCancel = 30,
	ChannelMigrationForbiddenCommandBlock = 31,
	PartyInviteFail = 32
};

enum class ESBPartyType {
	Persistent = 0,
	Instant = 1,
	Unknown = 2
};

enum class ESBSendPartyInvitationRequestCompleteResult {
	Success = 0,
	UnknownFailure = 1,
	InParty = 2,
	BuildingParty = 3,
	PlayingDemo = 4,
	InInstance = 5,
	Busy = 6,
	PlayInterruptQuest = 7
};

enum class ESBMissileGadgetState {
	Deactive = 0,
	Spawnable = 1,
	Activate = 2
};

enum class ESBPerformanceCameraPlayType {
	None = 0,
	Immediate = 1,
	Reserve = 2
};

enum class ESBPerformanceCameraWatchPointBase {
	None = 0,
	Player = 1,
	Target = 2,
	MGC_Meteor = 3
};

enum class EPhotoMode {
	Image_Upload_Max = 100,
	Image_Lock_Max = 20,
};

enum class ESBAdminCommandCallbackRequest {
	None = 0,
	OpenConsole = 1,
	CloseConsole = 2,
	CloseChatWindow = 3,
	OpenBookmarkList = 4,
	StartCommand = 5,
	FinishCommand = 6,
	Max = 7
};

enum class ESBAdminHideStatus {
	None = 0,
	Hide = 1,
	SHide = 2,
	Max = 3
};

enum class ESBChallengeBoxState {
	None = 0,
	ReceivedStart = 1,
	Start = 2,
	CountDown = 3,
	Main = 4,
	End = 5,
	Result = 6,
	Max = 7
};

enum class ENotificationDialogStatus {
	Close = 0,
	Open = 1,
	Pending = 2
};

enum class EGameInput {
	None = 0,
	DummyMove = 1,
	Walk = 2,
	Dash = 3,
	DummyAction = 4,
	MainAction = 5,
	SubAction = 6,
	LeftSkill = 7,
	RightSkill = 8,
	Skill1 = 9,
	Skill2 = 10,
	Skill3 = 11,
	Skill4 = 12,
	SpecialAction = 13,
	DodgeAction = 14,
	CommandDodge = 15,
	JumpAction = 16,
	Reload = 17,
	ImagineArts = 18,
	ImagineArts2 = 19,
	ImagineMount = 20,
	Interaction = 21,
	Function_Gamepad = 22,
	Function_Gamepad2 = 23,
	Function_Keyboard = 24,
	DummyButton = 25,
	LeftMouseButton = 26,
	RightMouseButton = 27,
	PadUp = 28,
	PadDown = 29,
	PadRight = 30,
	PadLeft = 31,
	DummySkill = 32,
	SkillGunAim = 33,
	SkillMagicWall = 34,
	SkillRideStart = 35,
	SkillGuard = 36,
	SkillGunFire = 37,
	SkillBowShot = 38,
	SkillPoisonShot = 39,
	SkillHealShot = 40,
	SkillAxeCombo = 41,
	SkillCounterBarrier = 42,
	SkillSupportGadget = 43,
	SkillHavocStomp = 44,
	LABEL_NUM = 45
};

enum class ESBFieldActorExeWebAPI {
	SavedFieldActorPoint = 0,
	SetFlagFieldActorPoint = 1
};

enum class ESBFieldActorInteractPoint {
	GatherPoint = 0,
	TreasureBox = 1
};

enum class ESBInteractionState {
	Search = 0,
	Input = 1,
	Action = 2
};

enum class ESBInteractionType {
	None = 0,
	InteractionTarget = 1,
	MeshClimbing = 2,
	Resurrection = 3,
	CureBadCondition = 4,
	Sheathe = 5
};

enum class ESBPlayerClassCommonParam {
	None = 0,
	AutoSheatheTime = 1,
	ComboKeepTime = 2,
	ComboCountMax = 3,
	CommandInputTime = 4,
	SkillPreInputHoldTime = 5,
	SkillPreInputActiveTime = 6,
	SkillPreInputLaunchWaitTime = 7,
	SkillPreInputMoveDirectionUpdatableTime = 8,
	AimAngleReplicateTime = 9,
	ResurrectionTime = 10,
	ResurrectionSubtractTime = 11,
	ResurrectionMaxHPDecreaseRate = 12,
	ResurrectionMaxHPDecreaseMin = 13,
	RayCheckForPlayerReticle = 14,
	MinMoveInput = 15,
	CityCapsuleRadius = 16,
	SpawnEffectWaitTime = 17,
	DashInputAutoSheatheTime = 18,
	ControlCameraByMoveInputTime = 19,
	PerformanceCameraCancelLookInput = 20,
	MashingInputInterval = 21,
	Max = 22
};

enum class ECustomMoveMode {
	CustomMoveMode_None = 0,
	CustomMoveMode_MeshClimbing = 1,
	CustomMoveMode_CharaCreate = 2
};

enum class EMeshClimbingState {
	MeshClimbing_None = 0,
	MeshClimbing_Start_ParamSet = 1,
	MeshClimbing_Start_MoveRootMotion = 2,
	MeshClimbing_Start_SafeMove = 3,
	MeshClimbing_BetweenPoints = 4,
	MeshClimbing_AtPoint = 5
};

enum class ESBPassiveArtsModifyCategory {
	None = 0,
	STR = 1,
	VIT = 2,
	DEX = 3,
	MND = 4,
	INT = 5,
	HP = 6,
	Attack = 7,
	Defense = 8,
	RecoveryPower = 9,
	CriticalRate = 10,
	StaminaMax = 11,
	SpecialArtsRecast = 12,
	DodgeDistance = 13,
	GiveResurrectionSpeed = 14,
	ResurrectedHP = 15,
	GiveHealAmount = 16,
	ShiledDamage = 17,
	ShiledRegenSpeed = 18,
	BSK_IncComboGauge = 19,
	BSK_MaxComboGaugeBonus = 20,
	MGC_MPRegenAmount = 21,
	MGC_MaxMP = 22
};

enum class ESBPassiveStatusParamCalcType {
	None = 0,
	Add = 1,
	Percent = 2
};

enum class ESBPlayerBattlePresetEquipItem {
	Weapon = 0,
	ClassSkill_1 = 1,
	ClassSkill_2 = 2,
	ClassSkill_3 = 3,
	ClassSkill_4 = 4,
	Ability_1 = 5,
	Ability_2 = 6,
	Ability_3 = 7,
	BattleImagen_1 = 8,
	BattleImagen_2 = 9,
	AttachmentHead = 10,
	AttachmentRightArm = 11,
	AttachmentLeftArm = 12,
	AttachmentRightLeg = 13,
	AttachmentLeftLeg = 14,
	Max = 15,
	None = 255,
};

enum class ESBPlayerCostumePresetEquipItem {
	Hat = 0,
	Upper = 1,
	Gloves = 2,
	Lower = 3,
	Shoes = 4,
	Accessory_1 = 5,
	Accessory_2 = 6,
	Accessory_3 = 7,
	Max = 8,
	None = 255,
};

enum class ESBPlayerPresetEquipItem {
	BatttleWeapon = 0,
	BatttleClassSkill_1 = 1,
	BatttleClassSkill_2 = 2,
	BatttleClassSkill_3 = 3,
	BatttleClassSkill_4 = 4,
	BatttleAbility_1 = 5,
	BatttleAbility_2 = 6,
	BatttleAbility_3 = 7,
	BatttleBattleImagen_1 = 8,
	BatttleBattleImagen_2 = 9,
	BatttleAttachmentHead = 10,
	BatttleAttachmentRightArm = 11,
	BatttleAttachmentLeftArm = 12,
	BatttleAttachmentRightLeg = 13,
	BatttleAttachmentLeftLeg = 14,
	CostumeHat = 15,
	CostumeUpper = 16,
	CostumeGloves = 17,
	CostumeLower = 18,
	CostumeShoes = 19,
	CostumeAccessory_1 = 20,
	CostumeAccessory_2 = 21,
	CostumeAccessory_3 = 22,
	Max = 23,
	None = 255,
};

enum class ESBPlayerPresetType {
	None = 0,
	BattleSet = 1,
	CostumeSet = 2,
	Max = 3
};

enum class ESBTurnPlayerActorDirection {
	None = 0,
	Left = 1,
	Right = 2
};

enum class ESBTurnPlayerActorType {
	None = 0,
	UnsheatheMove = 1,
	CurveMove = 2,
	Camera = 3,
	TargetComponent = 4,
	LockonTargetComponent = 5,
	Location = 6,
	SkillMarker = 7,
	InteractionTarget = 8,
	EmoteTarget = 9,
	GuardDirection = 10
};

enum class ESBSkillMarkerAim {
	None = 0,
	ReticleFront = 1,
	ReticleFrontDown = 2,
	ReticleHorizontalFrontDown = 3,
	Player = 4,
	PlayerFront = 5,
	PlayerFrontDown = 6,
	TargetDown = 7
};

enum class ESBSkillMarkerPlace {
	None = 0,
	Ground = 1,
	Terrain = 2,
	Air = 3
};

enum class ESBSkillMarkerRange {
	None = 0,
	Direct = 1,
	Horizontal = 2
};

enum class ESBSkillMarkerRayCollision {
	Terrain = 0,
	Enemy = 1,
	TerrainAndEnemy = 2
};

enum class ESBPlayerStartType {
	Unknown = 0,
	FieldMove = 1,
	WarpPoint = 2,
	DungeonExit = 3,
	LocalWarpPoint = 4,
	EventPoint = 5
};

enum class ESBEnableTarget {
	Enable = 0,
	Disable_Invald = 1,
	Disable_NonTargetable = 2,
	Disable_Dead = 3,
	Disable_CanAttack = 4,
	Disable_Range = 5,
	Disable_Block = 6
};

enum class ETargetState {
	TargetState_None = 0,
	TargetState_Auto = 1,
	TargetState_Multi = 2,
	TargetState_LockOn = 3,
	TargetState_LockOnSuspend = 4
};

enum class EActionSwitchType {
	None = 0,
	Hold = 1,
	Toggle = 2
};

enum class EPlayerActionTagPower {
	ATPower_None = 0,
	ATPower_Light = 1,
	ATPower_High = 2,
	ATPower_Num = 3
};

enum class EPlayerActionTagRange {
	ATRange_None = 0,
	ATRange_Short = 1,
	ATRange_Long = 2,
	ATRange_Num = 3
};

enum class EPlayerActionTagTarget {
	ATTarget_None = 0,
	ATTarget_Single = 1,
	ATTarget_Multi = 2,
	ATTarget_Num = 3
};

enum class EPlayerActionTagType {
	ATType_None = 0,
	ATType_Damage = 1,
	ATType_Healing = 2,
	ATType_Support = 3,
	ATType_Num = 4
};

enum class EPlayerStateMachine {
	None = 0,
	Main = 1,
	AimBody = 2,
	AimOffset = 3
};

enum class ESBAimDirection {
	None = 0,
	Camera = 1,
	TargetComponent = 2,
	LockonTargetComponent = 3,
	GuardDirection = 4,
	Fixed = 5
};

enum class ESBAppearEffectType {
	None = 0,
	Warp = 1,
	LocalWarp = 2,
	Respawn = 3
};

enum class ESBAttackType {
	Attack_Light = 0,
	Attack_LightSpecial = 1,
	Attack_High = 2,
	Attack_HighSpecial = 3,
	Attack_Num = 4
};

enum class ESBClassType {
	None = 0,
	ShadowAvatar = 1,
	SwordSlayer = 2,
	Artist = 3,
	Gunslinger = 4,
	Splash = 5,
	Blaster = 6,
	Berserker = 7,
	Engineer = 8,
	Striker = 9,
	Slayer = 10,
	Magician = 11,
	Rebellion = 12,
	ShortRanger = 13,
	LongRanger = 14,
	ImagineTrans = 15,
	Vanguard = 16,
	Sentinel = 17,
	HeavyArm = 18,
	Max = 19
};

enum class ESBDisappearEffectType {
	None = 0,
	Warp = 1,
	Death = 2,
	FallDeath = 3
};

enum class ESBHostility {
	Unknown = 0,
	Friendly = 1,
	Hostility = 2,
	HostilityNotAttack = 3,
	Max = 4
};

enum class ESBMoveInputDirection {
	None = 0,
	Front = 1,
	Right = 2,
	Left = 3,
	Back = 4,
	Neutral = 5
};

enum class ESBOnlineStatus {
	Online = 0,
	PlayingDemo = 1,
	InParty = 2,
	BuildingParty = 3,
	ApplyingInstance = 4,
	InInstance = 5,
	Busy = 6,
	AFK = 7,
	PlayInterruptQuest = 8,
	Max = 32,
};

enum class ESBPlayerActiveArtsSlotType {
	Slot1 = 0,
	Slot2 = 1,
	Slot3 = 2,
	Slot4 = 3,
	Max = 4
};

enum class ESBPlayerArtsType {
	Active = 0,
	Passive = 1,
	Max = 2
};

enum class ESBPlayerDamageCollisionTransformType {
	None = 0,
	Stand = 1,
	LieOnGround = 2
};

enum class ESBPlayerPassiveArtsSlotType {
	Slot1 = 0,
	Slot2 = 1,
	Slot3 = 2,
	Max = 3
};

enum class ESBPlayerPassiveImagineSlotType {
	Slot1 = 0,
	Slot2 = 1,
	Slot3 = 2,
	Slot4 = 3,
	Slot5 = 4,
	Max = 5
};

enum class ESBPlayerSkillActionType {
	None = 0,
	MainAction = 1,
	SubAction = 2,
	TacticalSkill = 3,
	SpecialSkill = 4,
	DodgeAction = 5,
	ImagineArts = 6
};

enum class ESBPlayerTransformCharacter {
	None = 0,
	Nappo = 1
};

enum class ESBPlayerWarpType {
	Unknown = 0,
	PartyMigration = 1
};

enum class ESkillActionPosition {
	SAP_Main = 0,
	SAP_Sub = 1,
	SAP_Skill1 = 2,
	SAP_Skill2 = 3,
	SAP_Skill3 = 4,
	SAP_Skill4 = 5,
	SAP_Special = 6,
	SAP_Dodge = 7,
	SAP_ImagineArts = 8,
	SAP_ImagineArts2 = 9,
	SAP_ImagineMount = 10,
	SAP_Num = 11,
	Begin = 0,
	End = 10,
};

enum class EStaminaType {
	None = 0,
	Jump = 1,
	Dash = 2,
	Num = 3
};

enum class ESBEnhanceErrorCode {
	SUCCESS = 0,
	UNKNOWN_ERROR = 1,
	LACK_RESOURCE = 2,
	LACK_ENGRAM = 3,
	NOT_WEAPON = 4,
	MAX_ENHANCED = 5,
	EQUIPED_WEAPON = 6,
	NOT_FOUND = 7
};

enum class ESBFollowStatusType {
	None = 0,
	Follow = 1,
	Followed = 2,
	MutualFollow = 3
};

enum class ESBPlayRateSwitch {
	Continue = 0,
	Variable = 1,
	Normal = 2,
	Toggle = 3
};

enum class ESBProfilePublicSettingType {
	All = 0,
	Community = 1,
	Guild = 2,
	Private = 3
};

enum class ESBTensionTagType {
	None = 0,
	AlwayPartyOK = 1,
	GoToDungeon = 2,
	Busy = 3,
	WelcomeFollow = 4,
	CanTrade = 5,
	RecruitPTM = 6,
	DoQuest = 7,
	DoPVP = 8,
	WillHelp = 9,
	RecruitGM = 10,
	NeedHelp = 11,
	Max = 12
};

enum class EProjectileAreaAttackSpawnOrder {
	Random = 0,
	Near = 1,
	Far = 2
};

enum class EProjectileChangeDamageName {
	None = 0,
	SpawnLength = 1,
	TotalLength = 2,
	RemainLifeTime = 3,
	RemainLifeTimeRate = 4,
	ElapsedLifeTime = 5,
	ElapsedLifeTimeRate = 6,
	TargetLength = 7,
	TargetLengthDirect = 8
};

enum class FProjectileBeamDirection {
	ActorRotation = 0,
	PlayerReticle = 1,
	InstigatorRotation = 2
};

enum class FProjectilePartyShotTargetType {
	AllPartyMember = 0,
	OnlyMyself = 1
};

enum class EAlimentTargetSide {
	All = 0,
	OnlyEnemy = 1,
	OnlyFriend = 2
};

enum class ECollisionOnOff {
	On = 0,
	Off = 1
};

enum class EHitEffectSpawnPosType {
	HitPosition = 0,
	SocketPosition = 1,
	ActorPosition = 2,
	InstigatorPosition = 3
};

enum class EHitEffectSpawnRotType {
	None = 0,
	ActorRotation = 1,
	HitActorRotation = 2,
	HitActorNormal = 3,
	HitActorSocketRotation = 4
};

enum class EMuzzleEffectSpawnPosType {
	SpawnPos = 0,
	Inventory0 = 1,
	Inventory1 = 2
};

enum class EMuzzleEffectSpawnRotType {
	ProjectileDir = 0,
	TargetDir = 1,
	Inventory0 = 2,
	Inventory1 = 3
};

enum class EProjectileEffectType {
	Hit = 0,
	GroundHit = 1,
	Muzzle = 2,
	SelfDead = 3,
	InstantTrail = 4,
	ShieldHit = 5,
	DurabilityZero = 6
};

enum class EProjectileShareHitKey {
	Instigator = 0,
	Spawner = 1
};

enum class ESBProjectileBeamDirectingType {
	BeamModule = 0,
	BeamMesh = 1,
	BeamParticle = 2
};

enum class ESelfDeadEffectSpawnRotType {
	None = 0,
	ProjectileDir = 1,
	TargetDir = 2
};

enum class EHomingType {
	HomingAcceleration = 0,
	HomingCorrectionAngle = 1,
	HomingCorrectionVerticalAngle = 2
};

enum class EProjectileForecastState {
	None = 0,
	WaitForecast = 1,
	Forecast = 2,
	WaitMain = 3,
	Main = 4,
	End = 5
};

enum class EChainPosInheritanceType {
	ActorPos = 0
};

enum class EChainRotInheritanceType {
	ActorRot = 0
};

enum class EDamageSide {
	OnlyEnemy = 0,
	OnlyFriend = 1,
	OnlyTargetEnemy = 2,
	OnlyTargetFriend = 3,
	Self = 4,
	All = 5
};

enum class EDamageType {
	None = 0,
	HPDamage = 1,
	HPRecovery = 2,
	HPDamageMPRecovery = 3,
	HPDamageMPRateRecovery = 4,
	HPFixDamage = 5,
	HPFixRateDamage = 6,
	HPFixRecovery = 7,
	HPFixRateRecovery = 8,
	Resurrection = 9,
	PerfectResurrection = 10,
	MPRecovery = 11
};

enum class EProjectileAttachTarget {
	None = 0,
	Invoker = 1,
	Target = 2,
	Spawner = 3
};

enum class EProjectileAttackKind {
	Straight = 0,
	Parabola = 1,
	AlongGround = 2,
	Fix = 3,
	Fix_disponly = 4,
	Beam = 5,
	RapidShot = 6,
	WideShot = 7,
	Forecast = 8,
	AreaAttack = 9,
	PartyShot = 10,
	CustomBP_DEF = 11
};

enum class EProjectileAttackType {
	NearAttack = 0,
	MagicAttack = 1
};

enum class EProjectileBaseDir {
	OwnerRotation = 0,
	InstigatorRotation = 1,
	SpawnerRotation = 2
};

enum class EProjectileChangeDamage {
	None = 0,
	Relative = 1,
	HitActorType = 2
};

enum class EProjectileChargeLevel {
	Level0 = 0,
	Level1 = 1,
	Level2 = 2,
	Level3 = 3
};

enum class EProjectileDirection {
	TargetDirection = 0,
	ProjectileDirection = 1,
	FixDirection = 2,
	SocketDirection = 3,
	ScreenViewDirection = 4
};

enum class EProjectileEffectAttachTargetType {
	Owner = 0,
	Mesh = 1
};

enum class EProjectileHitActorType {
	None = 0,
	SBPlayer = 1,
	SBEnemy = 2
};

enum class EProjectileHitChainChangeTarget {
	InheritanceTarget = 0,
	ChangeInvoker = 1
};

enum class EProjectileHitPossibleType {
	SamePlayer = 0,
	All = 1,
	NoHit = 2
};

enum class EProjectileHitRelative {
	Unknown = 0,
	Enemy = 1,
	Friend = 2
};

enum class EProjectileHomingConfigType {
	Default = 0,
	On = 1,
	Off = 2
};

enum class EProjectileInstantType {
	OnlyTarget = 0,
	BetweenTarget = 1,
	FixDistance = 2,
	Instigator = 3
};

enum class EProjectileNetworkRoleType {
	ReplicatedAuthority = 0,
	ReplicatedSimulated = 1,
	ReplicatedDelegateHitAuthority = 2,
	ReplicatedDelegateHitSimulated = 3,
	RemoteClientAuthority = 4,
	RemoteClientSimulated = 5,
	RemoteClientFromTargetAuthority = 6,
	RemoteClientFromTargetSimulated = 7,
	LocalAuthority = 8
};

enum class EProjectileNetworkSpawnType {
	AutoSetting = 0,
	SendToAllFromRemoteSpawn = 1,
	SendToAllFromTargetClient = 2,
	SendToServerFromDelegateHitAuth = 3,
	SendToServerFromReplicate = 4,
	OnlyClientSpawn = 5
};

enum class EProjectileNonTargetAction {
	ForwardInvoker = 0,
	Invoker = 1,
	ScreenViewDirection = 2
};

enum class EProjectileSwitchMoveType {
	Default = 0,
	ExternalControl = 1
};

enum class EProjectileWideShotLocation {
	OwnerActor = 0
};

enum class EProjectileWideShotRotation {
	OwnerActor = 0
};

enum class ESBProjectileAttachRule {
	SendWorldAttachWorld = 0,
	SendWorldConvLocalAttachLocal = 1
};

enum class ESBProjectileCollisionSpecificGroup {
	None = 0,
	Group01 = 1,
	Group02 = 2,
	Group03 = 3,
	Group04 = 4
};

enum class ESBProjectileCollisionSpecificUseType {
	Default = 0,
	UseAsDamageCollision = 1
};

enum class ESBProjectileCompTickType {
	AuthorityOnly = 0,
	ExcludeServer = 1,
	ServerAndClient = 2,
	NotServerAndClient = 3
};

enum class ESBProjectileHitResult {
	Success = 0,
	Success_Simulate = 1,
	Failed = 2,
	Failed_Avoid = 3
};

enum class ESBProjectileMeshCollisionType {
	Cylinder = 0,
	Custom = 1
};

enum class ESBProjectileSplashSize {
	Small = 0,
	Big = 1
};

enum class ESBRapidChangeTargetType {
	NoChangeTarget = 0,
	SeqRapidNumChagneTarget = 1,
	SeqOneFireChangeTarget = 2
};

enum class ESBRapidLotTarget {
	NoLot = 0,
	Sequence = 1,
	Ramdom = 2
};

enum class ESpawnRotType {
	FaceTarget = 0,
	AttackDirection = 1,
	SameOwner = 2,
	SameSocket = 3,
	InheritanceSpawnPos = 4,
	Up = 5,
	Down = 6,
	None = 7
};

enum class ESpawnType {
	ActorSocket = 0,
	ActorRoot = 1,
	SpawnerSocket = 2,
	SpawnerWeaponSocket = 3,
	SpawnerRootOffsetPosOnDir = 4,
	SpawnerRoot = 5,
	WeaponSocket = 6,
	WeaponSocketL = 7,
	WeaponRoot = 8,
	TargetCompOffsetPosOnDir = 9,
	TargetComponent = 10,
	TargetPoint = 11,
	FixPoint = 12,
	ForwardActor = 13
};

enum class EQuestUnlockConditionType {
	Unknown = 0,
	SpecificQuestStatus = 1,
	QuestStepArrived = 2,
	AnyClassLevel = 3,
	ScenarioFlag = 4,
	Num = 5
};

enum class EStorageApiType {
	UseItems = 0,
	DropItems = 1,
	MoveItems = 2
};

enum class EQuestConditionType {
	Unknown = 0,
	TalkNpc = 1,
	KillEnemy = 2,
	CollectItem = 3,
	ClearID = 4,
	ArriveAt = 5,
	PayedMoney = 6,
	Emote = 7,
	WarpPortal = 8,
	Interaction = 9,
	CraftItem = 10,
	AdventurerRankUp = 11,
	AnyCondition = 12,
	CollectTriggerByEnemy = 13,
	CollectTriggerByGather = 14,
	CollectTrigger = 15,
	Num = 16
};

enum class EQuestListFilterType {
	MainQuest = 0,
	SubQuest = 1,
	ClassQuest = 2,
	ExtraQuest = 3,
	ReleaseFunctionQuest = 4,
	Num = 5
};

enum class EAcceptedQuestErrorCode {
	None = 0,
	Error = 1,
	AlreadyAccepted = 2,
	PreconditionError = 3,
	Num = 4
};

enum class EQuestCategory1 {
	Unknown = 0,
	Normal = 1,
	Interrupt = 2
};

enum class EQuestCategory2 {
	Unknown = 0,
	Main = 1,
	Sub = 2,
	Extra = 3,
	Class = 4,
	ReleaseFunctions = 5
};

enum class EQuestCategory3 {
	Unknown = 0,
	Errand = 1,
	Slay = 2,
	Collect = 3,
	Traverse = 4
};

enum class EQuestCompleteResult {
	Success = 0,
	InvalidRequest = 1,
	InventoryNotCapacity = 2,
	EnougthDeliverables = 3,
	PreconditionError = 4
};

enum class EQuestContributionRank {
	None = 0,
	Bronze = 1,
	Silver = 2,
	Gold = 3,
	Num = 4
};

enum class EQuestIconType {
	None = 0,
	Start = 1,
	Target = 2,
	Report = 3,
	Stopping = 4,
	Num = 5
};

enum class EQuestRewardCategory {
	Common = 0,
	Choice = 1,
	Contribution = 2,
	Num = 3
};

enum class EQuestStatus {
	QuestStatus_Locked = 0,
	QuestStatus_NotReceived = 1,
	QuestStatus_Proceeding = 2,
	QuestStatus_Done = 3,
	QuestStatus_Close = 4,
	QuestStatus_Num = 5
};

enum class ERaidBattleGameResult {
	Unknown = 0,
	Sucs = 1,
	Failed = 2
};

enum class ERaidBattleGameStatus {
	Idle = 0,
	Loading = 1,
	Loaded = 2,
	Running = 3,
	Done = 4
};

enum class ERoomMakeFunction {
	RoomMakeRandom = 0,
	RoomMakeStart = 1,
	RoomMakeGoal = 2,
	RoomMakeEnemy = 3,
	RoomMakeTrap = 4,
	RoomMakeCollect = 5,
	Max = 6
};

enum class ESBConnectWayType {
	ConnectOneRight = 0,
	ConnectOneLeft = 1,
	ConnectOneTop = 2,
	ConnectOneBottom = 3,
	ConnectTwoRightBottom = 4,
	ConnectTwoLeftBottom = 5,
	ConnectTwoRightUp = 6,
	ConnectTwoLeftUp = 7,
	ConnectThreeRightUpBottom = 8,
	ConnectThreeRightLeftBottom = 9,
	ConnectThreeRightLeftUp = 10,
	ConnectThreeLeftUpBottom = 11,
	ConnectThreeFourAll = 12,
	Max = 13
};

enum class ESBQuest {
	CheckableNum = 1,
};

enum class RAID_BATTLE_SCORE {
	RAID_BATTLE_SCORE_MOST_DAMAGE = 0,
	RAID_BATTLE_SCORE_INSTANTANEOUS_DAMAGE = 1,
	RAID_BATTLE_SCORE_MOST_BUFF = 2,
	RAID_BATTLE_SCORE_MOST_RESUSCITATION = 3,
	RAID_BATTLE_SCORE_MOST_DEBUFF = 4,
	RAID_BATTLE_SCORE_GIMMICK_ATTACK = 5,
	RAID_BATTLE_SCORE_TARGET_KILL = 6,
	RAID_BATTLE_SCORE_MOST_TAKE_HITS = 7,
	RAID_BATTLE_SCORE_MAX = 8
};

enum class ERewardType {
	Invalid = 0,
	Money = 1,
	Engram = 2,
	BP = 3,
	Item = 4,
	Weapon = 5,
	Costume = 6,
	Imagine = 7,
	ClassExp = 8,
	BonusSkillPoint = 9,
	ClassSkillPoint = 10,
	MountImagine = 11,
	Num = 12
};

enum class ESBClassRepNodeMapping {
	NotRouted = 0,
	RelevantAllConnections = 1,
	Connection_CityPlayerCharacter = 2,
	Connection_CityPlayerState = 3,
	Connection_CityRepTest = 4,
	Connection_FieldEnemyCharacter = 5,
	Spatialize_Static = 6,
	Spatialize_Dynamic = 7,
	Spatialize_Dormancy = 8
};

enum class ESBRewardType {
	REWARD_TYPE_LUNO = 0,
	REWARD_TYPE_GC = 1,
	REWARD_TYPE_EXP = 2,
	REWARD_TYPE_ITEM = 3,
	REWARD_TYPE_WEAPON = 4,
	REWARD_TYPE_COSTUME = 5,
	REWARD_TYPE_IMAGINE_SEED = 6,
	REWARD_TYPE_MOUNT = 7,
	REWARD_TYPE_MISSION_COIN = 8,
	REWARD_TYPE_EMOTE = 9,
	REWARD_TYPE_STAMP = 10,
	REWARD_TYPE_IMAGINE_RECIPE = 11,
	REWARD_TYPE_BONUS_SKILL_POINT = 12,
	REWARD_TYPE_CLASS_SKILL_POINT = 13,
	REWARD_TYPE_ACHIEVEMENT = 14,
	REWARD_TYPE_LIQUID_MEMORY = 15
};

enum class ESBRouteGuideArea {
	AreaNONE = 0,
	AreaRED = 1,
	AreaGREEN = 2,
	AreaBLUE = 3,
	AreaALL = 4
};

enum class ESBConnectGameServerFailure {
	None = 0,
	Unknown = 1,
	NotFound = 2
};

enum class ESBScriptStatus {
	None = 0,
	Ready = 1,
	Running = 2
};

enum class ESBScriptVariableType {
	Integer = 0,
	Boolean = 1,
	String = 2
};

enum class ESerialCodeRewardType {
	Money = 0,
	Engram = 1,
	Item = 2,
	Weapon = 3,
	Costume = 4
};

enum class ESerialCodeType {
	AllOnce = 0,
	OnlyOnce = 1
};

enum class EShopType {
	Item = 0,
	Weapon = 1,
	Protector = 2,
	General = 3,
	Exchange = 4
};

enum class EShortcutIconType {
	F1 = 0,
	F2 = 1,
	F3 = 2,
	F4 = 3,
	F5 = 4,
	F6 = 5,
	F7 = 6,
	F8 = 7,
	Num = 8
};

enum class EShortcutType {
	None = 0,
	OwnItem = 1,
	Imagine = 2,
	Emotion = 3,
	Stamp = 4,
	Supply = 5,
	FixedPhrase = 6
};

enum class ESimpleAlertType {
	NotEnoughStamina = 0,
	Recasting = 1,
	NotRemainCount = 2,
	NoBullet = 3,
	NeedLockOn = 4,
	NotEnoughShieldDurability = 5,
	NotEnoughMagicPoint = 6,
	CannotFireBuffAmmo = 7,
	NotEnoughSpecialSkillGauge = 8,
	InvalidMarkerLocation = 9,
	BattleAreaCloseSoon = 10,
	ShieldIsBroken = 11
};

enum class ESBMuscleMass {
	Default = 0,
	Low = 1,
	High = 2,
	MAX = 3
};

enum class ESkillProjectileType {
	Base = 0,
	GunslingerNormal = 1,
	GunslingerAllyBuff = 2,
	GunslingerLockOnHoming = 3,
	GunslingerCharge = 4,
	SplashPoisonShot = 5,
	SplashHealShot = 6,
	EngineerSprayGun = 7,
	EngineerShotGun = 8,
	EngineerHealGadget = 9
};

enum class ESBAIObjective {
	Normal = 0,
	Fight = 1,
	Flee = 2,
	Custom = 3
};

enum class ESBAccumulateStatusAilmentType {
	Fire = 0,
	Ice = 1,
	Earth = 2,
	Thunder = 3,
	None = 4,
	Num = 5
};

enum class ESBEnemyStatusAilmentType {
	None = 0,
	Invincible = 1,
	FullHeal = 2,
	AutoHeal = 3,
	Num = 4
};

enum class ESBHitSESize {
	Small = 0,
	Middle = 1,
	Large = 2
};

enum class ESBStatusAilmentConditionTarget {
	None = 0,
	HP = 1,
	LastHitElapsedTime = 2,
	SpecialGauge = 3,
	Num = 4
};

enum class ESBStatusAilmentConditionType {
	AnyTime = 0,
	GreaterThanValue = 1,
	NotGreaterThanValue = 2,
	LessThanValue = 3,
	GreaterThanValueRate = 4,
	NotGreaterThanValueRate = 5,
	LessThanValueRate = 6,
	OKDispel = 7,
	ActiveStatusFlag = 8,
	DiactiveStatusFlag = 9,
	ActiveStatusHandle = 10,
	DiactiveStatusHandle = 11,
	ActiveStatusParts = 12,
	DeadInstigator = 13,
	SkillAttack = 14,
	ActiveParts = 15,
	DeactiveParts = 16,
	ActiveBattleMode = 17,
	DeactiveBattleMode = 18,
	InWater = 19,
	OutWater = 20,
	InBattleMap = 21,
	NotInBattleMap = 22,
	Num = 23
};

enum class ESBStatusAilmentIconType {
	None = 0,
	FireLv1 = 1,
	FireLv2 = 2,
	FireLv3 = 3,
	IceLv1 = 4,
	IceLv2 = 5,
	IceLv3 = 6,
	ThunderLv1 = 7,
	ThunderLv2 = 8,
	ThunderLv3 = 9,
	EarthLv1 = 10,
	EarthLv2 = 11,
	EarthLv3 = 12,
	LightLv1 = 13,
	LightLv2 = 14,
	LightLv3 = 15,
	DarknessLv1 = 16,
	DarknessLv2 = 17,
	DarknessLv3 = 18,
	Stun = 19,
	InvalidStun = 20,
	Sleep = 21,
	Poison = 22,
	Ferocious = 23,
	Fear = 24,
	Blind = 25,
	NoSkill = 26,
	Stamina0 = 27,
	NoItem = 28,
	Curse = 29,
	Stealth = 30,
	Weakness = 31,
	Invincible = 32,
	GuardBreak = 33,
	IncreaseGiveDamage = 34,
	DecreaseGiveDamage = 35,
	IncreaseReceiveDamage = 36,
	DecreaseReceiveDamage = 37,
	Drain = 38,
	SuperArmor = 39,
	HPRegenerate = 40,
	MPRegenerate = 41,
	RapidChargeSpeed = 42,
	SlowChargeSpeed = 43,
	ExpansionSkillRecastTime = 44,
	ReduceSkillRecastTime = 45,
	RepidMoveSpeed = 46,
	SlowMoveSpeed = 47,
	Protection = 48,
	ComboGaugeUp = 49,
	EMPowerUp = 50,
	PhysicalResistUp = 51,
	PhysicalResistDown = 52,
	MentalResistUp = 53,
	MentalResistDown = 54,
	FireAttackPowerUp = 55,
	IceAttackPowerUp = 56,
	ThunderAttackPowerUp = 57,
	EarthAttackPowerUp = 58,
	LightAttackPowerUp = 59,
	DarknessAttackPowerUp = 60,
	FireAttackPowerDown = 61,
	IceAttackPowerDown = 62,
	ThunderAttackPowerDown = 63,
	EarthAttackPowerDown = 64,
	LightAttackPowerDown = 65,
	DarknessAttackPowerDown = 66,
	FireResistUp = 67,
	IceResistUp = 68,
	ThunderResistUp = 69,
	EarthResistUp = 70,
	LightResistUp = 71,
	DarknessResistUp = 72,
	FireResistDown = 73,
	IceResistDown = 74,
	ThunderResistDown = 75,
	EarthResistDown = 76,
	LightResistDown = 77,
	DarknessResistDown = 78,
	Fire = 79,
	Ice = 80,
	Thunder = 81,
	Regenerate = 82,
	ReduceSpecialSkillRecastTime = 83,
	ExpansionSpecialSkillRecastTime = 84,
	ReduceImagineSkillRecastTime = 85,
	ExpansionImagineSkillRecastTime = 86
};

enum class ESBStatusAilmentRegisterState {
	None = 0,
	Additional = 1,
	Override = 2,
	Once = 3
};

enum class ESBStatusAilmentSustainedType {
	UserAction = 0,
	TimeLimit = 1,
	Once = 2
};

enum class ESBSTMasterDataType {
	EnemyParamMaster = 0
};

enum class ESBSystemMessageFlag {
	None = 0,
	PlayerLoggedIn = 1,
	GetItem_Single = 2,
	GetItem_Plural = 3,
	GetItemFailure_InventoryFull = 4,
	HealStation_HealDone = 5,
	GetEmote = 6,
	FailedQuitGame = 7,
	CantOpenDuringDead = 8,
	CantOpenDuringBattle = 9,
	CantOpenDuringAction = 10,
	CantStartDungeonDuringDead = 11,
	CantStartDungeonDuringBattle = 12,
	FailedFieldTravel = 13,
	ChatErrorSendTime = 14,
	ChatErrorBan = 15,
	LevelSyncApplied = 16,
	MAX = 17
};

enum class ESubMenuTermReason {
	SwitchMenu = 0,
	Close = 1
};

enum class ESubMenuTermRequestReply {
	Immediate = 0,
	Wait = 1,
	Never = 2
};

enum class ESystemSE {
	None = 0,
	Play_Sys_Config_mst = 1,
	Play_Sys_Config_bgm = 2,
	Play_Sys_Config_se = 3,
	Play_Sys_Config_vo = 4,
	Play_Sys_Config_sys = 5,
	Play_Sys_Config_env = 6,
	Play_Sys_Title_Start = 7,
	Play_Sys_ok_1 = 8,
	Play_Sys_ok_2 = 9,
	Play_Sys_hover = 10,
	Play_Sys_cancel = 11,
	Play_Sys_caution = 12,
	Play_Sys_forward = 13,
	Play_Sys_back = 14,
	Play_Sys_interact = 15,
	Play_Sys_open = 16,
	Play_Sys_count = 17,
	Play_Sys_alert = 18,
	Play_Sys_trade = 19,
	Play_Sys_countdown = 20,
	Play_Sys_warp_release = 21,
	Play_Sys_warp = 22,
	Play_Sys_warp_local = 23,
	Play_Sys_equip = 24,
	Play_Sys_imagine = 25,
	Play_Sys_revive = 26,
	Play_Sys_collect = 27,
	Play_Sys_recover = 28,
	Play_Sys_reward = 29,
	Play_Sys_speech = 30,
	Play_Sys_weaponup = 31,
	Play_Sys_display = 32,
	Play_Sys_rankup_1 = 33,
	Play_Sys_rankup_2 = 34,
	Play_Sys_rankup_3 = 35,
	Play_Sys_rankup_4 = 36,
	Play_Sys_breakthrough = 37,
	Play_Sys_select = 38,
	Play_Sys_menu_open = 39,
	Play_Sys_menu_close = 40,
	Play_Sys_window_open = 41,
	Play_Sys_window_close = 42,
	Play_Sys_itemdrop = 43,
	Play_Sys_item = 44,
	Play_Sys_max = 45,
	Play_Sys_chat_me = 46,
	Play_Sys_chat_others = 47,
	Play_Sys_follow = 48,
	Play_TUT_Target = 49,
	Play_TUT_Clear = 50
};

enum class ESBTextIdType {
	Number = 0,
	String = 1
};

enum class ETowerChallengeAchieveType {
	Unknown = 0,
	KillAllEnemy = 1,
	KillTargetEnemy = 2,
	DestructObject = 3,
	CorrectItem = 4,
	FreeCounter = 5
};

enum class ESBAttribute {
	Attribute_0 = 0,
	Attribute_1 = 1,
	Attribute_2 = 2,
	Attribute_3 = 3,
	Attribute_4 = 4,
	Attribute_5 = 5,
	Attribute_6 = 6,
	Attribute_7 = 7,
	Max = 8,
	None = 0,
	Physics = 1,
	Earth = 2,
	Fire = 3,
	Ice = 4,
	Thunder = 5,
	Light = 6,
	Darkness = 7,
	Begin = 2,
	End = 7,
};

enum class ESBBanType {
	BAN_TYPE_NONE = 0,
	BAN_TYPE_CHAT = 1,
	BAN_TYPE_LOGIN = 2
};

enum class ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues {
	Changeable = 0,
	UnChangeable_IsInMission = 1,
	UnChangeable_IsInBattleMode = 2,
	UnChangeable_IsMounting = 3
};

enum class ESBDayTime {
	Morning = 0,
	Noon = 1,
	Evening = 2,
	Night = 3,
	Max = 4
};

enum class ESBMapUIType {
	MapUITypeNone = 0,
	MapUITypeMapBlur = 1,
	MapUITypeMapBlurAndLocation = 2,
	MapUITypeMapLandscapeAndLocation = 3
};

enum class ESBMiniMapIconType {
	MiniMapIconTypePlayer = 0,
	MiniMapIconTypePartyPlayer = 1,
	MiniMapIconTypePartyPlayerDead = 2,
	MiniMapIconTypeEnemy = 3,
	MiniMapIconTypeNamedEnemy = 4,
	MiniMapIconTypeBossEnemy = 5,
	MiniMapIconTypeTargetEnemy = 6,
	MiniMapIconTypeWeaponShop = 7,
	MiniMapIconTypeItemShop = 8,
	MiniMapIconTypePeddler = 9,
	MiniMapIconTypeQuestNpc = 10,
	MiniMapIconTypeCraft = 11,
	MiniMapIconTypeClassChange = 12,
	MiniMapIconTypeCoinHouse = 13,
	MiniMapIconTypeDungeonGate = 14,
	MiniMapIconTypeWorldWerp = 15,
	MiniMapIconTypeLocalWerp = 16,
	MiniMapIconTypeMainQuestOrder = 17,
	MiniMapIconTypeSubQuestOrder = 18,
	MiniMapIconTypeMainQuestReport = 19,
	MiniMapIconTypeSubQuestReport = 20,
	MiniMapIconTypeMainQuestStopping = 21,
	MiniMapIconTypeSubQuestStopping = 22,
	MiniMapIconTypeMainQuestProgress = 23,
	MiniMapIconTypeSubQuestProgress = 24,
	MiniMapIconTypeIntrruptQuest = 25,
	MiniMapIconTypePin = 26,
	MiniMapIconTypeSyntheShop = 27,
	MiniMapIconTypeAesthe = 28,
	MiniMapIconTypeDyeingShop = 29,
	MiniMapIconTypeImagineLaboratory = 30,
	MiniMapIconTypeTradeShop = 31,
	MiniMapIconTypeRestaurant = 32,
	MiniMapIconTypeChallengeBox = 33,
	MiniMapIconTypeArena = 34,
	MiniMapIconTypeWarehouse = 35,
	MiniMapIconTypeGuild = 36,
	MiniMapIconTypeGachaShop = 37,
	MiniMapIconTypeExtraQuestOrder = 38,
	MiniMapIconTypeExtraQuestReport = 39,
	MiniMapIconTypeExtraQuestProgress = 40,
	MiniMapIconTypeExtraQuestStopping = 41,
	MiniMapIconTypeBase = 42,
	MiniMapIconTypeQuestArea = 43,
	MiniMapIconTypeNum = 44
};

enum class ESBPlayGameMode {
	Unknown = 0,
	Scenario = 1,
	Battle = 2
};

enum class ESBRarity {
	Common = 0,
	Uncommon = 1,
	Rare = 2,
	Epic = 3,
	Legend = 4,
	Max = 5
};

enum class ESBTutorialHelpCategoryType {
	None = 0,
	City = 1,
	Field = 2,
	Battle = 3,
	Multiplay = 4,
	Other = 5
};

enum class ESBTutorialHelpTextDispType {
	None = 0,
	Top = 1,
	Bottom = 2
};

enum class ESBUIKeyConfigAction {
	Unknown = 0,
	MainAction = 1,
	SubAction = 2,
	LeftSkill = 3,
	RightSkill = 4,
	Skill1 = 5,
	Skill2 = 6,
	Skill3 = 7,
	Skill4 = 8,
	SpecialSkill = 9,
	Jump = 10,
	Dodge = 11,
	Dash = 12,
	Interaction = 13,
	Reload = 14,
	CameraReset = 15,
	CommandMenu = 16,
	ChatMode = 17,
	LockOn = 18,
	LockOnLeft = 19,
	LockOnRight = 20,
	ImagineArts = 21,
	ImagineArts2 = 22,
	ImagineMount = 23,
	MoveFront = 24,
	MoveBack = 25,
	MoveLeft = 26,
	MoveRight = 27,
	Walk = 28,
	CameraPitchUp = 29,
	CameraPitchDown = 30,
	CameraYawLeft = 31,
	CameraYawRight = 32,
	CameraZoomIn = 33,
	CameraZoomOut = 34,
	Shortcut1 = 35,
	Shortcut2 = 36,
	Shortcut3 = 37,
	Shortcut4 = 38,
	Shortcut5 = 39,
	Shortcut6 = 40,
	Shortcut7 = 41,
	Shortcut8 = 42,
	ShortcutPageNext = 43,
	ShortcutPageBack = 44,
	Function = 45,
	Function2 = 46,
	QuickAccess_MyCharacter = 47,
	QuickAccess_Inventory = 48,
	QuickAccess_Quest = 49,
	QuickAccess_Map = 50,
	QuickAccess_Library = 51,
	QuickAccess_Contents = 52,
	QuickAccess_Party = 53,
	QuickAccess_Guild = 54,
	QuickAccess_Gacha = 55,
	QuickAccess_Option = 56,
	QuickAccess_Photo = 57,
	QuickAccess_Hud = 58,
	QuickAccess_Communicate = 59,
	AutoRun = 60,
	SupplyShortcut1 = 61,
	SupplyShortcut2 = 62,
	SupplyShortcut3 = 63,
	SupplyShortcut4 = 64,
	ShortcutRing = 65,
	KeyConfigActionMax = 66
};

enum class ESBUiAkEventCategory {
	Default = 0,
	Positive = 1,
	Negative = 2,
	Max = 3
};

enum class ESBMouseCursorType {
	Default = 0,
	MapPin = 1,
	MapEraser = 2,
	Max = 3
};

enum class ESBSkillType {
	Main = 0,
	Sub = 1,
	Skill1 = 2,
	Skill2 = 3,
	Skill3 = 4,
	Skill4 = 5,
	Special = 6,
	Dodge = 7,
	Pasive1 = 8,
	Pasive2 = 9,
	Max = 10
};

enum class ESBUIBlockerType {
	Default = 0,
	CommandMenu = 1,
	MAX = 2
};

enum class ESBUIType {
	DamageUI = 0,
	TargetCursor = 1,
	NamePlate = 2,
	BalloonWindow = 3,
	BattleHUD = 4,
	PlayerGauge = 5,
	SkillPalette = 6,
	MiniMap = 7,
	ChatWindow = 8,
	AcceptedQuest = 9,
	TutorialCtrlGuide = 10,
	LevelUpDisplay = 11,
	StepList = 12,
	TickerMessage = 13,
	TextWindow = 14,
	SelectWindow = 15,
	DungeonFinder = 16,
	QuestUpdateProgressInfo = 17,
	QuestClearInfo = 18,
	QuestBoard = 19,
	DungeonResult = 20,
	MainMenu = 21,
	VanguardHUD = 22,
	WizardHUD = 23,
	SwordSlayerHUD = 24,
	GunslingerHUD = 25,
	SplashHUD = 26,
	BlasterHUD = 27,
	BerserkerHUD = 28,
	EngineerHUD = 29,
	StrikerHUD = 30,
	SlayerHUD = 31,
	MagicianHUD = 32,
	RebellionHUD = 33,
	HealChainUI = 34,
	DebugMenu = 35,
	DebugCameraAdjust = 36,
	DebugCameraRotationSpeed = 37,
	Num = 38
};

enum class ESBUIVisibleSettingOwner {
	DebugMenu = 0,
	WarpAroundEffect = 1
};

enum class ESBWorldUIType {
	NormalBattle = 0,
	OfflineBattle = 1,
	ShadowAvatarBattle = 2,
	Unknown = 3,
	Max = 4
};

enum class EUIZOrder {
	DamageUI = 0,
	TargetCursor = 1,
	BalloonWindow = 2,
	BalloonWindowSelf = 3,
	HUD_Layer1 = 4,
	HUD_Layer2 = 5,
	HUD_Layer3 = 6,
	HUD_Layer4 = 7,
	HUD_Layer5 = 8,
	HUD_Layer6 = 9,
	HUD_Layer7 = 10,
	HUD_Layer8 = 11,
	HUD_Layer9 = 12,
	HUD_Layer10 = 13,
	HUD_Layer11 = 14,
	HUD_Layer12 = 15,
	HUD_Layer13 = 16,
	TickerMessage = 17,
	TextWindow = 18,
	DungeonFinder = 19,
	QuestUpdateProgressInfo = 20,
	QuestClearInfo = 21,
	DropDownText = 22,
	LevelUpUI = 23,
	QuestBoard = 24,
	QuestReportWindow = 25,
	MainMenu = 26,
	SubMenu = 27,
	Menu_Layer3 = 28,
	Menu_Layer4 = 29,
	Menu_Layer5 = 30,
	Menu_Layer6 = 31,
	Menu_Layer7 = 32,
	Menu_Layer8 = 33,
	Menu_Layer9 = 34,
	Menu_Layer10 = 35,
	Menu_Layer11 = 36,
	Menu_Layer12 = 37,
	Menu_Layer13 = 38,
	Menu_Layer14 = 39,
	Menu_Layer15 = 40,
	Menu_Layer16 = 41,
	Menu_Layer17 = 42,
	Menu_Layer18 = 43,
	Menu_Layer19 = 44,
	Notifications = 45,
	MyMoneyUI = 46,
	QuestJingle = 47,
	SystemMessage = 48,
	YesNoPopup = 49,
	Dialog = 50,
	OverlayMessage = 51,
	FadeFilter = 52,
	LoadingScreen = 53,
	SystemDialog = 54,
	Debug = 55,
	Num = 56
};

enum class ESBUtilityScoreFunction {
	Constant = 0,
	Linear = 1
};

enum class ESBUtilityScoreOperator {
	Min = 0,
	Max = 1,
	Average = 2
};

enum class ESBWayPointArea {
	AreaNONE = 0,
	AreaRED = 1,
	AreaGREEN = 2,
	AreaBLUE = 3,
	AreaALL = 4
};

enum class EEnvironmentType {
	Always = 0,
	Unsheathe = 1,
	Sheathe = 2
};

enum class ESBWeaponAttach {
	WA_Right = 0,
	WA_Left = 1,
	WA_Custom0 = 2,
	WA_Custom1 = 3,
	WA_Custom2 = 4,
	WA_Custom3 = 5,
	WA_Custom4 = 6,
	WA_Custom5 = 7,
	WA_Num = 8,
	WA_Invalid = 255,
};

enum class ESBWeaponComponentType {
	WeaponComponentType_Bow = 0,
	WeaponComponentType_Shine = 1
};

enum class ESBWeaponEquipType {
	WeaponEquipType_None = 0,
	WeaponEquipType_Main = 1,
	WeaponEquipType_Sub = 2
};

enum class ESBWeaponHiddenConditions {
	WHC_OwnerHidden = 0,
	WHC_GuardBreak = 1,
	WHC_Demo = 2,
	WHC_Notify = 3,
	WHC_Num = 4
};

enum class ESBWeaponShapeType {
	WeaponShapeType_None = 0,
	WeaponShapeType_Cutlery = 1,
	WeaponShapeType_Blunt = 2
};

enum class ESBWeaponStatus {
	AP = 0,
	HP = 1,
	STR = 2,
	VIT = 3,
	DEX = 4,
	INT = 5,
	MND = 6,
	ATTR = 7,
	SPC = 8,
	Max = 9
};

enum class ESBWeaponType {
	WeaponType_None = 0,
	WeaponType_HandAxe = 1,
	WeaponType_HandSword = 2,
	WeaponType_HandGun = 3,
	WeaponType_Rifle = 4,
	WeaponType_Spear = 5,
	WeaponType_Bow = 6,
	WeaponType_Staff = 7,
	WeaponType_Shield = 8,
	WeaponType_Club = 9
};

enum class ESBWeaponVisibilitySlot {
	WVSlot_All = 255,
	WVSlot_Right = 1,
	WVSlot_Left = 2,
	WVSlot_Both = 3,
	WVSlot_SheathedShield = 8,
	WVSlot_Other = 244,
	WVSlot_None = 0,
};

enum class EAutomationEventType {
	Info = 0,
	Warning = 1,
	Error = 2
};

enum class EAxis {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3
};

enum class EDataValidationResult {
	Invalid = 0,
	Valid = 1,
	NotValidated = 2
};

enum class EInterpCurveMode {
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5
};

enum class ELifetimeCondition {
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_Never = 15
	COND_Max = 16,
};

enum class ELocalizedTextSourceCategory {
	Game = 0,
	Engine = 1,
	Editor = 2
};

enum class ELogTimes {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3
};

enum class EMouseCursor {
	None = 0,
	Default = 1,
	TextEditBeam = 2,
	ResizeLeftRight = 3,
	ResizeUpDown = 4,
	ResizeSouthEast = 5,
	ResizeSouthWest = 6,
	CardinalCross = 7,
	Crosshairs = 8,
	Hand = 9,
	GrabHand = 10,
	GrabHandClosed = 11,
	SlashedCircle = 12,
	EyeDropper = 13
};

enum class EPixelFormat {
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_B8G8R8A8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_R32_FLOAT = 13,
	PF_G16R16 = 14,
	PF_G16R16F = 15,
	PF_G16R16F_FILTER = 16,
	PF_G32R32F = 17,
	PF_A2B10G10R10 = 18,
	PF_A16B16G16R16 = 19,
	PF_D24 = 20,
	PF_R16F = 21,
	PF_R16F_FILTER = 22,
	PF_BC5 = 23,
	PF_V8U8 = 24,
	PF_A1 = 25,
	PF_FloatR11G11B10 = 26,
	PF_A8 = 27,
	PF_R32_UINT = 28,
	PF_R32_SINT = 29,
	PF_PVRTC2 = 30,
	PF_PVRTC4 = 31,
	PF_R16_UINT = 32,
	PF_R16_SINT = 33,
	PF_R16G16B16A16_UINT = 34,
	PF_R16G16B16A16_SINT = 35,
	PF_R5G6B5_UNORM = 36,
	PF_R8G8B8A8 = 37,
	PF_A8R8G8B8 = 38,
	PF_BC4 = 39,
	PF_R8G8 = 40,
	PF_ATC_RGB = 41,
	PF_ATC_RGBA_E = 42,
	PF_ATC_RGBA_I = 43,
	PF_X24_G8 = 44,
	PF_ETC1 = 45,
	PF_ETC2_RGB = 46,
	PF_ETC2_RGBA = 47,
	PF_R32G32B32A32_UINT = 48,
	PF_R16G16_UINT = 49,
	PF_ASTC_4x4 = 50,
	PF_ASTC_6x6 = 51,
	PF_ASTC_8x8 = 52,
	PF_ASTC_10x10 = 53,
	PF_ASTC_12x12 = 54,
	PF_BC6H = 55,
	PF_BC7 = 56,
	PF_R8_UINT = 57,
	PF_L8 = 58,
	PF_XGXR8 = 59,
	PF_R8G8B8A8_UINT = 60,
	PF_R8G8B8A8_SNORM = 61,
	PF_R16G16B16A16_UNORM = 62,
	PF_R16G16B16A16_SNORM = 63,
	PF_PLATFORM_HDR_0 = 64,
	PF_PLATFORM_HDR_1 = 65,
	PF_PLATFORM_HDR_2 = 66,
	PF_NV12 = 67,
	PF_R32G32_UINT = 68,
	PF_MAX = 69
};

enum class ERangeBoundTypes {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2
};

enum class ESearchCase {
	CaseSensitive = 0,
	IgnoreCase = 1
};

enum class ESearchDir {
	FromStart = 0,
	FromEnd = 1
};

enum class EUnit {
	Micrometers = 0,
	Millimeters = 1,
	Centimeters = 2,
	Meters = 3,
	Kilometers = 4,
	Inches = 5,
	Feet = 6,
	Yards = 7,
	Miles = 8,
	Lightyears = 9,
	Degrees = 10,
	Radians = 11,
	MetersPerSecond = 12,
	KilometersPerHour = 13,
	MilesPerHour = 14,
	Celsius = 15,
	Farenheit = 16,
	Kelvin = 17,
	Micrograms = 18,
	Milligrams = 19,
	Grams = 20,
	Kilograms = 21,
	MetricTons = 22,
	Ounces = 23,
	Pounds = 24,
	Stones = 25,
	Newtons = 26,
	PoundsForce = 27,
	KilogramsForce = 28,
	Hertz = 29,
	Kilohertz = 30,
	Megahertz = 31,
	Gigahertz = 32,
	RevolutionsPerMinute = 33,
	Bytes = 34,
	Kilobytes = 35,
	Megabytes = 36,
	Gigabytes = 37,
	Terabytes = 38,
	Lumens = 39,
	Milliseconds = 43,
	Seconds = 44,
	Minutes = 45,
	Hours = 46,
	Days = 47,
	Months = 48,
	Years = 49
	Multiplier = 52,
	Percentage = 51,
	Unspecified = 53,
};

enum class EConsoleForGamepadLabels {
	None = 0,
	XBoxOne = 1,
	PS4 = 2
};

enum class EControllerHand {
	Left = 0,
	Right = 1,
	AnyHand = 2,
	Pad = 3,
	ExternalCamera = 4,
	Gun = 5,
	Special_1 = 6,
	Special_2 = 7,
	Special_3 = 8,
	Special_4 = 9,
	Special_5 = 10,
	Special_6 = 11,
	Special_7 = 12,
	Special_8 = 13,
	Special_9 = 14,
	Special_10 = 15,
	Special_11 = 16,
	ControllerHand_Count = 17
};

enum class ETouchIndex {
	Touch1 = 0,
	Touch2 = 1,
	Touch3 = 2,
	Touch4 = 3,
	Touch5 = 4,
	Touch6 = 5,
	Touch7 = 6,
	Touch8 = 7,
	Touch9 = 8,
	Touch10 = 9,
	CursorPointerIndex = 10,
	MAX_TOUCHES = 11
};

enum class ETouchType {
	Began = 0,
	Moved = 1,
	Stationary = 2,
	ForceChanged = 3,
	FirstMove = 4,
	Ended = 5,
	NumTypes = 6
};

enum class EButtonClickMethod {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3
};

enum class EButtonPressMethod {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2
};

enum class EButtonTouchMethod {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2
};

enum class ECheckBoxState {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2
};

enum class EColorVisionDeficiency {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3
};

enum class EConsumeMouseWheel {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2
};

enum class EFlowDirectionPreference {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3
};

enum class EFocusCause {
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5
};

enum class EFontFallback {
	FF_NoFallback = 0,
	FF_LocalizedFallback = 1,
	FF_LastResortFallback = 2,
	FF_Max = 3
};

enum class EFontHinting {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4
};

enum class EFontLayoutMethod {
	Metrics = 0,
	BoundingBox = 1
};

enum class EFontLoadingPolicy {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2
};

enum class EHorizontalAlignment {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3
};

enum class EMenuPlacement {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12
};

enum class ENavigationGenesis {
	Keyboard = 0,
	Controller = 1,
	User = 2
};

enum class ENavigationSource {
	FocusedWidget = 0,
	WidgetUnderCursor = 1
};

enum class EOrientation {
	Orient_Horizontal = 0,
	Orient_Vertical = 1
};

enum class EScrollDirection {
	Scroll_Down = 0,
	Scroll_Up = 1
};

enum class ESelectInfo {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3
};

enum class ESlateBrushDrawType {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3
};

enum class ESlateBrushImageType {
	NoImage = 0,
	FullColor = 1,
	Linear = 2
};

enum class ESlateBrushMirrorType {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3
};

enum class ESlateBrushTileType {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3
};

enum class ESlateCheckBoxType {
	CheckBox = 0,
	ToggleButton = 1
};

enum class ESlateColorStylingMode {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3
};

enum class ESlateDebuggingFocusEvent {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2
};

enum class ESlateDebuggingInputEvent {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	MouseButtonDown = 3,
	MouseButtonUp = 4,
	MouseButtonDoubleClick = 5,
	MouseWheel = 6,
	TouchStart = 7,
	TouchEnd = 8,
	DragDetected = 9,
	DragEnter = 10,
	DragLeave = 11,
	DragOver = 12,
	DragDrop = 13,
	DropMessage = 14,
	KeyDown = 15,
	KeyUp = 16,
	KeyChar = 17,
	AnalogInput = 18,
	TouchGesture = 19,
	COUNT = 20
};

enum class ESlateDebuggingNavigationMethod {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5
};

enum class ESlateDebuggingStateChangeEvent {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1
};

enum class ESlateParentWindowSearchMethod {
	ActiveWindow = 0,
	MainWindow = 1
};

enum class ETextCommit {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3
};

enum class ETextShapingMethod {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2
};

enum class EUINavigation {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7
};

enum class EUINavigationAction {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3
};

enum class EUINavigationRule {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6
};

enum class EVerticalAlignment {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3
};

enum class EWidgetClipping {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4
};

enum class EBitmapCSType {
	BCST_BLCS_CALIBRATED_RGB = 0,
	BCST_LCS_sRGB = 1934772034,
	BCST_LCS_WINDOWS_COLOR_SPACE = 1466527264,
	BCST_PROFILE_LINKED = 1279872587,
	BCST_PROFILE_EMBEDDED = 1296188740,
};

enum class EBitmapHeaderVersion {
	BHV_BITMAPINFOHEADER = 0,
	BHV_BITMAPV2INFOHEADER = 1,
	BHV_BITMAPV3INFOHEADER = 2,
	BHV_BITMAPV4HEADER = 3,
	BHV_BITMAPV5HEADER = 4
};

enum class EDescendantScrollDestination {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2
};

enum class EListItemAlignment {
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6
};

enum class EMultiBlockType {
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	MenuSeparator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	ToolBarSeparator = 8,
	Widget = 9
};

enum class EMultiBoxType {
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	Menu = 3,
	ButtonRow = 4,
	ToolMenuBar = 5
};

enum class EMultipleKeyBindingIndex {
	Primary = 0,
	Secondary = 1,
	NumChords = 2
};

enum class EProgressBarFillType {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4
};

enum class ESelectionMode {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3
};

enum class EStretch {
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7
};

enum class EStretchDirection {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2
};

enum class ETableViewMode {
	List = 0,
	Tile = 1,
	Tree = 2
};

enum class ETextFlowDirection {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2
};

enum class ETextJustify {
	Left = 0,
	Center = 1,
	Right = 2
};

enum class ETextWrappingPolicy {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1
};

enum class EUserInterfaceActionType {
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5
};

enum class EVirtualKeyboardDismissAction {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2
};

enum class EDesiredImageFormat {
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3
};

enum class EMobileCSMQuality {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2
};

enum class EFourPlayerSplitScreenType {
	Grid = 0,
	Vertical = 1,
	Horizontal = 2
};

enum class ESubLevelStripMode {
	ExactClass = 0,
	IsChildOf = 1
};

enum class EThreePlayerSplitScreenType {
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3
};

enum class ETwoPlayerSplitScreenType {
	Horizontal = 0,
	Vertical = 1
};

enum class EChaosBufferMode {
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3
};

enum class EChaosSolverTickMode {
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3
};

enum class EChaosThreadingMode {
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4
};

enum class EMeshTrackerVertexColorMode {
	None = 0,
	Confidence = 1,
	Block = 2
};

enum class EAREnvironmentCaptureProbeType {
	None = 0,
	Manual = 1,
	Automatic = 2
};

enum class EARFaceTrackingUpdate {
	CurvesAndGeo = 0,
	CurvesOnly = 1
};

enum class EARFrameSyncMode {
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1
};

enum class EARLightEstimationMode {
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2
};

enum class EARPlaneDetectionMode {
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2
};

enum class EARSessionTrackingFeature {
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3
};

enum class EARSessionType {
	None = 0,
	Orientation = 1,
	World = 2,
	Face = 3,
	Image = 4,
	ObjectScanning = 5,
	PoseTracking = 6
};

enum class EARWorldAlignment {
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2
};

enum class EARCandidateImageOrientation {
	Landscape = 0,
	Portrait = 1
};

enum class EARDepthAccuracy {
	Unkown = 0,
	Approximate = 1,
	Accurate = 2
};

enum class EARDepthQuality {
	Unkown = 0,
	Low = 1,
	High = 2
};

enum class EAREye {
	LeftEye = 0,
	RightEye = 1
};

enum class EARFaceBlendShape {
	EyeBlinkLeft = 0,
	EyeLookDownLeft = 1,
	EyeLookInLeft = 2,
	EyeLookOutLeft = 3,
	EyeLookUpLeft = 4,
	EyeSquintLeft = 5,
	EyeWideLeft = 6,
	EyeBlinkRight = 7,
	EyeLookDownRight = 8,
	EyeLookInRight = 9,
	EyeLookOutRight = 10,
	EyeLookUpRight = 11,
	EyeSquintRight = 12,
	EyeWideRight = 13,
	JawForward = 14,
	JawLeft = 15,
	JawRight = 16,
	JawOpen = 17,
	MouthClose = 18,
	MouthFunnel = 19,
	MouthPucker = 20,
	MouthLeft = 21,
	MouthRight = 22,
	MouthSmileLeft = 23,
	MouthSmileRight = 24,
	MouthFrownLeft = 25,
	MouthFrownRight = 26,
	MouthDimpleLeft = 27,
	MouthDimpleRight = 28,
	MouthStretchLeft = 29,
	MouthStretchRight = 30,
	MouthRollLower = 31,
	MouthRollUpper = 32,
	MouthShrugLower = 33,
	MouthShrugUpper = 34,
	MouthPressLeft = 35,
	MouthPressRight = 36,
	MouthLowerDownLeft = 37,
	MouthLowerDownRight = 38,
	MouthUpperUpLeft = 39,
	MouthUpperUpRight = 40,
	BrowDownLeft = 41,
	BrowDownRight = 42,
	BrowInnerUp = 43,
	BrowOuterUpLeft = 44,
	BrowOuterUpRight = 45,
	CheekPuff = 46,
	CheekSquintLeft = 47,
	CheekSquintRight = 48,
	NoseSneerLeft = 49,
	NoseSneerRight = 50,
	TongueOut = 51,
	HeadYaw = 52,
	HeadPitch = 53,
	HeadRoll = 54,
	LeftEyeYaw = 55,
	LeftEyePitch = 56,
	LeftEyeRoll = 57,
	RightEyeYaw = 58,
	RightEyePitch = 59,
	RightEyeRoll = 60,
	MAX = 61
};

enum class EARFaceTrackingDirection {
	FaceRelative = 0,
	FaceMirrored = 1
};

enum class EARJointTransformSpace {
	Model = 0,
	ParentJoint = 1
};

enum class EARLineTraceChannels {
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 4
	PlaneUsingBoundaryPolygon = 8,
};

enum class EARObjectClassification {
	NotApplicable = 0,
	Unknown = 1,
	Wall = 2,
	Ceiling = 3,
	Floor = 4,
	Table = 5,
	Seat = 6,
	Face = 7,
	Image = 8,
	World = 9,
	SceneObject = 10
};

enum class EARPlaneOrientation {
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2
};

enum class EARSessionStatus {
	NotStarted = 0,
	Running = 1,
	NotSupported = 2,
	FatalError = 3,
	PermissionNotGranted = 4,
	UnsupportedConfiguration = 5,
	Other = 6
};

enum class EARTextureType {
	CameraImage = 0,
	CameraDepth = 1,
	EnvironmentCapture = 2
};

enum class EARTrackingQuality {
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2
};

enum class EARTrackingQualityReason {
	None = 0,
	Initializing = 1,
	Relocalizing = 2,
	ExcessiveMotion = 3,
	InsufficientFeatures = 4
};

enum class EARTrackingState {
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3
};

enum class EARWorldMappingState {
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3
};

enum class EHMDTrackingOrigin {
	Floor = 0,
	Eye = 1,
	Stage = 2
};

enum class EHMDWornState {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2
};

enum class EOrientPositionSelector {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2
};

enum class ESpectatorScreenMode {
	Disabled = 0,
	SingleEyeLetterboxed = 1,
	Undistorted = 2,
	Distorted = 3,
	SingleEye = 4,
	SingleEyeCroppedToFill = 5,
	Texture = 6,
	TexturePlusEye = 7
};

enum class ETrackingStatus {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2
};

enum class EXRTrackedDeviceType {
	HeadMountedDisplay = 0,
	Controller = 1,
	TrackingReference = 2,
	Other = 3,
	Invalid = 254,
	Any = 255,
};

enum class EFoliageScaling {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4
};

enum class ESimulationOverlap {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2
};

enum class ESimulationQuery {
	CollisionOverlap = 1,
	ShadeOverlap = 2
	AnyOverlap = 3,
};

enum class EVertexColorMaskChannel {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4
};

enum class FoliageVertexColorMask {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4
};

enum class EGrassScaling {
	Uniform = 0,
	Free = 1,
	LockXY = 2
};

enum class ELandscapeBlendMode {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2
};

enum class ELandscapeClearMode {
	Clear_Weightmap = 1,
	Clear_Heightmap = 2
	Clear_All = 3,
};

enum class ELandscapeGizmoType {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3
};

enum class ELandscapeSetupErrors {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4
};

enum class ELandscapeImportAlphamapType {
	Additive = 0,
	Layered = 1
};

enum class ELandscapeLODFalloff {
	Linear = 0,
	SquareRoot = 1
};

enum class ELandscapeLayerDisplayMode {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2
};

enum class ELandscapeLayerPaintingRestriction {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3
};

enum class LandscapeSplineMeshOrientation {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2
};

enum class ELandscapeCustomizedCoordType {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5
};

enum class ELandscapeLayerBlendType {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2
};

enum class ETerrainCoordMappingType {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4
};

enum class EFrameNumberDisplayFormats {
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4
};

enum class EEvaluationMethod {
	Static = 0,
	Swept = 1
};

enum class EMovieSceneBlendType {
	Absolute = 1,
	Additive = 2
	Relative = 4,
};

enum class EMovieSceneBuiltInEasing {
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21
};

enum class EMovieSceneKeyInterpolation {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4
};

enum class EMovieSceneCompletionMode {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2
};

enum class EMovieSceneEvaluationType {
	FrameLocked = 0,
	WithSubFrames = 1
};

enum class EMovieSceneObjectBindingSpace {
	Local = 0,
	Root = 1
};

enum class EMovieScenePlayerStatus {
	Stopped = 0,
	Playing = 1,
	Recording = 2,
	Scrubbing = 3,
	Jumping = 4,
	Stepping = 5,
	Paused = 6,
	MAX = 7
};

enum class ESectionEvaluationFlags {
	None = 0,
	PreRoll = 1,
	PostRoll = 2
};

enum class EUpdateClockSource {
	Tick = 0,
	Platform = 1,
	Audio = 2,
	Timecode = 3
};

enum class EUpdatePositionMethod {
	Play = 0,
	Jump = 1,
	Scrub = 2
};

enum class ESpawnOwnership {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2
};

enum class EConstraintType {
	Transform = 0,
	Aim = 1,
	MAX = 2
};

enum class ETransformConstraintType {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3
};

enum class EFieldCullingOperationType {
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2
};

enum class EFieldFalloffType {
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5
};

enum class EFieldOperationType {
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4
};

enum class EFieldPhysicsDefaultFields {
	Field_RadialIntMask = 0,
	Field_RadialFalloff = 1,
	Field_UniformVector = 2,
	Field_RadialVector = 3,
	Field_RadialVectorFalloff = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5
};

enum class EFieldPhysicsType {
	Field_DynamicState = 0,
	Field_LinearForce = 1,
	Field_ExternalClusterStrain = 2,
	Field_Kill = 3,
	Field_LinearVelocity = 4,
	Field_AngularVelociy = 5,
	Field_AngularTorque = 6,
	Field_InternalClusterStrain = 7,
	Field_DisableThreshold = 8,
	Field_SleepingThreshold = 9,
	Field_PositionStatic = 10,
	Field_PositionAnimated = 11,
	Field_PositionTarget = 12,
	Field_DynamicConstraint = 13,
	Field_CollisionGroup = 14,
	Field_ActivateDisabled = 15,
	Field_PhysicsType_Max = 16
};

enum class EFieldResolutionType {
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3
};

enum class ESetMaskConditionType {
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3
};

enum class EGeometryCollectionCacheType {
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3
};

enum class ECollisionTypeEnum {
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2
};

enum class EEmissionPatternTypeEnum {
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2
};

enum class EGeometryCollectionPhysicsTypeEnum {
	Chaos_AngularVelocity = 0,
	Chaos_DynamicState = 1,
	Chaos_LinearVelocity = 2,
	Chaos_InitialAngularVelocity = 3,
	Chaos_InitialLinearVelocity = 4,
	Chaos_CollisionGroup = 5,
	Chaos_LinearForce = 6,
	Chaos_AngularTorque = 7,
	Chaos_Max = 8
};

enum class EImplicitTypeEnum {
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Max = 5
};

enum class EInitialVelocityTypeEnum {
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2
};

enum class EObjectStateTypeEnum {
	Chaos_Object_Sleeping = 1,
	Chaos_Object_Kinematic = 2,
	Chaos_Object_Static = 3,
	Chaos_Object_Dynamic = 4,
	Chaos_Object_UserDefined = 100,
	Chaos_Max = 101,
};

enum class EClusterConnectionTypeEnum {
	Chaos_PointImplicit = 1,
	Chaos_DelaunayTriangulation = 2,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 3,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 4,
	Chaos_None = 0,
	Chaos_EClsuterCreationParameters_Max = 1,
};

enum class EChaosBreakingSortMethod {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4
};

enum class EChaosCollisionSortMethod {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByHighestImpulse = 3,
	SortByNearestFirst = 4,
	Count = 5
};

enum class EChaosTrailingSortMethod {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4
};

enum class ECollectionAttributeEnum {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3
};

enum class ECollectionGroupEnum {
	Chaos_Traansform = 0,
	Chaos_Max = 1
};

enum class EGeometryCollectionDebugDrawActorHideGeometry {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4
};

enum class AnimPhysAngularConstraintType {
	Angular = 0,
	Cone = 1
};

enum class AnimPhysLinearConstraintType {
	Free = 0,
	Limited = 1
};

enum class AnimPhysSimSpaceType {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4
};

enum class CopyBoneDeltaMode {
	Accumulate = 0,
	Copy = 1
};

enum class EConstraintOffsetOption {
	None = 0,
	Offset_RefPose = 1
};

enum class EDrivenBoneModificationMode {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2
};

enum class EDrivenDestinationMode {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2
};

enum class ESphericalLimitType {
	Inner = 0,
	Outer = 1
};

enum class EBoneModificationMode {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2
};

enum class EInterpolationBlend {
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7
};

enum class EModifyCurveApplyMode {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4
};

enum class EPoseDriverOutput {
	DrivePoses = 0,
	DriveCurves = 1
};

enum class EPoseDriverSource {
	Rotation = 0,
	Translation = 1
};

enum class EPoseDriverType {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2
};

enum class ERefPoseType {
	EIT_LocalSpace = 0,
	EIT_Additive = 1
};

enum class ESimulationSpace {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2
};

enum class ESnapshotSourceMode {
	NamedSnapshot = 0,
	SnapshotPin = 1
};

enum class EEasingFuncType {
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14
};

enum class ERotationComponent {
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5
};

enum class EScaleChainInitialLength {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2
};

enum class ESequenceEvalReinit {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2
};

enum class ESplineBoneAxis {
	X = 1,
	Y = 2
	Z = 3,
};

enum class ERBFDistanceMethod {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	DefaultMethod = 3
};

enum class ERBFFunctionType {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5
};

enum class ERBFNormalizeMethod {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2
};

enum class MovieScene3DPathSection_Axis {
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5
};

enum class EFireEventsAtPosition {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2
};

enum class ELevelVisibility {
	Visible = 0,
	Hidden = 1
};

enum class EParticleKey {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2
};

enum class EDragPivot {
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9
};

enum class EDynamicBoxType {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	Overlay = 3
};

enum class ESlateAccessibleBehavior {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4
};

enum class ESlateSizeRule {
	Automatic = 0,
	Fill = 1
};

enum class ESlateVisibility {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4
};

enum class EVirtualKeyboardType {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5
};

enum class EUMGSequencePlayMode {
	Forward = 0,
	Reverse = 1,
	PingPong = 2
};

enum class EWidgetAnimationEvent {
	Started = 0,
	Finished = 1
};

enum class EWidgetTickFrequency {
	Never = 0,
	Auto = 1
};

enum class EWidgetDesignFlags {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
};

enum class EBindingKind {
	Function = 0,
	Property = 1
};

enum class EWidgetBlendMode {
	Opaque = 0,
	Masked = 1,
	Transparent = 2
};

enum class EWidgetGeometryMode {
	Plane = 0,
	Cylinder = 1
};

enum class EWidgetSpace {
	World = 0,
	Screen = 1
};

enum class EWidgetTimingPolicy {
	RealTime = 0,
	GameTime = 1
};

enum class EWindowVisibility {
	Visible = 0,
	SelfHitTestInvisible = 1
};

enum class EWidgetInteractionSource {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3
};

enum class ECameraFocusMethod {
	None = 0,
	Manual = 1,
	Tracking = 2
};

enum class EFFTPeakInterpolationMethod {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2
};

enum class EFFTSize {
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	Max = 5
};

enum class EFFTWindowType {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3
};

enum class ESubmixEffectDynamicsPeakMode {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3
};

enum class ESubmixEffectDynamicsProcessorType {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4
};

enum class EGameplayContainerMatchType {
	Any = 0,
	All = 1
};

enum class EGameplayTagMatchType {
	Explicit = 0,
	IncludeParentTags = 1
};

enum class EGameplayTagQueryExprType {
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6
};

enum class EGameplayTagSelectionType {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3
};

enum class EGameplayTagSourceType {
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5
};

enum class ESoundwaveSampleRateSettings {
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5
};

enum class EComputeNTBsOptions {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 4,
};

enum class EEyeTrackerStatus {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2
};

enum class EHDRCaptureGamut {
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_Linear = 5,
	HCGM_MAX = 6
};

enum class EMovieSceneCaptureProtocolState {
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3
};

enum class EMoviePlaybackType {
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3
};

enum class EAlphaBlendOption {
	Linear = 0,
	Cubic = 1,
	HermiteCubic = 2,
	Sinusoidal = 3,
	QuadraticInOut = 4,
	CubicInOut = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	Custom = 14
};

enum class EAnimGroupRole {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4
};

enum class AnimationCompressionFormat {
	ACF_None = 0,
	ACF_Float96NoW = 1,
	ACF_Fixed48NoW = 2,
	ACF_IntervalFixed32NoW = 3,
	ACF_Fixed32NoW = 4,
	ACF_Float32NoW = 5,
	ACF_Identity = 6,
	ACF_MAX = 7
};

enum class AnimationKeyFormat {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3
};

enum class EAdditiveBasePoseType {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4
};

enum class EAnimAssetCurveFlags {
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable = 4,
	AACF_DriveMaterial_DEPRECATED = 8,
	AACF_Metadata = 16,
	AACF_DriveTrack = 32,
	AACF_Disabled = 64,
};

enum class EMontagePlayReturnType {
	MontageLength = 0,
	Duration = 1
};

enum class ERawCurveTrackTypes {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3
};

enum class ERootMotionMode {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3
};

enum class ERootMotionRootLock {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2
};

enum class EAnimLinkMethod {
	Absolute = 0,
	Relative = 1,
	Proportional = 2
};

enum class EAnimNotifyEventType {
	Begin = 0,
	End = 1
};

enum class ECopyType {
	MemCopy = 0,
	BoolProperty = 1,
	StructProperty = 2,
	ObjectProperty = 3
};

enum class EDrawDebugItemType {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4
};

enum class EEvaluatorDataSource {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1
};

enum class EEvaluatorMode {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2
};

enum class EMontageSubStepResult {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3
};

enum class EPinHidingMode {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3
};

enum class EPostCopyOperation {
	None = 0,
	LogicalNegateBool = 1
};

enum class AnimPhysCollisionType {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3
};

enum class AnimPhysTwistAxis {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2
};

enum class ETransitionBlendMode {
	TBM_Linear = 0,
	TBM_Cubic = 1
};

enum class ETransitionLogicType {
	TLT_StandardBlend = 0,
	TLT_Custom = 1
};

enum class ETypeAdvanceAnim {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2
};

enum class EAdditiveAnimationType {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3
};

enum class EAnimInterpolationType {
	Linear = 0,
	Step = 1
};

enum class EAxisOption {
	X = 0,
	Y = 1,
	Z = 2,
	X_Neg = 3,
	Y_Neg = 4,
	Z_Neg = 5,
	Custom = 6
};

enum class EBoneAxis {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2
};

enum class EBoneControlSpace {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4
};

enum class EBoneRotationSource {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2
};

enum class EComponentType {
	None = 0,
	TranslationX = 1,
	TranslationY = 2,
	TranslationZ = 3,
	RotationX = 4,
	RotationY = 5,
	RotationZ = 6,
	Scale = 7,
	ScaleX = 8,
	ScaleY = 9,
	ScaleZ = 10
};

enum class ECurveBlendOption {
	MaxWeight = 0,
	NormalizeByWeight = 1,
	BlendByWeight = 2
};

enum class EMontageNotifyTickType {
	Queued = 0,
	BranchingPoint = 1
};

enum class ENotifyFilterType {
	NoFiltering = 0,
	LOD = 1
};

enum class EPrimaryAssetCookRule {
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4
};

enum class ETemperatureSeverityType {
	Unknown = 0,
	Good = 1,
	Bad = 2,
	Serious = 3,
	Critical = 4,
	NumSeverities = 5
};

enum class EAttenuationDistanceModel {
	Linear = 0,
	Logarithmic = 1,
	Inverse = 2,
	LogReverse = 3,
	NaturalSound = 4,
	Custom = 5
};

enum class EAttenuationShape {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3
};

enum class EMonoChannelUpmixMethod {
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2
};

enum class EPanningMethod {
	Linear = 0,
	EqualPower = 1
};

enum class EVoiceSampleRate {
	Low16000Hz = 16000,
	Normal24000Hz = 24000,
};

enum class EBlendSpaceAxis {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3
};

enum class EBlendableLocation {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5
};

enum class EBlueprintCompileMode {
	Default = 0,
	Development = 1,
	FinalRelease = 2
};

enum class EBlueprintNativizationFlag {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2
};

enum class EBlueprintStatus {
	BS_Unknown = 0,
	BS_Dirty = 1,
	BS_Error = 2,
	BS_UpToDate = 3,
	BS_BeingCreated = 4,
	BS_UpToDateWithWarnings = 5,
	BS_MAX = 6
};

enum class EBlueprintType {
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6
};

enum class ENotifyTriggerMode {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2
};

enum class ReverbPreset {
	REVERB_Default = 0,
	REVERB_Bathroom = 1,
	REVERB_StoneRoom = 2,
	REVERB_Auditorium = 3,
	REVERB_ConcertHall = 4,
	REVERB_Cave = 5,
	REVERB_Hallway = 6,
	REVERB_StoneCorridor = 7,
	REVERB_Alley = 8,
	REVERB_Forest = 9,
	REVERB_City = 10,
	REVERB_Mountains = 11,
	REVERB_Quarry = 12,
	REVERB_Plain = 13,
	REVERB_ParkingLot = 14,
	REVERB_SewerPipe = 15,
	REVERB_Underwater = 16,
	REVERB_SmallRoom = 17,
	REVERB_MediumRoom = 18,
	REVERB_LargeRoom = 19,
	REVERB_MediumHall = 20,
	REVERB_LargeHall = 21,
	REVERB_Plate = 22,
	REVERB_MAX = 23
};

enum class EApplicationState {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3
};

enum class EBodyCollisionResponse {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1
};

enum class ECollisionTraceFlag {
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4
};

enum class EDOFMode {
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	CustomPlane = 5,
	None = 6
};

enum class EPhysicsType {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2
};

enum class EScreenOrientation {
	Unknown = 0,
	Portrait = 1,
	PortraitUpsideDown = 2,
	LandscapeLeft = 3,
	LandscapeRight = 4,
	FaceUp = 5,
	FaceDown = 6
};

enum class EBrushType {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3
};

enum class ECsgOper {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6
};

enum class EInitialOscillatorOffset {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2
};

enum class EOscillatorWaveform {
	SineWave = 0,
	PerlinNoise = 1
};

enum class ECameraAlphaBlendMode {
	CABM_Linear = 0,
	CABM_Cubic = 1
};

enum class ECameraAnimPlaySpace {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2
};

enum class ECameraProjectionMode {
	Perspective = 0,
	Orthographic = 1
};

enum class EAngularDriveMode {
	SLERP = 0,
	TwistAndSwing = 1
};

enum class ECloudStorageDelegate {
	CSD_KeyValueReadComplete = 0,
	CSD_KeyValueWriteComplete = 1,
	CSD_ValueChanged = 2,
	CSD_DocumentQueryComplete = 3,
	CSD_DocumentReadComplete = 4,
	CSD_DocumentWriteComplete = 5,
	CSD_DocumentConflictDetected = 6,
	CSD_MAX = 7
};

enum class EComponentCreationMethod {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3
};

enum class ECurveTableMode {
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2
};

enum class ELinearConstraintMotion {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3
};

enum class EEvaluateCurveTableResult {
	RowFound = 0,
	RowNotFound = 1
};

enum class EGrammaticalGender {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3
};

enum class EGrammaticalNumber {
	Singular = 0,
	Plural = 1
};

enum class DistributionParamMode {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3
};

enum class EBlueprintPinStyleType {
	BPST_Original = 0,
	BPST_VariantA = 1
};

enum class EDistributionVectorLockFlags {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5
};

enum class EDistributionVectorMirrorFlags {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3
};

enum class EEdGraphPinDirection {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2
};

enum class ENodeAdvancedPins {
	NoPins = 0,
	Shown = 1,
	Hidden = 2
};

enum class ENodeEnabledState {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2
};

enum class ENodeTitleType {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4
};

enum class EPinContainerType {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3
};

enum class ECanCreateConnectionResponse {
	CONNECT_RESPONSE_MAKE = 0,
	CONNECT_RESPONSE_DISALLOW = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX = 6
};

enum class EConsoleType {
	Any = 0,
	Mobile = 1,
	MAX = 2
};

enum class EFullyLoadPackageType {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5
};

enum class EGraphType {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5
};

enum class ETransitionType {
	None = 0,
	Paused = 1,
	Loading = 2,
	Saving = 3,
	Connecting = 4,
	Precaching = 5,
	WaitingToConnect = 6,
	MAX = 7
};

enum class EAngularConstraintMotion {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3
};

enum class EAspectRatioAxisConstraint {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3
};

enum class EAttachLocation {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3
};

enum class EAttachmentRule {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2
};

enum class EAutoPossessAI {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3
};

enum class EAutoReceiveInput {
	Disabled = 0,
	Player0 = 1,
	Player1 = 2,
	Player2 = 3,
	Player3 = 4,
	Player4 = 5,
	Player5 = 6,
	Player6 = 7,
	Player7 = 8
};

enum class EBlendMode {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_AlphaHoldout = 6,
	BLEND_MAX = 7
};

enum class ECollisionChannel {
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Pawn = 2,
	ECC_Visibility = 3,
	ECC_Camera = 4,
	ECC_PhysicsBody = 5,
	ECC_Vehicle = 6,
	ECC_Destructible = 7,
	ECC_EngineTraceChannel1 = 8,
	ECC_EngineTraceChannel2 = 9,
	ECC_EngineTraceChannel3 = 10,
	ECC_EngineTraceChannel4 = 11,
	ECC_EngineTraceChannel5 = 12,
	ECC_EngineTraceChannel6 = 13,
	ECC_GameTraceChannel1 = 14,
	ECC_GameTraceChannel2 = 15,
	ECC_GameTraceChannel3 = 16,
	ECC_GameTraceChannel4 = 17,
	ECC_GameTraceChannel5 = 18,
	ECC_GameTraceChannel6 = 19,
	ECC_GameTraceChannel7 = 20,
	ECC_GameTraceChannel8 = 21,
	ECC_GameTraceChannel9 = 22,
	ECC_GameTraceChannel10 = 23,
	ECC_GameTraceChannel11 = 24,
	ECC_GameTraceChannel12 = 25,
	ECC_GameTraceChannel13 = 26,
	ECC_GameTraceChannel14 = 27,
	ECC_GameTraceChannel15 = 28,
	ECC_GameTraceChannel16 = 29,
	ECC_GameTraceChannel17 = 30,
	ECC_GameTraceChannel18 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_MAX = 33
};

enum class ECollisionEnabled {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3
};

enum class ECollisionResponse {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3
};

enum class EComponentMobility {
	Static = 0,
	Stationary = 1,
	Movable = 2
};

enum class EComponentSocketType {
	Invalid = 0,
	Bone = 1,
	Socket = 2
};

enum class EConstraintFrame {
	Frame1 = 0,
	Frame2 = 1
};

enum class ECustomTimeStepSynchronizationState {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3
};

enum class EDemoPlayFailure {
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	InitBase = 4,
	GameSpecificHeader = 5,
	ReplayStreamerInternal = 6,
	LoadMap = 7,
	Serialization = 8
};

enum class EDetachmentRule {
	KeepRelative = 0,
	KeepWorld = 1
};

enum class EEndPlayReason {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4
};

enum class EFilterInterpolationType {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3
};

enum class EGBufferFormat {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 3
	Force16BitsPerChannel = 5,
};

enum class EIndirectLightingCacheQuality {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2
};

enum class EInputEvent {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5
};

enum class ELightMapPaddingType {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2
};

enum class ELightingBuildQuality {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4
};

enum class ELightmapType {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2
};

enum class EMaterialSamplerType {
	SAMPLERTYPE_Color = 0,
	SAMPLERTYPE_Grayscale = 1,
	SAMPLERTYPE_Alpha = 2,
	SAMPLERTYPE_Normal = 3,
	SAMPLERTYPE_Masks = 4,
	SAMPLERTYPE_DistanceFieldFont = 5,
	SAMPLERTYPE_LinearColor = 6,
	SAMPLERTYPE_LinearGrayscale = 7,
	SAMPLERTYPE_Data = 8,
	SAMPLERTYPE_External = 9,
	SAMPLERTYPE_VirtualColor = 10,
	SAMPLERTYPE_VirtualGrayscale = 11,
	SAMPLERTYPE_VirtualAlpha = 12,
	SAMPLERTYPE_VirtualNormal = 13,
	SAMPLERTYPE_VirtualMasks = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX = 17
};

enum class EMaterialShadingModel {
	MSM_Unlit = 0,
	MSM_DefaultLit = 1,
	MSM_Subsurface = 2,
	MSM_PreintegratedSkin = 3,
	MSM_ClearCoat = 4,
	MSM_SubsurfaceProfile = 5,
	MSM_TwoSidedFoliage = 6,
	MSM_Hair = 7,
	MSM_Cloth = 8,
	MSM_Eye = 9,
	MSM_ToonCharacter = 10,
	MSM_ToonParticle = 11,
	MSM_ToonHair = 12,
	MSM_Outline = 13,
	MSM_Stage = 14,
	MSM_NUM = 15,
	MSM_FromMaterialExpression = 16,
	MSM_MAX = 17
};

enum class EMaterialStencilCompare {
	MSC_Less = 0,
	MSC_LessEqual = 1,
	MSC_Greater = 2,
	MSC_GreaterEqual = 3,
	MSC_Equal = 4,
	MSC_NotEqual = 5,
	MSC_Never = 6,
	MSC_Always = 7,
	MSC_Count = 8
};

enum class EMaterialTessellationMode {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_PhongTessellation = 3,
	MTM_MAX = 4
};

enum class EMeshBufferAccess {
	Default = 0,
	ForceCPUAndGPU = 1
};

enum class EMouseCaptureMode {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4
};

enum class EMouseLockMode {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3
};

enum class EMovementMode {
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_MAX = 7
};

enum class ENetDormancy {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5
};

enum class ENetRole {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

enum class ENetworkFailure {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10
};

enum class ENetworkLagState {
	NotLagging = 0,
	Lagging = 1
};

enum class ENetworkSmoothingMode {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3
};

enum class EObjectTypeQuery {
	ObjectTypeQuery1 = 0,
	ObjectTypeQuery2 = 1,
	ObjectTypeQuery3 = 2,
	ObjectTypeQuery4 = 3,
	ObjectTypeQuery5 = 4,
	ObjectTypeQuery6 = 5,
	ObjectTypeQuery7 = 6,
	ObjectTypeQuery8 = 7,
	ObjectTypeQuery9 = 8,
	ObjectTypeQuery10 = 9,
	ObjectTypeQuery11 = 10,
	ObjectTypeQuery12 = 11,
	ObjectTypeQuery13 = 12,
	ObjectTypeQuery14 = 13,
	ObjectTypeQuery15 = 14,
	ObjectTypeQuery16 = 15,
	ObjectTypeQuery17 = 16,
	ObjectTypeQuery18 = 17,
	ObjectTypeQuery19 = 18,
	ObjectTypeQuery20 = 19,
	ObjectTypeQuery21 = 20,
	ObjectTypeQuery22 = 21,
	ObjectTypeQuery23 = 22,
	ObjectTypeQuery24 = 23,
	ObjectTypeQuery25 = 24,
	ObjectTypeQuery26 = 25,
	ObjectTypeQuery27 = 26,
	ObjectTypeQuery28 = 27,
	ObjectTypeQuery29 = 28,
	ObjectTypeQuery30 = 29,
	ObjectTypeQuery31 = 30,
	ObjectTypeQuery32 = 31,
	ObjectTypeQuery_MAX = 32
};

enum class EOcclusionCombineMode {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2
};

enum class EOverlapFilterOption {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2
};

enum class EParticleCollisionMode {
	SceneDepth = 0,
	DistanceField = 1
};

enum class EPhysicalSurface {
	SurfaceType_Default = 0,
	SurfaceType1 = 1,
	SurfaceType2 = 2,
	SurfaceType3 = 3,
	SurfaceType4 = 4,
	SurfaceType5 = 5,
	SurfaceType6 = 6,
	SurfaceType7 = 7,
	SurfaceType8 = 8,
	SurfaceType9 = 9,
	SurfaceType10 = 10,
	SurfaceType11 = 11,
	SurfaceType12 = 12,
	SurfaceType13 = 13,
	SurfaceType14 = 14,
	SurfaceType15 = 15,
	SurfaceType16 = 16,
	SurfaceType17 = 17,
	SurfaceType18 = 18,
	SurfaceType19 = 19,
	SurfaceType20 = 20,
	SurfaceType21 = 21,
	SurfaceType22 = 22,
	SurfaceType23 = 23,
	SurfaceType24 = 24,
	SurfaceType25 = 25,
	SurfaceType26 = 26,
	SurfaceType27 = 27,
	SurfaceType28 = 28,
	SurfaceType29 = 29,
	SurfaceType30 = 30,
	SurfaceType31 = 31,
	SurfaceType32 = 32,
	SurfaceType33 = 33,
	SurfaceType34 = 34,
	SurfaceType35 = 35,
	SurfaceType36 = 36,
	SurfaceType37 = 37,
	SurfaceType38 = 38,
	SurfaceType39 = 39,
	SurfaceType40 = 40,
	SurfaceType41 = 41,
	SurfaceType42 = 42,
	SurfaceType43 = 43,
	SurfaceType44 = 44,
	SurfaceType45 = 45,
	SurfaceType46 = 46,
	SurfaceType47 = 47,
	SurfaceType48 = 48,
	SurfaceType49 = 49,
	SurfaceType50 = 50,
	SurfaceType51 = 51,
	SurfaceType52 = 52,
	SurfaceType53 = 53,
	SurfaceType54 = 54,
	SurfaceType55 = 55,
	SurfaceType56 = 56,
	SurfaceType57 = 57,
	SurfaceType58 = 58,
	SurfaceType59 = 59,
	SurfaceType60 = 60,
	SurfaceType61 = 61,
	SurfaceType62 = 62,
	SurfaceType_Max = 63
};

enum class ERadialImpulseFalloff {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2
};

enum class ERefractionMode {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1
};

enum class ERotatorQuantization {
	ByteComponents = 0,
	ShortComponents = 1
};

enum class ESamplerSourceMode {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2
};

enum class ESceneCaptureCompositeMode {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2
};

enum class ESceneCaptureSource {
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_DeviceDepth = 5,
	SCS_Normal = 6,
	SCS_BaseColor = 7,
	SCS_FinalColorHDR = 8,
	SCS_FinalColorLDRSceneAlpha = 9
};

enum class ESceneDepthPriorityGroup {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2
};

enum class EShadowMapFlags {
	SMF_None = 0,
	SMF_Streamed = 1
};

enum class ESleepFamily {
	Normal = 0,
	Sensitive = 1,
	Custom = 2
};

enum class ESpawnActorCollisionHandlingMethod {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4
};

enum class ETeleportType {
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2
};

enum class ETickingGroup {
	TG_PrePhysics = 0,
	TG_StartPhysics = 1,
	TG_DuringPhysics = 2,
	TG_EndPhysics = 3,
	TG_PostPhysics = 4,
	TG_PostUpdateWork = 5,
	TG_LastDemotable = 6,
	TG_NewlySpawned = 7,
	TG_MAX = 8
};

enum class ETimelineSigType {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5
};

enum class ETraceTypeQuery {
	TraceTypeQuery1 = 0,
	TraceTypeQuery2 = 1,
	TraceTypeQuery3 = 2,
	TraceTypeQuery4 = 3,
	TraceTypeQuery5 = 4,
	TraceTypeQuery6 = 5,
	TraceTypeQuery7 = 6,
	TraceTypeQuery8 = 7,
	TraceTypeQuery9 = 8,
	TraceTypeQuery10 = 9,
	TraceTypeQuery11 = 10,
	TraceTypeQuery12 = 11,
	TraceTypeQuery13 = 12,
	TraceTypeQuery14 = 13,
	TraceTypeQuery15 = 14,
	TraceTypeQuery16 = 15,
	TraceTypeQuery17 = 16,
	TraceTypeQuery18 = 17,
	TraceTypeQuery19 = 18,
	TraceTypeQuery20 = 19,
	TraceTypeQuery21 = 20,
	TraceTypeQuery22 = 21,
	TraceTypeQuery23 = 22,
	TraceTypeQuery24 = 23,
	TraceTypeQuery25 = 24,
	TraceTypeQuery26 = 25,
	TraceTypeQuery27 = 26,
	TraceTypeQuery28 = 27,
	TraceTypeQuery29 = 28,
	TraceTypeQuery30 = 29,
	TraceTypeQuery31 = 30,
	TraceTypeQuery32 = 31,
	TraceTypeQuery_MAX = 32
};

enum class ETrailWidthMode {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2
};

enum class ETranslucencyLightingMode {
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface = 4,
	TLM_SurfacePerPixelLighting = 5,
	TLM_MAX = 6
};

enum class ETranslucentSortPolicy {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2
};

enum class ETravelFailure {
	NoLevel = 0,
	LoadMapFailure = 1,
	InvalidURL = 2,
	PackageMissing = 3,
	PackageVersion = 4,
	NoDownload = 5,
	TravelFailure = 6,
	CheatCommands = 7,
	PendingNetGameCreateFailure = 8,
	CloudSaveFailure = 9,
	ServerTravelFailure = 10,
	ClientTravelFailure = 11
};

enum class ETravelType {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3
};

enum class EUpdateRateShiftBucket {
	ShiftBucket0 = 0,
	ShiftBucket1 = 1,
	ShiftBucket2 = 2,
	ShiftBucket3 = 3,
	ShiftBucket4 = 4,
	ShiftBucket5 = 5,
	ShiftBucketMax = 6
};

enum class EVectorQuantization {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2
};

enum class EViewModeIndex {
	VMI_BrushWireframe = 0,
	VMI_Wireframe = 1,
	VMI_Unlit = 2,
	VMI_Lit = 3,
	VMI_Lit_DetailLighting = 4,
	VMI_LightingOnly = 5,
	VMI_LightComplexity = 6,
	VMI_ShaderComplexity = 8,
	VMI_LightmapDensity = 9,
	VMI_LitLightmapDensity = 10,
	VMI_ReflectionOverride = 11,
	VMI_VisualizeBuffer = 12,
	VMI_StationaryLightOverlap = 14,
	VMI_CollisionPawn = 15,
	VMI_CollisionVisibility = 16,
	VMI_LODColoration = 18,
	VMI_QuadOverdraw = 19,
	VMI_PrimitiveDistanceAccuracy = 20,
	VMI_MeshUVDensityAccuracy = 21,
	VMI_ShaderComplexityWithQuadOverdraw = 22,
	VMI_HLODColoration = 23,
	VMI_GroupLODColoration = 24,
	VMI_MaterialTextureScaleAccuracy = 25,
	VMI_RequiredTextureResolution = 26,
	VMI_PathTracing = 27,
	VMI_RayTracingDebug = 28,
	VMI_ToonNormal = 29,
	VMI_VertexColor = 30
	VMI_VertexAlpha = 31,
	VMI_Max = 32,
	VMI_Unknown = 255,
};

enum class EWalkableSlopeBehavior {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4
};

enum class EFontCacheType {
	Offline = 0,
	Runtime = 1
};

enum class EFontImportCharacterSet {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3
};

enum class EStandbyType {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3
};

enum class ESuggestProjVelocityTraceOption {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2
};

enum class EWindowMode {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2
};

enum class EImportanceWeight {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4
};

enum class EAdManagerDelegate {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2
};

enum class EAnimAlphaInputType {
	Float = 0,
	Bool = 1,
	Curve = 2
};

enum class EControllerAnalogStick {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2
};

enum class EInterpToBehaviourType {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3
};

enum class ETrackActiveCondition {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3
};

enum class EInterpMoveAxis {
	AXIS_TranslationX = 0,
	AXIS_TranslationY = 1,
	AXIS_TranslationZ = 2,
	AXIS_RotationX = 3,
	AXIS_RotationY = 4,
	AXIS_RotationZ = 5
};

enum class EInterpTrackMoveRotMode {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3
};

enum class ETrackToggleAction {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4
};

enum class EVisibilityTrackAction {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3
};

enum class EVisibilityTrackCondition {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3
};

enum class EEasingFunc {
	Linear = 0,
	Step = 1,
	SinusoidalIn = 2,
	SinusoidalOut = 3,
	SinusoidalInOut = 4,
	EaseIn = 5,
	EaseOut = 6,
	EaseInOut = 7,
	ExpoIn = 8,
	ExpoOut = 9,
	ExpoInOut = 10,
	CircularIn = 11,
	CircularOut = 12,
	CircularInOut = 13
};

enum class ELerpInterpolationMode {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2
};

enum class ESlateGesture {
	None = 0,
	Scroll = 1,
	Magnify = 2,
	Swipe = 3,
	Rotate = 4,
	LongPress = 5
};

enum class EDrawDebugTrace {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3
};

enum class EMoveComponentAction {
	Move = 0,
	Stop = 1,
	Return = 2
};

enum class EQuitPreference {
	Quit = 0,
	Background = 1
};

enum class EFormatArgumentType {
	Int = 0,
	UInt = 1,
	Float = 2,
	Double = 3,
	Text = 4,
	Gender = 5
};

enum class ERoundingMode {
	HalfToEven = 0,
	HalfFromZero = 1,
	HalfToZero = 2,
	FromZero = 3,
	ToZero = 4,
	ToNegativeInfinity = 5,
	ToPositiveInfinity = 6
};

enum class ETextGender {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2
};

enum class EStreamingVolumeUsage {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5
};

enum class EDecalBlendMode {
	DBM_Translucent = 0,
	DBM_Stain = 1,
	DBM_Normal = 2,
	DBM_Emissive = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color = 5,
	DBM_DBuffer_ColorNormal = 6,
	DBM_DBuffer_ColorRoughness = 7,
	DBM_DBuffer_Normal = 8,
	DBM_DBuffer_NormalRoughness = 9,
	DBM_DBuffer_Roughness = 10,
	DBM_DBuffer_Emissive = 11,
	DBM_DBuffer_AlphaComposite = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite = 15,
	DBM_AmbientOcclusion = 16,
	DBM_MAX = 17
};

enum class EMaterialDecalResponse {
	MDR_None = 0,
	MDR_ColorNormalRoughness = 1,
	MDR_Color = 2,
	MDR_ColorNormal = 3,
	MDR_ColorRoughness = 4,
	MDR_Normal = 5,
	MDR_NormalRoughness = 6,
	MDR_Roughness = 7,
	MDR_MAX = 8
};

enum class EChannelMaskParameterColor {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3
};

enum class EClampMode {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2
};

enum class ECustomMaterialOutputType {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4
};

enum class EMaterialAttributeBlend {
	Blend = 0,
	UseA = 1,
	UseB = 2
};

enum class ETextureColorChannel {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4
};

enum class EDepthOfFieldFunctionValue {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4
};

enum class EFunctionInputType {
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_VolumeTexture = 6,
	FunctionInput_StaticBool = 7,
	FunctionInput_MaterialAttributes = 8,
	FunctionInput_TextureExternal = 9,
	FunctionInput_MAX = 10
};

enum class EMaterialSceneAttributeInputMode {
	Coordinates = 0,
	OffsetFraction = 1
};

enum class ENoiseFunction {
	NOISEFUNCTION_SimplexTex = 0,
	NOISEFUNCTION_GradientTex = 1,
	NOISEFUNCTION_GradientTex3D = 2,
	NOISEFUNCTION_GradientALU = 3,
	NOISEFUNCTION_ValueALU = 4,
	NOISEFUNCTION_VoronoiALU = 5,
	NOISEFUNCTION_MAX = 6
};

enum class ESpeedTreeGeometryType {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4
};

enum class ESpeedTreeLODType {
	STLOD_Pop = 0,
	STLOD_Smooth = 1
};

enum class ESpeedTreeWindType {
	STW_None = 0,
	STW_Fastest = 1,
	STW_Fast = 2,
	STW_Better = 3,
	STW_Best = 4,
	STW_Palm = 5,
	STW_BestPlus = 6
};

enum class EMaterialExposedTextureProperty {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2
};

enum class EMaterialExposedViewProperty {
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceViewPosition = 4,
	MEVP_WorldSpaceCameraPosition = 5,
	MEVP_ViewportOffset = 6,
	MEVP_TemporalSampleCount = 7,
	MEVP_TemporalSampleIndex = 8,
	MEVP_TemporalSampleOffset = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_MAX = 12
};

enum class EMaterialFunctionUsage {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2
};

enum class EMaterialPositionTransformSource {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_Camera = 4,
	TRANSFORMPOSSOURCE_Particle = 5,
	TRANSFORMPOSSOURCE_MAX = 6
};

enum class EMaterialVectorCoordTransform {
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_Camera = 4,
	TRANSFORM_ParticleWorld = 5,
	TRANSFORM_MAX = 6
};

enum class EMaterialVectorCoordTransformSource {
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_MAX = 6
};

enum class ETextureMipValueMode {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4
};

enum class EVectorNoiseFunction {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5
};

enum class EWorldPositionIncludedOffsets {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4
};

enum class EMaterialMergeType {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1
};

enum class EMaterialParameterAssociation {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2
};

enum class EMaterialUsage {
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_ParticleSprites = 1,
	MATUSAGE_BeamTrails = 2,
	MATUSAGE_MeshParticles = 3,
	MATUSAGE_StaticLighting = 4,
	MATUSAGE_MorphTargets = 5,
	MATUSAGE_SplineMesh = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections = 8,
	MATUSAGE_Clothing = 9,
	MATUSAGE_NiagaraSprites = 10,
	MATUSAGE_NiagaraRibbons = 11,
	MATUSAGE_NiagaraMeshParticles = 12,
	MATUSAGE_GeometryCache = 13,
	MATUSAGE_ComputeNormalsToUVs = 14,
	MATUSAGE_ProjectedGrid = 15,
	MATUSAGE_MAX = 16
};

enum class ESceneTextureId {
	PPI_SceneColor = 0,
	PPI_SceneDepth = 1,
	PPI_DiffuseColor = 2,
	PPI_SpecularColor = 3,
	PPI_SubsurfaceColor = 4,
	PPI_BaseColor = 5,
	PPI_Specular = 6,
	PPI_Metallic = 7,
	PPI_WorldNormal = 8,
	PPI_SeparateTranslucency = 9,
	PPI_Opacity = 10,
	PPI_Roughness = 11,
	PPI_MaterialAO = 12,
	PPI_CustomDepth = 13,
	PPI_PostProcessInput0 = 14,
	PPI_PostProcessInput1 = 15,
	PPI_PostProcessInput2 = 16,
	PPI_PostProcessInput3 = 17,
	PPI_PostProcessInput4 = 18,
	PPI_PostProcessInput5 = 19,
	PPI_PostProcessInput6 = 20,
	PPI_DecalMask = 21,
	PPI_ShadingModelColor = 22,
	PPI_ShadingModelID = 23,
	PPI_AmbientOcclusion = 24,
	PPI_CustomStencil = 25,
	PPI_StoredBaseColor = 26,
	PPI_StoredSpecular = 27,
	PPI_Velocity = 28
};

enum class ETextureSizingType {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4
};

enum class ELandscapeCullingPrecision {
	High = 0,
	Medium = 1,
	Low = 2
};

enum class EMaterialDomain {
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_Volume = 3,
	MD_PostProcess = 4,
	MD_UI = 5,
	MD_RuntimeVirtualTexture = 6,
	MD_MAX = 7
};

enum class EMeshFeatureImportance {
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5
};

enum class EMeshInstancingReplacementMethod {
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1
};

enum class EMeshLODSelectionType {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3
};

enum class EMeshMergeType {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1
};

enum class EMicroTransactionDelegate {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2
};

enum class EMicroTransactionResult {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4
};

enum class EProxyNormalComputationMethod {
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2
};

enum class EStaticMeshReductionTerimationCriterion {
	Triangles = 0,
	Vertices = 1,
	Any = 2
};

enum class EUVOutput {
	DoNotOutputChannel = 0,
	OutputChannel = 1
};

enum class EVertexPaintAxis {
	X = 0,
	Y = 1,
	Z = 2
};

enum class ENavDataGatheringMode {
	Default = 0,
	Instant = 1,
	Lazy = 2
};

enum class ENavDataGatheringModeConfig {
	Invalid = 0,
	Instant = 1,
	Lazy = 2
};

enum class ENavLinkDirection {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2
};

enum class ENavPathEvent {
	Cleared = 0,
	NewPath = 1,
	UpdatedDueToGoalMoved = 2,
	UpdatedDueToNavigationChanged = 3,
	Invalidated = 4,
	RePathFailed = 5,
	MetaPathUpdate = 6,
	Custom = 7
};

enum class ENavigationOptionFlag {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

enum class ENavigationQueryResult {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3
};

enum class EPlaneConstraintAxisSetting {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4
};

enum class FNavigationSystemRunMode {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4
};

enum class EEmitterRenderMode {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5
};

enum class EFastArraySerializerDeltaFlags {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 4,
};

enum class EModuleType {
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_Light = 7,
	EPMT_SubUV = 8,
	EPMT_MAX = 9
};

enum class EParticleBurstMethod {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2
};

enum class EParticleDetailMode {
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_MAX = 3
};

enum class EParticleSignificanceLevel {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4
};

enum class EParticleSourceSelectionMethod {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2
};

enum class EParticleSubUVInterpMethod {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5
};

enum class EParticleSystemInsignificanceReaction {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4
};

enum class Beam2SourceTargetMethod {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5
};

enum class Beam2SourceTargetTangentMethod {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4
};

enum class BeamModifierType {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2
};

enum class EAttractorParticleSelectionMethod {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2
};

enum class EParticleCameraOffsetUpdateMethod {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3
};

enum class EParticleCollisionComplete {
	EPCC_Kill = 0,
	EPCC_Freeze = 1,
	EPCC_HaltCollisions = 2,
	EPCC_FreezeTranslation = 3,
	EPCC_FreezeRotation = 4,
	EPCC_FreezeMovement = 5,
	EPCC_MAX = 6
};

enum class EParticleCollisionResponse {
	Bounce = 0,
	Stop = 1,
	Kill = 2
};

enum class CylinderHeightAxis {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3
};

enum class EEmitterDynamicParameterValue {
	EDPV_UserSet = 0,
	EDPV_AutoSet = 1,
	EDPV_VelocityX = 2,
	EDPV_VelocityY = 3,
	EDPV_VelocityZ = 4,
	EDPV_VelocityMag = 5,
	EDPV_MAX = 6
};

enum class ELocationBoneSocketSelectionMethod {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2
};

enum class ELocationBoneSocketSource {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2
};

enum class ELocationEmitterSelectionMethod {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2
};

enum class ELocationSkelVertSurfaceSource {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2
};

enum class EOrbitChainMode {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3
};

enum class EParticleAxisLock {
	EPAL_NONE = 0,
	EPAL_X = 1,
	EPAL_Y = 2,
	EPAL_Z = 3,
	EPAL_NEGATIVE_X = 4,
	EPAL_NEGATIVE_Y = 5,
	EPAL_NEGATIVE_Z = 6,
	EPAL_ROTATE_X = 7,
	EPAL_ROTATE_Y = 8,
	EPAL_ROTATE_Z = 9,
	EPAL_MAX = 10
};

enum class EBeam2Method {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3
};

enum class EBeamTaperMethod {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3
};

enum class EEmitterNormalsMode {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3
};

enum class EParticleSortMode {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5
};

enum class EParticleUVFlipMode {
	None = 0,
	FlipUV = 1,
	FlipUOnly = 2,
	FlipVOnly = 3,
	RandomFlipUV = 4,
	RandomFlipUOnly = 5,
	RandomFlipVOnly = 6,
	RandomFlipUVIndependent = 7
};

enum class ETrail2SourceMethod {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3
};

enum class EMeshCameraFacingOptions {
	XAxisFacing_NoUp = 0,
	XAxisFacing_ZUp = 1,
	XAxisFacing_NegativeZUp = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_NegativeYUp = 4,
	LockedAxis_ZAxisFacing = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX = 13
};

enum class EMeshCameraFacingUpAxis {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5
};

enum class EMeshScreenAlignment {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3
};

enum class EParticleEventType {
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_Burst = 4,
	EPET_Blueprint = 5,
	EPET_MAX = 6
};

enum class EParticleScreenAlignment {
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_AwayFromCenter = 4,
	PSA_TypeSpecific = 5,
	PSA_FacingCameraDistanceBlend = 6,
	PSA_MAX = 7
};

enum class EParticleSysParamType {
	PSPT_None = 0,
	PSPT_Scalar = 1,
	PSPT_ScalarRand = 2,
	PSPT_Vector = 3,
	PSPT_VectorRand = 4,
	PSPT_Color = 5,
	PSPT_Actor = 6,
	PSPT_Material = 7,
	PSPT_MAX = 8
};

enum class EParticleSystemOcclusionBoundsMethod {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2
};

enum class EParticleSystemUpdateMode {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1
};

enum class ETrailsRenderAxisOption {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3
};

enum class ParticleReplayState {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3
};

enum class ParticleSystemLODMethod {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2
};

enum class EFrictionCombineMode {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3
};

enum class EPlatformInterfaceDataType {
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6
};

enum class ESettingsDOF {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3
};

enum class ESettingsLockedAxis {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4
};

enum class EDynamicForceFeedbackAction {
	Start = 0,
	Update = 1,
	Stop = 2
};

enum class EViewTargetBlendFunction {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5
};

enum class ECanBeCharacterBase {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3
};

enum class EHasCustomNavigableGeometry {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3
};

enum class ERendererStencilMask {
	ERSM_Default = 0,
	ERSM_255 = 1,
	ERSM_1 = 2,
	ERSM_2 = 3,
	ERSM_4 = 4,
	ERSM_8 = 5,
	ERSM_16 = 6,
	ERSM_32 = 7,
	ERSM_64 = 8,
	ERSM_128 = 9
};

enum class EAlphaChannelMode {
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2
};

enum class EAutoExposureMethodUI {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

enum class EClearSceneOptions {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2
};

enum class ECompositingSampleCount {
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
};

enum class ECustomDepthStencil {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3
};

enum class EDefaultBackBufferPixelFormat {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5
};

enum class EEarlyZPass {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3
};

enum class EMobileMSAASampleCount {
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
};

enum class EReflectionSourceType {
	CapturedScene = 0,
	SpecifiedCubemap = 1
};

enum class ERichCurveExtrapolation {
	RCCE_Cycle = 0,
	RCCE_CycleWithOffset = 1,
	RCCE_Oscillate = 2,
	RCCE_Linear = 3,
	RCCE_Constant = 4,
	RCCE_None = 5
};

enum class ERichCurveInterpMode {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3
};

enum class EAntiAliasingMethod {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_SMAA = 4,
	AAM_MAX = 5
};

enum class EAutoExposureMethod {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

enum class EBloomMethod {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2
};

enum class EConstraintTransform {
	Absolute = 0,
	Relative = 1
};

enum class EControlConstraint {
	Orientation = 0,
	Translation = 1,
	MAX = 2
};

enum class EDepthOfFieldMethod {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3
};

enum class EDiffusionQuality {
	DFQ_None = 0,
	DFQ_Low = 1,
	DFQ_Middle = 2,
	DFQ_High = 3,
	DFQ_MAX = 4
};

enum class EGlareType {
	GLT_Cross = 0,
	GLT_CrossSpectal = 1,
	GLT_SnowCross = 2,
	GLT_SnowCrossSpectal = 3,
	GLT_CineCamVerticalslits = 4,
	GLT_CineCamHorizontalslits = 5,
	GLT_Custom = 6,
	GLT_MAX = 7
};

enum class EGraphAxisStyle {
	Lines = 0,
	Notches = 1,
	Grid = 2
};

enum class EGraphDataStyle {
	Lines = 0,
	Filled = 1
};

enum class ELegendPosition {
	Outside = 0,
	Inside = 1
};

enum class ELightUnits {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2
};

enum class EReflectedAndRefractedRayTracedShadows {
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2
};

enum class EReflectionsType {
	ScreenSpace = 0,
	RayTracing = 1
};

enum class EReporterLineStyle {
	Line = 0,
	Dash = 1
};

enum class ERichCurveCompressionFormat {
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4
};

enum class ERichCurveKeyTimeCompressionFormat {
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1
};

enum class ERichCurveTangentMode {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3
};

enum class ERichCurveTangentWeightMode {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3
};

enum class ERootMotionAccumulateMode {
	Override = 0,
	Additive = 1
};

enum class ERootMotionFinishVelocityMode {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2
};

enum class ERootMotionSourceSettingsFlags {
	UseSensitiveLiftoffCheck = 1
	DisablePartialEndTick = 2,
};

enum class ERootMotionSourceStatusFlags {
	Prepared = 1,
	Finished = 2
	MarkedForRemoval = 4,
};

enum class ERuntimeVirtualTextureMainPassType {
	Never = 0,
	Exclusive = 1,
	Always = 2
};

enum class ERuntimeVirtualTextureMaterialType {
	BaseColor = 0,
	BaseColor_Normal = 1,
	BaseColor_Normal_Specular = 2,
	Count = 3
};

enum class ESSRFilterMethod {
	SSRFM_None = 0,
	SSRFM_Gaussian = 1,
	SSRFM_Bilateral = 2,
	SSRFM_Median = 3,
	SSRFM_MAX = 4
};

enum class ETranslucencyType {
	Raster = 0,
	RayTracing = 1
};

enum class EDetailMode {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3
};

enum class ERelativeTransformSpace {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3
};

enum class ESceneCapturePrimitiveRenderMode {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2
};

enum class EMaterialProperty {
	MP_EmissiveColor = 0,
	MP_Opacity = 1,
	MP_OpacityMask = 2,
	MP_DiffuseColor = 3,
	MP_SpecularColor = 4,
	MP_BaseColor = 5,
	MP_Metallic = 6,
	MP_Specular = 7,
	MP_Roughness = 8,
	MP_Normal = 9,
	MP_WorldPositionOffset = 10,
	MP_WorldDisplacement = 11,
	MP_TessellationMultiplier = 12,
	MP_SubsurfaceColor = 13,
	MP_CustomData0 = 14,
	MP_CustomData1 = 15,
	MP_AmbientOcclusion = 16,
	MP_Refraction = 17,
	MP_CustomizedUVs0 = 18,
	MP_CustomizedUVs1 = 19,
	MP_CustomizedUVs2 = 20,
	MP_CustomizedUVs3 = 21,
	MP_CustomizedUVs4 = 22,
	MP_CustomizedUVs5 = 23,
	MP_CustomizedUVs6 = 24,
	MP_CustomizedUVs7 = 25,
	MP_PixelDepthOffset = 26,
	MP_ShadingModel = 27,
	MP_ToonOutline = 28,
	MP_OutlinePaint = 29,
	MP_MaterialAttributes = 30,
	MP_CustomOutput = 31,
	MP_MAX = 32
};

enum class EWindowTitleBarMode {
	Overlay = 0,
	VerticalBox = 1
};

enum class EAnimCurveType {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3
};

enum class EAnimationMode {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2
};

enum class EKinematicBonesUpdateToPhysics {
	SkipSimulatingBones = 0,
	SkipAllBones = 1
};

enum class EPhysicsTransformUpdateMode {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1
};

enum class EBoneFilterActionOption {
	Remove = 0,
	Keep = 1,
	Invalid = 2
};

enum class EBoneSpaces {
	WorldSpace = 0,
	ComponentSpace = 1
};

enum class EBoneTranslationRetargetingMode {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4
};

enum class EBoneVisibilityStatus {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3
};

enum class EPhysBodyOp {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2
};

enum class ESkeletalMeshLODType {
	Reduction = 0,
	Proxy = 1,
	None = 2
};

enum class EVisibilityBasedAnimTickOption {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3
};

enum class SkeletalMeshOptimizationImportance {
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6
};

enum class SkeletalMeshOptimizationType {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3
};

enum class SkeletalMeshTerminationCriterion {
	SMTC_NumOfTriangles = 0,
	SMTC_NumOfVerts = 1,
	SMTC_TriangleOrVert = 2,
	SMTC_AbsNumOfTriangles = 3,
	SMTC_AbsNumOfVerts = 4,
	SMTC_AbsTriangleOrVert = 5,
	SMTC_MAX = 6
};

enum class EAirAbsorptionMethod {
	Linear = 0,
	CustomCurve = 1
};

enum class EAudioOutputTarget {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2
};

enum class EMaxConcurrentResolutionRule {
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	StopLowestPriority = 4,
	StopQuietest = 5,
	StopLowestPriorityThenPreventNew = 6
};

enum class EReverbSendMethod {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2
};

enum class ESkyLightSourceType {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2
};

enum class ESoundDistanceCalc {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4
};

enum class ESoundSpatializationAlgorithm {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1
};

enum class EVirtualizationMode {
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2
};

enum class EAudioRecordingExportType {
	SoundWave = 0,
	WavFile = 1
};

enum class ESendLevelControlMethod {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2
};

enum class ESoundGroup {
	SOUNDGROUP_Default = 0,
	SOUNDGROUP_Effects = 1,
	SOUNDGROUP_UI = 2,
	SOUNDGROUP_Music = 3,
	SOUNDGROUP_Voice = 4,
	SOUNDGROUP_GameSoundGroup1 = 5,
	SOUNDGROUP_GameSoundGroup2 = 6,
	SOUNDGROUP_GameSoundGroup3 = 7,
	SOUNDGROUP_GameSoundGroup4 = 8,
	SOUNDGROUP_GameSoundGroup5 = 9,
	SOUNDGROUP_GameSoundGroup6 = 10,
	SOUNDGROUP_GameSoundGroup7 = 11,
	SOUNDGROUP_GameSoundGroup8 = 12,
	SOUNDGROUP_GameSoundGroup9 = 13,
	SOUNDGROUP_GameSoundGroup10 = 14,
	SOUNDGROUP_GameSoundGroup11 = 15,
	SOUNDGROUP_GameSoundGroup12 = 16,
	SOUNDGROUP_GameSoundGroup13 = 17,
	SOUNDGROUP_GameSoundGroup14 = 18,
	SOUNDGROUP_GameSoundGroup15 = 19,
	SOUNDGROUP_GameSoundGroup16 = 20,
	SOUNDGROUP_GameSoundGroup17 = 21,
	SOUNDGROUP_GameSoundGroup18 = 22,
	SOUNDGROUP_GameSoundGroup19 = 23,
	SOUNDGROUP_GameSoundGroup20 = 24
};

enum class ESourceBusChannels {
	Mono = 0,
	Stereo = 1
};

enum class ESourceBusSendLevelControlMethod {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2
};

enum class ESubmixChannelFormat {
	Device = 0,
	Stereo = 1,
	Quad = 2,
	FiveDotOne = 3,
	SevenDotOne = 4,
	Ambisonics = 5,
	Count = 6
};

enum class ModulationParamMode {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3
};

enum class EDecompressionType {
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_Streaming = 7,
	DTYPE_MAX = 8
};

enum class ESoundWaveFFTSize {
	VerySmall_64 = 0,
	Small_256 = 1,
	Medium_512 = 2,
	Large_1024 = 3,
	VeryLarge_2048 = 4
};

enum class ESplineCoordinateSpace {
	Local = 0,
	World = 1
};

enum class ESplinePointType {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4
};

enum class EImportanceLevel {
	IL_Off = 0,
	IL_Lowest = 1,
	IL_Low = 2,
	IL_Normal = 3,
	IL_High = 4,
	IL_Highest = 5,
	TEMP_BROKEN2 = 6,
	EImportanceLevel_MAX = 7
};

enum class ENormalMode {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5
};

enum class EOptimizationType {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2
};

enum class ESplineMeshAxis {
	X = 0,
	Y = 1,
	Z = 2
};

enum class EStaticMeshLODType {
	Reduction = 0,
	Proxy = 1
};

enum class EOpacitySourceMode {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4
};

enum class EStereoLayerShape {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_MAX = 3
};

enum class EStereoLayerType {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3
};

enum class ESubUVBoundingVertexCount {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1
};

enum class ECompositeTextureMode {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5
};

enum class EHorizTextAligment {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2
};

enum class ETextureCompressionQuality {
	TCQ_Default = 0,
	TCQ_Lowest = 1,
	TCQ_Low = 2,
	TCQ_Medium = 3,
	TCQ_High = 4,
	TCQ_Highest = 5,
	TCQ_MAX = 6
};

enum class ETextureLossyCompressionAmount {
	TLCA_Default = 0,
	TLCA_None = 1,
	TLCA_Lowest = 2,
	TLCA_Low = 3,
	TLCA_Medium = 4,
	TLCA_High = 5,
	TLCA_Highest = 6
};

enum class ETextureMipCount {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3
};

enum class ETextureMipLoadOptions {
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2
};

enum class ETexturePowerOfTwoSetting {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2
};

enum class ETextureRenderTargetFormat {
	RTF_R8 = 0,
	RTF_RG8 = 1,
	RTF_RGBA8 = 2,
	RTF_R16f = 3,
	RTF_RG16f = 4,
	RTF_RGBA16f = 5,
	RTF_R32f = 6,
	RTF_RG32f = 7,
	RTF_RGBA32f = 8,
	RTF_RGB10A2 = 9
};

enum class ETextureSamplerFilter {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4
};

enum class ETextureSourceArtType {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3
};

enum class ETextureSourceFormat {
	TSF_Invalid = 0,
	TSF_G8 = 1,
	TSF_BGRA8 = 2,
	TSF_BGRE8 = 3,
	TSF_RGBA16 = 4,
	TSF_RGBA16F = 5,
	TSF_RGBA8 = 6,
	TSF_RGBE8 = 7,
	TSF_MAX = 8
};

enum class EVerticalTextAligment {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3
};

enum class TextureAddress {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3
};

enum class TextureCompressionSettings {
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Masks = 2,
	TC_Grayscale = 3,
	TC_Displacementmap = 4,
	TC_VectorDisplacementmap = 5,
	TC_HDR = 6,
	TC_EditorIcon = 7,
	TC_Alpha = 8,
	TC_DistanceFieldFont = 9,
	TC_HDR_Compressed = 10,
	TC_BC7 = 11,
	TC_ToonIndexed = 12,
	TC_MAX = 13
};

enum class TextureFilter {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4
};

enum class TextureGroup {
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_Lightmap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MobileFlattened = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap = 22,
	TEXTUREGROUP_ColorLookupTable = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh = 26,
	TEXTUREGROUP_IESLightProfile = 27,
	TEXTUREGROUP_Pixels2D = 28,
	TEXTUREGROUP_HierarchicalLOD = 29,
	TEXTUREGROUP_Impostor = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData = 32,
	TEXTUREGROUP_16BitData = 33,
	TEXTUREGROUP_Ground = 34,
	TEXTUREGROUP_Project01 = 35,
	TEXTUREGROUP_Project02 = 36,
	TEXTUREGROUP_Project03 = 37,
	TEXTUREGROUP_Project04 = 38,
	TEXTUREGROUP_Project05 = 39,
	TEXTUREGROUP_Project06 = 40,
	TEXTUREGROUP_Project07 = 41,
	TEXTUREGROUP_Project08 = 42,
	TEXTUREGROUP_Project09 = 43,
	TEXTUREGROUP_Project10 = 44,
	TEXTUREGROUP_MAX = 45
};

enum class TextureMipGenSettings {
	TMGS_FromTextureGroup = 0,
	TMGS_SimpleAverage = 1,
	TMGS_Sharpen0 = 2,
	TMGS_Sharpen1 = 3,
	TMGS_Sharpen2 = 4,
	TMGS_Sharpen3 = 5,
	TMGS_Sharpen4 = 6,
	TMGS_Sharpen5 = 7,
	TMGS_Sharpen6 = 8,
	TMGS_Sharpen7 = 9,
	TMGS_Sharpen8 = 10,
	TMGS_Sharpen9 = 11,
	TMGS_Sharpen10 = 12,
	TMGS_NoMipmaps = 13,
	TMGS_LeaveExistingMips = 14,
	TMGS_Blur1 = 15,
	TMGS_Blur2 = 16,
	TMGS_Blur3 = 17,
	TMGS_Blur4 = 18,
	TMGS_Blur5 = 19,
	TMGS_Unfiltered = 20,
	TMGS_MAX = 21
};

enum class ETimeStretchCurveMapping {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3
};

enum class ETimecodeProviderSynchronizationState {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3
};

enum class ETimelineDirection {
	Forward = 0,
	Backward = 1
};

enum class ETimelineLengthMode {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1
};

enum class ETwitterIntegrationDelegate {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3
};

enum class ETwitterRequestMethod {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3
};

enum class ERenderFocusRule {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3
};

enum class EUIScalingRule {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	Custom = 4
};

enum class EUserDefinedStructureStatus {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4
};

enum class EVectorFieldConstructionOp {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2
};

enum class EWindSourceType {
	Directional = 0,
	Point = 1
};

enum class EPSCPoolMethod {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4
};

enum class EVisibilityAggressiveness {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3
};

enum class EVolumeLightingMethod {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1
};

enum class EMediaPlayerOptionBooleanOverride {
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2
};

enum class EClothingWindMethod {
	Legacy = 0,
	Accurate = 1
};

enum class MaskTarget_PhysMesh {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4
};

enum class EMediaAudioCaptureDeviceFilter {
	Card = 1,
	Microphone = 2,
	Software = 4,
	Unknown = 8,
};

enum class EMediaPlayerTrack {
	Audio = 0,
	Caption = 1,
	Metadata = 2,
	Script = 3,
	Subtitle = 4,
	Text = 5,
	Video = 6
};

enum class EMediaSoundChannels {
	Mono = 0,
	Stereo = 1,
	Surround = 2
};

enum class EMediaSoundComponentFFTSize {
	Min_64 = 0,
	Small_256 = 1,
	Medium_512 = 2,
	Large_1024 = 3
};

enum class EMediaVideoCaptureDeviceFilter {
	Card = 1,
	Software = 2,
	Unknown = 4,
	Webcam = 8,
};

enum class EMediaWebcamCaptureDeviceFilter {
	DepthSensor = 1,
	Front = 2,
	Rear = 4,
	Unknown = 8,
};

enum class ENavCostDisplay {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2
};

enum class ERecastPartitioning {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2
};

enum class ERuntimeGenerationType {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3
};

enum class EVectorVMBaseTypes {
	Float = 0,
	Int = 1,
	Bool = 2,
	Num = 3
};

enum class EVectorVMOp {
	done = 0,
	add = 1,
	sub = 2,
	mul = 3,
	div = 4,
	mad = 5,
	lerp = 6,
	rcp = 7,
	rsq = 8,
	sqrt = 9,
	neg = 10,
	abs = 11,
	exp = 12,
	exp2 = 13,
	log = 14,
	log2 = 15,
	sin = 16,
	cos = 17,
	tan = 18,
	asin = 19,
	acos = 20,
	atan = 21,
	atan2 = 22,
	ceil = 23,
	floor = 24,
	fmod = 25,
	frac = 26,
	trunc = 27,
	clamp = 28,
	min = 29,
	max = 30,
	pow = 31,
	round = 32,
	sign = 33,
	step = 34,
	random = 35,
	noise = 36,
	cmplt = 37,
	cmple = 38,
	cmpgt = 39,
	cmpge = 40,
	cmpeq = 41,
	cmpneq = 42,
	select = 43,
	addi = 44,
	subi = 45,
	muli = 46,
	divi = 47,
	clampi = 48,
	mini = 49,
	maxi = 50,
	absi = 51,
	negi = 52,
	signi = 53,
	randomi = 54,
	cmplti = 55,
	cmplei = 56,
	cmpgti = 57,
	cmpgei = 58,
	cmpeqi = 59,
	cmpneqi = 60,
	bit_and = 61,
	bit_or = 62,
	bit_xor = 63,
	bit_not = 64,
	bit_lshift = 65,
	bit_rshift = 66,
	logic_and = 67,
	logic_or = 68,
	logic_xor = 69,
	logic_not = 70,
	f2i = 71,
	i2f = 72,
	f2b = 73,
	b2f = 74,
	i2b = 75,
	b2i = 76,
	inputdata_32bit = 77,
	inputdata_noadvance_32bit = 78,
	outputdata_32bit = 79,
	acquireindex = 80,
	external_func_call = 81,
	exec_index = 82,
	noise2D = 83,
	noise3D = 84,
	enter_stat_scope = 85,
	exit_stat_scope = 86,
	update_id = 87,
	acquire_id = 88,
	NumOpcodes = 89
};

enum class EVectorVMOperandLocation {
	Register = 0,
	Constant = 1,
	Num = 2
};

enum class EGameplayTaskRunResult {
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4
};

enum class EGameplayTaskState {
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4
};

enum class ETaskResourceOverlapPolicy {
	StartOnTop = 0,
	StartAtEnd = 1
};

enum class EAISenseNotifyType {
	OnEveryPerception = 0,
	OnPerceptionChange = 1
};

enum class EAILockSource {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4
};

enum class EAIOptionFlag {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

enum class EAIRequestPriority {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5
};

enum class EAITaskPriority {
	Lowest = 0,
	Low = 64,
	AutonomousAI = 127,
	High = 192,
	Ultimate = 254,
};

enum class EGenericAICheck {
	Less = 0,
	LessOrEqual = 1,
	Equal = 2,
	NotEqual = 3,
	GreaterOrEqual = 4,
	Greater = 5,
	IsTrue = 6,
	MAX = 7
};

enum class EPawnActionAbortState {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5
};

enum class EPawnActionEventType {
	Invalid = 0,
	FailedToStart = 1,
	InstantAbort = 2,
	FinishedAborting = 3,
	FinishedExecution = 4,
	Push = 5
};

enum class EPawnActionResult {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4
};

enum class FAIDistanceType {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3
};

enum class EArithmeticKeyOperation {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5
};

enum class EBTBlackboardRestart {
	ValueChange = 0,
	ResultChange = 1
};

enum class EBTChildIndex {
	FirstNode = 0,
	TaskNode = 1
};

enum class EBTDecoratorLogic {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4
};

enum class EBTFlowAbortMode {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3
};

enum class EBTNodeResult {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3
};

enum class EBTParallelMode {
	AbortBackground = 0,
	WaitForBackground = 1
};

enum class EBasicKeyOperation {
	Set = 0,
	NotSet = 1
};

enum class ETextKeyOperation {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3
};

enum class EBlackBoardEntryComparison {
	Equal = 0,
	NotEqual = 1
};

enum class EPathExistanceQueryType {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2
};

enum class EPointOnCircleSpacingMethod {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1
};

enum class EAIParamType {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3
};

enum class EEQSNormalizationType {
	Absolute = 0,
	RelativeToScores = 1
};

enum class EEnvDirection {
	TwoPoints = 0,
	Rotation = 1
};

enum class EEnvOverlapShape {
	Box = 0,
	Sphere = 1,
	Capsule = 2
};

enum class EEnvQueryHightlightMode {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2
};

enum class EEnvQueryParam {
	Float = 0,
	Int = 1,
	Bool = 2
};

enum class EEnvQueryRunMode {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3
};

enum class EEnvQueryStatus {
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5
};

enum class EEnvQueryTestClamping {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2
};

enum class EEnvQueryTrace {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3
};

enum class EEnvTestCost {
	Low = 0,
	Medium = 1,
	High = 2
};

enum class EEnvTestDistance {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3
};

enum class EEnvTestDot {
	Dot3D = 0,
	Dot2D = 1
};

enum class EEnvTestFilterOperator {
	AllPass = 0,
	AnyPass = 1
};

enum class EEnvTestFilterType {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3
};

enum class EEnvTestPathfinding {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2
};

enum class EEnvTestPurpose {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2
};

enum class EEnvTestScoreEquation {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4
};

enum class EEnvTestScoreOperator {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2
};

enum class EEnvTestWeight {
	None = 0,
	Square = 1,
	Inverse = 2,
	Unused = 3,
	Constant = 4,
	Skip = 5
};

enum class EEnvTraceShape {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3
};

enum class EPathFollowingAction {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4
};

enum class EPathFollowingRequestResult {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2
};

enum class EPathFollowingResult {
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5
};

enum class EPathFollowingStatus {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3
};

enum class EPawnActionFailHandling {
	RequireSuccess = 0,
	IgnoreFailure = 1
};

enum class EPawnActionMoveMode {
	UsePathfinding = 0,
	StraightLine = 1
};

enum class EPawnSubActionTriggeringPolicy {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1
};

enum class ETeamAttitude {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2
};

