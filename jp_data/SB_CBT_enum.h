EImpactDamageOverride = {
	0 : 'IDO_None',
	1 : 'IDO_On',
	2 : 'IDO_Off',
	3 : 'IDO_MAX',
}

ENiagaraAgeUpdateMode = {
	0 : 'TickDeltaTime',
	1 : 'DesiredAge',
}

ENiagaraCollisionMode = {
	0 : 'None',
	1 : 'SceneGeometry',
	2 : 'DepthBuffer',
	3 : 'DistanceField',
}

ENiagaraDataSetType = {
	0 : 'ParticleData',
	1 : 'Shared',
	2 : 'Event',
}

ENiagaraInputNodeUsage = {
	0 : 'Undefined',
	1 : 'Parameter',
	2 : 'Attribute',
	3 : 'SystemConstant',
	4 : 'TranslatorConstant',
	5 : 'RapidIterationParameter',
}

ENiagaraScriptCompileStatus = {
	0 : 'NCS_Unknown',
	1 : 'NCS_Dirty',
	2 : 'NCS_Error',
	3 : 'NCS_UpToDate',
	4 : 'NCS_BeingCreated',
	5 : 'NCS_UpToDateWithWarnings',
	6 : 'NCS_ComputeUpToDateWithWarnings',
	7 : 'NCS_MAX',
}

ENiagaraScriptGroup = {
	0 : 'Particle',
	1 : 'Emitter',
	2 : 'System',
	3 : 'Max',
}

ENiagaraScriptUsage = {
	0 : 'Function',
	1 : 'Module',
	2 : 'DynamicInput',
	3 : 'ParticleSpawnScript',
	4 : 'ParticleSpawnScriptInterpolated',
	5 : 'ParticleUpdateScript',
	6 : 'ParticleEventScript',
	7 : 'ParticleGPUComputeScript',
	8 : 'EmitterSpawnScript',
	9 : 'EmitterUpdateScript',
	10 : 'SystemSpawnScript',
	11 : 'SystemUpdateScript',
}

ENiagaraSimTarget = {
	0 : 'CPUSim',
	1 : 'GPUComputeSim',
}

ENDISkeletalMesh_SkinningMode = {
	0 : 'None',
	1 : 'SkinOnTheFly',
	2 : 'PreSkin',
}

ENiagaraMeshFacingMode = {
	0 : 'Default',
	1 : 'Velocity',
	2 : 'CameraPosition',
	3 : 'CameraPlane',
}

ENiagaraSortMode = {
	0 : 'None',
	1 : 'ViewDepth',
	2 : 'ViewDistance',
	3 : 'CustomAscending',
	4 : 'CustomDecending',
}

EScriptExecutionMode = {
	0 : 'EveryParticle',
	1 : 'SpawnedParticles',
	2 : 'SingleParticle',
}

ENiagaraModuleDependencyScriptConstraint = {
	0 : 'SameScript',
	1 : 'AllScripts',
}

ENiagaraModuleDependencyType = {
	0 : 'PreDependency',
	1 : 'PostDependency',
}

ENiagaraPreviewGridResetMode = {
	0 : 'Never',
	1 : 'Individual',
	2 : 'All',
}

ENiagaraRibbonAgeOffsetMode = {
	0 : 'Scale',
	1 : 'Clip',
}

ENiagaraRibbonDrawDirection = {
	0 : 'FrontToBack',
	1 : 'BackToFront',
}

ENiagaraRibbonFacingMode = {
	0 : 'Screen',
	1 : 'Custom',
	2 : 'CustomSideVector',
}

ENiagaraRibbonTessellationMode = {
	0 : 'Automatic',
	1 : 'Custom',
	2 : 'Disabled',
}

ENiagaraSpriteAlignment = {
	0 : 'Unaligned',
	1 : 'VelocityAligned',
	2 : 'CustomAlignment',
}

ENiagaraSpriteFacingMode = {
	0 : 'FaceCamera',
	1 : 'FaceCameraPlane',
	2 : 'CustomFacingVector',
	3 : 'FaceCameraPosition',
	4 : 'FaceCameraDistanceBlend',
}

EUnusedAttributeBehaviour = {
	0 : 'Copy',
	1 : 'Zero',
	2 : 'None',
	3 : 'MarkInvalid',
	4 : 'PassThrough',
}

ENiagaraExecutionState = {
	0 : 'Active',
	1 : 'Inactive',
	2 : 'InactiveClear',
	3 : 'Complete',
	4 : 'Disabled',
	5 : 'Num',
}

ENiagaraExecutionStateSource = {
	0 : 'Scalability',
	1 : 'Internal',
	2 : 'Owner',
	3 : 'InternalCompletion',
}

ENiagaraNumericOutputTypeSelectionMode = {
	0 : 'None',
	1 : 'Largest',
	2 : 'Smallest',
	3 : 'Scalar',
}

FNiagaraCompileEventSeverity = {
	0 : 'Log',
	1 : 'Warning',
	2 : 'Error',
}

ECompPassConstructionType = {
	0 : 'Unknown',
	1 : 'EditorConstructed',
	2 : 'BlueprintConstructed',
	3 : 'CodeConstructed',
}

EExrCompressionOptions = {
	0 : 'Compressed',
	1 : 'Uncompressed',
}

EInheritedSourceType = {
	0 : 'Inherited',
	1 : 'Override',
}

EParamType = {
	0 : 'UnknownParamType',
	1 : 'ScalarParam',
	2 : 'VectorParam',
	3 : 'TextureParam',
	4 : 'MediaTextureParam',
}

ESceneCameraLinkType = {
	0 : 'Inherited',
	1 : 'Override',
	2 : 'Unused',
}

ETargetUsageFlags = {
	0 : 'USAGE_None',
	1 : 'USAGE_Input',
	2 : 'USAGE_Transform',
	4 : 'USAGE_Output',
	32 : 'USAGE_Persistent',
	8 : 'USAGE_Intermediate0',
	16 : 'USAGE_Intermediate1',
}

EFileMediaOutputPixelFormat = {
	0 : 'B8G8R8A8',
	1 : 'FloatRGBA',
}

EMediaCaptureCroppingType = {
	0 : 'None',
	1 : 'Center',
	2 : 'TopLeft',
	3 : 'Custom',
}

EMediaCaptureState = {
	0 : 'Error',
	1 : 'Capturing',
	2 : 'Preparing',
	3 : 'StopRequested',
	4 : 'Stopped',
}

EMediaIOInputType = {
	0 : 'Fill',
	1 : 'FillAndKey',
}

EMediaIOOutputType = {
	0 : 'Fill',
	1 : 'FillAndKey',
}

EMediaIOQuadLinkTransportType = {
	0 : 'SquareDivision',
	1 : 'TwoSampleInterleave',
}

EMediaIOReferenceType = {
	0 : 'FreeRun',
	1 : 'External',
	2 : 'Input',
}

EMediaIOStandardType = {
	0 : 'Progressive',
	1 : 'Interlaced',
	2 : 'ProgressiveSegmentedFrame',
}

EMediaIOTimecodeFormat = {
	0 : 'None',
	1 : 'LTC',
	2 : 'VITC',
}

EMediaIOTransportType = {
	0 : 'SingleLink',
	1 : 'DualLink',
	2 : 'QuadLink',
	3 : 'HDMI',
}

EASAlphaBlendOption = {
	0 : 'Linear',
	1 : 'Cubic',
	2 : 'HermiteCubic',
	3 : 'Sinusoidal',
	4 : 'QuadraticInOut',
	5 : 'CubicInOut',
	6 : 'QuarticInOut',
	7 : 'QuinticInOut',
	8 : 'CircularIn',
	9 : 'CircularOut',
	10 : 'CircularInOut',
	11 : 'ExpIn',
	12 : 'ExpOut',
	13 : 'ExpInOut',
	14 : 'Custom',
	15 : 'Inertial',
}

EASEasing = {
	0 : 'Step',
	1 : 'Linear',
	2 : 'Cubic',
}

EASSMStateType = {
	1 : 'Sequence',
	2 : 'BlendSpace',
	3 : 'AimOffset',
	4 : 'StateMachine',
	5 : 'Slot',
}

EASSMTransitionType = {
	0 : 'None',
	1 : 'Default',
	2 : 'EventDriven',
}

EAnimCommandState = {
	0 : 'ACS_Failed',
	1 : 'ACS_Precede',
	2 : 'ASC_Just',
}

ENextStateType = {
	0 : 'NST_Invalid',
	1 : 'NST_Sequence',
	2 : 'NST_BlendSpace',
	3 : 'NST_StateMachine',
	4 : 'NST_Conduit',
	5 : 'NST_Terminate',
	6 : 'NST_Through',
	7 : 'NST_Slot',
}

ETransitionRule = {
	0 : 'TR_PlayEnd',
	1 : 'TR_Command',
	2 : 'TR_MovementMode',
	3 : 'TR_Blueprint',
	4 : 'TR_Custom',
}

EAIFwBTStatus = {
	0 : 'Invalid',
	1 : 'Success',
	2 : 'Failure',
	3 : 'Running',
}

EAIFwFocusPriority = {
	0 : 'Default',
	1 : 'Gameplay',
}

EAIFwPTRunMode = {
	0 : 'Best',
	1 : 'Random',
	2 : 'All',
}

EAIFwBTParamType = {
	0 : 'Bool',
	1 : 'Int',
	2 : 'Float',
	3 : 'String',
	255 : 'Unknown',
}

EAIFwPTEvalPathfindingMode = {
	0 : 'Exist',
	1 : 'Cost',
	2 : 'Length',
}

EPTCriterionSlot = {
	0 : 'Slot1',
	1 : 'Slot2',
	2 : 'Slot3',
	3 : 'Slot4',
}

EPTEvalOperation = {
	0 : 'Constant',
	1 : 'Linear',
	2 : 'InverseLinear',
}

EPTEvalScoreType = {
	0 : 'Min',
	1 : 'Max',
	2 : 'Average',
}

EUtilityBiasCooldownType = {
	0 : 'Step',
	1 : 'Linear',
}

EUtilityEvaluateType = {
	0 : 'Linear',
	1 : 'Square',
	2 : 'Cube',
	3 : 'SquareRoot',
	4 : 'Cos',
	5 : 'Sigmoid',
}

EUtilitySelectionMode = {
	0 : 'Priority',
	1 : 'Probability',
}

ECGAICautionMode = {
	0 : 'Stop',
	1 : 'Growing',
	2 : 'Decay',
}

ECharaPartsAccessoryLocation = {
	0 : 'None',
	1 : 'Head',
	2 : 'R_IndexFinger',
	3 : 'L_RingFinger',
	4 : 'BodyBack',
	5 : 'HipBack',
	6 : 'HandR',
	7 : 'HandL',
	8 : 'SheathBackCommon',
	9 : 'SheathFlute',
	10 : 'SheathSpine1RightDown',
	11 : 'SheathSpine1LeftDown',
	12 : 'SheathSpine1RightUp',
	13 : 'SheathSpine1LeftUp',
	14 : 'SheathQuiver',
	15 : 'MAX',
}

ECharaPartsBody = {
	0 : 'C000',
	1 : 'M000',
	2 : 'M100',
	3 : 'M200',
	4 : 'M300',
	5 : 'M400',
	6 : 'M500',
	7 : 'F000',
	8 : 'F100',
	9 : 'F200',
	10 : 'F300',
	11 : 'F400',
	12 : 'F500',
	13 : 'MAX',
}

ECharaPartsCharacterType = {
	0 : 'Player',
	1 : 'Npc',
	2 : 'Mob',
	3 : 'FacialMob',
	4 : 'Enemy',
	5 : 'ShadowAvator',
	6 : 'MAX',
}

ECharaPartsCharacterTypeIdentifier = {
	0 : 'Creation',
	1 : 'Npc',
	2 : 'Mob',
}

ECharaPartsCostumeColor = {
	0 : 'Default',
	1 : 'Red',
	2 : 'Orange',
	3 : 'Yellow',
	4 : 'YellowGreen',
	5 : 'Green',
	6 : 'LightBlue',
	7 : 'Blue',
	8 : 'Violet',
	9 : 'Purple',
	10 : 'RedPurple',
	11 : 'Black',
	12 : 'White',
	13 : 'PureWhite',
	14 : 'MAX',
}

ECharaPartsCrtBone = {
	0 : 'None',
	1 : 'CRT_L_Arm_UPPER',
	2 : 'CRT_L_ForeArm_UPPER1',
	3 : 'CRT_L_ForeArm_UPPER2',
	4 : 'CRT_L_ForeArm_UPPER3',
	5 : 'CRT_Hip_Upper',
	6 : 'CRT_L_UpLeg_LOWER1',
	7 : 'CRT_L_UpLeg_LOWER2',
	8 : 'CRT_L_Leg_LOWER1',
	9 : 'CRT_L_Leg_LOWER2',
	10 : 'CRT_Hip_Lower',
	11 : 'MAX',
}

ECharaPartsCrtLocation = {
	0 : 'None',
	1 : 'ARM',
	2 : 'LEG',
	3 : 'HIP',
	4 : 'MAX',
}

ECharaPartsFaceType = {
	0 : 'Nomal',
	1 : 'Machismo',
	2 : 'Young',
	3 : 'MAX',
}

ECharaPartsLocation = {
	0 : 'Face',
	1 : 'Face_Hair',
	2 : 'Full_Head',
	3 : 'Gloves',
	4 : 'Hair',
	5 : 'Hat',
	6 : 'Lower',
	7 : 'Upper',
	8 : 'Shoes',
	9 : 'Eye',
	10 : 'Mouth',
	11 : 'Brow',
	12 : 'Nose',
	13 : 'Line',
	14 : 'Beard',
	15 : 'Body',
	16 : 'Hair_Hat',
	17 : 'Accessory',
	17 : 'Accessory1',
	18 : 'Accessory2',
	19 : 'Accessory3',
	20 : 'BackOfHead',
	21 : 'MAX',
}

ECharaPartsLocationIdentifier = {
	0 : '_fac_',
	1 : '_fah_',
	2 : '_hef_',
	3 : '_glv_',
	4 : '_har_',
	5 : '_hat_',
	6 : '_bdl_',
	7 : '_bdu_',
	8 : '_sho_',
	9 : '_eye_',
	10 : '_mou_',
	11 : '_brw_',
	12 : '_nos_',
	13 : '_lin_',
	14 : '_bea_',
	15 : '_sta',
	16 : '_har_h_',
	17 : '_acc_',
}

ECharaPartsSubLocation = {
	0 : 'Hat',
	1 : 'Upper',
	2 : 'Lower',
	3 : 'Gloves',
	4 : 'Shoes',
	5 : 'Hair',
	6 : 'Face',
	7 : 'Eye',
	8 : 'Mouth',
	9 : 'Brow',
	10 : 'Nose',
	11 : 'Line',
	12 : 'Beard',
	13 : 'BackOfHead',
	14 : 'MAX',
}

EPlanarConstraint = {
	0 : 'None',
	1 : 'X',
	2 : 'Y',
	3 : 'Z',
}

EDatasmithAreaLightActorShape = {
	0 : 'Rectangle',
	1 : 'Disc',
	2 : 'Sphere',
	3 : 'Cylinder',
	4 : 'None',
}

EDatasmithAreaLightActorType = {
	0 : 'Point',
	1 : 'Spot',
	2 : 'Rect',
}

EDatasmithCADStitchingTechnique = {
	0 : 'StitchingNone',
	1 : 'StitchingHeal',
	2 : 'StitchingSew',
}

EDatasmithImportActorPolicy = {
	0 : 'Update',
	1 : 'Full',
	2 : 'Ignore',
}

EDatasmithImportAssetConflictPolicy = {
	0 : 'Replace',
	1 : 'Update',
	2 : 'Use',
	3 : 'Ignore',
}

EDatasmithImportHierarchy = {
	0 : 'UseMultipleActors',
	1 : 'UseSingleActor',
	2 : 'UseOneBlueprint',
}

EDatasmithImportLightmapMax = {
	0 : 'LIGHTMAP_64',
	1 : 'LIGHTMAP_128',
	2 : 'LIGHTMAP_256',
	3 : 'LIGHTMAP_512',
	4 : 'LIGHTMAP_1024',
	5 : 'LIGHTMAP_2048',
	6 : 'LIGHTMAP_4096',
}

EDatasmithImportLightmapMin = {
	0 : 'LIGHTMAP_16',
	1 : 'LIGHTMAP_32',
	2 : 'LIGHTMAP_64',
	3 : 'LIGHTMAP_128',
	4 : 'LIGHTMAP_256',
	5 : 'LIGHTMAP_512',
}

EDatasmithImportMaterialQuality = {
	0 : 'UseNoFresnelCurves',
	1 : 'UseSimplifierFresnelCurves',
	2 : 'UseRealFresnelCurves',
}

EDatasmithImportScene = {
	0 : 'NewLevel',
	1 : 'CurrentLevel',
	2 : 'AssetsOnly',
}

EDatasmithImportSearchPackagePolicy = {
	0 : 'Current',
	1 : 'All',
}

EVREDDataTableType = {
	0 : 'NotDatatable',
	1 : 'AnimClips',
	2 : 'AnimNodes',
}

EPropertyValueCategory = {
	0 : 'Undefined',
	1 : 'Generic',
	2 : 'RelativeLocation',
	4 : 'RelativeRotation',
	8 : 'RelativeScale3D',
	16 : 'bVisible',
	32 : 'Material',
	64 : 'Color',
}

EActorSequenceObjectReferenceType = {
	0 : 'ContextActor',
	1 : 'ExternalActor',
	2 : 'Component',
}

EInAppPurchaseState = {
	0 : 'Unknown',
	1 : 'Success',
	2 : 'Failed',
	3 : 'Cancelled',
	4 : 'Invalid',
	5 : 'NotAllowed',
	6 : 'Restored',
	7 : 'AlreadyOwned',
}

EMPMatchOutcome = {
	0 : 'None',
	1 : 'Quit',
	2 : 'Won',
	3 : 'Lost',
	4 : 'Tied',
	5 : 'TimeExpired',
	6 : 'First',
	7 : 'Second',
	8 : 'Third',
	9 : 'Fourth',
}

EBeaconConnectionState = {
	0 : 'Invalid',
	1 : 'Closed',
	2 : 'Pending',
	3 : 'Open',
}

EClientRequestType = {
	0 : 'NonePending',
	1 : 'ExistingSessionReservation',
	2 : 'ReservationUpdate',
	3 : 'EmptyServerReservation',
	4 : 'Reconnect',
	5 : 'Abandon',
}

EPartyReservationResult = {
	0 : 'NoResult',
	1 : 'RequestPending',
	2 : 'GeneralError',
	3 : 'PartyLimitReached',
	4 : 'IncorrectPlayerCount',
	5 : 'RequestTimedOut',
	6 : 'ReservationDuplicate',
	7 : 'ReservationNotFound',
	8 : 'ReservationAccepted',
	9 : 'ReservationDenied',
	10 : 'ReservationDenied_CrossPlayRestriction',
	11 : 'ReservationDenied_Banned',
	12 : 'ReservationRequestCanceled',
	13 : 'ReservationInvalid',
	14 : 'BadSessionId',
	15 : 'ReservationDenied_ContainsExistingPlayers',
}

ESpectatorClientRequestType = {
	0 : 'NonePending',
	1 : 'ExistingSessionReservation',
	2 : 'ReservationUpdate',
	3 : 'EmptyServerReservation',
	4 : 'Reconnect',
	5 : 'Abandon',
}

ESpectatorReservationResult = {
	0 : 'NoResult',
	1 : 'RequestPending',
	2 : 'GeneralError',
	3 : 'SpectatorLimitReached',
	4 : 'IncorrectPlayerCount',
	5 : 'RequestTimedOut',
	6 : 'ReservationDuplicate',
	7 : 'ReservationNotFound',
	8 : 'ReservationAccepted',
	9 : 'ReservationDenied',
	10 : 'ReservationDenied_CrossPlayRestriction',
	11 : 'ReservationDenied_Banned',
	12 : 'ReservationRequestCanceled',
	13 : 'ReservationInvalid',
	14 : 'BadSessionId',
	15 : 'ReservationDenied_ContainsExistingPlayers',
}

EInsetPolygonsMode = {
	0 : 'All',
	1 : 'CenterPolygonOnly',
	2 : 'SidePolygonsOnly',
}

ETriangleTessellationMode = {
	0 : 'ThreeTriangles',
	1 : 'FourTriangles',
}

EMeshElementAttributeType = {
	0 : 'None',
	1 : 'FVector4',
	2 : 'FVector',
	3 : 'FVector2D',
	4 : 'Float',
	5 : 'Int',
	6 : 'Bool',
	7 : 'FName',
}

EMeshModificationType = {
	0 : 'FirstInterim',
	1 : 'Interim',
	2 : 'Final',
}

EMeshTopologyChange = {
	0 : 'NoTopologyChange',
	1 : 'TopologyChange',
}

EPolygonEdgeHardness = {
	0 : 'NewEdgesSoft',
	1 : 'NewEdgesHard',
	2 : 'AllEdgesSoft',
	3 : 'AllEdgesHard',
}

EVehicleDifferential4W = {
	0 : 'LimitedSlip_4W',
	1 : 'LimitedSlip_FrontDrive',
	2 : 'LimitedSlip_RearDrive',
	3 : 'Open_4W',
	4 : 'Open_FrontDrive',
	5 : 'Open_RearDrive',
}

EWheelSweepType = {
	0 : 'SimpleAndComplex',
	1 : 'Simple',
	2 : 'Complex',
}

EProcMeshSliceCapOption = {
	0 : 'NoCap',
	1 : 'CreateNewSectionForCap',
	2 : 'UseLastSectionForCap',
}

EReflectionFilterBits = {
	0 : 'Wall',
	1 : 'Ceiling',
	2 : 'Floor',
}

AkAcousticPortalState = {
	0 : 'Closed',
	1 : 'Open',
}

AkActionOnEventType = {
	0 : 'Stop',
	1 : 'Pause',
	2 : 'Resume',
	3 : 'Break',
	4 : 'ReleaseEnvelope',
}

AkChannelConfiguration = {
	0 : 'Ak_Parent',
	1 : 'Ak_LFE',
	2 : 'Ak_1_0',
	3 : 'Ak_2_0',
	4 : 'Ak_2_1',
	5 : 'Ak_3_0',
	6 : 'Ak_3_1',
	7 : 'Ak_4_0',
	8 : 'Ak_4_1',
	9 : 'Ak_5_0',
	10 : 'Ak_5_1',
	11 : 'Ak_7_1',
	12 : 'Ak_5_1_2',
	13 : 'Ak_7_1_2',
	14 : 'Ak_7_1_4',
	15 : 'Ak_Auro_9_1',
	16 : 'Ak_Auro_10_1',
	17 : 'Ak_Auro_11_1',
	18 : 'Ak_Auro_13_1',
	19 : 'Ak_Ambisonics_1st_order',
	20 : 'Ak_Ambisonics_2nd_order',
	21 : 'Ak_Ambisonics_3rd_order',
}

AkCodecId = {
	0 : 'Bank',
	1 : 'PCM',
	2 : 'ADPCM',
	3 : 'XMA',
	4 : 'Vorbis',
	5 : 'WiiADPCM',
	7 : 'PCMEX',
	8 : 'ExternalSource',
	9 : 'XWMA',
	10 : 'AAC',
	11 : 'FilePackage',
	12 : 'ATRAC9',
	13 : 'VAG',
	14 : 'ProfilerCapture',
	15 : 'AnalysisFile',
	16 : 'MIDI',
	17 : 'OpusNX',
	18 : 'CAF',
	19 : 'AkOpus',
}

AkMultiPositionType = {
	0 : 'SingleSource',
	1 : 'MultiSources',
	2 : 'MultiDirections',
}

AkSpeakerConfiguration = {
	1 : 'Ak_Speaker_Front_Left',
	2 : 'Ak_Speaker_Front_Right',
	4 : 'Ak_Speaker_Front_Center',
	8 : 'Ak_Speaker_Low_Frequency',
	16 : 'Ak_Speaker_Back_Left',
	32 : 'Ak_Speaker_Back_Right',
	256 : 'Ak_Speaker_Back_Center',
	512 : 'Ak_Speaker_Side_Left',
	1024 : 'Ak_Speaker_Side_Right',
	2048 : 'Ak_Speaker_Top',
	4096 : 'Ak_Speaker_Height_Front_Left',
	8192 : 'Ak_Speaker_Height_Front_Center',
	16384 : 'Ak_Speaker_Height_Front_Right',
	32768 : 'Ak_Speaker_Height_Back_Left',
	65536 : 'Ak_Speaker_Height_Back_Center',
	131072 : 'Ak_Speaker_Height_Back_Right',
}

EAkAudioSessionCategory = {
	0 : 'Ambient',
	1 : 'SoloAmbient',
	2 : 'PlayAndRecord',
}

EAkAudioSessionCategoryOptions = {
	0 : 'MixWithOthers',
	1 : 'DuckOthers',
	2 : 'AllowBluetooth',
	3 : 'DefaultToSpeaker',
}

EAkAudioSessionMode = {
	0 : 'Default',
	1 : 'VoiceChat',
	2 : 'GameChat',
	3 : 'VideoRecording',
	4 : 'Measurement',
	5 : 'MoviePlayback',
	6 : 'VideoChat',
}

EAkCallbackType = {
	0 : 'EndOfEvent',
	2 : 'Marker',
	3 : 'Duration',
	5 : 'Starvation',
	7 : 'MusicPlayStarted',
	8 : 'MusicSyncBeat',
	9 : 'MusicSyncBar',
	10 : 'MusicSyncEntry',
	11 : 'MusicSyncExit',
	12 : 'MusicSyncGrid',
	13 : 'MusicSyncUserCue',
	14 : 'MusicSyncPoint',
	16 : 'MIDIEvent',
}

EAkChannelConfigType = {
	0 : 'Anonymous',
	1 : 'Standard',
	2 : 'Ambisonic',
}

EAkChannelMask = {
	0 : 'FrontLeft',
	1 : 'FrontRight',
	2 : 'FrontCenter',
	3 : 'LowFrequency',
	4 : 'BackLeft',
	5 : 'BackRight',
	8 : 'BackCenter',
	9 : 'SideLeft',
	10 : 'SideRight',
	11 : 'Top',
	12 : 'HeightFrontLeft',
	13 : 'HeightFrontCenter',
	14 : 'HeightFrontRight',
	15 : 'HeightBackLeft',
	16 : 'HeightBackCenter',
	17 : 'HeightBackRight',
}

EAkCurveInterpolation = {
	0 : 'Log3',
	1 : 'Sine',
	2 : 'Log1',
	3 : 'InvSCurve',
	4 : 'Linear',
	5 : 'SCurve',
	6 : 'Exp1',
	7 : 'SineRecip',
	8 : 'Exp3',
	8 : 'LastFadeCurve',
	9 : 'Constant',
}

EAkDiffractionFlags = {
	0 : 'UseBuiltInParam',
	1 : 'UseObstruction',
	3 : 'CalcEmitterVirtualPosition',
}

EAkMidiCcValues = {
	0 : 'AkMidiCcBankSelectCoarse',
	1 : 'AkMidiCcModWheelCoarse',
	2 : 'AkMidiCcBreathCtrlCoarse',
	3 : 'AkMidiCcCtrl3Coarse',
	4 : 'AkMidiCcFootPedalCoarse',
	5 : 'AkMidiCcPortamentoCoarse',
	6 : 'AkMidiCcDataEntryCoarse',
	7 : 'AkMidiCcVolumeCoarse',
	8 : 'AkMidiCcBalanceCoarse',
	9 : 'AkMidiCcCtrl9Coarse',
	10 : 'AkMidiCcPanPositionCoarse',
	11 : 'AkMidiCcExpressionCoarse',
	12 : 'AkMidiCcEffectCtrl1Coarse',
	13 : 'AkMidiCcEffectCtrl2Coarse',
	14 : 'AkMidiCcCtrl14Coarse',
	15 : 'AkMidiCcCtrl15Coarse',
	16 : 'AkMidiCcGenSlider1',
	17 : 'AkMidiCcGenSlider2',
	18 : 'AkMidiCcGenSlider3',
	19 : 'AkMidiCcGenSlider4',
	20 : 'AkMidiCcCtrl20Coarse',
	21 : 'AkMidiCcCtrl21Coarse',
	22 : 'AkMidiCcCtrl22Coarse',
	23 : 'AkMidiCcCtrl23Coarse',
	24 : 'AkMidiCcCtrl24Coarse',
	25 : 'AkMidiCcCtrl25Coarse',
	26 : 'AkMidiCcCtrl26Coarse',
	27 : 'AkMidiCcCtrl27Coarse',
	28 : 'AkMidiCcCtrl28Coarse',
	29 : 'AkMidiCcCtrl29Coarse',
	30 : 'AkMidiCcCtrl30Coarse',
	31 : 'AkMidiCcCtrl31Coarse',
	32 : 'AkMidiCcBankSelectFine',
	33 : 'AkMidiCcModWheelFine',
	34 : 'AkMidiCcBreathCtrlFine',
	35 : 'AkMidiCcCtrl3Fine',
	36 : 'AkMidiCcFootPedalFine',
	37 : 'AkMidiCcPortamentoFine',
	38 : 'AkMidiCcDataEntryFine',
	39 : 'AkMidiCcVolumeFine',
	40 : 'AkMidiCcBalanceFine',
	41 : 'AkMidiCcCtrl9Fine',
	42 : 'AkMidiCcPanPositionFine',
	43 : 'AkMidiCcExpressionFine',
	44 : 'AkMidiCcEffectCtrl1Fine',
	45 : 'AkMidiCcEffectCtrl2Fine',
	46 : 'AkMidiCcCtrl14Fine',
	47 : 'AkMidiCcCtrl15Fine',
	52 : 'AkMidiCcCtrl20Fine',
	53 : 'AkMidiCcCtrl21Fine',
	54 : 'AkMidiCcCtrl22Fine',
	55 : 'AkMidiCcCtrl23Fine',
	56 : 'AkMidiCcCtrl24Fine',
	57 : 'AkMidiCcCtrl25Fine',
	58 : 'AkMidiCcCtrl26Fine',
	59 : 'AkMidiCcCtrl27Fine',
	60 : 'AkMidiCcCtrl28Fine',
	61 : 'AkMidiCcCtrl29Fine',
	62 : 'AkMidiCcCtrl30Fine',
	63 : 'AkMidiCcCtrl31Fine',
	64 : 'AkMidiCcHoldPedal',
	65 : 'AkMidiCcPortamentoOnOff',
	66 : 'AkMidiCcSustenutoPedal',
	67 : 'AkMidiCcSoftPedal',
	68 : 'AkMidiCcLegatoPedal',
	69 : 'AkMidiCcHoldPedal2',
	70 : 'AkMidiCcSoundVariation',
	71 : 'AkMidiCcSoundTimbre',
	72 : 'AkMidiCcSoundReleaseTime',
	73 : 'AkMidiCcSoundAttackTime',
	74 : 'AkMidiCcSoundBrightness',
	75 : 'AkMidiCcSoundCtrl6',
	76 : 'AkMidiCcSoundCtrl7',
	77 : 'AkMidiCcSoundCtrl8',
	78 : 'AkMidiCcSoundCtrl9',
	79 : 'AkMidiCcSoundCtrl10',
	80 : 'AkMidiCcGeneralButton1',
	81 : 'AkMidiCcGeneralButton2',
	82 : 'AkMidiCcGeneralButton3',
	83 : 'AkMidiCcGeneralButton4',
	91 : 'AkMidiCcReverbLevel',
	92 : 'AkMidiCcTremoloLevel',
	93 : 'AkMidiCcChorusLevel',
	94 : 'AkMidiCcCelesteLevel',
	95 : 'AkMidiCcPhaserLevel',
	96 : 'AkMidiCcDataButtonP1',
	97 : 'AkMidiCcDataButtonM1',
	98 : 'AkMidiCcNonRegisterCoarse',
	99 : 'AkMidiCcNonRegisterFine',
	120 : 'AkMidiCcAllSoundOff',
	121 : 'AkMidiCcAllControllersOff',
	122 : 'AkMidiCcLocalKeyboard',
	123 : 'AkMidiCcAllNotesOff',
	124 : 'AkMidiCcOmniModeOff',
	125 : 'AkMidiCcOmniModeOn',
	126 : 'AkMidiCcOmniMonophonicOn',
	127 : 'AkMidiCcOmniPolyphonicOn',
}

EAkMidiEventType = {
	0 : 'AkMidiEventTypeInvalid',
	128 : 'AkMidiEventTypeNoteOff',
	144 : 'AkMidiEventTypeNoteOn',
	160 : 'AkMidiEventTypeNoteAftertouch',
	176 : 'AkMidiEventTypeController',
	192 : 'AkMidiEventTypeProgramChange',
	208 : 'AkMidiEventTypeChannelAftertouch',
	224 : 'AkMidiEventTypePitchBend',
	240 : 'AkMidiEventTypeSysex',
	247 : 'AkMidiEventTypeEscape',
	255 : 'AkMidiEventTypeMeta',
}

EAkPanningRule = {
	0 : 'Speakers',
	1 : 'Headphones',
}

EAkResult = {
	0 : 'NotImplemented',
	1 : 'Success',
	2 : 'Fail',
	3 : 'PartialSuccess',
	4 : 'NotCompatible',
	5 : 'AlreadyConnected',
	7 : 'InvalidFile',
	8 : 'AudioFileHeaderTooLarge',
	9 : 'MaxReached',
	14 : 'InvalidID',
	15 : 'IDNotFound',
	16 : 'InvalidInstanceID',
	17 : 'NoMoreData',
	20 : 'InvalidStateGroup',
	21 : 'ChildAlreadyHasAParent',
	22 : 'InvalidLanguage',
	23 : 'CannotAddItseflAsAChild',
	31 : 'InvalidParameter',
	35 : 'ElementAlreadyInList',
	36 : 'PathNotFound',
	37 : 'PathNoVertices',
	38 : 'PathNotRunning',
	39 : 'PathNotPaused',
	40 : 'PathNodeAlreadyInList',
	41 : 'PathNodeNotInList',
	43 : 'DataNeeded',
	44 : 'NoDataNeeded',
	45 : 'DataReady',
	46 : 'NoDataReady',
	52 : 'InsufficientMemory',
	53 : 'Cancelled',
	54 : 'UnknownBankID',
	56 : 'BankReadError',
	57 : 'InvalidSwitchType',
	63 : 'FormatNotReady',
	64 : 'WrongBankVersion',
	66 : 'FileNotFound',
	67 : 'DeviceNotReady',
	69 : 'BankAlreadyLoaded',
	71 : 'RenderedFX',
	72 : 'ProcessNeeded',
	73 : 'ProcessDone',
	74 : 'MemManagerNotInitialized',
	75 : 'StreamMgrNotInitialized',
	76 : 'SSEInstructionsNotSupported',
	77 : 'Busy',
	78 : 'UnsupportedChannelConfig',
	79 : 'PluginMediaNotAvailable',
	80 : 'MustBeVirtualized',
	81 : 'CommandTooLarge',
	82 : 'RejectedByFilter',
	83 : 'InvalidCustomPlatformName',
	84 : 'DLLCannotLoad',
	85 : 'DLLPathNotFound',
	86 : 'NoJavaVM',
	87 : 'OpenSLError',
	88 : 'PluginNotRegistered',
	89 : 'DataAlignmentError',
}

ERTPCValueType = {
	0 : 'Default',
	1 : 'Global',
	2 : 'GameObject',
	3 : 'PlayingID',
	4 : 'Unavailable',
}

PanningRule = {
	0 : 'PanningRule_Speakers',
	1 : 'PanningRule_Headphones',
}

EAkWindowsAudioAPI = {
	0 : 'Wasapi',
	1 : 'XAudio2',
	2 : 'DirectSound',
}

ESBAbilityConditionOperator = {
	0 : 'Greater',
	1 : 'GreaterEqual',
	2 : 'Less',
	3 : 'LessEqual',
	4 : 'Equal',
	5 : 'NotEqual',
	6 : 'Num',
}

ESBAbilityConditionType = {
	0 : 'AnyTime',
	1 : 'DeadInstigator',
	2 : 'SkillAttack',
	3 : 'ActiveBattleEffective',
	4 : 'ActiveBattleEffectiveGroup',
	5 : 'ActiveAbilityID',
	6 : 'ActiveBattleStatusID',
	7 : 'ActiveBattleMode',
	8 : 'InWater',
	9 : 'InBattleMap',
	10 : 'InMap',
	11 : 'CharacterLevel',
	12 : 'PlayerClass',
	13 : 'PlayerClassTotalPower',
	14 : 'PlayerSpiritRank',
	15 : 'RemainHitPointRate',
	16 : 'Sheathe',
	17 : 'InParty',
	18 : 'WeaponElement',
	19 : 'WeaponEnhance',
	20 : 'WeaponProficiency',
	21 : 'WeaponTotalPower',
	22 : 'TimeZoneNoon',
	23 : 'TimeZoneNight',
	24 : 'Num',
}

ESBAbilityDotAmountType = {
	0 : 'Fix',
	1 : 'Rate',
	2 : 'Scale',
}

ESBAbilityExpirationType = {
	0 : 'UserAction',
	1 : 'TimeLimit',
	2 : 'Once',
	3 : 'Count',
	4 : 'DotTimeCount',
	5 : 'Num',
}

ESBAbilityForceConditionType = {
	0 : 'NoCheck',
	1 : 'Success',
	2 : 'Failure',
	3 : 'Num',
}

ESBAbilityValueLimitType = {
	0 : 'Max',
	1 : 'Min',
}

ESBHealRecoveryType = {
	0 : 'HealSkill',
	1 : 'BattleImagine',
	2 : 'Item',
}

ESBAbilityCalcSuccessRate = {
	0 : 'None',
	1 : 'Physical',
	2 : 'Mental',
	3 : 'Max',
}

ESBAbilityCharacterStatusType = {
	0 : 'MoveSpeed',
	1 : 'StaminaRecoverySpeed',
	2 : 'ResurrectionSpeed',
}

ESBAbilityControlBadCondition = {
	0 : 'Stun',
	1 : 'Sleep',
	2 : 'Poison',
	3 : 'Max',
}

ESBAbilityEffectiveCategory = {
	0 : 'None',
	1 : 'Heal',
	2 : 'Damage',
	3 : 'StatusUp',
	4 : 'StatusDown',
	5 : 'GiveDamageUp',
	6 : 'GiveDamageDown',
	7 : 'ReceiveDamageUp',
	8 : 'ReceiveDamageDown',
	9 : 'HealAmountUp',
	10 : 'RapidInterval',
	11 : 'SlowInterval',
	12 : 'GoodCondition',
	13 : 'BadCondition',
}

ESBAbilityExecuteEnv = {
	0 : 'All',
	1 : 'Server',
	2 : 'LocalController',
}

ESBAbilityFlags = {
	0 : 'None',
	1 : 'Stun',
	2 : 'Freeze',
	3 : 'Sleep',
	4 : 'Fear',
	5 : 'DeathPenalty',
	6 : 'Player_CannotMove',
	7 : 'Player_CannotJump',
	8 : 'Player_CannotBattleAction',
	9 : 'Player_CannotSkill',
	10 : 'Player_CannotInteraction',
	11 : 'Player_CannotItem',
	12 : 'Player_StaminaZero',
	13 : 'Player_TransformNappo',
	14 : 'CurableByInteraction',
	15 : 'MGC_ElementAmp',
	16 : 'Max',
}

ESBAbilityLimitParamType = {
	0 : 'None',
	1 : 'HP',
	2 : 'ST',
	3 : 'STR',
	4 : 'VIT',
	5 : 'DEX',
	6 : 'INT',
	7 : 'MND',
	8 : 'AttackPower',
	9 : 'DefencePower',
	10 : 'RecuperativePower',
	11 : 'CriticalRate',
	12 : 'CriticalPower',
	13 : 'ElementResist',
	14 : 'GiveDamage',
	15 : 'GiveDamage_Main',
	16 : 'GiveDamage_Sub',
	17 : 'GiveDamage_TSkill1',
	18 : 'GiveDamage_TSkill2',
	19 : 'GiveDamage_TSkill3',
	20 : 'GiveDamage_TSkill4',
	21 : 'GiveDamage_SpecialSkill',
	22 : 'GiveDamage_BI1',
	23 : 'GiveDamage_BI2',
	24 : 'GiveDamage_BI',
	25 : 'GiveDamage_Near',
	26 : 'GiveDamage_Far',
	27 : 'GiveDamage_Race',
	28 : 'ReceiveDamage',
	29 : 'ReceiveDamage_Near',
	30 : 'ReceiveDamage_Far',
	31 : 'ReceiveDamage_Element',
	32 : 'Amount_HealSkill',
	33 : 'Amount_BI',
	34 : 'SkillInterval_Sub',
	35 : 'SkillInterval_TSkill1',
	36 : 'SkillInterval_TSkill2',
	37 : 'SkillInterval_TSkill3',
	38 : 'SkillInterval_TSkill4',
	39 : 'SkillInterval_SpecialSkill',
	40 : 'SkillInterval_BI1',
	41 : 'SkillInterval_BI2',
	42 : 'SkillInterval_BI',
	43 : 'Success_Stun',
	44 : 'Success_Sleep',
	45 : 'Success_Poison',
	46 : 'ReduceStamina',
	47 : 'ReduceStamina_Dash',
	48 : 'ReduceStamina_Jump',
	49 : 'ReduceStamina_Dodge',
	50 : 'SkillButtonCharge',
	51 : 'MoveSpeed',
}

ESBAbilityLimitSumParamType = {
	0 : 'None',
	1 : 'GiveDamage',
	2 : 'ReceiveDamage',
	3 : 'SkillInterval',
}

ESBAbilityOnlyPlayerStatus = {
	0 : 'CannotMove',
	1 : 'CannotJump',
	2 : 'CannotBattleAction',
	3 : 'CannotSkill',
	4 : 'CannotInteraction',
	5 : 'CannotItem',
	6 : 'StaminaZero',
	7 : 'TransformNappo',
	8 : 'MGC_ElementAmp',
}

ESBAbilityRecoveryAmountType = {
	0 : 'Fix',
	1 : 'Rate',
}

ESBAbilityReduceStaminaType = {
	0 : 'Dash',
	1 : 'Jump',
	2 : 'Dodge',
}

ESBAbilityRequestSource = {
	0 : 'None',
	1 : 'WeaponAbility',
	2 : 'WeaponTag',
	3 : 'Imagine1',
	4 : 'Imagine2',
	5 : 'Imagine3',
	6 : 'Imagine4',
	7 : 'Imagine5',
	8 : 'BattleAbility',
	9 : 'Item',
	10 : 'BattleImagine1',
	11 : 'BattleImagine2',
	12 : 'Max',
}

ESBAbilitySimultaneousActivationControl = {
	0 : 'Block',
	1 : 'FirstInFirstOut',
	2 : 'Max',
}

ESBAbilitySkillPosition = {
	0 : 'Main',
	1 : 'Sub',
	2 : 'TacticalSkill1',
	3 : 'TacticalSkill2',
	4 : 'TacticalSkill3',
	5 : 'TacticalSkill4',
	6 : 'ULT',
	7 : 'BattleImagine1',
	8 : 'BattleImagine2',
	9 : 'MountImagine',
	10 : 'Max',
}

ESBAbilityValueShortAndExten = {
	0 : 'Shorten',
	1 : 'Extension',
}

ESBAbilityValueUpAndDown = {
	0 : 'Up',
	1 : 'Down',
}

ESBBaseStatusBoostType = {
	0 : 'HP',
	1 : 'ST',
	2 : 'STR',
	3 : 'VIT',
	4 : 'DEX',
	5 : 'INT',
	6 : 'MND',
	7 : 'Attack',
	8 : 'Defence',
	9 : 'Recuperative',
	10 : 'CriticalHitRate',
	11 : 'CriticalHitPower',
	12 : 'FireResist',
	13 : 'IceResist',
	14 : 'ThunderResist',
	15 : 'EarthResist',
	16 : 'LightResist',
	17 : 'DarknessResist',
}

ESBBattleEffective = {
	0 : 'None',
	1 : 'HPUp',
	2 : 'HPRateUp',
	3 : 'StaminaUp',
	4 : 'StaminaRateUp',
	5 : 'STRUp',
	6 : 'VITUp',
	7 : 'DEXUp',
	8 : 'INTUp',
	9 : 'MNDUp',
	10 : 'AttackUp',
	11 : 'DefenceUp',
	12 : 'RecuperativeUp',
	13 : 'CriticalHitRateUp',
	14 : 'CriticalHitPowerUp',
	15 : 'ArtsGiveDamageUp',
	16 : 'OneArtsSkillGiveDamageUp',
	17 : 'SpecialSkillGiveDamageUp',
	18 : 'ImagineSkillGiveDamageUp',
	19 : 'RaceGiveDamageUp',
	20 : 'AttributeGiveDamageUp',
	21 : 'GiveDamageUp',
	22 : 'GiveDamageDown',
	23 : 'DamageReceiveDown',
	24 : 'DamageReceiveUp',
	25 : 'RecoveryHPUp',
	26 : 'ArtsHealUp',
	27 : 'ImagineArtsHealUp',
	28 : 'NoBattleHealUp',
	29 : 'ItemHealUp',
	30 : 'GiveStatusFireCorrect',
	31 : 'GiveStatusIceCorrect',
	32 : 'GiveStatusThunderCorrect',
	33 : 'RecieveStatusFireCorrect',
	34 : 'RecieveStatusIceCorrect',
	35 : 'RecieveStatusThunderCorrect',
	36 : 'DotDamage',
	37 : 'DotRateDamage',
	38 : 'DotScaleDamage',
	39 : 'DotHeal',
	40 : 'DotRateHeal',
	41 : 'DotScaleHeal',
	42 : 'Regenerate',
	43 : 'RegenerateRate',
	44 : 'ProjectileOnTimes',
	45 : 'Invincible',
	46 : 'Paralyze',
	47 : 'Paralyze2',
	48 : 'SuperArmor',
	49 : 'Stun',
	50 : 'InvalidStun',
	51 : 'InvalidPoison',
	52 : 'Freeze',
	53 : 'Sleep',
	54 : 'Fear',
	55 : 'MoveSpeedUp',
	56 : 'MoveSpeedDown',
	57 : 'StaminaRecoveryUp',
	58 : 'ResurrectionSpeedUp',
	59 : 'SpecialGaugeChargeUp',
	60 : 'StaminaReduceCorrect',
	61 : 'SendStatusWhenBackAttack',
	62 : 'SendStatusWhenAttack',
	63 : 'SendStatusWhenTargetSkillKill',
	64 : 'RapidSkillCoolTime',
	65 : 'SlowSkillCoolTime',
	66 : 'FastSkillButtonCharge',
	67 : 'SlowSkillButtonCharge',
	68 : 'Drain',
	69 : 'DrainByAttackScale',
	70 : 'PointGravity',
	71 : 'HealStaminaWhenAttackHit',
	72 : 'AddSpecialGaugeWhenWeakHit',
	73 : 'WeakDamageRateWhenWeakHit',
	74 : 'HealStaminaWhenRecieveHit',
	75 : 'AutoReloadWhenTargetSkillKill',
	76 : 'DrainPlus',
	77 : 'RecoverAttackerWhenRecieveDamage',
	78 : 'RapidSpecialSkillCoolTime',
	79 : 'SlowSpecialSkillCoolTime',
	80 : 'RapidImagineSkillCoolTime',
	81 : 'SlowImagineSkillCoolTime',
	82 : 'OneRapidSkillCoolTime',
	83 : 'WeakDamageRateWhenAttackWeakHit',
	84 : 'DamageRateWhenAttackBackHit',
	85 : 'ControlHate',
	86 : 'Player_CannotMove',
	87 : 'Player_CannotJump',
	88 : 'Player_CannotBattleAction',
	89 : 'Player_CannotSkill',
	90 : 'Player_CannotInteraction',
	91 : 'Player_CannotItem',
	92 : 'Player_StaminaZero',
	93 : 'Player_TransformNappo',
	94 : 'GetPowerGaugeWhenKillTarget',
	95 : 'ReducePowerGaugeForHP',
	96 : 'RecoveryMPWhenResurrection',
	97 : 'DamageBonusWhenMPRate',
	98 : 'MGC_DotRateMPHeal',
	99 : 'MGC_ElementAmp',
	100 : 'ChangeSpecialSkill',
	101 : 'ChangeLSkill',
	102 : 'ChangeRSkill',
	103 : 'GuardShieldDamageRate',
	104 : 'GuardSpecialGaugeRate',
	105 : 'GuardReduceSkillRecastTime',
	106 : 'HPHeal',
	107 : 'HPRateHeal',
	108 : 'Dispel',
	109 : 'StaminaFixRecovery',
	110 : 'StaminaRateRecovery',
	111 : 'ReduceStaminaByDodge',
	112 : 'ReduceStaminaByJump',
	113 : 'HateDown',
	114 : 'AllyAttack_AttackScale',
	115 : 'AllyAttack_Physics',
	116 : 'AllyAttack_Earth',
	117 : 'AllyAttack_Water',
	118 : 'AllyAttack_Fire',
	119 : 'AllyAttack_Wind',
	120 : 'AllyAttack_Ice',
	121 : 'AllyAttack_Thunder',
	122 : 'AllyAttack_Light',
	123 : 'AllyAttack_Darkness',
	124 : 'CurableByInteraction',
	125 : 'StatusAilmentHP',
	126 : 'ElementStatusReinforce_Earth',
	127 : 'ElementStatusReinforce_Fire',
	128 : 'ElementStatusReinforce_Ice',
	129 : 'ElementStatusReinforce_Thunder',
	130 : 'ElementStatusReinforce_Light',
	131 : 'ElementStatusReinforce_Darkness',
	132 : 'ElementAccumulationRate',
	133 : 'BaseStatusBoost',
	134 : 'BaseStatusRateBoost',
	135 : 'CharacterStatusBoost',
	136 : 'StaminaRecovery',
	137 : 'Poison',
	138 : 'GiveDamage',
	139 : 'SkillActionGiveDamage',
	140 : 'ReceiveDamage',
	141 : 'BattleImagineGiveDamage',
	142 : 'DamageAttackTypeGiveDamage',
	143 : 'DamageAttackTypeReceiveDamage',
	144 : 'ElementReceiveDamage',
	145 : 'RaceGiveDamage',
	146 : 'InvalidAbility',
	147 : 'SkillCoolTime',
	148 : 'AllSkillCoolTime',
	149 : 'BattleImagineCoolTime',
	150 : 'SuccessRateBadCondition',
	151 : 'ReduceStaminaByAll',
	152 : 'ReduceStaminaByAction',
	153 : 'SkillButtonChargeTime',
	154 : 'OnlyPlayerStatus',
	155 : 'AllyAttack_Element',
	156 : 'ElementStatusReinforce',
	157 : 'DotMPRateHeal',
	158 : 'SpecialGaugeCharge',
	159 : 'FixTarget',
	160 : 'SendSelfStatusWhenAttack',
	161 : 'InvalidGroup',
	162 : 'Num',
}

ESBBattleEffectiveFeel = {
	0 : 'Positive',
	1 : 'Negative',
}

EAchievementAcquisitionCondition1 = {
	0 : 'None',
	1 : 'MainQuest',
	2 : 'Follow',
	3 : 'ResurrectionCount',
	4 : 'Dungeon',
	5 : 'PhalanxClassLevel',
	6 : 'DestroyerClassLevel',
	7 : 'HunterClassLevel',
	8 : 'EngramerClassLevel',
}

EAchievementAcquisitionCondition3 = {
	0 : 'None',
	1 : 'Cleared',
	2 : 'Registered',
	3 : 'Succeed',
	4 : 'Reached',
}

EAestheShop = {
	5 : 'AppearanceInfo_Slot_Max',
}

ESBActivityCategory = {
	0 : 'Unknown',
	1 : 'Player',
	2 : 'Party',
	3 : 'Quest',
	4 : 'Colosseum',
	5 : 'Field',
}

ESBActivityType = {
	0 : 'Unknown',
	1 : 'Login',
	2 : 'Logout',
	3 : 'StartParty',
	4 : 'JoinParty',
	5 : 'AcceptQuest',
	6 : 'CompleteQuest',
	7 : 'JoinColosseum',
	8 : 'ActivateField',
	9 : 'ActivateDungeon',
	10 : 'CraftSuccessed',
	11 : 'DefeatNamedEnemy',
	12 : 'Num',
}

ESBActorHiddenType = {
	0 : 'WaitForLoading',
	1 : 'PlayerNumRestriction',
	2 : 'NpcPool',
	3 : 'PlayerAdmin',
	4 : 'NotDemoMember',
	5 : 'DemoHiddenRequest',
	6 : 'TalkMode',
	7 : 'QuestEventMode',
	8 : 'CoinPubPrivateRoom',
	9 : 'PlayerTransform',
	10 : 'FieldStatus',
	11 : 'CharaPartsUpdate',
	12 : 'Max',
}

ESBAdditionalColor = {
	0 : 'Nomal',
	1 : 'Ignition',
	2 : 'Freeze',
	3 : 'Shock',
}

ESBAIActionAreaType = {
	0 : 'Territory',
	1 : 'BuffArea',
	2 : 'Max',
}

ESBAICustomPriority = {
	0 : 'Default',
	1 : 'PartsBreak',
	2 : 'Ultimate',
}

ESBAIPositioningType = {
	0 : 'Vanguard',
	1 : 'Rearguard',
}

EProjectileFollowSlopeRotType = {
	0 : 'None',
	1 : 'FollowPitchRoll',
	2 : 'FollowPitchOnly',
	3 : 'FollowRollOnly',
}

ESBAITacticalSkill_GuardState = {
	0 : 'Normal',
	1 : 'Guarding',
	2 : 'Both',
}

ESBAITacticalSkill_StateComparison = {
	0 : 'Equal',
	1 : 'NotEqual',
	2 : 'LessThan',
	3 : 'LessThanEqual',
	4 : 'GreaterThan',
	5 : 'GreaterThanEqual',
}

ESBAITacticalSkill_StateOperation = {
	0 : 'Set',
	1 : 'Add',
}

ESBAITacticalSkill_StateType = {
	0 : 'Bool',
	1 : 'Int',
	2 : 'Float',
}

EPartsDamageState = {
	0 : 'Off',
	1 : 'On',
	2 : 'Cancel',
}

ESBBoneModificationMode = {
	0 : 'SB_BMM_Ignore',
	1 : 'SB_BMM_Replace',
	2 : 'SB_BMM_Additive',
}

ESBIKMode = {
	0 : 'Leg',
	1 : 'Climb',
	2 : 'Quadruped',
	3 : 'Arm',
}

FSBCustomBoneScaleAxisSwapType = {
	0 : 'NoSwap',
	1 : 'ToYXZ',
	2 : 'ToXZY',
	3 : 'ToZYX',
	4 : 'ToYZX',
	5 : 'ToZXY',
	6 : 'Num',
}

ESBSplineBoneAxis = {
	1 : 'X',
	2 : 'Y',
	3 : 'Z',
}

ECameraAnimNotifyPlaySpace = {
	0 : 'PlaySpace_Local',
	1 : 'PlaySpace_World',
}

ECameraSettingsType = {
	0 : 'CameraSettingsType_None',
	1 : 'CameraSettingsType_Default',
	2 : 'CameraSettingsType_Preset',
	3 : 'CameraSettingsType_Custom',
}

ENotifyRuleLogic = {
	0 : 'AND',
	1 : 'OR',
	2 : 'NAND',
	3 : 'NOR',
}

ESBAdjustRootMotionAdjustType = {
	0 : 'Scale',
	1 : 'Linear',
}

ESBAdjustRootMotionTargetInterpolationType = {
	0 : 'None',
	1 : 'OldTargetInfo',
	2 : 'InterpLinear_DEPRECATED',
	3 : 'InterpParaboraTop',
	4 : 'InterpCliffOutside',
}

ESBAnimNotifyPlayType = {
	0 : 'None',
	1 : 'Normal',
	2 : 'Berserker_BrutalBlow',
}

EArenaMissionAchieveType = {
	0 : 'Unknown',
	1 : 'DealDamage',
	2 : 'DealDamageAmount',
	3 : 'CriticalAmount',
	4 : 'HitSkill',
	5 : 'KillTargetEnemy',
	6 : 'SummonImagine',
	7 : 'CastSkill',
}

ESBSendMaterialParamCalcType = {
	0 : 'ElapsedTime',
	1 : 'ElapsedRate',
}

EAutoWordEventType = {
	0 : 'None',
	1 : 'Spawn',
	2 : 'Respawn',
	3 : 'FewHp',
	4 : 'ReceiveHeal',
	5 : 'Dead',
	6 : 'Resurrection',
	7 : 'UsedUltimateSkill',
	8 : 'UsableUltimateSkill',
	9 : 'Num',
}

ENavmeshDirection = {
	0 : 'Left',
	1 : 'Right',
}

ESBAttackParam = {
	0 : 'None',
	1 : 'Common_StaminaRecovery',
	2 : 'Common_ShieldRecovery',
	3 : 'Rebellion_RageUp',
}

ESBSortType = {
	0 : 'ASC',
	1 : 'DESC',
}

ESBAttackMoveDestinationHeight = {
	0 : 'None',
	1 : 'OnStraightLine',
	2 : 'AttackerHeight',
	3 : 'TargetHeight',
}

ESBBattleAreaOpenStatus = {
	0 : 'None',
	1 : 'Open',
	2 : 'BlockCountdown',
	3 : 'Blocked',
}

ESBShieldGuardResult = {
	0 : 'Guard',
	1 : 'CannotGuard',
}

ESBBattleStatusEffectTiming = {
	0 : 'In',
	1 : 'Override',
	2 : 'InOrOverride',
	3 : 'Out',
}

ESBBattleStatusMaterialParam = {
	0 : 'FixValue',
}

EAttackAttributeType = {
	0 : 'AttackAttributeType_None',
	1 : 'AttackAttributeType_Slash',
	2 : 'AttackAttributeType_Blow',
	3 : 'AttackAttributeType_Thrust',
}

EAttackHitType = {
	0 : 'AttackHitType_None',
	1 : 'AttackHitType_Slash',
	2 : 'AttackHitType_Blow',
	3 : 'AttackHitType_Thrust',
	4 : 'AttackHitType_Claw',
	5 : 'AttackHitType_Fang',
	6 : 'AttackHitType_BH_Blow',
}

ESBAttackAttribute = {
	0 : 'Explode',
	1 : 'ImagineArts',
	2 : 'Burst',
}

ESBAttackDirectionOrigin = {
	0 : 'None',
	1 : 'Collision',
	2 : 'Owner',
	3 : 'Instigator',
}

ESBAttackDirectionType = {
	0 : 'None',
	1 : 'Forward',
	2 : 'OtherCollision',
	3 : 'OtherActor',
	4 : 'Velocity',
}

ESBAttackThroughType = {
	0 : 'None',
	1 : 'UnBlockable',
	2 : 'AbsoluteDamage',
	3 : 'Through',
}

ESBBattleDebugParamVariableType = {
	0 : 'Invalid',
	1 : 'Bool',
	2 : 'Float',
	3 : 'Int32',
}

ESBBattleEffectiveGroup = {
	0 : 'None',
	1 : 'ChainRegenerate',
	2 : 'HealingFactor',
	3 : 'Rampage',
	4 : 'Unstoppable',
	5 : 'ArcBlade',
	6 : 'SupportGadget',
	7 : 'AcceleGate',
	8 : 'Rage',
	9 : 'Protection',
	10 : 'TripleAttack',
	11 : 'WeaponPerk',
	12 : 'Fire',
	13 : 'Ice',
	14 : 'Earth',
	15 : 'Water',
	16 : 'Wind',
	17 : 'Thunder',
	18 : 'Light',
	19 : 'Darkness',
	20 : 'FireBurst',
	21 : 'IceBurst',
	22 : 'EarthBurst',
	23 : 'ThunderBurst',
	24 : 'FireThunderBurst',
	25 : 'FireEarthBurst',
	26 : 'FireIceBurst',
	27 : 'ThunderEarthBurst',
	28 : 'ThunderIceBurst',
	29 : 'IceEarthBurst',
	30 : 'Berserk',
	31 : 'Sleep',
	32 : 'Fear',
	33 : 'DotDamageFire',
	34 : 'DotDamageIce',
	35 : 'DotDamageThunder',
	36 : 'DotDamagePoison',
	37 : 'NoBattleHeal',
	38 : 'Drain',
	39 : 'Transform',
	40 : 'Frailness',
	41 : 'Stun',
	42 : 'Max',
}

ESBBattleStatusResistType = {
	0 : 'None',
	1 : 'Stun',
	2 : 'Sleep',
	3 : 'Poison',
	4 : 'FixTarget',
	5 : 'Fear',
	6 : 'Max',
}

ESBCounterDamageState = {
	0 : 'None',
	1 : 'Attack',
	2 : 'Stun',
	3 : 'KneelDown',
	4 : 'Down',
	5 : 'UpperDown',
	6 : 'HiUpperDown',
	7 : 'Max',
}

ESBDamageAttackType = {
	0 : 'MeleeAttack',
	1 : 'RangedAttack',
	2 : 'Max',
}

ESBGuardKnockBackPower = {
	0 : 'None',
	1 : 'Small',
	2 : 'Mid',
	3 : 'Large',
}

ESBHitKnockBackPower = {
	0 : 'None',
	1 : 'Small',
	2 : 'Mid',
	3 : 'Large',
}

ESBHitKnockBackTime = {
	0 : 'None',
	1 : 'Short',
	2 : 'Mid',
	3 : 'Long',
}

ESBHitSlomoPower = {
	0 : 'None',
	1 : 'Light',
	2 : 'Middle',
	3 : 'Heavy',
	4 : 'StormRush',
}

ESBInvincibleAnimation = {
	0 : 'Default',
	1 : 'DodgeRoll',
	2 : 'DodgeStep',
	3 : 'BattleAction',
	4 : 'Max',
}

ESBInvincibleLevel = {
	0 : 'None',
	1 : 'Level1',
	2 : 'Level2',
	3 : 'Level3',
	4 : 'Level4',
}

ESBKnockBackWeightClass = {
	0 : 'None',
	1 : 'SuperLight',
	2 : 'Light',
	3 : 'Middle',
	4 : 'Heavy',
}

ESBPassiveType = {
	0 : 'Character',
	1 : 'Weapon',
	2 : 'GameRule',
	3 : 'BattleComp',
}

ESBStatusAilmentEffectTiming = {
	0 : 'In',
	1 : 'Override',
	2 : 'InOrOverride',
	3 : 'Out',
}

ESBStatusAilmentGroup = {
	0 : 'None',
	1 : 'ChainRegenerate',
	2 : 'HealingFactor',
	3 : 'Rampage',
	4 : 'Unstoppable',
	5 : 'ArcBlade',
	6 : 'SupportGadget',
	7 : 'AcceleGate',
	8 : 'Rage',
	9 : 'Protection',
	10 : 'TripleAttack',
	11 : 'WeaponPerk',
	12 : 'Fire',
	13 : 'Ice',
	14 : 'Earth',
	15 : 'Water',
	16 : 'Wind',
	17 : 'Thunder',
	18 : 'Light',
	19 : 'Darkness',
	20 : 'FireBurst',
	21 : 'IceBurst',
	22 : 'EarthBurst',
	23 : 'ThunderBurst',
	24 : 'FireThunderBurst',
	25 : 'FireEarthBurst',
	26 : 'FireIceBurst',
	27 : 'ThunderEarthBurst',
	28 : 'ThunderIceBurst',
	29 : 'IceEarthBurst',
	30 : 'Berserk',
	31 : 'Sleep',
	32 : 'Fear',
	33 : 'DotDamageFire',
	34 : 'DotDamageIce',
	35 : 'DotDamageThunder',
	36 : 'DotDamagePoison',
	37 : 'NoBattleHeal',
	38 : 'Drain',
	39 : 'Transform',
	40 : 'Frailness',
	41 : 'Num',
}

ESBStatusAilmentsFlag = {
	0 : 'None',
	1 : 'ChainRegenerate',
	2 : 'Invincible',
	3 : 'HealingFactor',
	4 : 'Rampage',
	5 : 'Unstoppable',
	6 : 'ArcBlade',
	7 : 'PointGravity',
	8 : 'Protection',
	9 : 'TripleAttack',
	10 : 'Fire',
	11 : 'Ice',
	12 : 'Earth',
	13 : 'Thunder',
	14 : 'FireBurst',
	15 : 'IceBurst',
	16 : 'EarthBurst',
	17 : 'ThunderBurst',
	18 : 'FireThunderBurst',
	19 : 'FireEarthBurst',
	20 : 'FireIceBurst',
	21 : 'ThunderEarthBurst',
	22 : 'ThunderIceBurst',
	23 : 'IceEarthBurst',
	24 : 'Berserk',
	25 : 'DotDamageFire',
	26 : 'DotDamageIce',
	27 : 'DotDamageThunder',
	28 : 'DotDamagePoison',
	29 : 'NoBattleHeal',
	30 : 'Drain',
	31 : 'Num',
}

ESBStatusProjectileInvoker = {
	0 : 'Invoker',
	1 : 'Self',
}

ESBStunDirection = {
	0 : 'None',
	1 : 'Down',
	2 : 'KnockBack',
	3 : 'Up',
}

ESBStunValueCalculation = {
	0 : 'None',
	1 : 'Add',
	2 : 'Override',
	3 : 'WeakOverride',
}

EInterruptMissionBGMType = {
	0 : 'NamedEnemy',
}

ESBArenaBGMType = {
	0 : 'None',
	1 : 'InWaitingRoom',
	2 : 'PreStart',
	3 : 'Battle',
	4 : 'Result',
}

ESBBattleBGMType = {
	0 : 'None',
	1 : 'Zako',
	2 : 'MiddleBoss',
	3 : 'LargeBoss',
	4 : 'RaidBattleA',
	5 : 'RaidBattleB',
	6 : 'RaidBattleC',
	7 : 'ArenaZako',
	8 : 'ArenaBoss',
}

ESBBossBGMSettingType = {
	0 : 'RemainingHP',
}

ESBDungeonBGMType = {
	0 : 'None',
	1 : 'Default',
	2 : 'Battle',
}

ESBFieldBGMType = {
	0 : 'None',
	1 : 'Default',
	2 : 'Mounting',
	3 : 'Vigilance',
	4 : 'Battle',
	5 : 'InterruptMission',
	6 : 'Max',
}

ESBInterruptMissionBGMState = {
	0 : 'None',
	1 : 'Start',
	2 : 'Battle',
	3 : 'Success',
	4 : 'Failed',
	5 : 'Leave',
}

ESBIsRquestBlackListResult = {
	0 : 'Failure',
	1 : 'Registered_Black',
	2 : 'Registered_Safe',
	3 : 'Success',
}

ESBRaidBattleBGMType = {
	0 : 'None',
	1 : 'BeforeBattle',
	2 : 'Battle',
}

ESBRealTimeZone = {
	0 : 'Zone_UTC',
	1 : 'Zone_JST',
	2 : 'Zone_AWST',
	3 : 'Zone_KRAT',
}

ESBResultBGMType = {
	0 : 'None',
	1 : 'Dungeon',
	2 : 'RaidBattle',
	3 : 'Arena',
}

ECameraPriority = {
	0 : 'CameraPriority_0',
	1 : 'CameraPriority_1',
	2 : 'CameraPriority_2',
	3 : 'CameraPriority_3',
	4 : 'CameraPriority_4',
	5 : 'CameraPriority_5',
	6 : 'CameraPriority_6',
	7 : 'CameraPriority_7',
	8 : 'CameraPriority_8',
	9 : 'CameraPriority_9',
	10 : 'CameraPriority_PresetCamera',
}

EPresetCamera = {
	0 : 'PresetCamera_None',
	1 : 'PresetCamera_1',
	2 : 'PresetCamera_2',
	3 : 'PresetCamera_3',
	4 : 'PresetCamera_4',
	5 : 'PresetCamera_5',
	6 : 'PresetCamera_6',
	7 : 'PresetCamera_7',
	8 : 'PresetCamera_8',
	9 : 'PresetCamera_9',
	10 : 'PresetCamera_10',
}

ESBChallengeBoxRespawnTarget = {
	0 : 'SameSpot',
	1 : 'SameAreaSpot',
	2 : 'Rundom',
	3 : 'Max',
}

ESBKeepCameraAimLocation = {
	0 : 'None',
	1 : 'KeepIn',
	2 : 'KeepInOut',
	3 : 'NoKeepOut',
}

ECharaCreateBoneScaleID = {
	0 : 'Root_J',
	1 : 'Hip_J__offset',
	2 : 'HLP_Spine1__offset',
	3 : 'Spine1_J',
	4 : 'Spine1_J__offset',
	5 : 'Spine2_J__offset',
	6 : 'Neck_J',
	7 : 'Neck_J__offset',
	8 : 'Head_J',
	9 : 'Head_J__offset',
	10 : 'L_Clavicle_J',
	11 : 'L_Arm_J__offset',
	12 : 'L_ForeArm_J__offset',
	13 : 'L_Wrist_J',
	14 : 'HLP_L_ForeArm_Mid',
	15 : 'HLP_L_ForeArm_Btm',
	16 : 'HLP_L_ForeArm_Slide',
	17 : 'HLP_L_Arm_Mid',
	18 : 'HLP_L_Arm_Top',
	19 : 'HLP_L_Elbow',
	20 : 'HLP_L_Arm_Slide',
	21 : 'HLP_L_ShldrBlade',
	22 : 'HLP_L_ShldrBlade_Trans',
	23 : 'HLP_L_CollarBone',
	24 : 'Chest_J',
	25 : 'L_Pectoral_OPT001',
	26 : 'L_Pectoral_OPT002',
	27 : 'Rear_J',
	28 : 'L_UpLeg_J',
	29 : 'L_UpLeg_J__offset',
	30 : 'L_Leg_J__offset',
	31 : 'L_Foot_J',
	32 : 'L_Foot_J__offset',
	33 : 'HLP_L_Leg_Slide',
	34 : 'HLP_L_Leg_Btm',
	35 : 'HLP_L_Leg_Mid',
	36 : 'HLP_L_Knee',
	37 : 'HLP_L_UpLeg_Top',
	38 : 'HLP_L_UpLeg_Mid',
	39 : 'HLP_L_UpLeg_Slide',
	40 : 'HLP_L_Butt',
	41 : 'HLP_L_Butt_Trans',
	42 : 'HLP_L_Hip',
	43 : 'HLP_L_Hip_Trans',
	44 : 'MAX',
}

ECharaCreateBoneScaleType = {
	0 : 'XYZ_Scale',
	1 : 'YZ_Scale',
	2 : 'X_Scale',
	3 : 'Y_Scale',
	4 : 'Z_Scale',
}

ECharaCreateSliderType = {
	0 : 'Height',
	1 : 'Physique',
	2 : 'Bust',
	3 : 'MAX',
}

ECharaPartsAsyncLoadState = {
	0 : 'None',
	1 : 'Standby',
	2 : 'WaitRequest',
	3 : 'Loading',
}

ECharaPartsComponentGroupForFiltering = {
	0 : 'None',
	1 : 'All',
	2 : 'BodyPartsAndBodyComponent',
	3 : 'BodyPartsWithoutBodyComponent',
	4 : 'FacePartsAndFaceComponent',
	5 : 'FacePartsWithoutFaceComponent',
	6 : 'AccessoryComponent',
	7 : 'MAX',
}

ESBChallengeBoxGimmickType = {
	0 : 'GatherPoint',
	1 : 'DestructibleObject',
	2 : 'Unknown',
	3 : 'Max',
}

ESBCharaCreateMole = {
	8 : 'MoleNum',
	4 : 'MoleNumOnOneSide',
}

ESBCharacterBoneDisplay = {
	0 : 'None',
	1 : 'AllDisplay',
	2 : 'SelectDisplay',
	3 : 'Num',
}

ESBCostumeSet = {
	0 : 'Naked',
	1 : 'Common',
	2 : 'Giken',
	3 : 'Hero',
	4 : 'Vanguard',
	5 : 'Wizard',
	6 : 'SwordSlayer',
	7 : 'Gunslinger',
	8 : 'Common2',
	9 : 'Common3',
	10 : 'Common4',
	11 : 'Common5',
	12 : 'Max',
}

ESBPushOutOrigin = {
	0 : 'None',
	1 : 'OwnerActor',
	2 : 'Capsule',
}

FSBCharaCreateMakeupIndex = {
	0 : 'Condition',
	1 : 'Lip',
	2 : 'Paint1',
	3 : 'Paint2',
}

ESBCharaEquipType = {
	0 : 'Weapon',
	1 : 'Costume_Head',
	2 : 'Costume_Body',
	3 : 'Costume_Hand',
	4 : 'Costume_Leg',
	5 : 'Costume_Shoes',
	6 : 'Costume_Accessory1',
	7 : 'Costume_Accessory2',
	8 : 'Costume_Accessory3',
	9 : 'Imagine_Active1',
	10 : 'Imagine_Active2',
	11 : 'Imagine_Passive1',
	12 : 'Imagine_Passive2',
	13 : 'Imagine_Passive3',
	14 : 'Imagine_Passive4',
	15 : 'Imagine_Passive5',
	16 : 'Imagine_Mount',
	17 : 'Max',
}

ESBCharacterGender = {
	0 : 'Male',
	1 : 'Female',
}

ESBContentLockType = {
	0 : 'Unknown',
	1 : 'Warp',
	2 : 'MyCharacter',
	3 : 'Inventory',
	4 : 'Quest',
	5 : 'Map',
	6 : 'Library',
	7 : 'Contents',
	8 : 'Party',
	9 : 'Guild',
	10 : 'Gacha',
	11 : 'Option',
	12 : 'Photo',
	13 : 'Hud',
	14 : 'Communicate',
}

ESBEquipImagineFrameType = {
	0 : 'Arts',
	1 : 'Support_1',
	2 : 'Support_2',
	3 : 'Support_3',
	4 : 'Num',
}

ESBOperateMode = {
	0 : 'MouseAndKeyboard',
	1 : 'Gamepad',
	2 : 'Max',
}

ESBCharactersLogTypes = {
	0 : 'Item',
	1 : 'Weapon',
	2 : 'Npc',
	3 : 'Enemy',
	4 : 'Action',
	5 : 'TutorialHelp',
	6 : 'Craft',
	7 : 'Imagine',
	8 : 'Map',
}

ESBDamageDirection = {
	0 : 'SBDD_Front',
	1 : 'SBDD_Back',
	2 : 'SBDD_Left',
	3 : 'SBDD_Right',
}

ESBFootSESocketType = {
	0 : 'None',
	1 : 'L_Hand',
	2 : 'R_Hand',
	3 : 'L_Foot',
	4 : 'R_Foot',
	5 : 'L_ForeLeg',
	6 : 'R_ForeLeg',
	7 : 'L_BackLeg',
	8 : 'R_BackLeg',
}

ESBRoleRangeType = {
	0 : 'Close',
	1 : 'Long',
	2 : 'Max',
}

ESBRoleType = {
	0 : 'None',
	1 : 'Attacker',
	2 : 'Defender',
	3 : 'Supporter',
	4 : 'Max',
}

ECharaPartsAgeGroup = {
	0 : 'Child',
	1 : 'Teenager',
	2 : 'Young',
	3 : 'Middle',
	4 : 'Senior',
	5 : 'MAX',
}

ECharaPartsRegion = {
	0 : 'Common',
	1 : 'R01',
	2 : 'R02',
	3 : 'R03',
	4 : 'R04',
	5 : 'MAX',
}

EMaterialLocation = {
	0 : 'None',
	1 : 'Upper',
	2 : 'Lower',
	3 : 'Gloves',
	4 : 'Shoes',
	5 : 'Hat',
}

EMaterialType = {
	0 : 'Costume',
	1 : 'Skin',
	2 : 'Hair',
	3 : 'Outline',
	4 : 'Eye',
	5 : 'EyeLash',
	6 : 'Brow',
	7 : 'Socks',
	8 : 'EyeLeft',
	9 : 'EyeRight',
}

EPlacesObtained = {
	0 : 'None',
	1 : 'Treasure',
	2 : 'GatherPoint',
	3 : 'EnemyDrop',
	4 : 'QuestTrigger',
}

ESBAutoMessageTarget = {
	0 : 'Party',
	1 : 'All',
}

ESBCharaCreateColorHue = {
	0 : 'Red',
	1 : 'YellowishRed',
	2 : 'ReddishOrange',
	3 : 'YellowishOrange',
	4 : 'Yellow',
	5 : 'Blond',
	6 : 'YellowGreen',
	7 : 'Green',
	8 : 'BlueGreen',
	9 : 'Blue',
	10 : 'Violet',
	11 : 'Purple',
	12 : 'RedPurple',
	13 : 'PurplishRed',
	14 : 'Achromatic',
}

ESBCharaCreateColorTable = {
	0 : 'Costume',
	1 : 'Skin',
	2 : 'Hair',
	3 : 'Eye',
	4 : 'Scar',
}

ESBChatFilterType = {
	1 : 'Area',
	2 : 'Field',
	4 : 'Party',
	8 : 'Team',
	16 : 'Direct',
	32 : 'SystemLog',
	64 : 'BattleLog',
}

ESBChatLogMode = {
	0 : 'AllLog',
	1 : 'BattleLog',
	2 : 'Max',
}

ESBChatLogOption = {
	0 : 'None',
	1 : 'GetQuestTrigger',
	2 : 'NotifyBlackListed',
	3 : 'NotifyUnBlackListed',
}

ESBChatLogType = {
	0 : 'CloseAreaChat',
	1 : 'OpenChat',
	2 : 'PartyChat',
	3 : 'TeamChat',
	4 : 'GuildChat',
	5 : 'DirectMessage',
	6 : 'SystemLog',
	7 : 'BattleLog',
	8 : 'None',
}

ESBFacialType = {
	0 : 'Default',
	1 : 'Laugh',
	2 : 'Anger',
	3 : 'Sad',
	4 : 'Happy',
	5 : 'Hopeless',
	6 : 'Troubled',
	7 : 'Doubt',
	8 : 'Tease',
	9 : 'Endure',
	10 : 'Hustle',
	11 : 'Hurt',
	12 : 'Pinched',
	13 : 'Rushed',
	14 : 'Surprised',
	15 : 'Hate',
	16 : 'Flattering',
	17 : 'Fear',
	18 : 'Serious',
	19 : 'Smile',
	20 : 'Plot',
	21 : 'Attack',
	22 : 'Damage',
	23 : 'Dead',
	24 : 'Special',
	25 : 'CreationSmile',
	26 : 'CreationAnger',
	27 : 'CreationSad',
	28 : 'CreationPose1',
	29 : 'CreationPose2',
	30 : 'CreationPose3',
	31 : 'CreationPose4',
	32 : 'CreationPose5',
	33 : 'Max',
}

ESBIrisType = {
	0 : 'Left',
	1 : 'Right',
}

ESBLipSyncType = {
	0 : 'Default',
	1 : 'Loop',
	2 : 'Close',
	3 : 'Open',
	4 : 'HalfOpen',
}

ESBBattleLogType = {
	0 : 'Kill',
	1 : 'TakeDamage',
	2 : 'GiveDamage',
	3 : 'HealHP',
	4 : 'HealST',
	5 : 'UseSkill',
	6 : 'UseImagine',
	7 : 'UseSpecial',
	8 : 'Death',
	9 : 'StatusOff',
	10 : 'TakeWeaponExp',
	11 : 'TakeImagineExp',
	12 : 'ChainKill',
	13 : 'PlayerDeath',
	14 : 'EnemyDeath',
	15 : 'TakePlayerExp',
	16 : 'LevelUpPlayer',
	17 : 'GetBootyItem',
	18 : 'GetMoney',
	19 : 'DefeatEnemy',
}

EClimbingEndActionType = {
	0 : 'ClimbingEndActionType_Drop',
	1 : 'ClimbingEndActionType_Clamber',
}

EClimbingEndPointType = {
	0 : 'ClimbingEndPointType_None',
	1 : 'ClimbingEndPointType_Up',
	2 : 'ClimbingEndPointType_Down',
}

ESBCommandMenuType = {
	0 : 'Unknown',
	1 : 'MyCharacter',
	2 : 'Inventory',
	3 : 'Quest',
	4 : 'Map',
	5 : 'Communicate',
	6 : 'Library',
	7 : 'Matching',
	8 : 'Party',
	9 : 'DungeonParty',
	10 : 'Option',
	11 : 'ExitGame',
	12 : 'CharSelect',
	13 : 'Guild',
}

ESBConditionCheckType = {
	0 : 'None',
	1 : 'SkillLevel',
	2 : 'EquippedPassiveSkill',
	3 : 'PassiveSkillLevel',
	4 : 'EquippedPassiveSkillLevel',
	5 : 'SkillCastCount',
	6 : 'SkillChargeLevel',
	7 : 'ActiveStatusGroup',
	8 : 'AnimTag',
	9 : 'PlayerCharacter',
	10 : 'BossEnemyType',
	11 : 'BSK_ComboGaugeAmount',
	12 : 'Num',
}

ECountdownResult = {
	0 : 'TimeUp',
	1 : 'Interaction',
	2 : 'Cancel',
}

ECountdownType = {
	0 : 'RespawnFromDead',
	1 : 'Warp',
	2 : 'GameLogout',
}

ESBCatalystEffectType = {
	0 : 'EFFECT_SUCCESS',
	1 : 'EFFECT_BONUS',
	2 : 'EFFECT_PERK',
}

ESBCharacterBattleEffectVisibility = {
	0 : 'CharacterBattleEffect_All',
	1 : 'CharacterBattleEffect_Parties',
	2 : 'CharacterBattleEffect_Only',
	3 : 'CharacterBattleEffect_MAX',
}

ESBChatLogWindowSlot = {
	0 : 'SLOT_1',
	1 : 'SLOT_2',
	2 : 'SLOT_3',
	3 : 'SLOT_4',
	4 : 'SLOT_MAX',
}

ESBConfigSaveDataResult = {
	0 : 'RESULT_SUCCESS',
	1 : 'RESULT_FAIL',
}

ESBConfigWindowType = {
	0 : 'WINDOWTYPE_FULLSCREEN',
	1 : 'WINDOWTYPE_WINDOW',
	2 : 'WINDOWTYPE_WINDOWED_FULLSCREEN',
}

ESBConsumeLogType = {
	0 : 'CONSUME_TYPE_INVALID',
	1 : 'CONSUME_TYPE_USE',
	2 : 'CONSUME_TYPE_CRAFT',
	3 : 'CONSUME_TYPE_WEAPON_CRAFT',
	4 : 'CONSUME_TYPE_WEAPON_LEVELING',
	5 : 'CONSUME_TYPE_WEAPON_MERGE',
	6 : 'CONSUME_TYPE_PERK_SLOT_RELASE',
	7 : 'CONSUME_TYPE_IMAGINE_CRAFT',
	8 : 'CONSUME_TYPE_IMAGINE_LEVELING',
}

ESBCraftErrorCode = {
	0 : 'ERROR_CODE_SUCCESS',
	1 : 'ERROR_CODE_CRAFT_LACK_ENGRAM',
	2 : 'ERROR_CODE_CRAFT_POINT_VALIDATION_ERROR',
	3 : 'ERROR_CODE_CRAFT_LACK_RESOURCE',
	4 : 'ERROR_CODE_CRAFT_HASNT_RECEPI',
	5 : 'ERROR_CODE_CRAFT_INVALID_DIFFICULTY',
	6 : 'ERROR_CODE_CRAFT_LACK_CATALYST',
	7 : 'ERROR_CODE_CRAFT_LACK_OPTION_ITEM',
	8 : 'ERROR_CODE_CRAFT_NOT_FOUND_MASTER_DATA',
	9 : 'ERROR_CODE_CRAFT_NOT_FOUND_ENTRY_DATA',
	10 : 'ERROR_CODE_CRAFT_RECEIVE_ONLY',
	11 : 'ERROR_CODE_CRAFT_CANCEL_REJECT',
	12 : 'ERROR_CODE_CRAFT_UNFINISHED',
	13 : 'ERROR_CODE_CRAFT_MAX_INVENTORY',
	14 : 'ERROR_CODE_UNKNOWN_ERROR',
}

ESBCraftInscriptType = {
	0 : 'INSCRIPT_MANUAL',
	1 : 'INSCRIPT_AUTO',
	2 : 'INSCRIPT_NONE',
}

ESBCreationType = {
	0 : 'Player',
	1 : 'Hero',
	2 : 'Enemy',
	3 : 'Max',
}

ESBCustomHudLayoutSlot = {
	0 : 'HudLayoutSlot_Now',
	1 : 'HudLayoutSlot_Custom1',
	2 : 'HudLayoutSlot_Custom2',
	3 : 'HudLayoutSlot_Custom3',
}

ESBFrameRateLimitType = {
	0 : 'FPS_LIMIT_UNLIMIT',
	1 : 'FPS_LIMIT_30',
	2 : 'FPS_LIMIT_60',
	3 : 'FPS_LIMIT_120',
}

ESBKeyGuideDisplayType = {
	0 : 'KEYGUIDE_AUTO',
	1 : 'KEYGUIDE_INVISIBLE',
	2 : 'KEYGUIDE_VISIBLE',
	3 : 'KEYGUIDE_TYPE_MAX',
}

ESBLowVGAMemory = {
	0 : 'SBLowVGA_Invalid',
	1 : 'SBLowVGA_Off',
	2 : 'SBLowVGA_On',
}

ESBSoundVolumeType = {
	0 : 'VOLUME_MASTETR',
	1 : 'VOLUME_SOUNDEFFECT',
	2 : 'VOLUME_BGM',
	3 : 'VOLUME_VOICE',
	4 : 'VOLUME_SYSTEM',
	5 : 'VOLUME_AMBIENT',
	6 : 'VOLUME_TYPE_MAX',
}

ESBStateAbnomal = {
	0 : 'Nomal',
	1 : 'Invisible',
	2 : 'Ignition',
	3 : 'Max',
}

ESBDamageEventGeneralParam = {
	0 : 'None',
	1 : 'Berserker_ComboGaugeAmount',
}

ESBDebugMenuType = {
	0 : 'SB_DEBUG_MENU_NONE',
	1 : 'SB_DEBUG_MENU_TOP',
	2 : 'SB_DEBUG_MENU_COMMAND',
	3 : 'SB_DEBUG_MENU_PLAYER',
	4 : 'SB_DEBUG_MENU_PLAYER_BATTLE',
	5 : 'SB_DEBUG_MENU_ENEMY',
	6 : 'SB_DEBUG_MENU_NEARBY_CHARACTER',
	7 : 'SB_DEBUG_MENU_EFFECT',
	8 : 'SB_DEBUG_MENU_UI',
	9 : 'SB_DEBUG_MENU_SCRIPT',
	10 : 'SB_DEBUG_MENU_CAMERA',
	11 : 'SB_DEBUG_MENU_RENDER',
	12 : 'SB_DEBUG_MENU_SOUND',
	13 : 'SB_DEBUG_MENU_FAST_TRAVEL',
	14 : 'SB_DEBUG_MENU_QUEST',
	15 : 'SB_DEBUG_MENU_TIME_SETTING',
	16 : 'SB_DEBUG_MENU_MAPS',
	17 : 'SB_DEBUG_MENU_ROUTEGUIDE',
	18 : 'SB_DEBUG_MENU_INTERRUPT_QUEST',
	19 : 'SB_DEBUG_MENU_LOAD',
	20 : 'SB_DEBUG_MENU_SAVE',
	21 : 'SB_DEBUG_MENU_RESET',
	22 : 'SB_DEBUG_MENU_CHANGECLASS',
	23 : 'SB_DEBUG_MENU_PROJECTILE',
	24 : 'SB_DEBUG_MENU_SEARCHPOINT',
	25 : 'SB_DEBUG_MENU_SYSYTEM',
	26 : 'SB_DEBUG_MENU_COMMAND_STAT',
	27 : 'SB_DEBUG_MENU_COMMAND_SHOWDEBUG',
	28 : 'SB_DEBUG_MENU_COMMON_FUNC_TOP',
	29 : 'SB_DEBUG_MENU_CHECK_BOX',
	30 : 'SB_DEBUG_MENU_FLOAT',
	31 : 'SB_DEBUG_MENU_INT32',
	32 : 'SB_DEBUG_MENU_CONSOLE_COMMAND',
	33 : 'SB_DEBUG_MENU_STRING',
	34 : 'SB_DEBUG_MENU_COMBO_BOX',
	35 : 'SB_DEBUG_MENU_BUTTON',
	36 : 'SB_DEBUG_MENU_LIST',
	37 : 'SB_DEBUG_MENU_CHILD',
	38 : 'SB_DEBUG_MENU_SPECIFIC_FUNC_TOP',
	39 : 'SB_DEBUG_MENU_ACCEPTED_QUEST_ACTION',
}

ESBDemoType = {
	0 : 'Demo_None',
	1 : 'Demo_Main',
	2 : 'Demo_Extra',
	3 : 'Demo_Sub',
}

ESBDemoVisibleCharacterType = {
	0 : 'None',
	1 : 'VisibleEnemy',
	2 : 'VisibleNPC_ExceptStoryNPC',
}

ESBMagnitudeRelation = {
	0 : 'None',
	1 : 'Less',
	2 : 'LessOrEqual',
	3 : 'Equal',
	4 : 'NotEqual',
	5 : 'GreaterOrEqual',
	6 : 'Greater',
	7 : 'AlwaysTrue',
	8 : 'AlwaysFalse',
}

ESBSaveGameReturn = {
	0 : 'SB_SAVE_GAME_SUCCESS',
	1 : 'SB_SAVE_GAME_FAILURE',
	2 : 'SB_LOAD_GAME_SUCCESS',
	3 : 'SB_LOAD_GAME_FAILURE',
	4 : 'SB_LOAD_GAME_SEVERAL_FAILURES',
}

EDialogPositionType = {
	0 : 'Default',
	1 : 'Type1',
	2 : 'Type2',
	3 : 'Type3',
	4 : 'Type4',
}

EDialogResult = {
	0 : 'Ok',
	1 : 'Yes',
	2 : 'No',
	3 : 'Cancel',
	4 : 'None',
}

ESBDroppingTextOption = {
	0 : 'None',
	1 : 'GetQuestTrigger',
}

EYesNoDialogResult = {
	0 : 'Yes',
	1 : 'No',
}

EDungeonClearConditionType = {
	0 : 'Unknown',
	1 : 'KillEnemy',
	2 : 'AnyCondition',
}

EDungeonGameMode = {
	0 : 'Dungeon',
	1 : 'TeamMatchDungeon',
	2 : 'CaptureTheFlag',
	3 : 'Domination',
	4 : 'EngramRace',
	5 : 'DeathMatch',
	6 : 'Default',
	7 : 'Lobby',
	8 : 'Payload',
	9 : 'Bounty',
	10 : 'EnemyBattleNormal',
	11 : 'TutorialGameMode',
	12 : 'TrainingMode',
	13 : 'InstanceArea',
	14 : 'DungeonNormal',
	15 : 'DungeonScenario',
	16 : 'Num',
}

ESBBattleRule = {
	0 : 'None',
	1 : 'CaptureTheFlag',
	2 : 'Domination',
	3 : 'EngramRace',
	4 : 'Payload',
	5 : 'Bounty',
	6 : 'EnemyBattleNormal',
	7 : 'InstanceArea',
	8 : 'DungeonNormal',
	9 : 'DungeonScenario',
	10 : 'Max',
}

ESBDungeonBossBattleState = {
	0 : 'None',
	1 : 'Standby',
	2 : 'Battle',
	3 : 'Max',
}

ESBDungeonClearCondition = {
	0 : 'PostLoad',
	1 : 'GameStart',
	2 : 'PreResult',
	3 : 'PostResult',
	4 : 'PreExit',
	5 : 'OverlapSomePlayer',
	6 : 'OverlapAllPlayers',
	7 : 'InteractionSw',
	8 : 'BattleAreaStart',
	9 : 'BattleAreaClear',
	10 : 'EnemySpawned',
	11 : 'EnemyDead',
	12 : 'EnemyDestroy',
	13 : 'Destructible',
	14 : 'AllPlayersScriptEnd',
	15 : 'ScriptCheck',
}

ESBDungeonEvaluation = {
	0 : 'None',
	1 : 'Gold',
	2 : 'Silver',
	3 : 'Bronze',
	4 : 'Max',
}

ESBDungeonLaterJoinType = {
	0 : 'No',
	1 : 'FriendOnly',
}

ESBDungeonMatchMenuRegisterType = {
	0 : 'None',
	1 : 'WhenOpend',
	2 : 'WhenCompleted',
}

ESBDungeonMvpType = {
	0 : 'Attack',
	1 : 'Support',
	2 : 'EscortTime',
	3 : 'EscortDistance',
	4 : 'Max',
}

ESBDungeonProcessStatus = {
	0 : 'Wait',
	1 : 'Ready',
	2 : 'Cleared',
	3 : 'Failed',
	255 : 'None',
}

ESBDungeonScriptType = {
	0 : 'None',
	1 : 'Intro',
	2 : 'BossPre',
	3 : 'ResultPre',
	4 : 'ResultPost',
	5 : 'Max',
}

EEffectId = {
	0 : 'None',
	1 : 'BuffAuraATK',
	2 : 'BuffAuraDEF',
	3 : 'EnemySpawn',
	4 : 'Slash',
	5 : 'Blow',
	6 : 'Thrust',
	7 : 'Claw',
	8 : 'Fang',
	9 : 'HiSlash',
	10 : 'HiBlow',
	11 : 'HiThrust',
	12 : 'HiClaw',
	13 : 'HiFang',
	14 : 'LowSlash',
	15 : 'LowBlow',
	16 : 'LowThrust',
	17 : 'LowClaw',
	18 : 'LowFang',
	19 : 'GeneralEffective',
	20 : 'SuperArmor',
	21 : 'EarthMelt',
	22 : 'FireMelt',
	23 : 'IceMelt',
	24 : 'ThunderMelt',
	25 : 'LightMelt',
	26 : 'DarknessMelt',
	27 : 'IceBreak',
	28 : 'StoneBreak',
	29 : 'ElementSpread',
	30 : 'Resurrection',
	31 : 'ResurrectionComp',
	32 : 'DodgeSuccess_Roll',
	33 : 'DodgeSuccess_Step',
	34 : 'ProjectileInWater',
	35 : 'ClassLevelUp',
	36 : 'MaxNum',
}

EEffectTarget = {
	0 : 'EffectTarget_ActorRoot',
	1 : 'EffectTarget_ActorMesh',
	2 : 'EffectTarget_WeaponMesh_R',
	3 : 'EffectTarget_WeaponMesh_L',
	4 : 'EffectTarget_Inventory_0',
	5 : 'EffectTarget_Inventory_1',
}

ESBDungeonCompleteType = {
	0 : 'Unopened',
	1 : 'Uncompleted',
	2 : 'Completed',
	3 : 'Unknown',
}

ESBEffectShaderParamTarget = {
	0 : 'Actor',
	1 : 'Weapon_R',
	2 : 'Weapon_L',
	3 : 'Inventory_0',
	4 : 'Inventory_1',
}

ESBEffectVisibleType = {
	0 : 'Default',
	1 : 'Battle',
	2 : 'UI',
}

ESBHitDirection = {
	0 : 'Front',
	1 : 'Side',
	2 : 'Back',
}

ESBEnemyActionTableActionType = {
	0 : 'None',
	1 : 'WaitAction',
	2 : 'SimpleAction',
	3 : 'WalkableMelee',
	4 : 'ThrowStone',
	5 : 'MagicAction',
	6 : 'ShieldGuard',
	7 : 'Tackle',
}

ESBEnemyWalkingMode = {
	0 : 'Walk',
	1 : 'Run',
	2 : 'Dash',
}

ESBEnemyDropItemConditionType = {
	0 : 'None',
	1 : 'Bonus',
	2 : 'Max',
}

ESBEnemyDropItemType = {
	0 : 'Item',
	1 : 'Money',
	2 : 'Treasure',
	3 : 'Max',
}

ESBEnemyExpBonusScaleType = {
	0 : 'OnePeople',
	1 : 'TwoPeople',
	2 : 'ThreePeople',
	3 : 'More',
	4 : 'Max',
}

ESBEnemyReactionType = {
	0 : 'Default',
	1 : 'Middle',
	2 : 'Heavy',
	3 : 'SuperHeavy',
	4 : 'Max',
}

ESBEnemySkillType = {
	0 : 'None',
	1 : 'Tactical',
	2 : 'Reactive',
	3 : 'Combo',
	4 : 'Max',
}

EMarkerAfterChant = {
	0 : 'DestroyAtEndChant',
	1 : 'DestroyAtFired',
	2 : 'FixedAtEndChant',
	3 : 'FixedAtFired',
	4 : 'Targeting',
}

EMarkerTargetingType = {
	0 : 'Fixed',
	1 : 'OwnerCharacter',
	2 : 'TargetActor',
	3 : 'TargetLocation',
}

EMovabilityType = {
	0 : 'MV_NORMAL',
	1 : 'MV_UnmovableAndUnrotatable',
	2 : 'MV_UnmovableOnly',
	3 : 'MV_UnrotatableOnly',
	4 : 'Num',
}

ESBEnemyActionManagerResult = {
	0 : 'Success',
	1 : 'Cancel',
	2 : 'Error',
}

MarkerState = {
	0 : 'Waiting',
	1 : 'Chanting',
	2 : 'AfterChant',
	3 : 'Fired',
}

ESBEnemyIconType = {
	0 : 'Normal',
	1 : 'Named',
	2 : 'Boss',
	4 : 'Target',
	5 : 'Max',
}

ESBEnemyRaceType = {
	0 : 'None',
	1 : 'Boa',
	2 : 'HornGoat',
	3 : 'Horse',
	4 : 'Fox',
	5 : 'Hawk',
	6 : 'DarkEye',
	20 : 'Goblin',
	21 : 'LizardMan',
	22 : 'Kobold',
	23 : 'Ogre',
	24 : 'Troll',
	25 : 'Human',
	26 : 'Dragonewt',
	40 : 'Insect',
	41 : 'InsectNest',
	42 : 'Viper',
	50 : 'QuadArm',
	51 : 'Golem',
	52 : 'Tyipod',
	60 : 'Homunculus',
	61 : 'Dragon',
	62 : 'Sandworm',
	63 : 'Max',
}

ESBEnemyTargetType = {
	0 : 'Projectile',
	1 : 'AdjustRootMotion',
	2 : 'Max',
}

ESBEnemyWaveLocationType = {
	0 : 'Center',
	1 : 'Random',
}

ESBEnemyWaveRuleType = {
	0 : 'None',
	1 : 'RemainingEnemies',
	2 : 'HP',
}

ESBEventExecutorOption = {
	0 : 'RequireReceiver',
	1 : 'DontRequireReceiver',
	2 : 'MAX',
}

EFacilityIconStatus = {
	0 : 'Enable',
	1 : 'Disable',
}

EFacilityType = {
	0 : 'NONE',
	1 : 'CLASS_CHANGE',
	2 : 'PLAYER_CRAFT',
	3 : 'NPC_CRAFT',
	4 : 'CRAFT_RECEIVE',
}

ESBEventTriggerConditionType = {
	0 : 'Unknown',
	1 : 'ScenarioFlag',
	2 : 'QuestStatus',
	3 : 'QuestStep',
}

ESBFacilityType = {
	0 : 'None',
	1 : 'WeaponShop',
	2 : 'ItemShop',
	3 : 'HealStation',
	4 : 'TutorialGuide',
	5 : 'DungeonGuide',
	6 : 'WarpPoint',
	7 : 'LocalWarpPoint',
	8 : 'ExchangeShop',
	9 : 'ArmorShop',
	10 : 'QuestGuide',
	11 : 'Craft',
	12 : 'ClassChange',
	13 : 'SyntheShop',
	14 : 'ImagineLabo',
	15 : 'Aesthetician',
	16 : 'DyeingShop',
	17 : 'Restaurant',
	18 : 'ChallengeBox',
	19 : 'Arena',
	20 : 'Warehouse',
	21 : 'Guild',
	22 : 'GachaShop',
	23 : 'WeaponRemodeling',
	24 : 'MemoryStand',
	25 : 'CoinBower',
	26 : 'TimeAttack',
}

EFieldStatus = {
	0 : 'Available',
	1 : 'Unavailable',
	2 : 'Visible',
	3 : 'Visible_NoDispose',
	4 : 'Invisible',
}

ESBFieldStatusConditionType = {
	0 : 'Unknown',
	1 : 'QuestStatus',
	2 : 'ScenarioFlag',
}

ESBGatherPointLotResult = {
	0 : 'Success',
	1 : 'InternalError',
	2 : 'InvalidData',
	3 : 'ItemStorageSizeOver',
	4 : 'InvalidObjectId',
	5 : 'CantLootObjectId',
	6 : 'InvalidMasterTreasureID',
	7 : 'GatherPointLotNoLot',
	8 : 'NotFoundObjectIsServerActor',
	9 : 'NotAuthor',
	10 : 'NotServer',
	11 : 'NotPlayer',
	12 : 'NotPlayerState',
	13 : 'CantInteractReach',
	14 : 'InvalidMasterData0',
	15 : 'InvalidMasterData1',
	16 : 'InvalidMasterData2',
	17 : 'InvalidMasterData3',
	18 : 'InvalidMasterTreasure',
	19 : 'ProcessingFieldActor',
	20 : 'InvalidMasterDataByItemAndWeapon',
	21 : 'InternalErrorByDBAccess0',
	22 : 'InternalErrorByDBAccess1',
	23 : 'InternalErrorByDBAccess2',
	24 : 'TresureLotFuncError',
	25 : 'FailedGetFieldActorPickupComponent',
	26 : 'LotItemTypeUnknown',
}

ESBGatherPointType = {
	0 : 'Normal',
	1 : 'ChallengeBox',
	2 : 'MAX',
}

ESBTreasureBoxLotResult = {
	0 : 'Success',
	1 : 'InternalError',
	2 : 'InvalidData',
	3 : 'ItemStorageSizeOver',
	4 : 'InvalidObjectId',
	5 : 'CantLootObjectId',
	6 : 'InvalidMasterTreasureID',
	7 : 'TresureLotNoLot',
	8 : 'NotFoundObjectIsServerActor',
	9 : 'NotAuthor',
	10 : 'NotServer',
	11 : 'NotPlayer',
	12 : 'NotPlayerState',
	13 : 'CantInteractReach',
	14 : 'InvalidMasterData0',
	15 : 'InvalidMasterData1',
	16 : 'InvalidMasterData2',
	17 : 'InvalidMasterData3',
	18 : 'InvalidMasterTreasure',
	19 : 'ProcessingFieldActor',
	20 : 'InvalidMasterDataByItemAndWeapon',
	21 : 'InternalErrorByDBAccess0',
	22 : 'InternalErrorByDBAccess1',
	23 : 'InternalErrorByDBAccess2',
	24 : 'TresureLotFuncError',
}

EFootPrintSide = {
	0 : 'None',
	1 : 'Right',
	2 : 'Left',
	3 : 'RightForefoot',
	4 : 'LeftForefoot',
	5 : 'NUM',
}

EFootPrintType = {
	0 : 'None',
	1 : 'WalkStart',
	2 : 'Walk',
	3 : 'Run',
	4 : 'Dash',
	5 : 'Jump',
	6 : 'Landing_S',
	7 : 'Landing_M',
	8 : 'Landing_L',
	9 : 'Down',
	10 : 'Down_M',
	11 : 'Down_L',
	12 : 'HeavyAttack',
	13 : 'Step',
	14 : 'Swimming',
	15 : 'DirectWaterIn',
	16 : 'DirectWaterOut',
}

ESBFoliageReactions = {
	0 : 'Radial',
	1 : 'Speed',
	2 : 'Height',
}

ESBKeyConfigAction = {
	0 : 'None',
	1 : 'Pad_Begin',
	2 : 'Pad_Dash',
	3 : 'Pad_AutoRun',
	4 : 'Pad_Jump',
	5 : 'Pad_MainAction',
	6 : 'Pad_SubAction',
	7 : 'Pad_LeftSkill',
	8 : 'Pad_RightSkill',
	9 : 'Pad_Skill1',
	10 : 'Pad_Skill2',
	11 : 'Pad_Skill3',
	12 : 'Pad_Skill4',
	13 : 'Pad_SpecialSkill',
	14 : 'Pad_Dodge',
	15 : 'Pad_Interaction',
	16 : 'Pad_Reload',
	17 : 'Pad_ItemShortcut1',
	18 : 'Pad_ItemShortcut2',
	19 : 'Pad_ItemShortcut3',
	20 : 'Pad_ItemShortcut4',
	21 : 'Pad_ItemShortcut5',
	22 : 'Pad_ItemShortcut6',
	23 : 'Pad_ItemShortcut7',
	24 : 'Pad_ItemShortcut8',
	25 : 'Pad_ShortcutExec',
	26 : 'Pad_ShortcutMoveLeft',
	27 : 'Pad_ShortcutMoveRight',
	28 : 'Pad_ShortcutPageNext',
	29 : 'Pad_ShortcutPageBack',
	30 : 'Pad_MainMenu',
	31 : 'Pad_ChatWindow',
	32 : 'Pad_ImagineArts',
	33 : 'Pad_ImagineArts2',
	34 : 'Pad_ImagineMount',
	35 : 'Pad_CameraReset',
	36 : 'Pad_LockOn',
	37 : 'Pad_Function',
	38 : 'Pad_Function2',
	39 : 'Pad_SupplyShortcut1',
	40 : 'Pad_SupplyShortcut2',
	41 : 'Pad_SupplyShortcut3',
	42 : 'Pad_SupplyShortcut4',
	43 : 'Pad_ShortcutRing',
	44 : 'Pad_End',
	45 : 'KB_Begin',
	46 : 'KB_MoveFront',
	47 : 'KB_MoveBack',
	48 : 'KB_MoveLeft',
	49 : 'KB_MoveRight',
	50 : 'KB_Walk',
	51 : 'KB_Dash',
	52 : 'KB_AutoRun',
	53 : 'KB_Jump',
	54 : 'KB_MainAction',
	55 : 'KB_SubAction',
	56 : 'KB_LeftSkill',
	57 : 'KB_RightSkill',
	58 : 'KB_Skill1',
	59 : 'KB_Skill2',
	60 : 'KB_Skill3',
	61 : 'KB_Skill4',
	62 : 'KB_SpecialSkill',
	63 : 'KB_Dodge',
	64 : 'KB_Interaction',
	65 : 'KB_Reload',
	66 : 'KB_ItemShortcut1',
	67 : 'KB_ItemShortcut2',
	68 : 'KB_ItemShortcut3',
	69 : 'KB_ItemShortcut4',
	70 : 'KB_ItemShortcut5',
	71 : 'KB_ItemShortcut6',
	72 : 'KB_ItemShortcut7',
	73 : 'KB_ItemShortcut8',
	74 : 'KB_ShortcutPageNext',
	75 : 'KB_ShortcutPageBack',
	76 : 'KB_MainMenu',
	77 : 'KB_ChatWindow',
	78 : 'KB_ImagineArts',
	79 : 'KB_ImagineArts2',
	80 : 'KB_ImagineMount',
	81 : 'KB_CameraPitchUp',
	82 : 'KB_CameraPitchDown',
	83 : 'KB_CameraYawLeft',
	84 : 'KB_CameraYawRight',
	85 : 'KB_CameraZoomIn',
	86 : 'KB_CameraZoomOut',
	87 : 'KB_CameraReset',
	88 : 'KB_LockOn',
	89 : 'KB_LockOnTargetRight',
	90 : 'KB_LockOnTargetLeft',
	91 : 'KB_Function',
	92 : 'KB_QuickAccess_MyCharacter',
	93 : 'KB_QuickAccess_Inventory',
	94 : 'KB_QuickAccess_Quest',
	95 : 'KB_QuickAccess_Map',
	96 : 'KB_QuickAccess_Library',
	97 : 'KB_QuickAccess_Contents',
	98 : 'KB_QuickAccess_Party',
	99 : 'KB_QuickAccess_Guild',
	100 : 'KB_QuickAccess_Gacha',
	101 : 'KB_QuickAccess_Option',
	102 : 'KB_QuickAccess_Photo',
	103 : 'KB_QuickAccess_Hud',
	104 : 'KB_QuickAccess_Communicate',
	105 : 'KB_SupplyShortcut1',
	106 : 'KB_SupplyShortcut2',
	107 : 'KB_SupplyShortcut3',
	108 : 'KB_SupplyShortcut4',
	109 : 'KB_ShortcutRing',
	110 : 'KB_End',
	111 : 'Max',
}

ESBKeyConfigFloatParam = {
	0 : 'None',
	1 : 'Pad_LeftStickInputThresholdX',
	2 : 'Pad_LeftStickInputStrengthX',
	3 : 'Pad_LeftStickInputThresholdY',
	4 : 'Pad_LeftStickInputStrengthY',
	5 : 'Pad_RightStickInputThresholdX',
	6 : 'Pad_RightStickInputStrengthX',
	7 : 'Pad_RightStickInputThresholdY',
	8 : 'Pad_RightStickInputStrengthY',
	9 : 'Pad_CameraSpeedRateYaw',
	10 : 'Pad_CameraSpeedRatePitch',
	11 : 'Pad_AimAssist_FitTargetStrength',
	12 : 'Pad_AimAssist_FollowTargetStrength',
	13 : 'Pad_AimAssist_CameraBrakeStrength',
	14 : 'KB_CameraSpeedRateYaw',
	15 : 'KB_CameraSpeedRatePitch',
	16 : 'KB_AimAssist_FitTargetStrength',
	17 : 'KB_AimAssist_FollowTargetStrength',
	18 : 'KB_AimAssist_CameraBrakeStrength',
	19 : 'Mouse_InputStrength',
	20 : 'Mouse_AimAssist_FitTargetStrength',
	21 : 'Mouse_AimAssist_FollowTargetStrength',
	22 : 'Mouse_AimAssist_CameraBrakeStrength',
	23 : 'Max',
}

ESBKeyConfigGamepadKey = {
	0 : 'None',
	1 : 'X',
	2 : 'Y',
	3 : 'A',
	4 : 'B',
	5 : 'L1',
	6 : 'L2',
	7 : 'L3',
	8 : 'R1',
	9 : 'R2',
	10 : 'R3',
	11 : 'Start',
	12 : 'Select',
	13 : 'Direction_Up',
	14 : 'Direction_Down',
	15 : 'Direction_Left',
	16 : 'Direction_Right',
	17 : 'Fn_Begin',
	18 : 'Fn_X',
	19 : 'Fn_Y',
	20 : 'Fn_A',
	21 : 'Fn_B',
	22 : 'Fn_L3',
	23 : 'Fn_R3',
	24 : 'Fn_Direction_Up',
	25 : 'Fn_Direction_Down',
	26 : 'Fn_Direction_Left',
	27 : 'Fn_Direction_Right',
	28 : 'Fn_End',
	29 : 'Fn2_Begin',
	30 : 'Fn2_X',
	31 : 'Fn2_Y',
	32 : 'Fn2_A',
	33 : 'Fn2_B',
	34 : 'Fn2_L3',
	35 : 'Fn2_R3',
	36 : 'Fn2_Direction_Up',
	37 : 'Fn2_Direction_Down',
	38 : 'Fn2_Direction_Left',
	39 : 'Fn2_Direction_Right',
	40 : 'Fn2_End',
	41 : 'Max',
}

ESBKeyConfigKeyboardKey = {
	0 : 'None',
	1 : 'A',
	2 : 'B',
	3 : 'C',
	4 : 'D',
	5 : 'E',
	6 : 'F',
	7 : 'G',
	8 : 'H',
	9 : 'I',
	10 : 'J',
	11 : 'K',
	12 : 'L',
	13 : 'M',
	14 : 'N',
	15 : 'O',
	16 : 'P',
	17 : 'Q',
	18 : 'R',
	19 : 'S',
	20 : 'T',
	21 : 'U',
	22 : 'V',
	23 : 'W',
	24 : 'X',
	25 : 'Y',
	26 : 'Z',
	27 : 'Escape',
	28 : 'Hyphen',
	29 : 'Caret',
	30 : 'BackSlash',
	31 : 'Backspace',
	32 : 'Tab',
	33 : 'AtSign',
	34 : 'LeftSquareBracket',
	35 : 'CapsLock',
	36 : 'SemiColon',
	37 : 'Colon',
	38 : 'RightSquareBracket',
	39 : 'Comma',
	40 : 'Period',
	41 : 'Slash',
	42 : 'Space',
	43 : 'Enter',
	44 : 'ScrollLock',
	45 : 'Pause',
	46 : 'Insert',
	47 : 'Home',
	48 : 'PageUp',
	49 : 'Delete',
	50 : 'End',
	51 : 'PageDown',
	52 : 'ArrowUp',
	53 : 'ArrowDown',
	54 : 'ArrowLeft',
	55 : 'ArrowRight',
	56 : 'LeftShift',
	57 : 'RightShift',
	58 : 'Shift',
	59 : 'LeftControl',
	60 : 'RightControl',
	61 : 'Control',
	62 : 'LeftAlt',
	63 : 'RightAlt',
	64 : 'Alt',
	65 : 'F1',
	66 : 'F2',
	67 : 'F3',
	68 : 'F4',
	69 : 'F5',
	70 : 'F6',
	71 : 'F7',
	72 : 'F8',
	73 : 'F9',
	74 : 'F10',
	75 : 'F11',
	76 : 'F12',
	77 : 'FullKey1',
	78 : 'FullKey2',
	79 : 'FullKey3',
	80 : 'FullKey4',
	81 : 'FullKey5',
	82 : 'FullKey6',
	83 : 'FullKey7',
	84 : 'FullKey8',
	85 : 'FullKey9',
	86 : 'FullKey0',
	87 : 'TenKeySlash',
	88 : 'TenKeyAsterisk',
	89 : 'TenKeyHyphen',
	90 : 'TenKeyPlus',
	91 : 'TenKey1',
	92 : 'TenKey2',
	93 : 'TenKey3',
	94 : 'TenKey4',
	95 : 'TenKey5',
	96 : 'TenKey6',
	97 : 'TenKey7',
	98 : 'TenKey8',
	99 : 'TenKey9',
	100 : 'TenKey0',
	101 : 'Max',
}

ESBKeyConfigMouseKey = {
	0 : 'None',
	1 : 'LeftButton',
	2 : 'RightButton',
	3 : 'CenterButton',
	4 : 'ThumbButton1',
	5 : 'ThumbButton2',
	6 : 'WheelUp',
	7 : 'WheelDown',
	8 : 'Max',
}

ESBOnlineSubsystemType = {
	0 : 'Unknown',
	1 : 'Session',
	2 : 'Party',
	3 : 'Chat',
	4 : 'Matchmaking',
	5 : 'Num',
}

ECauseOfDetah = {
	0 : 'Unknown',
	1 : 'HitPoint0',
	2 : 'FallDown',
}

EPayloadState = {
	0 : 'PayloadState_Standby',
	1 : 'PayloadState_Battle',
	2 : 'PayloadState_BattleResult',
	3 : 'PayloadState_GameResult',
	4 : 'PayloadState_Max',
}

ESBContentExitTravelTarget = {
	0 : 'PreviousMap',
	1 : 'LastTravelCity',
}

ESBDungeonNormalProgress = {
	0 : 'WaitJoin',
	1 : 'WaitStart',
	2 : 'Playing',
	3 : 'Cleared',
	4 : 'WaitExit',
	5 : 'GameOver',
}

ESBDungeonResultCause = {
	0 : 'Clear',
	1 : 'Fail',
	2 : 'Retire',
}

ESBPayloadGameTurnState = {
	0 : 'None',
	1 : 'Defense',
	2 : 'Attack',
	3 : 'Max',
}

ESBPayloadMoveState = {
	0 : 'None',
	1 : 'Forward',
	2 : 'Back',
	3 : 'Max',
}

ESBPayloadResultType = {
	0 : 'None',
	1 : 'Success',
	2 : 'Failure',
	3 : 'Max',
}

ESBLobbyChangedType = {
	0 : 'Player',
	1 : 'Room',
}

EGuildAcceptType = {
	0 : 'NeedCertification',
	1 : 'AutoCertification',
	2 : 'InviteOnly',
}

EGuildMemberRole = {
	-1 : 'INVALID',
	0 : 'BASIC_GUILD_MEMBER',
	1 : 'SUB_MASTER',
	2 : 'GRAND_MASTER',
}

EGuildPolicy = {
	0 : 'INVALID',
	1 : 'TYPE_BEGIN',
	1 : 'CONTENTS_ATTACK_MAIN',
	2 : 'COMMUNICATE_MAIN',
	3 : 'TYPE_MAX',
}

EHealProcResult = {
	1 : 'HealDone',
	2 : 'ShortOfMoney',
	3 : 'HealUnnecessary',
	4 : 'HealCanceled',
}

EHealStationDialogMessage = {
	1 : 'HealChargeConfirm',
	2 : 'ShortOfMoney',
	3 : 'HealUnnecessary',
}

ESBGuildActivityTime = {
	0 : 'UNDECIDED',
	1 : 'EARLYMORNING',
	2 : 'MORNING',
	3 : 'NOON',
	4 : 'EVENING',
	5 : 'NIGHT',
	6 : 'LATENIGHT',
	7 : 'MAX',
}

ESBGuildErrorCode = {
	0 : 'SUCCESS',
	1 : 'UNKNOWN_ERROR',
	2 : 'GUILD_NOT_FOUND',
	3 : 'GUILD_NOT_MEMBER',
	4 : 'GUILD_PERMISSION_DENIED',
	5 : 'GUILD_NO_ENTRY',
	6 : 'DUPLICATE_ENTRY',
	7 : 'GUILD_ALREDY_MEMBER',
	8 : 'DUPLICATE_NAME',
	9 : 'MEMBER_MAX',
	10 : 'NG_WORD',
	11 : 'CHARACTER_NOT_FOUND',
}

ESBHTNStateComparison = {
	0 : 'Equal',
	1 : 'NotEqual',
	2 : 'LessThan',
	3 : 'LessThanEqual',
	4 : 'GreaterThan',
	5 : 'GreaterThanEqual',
}

ESBHintShowTypes = {
	0 : 'MYCHARACTER',
	1 : 'ITEM_INVENTORY',
	2 : 'QUEST',
	3 : 'MAP',
	4 : 'COMMUNICATE',
	5 : 'EMOTE',
	6 : 'MATCHING',
	7 : 'PARTY',
	8 : 'OPTION',
	9 : 'DUNGEON',
	10 : 'NUM',
}

ESBIKBoneNum = {
	2 : 'Two',
	3 : 'Three',
	4 : 'Four',
}

ESBIKJointNum = {
	2 : 'Two',
	3 : 'Three',
	4 : 'Four',
}

ESBLegIKRotateType = {
	0 : 'OneAxis',
	1 : 'TwoAxis',
	2 : 'ThreeAxis',
	3 : 'Num',
}

ESBMaxShieldDurability = {
	0 : 'None',
	1 : 'FixedValue',
	2 : 'OwnerHP',
}

ESBImagineCategory = {
	0 : 'Arts',
	1 : 'Passive',
	2 : 'Item',
	3 : 'Worker',
}

ESBImagineSummonCharacter = {
	0 : 'None',
	1 : 'Mount',
}

ESBInfluencePropagationType = {
	0 : 'Linear',
	1 : 'Constant',
	2 : 'Custom',
}

EEquipableGender = {
	0 : 'Unknown',
	1 : 'Common',
	2 : 'Male',
	3 : 'Female',
}

EInteractionTargetType = {
	0 : 'Default',
	1 : 'OtherCharacter',
	2 : 'Npc',
	3 : 'GatherPoint',
	4 : 'WarpPoint',
	5 : 'NoticeBoard',
	6 : 'Gimmick',
	7 : 'TreasureBox',
}

EInterruptQuestConditionType = {
	0 : 'QuestAreaIn',
	1 : 'GimickAreaIn',
	2 : 'KillTarget_QuestArea',
	3 : 'KillTarget_GimmickArea',
}

EInterruptQuestResult = {
	0 : 'Unknown',
	1 : 'Sucs',
	2 : 'Failed',
}

EInterruptQuestStatus = {
	0 : 'Idle',
	1 : 'Loading',
	2 : 'Loaded',
	3 : 'InitWait',
	4 : 'Running',
	5 : 'Done',
}

EItemCategory = {
	0 : 'Consumption',
	1 : 'Sale',
	2 : 'Smelting',
	3 : 'Craft',
}

EItemEfficacyType = {
	0 : 'Invalid',
	1 : 'HPRecovery',
	2 : 'MPRecovery',
	3 : 'SkillRecastReset',
	4 : 'SpecialRecovery',
	5 : 'ArtsRecovery',
	6 : 'GiveDamageUp',
	7 : 'DamageRecieveDown',
	8 : 'FireStatusRecovery',
	9 : 'IceStatusRecovery',
	10 : 'ThunderStatusRecovery',
	11 : 'StaminaReduceCorrect',
	12 : 'HPMaxRateUp',
	13 : 'HPDotRecovery',
	14 : 'ChallengeBox',
	15 : 'ItemEfficacyType_Num',
}

EItemObtainRouteType = {
	0 : 'Invalid',
	1 : 'Subdue',
	2 : 'Picking',
	3 : 'Craft',
	4 : 'DungeonClear',
}

EItemType = {
	0 : 'ItemType_Invalid',
	1 : 'ItemType_Item',
	2 : 'ItemType_Weapon',
	3 : 'ItemType_Costume',
	5 : 'ItemType_Imagine',
	6 : 'ItemType_MountImagine',
	7 : 'ItemType_Num',
}

EProtectorCategory = {
	0 : 'Unknown',
	1 : 'Head',
	2 : 'Body',
	3 : 'Hand',
	4 : 'Leg',
	5 : 'Shoes',
	6 : 'Accessory_HeadTop',
	7 : 'Accessory_Eye',
	8 : 'Accessory_Cheek',
	9 : 'Accessory_Ear',
	10 : 'Accessory_RightHandFinger',
	11 : 'Accessory_LeftHandFinger',
	12 : 'Accessory_Back',
	13 : 'Accessory_Hip',
}

ESBCostumeMaterial = {
	0 : 'Normal',
	1 : 'Robe',
	2 : 'Leather_Plastic',
	3 : 'Light_Metal',
	4 : 'Metal',
	101 : 'Sneaker',
	102 : 'Heel',
	103 : 'Leather',
	104 : 'Leather_Light',
	105 : 'Leather_Heavy',
}

EItemAppraisalResultPhase = {
	0 : 'UNIDENTIFED',
	1 : 'UNDERAPPRAISA',
	2 : 'APPRAISED',
	3 : 'SALE',
	4 : 'END',
	5 : 'MAX',
}

EItemFilterType = {
	0 : 'None',
	1 : 'Filter_WeaponType_ShieldSword',
	2 : 'Filter_WeaponType_Axe',
	3 : 'Filter_WeaponType_Bow',
	4 : 'Filter_WeaponType_Cane',
	5 : 'Filter_Imagine_Active',
	6 : 'Filter_Imagine_Passive',
	7 : 'Filter_Imagine_Passive_Position1',
	8 : 'Filter_Imagine_Passive_Position2',
	9 : 'Filter_Imagine_Passive_Position3',
	10 : 'Filter_Imagine_Passive_Position4',
	11 : 'Filter_Imagine_Passive_Position5',
	12 : 'Filter_Effective_None',
	13 : 'Filter_Effective_Physics',
	14 : 'Filter_Effective_Earth',
	15 : 'Filter_Effective_Fire',
	16 : 'Filter_Effective_Ice',
	17 : 'Filter_Effective_Thunder',
	18 : 'Filter_Effective_Light',
	19 : 'Filter_Effective_Darkness',
	20 : 'Filter_Items_CanUse',
	21 : 'Filter_Items_Material',
	22 : 'Filter_Items_Item',
	23 : 'Filter_Items_Weapon',
	24 : 'Filter_Items_Costume',
	25 : 'Filter_Items_Accessory',
	26 : 'Filter_Items_Equipment',
	27 : 'Filter_Items_Imagine',
	28 : 'Filter_Items_MountImagine',
	29 : 'Filter_Locked',
	30 : 'Filter_Costume_Protector_Head',
	31 : 'Filter_Costume_Protector_Body',
	32 : 'Filter_Costume_Protector_Hand',
	33 : 'Filter_Costume_Protector_Leg',
	34 : 'Filter_Costume_Protector_Shoes',
	35 : 'Filter_Costume_Protector_Accessory_HeadTop',
	36 : 'Filter_Costume_Protector_Accessory_Eye',
	37 : 'Filter_Costume_Protector_Accessory_Cheek',
	38 : 'Filter_Costume_Protector_Accessory_Ear',
	39 : 'Filter_Costume_Protector_Accessory_RightHandFinger',
	40 : 'Filter_Costume_Protector_Accessory_LeftHandFinger',
	41 : 'Filter_Costume_Protector_Accessory_Back',
	42 : 'Filter_Costume_Protector_Accessory_Hip',
	43 : 'Filter_Quest_Slay',
	44 : 'Filter_Quest_Errand',
	45 : 'Filter_Quest_Collect',
	46 : 'Filter_Quest_Rebellion',
	47 : 'Filter_Quest_Berserker',
	48 : 'Filter_Quest_Blaster',
	49 : 'Filter_Quest_Magician',
	50 : 'Filter_Quest_Level1',
	51 : 'Filter_Quest_Level11',
	52 : 'Filter_Quest_Level21',
	53 : 'Filter_Quest_Level31',
	54 : 'Filter_Quest_Level41',
	55 : 'Filter_Quest_CantReceive',
	56 : 'Filter_Quest_Category_Main',
	57 : 'Filter_Quest_Category_Sub',
	58 : 'Filter_Quest_Category_Class',
	59 : 'Filter_Quest_Category_Extra',
	60 : 'Filter_Quest_Category_ReleaseFunctions',
	61 : 'Filter_Imagine_IllustImagine',
	62 : 'Filter_LevelMax',
	63 : 'Filter_NotLevelMax',
	64 : 'Filter_SyntheableWeapons',
	65 : 'Filter_HasAbilities',
	66 : 'FILTER_MAX',
}

EJingleType = {
	0 : 'None',
	1 : 'STORY_UPDATE',
	2 : 'QUEST_ACCEPT',
	3 : 'QUEST_UPDATE',
	4 : 'QUEST_CLEAR',
	5 : 'INTERRUPT_QUEST_ACCEPT',
	6 : 'INTERRUPT_QUEST_CLEAR',
	7 : 'INTERRUPT_QUEST_FAILED',
	8 : 'WEAPON_LEVEL_UP',
	9 : 'TUTORIAL_HELP',
	10 : 'RAID_BATTLE_START',
	11 : 'RAID_BATTLE_CLEAR',
	12 : 'RAID_BATTLE_FAILE',
}

ESBItemSortType = {
	0 : 'Default_Time',
	1 : 'Default_Time_Reverse',
	2 : 'ItemId',
	3 : 'ItemId_Reverse',
	4 : 'ItemLevel',
	5 : 'ItemLevel_Reverse',
	6 : 'ItemType',
	7 : 'SortId',
	8 : 'SortId_Reverse',
	9 : 'Str',
	10 : 'Dex',
	11 : 'Vit',
	12 : 'Mnd',
	13 : 'Int',
	14 : 'HP',
	15 : 'Attack',
	16 : 'SORT_TYPE_MAX',
}

ESBLevelSequenceType = {
	0 : 'Default',
	1 : 'Demo',
}

EAreaMapNum = {
	5 : 'Num',
}

ELoadingType = {
	0 : 'Common',
	1 : 'Dungeon',
	2 : 'PvP',
	3 : 'Simple',
	4 : 'Max',
}

EMapFuncIconType = {
	0 : 'MapFuncIcon_CurrMap',
	1 : 'MapFuncIcon_WorldMap',
	2 : 'MapFuncIcon_MapOneBefore',
	3 : 'MapFuncIcon_LayerToggle',
	4 : 'MapFuncIcon_Max',
}

EMapPinType = {
	0 : 'MapPin_Type1',
	1 : 'MapPin_Type2',
	2 : 'MapPin_Type3',
	3 : 'MapPin_Type4',
	4 : 'MapPin_Type5',
	5 : 'MapPin_Eraser',
	6 : 'MapPin_Max',
}

EMapSymbolIconType = {
	0 : 'MapSymbolIcon_Player',
	1 : 'MapSymbolIcon_PartyMember',
	2 : 'MapSymbolIcon_PartyMember_Dead',
	3 : 'MapSymbolIcon_FieldEnemy',
	4 : 'MapSymbolIcon_MainQuest_Acceptable',
	5 : 'MapSymbolIcon_MainQuest_InProgress',
	6 : 'MapSymbolIcon_MainQuest_Reportable',
	7 : 'MapSymbolIcon_MainQuest_Unprocessable',
	8 : 'MapSymbolIcon_SubQuest_Acceptable',
	9 : 'MapSymbolIcon_SubQuest_InProgress',
	10 : 'MapSymbolIcon_SubQuest_Reportable',
	11 : 'MapSymbolIcon_SubQuest_Unprocessable',
	12 : 'MapSymbolIcon_ExtraQuest_Acceptable',
	13 : 'MapSymbolIcon_ExtraQuest_InProgress',
	14 : 'MapSymbolIcon_ExtraQuest_Reportable',
	15 : 'MapSymbolIcon_ExtraQuest_Unprocessable',
	16 : 'MapSymbolIcon_MainQuest_Acceptable_Outside',
	17 : 'MapSymbolIcon_MainQuest_InProgress_Outside',
	18 : 'MapSymbolIcon_MainQuest_Reportable_Outside',
	19 : 'MapSymbolIcon_MainQuest_Unprocessable_Outside',
	20 : 'MapSymbolIcon_SubQuest_Acceptable_Outside',
	21 : 'MapSymbolIcon_SubQuest_InProgress_Outside',
	22 : 'MapSymbolIcon_SubQuest_Reportable_Outside',
	23 : 'MapSymbolIcon_SubQuest_Unprocessable_Outside',
	24 : 'MapSymbolIcon_ExtraQuest_Acceptable_Outside',
	25 : 'MapSymbolIcon_ExtraQuest_InProgress_Outside',
	26 : 'MapSymbolIcon_ExtraQuest_Reportable_Outside',
	27 : 'MapSymbolIcon_ExtraQuest_Unprocessable_Outside',
	28 : 'MapSymbolIcon_InterruptQuest_InProgress',
	29 : 'MapSymbolIcon_Shop_Weapon',
	30 : 'MapSymbolIcon_HealStation',
	31 : 'MapSymbolIcon_Shop_Item',
	32 : 'MapSymbolIcon_Shop_Peddler',
	33 : 'MapSymbolIcon_Npc_Tutorial',
	34 : 'MapSymbolIcon_Npc_Dungeon',
	35 : 'MapSymbolIcon_WarpPoint',
	36 : 'MapSymbolIcon_LocalWarpPoint',
	37 : 'MapSymbolIcon_InstanceDungeon',
	38 : 'MapSymbolIcon_Shop_Protector',
	39 : 'MapSymbolIcon_Npc_Quest',
	40 : 'MapSymbolIcon_Shop_Aesthe',
	41 : 'MapSymbolIcon_Shop_Dyeing',
	42 : 'MapSymbolIcon_ImagineLabo',
	43 : 'MapSymbolIcon_Workshop',
	44 : 'MapSymbolIcon_UserQuestHouse',
	45 : 'MapSymbolIcon_ExchangeShop',
	46 : 'MapSymbolIcon_CoinHouse',
	47 : 'MapSymbolIcon_Pin',
	48 : 'MapSymbolIcon_Craft',
	49 : 'MapSymbolIcon_ClassChange',
	50 : 'MapSymbolIcon_Shop_Synthe',
	51 : 'MapSymbolIcon_Restuarant',
	52 : 'MapSymbolIcon_ChallengeBox',
	53 : 'MapSymbolIcon_Arena',
	54 : 'MapSymbolIcon_Warehouse',
	55 : 'MapSymbolIcon_Guild',
	56 : 'MapSymbolIcon_GachaShop',
	57 : 'MapSymbolIcon_WeaponRemodeling',
	58 : 'MapSymbolIcon_MemoryStand',
	59 : 'MapSymbolIcon_TimeAttack',
	60 : 'MapSymbolIcon_Unknown',
}

EPinMaxPerMap = {
	5 : 'Max',
}

ESBLiquidMemory = {
	2 : 'LevelMax',
	5 : 'AccumulateConditionMax',
}

ESBLiquidMemoryAccumulateConditionType = {
	0 : 'None',
	1 : 'TimeElapse',
	2 : 'EnemyKill',
	3 : 'Gather',
	4 : 'BattleImajinnCreate',
	5 : 'BattleImajinnEnhance',
	6 : 'Num',
}

ESBLiquidMemoryAccumulationType = {
	0 : 'Quantitative',
	1 : 'Random',
	2 : 'Num',
}

ESBLiquidMemoryCategory = {
	0 : 'None',
	1 : 'Craft_Weapon',
	2 : 'Craft_Item',
	3 : 'Craft_BattleImajinn',
	4 : 'Craft_Attachment',
	5 : 'Enhance_Weapon',
	6 : 'Enhance_BattleImajinn',
	7 : 'Enhance_Attachment',
	8 : 'Gather',
	9 : 'Enemy',
	10 : 'NpcFacility',
	11 : 'Num',
}

ESBLiquidMemoryEfficacyType = {
	0 : 'None',
	1 : 'Craft_CriticalRateUp',
	2 : 'Craft_AbilityAddRateUp',
	3 : 'Craft_WeaponMinimumLevelHighRateUp',
	4 : 'Enhance_ExpUp',
	5 : 'GatherTimeReduce',
	6 : 'GatherSpotRepopRateUp',
	7 : 'Enemy_DropRateUp',
	8 : 'Enemy_ExpUp',
	9 : 'Enemy_MoneyUp',
	10 : 'NpcFacility_MoneyConsumptionDiscount',
	11 : 'Num',
}

ESBLiquidMemoryEfficacyValueType = {
	0 : 'None',
	1 : 'Time',
	2 : 'Number',
	3 : 'Rate',
	4 : 'Num',
}

ESBLiquidMemoryInfoSortType = {
	0 : 'LiquidMemoryId_Ascending',
	1 : 'LiquidMemoryId_Descending',
	2 : 'Num',
}

ESBLocationInfoType = {
	0 : 'None',
	1 : 'InstanceDungeon',
}

ESBMailAttachmentTypes = {
	0 : 'ID_MONEY',
	1 : 'ID_ENGRAM',
	2 : 'ID_ITEM',
	3 : 'ID_WEAPON',
	4 : 'ID_COSTUME',
	5 : 'ID_MAX',
}

ESBMailReadStatus = {
	0 : 'MAIL_NOREAD',
	1 : 'MAIL_READED',
	2 : 'MAIL_GETED',
	4 : 'MAIL_TRANSED',
	7 : 'MAIL_ALL',
}

ESBMailType = {
	0 : 'MailType_Management',
	1 : 'MailType_System',
	2 : 'MailType_Avator',
	3 : 'MailType_StoregeBox',
}

ESBMakeupType = {
	0 : 'None',
	1 : 'Condition',
	2 : 'Lip',
	3 : 'Paint',
	4 : 'MAX',
}

ESBMapErrorCode = {
	0 : 'SUCCESS',
	1 : 'HIT_NG_WORD',
	2 : 'UNKNOWN_ERROR',
	3 : 'MAX',
}

ESBMapRegion = {
	0 : 'MapRegion_None',
	1 : 'MapRegion_R01',
	2 : 'MapRegion_R02',
	3 : 'MapRegion_R03',
	4 : 'MapRegion_R04',
}

ESBMapType = {
	0 : 'MapType_None',
	1 : 'MapType_OutGame',
	2 : 'MapType_City',
	3 : 'MapType_Field',
	4 : 'MapType_InstanceDungeon',
	5 : 'MapType_InstanceArea',
	6 : 'MapType_OfflineBattle',
	7 : 'MapType_RaidBattle',
	8 : 'MapType_Arena',
}

ESBImagineCategoryType = {
	0 : 'ImaginePassive',
	1 : 'ImagineActive',
}

ESBMatchingGameStateStatusType = {
	0 : 'Matching',
	1 : 'Canceled',
}

ESBMatchingMenuCancelMatchResult = {
	0 : 'Success',
	1 : 'UnknownFailure',
	2 : 'NotLeader',
}

ESBMatchingMenuStartMatchResult = {
	0 : 'Success',
	1 : 'UnknownFailure',
	2 : 'NoContents',
	3 : 'NotLeader',
	4 : 'Unopened',
	5 : 'Test_OnlyOne',
}

ESBObjectConditionType = {
	0 : 'Daytime',
	1 : 'Nighttime',
	2 : 'Alltime',
}

ESBTreasureBoxRarity = {
	0 : 'NotUse',
	1 : 'Silver',
	2 : 'Gold',
	3 : 'Gorgeous',
	4 : 'Reserved0',
	5 : 'Reserved1',
	6 : 'Reserved2',
	7 : 'Event',
	8 : 'Reserved3',
	9 : 'Reserved4',
	10 : 'Plant',
	11 : 'Mineral',
	12 : 'Aquatic',
	13 : 'AnyGatherPoint',
}

ESBTreasureBoxRewardType = {
	0 : 'Money',
	1 : 'Item',
	2 : 'Imagine',
}

EMoneyUIText = {
	1 : 'Currency',
}

ESBMatchingFailureType = {
	0 : 'Unknown',
	1 : 'InternalError',
	2 : 'Canceld',
	3 : 'Declined',
	4 : 'NotPartyLeader',
	5 : 'TooMuchMember',
	6 : 'AlreadyStartMatchmaking',
	7 : 'OnlyOneSelect',
	8 : 'LackTotalPower',
	9 : 'NotOpenDungeon',
	10 : 'Inviting',
	11 : 'Recruiting',
	12 : 'InvalidDungeon',
}

ESBMissionQuestContentsType = {
	0 : 'None',
	1 : 'EnemyKill',
	2 : 'EnemyRaceKil',
	3 : 'InstanceDungeonClear',
	4 : 'InstanceDungeonTimeAttack',
	5 : 'UltArtsUsedNum',
	6 : 'ImagineArtsUsedNum',
	7 : 'ImagineSeedUsedNum',
	8 : 'ImagineSeedGetNum',
	9 : 'MoveDistance',
	10 : 'GatherNum',
	11 : 'GetMoney',
	12 : 'SubQuestClear',
}

ESBMissionQuestType = {
	0 : 'None',
	1 : 'MainMission',
	2 : 'DailyMission',
	3 : 'WeeklyMission',
	4 : 'EventMission',
}

EMyCharacterWeaponSortType = {
	0 : 'SortType_WeaponName',
	1 : 'SortType_WeaponAura',
	2 : 'SortType_WeaponRarity',
	3 : 'SortType_Max',
}

ESBFireNotifiesAtPosition = {
	0 : 'AtStartOfEvaluation',
	1 : 'AtEndOfEvaluation',
	2 : 'AfterSpawn',
	3 : 'None',
}

ESBMovieSceneTextWindowGender = {
	0 : 'TWG_None',
	1 : 'TWG_Male',
	2 : 'TWG_Female',
}

ESBRootMotionType = {
	1 : 'Disable',
	2 : 'Absolute',
	4 : 'Relative',
}

NavigationTestingType = {
	0 : 'PathFinding',
	1 : 'RunAwayPathFinding',
}

ENpcJob = {
	0 : 'Common',
	1 : 'Ordinary',
	2 : 'Guide',
	3 : 'Adventurer',
	4 : 'Noble',
	5 : 'Farmer',
	6 : 'Rogue',
	7 : 'Traveller',
	8 : 'Merchant',
	9 : 'Craftsman',
	10 : 'Guard',
	11 : 'Priest',
	12 : 'Sister',
	13 : 'Sailor',
	14 : 'Cook',
	15 : 'Artist',
	16 : 'Bandman',
	17 : 'Maid',
	18 : 'Butler',
	19 : 'Soothsayer',
	20 : 'Entertainer',
	21 : 'Scientist',
	22 : 'Exchange',
	23 : 'Brigade',
	24 : 'Sokoban',
	25 : 'ItemStore',
	26 : 'GeneralStore',
	27 : 'WeaponStore',
	28 : 'ImagineStore',
	29 : 'BeautySalon',
	30 : 'Dyers',
	31 : 'Arena',
	32 : 'CoinTei',
	33 : 'ClassChange',
	34 : 'Liquid',
	35 : 'ChallengeBox',
	36 : 'MAX',
}

ENpcState = {
	0 : 'Idle',
	1 : 'Talk',
	2 : 'Stagger',
}

ENpcType = {
	0 : 'None',
	1 : 'Shop',
	2 : 'GatherPoint',
	3 : 'WarpPoint',
	4 : 'QuestBoard',
	5 : 'DungeonEntrance',
}

ESBNgWordTarget = {
	0 : 'All',
	1 : 'Name',
	2 : 'Text',
}

ESBNpcLaneDirection = {
	0 : 'BothWays',
	1 : 'LeftToRight',
	2 : 'RightToLeft',
}

EPathDirection = {
	0 : 'OneWay',
	1 : 'BothWay',
}

EPathTarget = {
	0 : 'None',
}

ESBNpcPathFindQueryFlag = {
	0 : 'SearchName',
	1 : 'SearchTarget',
	2 : 'SearchDirection',
}

ESBNpcSpawnPointCharacterType = {
	0 : 'RandomAppearance',
	1 : 'CharaCreate',
	2 : 'ExtraNPC',
	3 : 'Animal',
}

EAddItemOpResult = {
	0 : 'Succeeded',
	1 : 'Error_CapacityOver',
	2 : 'Error_StackOver',
}

ESBParabolaMoveType = {
	0 : 'SpawnDirection',
	1 : 'Degree',
	2 : 'ReachHeight',
	3 : 'ReachTime',
	4 : 'DirectionDegree',
}

ESBStorageNumber = {
	-1 : 'Inventory',
	-4 : 'DungeonBag',
	-5 : 'EquipmentBag',
	0 : 'CharacterStorage',
	1 : 'AccountStorage',
	-99 : 'Drop',
}

EStorageSortRule = {
	0 : 'Default',
	1 : 'ItemId',
	2 : 'Kana',
	3 : 'ItemLevel',
	4 : 'Default_Reverse',
	5 : 'ItemId_Reverse',
	6 : 'Kana_Reverse',
	7 : 'ItemLevel_Reverse',
	8 : 'ItemType',
}

ESBPartySystemTextType = {
	0 : 'Unknown',
	1 : 'ConfirmInvite',
	2 : 'InviteSuccess',
	3 : 'InviteFail',
	4 : 'InviteCancel',
	5 : 'InviteReceive',
	6 : 'ConfirmJoin',
	7 : 'JoinSuccess',
	8 : 'JoinFail',
	9 : 'MemberJoin',
	10 : 'ConfirmLeave',
	11 : 'LeaveSuccess',
	12 : 'LeaveFail',
	13 : 'MemberExit',
	14 : 'ConfirmRelease',
	15 : 'ReleaseSuccess',
	16 : 'ReleaseFail',
	17 : 'ReleasedParty',
	18 : 'ConfirmPromote',
	19 : 'PromoteSuccess',
	20 : 'PromoteFail',
	21 : 'PromotedLeader',
	22 : 'PromotedMember',
	23 : 'ConfirmKick',
	24 : 'KickSuccess',
	25 : 'KickFail',
	26 : 'KickedTarget',
	27 : 'KickedMember',
	28 : 'InacceptInvite',
	29 : 'ChannelMigrationReject',
	30 : 'ChannelMigrationCancel',
	31 : 'ChannelMigrationForbiddenCommandBlock',
	32 : 'PartyInviteFail',
}

ESBPartyType = {
	0 : 'Persistent',
	1 : 'Instant',
	2 : 'Unknown',
}

ESBSendPartyInvitationRequestCompleteResult = {
	0 : 'Success',
	1 : 'UnknownFailure',
	2 : 'InParty',
	3 : 'BuildingParty',
	4 : 'PlayingDemo',
	5 : 'InInstance',
	6 : 'Busy',
	7 : 'PlayInterruptQuest',
}

ESBMissileGadgetState = {
	0 : 'Deactive',
	1 : 'Spawnable',
	2 : 'Activate',
}

ESBPerformanceCameraPlayType = {
	0 : 'None',
	1 : 'Immediate',
	2 : 'Reserve',
}

ESBPerformanceCameraWatchPointBase = {
	0 : 'None',
	1 : 'Player',
	2 : 'Target',
	3 : 'MGC_Meteor',
}

EPhotoMode = {
	100 : 'Image_Upload_Max',
	20 : 'Image_Lock_Max',
}

ESBAdminCommandCallbackRequest = {
	0 : 'None',
	1 : 'OpenConsole',
	2 : 'CloseConsole',
	3 : 'CloseChatWindow',
	4 : 'OpenBookmarkList',
	5 : 'StartCommand',
	6 : 'FinishCommand',
	7 : 'Max',
}

ESBAdminHideStatus = {
	0 : 'None',
	1 : 'Hide',
	2 : 'SHide',
	3 : 'Max',
}

ESBChallengeBoxState = {
	0 : 'None',
	1 : 'ReceivedStart',
	2 : 'Start',
	3 : 'CountDown',
	4 : 'Main',
	5 : 'End',
	6 : 'Result',
	7 : 'Max',
}

ENotificationDialogStatus = {
	0 : 'Close',
	1 : 'Open',
	2 : 'Pending',
}

EGameInput = {
	0 : 'None',
	1 : 'DummyMove',
	2 : 'Walk',
	3 : 'Dash',
	4 : 'DummyAction',
	5 : 'MainAction',
	6 : 'SubAction',
	7 : 'LeftSkill',
	8 : 'RightSkill',
	9 : 'Skill1',
	10 : 'Skill2',
	11 : 'Skill3',
	12 : 'Skill4',
	13 : 'SpecialAction',
	14 : 'DodgeAction',
	15 : 'CommandDodge',
	16 : 'JumpAction',
	17 : 'Reload',
	18 : 'ImagineArts',
	19 : 'ImagineArts2',
	20 : 'ImagineMount',
	21 : 'Interaction',
	22 : 'Function_Gamepad',
	23 : 'Function_Gamepad2',
	24 : 'Function_Keyboard',
	25 : 'DummyButton',
	26 : 'LeftMouseButton',
	27 : 'RightMouseButton',
	28 : 'PadUp',
	29 : 'PadDown',
	30 : 'PadRight',
	31 : 'PadLeft',
	32 : 'DummySkill',
	33 : 'SkillGunAim',
	34 : 'SkillMagicWall',
	35 : 'SkillRideStart',
	36 : 'SkillGuard',
	37 : 'SkillGunFire',
	38 : 'SkillBowShot',
	39 : 'SkillPoisonShot',
	40 : 'SkillHealShot',
	41 : 'SkillAxeCombo',
	42 : 'SkillCounterBarrier',
	43 : 'SkillSupportGadget',
	44 : 'SkillHavocStomp',
	45 : 'LABEL_NUM',
}

ESBFieldActorExeWebAPI = {
	0 : 'SavedFieldActorPoint',
	1 : 'SetFlagFieldActorPoint',
}

ESBFieldActorInteractPoint = {
	0 : 'GatherPoint',
	1 : 'TreasureBox',
}

ESBInteractionState = {
	0 : 'Search',
	1 : 'Input',
	2 : 'Action',
}

ESBInteractionType = {
	0 : 'None',
	1 : 'InteractionTarget',
	2 : 'MeshClimbing',
	3 : 'Resurrection',
	4 : 'CureBadCondition',
	5 : 'Sheathe',
}

ESBPlayerClassCommonParam = {
	0 : 'None',
	1 : 'AutoSheatheTime',
	2 : 'ComboKeepTime',
	3 : 'ComboCountMax',
	4 : 'CommandInputTime',
	5 : 'SkillPreInputHoldTime',
	6 : 'SkillPreInputActiveTime',
	7 : 'SkillPreInputLaunchWaitTime',
	8 : 'SkillPreInputMoveDirectionUpdatableTime',
	9 : 'AimAngleReplicateTime',
	10 : 'ResurrectionTime',
	11 : 'ResurrectionSubtractTime',
	12 : 'ResurrectionMaxHPDecreaseRate',
	13 : 'ResurrectionMaxHPDecreaseMin',
	14 : 'RayCheckForPlayerReticle',
	15 : 'MinMoveInput',
	16 : 'CityCapsuleRadius',
	17 : 'SpawnEffectWaitTime',
	18 : 'DashInputAutoSheatheTime',
	19 : 'ControlCameraByMoveInputTime',
	20 : 'PerformanceCameraCancelLookInput',
	21 : 'MashingInputInterval',
	22 : 'Max',
}

ECustomMoveMode = {
	0 : 'CustomMoveMode_None',
	1 : 'CustomMoveMode_MeshClimbing',
	2 : 'CustomMoveMode_CharaCreate',
}

EMeshClimbingState = {
	0 : 'MeshClimbing_None',
	1 : 'MeshClimbing_Start_ParamSet',
	2 : 'MeshClimbing_Start_MoveRootMotion',
	3 : 'MeshClimbing_Start_SafeMove',
	4 : 'MeshClimbing_BetweenPoints',
	5 : 'MeshClimbing_AtPoint',
}

ESBPassiveArtsModifyCategory = {
	0 : 'None',
	1 : 'STR',
	2 : 'VIT',
	3 : 'DEX',
	4 : 'MND',
	5 : 'INT',
	6 : 'HP',
	7 : 'Attack',
	8 : 'Defense',
	9 : 'RecoveryPower',
	10 : 'CriticalRate',
	11 : 'StaminaMax',
	12 : 'SpecialArtsRecast',
	13 : 'DodgeDistance',
	14 : 'GiveResurrectionSpeed',
	15 : 'ResurrectedHP',
	16 : 'GiveHealAmount',
	17 : 'ShiledDamage',
	18 : 'ShiledRegenSpeed',
	19 : 'BSK_IncComboGauge',
	20 : 'BSK_MaxComboGaugeBonus',
	21 : 'MGC_MPRegenAmount',
	22 : 'MGC_MaxMP',
}

ESBPassiveStatusParamCalcType = {
	0 : 'None',
	1 : 'Add',
	2 : 'Percent',
}

ESBPlayerBattlePresetEquipItem = {
	0 : 'Weapon',
	1 : 'ClassSkill_1',
	2 : 'ClassSkill_2',
	3 : 'ClassSkill_3',
	4 : 'ClassSkill_4',
	5 : 'Ability_1',
	6 : 'Ability_2',
	7 : 'Ability_3',
	8 : 'BattleImagen_1',
	9 : 'BattleImagen_2',
	10 : 'AttachmentHead',
	11 : 'AttachmentRightArm',
	12 : 'AttachmentLeftArm',
	13 : 'AttachmentRightLeg',
	14 : 'AttachmentLeftLeg',
	15 : 'Max',
	255 : 'None',
}

ESBPlayerCostumePresetEquipItem = {
	0 : 'Hat',
	1 : 'Upper',
	2 : 'Gloves',
	3 : 'Lower',
	4 : 'Shoes',
	5 : 'Accessory_1',
	6 : 'Accessory_2',
	7 : 'Accessory_3',
	8 : 'Max',
	255 : 'None',
}

ESBPlayerPresetEquipItem = {
	0 : 'BatttleWeapon',
	1 : 'BatttleClassSkill_1',
	2 : 'BatttleClassSkill_2',
	3 : 'BatttleClassSkill_3',
	4 : 'BatttleClassSkill_4',
	5 : 'BatttleAbility_1',
	6 : 'BatttleAbility_2',
	7 : 'BatttleAbility_3',
	8 : 'BatttleBattleImagen_1',
	9 : 'BatttleBattleImagen_2',
	10 : 'BatttleAttachmentHead',
	11 : 'BatttleAttachmentRightArm',
	12 : 'BatttleAttachmentLeftArm',
	13 : 'BatttleAttachmentRightLeg',
	14 : 'BatttleAttachmentLeftLeg',
	15 : 'CostumeHat',
	16 : 'CostumeUpper',
	17 : 'CostumeGloves',
	18 : 'CostumeLower',
	19 : 'CostumeShoes',
	20 : 'CostumeAccessory_1',
	21 : 'CostumeAccessory_2',
	22 : 'CostumeAccessory_3',
	23 : 'Max',
	255 : 'None',
}

ESBPlayerPresetType = {
	0 : 'None',
	1 : 'BattleSet',
	2 : 'CostumeSet',
	3 : 'Max',
}

ESBTurnPlayerActorDirection = {
	0 : 'None',
	1 : 'Left',
	2 : 'Right',
}

ESBTurnPlayerActorType = {
	0 : 'None',
	1 : 'UnsheatheMove',
	2 : 'CurveMove',
	3 : 'Camera',
	4 : 'TargetComponent',
	5 : 'LockonTargetComponent',
	6 : 'Location',
	7 : 'SkillMarker',
	8 : 'InteractionTarget',
	9 : 'EmoteTarget',
	10 : 'GuardDirection',
}

ESBSkillMarkerAim = {
	0 : 'None',
	1 : 'ReticleFront',
	2 : 'ReticleFrontDown',
	3 : 'ReticleHorizontalFrontDown',
	4 : 'Player',
	5 : 'PlayerFront',
	6 : 'PlayerFrontDown',
	7 : 'TargetDown',
}

ESBSkillMarkerPlace = {
	0 : 'None',
	1 : 'Ground',
	2 : 'Terrain',
	3 : 'Air',
}

ESBSkillMarkerRange = {
	0 : 'None',
	1 : 'Direct',
	2 : 'Horizontal',
}

ESBSkillMarkerRayCollision = {
	0 : 'Terrain',
	1 : 'Enemy',
	2 : 'TerrainAndEnemy',
}

ESBPlayerStartType = {
	0 : 'Unknown',
	1 : 'FieldMove',
	2 : 'WarpPoint',
	3 : 'DungeonExit',
	4 : 'LocalWarpPoint',
	5 : 'EventPoint',
}

ESBEnableTarget = {
	0 : 'Enable',
	1 : 'Disable_Invald',
	2 : 'Disable_NonTargetable',
	3 : 'Disable_Dead',
	4 : 'Disable_CanAttack',
	5 : 'Disable_Range',
	6 : 'Disable_Block',
}

ETargetState = {
	0 : 'TargetState_None',
	1 : 'TargetState_Auto',
	2 : 'TargetState_Multi',
	3 : 'TargetState_LockOn',
	4 : 'TargetState_LockOnSuspend',
}

EActionSwitchType = {
	0 : 'None',
	1 : 'Hold',
	2 : 'Toggle',
}

EPlayerActionTagPower = {
	0 : 'ATPower_None',
	1 : 'ATPower_Light',
	2 : 'ATPower_High',
	3 : 'ATPower_Num',
}

EPlayerActionTagRange = {
	0 : 'ATRange_None',
	1 : 'ATRange_Short',
	2 : 'ATRange_Long',
	3 : 'ATRange_Num',
}

EPlayerActionTagTarget = {
	0 : 'ATTarget_None',
	1 : 'ATTarget_Single',
	2 : 'ATTarget_Multi',
	3 : 'ATTarget_Num',
}

EPlayerActionTagType = {
	0 : 'ATType_None',
	1 : 'ATType_Damage',
	2 : 'ATType_Healing',
	3 : 'ATType_Support',
	4 : 'ATType_Num',
}

EPlayerStateMachine = {
	0 : 'None',
	1 : 'Main',
	2 : 'AimBody',
	3 : 'AimOffset',
}

ESBAimDirection = {
	0 : 'None',
	1 : 'Camera',
	2 : 'TargetComponent',
	3 : 'LockonTargetComponent',
	4 : 'GuardDirection',
	5 : 'Fixed',
}

ESBAppearEffectType = {
	0 : 'None',
	1 : 'Warp',
	2 : 'LocalWarp',
	3 : 'Respawn',
}

ESBAttackType = {
	0 : 'Attack_Light',
	1 : 'Attack_LightSpecial',
	2 : 'Attack_High',
	3 : 'Attack_HighSpecial',
	4 : 'Attack_Num',
}

ESBClassType = {
	0 : 'None',
	1 : 'ShadowAvatar',
	2 : 'SwordSlayer',
	3 : 'Artist',
	4 : 'Gunslinger',
	5 : 'Splash',
	6 : 'Blaster',
	7 : 'Berserker',
	8 : 'Engineer',
	9 : 'Striker',
	10 : 'Slayer',
	11 : 'Magician',
	12 : 'Rebellion',
	13 : 'ShortRanger',
	14 : 'LongRanger',
	15 : 'ImagineTrans',
	16 : 'Vanguard',
	17 : 'Sentinel',
	18 : 'HeavyArm',
	19 : 'Max',
}

ESBDisappearEffectType = {
	0 : 'None',
	1 : 'Warp',
	2 : 'Death',
	3 : 'FallDeath',
}

ESBHostility = {
	0 : 'Unknown',
	1 : 'Friendly',
	2 : 'Hostility',
	3 : 'HostilityNotAttack',
	4 : 'Max',
}

ESBMoveInputDirection = {
	0 : 'None',
	1 : 'Front',
	2 : 'Right',
	3 : 'Left',
	4 : 'Back',
	5 : 'Neutral',
}

ESBOnlineStatus = {
	0 : 'Online',
	1 : 'PlayingDemo',
	2 : 'InParty',
	3 : 'BuildingParty',
	4 : 'ApplyingInstance',
	5 : 'InInstance',
	6 : 'Busy',
	7 : 'AFK',
	8 : 'PlayInterruptQuest',
	32 : 'Max',
}

ESBPlayerActiveArtsSlotType = {
	0 : 'Slot1',
	1 : 'Slot2',
	2 : 'Slot3',
	3 : 'Slot4',
	4 : 'Max',
}

ESBPlayerArtsType = {
	0 : 'Active',
	1 : 'Passive',
	2 : 'Max',
}

ESBPlayerDamageCollisionTransformType = {
	0 : 'None',
	1 : 'Stand',
	2 : 'LieOnGround',
}

ESBPlayerPassiveArtsSlotType = {
	0 : 'Slot1',
	1 : 'Slot2',
	2 : 'Slot3',
	3 : 'Max',
}

ESBPlayerPassiveImagineSlotType = {
	0 : 'Slot1',
	1 : 'Slot2',
	2 : 'Slot3',
	3 : 'Slot4',
	4 : 'Slot5',
	5 : 'Max',
}

ESBPlayerSkillActionType = {
	0 : 'None',
	1 : 'MainAction',
	2 : 'SubAction',
	3 : 'TacticalSkill',
	4 : 'SpecialSkill',
	5 : 'DodgeAction',
	6 : 'ImagineArts',
}

ESBPlayerTransformCharacter = {
	0 : 'None',
	1 : 'Nappo',
}

ESBPlayerWarpType = {
	0 : 'Unknown',
	1 : 'PartyMigration',
}

ESkillActionPosition = {
	0 : 'SAP_Main',
	1 : 'SAP_Sub',
	2 : 'SAP_Skill1',
	3 : 'SAP_Skill2',
	4 : 'SAP_Skill3',
	5 : 'SAP_Skill4',
	6 : 'SAP_Special',
	7 : 'SAP_Dodge',
	8 : 'SAP_ImagineArts',
	9 : 'SAP_ImagineArts2',
	10 : 'SAP_ImagineMount',
	11 : 'SAP_Num',
	0 : 'Begin',
	10 : 'End',
}

EStaminaType = {
	0 : 'None',
	1 : 'Jump',
	2 : 'Dash',
	3 : 'Num',
}

ESBEnhanceErrorCode = {
	0 : 'SUCCESS',
	1 : 'UNKNOWN_ERROR',
	2 : 'LACK_RESOURCE',
	3 : 'LACK_ENGRAM',
	4 : 'NOT_WEAPON',
	5 : 'MAX_ENHANCED',
	6 : 'EQUIPED_WEAPON',
	7 : 'NOT_FOUND',
}

ESBFollowStatusType = {
	0 : 'None',
	1 : 'Follow',
	2 : 'Followed',
	3 : 'MutualFollow',
}

ESBPlayRateSwitch = {
	0 : 'Continue',
	1 : 'Variable',
	2 : 'Normal',
	3 : 'Toggle',
}

ESBProfilePublicSettingType = {
	0 : 'All',
	1 : 'Community',
	2 : 'Guild',
	3 : 'Private',
}

ESBTensionTagType = {
	0 : 'None',
	1 : 'AlwayPartyOK',
	2 : 'GoToDungeon',
	3 : 'Busy',
	4 : 'WelcomeFollow',
	5 : 'CanTrade',
	6 : 'RecruitPTM',
	7 : 'DoQuest',
	8 : 'DoPVP',
	9 : 'WillHelp',
	10 : 'RecruitGM',
	11 : 'NeedHelp',
	12 : 'Max',
}

EProjectileAreaAttackSpawnOrder = {
	0 : 'Random',
	1 : 'Near',
	2 : 'Far',
}

EProjectileChangeDamageName = {
	0 : 'None',
	1 : 'SpawnLength',
	2 : 'TotalLength',
	3 : 'RemainLifeTime',
	4 : 'RemainLifeTimeRate',
	5 : 'ElapsedLifeTime',
	6 : 'ElapsedLifeTimeRate',
	7 : 'TargetLength',
	8 : 'TargetLengthDirect',
}

FProjectileBeamDirection = {
	0 : 'ActorRotation',
	1 : 'PlayerReticle',
	2 : 'InstigatorRotation',
}

FProjectilePartyShotTargetType = {
	0 : 'AllPartyMember',
	1 : 'OnlyMyself',
}

EAlimentTargetSide = {
	0 : 'All',
	1 : 'OnlyEnemy',
	2 : 'OnlyFriend',
}

ECollisionOnOff = {
	0 : 'On',
	1 : 'Off',
}

EHitEffectSpawnPosType = {
	0 : 'HitPosition',
	1 : 'SocketPosition',
	2 : 'ActorPosition',
	3 : 'InstigatorPosition',
}

EHitEffectSpawnRotType = {
	0 : 'None',
	1 : 'ActorRotation',
	2 : 'HitActorRotation',
	3 : 'HitActorNormal',
	4 : 'HitActorSocketRotation',
}

EMuzzleEffectSpawnPosType = {
	0 : 'SpawnPos',
	1 : 'Inventory0',
	2 : 'Inventory1',
}

EMuzzleEffectSpawnRotType = {
	0 : 'ProjectileDir',
	1 : 'TargetDir',
	2 : 'Inventory0',
	3 : 'Inventory1',
}

EProjectileEffectType = {
	0 : 'Hit',
	1 : 'GroundHit',
	2 : 'Muzzle',
	3 : 'SelfDead',
	4 : 'InstantTrail',
	5 : 'ShieldHit',
	6 : 'DurabilityZero',
}

EProjectileShareHitKey = {
	0 : 'Instigator',
	1 : 'Spawner',
}

ESBProjectileBeamDirectingType = {
	0 : 'BeamModule',
	1 : 'BeamMesh',
	2 : 'BeamParticle',
}

ESelfDeadEffectSpawnRotType = {
	0 : 'None',
	1 : 'ProjectileDir',
	2 : 'TargetDir',
}

EHomingType = {
	0 : 'HomingAcceleration',
	1 : 'HomingCorrectionAngle',
	2 : 'HomingCorrectionVerticalAngle',
}

EProjectileForecastState = {
	0 : 'None',
	1 : 'WaitForecast',
	2 : 'Forecast',
	3 : 'WaitMain',
	4 : 'Main',
	5 : 'End',
}

EChainPosInheritanceType = {
	0 : 'ActorPos',
}

EChainRotInheritanceType = {
	0 : 'ActorRot',
}

EDamageSide = {
	0 : 'OnlyEnemy',
	1 : 'OnlyFriend',
	2 : 'OnlyTargetEnemy',
	3 : 'OnlyTargetFriend',
	4 : 'Self',
	5 : 'All',
}

EDamageType = {
	0 : 'None',
	1 : 'HPDamage',
	2 : 'HPRecovery',
	3 : 'HPDamageMPRecovery',
	4 : 'HPDamageMPRateRecovery',
	5 : 'HPFixDamage',
	6 : 'HPFixRateDamage',
	7 : 'HPFixRecovery',
	8 : 'HPFixRateRecovery',
	9 : 'Resurrection',
	10 : 'PerfectResurrection',
	11 : 'MPRecovery',
}

EProjectileAttachTarget = {
	0 : 'None',
	1 : 'Invoker',
	2 : 'Target',
	3 : 'Spawner',
}

EProjectileAttackKind = {
	0 : 'Straight',
	1 : 'Parabola',
	2 : 'AlongGround',
	3 : 'Fix',
	4 : 'Fix_disponly',
	5 : 'Beam',
	6 : 'RapidShot',
	7 : 'WideShot',
	8 : 'Forecast',
	9 : 'AreaAttack',
	10 : 'PartyShot',
	11 : 'CustomBP_DEF',
}

EProjectileAttackType = {
	0 : 'NearAttack',
	1 : 'MagicAttack',
}

EProjectileBaseDir = {
	0 : 'OwnerRotation',
	1 : 'InstigatorRotation',
	2 : 'SpawnerRotation',
}

EProjectileChangeDamage = {
	0 : 'None',
	1 : 'Relative',
	2 : 'HitActorType',
}

EProjectileChargeLevel = {
	0 : 'Level0',
	1 : 'Level1',
	2 : 'Level2',
	3 : 'Level3',
}

EProjectileDirection = {
	0 : 'TargetDirection',
	1 : 'ProjectileDirection',
	2 : 'FixDirection',
	3 : 'SocketDirection',
	4 : 'ScreenViewDirection',
}

EProjectileEffectAttachTargetType = {
	0 : 'Owner',
	1 : 'Mesh',
}

EProjectileHitActorType = {
	0 : 'None',
	1 : 'SBPlayer',
	2 : 'SBEnemy',
}

EProjectileHitChainChangeTarget = {
	0 : 'InheritanceTarget',
	1 : 'ChangeInvoker',
}

EProjectileHitPossibleType = {
	0 : 'SamePlayer',
	1 : 'All',
	2 : 'NoHit',
}

EProjectileHitRelative = {
	0 : 'Unknown',
	1 : 'Enemy',
	2 : 'Friend',
}

EProjectileHomingConfigType = {
	0 : 'Default',
	1 : 'On',
	2 : 'Off',
}

EProjectileInstantType = {
	0 : 'OnlyTarget',
	1 : 'BetweenTarget',
	2 : 'FixDistance',
	3 : 'Instigator',
}

EProjectileNetworkRoleType = {
	0 : 'ReplicatedAuthority',
	1 : 'ReplicatedSimulated',
	2 : 'ReplicatedDelegateHitAuthority',
	3 : 'ReplicatedDelegateHitSimulated',
	4 : 'RemoteClientAuthority',
	5 : 'RemoteClientSimulated',
	6 : 'RemoteClientFromTargetAuthority',
	7 : 'RemoteClientFromTargetSimulated',
	8 : 'LocalAuthority',
}

EProjectileNetworkSpawnType = {
	0 : 'AutoSetting',
	1 : 'SendToAllFromRemoteSpawn',
	2 : 'SendToAllFromTargetClient',
	3 : 'SendToServerFromDelegateHitAuth',
	4 : 'SendToServerFromReplicate',
	5 : 'OnlyClientSpawn',
}

EProjectileNonTargetAction = {
	0 : 'ForwardInvoker',
	1 : 'Invoker',
	2 : 'ScreenViewDirection',
}

EProjectileSwitchMoveType = {
	0 : 'Default',
	1 : 'ExternalControl',
}

EProjectileWideShotLocation = {
	0 : 'OwnerActor',
}

EProjectileWideShotRotation = {
	0 : 'OwnerActor',
}

ESBProjectileAttachRule = {
	0 : 'SendWorldAttachWorld',
	1 : 'SendWorldConvLocalAttachLocal',
}

ESBProjectileCollisionSpecificGroup = {
	0 : 'None',
	1 : 'Group01',
	2 : 'Group02',
	3 : 'Group03',
	4 : 'Group04',
}

ESBProjectileCollisionSpecificUseType = {
	0 : 'Default',
	1 : 'UseAsDamageCollision',
}

ESBProjectileCompTickType = {
	0 : 'AuthorityOnly',
	1 : 'ExcludeServer',
	2 : 'ServerAndClient',
	3 : 'NotServerAndClient',
}

ESBProjectileHitResult = {
	0 : 'Success',
	1 : 'Success_Simulate',
	2 : 'Failed',
	3 : 'Failed_Avoid',
}

ESBProjectileMeshCollisionType = {
	0 : 'Cylinder',
	1 : 'Custom',
}

ESBProjectileSplashSize = {
	0 : 'Small',
	1 : 'Big',
}

ESBRapidChangeTargetType = {
	0 : 'NoChangeTarget',
	1 : 'SeqRapidNumChagneTarget',
	2 : 'SeqOneFireChangeTarget',
}

ESBRapidLotTarget = {
	0 : 'NoLot',
	1 : 'Sequence',
	2 : 'Ramdom',
}

ESpawnRotType = {
	0 : 'FaceTarget',
	1 : 'AttackDirection',
	2 : 'SameOwner',
	3 : 'SameSocket',
	4 : 'InheritanceSpawnPos',
	5 : 'Up',
	6 : 'Down',
	7 : 'None',
}

ESpawnType = {
	0 : 'ActorSocket',
	1 : 'ActorRoot',
	2 : 'SpawnerSocket',
	3 : 'SpawnerWeaponSocket',
	4 : 'SpawnerRootOffsetPosOnDir',
	5 : 'SpawnerRoot',
	6 : 'WeaponSocket',
	7 : 'WeaponSocketL',
	8 : 'WeaponRoot',
	9 : 'TargetCompOffsetPosOnDir',
	10 : 'TargetComponent',
	11 : 'TargetPoint',
	12 : 'FixPoint',
	13 : 'ForwardActor',
}

EQuestUnlockConditionType = {
	0 : 'Unknown',
	1 : 'SpecificQuestStatus',
	2 : 'QuestStepArrived',
	3 : 'AnyClassLevel',
	4 : 'ScenarioFlag',
	5 : 'Num',
}

EStorageApiType = {
	0 : 'UseItems',
	1 : 'DropItems',
	2 : 'MoveItems',
}

EQuestConditionType = {
	0 : 'Unknown',
	1 : 'TalkNpc',
	2 : 'KillEnemy',
	3 : 'CollectItem',
	4 : 'ClearID',
	5 : 'ArriveAt',
	6 : 'PayedMoney',
	7 : 'Emote',
	8 : 'WarpPortal',
	9 : 'Interaction',
	10 : 'CraftItem',
	11 : 'AdventurerRankUp',
	12 : 'AnyCondition',
	13 : 'CollectTriggerByEnemy',
	14 : 'CollectTriggerByGather',
	15 : 'CollectTrigger',
	16 : 'Num',
}

EQuestListFilterType = {
	0 : 'MainQuest',
	1 : 'SubQuest',
	2 : 'ClassQuest',
	3 : 'ExtraQuest',
	4 : 'ReleaseFunctionQuest',
	5 : 'Num',
}

EAcceptedQuestErrorCode = {
	0 : 'None',
	1 : 'Error',
	2 : 'AlreadyAccepted',
	3 : 'PreconditionError',
	4 : 'Num',
}

EQuestCategory1 = {
	0 : 'Unknown',
	1 : 'Normal',
	2 : 'Interrupt',
}

EQuestCategory2 = {
	0 : 'Unknown',
	1 : 'Main',
	2 : 'Sub',
	3 : 'Extra',
	4 : 'Class',
	5 : 'ReleaseFunctions',
}

EQuestCategory3 = {
	0 : 'Unknown',
	1 : 'Errand',
	2 : 'Slay',
	3 : 'Collect',
	4 : 'Traverse',
}

EQuestCompleteResult = {
	0 : 'Success',
	1 : 'InvalidRequest',
	2 : 'InventoryNotCapacity',
	3 : 'EnougthDeliverables',
	4 : 'PreconditionError',
}

EQuestContributionRank = {
	0 : 'None',
	1 : 'Bronze',
	2 : 'Silver',
	3 : 'Gold',
	4 : 'Num',
}

EQuestIconType = {
	0 : 'None',
	1 : 'Start',
	2 : 'Target',
	3 : 'Report',
	4 : 'Stopping',
	5 : 'Num',
}

EQuestRewardCategory = {
	0 : 'Common',
	1 : 'Choice',
	2 : 'Contribution',
	3 : 'Num',
}

EQuestStatus = {
	0 : 'QuestStatus_Locked',
	1 : 'QuestStatus_NotReceived',
	2 : 'QuestStatus_Proceeding',
	3 : 'QuestStatus_Done',
	4 : 'QuestStatus_Close',
	5 : 'QuestStatus_Num',
}

ERaidBattleGameResult = {
	0 : 'Unknown',
	1 : 'Sucs',
	2 : 'Failed',
}

ERaidBattleGameStatus = {
	0 : 'Idle',
	1 : 'Loading',
	2 : 'Loaded',
	3 : 'Running',
	4 : 'Done',
}

ERoomMakeFunction = {
	0 : 'RoomMakeRandom',
	1 : 'RoomMakeStart',
	2 : 'RoomMakeGoal',
	3 : 'RoomMakeEnemy',
	4 : 'RoomMakeTrap',
	5 : 'RoomMakeCollect',
	6 : 'Max',
}

ESBConnectWayType = {
	0 : 'ConnectOneRight',
	1 : 'ConnectOneLeft',
	2 : 'ConnectOneTop',
	3 : 'ConnectOneBottom',
	4 : 'ConnectTwoRightBottom',
	5 : 'ConnectTwoLeftBottom',
	6 : 'ConnectTwoRightUp',
	7 : 'ConnectTwoLeftUp',
	8 : 'ConnectThreeRightUpBottom',
	9 : 'ConnectThreeRightLeftBottom',
	10 : 'ConnectThreeRightLeftUp',
	11 : 'ConnectThreeLeftUpBottom',
	12 : 'ConnectThreeFourAll',
	13 : 'Max',
}

ESBQuest = {
	1 : 'CheckableNum',
}

RAID_BATTLE_SCORE = {
	0 : 'RAID_BATTLE_SCORE_MOST_DAMAGE',
	1 : 'RAID_BATTLE_SCORE_INSTANTANEOUS_DAMAGE',
	2 : 'RAID_BATTLE_SCORE_MOST_BUFF',
	3 : 'RAID_BATTLE_SCORE_MOST_RESUSCITATION',
	4 : 'RAID_BATTLE_SCORE_MOST_DEBUFF',
	5 : 'RAID_BATTLE_SCORE_GIMMICK_ATTACK',
	6 : 'RAID_BATTLE_SCORE_TARGET_KILL',
	7 : 'RAID_BATTLE_SCORE_MOST_TAKE_HITS',
	8 : 'RAID_BATTLE_SCORE_MAX',
}

ERewardType = {
	0 : 'Invalid',
	1 : 'Money',
	2 : 'Engram',
	3 : 'BP',
	4 : 'Item',
	5 : 'Weapon',
	6 : 'Costume',
	7 : 'Imagine',
	8 : 'ClassExp',
	9 : 'BonusSkillPoint',
	10 : 'ClassSkillPoint',
	11 : 'MountImagine',
	12 : 'Num',
}

ESBClassRepNodeMapping = {
	0 : 'NotRouted',
	1 : 'RelevantAllConnections',
	2 : 'Connection_CityPlayerCharacter',
	3 : 'Connection_CityPlayerState',
	4 : 'Connection_CityRepTest',
	5 : 'Connection_FieldEnemyCharacter',
	6 : 'Spatialize_Static',
	7 : 'Spatialize_Dynamic',
	8 : 'Spatialize_Dormancy',
}

ESBRewardType = {
	0 : 'REWARD_TYPE_LUNO',
	1 : 'REWARD_TYPE_GC',
	2 : 'REWARD_TYPE_EXP',
	3 : 'REWARD_TYPE_ITEM',
	4 : 'REWARD_TYPE_WEAPON',
	5 : 'REWARD_TYPE_COSTUME',
	6 : 'REWARD_TYPE_IMAGINE_SEED',
	7 : 'REWARD_TYPE_MOUNT',
	8 : 'REWARD_TYPE_MISSION_COIN',
	9 : 'REWARD_TYPE_EMOTE',
	10 : 'REWARD_TYPE_STAMP',
	11 : 'REWARD_TYPE_IMAGINE_RECIPE',
	12 : 'REWARD_TYPE_BONUS_SKILL_POINT',
	13 : 'REWARD_TYPE_CLASS_SKILL_POINT',
	14 : 'REWARD_TYPE_ACHIEVEMENT',
	15 : 'REWARD_TYPE_LIQUID_MEMORY',
}

ESBRouteGuideArea = {
	0 : 'AreaNONE',
	1 : 'AreaRED',
	2 : 'AreaGREEN',
	3 : 'AreaBLUE',
	4 : 'AreaALL',
}

ESBConnectGameServerFailure = {
	0 : 'None',
	1 : 'Unknown',
	2 : 'NotFound',
}

ESBScriptStatus = {
	0 : 'None',
	1 : 'Ready',
	2 : 'Running',
}

ESBScriptVariableType = {
	0 : 'Integer',
	1 : 'Boolean',
	2 : 'String',
}

ESerialCodeRewardType = {
	0 : 'Money',
	1 : 'Engram',
	2 : 'Item',
	3 : 'Weapon',
	4 : 'Costume',
}

ESerialCodeType = {
	0 : 'AllOnce',
	1 : 'OnlyOnce',
}

EShopType = {
	0 : 'Item',
	1 : 'Weapon',
	2 : 'Protector',
	3 : 'General',
	4 : 'Exchange',
}

EShortcutIconType = {
	0 : 'F1',
	1 : 'F2',
	2 : 'F3',
	3 : 'F4',
	4 : 'F5',
	5 : 'F6',
	6 : 'F7',
	7 : 'F8',
	8 : 'Num',
}

EShortcutType = {
	0 : 'None',
	1 : 'OwnItem',
	2 : 'Imagine',
	3 : 'Emotion',
	4 : 'Stamp',
	5 : 'Supply',
	6 : 'FixedPhrase',
}

ESimpleAlertType = {
	0 : 'NotEnoughStamina',
	1 : 'Recasting',
	2 : 'NotRemainCount',
	3 : 'NoBullet',
	4 : 'NeedLockOn',
	5 : 'NotEnoughShieldDurability',
	6 : 'NotEnoughMagicPoint',
	7 : 'CannotFireBuffAmmo',
	8 : 'NotEnoughSpecialSkillGauge',
	9 : 'InvalidMarkerLocation',
	10 : 'BattleAreaCloseSoon',
	11 : 'ShieldIsBroken',
}

ESBMuscleMass = {
	0 : 'Default',
	1 : 'Low',
	2 : 'High',
	3 : 'MAX',
}

ESkillProjectileType = {
	0 : 'Base',
	1 : 'GunslingerNormal',
	2 : 'GunslingerAllyBuff',
	3 : 'GunslingerLockOnHoming',
	4 : 'GunslingerCharge',
	5 : 'SplashPoisonShot',
	6 : 'SplashHealShot',
	7 : 'EngineerSprayGun',
	8 : 'EngineerShotGun',
	9 : 'EngineerHealGadget',
}

ESBAIObjective = {
	0 : 'Normal',
	1 : 'Fight',
	2 : 'Flee',
	3 : 'Custom',
}

ESBAccumulateStatusAilmentType = {
	0 : 'Fire',
	1 : 'Ice',
	2 : 'Earth',
	3 : 'Thunder',
	4 : 'None',
	5 : 'Num',
}

ESBEnemyStatusAilmentType = {
	0 : 'None',
	1 : 'Invincible',
	2 : 'FullHeal',
	3 : 'AutoHeal',
	4 : 'Num',
}

ESBHitSESize = {
	0 : 'Small',
	1 : 'Middle',
	2 : 'Large',
}

ESBStatusAilmentConditionTarget = {
	0 : 'None',
	1 : 'HP',
	2 : 'LastHitElapsedTime',
	3 : 'SpecialGauge',
	4 : 'Num',
}

ESBStatusAilmentConditionType = {
	0 : 'AnyTime',
	1 : 'GreaterThanValue',
	2 : 'NotGreaterThanValue',
	3 : 'LessThanValue',
	4 : 'GreaterThanValueRate',
	5 : 'NotGreaterThanValueRate',
	6 : 'LessThanValueRate',
	7 : 'OKDispel',
	8 : 'ActiveStatusFlag',
	9 : 'DiactiveStatusFlag',
	10 : 'ActiveStatusHandle',
	11 : 'DiactiveStatusHandle',
	12 : 'ActiveStatusParts',
	13 : 'DeadInstigator',
	14 : 'SkillAttack',
	15 : 'ActiveParts',
	16 : 'DeactiveParts',
	17 : 'ActiveBattleMode',
	18 : 'DeactiveBattleMode',
	19 : 'InWater',
	20 : 'OutWater',
	21 : 'InBattleMap',
	22 : 'NotInBattleMap',
	23 : 'Num',
}

ESBStatusAilmentIconType = {
	0 : 'None',
	1 : 'FireLv1',
	2 : 'FireLv2',
	3 : 'FireLv3',
	4 : 'IceLv1',
	5 : 'IceLv2',
	6 : 'IceLv3',
	7 : 'ThunderLv1',
	8 : 'ThunderLv2',
	9 : 'ThunderLv3',
	10 : 'EarthLv1',
	11 : 'EarthLv2',
	12 : 'EarthLv3',
	13 : 'LightLv1',
	14 : 'LightLv2',
	15 : 'LightLv3',
	16 : 'DarknessLv1',
	17 : 'DarknessLv2',
	18 : 'DarknessLv3',
	19 : 'Stun',
	20 : 'InvalidStun',
	21 : 'Sleep',
	22 : 'Poison',
	23 : 'Ferocious',
	24 : 'Fear',
	25 : 'Blind',
	26 : 'NoSkill',
	27 : 'Stamina0',
	28 : 'NoItem',
	29 : 'Curse',
	30 : 'Stealth',
	31 : 'Weakness',
	32 : 'Invincible',
	33 : 'GuardBreak',
	34 : 'IncreaseGiveDamage',
	35 : 'DecreaseGiveDamage',
	36 : 'IncreaseReceiveDamage',
	37 : 'DecreaseReceiveDamage',
	38 : 'Drain',
	39 : 'SuperArmor',
	40 : 'HPRegenerate',
	41 : 'MPRegenerate',
	42 : 'RapidChargeSpeed',
	43 : 'SlowChargeSpeed',
	44 : 'ExpansionSkillRecastTime',
	45 : 'ReduceSkillRecastTime',
	46 : 'RepidMoveSpeed',
	47 : 'SlowMoveSpeed',
	48 : 'Protection',
	49 : 'ComboGaugeUp',
	50 : 'EMPowerUp',
	51 : 'PhysicalResistUp',
	52 : 'PhysicalResistDown',
	53 : 'MentalResistUp',
	54 : 'MentalResistDown',
	55 : 'FireAttackPowerUp',
	56 : 'IceAttackPowerUp',
	57 : 'ThunderAttackPowerUp',
	58 : 'EarthAttackPowerUp',
	59 : 'LightAttackPowerUp',
	60 : 'DarknessAttackPowerUp',
	61 : 'FireAttackPowerDown',
	62 : 'IceAttackPowerDown',
	63 : 'ThunderAttackPowerDown',
	64 : 'EarthAttackPowerDown',
	65 : 'LightAttackPowerDown',
	66 : 'DarknessAttackPowerDown',
	67 : 'FireResistUp',
	68 : 'IceResistUp',
	69 : 'ThunderResistUp',
	70 : 'EarthResistUp',
	71 : 'LightResistUp',
	72 : 'DarknessResistUp',
	73 : 'FireResistDown',
	74 : 'IceResistDown',
	75 : 'ThunderResistDown',
	76 : 'EarthResistDown',
	77 : 'LightResistDown',
	78 : 'DarknessResistDown',
	79 : 'Fire',
	80 : 'Ice',
	81 : 'Thunder',
	82 : 'Regenerate',
	83 : 'ReduceSpecialSkillRecastTime',
	84 : 'ExpansionSpecialSkillRecastTime',
	85 : 'ReduceImagineSkillRecastTime',
	86 : 'ExpansionImagineSkillRecastTime',
}

ESBStatusAilmentRegisterState = {
	0 : 'None',
	1 : 'Additional',
	2 : 'Override',
	3 : 'Once',
}

ESBStatusAilmentSustainedType = {
	0 : 'UserAction',
	1 : 'TimeLimit',
	2 : 'Once',
}

ESBSTMasterDataType = {
	0 : 'EnemyParamMaster',
}

ESBSystemMessageFlag = {
	0 : 'None',
	1 : 'PlayerLoggedIn',
	2 : 'GetItem_Single',
	3 : 'GetItem_Plural',
	4 : 'GetItemFailure_InventoryFull',
	5 : 'HealStation_HealDone',
	6 : 'GetEmote',
	7 : 'FailedQuitGame',
	8 : 'CantOpenDuringDead',
	9 : 'CantOpenDuringBattle',
	10 : 'CantOpenDuringAction',
	11 : 'CantStartDungeonDuringDead',
	12 : 'CantStartDungeonDuringBattle',
	13 : 'FailedFieldTravel',
	14 : 'ChatErrorSendTime',
	15 : 'ChatErrorBan',
	16 : 'LevelSyncApplied',
	17 : 'MAX',
}

ESubMenuTermReason = {
	0 : 'SwitchMenu',
	1 : 'Close',
}

ESubMenuTermRequestReply = {
	0 : 'Immediate',
	1 : 'Wait',
	2 : 'Never',
}

ESystemSE = {
	0 : 'None',
	1 : 'Play_Sys_Config_mst',
	2 : 'Play_Sys_Config_bgm',
	3 : 'Play_Sys_Config_se',
	4 : 'Play_Sys_Config_vo',
	5 : 'Play_Sys_Config_sys',
	6 : 'Play_Sys_Config_env',
	7 : 'Play_Sys_Title_Start',
	8 : 'Play_Sys_ok_1',
	9 : 'Play_Sys_ok_2',
	10 : 'Play_Sys_hover',
	11 : 'Play_Sys_cancel',
	12 : 'Play_Sys_caution',
	13 : 'Play_Sys_forward',
	14 : 'Play_Sys_back',
	15 : 'Play_Sys_interact',
	16 : 'Play_Sys_open',
	17 : 'Play_Sys_count',
	18 : 'Play_Sys_alert',
	19 : 'Play_Sys_trade',
	20 : 'Play_Sys_countdown',
	21 : 'Play_Sys_warp_release',
	22 : 'Play_Sys_warp',
	23 : 'Play_Sys_warp_local',
	24 : 'Play_Sys_equip',
	25 : 'Play_Sys_imagine',
	26 : 'Play_Sys_revive',
	27 : 'Play_Sys_collect',
	28 : 'Play_Sys_recover',
	29 : 'Play_Sys_reward',
	30 : 'Play_Sys_speech',
	31 : 'Play_Sys_weaponup',
	32 : 'Play_Sys_display',
	33 : 'Play_Sys_rankup_1',
	34 : 'Play_Sys_rankup_2',
	35 : 'Play_Sys_rankup_3',
	36 : 'Play_Sys_rankup_4',
	37 : 'Play_Sys_breakthrough',
	38 : 'Play_Sys_select',
	39 : 'Play_Sys_menu_open',
	40 : 'Play_Sys_menu_close',
	41 : 'Play_Sys_window_open',
	42 : 'Play_Sys_window_close',
	43 : 'Play_Sys_itemdrop',
	44 : 'Play_Sys_item',
	45 : 'Play_Sys_max',
	46 : 'Play_Sys_chat_me',
	47 : 'Play_Sys_chat_others',
	48 : 'Play_Sys_follow',
	49 : 'Play_TUT_Target',
	50 : 'Play_TUT_Clear',
}

ESBTextIdType = {
	0 : 'Number',
	1 : 'String',
}

ETowerChallengeAchieveType = {
	0 : 'Unknown',
	1 : 'KillAllEnemy',
	2 : 'KillTargetEnemy',
	3 : 'DestructObject',
	4 : 'CorrectItem',
	5 : 'FreeCounter',
}

ESBAttribute = {
	0 : 'Attribute_0',
	1 : 'Attribute_1',
	2 : 'Attribute_2',
	3 : 'Attribute_3',
	4 : 'Attribute_4',
	5 : 'Attribute_5',
	6 : 'Attribute_6',
	7 : 'Attribute_7',
	8 : 'Max',
	0 : 'None',
	1 : 'Physics',
	2 : 'Earth',
	3 : 'Fire',
	4 : 'Ice',
	5 : 'Thunder',
	6 : 'Light',
	7 : 'Darkness',
	2 : 'Begin',
	7 : 'End',
}

ESBBanType = {
	0 : 'BAN_TYPE_NONE',
	1 : 'BAN_TYPE_CHAT',
	2 : 'BAN_TYPE_LOGIN',
}

ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues = {
	0 : 'Changeable',
	1 : 'UnChangeable_IsInMission',
	2 : 'UnChangeable_IsInBattleMode',
	3 : 'UnChangeable_IsMounting',
}

ESBDayTime = {
	0 : 'Morning',
	1 : 'Noon',
	2 : 'Evening',
	3 : 'Night',
	4 : 'Max',
}

ESBMapUIType = {
	0 : 'MapUITypeNone',
	1 : 'MapUITypeMapBlur',
	2 : 'MapUITypeMapBlurAndLocation',
	3 : 'MapUITypeMapLandscapeAndLocation',
}

ESBMiniMapIconType = {
	0 : 'MiniMapIconTypePlayer',
	1 : 'MiniMapIconTypePartyPlayer',
	2 : 'MiniMapIconTypePartyPlayerDead',
	3 : 'MiniMapIconTypeEnemy',
	4 : 'MiniMapIconTypeNamedEnemy',
	5 : 'MiniMapIconTypeBossEnemy',
	6 : 'MiniMapIconTypeTargetEnemy',
	7 : 'MiniMapIconTypeWeaponShop',
	8 : 'MiniMapIconTypeItemShop',
	9 : 'MiniMapIconTypePeddler',
	10 : 'MiniMapIconTypeQuestNpc',
	11 : 'MiniMapIconTypeCraft',
	12 : 'MiniMapIconTypeClassChange',
	13 : 'MiniMapIconTypeCoinHouse',
	14 : 'MiniMapIconTypeDungeonGate',
	15 : 'MiniMapIconTypeWorldWerp',
	16 : 'MiniMapIconTypeLocalWerp',
	17 : 'MiniMapIconTypeMainQuestOrder',
	18 : 'MiniMapIconTypeSubQuestOrder',
	19 : 'MiniMapIconTypeMainQuestReport',
	20 : 'MiniMapIconTypeSubQuestReport',
	21 : 'MiniMapIconTypeMainQuestStopping',
	22 : 'MiniMapIconTypeSubQuestStopping',
	23 : 'MiniMapIconTypeMainQuestProgress',
	24 : 'MiniMapIconTypeSubQuestProgress',
	25 : 'MiniMapIconTypeIntrruptQuest',
	26 : 'MiniMapIconTypePin',
	27 : 'MiniMapIconTypeSyntheShop',
	28 : 'MiniMapIconTypeAesthe',
	29 : 'MiniMapIconTypeDyeingShop',
	30 : 'MiniMapIconTypeImagineLaboratory',
	31 : 'MiniMapIconTypeTradeShop',
	32 : 'MiniMapIconTypeRestaurant',
	33 : 'MiniMapIconTypeChallengeBox',
	34 : 'MiniMapIconTypeArena',
	35 : 'MiniMapIconTypeWarehouse',
	36 : 'MiniMapIconTypeGuild',
	37 : 'MiniMapIconTypeGachaShop',
	38 : 'MiniMapIconTypeExtraQuestOrder',
	39 : 'MiniMapIconTypeExtraQuestReport',
	40 : 'MiniMapIconTypeExtraQuestProgress',
	41 : 'MiniMapIconTypeExtraQuestStopping',
	42 : 'MiniMapIconTypeBase',
	43 : 'MiniMapIconTypeQuestArea',
	44 : 'MiniMapIconTypeNum',
}

ESBPlayGameMode = {
	0 : 'Unknown',
	1 : 'Scenario',
	2 : 'Battle',
}

ESBRarity = {
	0 : 'Common',
	1 : 'Uncommon',
	2 : 'Rare',
	3 : 'Epic',
	4 : 'Legend',
	5 : 'Max',
}

ESBTutorialHelpCategoryType = {
	0 : 'None',
	1 : 'City',
	2 : 'Field',
	3 : 'Battle',
	4 : 'Multiplay',
	5 : 'Other',
}

ESBTutorialHelpTextDispType = {
	0 : 'None',
	1 : 'Top',
	2 : 'Bottom',
}

ESBUIKeyConfigAction = {
	0 : 'Unknown',
	1 : 'MainAction',
	2 : 'SubAction',
	3 : 'LeftSkill',
	4 : 'RightSkill',
	5 : 'Skill1',
	6 : 'Skill2',
	7 : 'Skill3',
	8 : 'Skill4',
	9 : 'SpecialSkill',
	10 : 'Jump',
	11 : 'Dodge',
	12 : 'Dash',
	13 : 'Interaction',
	14 : 'Reload',
	15 : 'CameraReset',
	16 : 'CommandMenu',
	17 : 'ChatMode',
	18 : 'LockOn',
	19 : 'LockOnLeft',
	20 : 'LockOnRight',
	21 : 'ImagineArts',
	22 : 'ImagineArts2',
	23 : 'ImagineMount',
	24 : 'MoveFront',
	25 : 'MoveBack',
	26 : 'MoveLeft',
	27 : 'MoveRight',
	28 : 'Walk',
	29 : 'CameraPitchUp',
	30 : 'CameraPitchDown',
	31 : 'CameraYawLeft',
	32 : 'CameraYawRight',
	33 : 'CameraZoomIn',
	34 : 'CameraZoomOut',
	35 : 'Shortcut1',
	36 : 'Shortcut2',
	37 : 'Shortcut3',
	38 : 'Shortcut4',
	39 : 'Shortcut5',
	40 : 'Shortcut6',
	41 : 'Shortcut7',
	42 : 'Shortcut8',
	43 : 'ShortcutPageNext',
	44 : 'ShortcutPageBack',
	45 : 'Function',
	46 : 'Function2',
	47 : 'QuickAccess_MyCharacter',
	48 : 'QuickAccess_Inventory',
	49 : 'QuickAccess_Quest',
	50 : 'QuickAccess_Map',
	51 : 'QuickAccess_Library',
	52 : 'QuickAccess_Contents',
	53 : 'QuickAccess_Party',
	54 : 'QuickAccess_Guild',
	55 : 'QuickAccess_Gacha',
	56 : 'QuickAccess_Option',
	57 : 'QuickAccess_Photo',
	58 : 'QuickAccess_Hud',
	59 : 'QuickAccess_Communicate',
	60 : 'AutoRun',
	61 : 'SupplyShortcut1',
	62 : 'SupplyShortcut2',
	63 : 'SupplyShortcut3',
	64 : 'SupplyShortcut4',
	65 : 'ShortcutRing',
	66 : 'KeyConfigActionMax',
}

ESBUiAkEventCategory = {
	0 : 'Default',
	1 : 'Positive',
	2 : 'Negative',
	3 : 'Max',
}

ESBMouseCursorType = {
	0 : 'Default',
	1 : 'MapPin',
	2 : 'MapEraser',
	3 : 'Max',
}

ESBSkillType = {
	0 : 'Main',
	1 : 'Sub',
	2 : 'Skill1',
	3 : 'Skill2',
	4 : 'Skill3',
	5 : 'Skill4',
	6 : 'Special',
	7 : 'Dodge',
	8 : 'Pasive1',
	9 : 'Pasive2',
	10 : 'Max',
}

ESBUIBlockerType = {
	0 : 'Default',
	1 : 'CommandMenu',
	2 : 'MAX',
}

ESBUIType = {
	0 : 'DamageUI',
	1 : 'TargetCursor',
	2 : 'NamePlate',
	3 : 'BalloonWindow',
	4 : 'BattleHUD',
	5 : 'PlayerGauge',
	6 : 'SkillPalette',
	7 : 'MiniMap',
	8 : 'ChatWindow',
	9 : 'AcceptedQuest',
	10 : 'TutorialCtrlGuide',
	11 : 'LevelUpDisplay',
	12 : 'StepList',
	13 : 'TickerMessage',
	14 : 'TextWindow',
	15 : 'SelectWindow',
	16 : 'DungeonFinder',
	17 : 'QuestUpdateProgressInfo',
	18 : 'QuestClearInfo',
	19 : 'QuestBoard',
	20 : 'DungeonResult',
	21 : 'MainMenu',
	22 : 'VanguardHUD',
	23 : 'WizardHUD',
	24 : 'SwordSlayerHUD',
	25 : 'GunslingerHUD',
	26 : 'SplashHUD',
	27 : 'BlasterHUD',
	28 : 'BerserkerHUD',
	29 : 'EngineerHUD',
	30 : 'StrikerHUD',
	31 : 'SlayerHUD',
	32 : 'MagicianHUD',
	33 : 'RebellionHUD',
	34 : 'HealChainUI',
	35 : 'DebugMenu',
	36 : 'DebugCameraAdjust',
	37 : 'DebugCameraRotationSpeed',
	38 : 'Num',
}

ESBUIVisibleSettingOwner = {
	0 : 'DebugMenu',
	1 : 'WarpAroundEffect',
}

ESBWorldUIType = {
	0 : 'NormalBattle',
	1 : 'OfflineBattle',
	2 : 'ShadowAvatarBattle',
	3 : 'Unknown',
	4 : 'Max',
}

EUIZOrder = {
	0 : 'DamageUI',
	1 : 'TargetCursor',
	2 : 'BalloonWindow',
	3 : 'BalloonWindowSelf',
	4 : 'HUD_Layer1',
	5 : 'HUD_Layer2',
	6 : 'HUD_Layer3',
	7 : 'HUD_Layer4',
	8 : 'HUD_Layer5',
	9 : 'HUD_Layer6',
	10 : 'HUD_Layer7',
	11 : 'HUD_Layer8',
	12 : 'HUD_Layer9',
	13 : 'HUD_Layer10',
	14 : 'HUD_Layer11',
	15 : 'HUD_Layer12',
	16 : 'HUD_Layer13',
	17 : 'TickerMessage',
	18 : 'TextWindow',
	19 : 'DungeonFinder',
	20 : 'QuestUpdateProgressInfo',
	21 : 'QuestClearInfo',
	22 : 'DropDownText',
	23 : 'LevelUpUI',
	24 : 'QuestBoard',
	25 : 'QuestReportWindow',
	26 : 'MainMenu',
	27 : 'SubMenu',
	28 : 'Menu_Layer3',
	29 : 'Menu_Layer4',
	30 : 'Menu_Layer5',
	31 : 'Menu_Layer6',
	32 : 'Menu_Layer7',
	33 : 'Menu_Layer8',
	34 : 'Menu_Layer9',
	35 : 'Menu_Layer10',
	36 : 'Menu_Layer11',
	37 : 'Menu_Layer12',
	38 : 'Menu_Layer13',
	39 : 'Menu_Layer14',
	40 : 'Menu_Layer15',
	41 : 'Menu_Layer16',
	42 : 'Menu_Layer17',
	43 : 'Menu_Layer18',
	44 : 'Menu_Layer19',
	45 : 'Notifications',
	46 : 'MyMoneyUI',
	47 : 'QuestJingle',
	48 : 'SystemMessage',
	49 : 'YesNoPopup',
	50 : 'Dialog',
	51 : 'OverlayMessage',
	52 : 'FadeFilter',
	53 : 'LoadingScreen',
	54 : 'SystemDialog',
	55 : 'Debug',
	56 : 'Num',
}

ESBUtilityScoreFunction = {
	0 : 'Constant',
	1 : 'Linear',
}

ESBUtilityScoreOperator = {
	0 : 'Min',
	1 : 'Max',
	2 : 'Average',
}

ESBWayPointArea = {
	0 : 'AreaNONE',
	1 : 'AreaRED',
	2 : 'AreaGREEN',
	3 : 'AreaBLUE',
	4 : 'AreaALL',
}

EEnvironmentType = {
	0 : 'Always',
	1 : 'Unsheathe',
	2 : 'Sheathe',
}

ESBWeaponAttach = {
	0 : 'WA_Right',
	1 : 'WA_Left',
	2 : 'WA_Custom0',
	3 : 'WA_Custom1',
	4 : 'WA_Custom2',
	5 : 'WA_Custom3',
	6 : 'WA_Custom4',
	7 : 'WA_Custom5',
	8 : 'WA_Num',
	255 : 'WA_Invalid',
}

ESBWeaponComponentType = {
	0 : 'WeaponComponentType_Bow',
	1 : 'WeaponComponentType_Shine',
}

ESBWeaponEquipType = {
	0 : 'WeaponEquipType_None',
	1 : 'WeaponEquipType_Main',
	2 : 'WeaponEquipType_Sub',
}

ESBWeaponHiddenConditions = {
	0 : 'WHC_OwnerHidden',
	1 : 'WHC_GuardBreak',
	2 : 'WHC_Demo',
	3 : 'WHC_Notify',
	4 : 'WHC_Num',
}

ESBWeaponShapeType = {
	0 : 'WeaponShapeType_None',
	1 : 'WeaponShapeType_Cutlery',
	2 : 'WeaponShapeType_Blunt',
}

ESBWeaponStatus = {
	0 : 'AP',
	1 : 'HP',
	2 : 'STR',
	3 : 'VIT',
	4 : 'DEX',
	5 : 'INT',
	6 : 'MND',
	7 : 'ATTR',
	8 : 'SPC',
	9 : 'Max',
}

ESBWeaponType = {
	0 : 'WeaponType_None',
	1 : 'WeaponType_HandAxe',
	2 : 'WeaponType_HandSword',
	3 : 'WeaponType_HandGun',
	4 : 'WeaponType_Rifle',
	5 : 'WeaponType_Spear',
	6 : 'WeaponType_Bow',
	7 : 'WeaponType_Staff',
	8 : 'WeaponType_Shield',
	9 : 'WeaponType_Club',
}

ESBWeaponVisibilitySlot = {
	255 : 'WVSlot_All',
	1 : 'WVSlot_Right',
	2 : 'WVSlot_Left',
	3 : 'WVSlot_Both',
	8 : 'WVSlot_SheathedShield',
	244 : 'WVSlot_Other',
	0 : 'WVSlot_None',
}

EAutomationEventType = {
	0 : 'Info',
	1 : 'Warning',
	2 : 'Error',
}

EAxis = {
	0 : 'None',
	1 : 'X',
	2 : 'Y',
	3 : 'Z',
}

EDataValidationResult = {
	0 : 'Invalid',
	1 : 'Valid',
	2 : 'NotValidated',
}

EInterpCurveMode = {
	0 : 'CIM_Linear',
	1 : 'CIM_CurveAuto',
	2 : 'CIM_Constant',
	3 : 'CIM_CurveUser',
	4 : 'CIM_CurveBreak',
	5 : 'CIM_CurveAutoClamped',
}

ELifetimeCondition = {
	0 : 'COND_None',
	1 : 'COND_InitialOnly',
	2 : 'COND_OwnerOnly',
	3 : 'COND_SkipOwner',
	4 : 'COND_SimulatedOnly',
	5 : 'COND_AutonomousOnly',
	6 : 'COND_SimulatedOrPhysics',
	7 : 'COND_InitialOrOwner',
	8 : 'COND_Custom',
	9 : 'COND_ReplayOrOwner',
	10 : 'COND_ReplayOnly',
	11 : 'COND_SimulatedOnlyNoReplay',
	12 : 'COND_SimulatedOrPhysicsNoReplay',
	13 : 'COND_SkipReplay',
	15 : 'COND_Never',
	16 : 'COND_Max',
}

ELocalizedTextSourceCategory = {
	0 : 'Game',
	1 : 'Engine',
	2 : 'Editor',
}

ELogTimes = {
	0 : 'None',
	1 : 'UTC',
	2 : 'SinceGStartTime',
	3 : 'Local',
}

EMouseCursor = {
	0 : 'None',
	1 : 'Default',
	2 : 'TextEditBeam',
	3 : 'ResizeLeftRight',
	4 : 'ResizeUpDown',
	5 : 'ResizeSouthEast',
	6 : 'ResizeSouthWest',
	7 : 'CardinalCross',
	8 : 'Crosshairs',
	9 : 'Hand',
	10 : 'GrabHand',
	11 : 'GrabHandClosed',
	12 : 'SlashedCircle',
	13 : 'EyeDropper',
}

EPixelFormat = {
	0 : 'PF_Unknown',
	1 : 'PF_A32B32G32R32F',
	2 : 'PF_B8G8R8A8',
	3 : 'PF_G8',
	4 : 'PF_G16',
	5 : 'PF_DXT1',
	6 : 'PF_DXT3',
	7 : 'PF_DXT5',
	8 : 'PF_UYVY',
	9 : 'PF_FloatRGB',
	10 : 'PF_FloatRGBA',
	11 : 'PF_DepthStencil',
	12 : 'PF_ShadowDepth',
	13 : 'PF_R32_FLOAT',
	14 : 'PF_G16R16',
	15 : 'PF_G16R16F',
	16 : 'PF_G16R16F_FILTER',
	17 : 'PF_G32R32F',
	18 : 'PF_A2B10G10R10',
	19 : 'PF_A16B16G16R16',
	20 : 'PF_D24',
	21 : 'PF_R16F',
	22 : 'PF_R16F_FILTER',
	23 : 'PF_BC5',
	24 : 'PF_V8U8',
	25 : 'PF_A1',
	26 : 'PF_FloatR11G11B10',
	27 : 'PF_A8',
	28 : 'PF_R32_UINT',
	29 : 'PF_R32_SINT',
	30 : 'PF_PVRTC2',
	31 : 'PF_PVRTC4',
	32 : 'PF_R16_UINT',
	33 : 'PF_R16_SINT',
	34 : 'PF_R16G16B16A16_UINT',
	35 : 'PF_R16G16B16A16_SINT',
	36 : 'PF_R5G6B5_UNORM',
	37 : 'PF_R8G8B8A8',
	38 : 'PF_A8R8G8B8',
	39 : 'PF_BC4',
	40 : 'PF_R8G8',
	41 : 'PF_ATC_RGB',
	42 : 'PF_ATC_RGBA_E',
	43 : 'PF_ATC_RGBA_I',
	44 : 'PF_X24_G8',
	45 : 'PF_ETC1',
	46 : 'PF_ETC2_RGB',
	47 : 'PF_ETC2_RGBA',
	48 : 'PF_R32G32B32A32_UINT',
	49 : 'PF_R16G16_UINT',
	50 : 'PF_ASTC_4x4',
	51 : 'PF_ASTC_6x6',
	52 : 'PF_ASTC_8x8',
	53 : 'PF_ASTC_10x10',
	54 : 'PF_ASTC_12x12',
	55 : 'PF_BC6H',
	56 : 'PF_BC7',
	57 : 'PF_R8_UINT',
	58 : 'PF_L8',
	59 : 'PF_XGXR8',
	60 : 'PF_R8G8B8A8_UINT',
	61 : 'PF_R8G8B8A8_SNORM',
	62 : 'PF_R16G16B16A16_UNORM',
	63 : 'PF_R16G16B16A16_SNORM',
	64 : 'PF_PLATFORM_HDR_0',
	65 : 'PF_PLATFORM_HDR_1',
	66 : 'PF_PLATFORM_HDR_2',
	67 : 'PF_NV12',
	68 : 'PF_R32G32_UINT',
	69 : 'PF_MAX',
}

ERangeBoundTypes = {
	0 : 'Exclusive',
	1 : 'Inclusive',
	2 : 'Open',
}

ESearchCase = {
	0 : 'CaseSensitive',
	1 : 'IgnoreCase',
}

ESearchDir = {
	0 : 'FromStart',
	1 : 'FromEnd',
}

EUnit = {
	0 : 'Micrometers',
	1 : 'Millimeters',
	2 : 'Centimeters',
	3 : 'Meters',
	4 : 'Kilometers',
	5 : 'Inches',
	6 : 'Feet',
	7 : 'Yards',
	8 : 'Miles',
	9 : 'Lightyears',
	10 : 'Degrees',
	11 : 'Radians',
	12 : 'MetersPerSecond',
	13 : 'KilometersPerHour',
	14 : 'MilesPerHour',
	15 : 'Celsius',
	16 : 'Farenheit',
	17 : 'Kelvin',
	18 : 'Micrograms',
	19 : 'Milligrams',
	20 : 'Grams',
	21 : 'Kilograms',
	22 : 'MetricTons',
	23 : 'Ounces',
	24 : 'Pounds',
	25 : 'Stones',
	26 : 'Newtons',
	27 : 'PoundsForce',
	28 : 'KilogramsForce',
	29 : 'Hertz',
	30 : 'Kilohertz',
	31 : 'Megahertz',
	32 : 'Gigahertz',
	33 : 'RevolutionsPerMinute',
	34 : 'Bytes',
	35 : 'Kilobytes',
	36 : 'Megabytes',
	37 : 'Gigabytes',
	38 : 'Terabytes',
	39 : 'Lumens',
	43 : 'Milliseconds',
	44 : 'Seconds',
	45 : 'Minutes',
	46 : 'Hours',
	47 : 'Days',
	48 : 'Months',
	49 : 'Years',
	52 : 'Multiplier',
	51 : 'Percentage',
	53 : 'Unspecified',
}

EConsoleForGamepadLabels = {
	0 : 'None',
	1 : 'XBoxOne',
	2 : 'PS4',
}

EControllerHand = {
	0 : 'Left',
	1 : 'Right',
	2 : 'AnyHand',
	3 : 'Pad',
	4 : 'ExternalCamera',
	5 : 'Gun',
	6 : 'Special_1',
	7 : 'Special_2',
	8 : 'Special_3',
	9 : 'Special_4',
	10 : 'Special_5',
	11 : 'Special_6',
	12 : 'Special_7',
	13 : 'Special_8',
	14 : 'Special_9',
	15 : 'Special_10',
	16 : 'Special_11',
	17 : 'ControllerHand_Count',
}

ETouchIndex = {
	0 : 'Touch1',
	1 : 'Touch2',
	2 : 'Touch3',
	3 : 'Touch4',
	4 : 'Touch5',
	5 : 'Touch6',
	6 : 'Touch7',
	7 : 'Touch8',
	8 : 'Touch9',
	9 : 'Touch10',
	10 : 'CursorPointerIndex',
	11 : 'MAX_TOUCHES',
}

ETouchType = {
	0 : 'Began',
	1 : 'Moved',
	2 : 'Stationary',
	3 : 'ForceChanged',
	4 : 'FirstMove',
	5 : 'Ended',
	6 : 'NumTypes',
}

EButtonClickMethod = {
	0 : 'DownAndUp',
	1 : 'MouseDown',
	2 : 'MouseUp',
	3 : 'PreciseClick',
}

EButtonPressMethod = {
	0 : 'DownAndUp',
	1 : 'ButtonPress',
	2 : 'ButtonRelease',
}

EButtonTouchMethod = {
	0 : 'DownAndUp',
	1 : 'Down',
	2 : 'PreciseTap',
}

ECheckBoxState = {
	0 : 'Unchecked',
	1 : 'Checked',
	2 : 'Undetermined',
}

EColorVisionDeficiency = {
	0 : 'NormalVision',
	1 : 'Deuteranope',
	2 : 'Protanope',
	3 : 'Tritanope',
}

EConsumeMouseWheel = {
	0 : 'WhenScrollingPossible',
	1 : 'Always',
	2 : 'Never',
}

EFlowDirectionPreference = {
	0 : 'Inherit',
	1 : 'Culture',
	2 : 'LeftToRight',
	3 : 'RightToLeft',
}

EFocusCause = {
	0 : 'Mouse',
	1 : 'Navigation',
	2 : 'SetDirectly',
	3 : 'Cleared',
	4 : 'OtherWidgetLostFocus',
	5 : 'WindowActivate',
}

EFontFallback = {
	0 : 'FF_NoFallback',
	1 : 'FF_LocalizedFallback',
	2 : 'FF_LastResortFallback',
	3 : 'FF_Max',
}

EFontHinting = {
	0 : 'Default',
	1 : 'Auto',
	2 : 'AutoLight',
	3 : 'Monochrome',
	4 : 'None',
}

EFontLayoutMethod = {
	0 : 'Metrics',
	1 : 'BoundingBox',
}

EFontLoadingPolicy = {
	0 : 'LazyLoad',
	1 : 'Stream',
	2 : 'Inline',
}

EHorizontalAlignment = {
	0 : 'HAlign_Fill',
	1 : 'HAlign_Left',
	2 : 'HAlign_Center',
	3 : 'HAlign_Right',
}

EMenuPlacement = {
	0 : 'MenuPlacement_BelowAnchor',
	1 : 'MenuPlacement_CenteredBelowAnchor',
	2 : 'MenuPlacement_BelowRightAnchor',
	3 : 'MenuPlacement_ComboBox',
	4 : 'MenuPlacement_ComboBoxRight',
	5 : 'MenuPlacement_MenuRight',
	6 : 'MenuPlacement_AboveAnchor',
	7 : 'MenuPlacement_CenteredAboveAnchor',
	8 : 'MenuPlacement_AboveRightAnchor',
	9 : 'MenuPlacement_MenuLeft',
	10 : 'MenuPlacement_Center',
	11 : 'MenuPlacement_RightLeftCenter',
	12 : 'MenuPlacement_MatchBottomLeft',
}

ENavigationGenesis = {
	0 : 'Keyboard',
	1 : 'Controller',
	2 : 'User',
}

ENavigationSource = {
	0 : 'FocusedWidget',
	1 : 'WidgetUnderCursor',
}

EOrientation = {
	0 : 'Orient_Horizontal',
	1 : 'Orient_Vertical',
}

EScrollDirection = {
	0 : 'Scroll_Down',
	1 : 'Scroll_Up',
}

ESelectInfo = {
	0 : 'OnKeyPress',
	1 : 'OnNavigation',
	2 : 'OnMouseClick',
	3 : 'Direct',
}

ESlateBrushDrawType = {
	0 : 'NoDrawType',
	1 : 'Box',
	2 : 'Border',
	3 : 'Image',
}

ESlateBrushImageType = {
	0 : 'NoImage',
	1 : 'FullColor',
	2 : 'Linear',
}

ESlateBrushMirrorType = {
	0 : 'NoMirror',
	1 : 'Horizontal',
	2 : 'Vertical',
	3 : 'Both',
}

ESlateBrushTileType = {
	0 : 'NoTile',
	1 : 'Horizontal',
	2 : 'Vertical',
	3 : 'Both',
}

ESlateCheckBoxType = {
	0 : 'CheckBox',
	1 : 'ToggleButton',
}

ESlateColorStylingMode = {
	0 : 'UseColor_Specified',
	1 : 'UseColor_Specified_Link',
	2 : 'UseColor_Foreground',
	3 : 'UseColor_Foreground_Subdued',
}

ESlateDebuggingFocusEvent = {
	0 : 'FocusChanging',
	1 : 'FocusLost',
	2 : 'FocusReceived',
}

ESlateDebuggingInputEvent = {
	0 : 'MouseMove',
	1 : 'MouseEnter',
	2 : 'MouseLeave',
	3 : 'MouseButtonDown',
	4 : 'MouseButtonUp',
	5 : 'MouseButtonDoubleClick',
	6 : 'MouseWheel',
	7 : 'TouchStart',
	8 : 'TouchEnd',
	9 : 'DragDetected',
	10 : 'DragEnter',
	11 : 'DragLeave',
	12 : 'DragOver',
	13 : 'DragDrop',
	14 : 'DropMessage',
	15 : 'KeyDown',
	16 : 'KeyUp',
	17 : 'KeyChar',
	18 : 'AnalogInput',
	19 : 'TouchGesture',
	20 : 'COUNT',
}

ESlateDebuggingNavigationMethod = {
	0 : 'Unknown',
	1 : 'Explicit',
	2 : 'CustomDelegateBound',
	3 : 'CustomDelegateUnbound',
	4 : 'NextOrPrevious',
	5 : 'HitTestGrid',
}

ESlateDebuggingStateChangeEvent = {
	0 : 'MouseCaptureGained',
	1 : 'MouseCaptureLost',
}

ESlateParentWindowSearchMethod = {
	0 : 'ActiveWindow',
	1 : 'MainWindow',
}

ETextCommit = {
	0 : 'Default',
	1 : 'OnEnter',
	2 : 'OnUserMovedFocus',
	3 : 'OnCleared',
}

ETextShapingMethod = {
	0 : 'Auto',
	1 : 'KerningOnly',
	2 : 'FullShaping',
}

EUINavigation = {
	0 : 'Left',
	1 : 'Right',
	2 : 'Up',
	3 : 'Down',
	4 : 'Next',
	5 : 'Previous',
	6 : 'Num',
	7 : 'Invalid',
}

EUINavigationAction = {
	0 : 'Accept',
	1 : 'Back',
	2 : 'Num',
	3 : 'Invalid',
}

EUINavigationRule = {
	0 : 'Escape',
	1 : 'Explicit',
	2 : 'Wrap',
	3 : 'Stop',
	4 : 'Custom',
	5 : 'CustomBoundary',
	6 : 'Invalid',
}

EVerticalAlignment = {
	0 : 'VAlign_Fill',
	1 : 'VAlign_Top',
	2 : 'VAlign_Center',
	3 : 'VAlign_Bottom',
}

EWidgetClipping = {
	0 : 'Inherit',
	1 : 'ClipToBounds',
	2 : 'ClipToBoundsWithoutIntersecting',
	3 : 'ClipToBoundsAlways',
	4 : 'OnDemand',
}

EBitmapCSType = {
	0 : 'BCST_BLCS_CALIBRATED_RGB',
	1934772034 : 'BCST_LCS_sRGB',
	1466527264 : 'BCST_LCS_WINDOWS_COLOR_SPACE',
	1279872587 : 'BCST_PROFILE_LINKED',
	1296188740 : 'BCST_PROFILE_EMBEDDED',
}

EBitmapHeaderVersion = {
	0 : 'BHV_BITMAPINFOHEADER',
	1 : 'BHV_BITMAPV2INFOHEADER',
	2 : 'BHV_BITMAPV3INFOHEADER',
	3 : 'BHV_BITMAPV4HEADER',
	4 : 'BHV_BITMAPV5HEADER',
}

EDescendantScrollDestination = {
	0 : 'IntoView',
	1 : 'TopOrLeft',
	2 : 'Center',
}

EListItemAlignment = {
	0 : 'EvenlyDistributed',
	1 : 'EvenlySize',
	2 : 'EvenlyWide',
	3 : 'LeftAligned',
	4 : 'RightAligned',
	5 : 'CenterAligned',
	6 : 'Fill',
}

EMultiBlockType = {
	0 : 'None',
	1 : 'ButtonRow',
	2 : 'EditableText',
	3 : 'Heading',
	4 : 'MenuEntry',
	5 : 'MenuSeparator',
	6 : 'ToolBarButton',
	7 : 'ToolBarComboButton',
	8 : 'ToolBarSeparator',
	9 : 'Widget',
}

EMultiBoxType = {
	0 : 'MenuBar',
	1 : 'ToolBar',
	2 : 'VerticalToolBar',
	3 : 'Menu',
	4 : 'ButtonRow',
	5 : 'ToolMenuBar',
}

EMultipleKeyBindingIndex = {
	0 : 'Primary',
	1 : 'Secondary',
	2 : 'NumChords',
}

EProgressBarFillType = {
	0 : 'LeftToRight',
	1 : 'RightToLeft',
	2 : 'FillFromCenter',
	3 : 'TopToBottom',
	4 : 'BottomToTop',
}

ESelectionMode = {
	0 : 'None',
	1 : 'Single',
	2 : 'SingleToggle',
	3 : 'Multi',
}

EStretch = {
	0 : 'None',
	1 : 'Fill',
	2 : 'ScaleToFit',
	3 : 'ScaleToFitX',
	4 : 'ScaleToFitY',
	5 : 'ScaleToFill',
	6 : 'ScaleBySafeZone',
	7 : 'UserSpecified',
}

EStretchDirection = {
	0 : 'Both',
	1 : 'DownOnly',
	2 : 'UpOnly',
}

ETableViewMode = {
	0 : 'List',
	1 : 'Tile',
	2 : 'Tree',
}

ETextFlowDirection = {
	0 : 'Auto',
	1 : 'LeftToRight',
	2 : 'RightToLeft',
}

ETextJustify = {
	0 : 'Left',
	1 : 'Center',
	2 : 'Right',
}

ETextWrappingPolicy = {
	0 : 'DefaultWrapping',
	1 : 'AllowPerCharacterWrapping',
}

EUserInterfaceActionType = {
	0 : 'None',
	1 : 'Button',
	2 : 'ToggleButton',
	3 : 'RadioButton',
	4 : 'Check',
	5 : 'CollapsedButton',
}

EVirtualKeyboardDismissAction = {
	0 : 'TextChangeOnDismiss',
	1 : 'TextCommitOnAccept',
	2 : 'TextCommitOnDismiss',
}

EDesiredImageFormat = {
	0 : 'PNG',
	1 : 'JPG',
	2 : 'BMP',
	3 : 'EXR',
}

EMobileCSMQuality = {
	0 : 'NoFiltering',
	1 : 'PCF_1x1',
	2 : 'PCF_2x2',
}

EFourPlayerSplitScreenType = {
	0 : 'Grid',
	1 : 'Vertical',
	2 : 'Horizontal',
}

ESubLevelStripMode = {
	0 : 'ExactClass',
	1 : 'IsChildOf',
}

EThreePlayerSplitScreenType = {
	0 : 'FavorTop',
	1 : 'FavorBottom',
	2 : 'Vertical',
	3 : 'Horizontal',
}

ETwoPlayerSplitScreenType = {
	0 : 'Horizontal',
	1 : 'Vertical',
}

EChaosBufferMode = {
	0 : 'Double',
	1 : 'Triple',
	2 : 'Num',
	3 : 'Invalid',
}

EChaosSolverTickMode = {
	0 : 'Fixed',
	1 : 'Variable',
	2 : 'VariableCapped',
	3 : 'VariableCappedWithTarget',
}

EChaosThreadingMode = {
	0 : 'DedicatedThread',
	1 : 'TaskGraph',
	2 : 'SingleThread',
	3 : 'Num',
	4 : 'Invalid',
}

EMeshTrackerVertexColorMode = {
	0 : 'None',
	1 : 'Confidence',
	2 : 'Block',
}

EAREnvironmentCaptureProbeType = {
	0 : 'None',
	1 : 'Manual',
	2 : 'Automatic',
}

EARFaceTrackingUpdate = {
	0 : 'CurvesAndGeo',
	1 : 'CurvesOnly',
}

EARFrameSyncMode = {
	0 : 'SyncTickWithCameraImage',
	1 : 'SyncTickWithoutCameraImage',
}

EARLightEstimationMode = {
	0 : 'None',
	1 : 'AmbientLightEstimate',
	2 : 'DirectionalLightEstimate',
}

EARPlaneDetectionMode = {
	0 : 'None',
	1 : 'HorizontalPlaneDetection',
	2 : 'VerticalPlaneDetection',
}

EARSessionTrackingFeature = {
	0 : 'None',
	1 : 'PoseDetection2D',
	2 : 'PersonSegmentation',
	3 : 'PersonSegmentationWithDepth',
}

EARSessionType = {
	0 : 'None',
	1 : 'Orientation',
	2 : 'World',
	3 : 'Face',
	4 : 'Image',
	5 : 'ObjectScanning',
	6 : 'PoseTracking',
}

EARWorldAlignment = {
	0 : 'Gravity',
	1 : 'GravityAndHeading',
	2 : 'Camera',
}

EARCandidateImageOrientation = {
	0 : 'Landscape',
	1 : 'Portrait',
}

EARDepthAccuracy = {
	0 : 'Unkown',
	1 : 'Approximate',
	2 : 'Accurate',
}

EARDepthQuality = {
	0 : 'Unkown',
	1 : 'Low',
	2 : 'High',
}

EAREye = {
	0 : 'LeftEye',
	1 : 'RightEye',
}

EARFaceBlendShape = {
	0 : 'EyeBlinkLeft',
	1 : 'EyeLookDownLeft',
	2 : 'EyeLookInLeft',
	3 : 'EyeLookOutLeft',
	4 : 'EyeLookUpLeft',
	5 : 'EyeSquintLeft',
	6 : 'EyeWideLeft',
	7 : 'EyeBlinkRight',
	8 : 'EyeLookDownRight',
	9 : 'EyeLookInRight',
	10 : 'EyeLookOutRight',
	11 : 'EyeLookUpRight',
	12 : 'EyeSquintRight',
	13 : 'EyeWideRight',
	14 : 'JawForward',
	15 : 'JawLeft',
	16 : 'JawRight',
	17 : 'JawOpen',
	18 : 'MouthClose',
	19 : 'MouthFunnel',
	20 : 'MouthPucker',
	21 : 'MouthLeft',
	22 : 'MouthRight',
	23 : 'MouthSmileLeft',
	24 : 'MouthSmileRight',
	25 : 'MouthFrownLeft',
	26 : 'MouthFrownRight',
	27 : 'MouthDimpleLeft',
	28 : 'MouthDimpleRight',
	29 : 'MouthStretchLeft',
	30 : 'MouthStretchRight',
	31 : 'MouthRollLower',
	32 : 'MouthRollUpper',
	33 : 'MouthShrugLower',
	34 : 'MouthShrugUpper',
	35 : 'MouthPressLeft',
	36 : 'MouthPressRight',
	37 : 'MouthLowerDownLeft',
	38 : 'MouthLowerDownRight',
	39 : 'MouthUpperUpLeft',
	40 : 'MouthUpperUpRight',
	41 : 'BrowDownLeft',
	42 : 'BrowDownRight',
	43 : 'BrowInnerUp',
	44 : 'BrowOuterUpLeft',
	45 : 'BrowOuterUpRight',
	46 : 'CheekPuff',
	47 : 'CheekSquintLeft',
	48 : 'CheekSquintRight',
	49 : 'NoseSneerLeft',
	50 : 'NoseSneerRight',
	51 : 'TongueOut',
	52 : 'HeadYaw',
	53 : 'HeadPitch',
	54 : 'HeadRoll',
	55 : 'LeftEyeYaw',
	56 : 'LeftEyePitch',
	57 : 'LeftEyeRoll',
	58 : 'RightEyeYaw',
	59 : 'RightEyePitch',
	60 : 'RightEyeRoll',
	61 : 'MAX',
}

EARFaceTrackingDirection = {
	0 : 'FaceRelative',
	1 : 'FaceMirrored',
}

EARJointTransformSpace = {
	0 : 'Model',
	1 : 'ParentJoint',
}

EARLineTraceChannels = {
	0 : 'None',
	1 : 'FeaturePoint',
	2 : 'GroundPlane',
	4 : 'PlaneUsingExtent',
	8 : 'PlaneUsingBoundaryPolygon',
}

EARObjectClassification = {
	0 : 'NotApplicable',
	1 : 'Unknown',
	2 : 'Wall',
	3 : 'Ceiling',
	4 : 'Floor',
	5 : 'Table',
	6 : 'Seat',
	7 : 'Face',
	8 : 'Image',
	9 : 'World',
	10 : 'SceneObject',
}

EARPlaneOrientation = {
	0 : 'Horizontal',
	1 : 'Vertical',
	2 : 'Diagonal',
}

EARSessionStatus = {
	0 : 'NotStarted',
	1 : 'Running',
	2 : 'NotSupported',
	3 : 'FatalError',
	4 : 'PermissionNotGranted',
	5 : 'UnsupportedConfiguration',
	6 : 'Other',
}

EARTextureType = {
	0 : 'CameraImage',
	1 : 'CameraDepth',
	2 : 'EnvironmentCapture',
}

EARTrackingQuality = {
	0 : 'NotTracking',
	1 : 'OrientationOnly',
	2 : 'OrientationAndPosition',
}

EARTrackingQualityReason = {
	0 : 'None',
	1 : 'Initializing',
	2 : 'Relocalizing',
	3 : 'ExcessiveMotion',
	4 : 'InsufficientFeatures',
}

EARTrackingState = {
	0 : 'Unknown',
	1 : 'Tracking',
	2 : 'NotTracking',
	3 : 'StoppedTracking',
}

EARWorldMappingState = {
	0 : 'NotAvailable',
	1 : 'StillMappingNotRelocalizable',
	2 : 'StillMappingRelocalizable',
	3 : 'Mapped',
}

EHMDTrackingOrigin = {
	0 : 'Floor',
	1 : 'Eye',
	2 : 'Stage',
}

EHMDWornState = {
	0 : 'Unknown',
	1 : 'Worn',
	2 : 'NotWorn',
}

EOrientPositionSelector = {
	0 : 'Orientation',
	1 : 'Position',
	2 : 'OrientationAndPosition',
}

ESpectatorScreenMode = {
	0 : 'Disabled',
	1 : 'SingleEyeLetterboxed',
	2 : 'Undistorted',
	3 : 'Distorted',
	4 : 'SingleEye',
	5 : 'SingleEyeCroppedToFill',
	6 : 'Texture',
	7 : 'TexturePlusEye',
}

ETrackingStatus = {
	0 : 'NotTracked',
	1 : 'InertialOnly',
	2 : 'Tracked',
}

EXRTrackedDeviceType = {
	0 : 'HeadMountedDisplay',
	1 : 'Controller',
	2 : 'TrackingReference',
	3 : 'Other',
	254 : 'Invalid',
	255 : 'Any',
}

EFoliageScaling = {
	0 : 'Uniform',
	1 : 'Free',
	2 : 'LockXY',
	3 : 'LockXZ',
	4 : 'LockYZ',
}

ESimulationOverlap = {
	0 : 'CollisionOverlap',
	1 : 'ShadeOverlap',
	2 : 'None',
}

ESimulationQuery = {
	1 : 'CollisionOverlap',
	2 : 'ShadeOverlap',
	3 : 'AnyOverlap',
}

EVertexColorMaskChannel = {
	0 : 'Red',
	1 : 'Green',
	2 : 'Blue',
	3 : 'Alpha',
	4 : 'MAX_None',
}

FoliageVertexColorMask = {
	0 : 'FOLIAGEVERTEXCOLORMASK_Disabled',
	1 : 'FOLIAGEVERTEXCOLORMASK_Red',
	2 : 'FOLIAGEVERTEXCOLORMASK_Green',
	3 : 'FOLIAGEVERTEXCOLORMASK_Blue',
	4 : 'FOLIAGEVERTEXCOLORMASK_Alpha',
}

EGrassScaling = {
	0 : 'Uniform',
	1 : 'Free',
	2 : 'LockXY',
}

ELandscapeBlendMode = {
	0 : 'LSBM_AdditiveBlend',
	1 : 'LSBM_AlphaBlend',
	2 : 'LSBM_MAX',
}

ELandscapeClearMode = {
	1 : 'Clear_Weightmap',
	2 : 'Clear_Heightmap',
	3 : 'Clear_All',
}

ELandscapeGizmoType = {
	0 : 'LGT_None',
	1 : 'LGT_Height',
	2 : 'LGT_Weight',
	3 : 'LGT_MAX',
}

ELandscapeSetupErrors = {
	0 : 'LSE_None',
	1 : 'LSE_NoLandscapeInfo',
	2 : 'LSE_CollsionXY',
	3 : 'LSE_NoLayerInfo',
	4 : 'LSE_MAX',
}

ELandscapeImportAlphamapType = {
	0 : 'Additive',
	1 : 'Layered',
}

ELandscapeLODFalloff = {
	0 : 'Linear',
	1 : 'SquareRoot',
}

ELandscapeLayerDisplayMode = {
	0 : 'Default',
	1 : 'Alphabetical',
	2 : 'UserSpecific',
}

ELandscapeLayerPaintingRestriction = {
	0 : 'None',
	1 : 'UseMaxLayers',
	2 : 'ExistingOnly',
	3 : 'UseComponentWhitelist',
}

LandscapeSplineMeshOrientation = {
	0 : 'LSMO_XUp',
	1 : 'LSMO_YUp',
	2 : 'LSMO_MAX',
}

ELandscapeCustomizedCoordType = {
	0 : 'LCCT_None',
	1 : 'LCCT_CustomUV0',
	2 : 'LCCT_CustomUV1',
	3 : 'LCCT_CustomUV2',
	4 : 'LCCT_WeightMapUV',
	5 : 'LCCT_MAX',
}

ELandscapeLayerBlendType = {
	0 : 'LB_WeightBlend',
	1 : 'LB_AlphaBlend',
	2 : 'LB_HeightBlend',
}

ETerrainCoordMappingType = {
	0 : 'TCMT_Auto',
	1 : 'TCMT_XY',
	2 : 'TCMT_XZ',
	3 : 'TCMT_YZ',
	4 : 'TCMT_MAX',
}

EFrameNumberDisplayFormats = {
	0 : 'NonDropFrameTimecode',
	1 : 'DropFrameTimecode',
	2 : 'Seconds',
	3 : 'Frames',
	4 : 'MAX_Count',
}

EEvaluationMethod = {
	0 : 'Static',
	1 : 'Swept',
}

EMovieSceneBlendType = {
	1 : 'Absolute',
	2 : 'Additive',
	4 : 'Relative',
}

EMovieSceneBuiltInEasing = {
	0 : 'Linear',
	1 : 'SinIn',
	2 : 'SinOut',
	3 : 'SinInOut',
	4 : 'QuadIn',
	5 : 'QuadOut',
	6 : 'QuadInOut',
	7 : 'CubicIn',
	8 : 'CubicOut',
	9 : 'CubicInOut',
	10 : 'QuartIn',
	11 : 'QuartOut',
	12 : 'QuartInOut',
	13 : 'QuintIn',
	14 : 'QuintOut',
	15 : 'QuintInOut',
	16 : 'ExpoIn',
	17 : 'ExpoOut',
	18 : 'ExpoInOut',
	19 : 'CircIn',
	20 : 'CircOut',
	21 : 'CircInOut',
}

EMovieSceneKeyInterpolation = {
	0 : 'Auto',
	1 : 'User',
	2 : 'Break',
	3 : 'Linear',
	4 : 'Constant',
}

EMovieSceneCompletionMode = {
	0 : 'KeepState',
	1 : 'RestoreState',
	2 : 'ProjectDefault',
}

EMovieSceneEvaluationType = {
	0 : 'FrameLocked',
	1 : 'WithSubFrames',
}

EMovieSceneObjectBindingSpace = {
	0 : 'Local',
	1 : 'Root',
}

EMovieScenePlayerStatus = {
	0 : 'Stopped',
	1 : 'Playing',
	2 : 'Recording',
	3 : 'Scrubbing',
	4 : 'Jumping',
	5 : 'Stepping',
	6 : 'Paused',
	7 : 'MAX',
}

ESectionEvaluationFlags = {
	0 : 'None',
	1 : 'PreRoll',
	2 : 'PostRoll',
}

EUpdateClockSource = {
	0 : 'Tick',
	1 : 'Platform',
	2 : 'Audio',
	3 : 'Timecode',
}

EUpdatePositionMethod = {
	0 : 'Play',
	1 : 'Jump',
	2 : 'Scrub',
}

ESpawnOwnership = {
	0 : 'InnerSequence',
	1 : 'MasterSequence',
	2 : 'External',
}

EConstraintType = {
	0 : 'Transform',
	1 : 'Aim',
	2 : 'MAX',
}

ETransformConstraintType = {
	0 : 'Translation',
	1 : 'Rotation',
	2 : 'Scale',
	3 : 'Parent',
}

EFieldCullingOperationType = {
	0 : 'Field_Culling_Inside',
	1 : 'Field_Culling_Outside',
	2 : 'Field_Culling_Operation_Max',
}

EFieldFalloffType = {
	0 : 'Field_FallOff_None',
	1 : 'Field_Falloff_Linear',
	2 : 'Field_Falloff_Inverse',
	3 : 'Field_Falloff_Squared',
	4 : 'Field_Falloff_Logarithmic',
	5 : 'Field_Falloff_Max',
}

EFieldOperationType = {
	0 : 'Field_Multiply',
	1 : 'Field_Divide',
	2 : 'Field_Add',
	3 : 'Field_Substract',
	4 : 'Field_Operation_Max',
}

EFieldPhysicsDefaultFields = {
	0 : 'Field_RadialIntMask',
	1 : 'Field_RadialFalloff',
	2 : 'Field_UniformVector',
	3 : 'Field_RadialVector',
	4 : 'Field_RadialVectorFalloff',
	5 : 'Field_EFieldPhysicsDefaultFields_Max',
}

EFieldPhysicsType = {
	0 : 'Field_DynamicState',
	1 : 'Field_LinearForce',
	2 : 'Field_ExternalClusterStrain',
	3 : 'Field_Kill',
	4 : 'Field_LinearVelocity',
	5 : 'Field_AngularVelociy',
	6 : 'Field_AngularTorque',
	7 : 'Field_InternalClusterStrain',
	8 : 'Field_DisableThreshold',
	9 : 'Field_SleepingThreshold',
	10 : 'Field_PositionStatic',
	11 : 'Field_PositionAnimated',
	12 : 'Field_PositionTarget',
	13 : 'Field_DynamicConstraint',
	14 : 'Field_CollisionGroup',
	15 : 'Field_ActivateDisabled',
	16 : 'Field_PhysicsType_Max',
}

EFieldResolutionType = {
	0 : 'Field_Resolution_Minimal',
	1 : 'Field_Resolution_DisabledParents',
	2 : 'Field_Resolution_Maximum',
	3 : 'Field_Resolution_Max',
}

ESetMaskConditionType = {
	0 : 'Field_Set_Always',
	1 : 'Field_Set_IFF_NOT_Interior',
	2 : 'Field_Set_IFF_NOT_Exterior',
	3 : 'Field_MaskCondition_Max',
}

EGeometryCollectionCacheType = {
	0 : 'None',
	1 : 'Record',
	2 : 'Play',
	3 : 'RecordAndPlay',
}

ECollisionTypeEnum = {
	0 : 'Chaos_Volumetric',
	1 : 'Chaos_Surface_Volumetric',
	2 : 'Chaos_Max',
}

EEmissionPatternTypeEnum = {
	0 : 'Chaos_Emission_Pattern_First_Frame',
	1 : 'Chaos_Emission_Pattern_On_Demand',
	2 : 'Chaos_Max',
}

EGeometryCollectionPhysicsTypeEnum = {
	0 : 'Chaos_AngularVelocity',
	1 : 'Chaos_DynamicState',
	2 : 'Chaos_LinearVelocity',
	3 : 'Chaos_InitialAngularVelocity',
	4 : 'Chaos_InitialLinearVelocity',
	5 : 'Chaos_CollisionGroup',
	6 : 'Chaos_LinearForce',
	7 : 'Chaos_AngularTorque',
	8 : 'Chaos_Max',
}

EImplicitTypeEnum = {
	0 : 'Chaos_Implicit_Box',
	1 : 'Chaos_Implicit_Sphere',
	2 : 'Chaos_Implicit_Capsule',
	3 : 'Chaos_Implicit_LevelSet',
	4 : 'Chaos_Implicit_None',
	5 : 'Chaos_Max',
}

EInitialVelocityTypeEnum = {
	0 : 'Chaos_Initial_Velocity_User_Defined',
	1 : 'Chaos_Initial_Velocity_None',
	2 : 'Chaos_Max',
}

EObjectStateTypeEnum = {
	1 : 'Chaos_Object_Sleeping',
	2 : 'Chaos_Object_Kinematic',
	3 : 'Chaos_Object_Static',
	4 : 'Chaos_Object_Dynamic',
	100 : 'Chaos_Object_UserDefined',
	101 : 'Chaos_Max',
}

EClusterConnectionTypeEnum = {
	1 : 'Chaos_PointImplicit',
	2 : 'Chaos_DelaunayTriangulation',
	3 : 'Chaos_MinimalSpanningSubsetDelaunayTriangulation',
	4 : 'Chaos_PointImplicitAugmentedWithMinimalDelaunay',
	0 : 'Chaos_None',
	1 : 'Chaos_EClsuterCreationParameters_Max',
}

EChaosBreakingSortMethod = {
	0 : 'SortNone',
	1 : 'SortByHighestMass',
	2 : 'SortByHighestSpeed',
	3 : 'SortByNearestFirst',
	4 : 'Count',
}

EChaosCollisionSortMethod = {
	0 : 'SortNone',
	1 : 'SortByHighestMass',
	2 : 'SortByHighestSpeed',
	3 : 'SortByHighestImpulse',
	4 : 'SortByNearestFirst',
	5 : 'Count',
}

EChaosTrailingSortMethod = {
	0 : 'SortNone',
	1 : 'SortByHighestMass',
	2 : 'SortByHighestSpeed',
	3 : 'SortByNearestFirst',
	4 : 'Count',
}

ECollectionAttributeEnum = {
	0 : 'Chaos_Active',
	1 : 'Chaos_DynamicState',
	2 : 'Chaos_CollisionGroup',
	3 : 'Chaos_Max',
}

ECollectionGroupEnum = {
	0 : 'Chaos_Traansform',
	1 : 'Chaos_Max',
}

EGeometryCollectionDebugDrawActorHideGeometry = {
	0 : 'HideNone',
	1 : 'HideWithCollision',
	2 : 'HideSelected',
	3 : 'HideWholeCollection',
	4 : 'HideAll',
}

AnimPhysAngularConstraintType = {
	0 : 'Angular',
	1 : 'Cone',
}

AnimPhysLinearConstraintType = {
	0 : 'Free',
	1 : 'Limited',
}

AnimPhysSimSpaceType = {
	0 : 'Component',
	1 : 'Actor',
	2 : 'World',
	3 : 'RootRelative',
	4 : 'BoneRelative',
}

CopyBoneDeltaMode = {
	0 : 'Accumulate',
	1 : 'Copy',
}

EConstraintOffsetOption = {
	0 : 'None',
	1 : 'Offset_RefPose',
}

EDrivenBoneModificationMode = {
	0 : 'AddToInput',
	1 : 'ReplaceComponent',
	2 : 'AddToRefPose',
}

EDrivenDestinationMode = {
	0 : 'Bone',
	1 : 'MorphTarget',
	2 : 'MaterialParameter',
}

ESphericalLimitType = {
	0 : 'Inner',
	1 : 'Outer',
}

EBoneModificationMode = {
	0 : 'BMM_Ignore',
	1 : 'BMM_Replace',
	2 : 'BMM_Additive',
}

EInterpolationBlend = {
	0 : 'Linear',
	1 : 'Cubic',
	2 : 'Sinusoidal',
	3 : 'EaseInOutExponent2',
	4 : 'EaseInOutExponent3',
	5 : 'EaseInOutExponent4',
	6 : 'EaseInOutExponent5',
	7 : 'MAX',
}

EModifyCurveApplyMode = {
	0 : 'Add',
	1 : 'Scale',
	2 : 'Blend',
	3 : 'WeightedMovingAverage',
	4 : 'RemapCurve',
}

EPoseDriverOutput = {
	0 : 'DrivePoses',
	1 : 'DriveCurves',
}

EPoseDriverSource = {
	0 : 'Rotation',
	1 : 'Translation',
}

EPoseDriverType = {
	0 : 'SwingAndTwist',
	1 : 'SwingOnly',
	2 : 'Translation',
}

ERefPoseType = {
	0 : 'EIT_LocalSpace',
	1 : 'EIT_Additive',
}

ESimulationSpace = {
	0 : 'ComponentSpace',
	1 : 'WorldSpace',
	2 : 'BaseBoneSpace',
}

ESnapshotSourceMode = {
	0 : 'NamedSnapshot',
	1 : 'SnapshotPin',
}

EEasingFuncType = {
	0 : 'Linear',
	1 : 'Sinusoidal',
	2 : 'Cubic',
	3 : 'QuadraticInOut',
	4 : 'CubicInOut',
	5 : 'HermiteCubic',
	6 : 'QuarticInOut',
	7 : 'QuinticInOut',
	8 : 'CircularIn',
	9 : 'CircularOut',
	10 : 'CircularInOut',
	11 : 'ExpIn',
	12 : 'ExpOut',
	13 : 'ExpInOut',
	14 : 'CustomCurve',
}

ERotationComponent = {
	0 : 'EulerX',
	1 : 'EulerY',
	2 : 'EulerZ',
	3 : 'QuaternionAngle',
	4 : 'SwingAngle',
	5 : 'TwistAngle',
}

EScaleChainInitialLength = {
	0 : 'FixedDefaultLengthValue',
	1 : 'Distance',
	2 : 'ChainLength',
}

ESequenceEvalReinit = {
	0 : 'NoReset',
	1 : 'StartPosition',
	2 : 'ExplicitTime',
}

ESplineBoneAxis = {
	1 : 'X',
	2 : 'Y',
	3 : 'Z',
}

ERBFDistanceMethod = {
	0 : 'Euclidean',
	1 : 'Quaternion',
	2 : 'SwingAngle',
	3 : 'DefaultMethod',
}

ERBFFunctionType = {
	0 : 'Gaussian',
	1 : 'Exponential',
	2 : 'Linear',
	3 : 'Cubic',
	4 : 'Quintic',
	5 : 'DefaultFunction',
}

ERBFNormalizeMethod = {
	0 : 'OnlyNormalizeAboveOne',
	1 : 'AlwaysNormalize',
	2 : 'NormalizeWithinMedian',
}

MovieScene3DPathSection_Axis = {
	0 : 'X',
	1 : 'Y',
	2 : 'Z',
	3 : 'NEG_X',
	4 : 'NEG_Y',
	5 : 'NEG_Z',
}

EFireEventsAtPosition = {
	0 : 'AtStartOfEvaluation',
	1 : 'AtEndOfEvaluation',
	2 : 'AfterSpawn',
}

ELevelVisibility = {
	0 : 'Visible',
	1 : 'Hidden',
}

EParticleKey = {
	0 : 'Activate',
	1 : 'Deactivate',
	2 : 'Trigger',
}

EDragPivot = {
	0 : 'MouseDown',
	1 : 'TopLeft',
	2 : 'TopCenter',
	3 : 'TopRight',
	4 : 'CenterLeft',
	5 : 'CenterCenter',
	6 : 'CenterRight',
	7 : 'BottomLeft',
	8 : 'BottomCenter',
	9 : 'BottomRight',
}

EDynamicBoxType = {
	0 : 'Horizontal',
	1 : 'Vertical',
	2 : 'Wrap',
	3 : 'Overlay',
}

ESlateAccessibleBehavior = {
	0 : 'NotAccessible',
	1 : 'Auto',
	2 : 'Summary',
	3 : 'Custom',
	4 : 'ToolTip',
}

ESlateSizeRule = {
	0 : 'Automatic',
	1 : 'Fill',
}

ESlateVisibility = {
	0 : 'Visible',
	1 : 'Collapsed',
	2 : 'Hidden',
	3 : 'HitTestInvisible',
	4 : 'SelfHitTestInvisible',
}

EVirtualKeyboardType = {
	0 : 'Default',
	1 : 'Number',
	2 : 'Web',
	3 : 'Email',
	4 : 'Password',
	5 : 'AlphaNumeric',
}

EUMGSequencePlayMode = {
	0 : 'Forward',
	1 : 'Reverse',
	2 : 'PingPong',
}

EWidgetAnimationEvent = {
	0 : 'Started',
	1 : 'Finished',
}

EWidgetTickFrequency = {
	0 : 'Never',
	1 : 'Auto',
}

EWidgetDesignFlags = {
	0 : 'None',
	1 : 'Designing',
	2 : 'ShowOutline',
	4 : 'ExecutePreConstruct',
}

EBindingKind = {
	0 : 'Function',
	1 : 'Property',
}

EWidgetBlendMode = {
	0 : 'Opaque',
	1 : 'Masked',
	2 : 'Transparent',
}

EWidgetGeometryMode = {
	0 : 'Plane',
	1 : 'Cylinder',
}

EWidgetSpace = {
	0 : 'World',
	1 : 'Screen',
}

EWidgetTimingPolicy = {
	0 : 'RealTime',
	1 : 'GameTime',
}

EWindowVisibility = {
	0 : 'Visible',
	1 : 'SelfHitTestInvisible',
}

EWidgetInteractionSource = {
	0 : 'World',
	1 : 'Mouse',
	2 : 'CenterScreen',
	3 : 'Custom',
}

ECameraFocusMethod = {
	0 : 'None',
	1 : 'Manual',
	2 : 'Tracking',
}

EFFTPeakInterpolationMethod = {
	0 : 'NearestNeighbor',
	1 : 'Linear',
	2 : 'Quadratic',
}

EFFTSize = {
	0 : 'DefaultSize',
	1 : 'Min',
	2 : 'Small',
	3 : 'Medium',
	4 : 'Large',
	5 : 'Max',
}

EFFTWindowType = {
	0 : 'None',
	1 : 'Hamming',
	2 : 'Hann',
	3 : 'Blackman',
}

ESubmixEffectDynamicsPeakMode = {
	0 : 'MeanSquared',
	1 : 'RootMeanSquared',
	2 : 'Peak',
	3 : 'Count',
}

ESubmixEffectDynamicsProcessorType = {
	0 : 'Compressor',
	1 : 'Limiter',
	2 : 'Expander',
	3 : 'Gate',
	4 : 'Count',
}

EGameplayContainerMatchType = {
	0 : 'Any',
	1 : 'All',
}

EGameplayTagMatchType = {
	0 : 'Explicit',
	1 : 'IncludeParentTags',
}

EGameplayTagQueryExprType = {
	0 : 'Undefined',
	1 : 'AnyTagsMatch',
	2 : 'AllTagsMatch',
	3 : 'NoTagsMatch',
	4 : 'AnyExprMatch',
	5 : 'AllExprMatch',
	6 : 'NoExprMatch',
}

EGameplayTagSelectionType = {
	0 : 'None',
	1 : 'NonRestrictedOnly',
	2 : 'RestrictedOnly',
	3 : 'All',
}

EGameplayTagSourceType = {
	0 : 'Native',
	1 : 'DefaultTagList',
	2 : 'TagList',
	3 : 'RestrictedTagList',
	4 : 'DataTable',
	5 : 'Invalid',
}

ESoundwaveSampleRateSettings = {
	0 : 'Max',
	1 : 'High',
	2 : 'Medium',
	3 : 'Low',
	4 : 'Min',
	5 : 'MatchDevice',
}

EComputeNTBsOptions = {
	0 : 'None',
	1 : 'Normals',
	2 : 'Tangents',
	4 : 'WeightedNTBs',
}

EEyeTrackerStatus = {
	0 : 'NotConnected',
	1 : 'NotTracking',
	2 : 'Tracking',
}

EHDRCaptureGamut = {
	0 : 'HCGM_Rec709',
	1 : 'HCGM_P3DCI',
	2 : 'HCGM_Rec2020',
	3 : 'HCGM_ACES',
	4 : 'HCGM_ACEScg',
	5 : 'HCGM_Linear',
	6 : 'HCGM_MAX',
}

EMovieSceneCaptureProtocolState = {
	0 : 'Idle',
	1 : 'Initialized',
	2 : 'Capturing',
	3 : 'Finalizing',
}

EMoviePlaybackType = {
	0 : 'MT_Normal',
	1 : 'MT_Looped',
	2 : 'MT_LoadingLoop',
	3 : 'MT_MAX',
}

EAlphaBlendOption = {
	0 : 'Linear',
	1 : 'Cubic',
	2 : 'HermiteCubic',
	3 : 'Sinusoidal',
	4 : 'QuadraticInOut',
	5 : 'CubicInOut',
	6 : 'QuarticInOut',
	7 : 'QuinticInOut',
	8 : 'CircularIn',
	9 : 'CircularOut',
	10 : 'CircularInOut',
	11 : 'ExpIn',
	12 : 'ExpOut',
	13 : 'ExpInOut',
	14 : 'Custom',
}

EAnimGroupRole = {
	0 : 'CanBeLeader',
	1 : 'AlwaysFollower',
	2 : 'AlwaysLeader',
	3 : 'TransitionLeader',
	4 : 'TransitionFollower',
}

AnimationCompressionFormat = {
	0 : 'ACF_None',
	1 : 'ACF_Float96NoW',
	2 : 'ACF_Fixed48NoW',
	3 : 'ACF_IntervalFixed32NoW',
	4 : 'ACF_Fixed32NoW',
	5 : 'ACF_Float32NoW',
	6 : 'ACF_Identity',
	7 : 'ACF_MAX',
}

AnimationKeyFormat = {
	0 : 'AKF_ConstantKeyLerp',
	1 : 'AKF_VariableKeyLerp',
	2 : 'AKF_PerTrackCompression',
	3 : 'AKF_MAX',
}

EAdditiveBasePoseType = {
	0 : 'ABPT_None',
	1 : 'ABPT_RefPose',
	2 : 'ABPT_AnimScaled',
	3 : 'ABPT_AnimFrame',
	4 : 'ABPT_MAX',
}

EAnimAssetCurveFlags = {
	1 : 'AACF_DriveMorphTarget_DEPRECATED',
	2 : 'AACF_DriveAttribute_DEPRECATED',
	4 : 'AACF_Editable',
	8 : 'AACF_DriveMaterial_DEPRECATED',
	16 : 'AACF_Metadata',
	32 : 'AACF_DriveTrack',
	64 : 'AACF_Disabled',
}

EMontagePlayReturnType = {
	0 : 'MontageLength',
	1 : 'Duration',
}

ERawCurveTrackTypes = {
	0 : 'RCT_Float',
	1 : 'RCT_Vector',
	2 : 'RCT_Transform',
	3 : 'RCT_MAX',
}

ERootMotionMode = {
	0 : 'NoRootMotionExtraction',
	1 : 'IgnoreRootMotion',
	2 : 'RootMotionFromEverything',
	3 : 'RootMotionFromMontagesOnly',
}

ERootMotionRootLock = {
	0 : 'RefPose',
	1 : 'AnimFirstFrame',
	2 : 'Zero',
}

EAnimLinkMethod = {
	0 : 'Absolute',
	1 : 'Relative',
	2 : 'Proportional',
}

EAnimNotifyEventType = {
	0 : 'Begin',
	1 : 'End',
}

ECopyType = {
	0 : 'MemCopy',
	1 : 'BoolProperty',
	2 : 'StructProperty',
	3 : 'ObjectProperty',
}

EDrawDebugItemType = {
	0 : 'DirectionalArrow',
	1 : 'Sphere',
	2 : 'Line',
	3 : 'OnScreenMessage',
	4 : 'CoordinateSystem',
}

EEvaluatorDataSource = {
	0 : 'EDS_SourcePose',
	1 : 'EDS_DestinationPose',
}

EEvaluatorMode = {
	0 : 'EM_Standard',
	1 : 'EM_Freeze',
	2 : 'EM_DelayedFreeze',
}

EMontageSubStepResult = {
	0 : 'Moved',
	1 : 'NotMoved',
	2 : 'InvalidSection',
	3 : 'InvalidMontage',
}

EPinHidingMode = {
	0 : 'NeverAsPin',
	1 : 'PinHiddenByDefault',
	2 : 'PinShownByDefault',
	3 : 'AlwaysAsPin',
}

EPostCopyOperation = {
	0 : 'None',
	1 : 'LogicalNegateBool',
}

AnimPhysCollisionType = {
	0 : 'CoM',
	1 : 'CustomSphere',
	2 : 'InnerSphere',
	3 : 'OuterSphere',
}

AnimPhysTwistAxis = {
	0 : 'AxisX',
	1 : 'AxisY',
	2 : 'AxisZ',
}

ETransitionBlendMode = {
	0 : 'TBM_Linear',
	1 : 'TBM_Cubic',
}

ETransitionLogicType = {
	0 : 'TLT_StandardBlend',
	1 : 'TLT_Custom',
}

ETypeAdvanceAnim = {
	0 : 'ETAA_Default',
	1 : 'ETAA_Finished',
	2 : 'ETAA_Looped',
}

EAdditiveAnimationType = {
	0 : 'AAT_None',
	1 : 'AAT_LocalSpaceBase',
	2 : 'AAT_RotationOffsetMeshSpace',
	3 : 'AAT_MAX',
}

EAnimInterpolationType = {
	0 : 'Linear',
	1 : 'Step',
}

EAxisOption = {
	0 : 'X',
	1 : 'Y',
	2 : 'Z',
	3 : 'X_Neg',
	4 : 'Y_Neg',
	5 : 'Z_Neg',
	6 : 'Custom',
}

EBoneAxis = {
	0 : 'BA_X',
	1 : 'BA_Y',
	2 : 'BA_Z',
}

EBoneControlSpace = {
	0 : 'BCS_WorldSpace',
	1 : 'BCS_ComponentSpace',
	2 : 'BCS_ParentBoneSpace',
	3 : 'BCS_BoneSpace',
	4 : 'BCS_MAX',
}

EBoneRotationSource = {
	0 : 'BRS_KeepComponentSpaceRotation',
	1 : 'BRS_KeepLocalSpaceRotation',
	2 : 'BRS_CopyFromTarget',
}

EComponentType = {
	0 : 'None',
	1 : 'TranslationX',
	2 : 'TranslationY',
	3 : 'TranslationZ',
	4 : 'RotationX',
	5 : 'RotationY',
	6 : 'RotationZ',
	7 : 'Scale',
	8 : 'ScaleX',
	9 : 'ScaleY',
	10 : 'ScaleZ',
}

ECurveBlendOption = {
	0 : 'MaxWeight',
	1 : 'NormalizeByWeight',
	2 : 'BlendByWeight',
}

EMontageNotifyTickType = {
	0 : 'Queued',
	1 : 'BranchingPoint',
}

ENotifyFilterType = {
	0 : 'NoFiltering',
	1 : 'LOD',
}

EPrimaryAssetCookRule = {
	0 : 'Unknown',
	1 : 'NeverCook',
	2 : 'DevelopmentCook',
	3 : 'DevelopmentAlwaysCook',
	4 : 'AlwaysCook',
}

ETemperatureSeverityType = {
	0 : 'Unknown',
	1 : 'Good',
	2 : 'Bad',
	3 : 'Serious',
	4 : 'Critical',
	5 : 'NumSeverities',
}

EAttenuationDistanceModel = {
	0 : 'Linear',
	1 : 'Logarithmic',
	2 : 'Inverse',
	3 : 'LogReverse',
	4 : 'NaturalSound',
	5 : 'Custom',
}

EAttenuationShape = {
	0 : 'Sphere',
	1 : 'Capsule',
	2 : 'Box',
	3 : 'Cone',
}

EMonoChannelUpmixMethod = {
	0 : 'Linear',
	1 : 'EqualPower',
	2 : 'FullVolume',
}

EPanningMethod = {
	0 : 'Linear',
	1 : 'EqualPower',
}

EVoiceSampleRate = {
	16000 : 'Low16000Hz',
	24000 : 'Normal24000Hz',
}

EBlendSpaceAxis = {
	0 : 'BSA_None',
	1 : 'BSA_X',
	2 : 'BSA_Y',
	3 : 'BSA_Max',
}

EBlendableLocation = {
	0 : 'BL_AfterTonemapping',
	1 : 'BL_BeforeTonemapping',
	2 : 'BL_BeforeTranslucency',
	3 : 'BL_ReplacingTonemapper',
	4 : 'BL_SSRInput',
	5 : 'BL_MAX',
}

EBlueprintCompileMode = {
	0 : 'Default',
	1 : 'Development',
	2 : 'FinalRelease',
}

EBlueprintNativizationFlag = {
	0 : 'Disabled',
	1 : 'Dependency',
	2 : 'ExplicitlyEnabled',
}

EBlueprintStatus = {
	0 : 'BS_Unknown',
	1 : 'BS_Dirty',
	2 : 'BS_Error',
	3 : 'BS_UpToDate',
	4 : 'BS_BeingCreated',
	5 : 'BS_UpToDateWithWarnings',
	6 : 'BS_MAX',
}

EBlueprintType = {
	0 : 'BPTYPE_Normal',
	1 : 'BPTYPE_Const',
	2 : 'BPTYPE_MacroLibrary',
	3 : 'BPTYPE_Interface',
	4 : 'BPTYPE_LevelScript',
	5 : 'BPTYPE_FunctionLibrary',
	6 : 'BPTYPE_MAX',
}

ENotifyTriggerMode = {
	0 : 'AllAnimations',
	1 : 'HighestWeightedAnimation',
	2 : 'None',
}

ReverbPreset = {
	0 : 'REVERB_Default',
	1 : 'REVERB_Bathroom',
	2 : 'REVERB_StoneRoom',
	3 : 'REVERB_Auditorium',
	4 : 'REVERB_ConcertHall',
	5 : 'REVERB_Cave',
	6 : 'REVERB_Hallway',
	7 : 'REVERB_StoneCorridor',
	8 : 'REVERB_Alley',
	9 : 'REVERB_Forest',
	10 : 'REVERB_City',
	11 : 'REVERB_Mountains',
	12 : 'REVERB_Quarry',
	13 : 'REVERB_Plain',
	14 : 'REVERB_ParkingLot',
	15 : 'REVERB_SewerPipe',
	16 : 'REVERB_Underwater',
	17 : 'REVERB_SmallRoom',
	18 : 'REVERB_MediumRoom',
	19 : 'REVERB_LargeRoom',
	20 : 'REVERB_MediumHall',
	21 : 'REVERB_LargeHall',
	22 : 'REVERB_Plate',
	23 : 'REVERB_MAX',
}

EApplicationState = {
	0 : 'Unknown',
	1 : 'Inactive',
	2 : 'Background',
	3 : 'Active',
}

EBodyCollisionResponse = {
	0 : 'BodyCollision_Enabled',
	1 : 'BodyCollision_Disabled',
}

ECollisionTraceFlag = {
	0 : 'CTF_UseDefault',
	1 : 'CTF_UseSimpleAndComplex',
	2 : 'CTF_UseSimpleAsComplex',
	3 : 'CTF_UseComplexAsSimple',
	4 : 'CTF_MAX',
}

EDOFMode = {
	0 : 'Default',
	1 : 'SixDOF',
	2 : 'YZPlane',
	3 : 'XZPlane',
	4 : 'XYPlane',
	5 : 'CustomPlane',
	6 : 'None',
}

EPhysicsType = {
	0 : 'PhysType_Default',
	1 : 'PhysType_Kinematic',
	2 : 'PhysType_Simulated',
}

EScreenOrientation = {
	0 : 'Unknown',
	1 : 'Portrait',
	2 : 'PortraitUpsideDown',
	3 : 'LandscapeLeft',
	4 : 'LandscapeRight',
	5 : 'FaceUp',
	6 : 'FaceDown',
}

EBrushType = {
	0 : 'Brush_Default',
	1 : 'Brush_Add',
	2 : 'Brush_Subtract',
	3 : 'Brush_MAX',
}

ECsgOper = {
	0 : 'CSG_Active',
	1 : 'CSG_Add',
	2 : 'CSG_Subtract',
	3 : 'CSG_Intersect',
	4 : 'CSG_Deintersect',
	5 : 'CSG_None',
	6 : 'CSG_MAX',
}

EInitialOscillatorOffset = {
	0 : 'EOO_OffsetRandom',
	1 : 'EOO_OffsetZero',
	2 : 'EOO_MAX',
}

EOscillatorWaveform = {
	0 : 'SineWave',
	1 : 'PerlinNoise',
}

ECameraAlphaBlendMode = {
	0 : 'CABM_Linear',
	1 : 'CABM_Cubic',
}

ECameraAnimPlaySpace = {
	0 : 'CameraLocal',
	1 : 'World',
	2 : 'UserDefined',
}

ECameraProjectionMode = {
	0 : 'Perspective',
	1 : 'Orthographic',
}

EAngularDriveMode = {
	0 : 'SLERP',
	1 : 'TwistAndSwing',
}

ECloudStorageDelegate = {
	0 : 'CSD_KeyValueReadComplete',
	1 : 'CSD_KeyValueWriteComplete',
	2 : 'CSD_ValueChanged',
	3 : 'CSD_DocumentQueryComplete',
	4 : 'CSD_DocumentReadComplete',
	5 : 'CSD_DocumentWriteComplete',
	6 : 'CSD_DocumentConflictDetected',
	7 : 'CSD_MAX',
}

EComponentCreationMethod = {
	0 : 'Native',
	1 : 'SimpleConstructionScript',
	2 : 'UserConstructionScript',
	3 : 'Instance',
}

ECurveTableMode = {
	0 : 'Empty',
	1 : 'SimpleCurves',
	2 : 'RichCurves',
}

ELinearConstraintMotion = {
	0 : 'LCM_Free',
	1 : 'LCM_Limited',
	2 : 'LCM_Locked',
	3 : 'LCM_MAX',
}

EEvaluateCurveTableResult = {
	0 : 'RowFound',
	1 : 'RowNotFound',
}

EGrammaticalGender = {
	0 : 'Neuter',
	1 : 'Masculine',
	2 : 'Feminine',
	3 : 'Mixed',
}

EGrammaticalNumber = {
	0 : 'Singular',
	1 : 'Plural',
}

DistributionParamMode = {
	0 : 'DPM_Normal',
	1 : 'DPM_Abs',
	2 : 'DPM_Direct',
	3 : 'DPM_MAX',
}

EBlueprintPinStyleType = {
	0 : 'BPST_Original',
	1 : 'BPST_VariantA',
}

EDistributionVectorLockFlags = {
	0 : 'EDVLF_None',
	1 : 'EDVLF_XY',
	2 : 'EDVLF_XZ',
	3 : 'EDVLF_YZ',
	4 : 'EDVLF_XYZ',
	5 : 'EDVLF_MAX',
}

EDistributionVectorMirrorFlags = {
	0 : 'EDVMF_Same',
	1 : 'EDVMF_Different',
	2 : 'EDVMF_Mirror',
	3 : 'EDVMF_MAX',
}

EEdGraphPinDirection = {
	0 : 'EGPD_Input',
	1 : 'EGPD_Output',
	2 : 'EGPD_MAX',
}

ENodeAdvancedPins = {
	0 : 'NoPins',
	1 : 'Shown',
	2 : 'Hidden',
}

ENodeEnabledState = {
	0 : 'Enabled',
	1 : 'Disabled',
	2 : 'DevelopmentOnly',
}

ENodeTitleType = {
	0 : 'FullTitle',
	1 : 'ListView',
	2 : 'EditableTitle',
	3 : 'MenuTitle',
	4 : 'MAX_TitleTypes',
}

EPinContainerType = {
	0 : 'None',
	1 : 'Array',
	2 : 'Set',
	3 : 'Map',
}

ECanCreateConnectionResponse = {
	0 : 'CONNECT_RESPONSE_MAKE',
	1 : 'CONNECT_RESPONSE_DISALLOW',
	2 : 'CONNECT_RESPONSE_BREAK_OTHERS_A',
	3 : 'CONNECT_RESPONSE_BREAK_OTHERS_B',
	4 : 'CONNECT_RESPONSE_BREAK_OTHERS_AB',
	5 : 'CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE',
	6 : 'CONNECT_RESPONSE_MAX',
}

EConsoleType = {
	0 : 'Any',
	1 : 'Mobile',
	2 : 'MAX',
}

EFullyLoadPackageType = {
	0 : 'FULLYLOAD_Map',
	1 : 'FULLYLOAD_Game_PreLoadClass',
	2 : 'FULLYLOAD_Game_PostLoadClass',
	3 : 'FULLYLOAD_Always',
	4 : 'FULLYLOAD_Mutator',
	5 : 'FULLYLOAD_MAX',
}

EGraphType = {
	0 : 'GT_Function',
	1 : 'GT_Ubergraph',
	2 : 'GT_Macro',
	3 : 'GT_Animation',
	4 : 'GT_StateMachine',
	5 : 'GT_MAX',
}

ETransitionType = {
	0 : 'None',
	1 : 'Paused',
	2 : 'Loading',
	3 : 'Saving',
	4 : 'Connecting',
	5 : 'Precaching',
	6 : 'WaitingToConnect',
	7 : 'MAX',
}

EAngularConstraintMotion = {
	0 : 'ACM_Free',
	1 : 'ACM_Limited',
	2 : 'ACM_Locked',
	3 : 'ACM_MAX',
}

EAspectRatioAxisConstraint = {
	0 : 'AspectRatio_MaintainYFOV',
	1 : 'AspectRatio_MaintainXFOV',
	2 : 'AspectRatio_MajorAxisFOV',
	3 : 'AspectRatio_MAX',
}

EAttachLocation = {
	0 : 'KeepRelativeOffset',
	1 : 'KeepWorldPosition',
	2 : 'SnapToTarget',
	3 : 'SnapToTargetIncludingScale',
}

EAttachmentRule = {
	0 : 'KeepRelative',
	1 : 'KeepWorld',
	2 : 'SnapToTarget',
}

EAutoPossessAI = {
	0 : 'Disabled',
	1 : 'PlacedInWorld',
	2 : 'Spawned',
	3 : 'PlacedInWorldOrSpawned',
}

EAutoReceiveInput = {
	0 : 'Disabled',
	1 : 'Player0',
	2 : 'Player1',
	3 : 'Player2',
	4 : 'Player3',
	5 : 'Player4',
	6 : 'Player5',
	7 : 'Player6',
	8 : 'Player7',
}

EBlendMode = {
	0 : 'BLEND_Opaque',
	1 : 'BLEND_Masked',
	2 : 'BLEND_Translucent',
	3 : 'BLEND_Additive',
	4 : 'BLEND_Modulate',
	5 : 'BLEND_AlphaComposite',
	6 : 'BLEND_AlphaHoldout',
	7 : 'BLEND_MAX',
}

ECollisionChannel = {
	0 : 'ECC_WorldStatic',
	1 : 'ECC_WorldDynamic',
	2 : 'ECC_Pawn',
	3 : 'ECC_Visibility',
	4 : 'ECC_Camera',
	5 : 'ECC_PhysicsBody',
	6 : 'ECC_Vehicle',
	7 : 'ECC_Destructible',
	8 : 'ECC_EngineTraceChannel1',
	9 : 'ECC_EngineTraceChannel2',
	10 : 'ECC_EngineTraceChannel3',
	11 : 'ECC_EngineTraceChannel4',
	12 : 'ECC_EngineTraceChannel5',
	13 : 'ECC_EngineTraceChannel6',
	14 : 'ECC_GameTraceChannel1',
	15 : 'ECC_GameTraceChannel2',
	16 : 'ECC_GameTraceChannel3',
	17 : 'ECC_GameTraceChannel4',
	18 : 'ECC_GameTraceChannel5',
	19 : 'ECC_GameTraceChannel6',
	20 : 'ECC_GameTraceChannel7',
	21 : 'ECC_GameTraceChannel8',
	22 : 'ECC_GameTraceChannel9',
	23 : 'ECC_GameTraceChannel10',
	24 : 'ECC_GameTraceChannel11',
	25 : 'ECC_GameTraceChannel12',
	26 : 'ECC_GameTraceChannel13',
	27 : 'ECC_GameTraceChannel14',
	28 : 'ECC_GameTraceChannel15',
	29 : 'ECC_GameTraceChannel16',
	30 : 'ECC_GameTraceChannel17',
	31 : 'ECC_GameTraceChannel18',
	32 : 'ECC_OverlapAll_Deprecated',
	33 : 'ECC_MAX',
}

ECollisionEnabled = {
	0 : 'NoCollision',
	1 : 'QueryOnly',
	2 : 'PhysicsOnly',
	3 : 'QueryAndPhysics',
}

ECollisionResponse = {
	0 : 'ECR_Ignore',
	1 : 'ECR_Overlap',
	2 : 'ECR_Block',
	3 : 'ECR_MAX',
}

EComponentMobility = {
	0 : 'Static',
	1 : 'Stationary',
	2 : 'Movable',
}

EComponentSocketType = {
	0 : 'Invalid',
	1 : 'Bone',
	2 : 'Socket',
}

EConstraintFrame = {
	0 : 'Frame1',
	1 : 'Frame2',
}

ECustomTimeStepSynchronizationState = {
	0 : 'Closed',
	1 : 'Error',
	2 : 'Synchronized',
	3 : 'Synchronizing',
}

EDemoPlayFailure = {
	0 : 'Generic',
	1 : 'DemoNotFound',
	2 : 'Corrupt',
	3 : 'InvalidVersion',
	4 : 'InitBase',
	5 : 'GameSpecificHeader',
	6 : 'ReplayStreamerInternal',
	7 : 'LoadMap',
	8 : 'Serialization',
}

EDetachmentRule = {
	0 : 'KeepRelative',
	1 : 'KeepWorld',
}

EEndPlayReason = {
	0 : 'Destroyed',
	1 : 'LevelTransition',
	2 : 'EndPlayInEditor',
	3 : 'RemovedFromWorld',
	4 : 'Quit',
}

EFilterInterpolationType = {
	0 : 'BSIT_Average',
	1 : 'BSIT_Linear',
	2 : 'BSIT_Cubic',
	3 : 'BSIT_MAX',
}

EGBufferFormat = {
	0 : 'Force8BitsPerChannel',
	1 : 'Default',
	3 : 'HighPrecisionNormals',
	5 : 'Force16BitsPerChannel',
}

EIndirectLightingCacheQuality = {
	0 : 'ILCQ_Off',
	1 : 'ILCQ_Point',
	2 : 'ILCQ_Volume',
}

EInputEvent = {
	0 : 'IE_Pressed',
	1 : 'IE_Released',
	2 : 'IE_Repeat',
	3 : 'IE_DoubleClick',
	4 : 'IE_Axis',
	5 : 'IE_MAX',
}

ELightMapPaddingType = {
	0 : 'LMPT_NormalPadding',
	1 : 'LMPT_PrePadding',
	2 : 'LMPT_NoPadding',
}

ELightingBuildQuality = {
	0 : 'Quality_Preview',
	1 : 'Quality_Medium',
	2 : 'Quality_High',
	3 : 'Quality_Production',
	4 : 'Quality_MAX',
}

ELightmapType = {
	0 : 'Default',
	1 : 'ForceSurface',
	2 : 'ForceVolumetric',
}

EMaterialSamplerType = {
	0 : 'SAMPLERTYPE_Color',
	1 : 'SAMPLERTYPE_Grayscale',
	2 : 'SAMPLERTYPE_Alpha',
	3 : 'SAMPLERTYPE_Normal',
	4 : 'SAMPLERTYPE_Masks',
	5 : 'SAMPLERTYPE_DistanceFieldFont',
	6 : 'SAMPLERTYPE_LinearColor',
	7 : 'SAMPLERTYPE_LinearGrayscale',
	8 : 'SAMPLERTYPE_Data',
	9 : 'SAMPLERTYPE_External',
	10 : 'SAMPLERTYPE_VirtualColor',
	11 : 'SAMPLERTYPE_VirtualGrayscale',
	12 : 'SAMPLERTYPE_VirtualAlpha',
	13 : 'SAMPLERTYPE_VirtualNormal',
	14 : 'SAMPLERTYPE_VirtualMasks',
	15 : 'SAMPLERTYPE_VirtualLinearColor',
	16 : 'SAMPLERTYPE_VirtualLinearGrayscale',
	17 : 'SAMPLERTYPE_MAX',
}

EMaterialShadingModel = {
	0 : 'MSM_Unlit',
	1 : 'MSM_DefaultLit',
	2 : 'MSM_Subsurface',
	3 : 'MSM_PreintegratedSkin',
	4 : 'MSM_ClearCoat',
	5 : 'MSM_SubsurfaceProfile',
	6 : 'MSM_TwoSidedFoliage',
	7 : 'MSM_Hair',
	8 : 'MSM_Cloth',
	9 : 'MSM_Eye',
	10 : 'MSM_ToonCharacter',
	11 : 'MSM_ToonParticle',
	12 : 'MSM_ToonHair',
	13 : 'MSM_Outline',
	14 : 'MSM_Stage',
	15 : 'MSM_NUM',
	16 : 'MSM_FromMaterialExpression',
	17 : 'MSM_MAX',
}

EMaterialStencilCompare = {
	0 : 'MSC_Less',
	1 : 'MSC_LessEqual',
	2 : 'MSC_Greater',
	3 : 'MSC_GreaterEqual',
	4 : 'MSC_Equal',
	5 : 'MSC_NotEqual',
	6 : 'MSC_Never',
	7 : 'MSC_Always',
	8 : 'MSC_Count',
}

EMaterialTessellationMode = {
	0 : 'MTM_NoTessellation',
	1 : 'MTM_FlatTessellation',
	2 : 'MTM_PNTriangles',
	3 : 'MTM_PhongTessellation',
	4 : 'MTM_MAX',
}

EMeshBufferAccess = {
	0 : 'Default',
	1 : 'ForceCPUAndGPU',
}

EMouseCaptureMode = {
	0 : 'NoCapture',
	1 : 'CapturePermanently',
	2 : 'CapturePermanently_IncludingInitialMouseDown',
	3 : 'CaptureDuringMouseDown',
	4 : 'CaptureDuringRightMouseDown',
}

EMouseLockMode = {
	0 : 'DoNotLock',
	1 : 'LockOnCapture',
	2 : 'LockAlways',
	3 : 'LockInFullscreen',
}

EMovementMode = {
	0 : 'MOVE_None',
	1 : 'MOVE_Walking',
	2 : 'MOVE_NavWalking',
	3 : 'MOVE_Falling',
	4 : 'MOVE_Swimming',
	5 : 'MOVE_Flying',
	6 : 'MOVE_Custom',
	7 : 'MOVE_MAX',
}

ENetDormancy = {
	0 : 'DORM_Never',
	1 : 'DORM_Awake',
	2 : 'DORM_DormantAll',
	3 : 'DORM_DormantPartial',
	4 : 'DORM_Initial',
	5 : 'DORM_MAX',
}

ENetRole = {
	0 : 'ROLE_None',
	1 : 'ROLE_SimulatedProxy',
	2 : 'ROLE_AutonomousProxy',
	3 : 'ROLE_Authority',
	4 : 'ROLE_MAX',
}

ENetworkFailure = {
	0 : 'NetDriverAlreadyExists',
	1 : 'NetDriverCreateFailure',
	2 : 'NetDriverListenFailure',
	3 : 'ConnectionLost',
	4 : 'ConnectionTimeout',
	5 : 'FailureReceived',
	6 : 'OutdatedClient',
	7 : 'OutdatedServer',
	8 : 'PendingConnectionFailure',
	9 : 'NetGuidMismatch',
	10 : 'NetChecksumMismatch',
}

ENetworkLagState = {
	0 : 'NotLagging',
	1 : 'Lagging',
}

ENetworkSmoothingMode = {
	0 : 'Disabled',
	1 : 'Linear',
	2 : 'Exponential',
	3 : 'Replay',
}

EObjectTypeQuery = {
	0 : 'ObjectTypeQuery1',
	1 : 'ObjectTypeQuery2',
	2 : 'ObjectTypeQuery3',
	3 : 'ObjectTypeQuery4',
	4 : 'ObjectTypeQuery5',
	5 : 'ObjectTypeQuery6',
	6 : 'ObjectTypeQuery7',
	7 : 'ObjectTypeQuery8',
	8 : 'ObjectTypeQuery9',
	9 : 'ObjectTypeQuery10',
	10 : 'ObjectTypeQuery11',
	11 : 'ObjectTypeQuery12',
	12 : 'ObjectTypeQuery13',
	13 : 'ObjectTypeQuery14',
	14 : 'ObjectTypeQuery15',
	15 : 'ObjectTypeQuery16',
	16 : 'ObjectTypeQuery17',
	17 : 'ObjectTypeQuery18',
	18 : 'ObjectTypeQuery19',
	19 : 'ObjectTypeQuery20',
	20 : 'ObjectTypeQuery21',
	21 : 'ObjectTypeQuery22',
	22 : 'ObjectTypeQuery23',
	23 : 'ObjectTypeQuery24',
	24 : 'ObjectTypeQuery25',
	25 : 'ObjectTypeQuery26',
	26 : 'ObjectTypeQuery27',
	27 : 'ObjectTypeQuery28',
	28 : 'ObjectTypeQuery29',
	29 : 'ObjectTypeQuery30',
	30 : 'ObjectTypeQuery31',
	31 : 'ObjectTypeQuery32',
	32 : 'ObjectTypeQuery_MAX',
}

EOcclusionCombineMode = {
	0 : 'OCM_Minimum',
	1 : 'OCM_Multiply',
	2 : 'OCM_MAX',
}

EOverlapFilterOption = {
	0 : 'OverlapFilter_All',
	1 : 'OverlapFilter_DynamicOnly',
	2 : 'OverlapFilter_StaticOnly',
}

EParticleCollisionMode = {
	0 : 'SceneDepth',
	1 : 'DistanceField',
}

EPhysicalSurface = {
	0 : 'SurfaceType_Default',
	1 : 'SurfaceType1',
	2 : 'SurfaceType2',
	3 : 'SurfaceType3',
	4 : 'SurfaceType4',
	5 : 'SurfaceType5',
	6 : 'SurfaceType6',
	7 : 'SurfaceType7',
	8 : 'SurfaceType8',
	9 : 'SurfaceType9',
	10 : 'SurfaceType10',
	11 : 'SurfaceType11',
	12 : 'SurfaceType12',
	13 : 'SurfaceType13',
	14 : 'SurfaceType14',
	15 : 'SurfaceType15',
	16 : 'SurfaceType16',
	17 : 'SurfaceType17',
	18 : 'SurfaceType18',
	19 : 'SurfaceType19',
	20 : 'SurfaceType20',
	21 : 'SurfaceType21',
	22 : 'SurfaceType22',
	23 : 'SurfaceType23',
	24 : 'SurfaceType24',
	25 : 'SurfaceType25',
	26 : 'SurfaceType26',
	27 : 'SurfaceType27',
	28 : 'SurfaceType28',
	29 : 'SurfaceType29',
	30 : 'SurfaceType30',
	31 : 'SurfaceType31',
	32 : 'SurfaceType32',
	33 : 'SurfaceType33',
	34 : 'SurfaceType34',
	35 : 'SurfaceType35',
	36 : 'SurfaceType36',
	37 : 'SurfaceType37',
	38 : 'SurfaceType38',
	39 : 'SurfaceType39',
	40 : 'SurfaceType40',
	41 : 'SurfaceType41',
	42 : 'SurfaceType42',
	43 : 'SurfaceType43',
	44 : 'SurfaceType44',
	45 : 'SurfaceType45',
	46 : 'SurfaceType46',
	47 : 'SurfaceType47',
	48 : 'SurfaceType48',
	49 : 'SurfaceType49',
	50 : 'SurfaceType50',
	51 : 'SurfaceType51',
	52 : 'SurfaceType52',
	53 : 'SurfaceType53',
	54 : 'SurfaceType54',
	55 : 'SurfaceType55',
	56 : 'SurfaceType56',
	57 : 'SurfaceType57',
	58 : 'SurfaceType58',
	59 : 'SurfaceType59',
	60 : 'SurfaceType60',
	61 : 'SurfaceType61',
	62 : 'SurfaceType62',
	63 : 'SurfaceType_Max',
}

ERadialImpulseFalloff = {
	0 : 'RIF_Constant',
	1 : 'RIF_Linear',
	2 : 'RIF_MAX',
}

ERefractionMode = {
	0 : 'RM_IndexOfRefraction',
	1 : 'RM_PixelNormalOffset',
}

ERotatorQuantization = {
	0 : 'ByteComponents',
	1 : 'ShortComponents',
}

ESamplerSourceMode = {
	0 : 'SSM_FromTextureAsset',
	1 : 'SSM_Wrap_WorldGroupSettings',
	2 : 'SSM_Clamp_WorldGroupSettings',
}

ESceneCaptureCompositeMode = {
	0 : 'SCCM_Overwrite',
	1 : 'SCCM_Additive',
	2 : 'SCCM_Composite',
}

ESceneCaptureSource = {
	0 : 'SCS_SceneColorHDR',
	1 : 'SCS_SceneColorHDRNoAlpha',
	2 : 'SCS_FinalColorLDR',
	3 : 'SCS_SceneColorSceneDepth',
	4 : 'SCS_SceneDepth',
	5 : 'SCS_DeviceDepth',
	6 : 'SCS_Normal',
	7 : 'SCS_BaseColor',
	8 : 'SCS_FinalColorHDR',
	9 : 'SCS_FinalColorLDRSceneAlpha',
}

ESceneDepthPriorityGroup = {
	0 : 'SDPG_World',
	1 : 'SDPG_Foreground',
	2 : 'SDPG_MAX',
}

EShadowMapFlags = {
	0 : 'SMF_None',
	1 : 'SMF_Streamed',
}

ESleepFamily = {
	0 : 'Normal',
	1 : 'Sensitive',
	2 : 'Custom',
}

ESpawnActorCollisionHandlingMethod = {
	0 : 'Undefined',
	1 : 'AlwaysSpawn',
	2 : 'AdjustIfPossibleButAlwaysSpawn',
	3 : 'AdjustIfPossibleButDontSpawnIfColliding',
	4 : 'DontSpawnIfColliding',
}

ETeleportType = {
	0 : 'None',
	1 : 'TeleportPhysics',
	2 : 'ResetPhysics',
}

ETickingGroup = {
	0 : 'TG_PrePhysics',
	1 : 'TG_StartPhysics',
	2 : 'TG_DuringPhysics',
	3 : 'TG_EndPhysics',
	4 : 'TG_PostPhysics',
	5 : 'TG_PostUpdateWork',
	6 : 'TG_LastDemotable',
	7 : 'TG_NewlySpawned',
	8 : 'TG_MAX',
}

ETimelineSigType = {
	0 : 'ETS_EventSignature',
	1 : 'ETS_FloatSignature',
	2 : 'ETS_VectorSignature',
	3 : 'ETS_LinearColorSignature',
	4 : 'ETS_InvalidSignature',
	5 : 'ETS_MAX',
}

ETraceTypeQuery = {
	0 : 'TraceTypeQuery1',
	1 : 'TraceTypeQuery2',
	2 : 'TraceTypeQuery3',
	3 : 'TraceTypeQuery4',
	4 : 'TraceTypeQuery5',
	5 : 'TraceTypeQuery6',
	6 : 'TraceTypeQuery7',
	7 : 'TraceTypeQuery8',
	8 : 'TraceTypeQuery9',
	9 : 'TraceTypeQuery10',
	10 : 'TraceTypeQuery11',
	11 : 'TraceTypeQuery12',
	12 : 'TraceTypeQuery13',
	13 : 'TraceTypeQuery14',
	14 : 'TraceTypeQuery15',
	15 : 'TraceTypeQuery16',
	16 : 'TraceTypeQuery17',
	17 : 'TraceTypeQuery18',
	18 : 'TraceTypeQuery19',
	19 : 'TraceTypeQuery20',
	20 : 'TraceTypeQuery21',
	21 : 'TraceTypeQuery22',
	22 : 'TraceTypeQuery23',
	23 : 'TraceTypeQuery24',
	24 : 'TraceTypeQuery25',
	25 : 'TraceTypeQuery26',
	26 : 'TraceTypeQuery27',
	27 : 'TraceTypeQuery28',
	28 : 'TraceTypeQuery29',
	29 : 'TraceTypeQuery30',
	30 : 'TraceTypeQuery31',
	31 : 'TraceTypeQuery32',
	32 : 'TraceTypeQuery_MAX',
}

ETrailWidthMode = {
	0 : 'ETrailWidthMode_FromCentre',
	1 : 'ETrailWidthMode_FromFirst',
	2 : 'ETrailWidthMode_FromSecond',
}

ETranslucencyLightingMode = {
	0 : 'TLM_VolumetricNonDirectional',
	1 : 'TLM_VolumetricDirectional',
	2 : 'TLM_VolumetricPerVertexNonDirectional',
	3 : 'TLM_VolumetricPerVertexDirectional',
	4 : 'TLM_Surface',
	5 : 'TLM_SurfacePerPixelLighting',
	6 : 'TLM_MAX',
}

ETranslucentSortPolicy = {
	0 : 'SortByDistance',
	1 : 'SortByProjectedZ',
	2 : 'SortAlongAxis',
}

ETravelFailure = {
	0 : 'NoLevel',
	1 : 'LoadMapFailure',
	2 : 'InvalidURL',
	3 : 'PackageMissing',
	4 : 'PackageVersion',
	5 : 'NoDownload',
	6 : 'TravelFailure',
	7 : 'CheatCommands',
	8 : 'PendingNetGameCreateFailure',
	9 : 'CloudSaveFailure',
	10 : 'ServerTravelFailure',
	11 : 'ClientTravelFailure',
}

ETravelType = {
	0 : 'TRAVEL_Absolute',
	1 : 'TRAVEL_Partial',
	2 : 'TRAVEL_Relative',
	3 : 'TRAVEL_MAX',
}

EUpdateRateShiftBucket = {
	0 : 'ShiftBucket0',
	1 : 'ShiftBucket1',
	2 : 'ShiftBucket2',
	3 : 'ShiftBucket3',
	4 : 'ShiftBucket4',
	5 : 'ShiftBucket5',
	6 : 'ShiftBucketMax',
}

EVectorQuantization = {
	0 : 'RoundWholeNumber',
	1 : 'RoundOneDecimal',
	2 : 'RoundTwoDecimals',
}

EViewModeIndex = {
	0 : 'VMI_BrushWireframe',
	1 : 'VMI_Wireframe',
	2 : 'VMI_Unlit',
	3 : 'VMI_Lit',
	4 : 'VMI_Lit_DetailLighting',
	5 : 'VMI_LightingOnly',
	6 : 'VMI_LightComplexity',
	8 : 'VMI_ShaderComplexity',
	9 : 'VMI_LightmapDensity',
	10 : 'VMI_LitLightmapDensity',
	11 : 'VMI_ReflectionOverride',
	12 : 'VMI_VisualizeBuffer',
	14 : 'VMI_StationaryLightOverlap',
	15 : 'VMI_CollisionPawn',
	16 : 'VMI_CollisionVisibility',
	18 : 'VMI_LODColoration',
	19 : 'VMI_QuadOverdraw',
	20 : 'VMI_PrimitiveDistanceAccuracy',
	21 : 'VMI_MeshUVDensityAccuracy',
	22 : 'VMI_ShaderComplexityWithQuadOverdraw',
	23 : 'VMI_HLODColoration',
	24 : 'VMI_GroupLODColoration',
	25 : 'VMI_MaterialTextureScaleAccuracy',
	26 : 'VMI_RequiredTextureResolution',
	27 : 'VMI_PathTracing',
	28 : 'VMI_RayTracingDebug',
	29 : 'VMI_ToonNormal',
	30 : 'VMI_VertexColor',
	31 : 'VMI_VertexAlpha',
	32 : 'VMI_Max',
	255 : 'VMI_Unknown',
}

EWalkableSlopeBehavior = {
	0 : 'WalkableSlope_Default',
	1 : 'WalkableSlope_Increase',
	2 : 'WalkableSlope_Decrease',
	3 : 'WalkableSlope_Unwalkable',
	4 : 'WalkableSlope_Max',
}

EFontCacheType = {
	0 : 'Offline',
	1 : 'Runtime',
}

EFontImportCharacterSet = {
	0 : 'FontICS_Default',
	1 : 'FontICS_Ansi',
	2 : 'FontICS_Symbol',
	3 : 'FontICS_MAX',
}

EStandbyType = {
	0 : 'STDBY_Rx',
	1 : 'STDBY_Tx',
	2 : 'STDBY_BadPing',
	3 : 'STDBY_MAX',
}

ESuggestProjVelocityTraceOption = {
	0 : 'DoNotTrace',
	1 : 'TraceFullPath',
	2 : 'OnlyTraceWhileAscending',
}

EWindowMode = {
	0 : 'Fullscreen',
	1 : 'WindowedFullscreen',
	2 : 'Windowed',
}

EImportanceWeight = {
	0 : 'Luminance',
	1 : 'Red',
	2 : 'Green',
	3 : 'Blue',
	4 : 'Alpha',
}

EAdManagerDelegate = {
	0 : 'AMD_ClickedBanner',
	1 : 'AMD_UserClosedAd',
	2 : 'AMD_MAX',
}

EAnimAlphaInputType = {
	0 : 'Float',
	1 : 'Bool',
	2 : 'Curve',
}

EControllerAnalogStick = {
	0 : 'CAS_LeftStick',
	1 : 'CAS_RightStick',
	2 : 'CAS_MAX',
}

EInterpToBehaviourType = {
	0 : 'OneShot',
	1 : 'OneShot_Reverse',
	2 : 'Loop_Reset',
	3 : 'PingPong',
}

ETrackActiveCondition = {
	0 : 'ETAC_Always',
	1 : 'ETAC_GoreEnabled',
	2 : 'ETAC_GoreDisabled',
	3 : 'ETAC_MAX',
}

EInterpMoveAxis = {
	0 : 'AXIS_TranslationX',
	1 : 'AXIS_TranslationY',
	2 : 'AXIS_TranslationZ',
	3 : 'AXIS_RotationX',
	4 : 'AXIS_RotationY',
	5 : 'AXIS_RotationZ',
}

EInterpTrackMoveRotMode = {
	0 : 'IMR_Keyframed',
	1 : 'IMR_LookAtGroup',
	2 : 'IMR_Ignore',
	3 : 'IMR_MAX',
}

ETrackToggleAction = {
	0 : 'ETTA_Off',
	1 : 'ETTA_On',
	2 : 'ETTA_Toggle',
	3 : 'ETTA_Trigger',
	4 : 'ETTA_MAX',
}

EVisibilityTrackAction = {
	0 : 'EVTA_Hide',
	1 : 'EVTA_Show',
	2 : 'EVTA_Toggle',
	3 : 'EVTA_MAX',
}

EVisibilityTrackCondition = {
	0 : 'EVTC_Always',
	1 : 'EVTC_GoreEnabled',
	2 : 'EVTC_GoreDisabled',
	3 : 'EVTC_MAX',
}

EEasingFunc = {
	0 : 'Linear',
	1 : 'Step',
	2 : 'SinusoidalIn',
	3 : 'SinusoidalOut',
	4 : 'SinusoidalInOut',
	5 : 'EaseIn',
	6 : 'EaseOut',
	7 : 'EaseInOut',
	8 : 'ExpoIn',
	9 : 'ExpoOut',
	10 : 'ExpoInOut',
	11 : 'CircularIn',
	12 : 'CircularOut',
	13 : 'CircularInOut',
}

ELerpInterpolationMode = {
	0 : 'QuatInterp',
	1 : 'EulerInterp',
	2 : 'DualQuatInterp',
}

ESlateGesture = {
	0 : 'None',
	1 : 'Scroll',
	2 : 'Magnify',
	3 : 'Swipe',
	4 : 'Rotate',
	5 : 'LongPress',
}

EDrawDebugTrace = {
	0 : 'None',
	1 : 'ForOneFrame',
	2 : 'ForDuration',
	3 : 'Persistent',
}

EMoveComponentAction = {
	0 : 'Move',
	1 : 'Stop',
	2 : 'Return',
}

EQuitPreference = {
	0 : 'Quit',
	1 : 'Background',
}

EFormatArgumentType = {
	0 : 'Int',
	1 : 'UInt',
	2 : 'Float',
	3 : 'Double',
	4 : 'Text',
	5 : 'Gender',
}

ERoundingMode = {
	0 : 'HalfToEven',
	1 : 'HalfFromZero',
	2 : 'HalfToZero',
	3 : 'FromZero',
	4 : 'ToZero',
	5 : 'ToNegativeInfinity',
	6 : 'ToPositiveInfinity',
}

ETextGender = {
	0 : 'Masculine',
	1 : 'Feminine',
	2 : 'Neuter',
}

EStreamingVolumeUsage = {
	0 : 'SVB_Loading',
	1 : 'SVB_LoadingAndVisibility',
	2 : 'SVB_VisibilityBlockingOnLoad',
	3 : 'SVB_BlockingOnLoad',
	4 : 'SVB_LoadingNotVisible',
	5 : 'SVB_MAX',
}

EDecalBlendMode = {
	0 : 'DBM_Translucent',
	1 : 'DBM_Stain',
	2 : 'DBM_Normal',
	3 : 'DBM_Emissive',
	4 : 'DBM_DBuffer_ColorNormalRoughness',
	5 : 'DBM_DBuffer_Color',
	6 : 'DBM_DBuffer_ColorNormal',
	7 : 'DBM_DBuffer_ColorRoughness',
	8 : 'DBM_DBuffer_Normal',
	9 : 'DBM_DBuffer_NormalRoughness',
	10 : 'DBM_DBuffer_Roughness',
	11 : 'DBM_DBuffer_Emissive',
	12 : 'DBM_DBuffer_AlphaComposite',
	13 : 'DBM_DBuffer_EmissiveAlphaComposite',
	14 : 'DBM_Volumetric_DistanceFunction',
	15 : 'DBM_AlphaComposite',
	16 : 'DBM_AmbientOcclusion',
	17 : 'DBM_MAX',
}

EMaterialDecalResponse = {
	0 : 'MDR_None',
	1 : 'MDR_ColorNormalRoughness',
	2 : 'MDR_Color',
	3 : 'MDR_ColorNormal',
	4 : 'MDR_ColorRoughness',
	5 : 'MDR_Normal',
	6 : 'MDR_NormalRoughness',
	7 : 'MDR_Roughness',
	8 : 'MDR_MAX',
}

EChannelMaskParameterColor = {
	0 : 'Red',
	1 : 'Green',
	2 : 'Blue',
	3 : 'Alpha',
}

EClampMode = {
	0 : 'CMODE_Clamp',
	1 : 'CMODE_ClampMin',
	2 : 'CMODE_ClampMax',
}

ECustomMaterialOutputType = {
	0 : 'CMOT_Float1',
	1 : 'CMOT_Float2',
	2 : 'CMOT_Float3',
	3 : 'CMOT_Float4',
	4 : 'CMOT_MAX',
}

EMaterialAttributeBlend = {
	0 : 'Blend',
	1 : 'UseA',
	2 : 'UseB',
}

ETextureColorChannel = {
	0 : 'TCC_Red',
	1 : 'TCC_Green',
	2 : 'TCC_Blue',
	3 : 'TCC_Alpha',
	4 : 'TCC_MAX',
}

EDepthOfFieldFunctionValue = {
	0 : 'TDOF_NearAndFarMask',
	1 : 'TDOF_NearMask',
	2 : 'TDOF_FarMask',
	3 : 'TDOF_CircleOfConfusionRadius',
	4 : 'TDOF_MAX',
}

EFunctionInputType = {
	0 : 'FunctionInput_Scalar',
	1 : 'FunctionInput_Vector2',
	2 : 'FunctionInput_Vector3',
	3 : 'FunctionInput_Vector4',
	4 : 'FunctionInput_Texture2D',
	5 : 'FunctionInput_TextureCube',
	6 : 'FunctionInput_VolumeTexture',
	7 : 'FunctionInput_StaticBool',
	8 : 'FunctionInput_MaterialAttributes',
	9 : 'FunctionInput_TextureExternal',
	10 : 'FunctionInput_MAX',
}

EMaterialSceneAttributeInputMode = {
	0 : 'Coordinates',
	1 : 'OffsetFraction',
}

ENoiseFunction = {
	0 : 'NOISEFUNCTION_SimplexTex',
	1 : 'NOISEFUNCTION_GradientTex',
	2 : 'NOISEFUNCTION_GradientTex3D',
	3 : 'NOISEFUNCTION_GradientALU',
	4 : 'NOISEFUNCTION_ValueALU',
	5 : 'NOISEFUNCTION_VoronoiALU',
	6 : 'NOISEFUNCTION_MAX',
}

ESpeedTreeGeometryType = {
	0 : 'STG_Branch',
	1 : 'STG_Frond',
	2 : 'STG_Leaf',
	3 : 'STG_FacingLeaf',
	4 : 'STG_Billboard',
}

ESpeedTreeLODType = {
	0 : 'STLOD_Pop',
	1 : 'STLOD_Smooth',
}

ESpeedTreeWindType = {
	0 : 'STW_None',
	1 : 'STW_Fastest',
	2 : 'STW_Fast',
	3 : 'STW_Better',
	4 : 'STW_Best',
	5 : 'STW_Palm',
	6 : 'STW_BestPlus',
}

EMaterialExposedTextureProperty = {
	0 : 'TMTM_TextureSize',
	1 : 'TMTM_TexelSize',
	2 : 'TMTM_MAX',
}

EMaterialExposedViewProperty = {
	0 : 'MEVP_BufferSize',
	1 : 'MEVP_FieldOfView',
	2 : 'MEVP_TanHalfFieldOfView',
	3 : 'MEVP_ViewSize',
	4 : 'MEVP_WorldSpaceViewPosition',
	5 : 'MEVP_WorldSpaceCameraPosition',
	6 : 'MEVP_ViewportOffset',
	7 : 'MEVP_TemporalSampleCount',
	8 : 'MEVP_TemporalSampleIndex',
	9 : 'MEVP_TemporalSampleOffset',
	10 : 'MEVP_RuntimeVirtualTextureOutputLevel',
	11 : 'MEVP_RuntimeVirtualTextureOutputDerivative',
	12 : 'MEVP_MAX',
}

EMaterialFunctionUsage = {
	0 : 'Default',
	1 : 'MaterialLayer',
	2 : 'MaterialLayerBlend',
}

EMaterialPositionTransformSource = {
	0 : 'TRANSFORMPOSSOURCE_Local',
	1 : 'TRANSFORMPOSSOURCE_World',
	2 : 'TRANSFORMPOSSOURCE_TranslatedWorld',
	3 : 'TRANSFORMPOSSOURCE_View',
	4 : 'TRANSFORMPOSSOURCE_Camera',
	5 : 'TRANSFORMPOSSOURCE_Particle',
	6 : 'TRANSFORMPOSSOURCE_MAX',
}

EMaterialVectorCoordTransform = {
	0 : 'TRANSFORM_Tangent',
	1 : 'TRANSFORM_Local',
	2 : 'TRANSFORM_World',
	3 : 'TRANSFORM_View',
	4 : 'TRANSFORM_Camera',
	5 : 'TRANSFORM_ParticleWorld',
	6 : 'TRANSFORM_MAX',
}

EMaterialVectorCoordTransformSource = {
	0 : 'TRANSFORMSOURCE_Tangent',
	1 : 'TRANSFORMSOURCE_Local',
	2 : 'TRANSFORMSOURCE_World',
	3 : 'TRANSFORMSOURCE_View',
	4 : 'TRANSFORMSOURCE_Camera',
	5 : 'TRANSFORMSOURCE_ParticleWorld',
	6 : 'TRANSFORMSOURCE_MAX',
}

ETextureMipValueMode = {
	0 : 'TMVM_None',
	1 : 'TMVM_MipLevel',
	2 : 'TMVM_MipBias',
	3 : 'TMVM_Derivative',
	4 : 'TMVM_MAX',
}

EVectorNoiseFunction = {
	0 : 'VNF_CellnoiseALU',
	1 : 'VNF_VectorALU',
	2 : 'VNF_GradientALU',
	3 : 'VNF_CurlALU',
	4 : 'VNF_VoronoiALU',
	5 : 'VNF_MAX',
}

EWorldPositionIncludedOffsets = {
	0 : 'WPT_Default',
	1 : 'WPT_ExcludeAllShaderOffsets',
	2 : 'WPT_CameraRelative',
	3 : 'WPT_CameraRelativeNoOffsets',
	4 : 'WPT_MAX',
}

EMaterialMergeType = {
	0 : 'MaterialMergeType_Default',
	1 : 'MaterialMergeType_Simplygon',
}

EMaterialParameterAssociation = {
	0 : 'LayerParameter',
	1 : 'BlendParameter',
	2 : 'GlobalParameter',
}

EMaterialUsage = {
	0 : 'MATUSAGE_SkeletalMesh',
	1 : 'MATUSAGE_ParticleSprites',
	2 : 'MATUSAGE_BeamTrails',
	3 : 'MATUSAGE_MeshParticles',
	4 : 'MATUSAGE_StaticLighting',
	5 : 'MATUSAGE_MorphTargets',
	6 : 'MATUSAGE_SplineMesh',
	7 : 'MATUSAGE_InstancedStaticMeshes',
	8 : 'MATUSAGE_GeometryCollections',
	9 : 'MATUSAGE_Clothing',
	10 : 'MATUSAGE_NiagaraSprites',
	11 : 'MATUSAGE_NiagaraRibbons',
	12 : 'MATUSAGE_NiagaraMeshParticles',
	13 : 'MATUSAGE_GeometryCache',
	14 : 'MATUSAGE_ComputeNormalsToUVs',
	15 : 'MATUSAGE_ProjectedGrid',
	16 : 'MATUSAGE_MAX',
}

ESceneTextureId = {
	0 : 'PPI_SceneColor',
	1 : 'PPI_SceneDepth',
	2 : 'PPI_DiffuseColor',
	3 : 'PPI_SpecularColor',
	4 : 'PPI_SubsurfaceColor',
	5 : 'PPI_BaseColor',
	6 : 'PPI_Specular',
	7 : 'PPI_Metallic',
	8 : 'PPI_WorldNormal',
	9 : 'PPI_SeparateTranslucency',
	10 : 'PPI_Opacity',
	11 : 'PPI_Roughness',
	12 : 'PPI_MaterialAO',
	13 : 'PPI_CustomDepth',
	14 : 'PPI_PostProcessInput0',
	15 : 'PPI_PostProcessInput1',
	16 : 'PPI_PostProcessInput2',
	17 : 'PPI_PostProcessInput3',
	18 : 'PPI_PostProcessInput4',
	19 : 'PPI_PostProcessInput5',
	20 : 'PPI_PostProcessInput6',
	21 : 'PPI_DecalMask',
	22 : 'PPI_ShadingModelColor',
	23 : 'PPI_ShadingModelID',
	24 : 'PPI_AmbientOcclusion',
	25 : 'PPI_CustomStencil',
	26 : 'PPI_StoredBaseColor',
	27 : 'PPI_StoredSpecular',
	28 : 'PPI_Velocity',
}

ETextureSizingType = {
	0 : 'TextureSizingType_UseSingleTextureSize',
	1 : 'TextureSizingType_UseAutomaticBiasedSizes',
	2 : 'TextureSizingType_UseManualOverrideTextureSize',
	3 : 'TextureSizingType_UseSimplygonAutomaticSizing',
	4 : 'TextureSizingType_MAX',
}

ELandscapeCullingPrecision = {
	0 : 'High',
	1 : 'Medium',
	2 : 'Low',
}

EMaterialDomain = {
	0 : 'MD_Surface',
	1 : 'MD_DeferredDecal',
	2 : 'MD_LightFunction',
	3 : 'MD_Volume',
	4 : 'MD_PostProcess',
	5 : 'MD_UI',
	6 : 'MD_RuntimeVirtualTexture',
	7 : 'MD_MAX',
}

EMeshFeatureImportance = {
	0 : 'Off',
	1 : 'Lowest',
	2 : 'Low',
	3 : 'Normal',
	4 : 'High',
	5 : 'Highest',
}

EMeshInstancingReplacementMethod = {
	0 : 'RemoveOriginalActors',
	1 : 'KeepOriginalActorsAsEditorOnly',
}

EMeshLODSelectionType = {
	0 : 'AllLODs',
	1 : 'SpecificLOD',
	2 : 'CalculateLOD',
	3 : 'LowestDetailLOD',
}

EMeshMergeType = {
	0 : 'MeshMergeType_Default',
	1 : 'MeshMergeType_MergeActor',
}

EMicroTransactionDelegate = {
	0 : 'MTD_PurchaseQueryComplete',
	1 : 'MTD_PurchaseComplete',
	2 : 'MTD_MAX',
}

EMicroTransactionResult = {
	0 : 'MTR_Succeeded',
	1 : 'MTR_Failed',
	2 : 'MTR_Canceled',
	3 : 'MTR_RestoredFromServer',
	4 : 'MTR_MAX',
}

EProxyNormalComputationMethod = {
	0 : 'AngleWeighted',
	1 : 'AreaWeighted',
	2 : 'EqualWeighted',
}

EStaticMeshReductionTerimationCriterion = {
	0 : 'Triangles',
	1 : 'Vertices',
	2 : 'Any',
}

EUVOutput = {
	0 : 'DoNotOutputChannel',
	1 : 'OutputChannel',
}

EVertexPaintAxis = {
	0 : 'X',
	1 : 'Y',
	2 : 'Z',
}

ENavDataGatheringMode = {
	0 : 'Default',
	1 : 'Instant',
	2 : 'Lazy',
}

ENavDataGatheringModeConfig = {
	0 : 'Invalid',
	1 : 'Instant',
	2 : 'Lazy',
}

ENavLinkDirection = {
	0 : 'BothWays',
	1 : 'LeftToRight',
	2 : 'RightToLeft',
}

ENavPathEvent = {
	0 : 'Cleared',
	1 : 'NewPath',
	2 : 'UpdatedDueToGoalMoved',
	3 : 'UpdatedDueToNavigationChanged',
	4 : 'Invalidated',
	5 : 'RePathFailed',
	6 : 'MetaPathUpdate',
	7 : 'Custom',
}

ENavigationOptionFlag = {
	0 : 'Default',
	1 : 'Enable',
	2 : 'Disable',
	3 : 'MAX',
}

ENavigationQueryResult = {
	0 : 'Invalid',
	1 : 'Error',
	2 : 'Fail',
	3 : 'Success',
}

EPlaneConstraintAxisSetting = {
	0 : 'Custom',
	1 : 'X',
	2 : 'Y',
	3 : 'Z',
	4 : 'UseGlobalPhysicsSetting',
}

FNavigationSystemRunMode = {
	0 : 'InvalidMode',
	1 : 'GameMode',
	2 : 'EditorMode',
	3 : 'SimulationMode',
	4 : 'PIEMode',
}

EEmitterRenderMode = {
	0 : 'ERM_Normal',
	1 : 'ERM_Point',
	2 : 'ERM_Cross',
	3 : 'ERM_LightsOnly',
	4 : 'ERM_None',
	5 : 'ERM_MAX',
}

EFastArraySerializerDeltaFlags = {
	0 : 'None',
	1 : 'HasBeenSerialized',
	2 : 'HasDeltaBeenRequested',
	4 : 'IsUsingDeltaSerialization',
}

EModuleType = {
	0 : 'EPMT_General',
	1 : 'EPMT_TypeData',
	2 : 'EPMT_Beam',
	3 : 'EPMT_Trail',
	4 : 'EPMT_Spawn',
	5 : 'EPMT_Required',
	6 : 'EPMT_Event',
	7 : 'EPMT_Light',
	8 : 'EPMT_SubUV',
	9 : 'EPMT_MAX',
}

EParticleBurstMethod = {
	0 : 'EPBM_Instant',
	1 : 'EPBM_Interpolated',
	2 : 'EPBM_MAX',
}

EParticleDetailMode = {
	0 : 'PDM_Low',
	1 : 'PDM_Medium',
	2 : 'PDM_High',
	3 : 'PDM_MAX',
}

EParticleSignificanceLevel = {
	0 : 'Low',
	1 : 'Medium',
	2 : 'High',
	3 : 'Critical',
	4 : 'Num',
}

EParticleSourceSelectionMethod = {
	0 : 'EPSSM_Random',
	1 : 'EPSSM_Sequential',
	2 : 'EPSSM_MAX',
}

EParticleSubUVInterpMethod = {
	0 : 'PSUVIM_None',
	1 : 'PSUVIM_Linear',
	2 : 'PSUVIM_Linear_Blend',
	3 : 'PSUVIM_Random',
	4 : 'PSUVIM_Random_Blend',
	5 : 'PSUVIM_MAX',
}

EParticleSystemInsignificanceReaction = {
	0 : 'Auto',
	1 : 'Complete',
	2 : 'DisableTick',
	3 : 'DisableTickAndKill',
	4 : 'Num',
}

Beam2SourceTargetMethod = {
	0 : 'PEB2STM_Default',
	1 : 'PEB2STM_UserSet',
	2 : 'PEB2STM_Emitter',
	3 : 'PEB2STM_Particle',
	4 : 'PEB2STM_Actor',
	5 : 'PEB2STM_MAX',
}

Beam2SourceTargetTangentMethod = {
	0 : 'PEB2STTM_Direct',
	1 : 'PEB2STTM_UserSet',
	2 : 'PEB2STTM_Distribution',
	3 : 'PEB2STTM_Emitter',
	4 : 'PEB2STTM_MAX',
}

BeamModifierType = {
	0 : 'PEB2MT_Source',
	1 : 'PEB2MT_Target',
	2 : 'PEB2MT_MAX',
}

EAttractorParticleSelectionMethod = {
	0 : 'EAPSM_Random',
	1 : 'EAPSM_Sequential',
	2 : 'EAPSM_MAX',
}

EParticleCameraOffsetUpdateMethod = {
	0 : 'EPCOUM_DirectSet',
	1 : 'EPCOUM_Additive',
	2 : 'EPCOUM_Scalar',
	3 : 'EPCOUM_MAX',
}

EParticleCollisionComplete = {
	0 : 'EPCC_Kill',
	1 : 'EPCC_Freeze',
	2 : 'EPCC_HaltCollisions',
	3 : 'EPCC_FreezeTranslation',
	4 : 'EPCC_FreezeRotation',
	5 : 'EPCC_FreezeMovement',
	6 : 'EPCC_MAX',
}

EParticleCollisionResponse = {
	0 : 'Bounce',
	1 : 'Stop',
	2 : 'Kill',
}

CylinderHeightAxis = {
	0 : 'PMLPC_HEIGHTAXIS_X',
	1 : 'PMLPC_HEIGHTAXIS_Y',
	2 : 'PMLPC_HEIGHTAXIS_Z',
	3 : 'PMLPC_HEIGHTAXIS_MAX',
}

EEmitterDynamicParameterValue = {
	0 : 'EDPV_UserSet',
	1 : 'EDPV_AutoSet',
	2 : 'EDPV_VelocityX',
	3 : 'EDPV_VelocityY',
	4 : 'EDPV_VelocityZ',
	5 : 'EDPV_VelocityMag',
	6 : 'EDPV_MAX',
}

ELocationBoneSocketSelectionMethod = {
	0 : 'BONESOCKETSEL_Sequential',
	1 : 'BONESOCKETSEL_Random',
	2 : 'BONESOCKETSEL_MAX',
}

ELocationBoneSocketSource = {
	0 : 'BONESOCKETSOURCE_Bones',
	1 : 'BONESOCKETSOURCE_Sockets',
	2 : 'BONESOCKETSOURCE_MAX',
}

ELocationEmitterSelectionMethod = {
	0 : 'ELESM_Random',
	1 : 'ELESM_Sequential',
	2 : 'ELESM_MAX',
}

ELocationSkelVertSurfaceSource = {
	0 : 'VERTSURFACESOURCE_Vert',
	1 : 'VERTSURFACESOURCE_Surface',
	2 : 'VERTSURFACESOURCE_MAX',
}

EOrbitChainMode = {
	0 : 'EOChainMode_Add',
	1 : 'EOChainMode_Scale',
	2 : 'EOChainMode_Link',
	3 : 'EOChainMode_MAX',
}

EParticleAxisLock = {
	0 : 'EPAL_NONE',
	1 : 'EPAL_X',
	2 : 'EPAL_Y',
	3 : 'EPAL_Z',
	4 : 'EPAL_NEGATIVE_X',
	5 : 'EPAL_NEGATIVE_Y',
	6 : 'EPAL_NEGATIVE_Z',
	7 : 'EPAL_ROTATE_X',
	8 : 'EPAL_ROTATE_Y',
	9 : 'EPAL_ROTATE_Z',
	10 : 'EPAL_MAX',
}

EBeam2Method = {
	0 : 'PEB2M_Distance',
	1 : 'PEB2M_Target',
	2 : 'PEB2M_Branch',
	3 : 'PEB2M_MAX',
}

EBeamTaperMethod = {
	0 : 'PEBTM_None',
	1 : 'PEBTM_Full',
	2 : 'PEBTM_Partial',
	3 : 'PEBTM_MAX',
}

EEmitterNormalsMode = {
	0 : 'ENM_CameraFacing',
	1 : 'ENM_Spherical',
	2 : 'ENM_Cylindrical',
	3 : 'ENM_MAX',
}

EParticleSortMode = {
	0 : 'PSORTMODE_None',
	1 : 'PSORTMODE_ViewProjDepth',
	2 : 'PSORTMODE_DistanceToView',
	3 : 'PSORTMODE_Age_OldestFirst',
	4 : 'PSORTMODE_Age_NewestFirst',
	5 : 'PSORTMODE_MAX',
}

EParticleUVFlipMode = {
	0 : 'None',
	1 : 'FlipUV',
	2 : 'FlipUOnly',
	3 : 'FlipVOnly',
	4 : 'RandomFlipUV',
	5 : 'RandomFlipUOnly',
	6 : 'RandomFlipVOnly',
	7 : 'RandomFlipUVIndependent',
}

ETrail2SourceMethod = {
	0 : 'PET2SRCM_Default',
	1 : 'PET2SRCM_Particle',
	2 : 'PET2SRCM_Actor',
	3 : 'PET2SRCM_MAX',
}

EMeshCameraFacingOptions = {
	0 : 'XAxisFacing_NoUp',
	1 : 'XAxisFacing_ZUp',
	2 : 'XAxisFacing_NegativeZUp',
	3 : 'XAxisFacing_YUp',
	4 : 'XAxisFacing_NegativeYUp',
	5 : 'LockedAxis_ZAxisFacing',
	6 : 'LockedAxis_NegativeZAxisFacing',
	7 : 'LockedAxis_YAxisFacing',
	8 : 'LockedAxis_NegativeYAxisFacing',
	9 : 'VelocityAligned_ZAxisFacing',
	10 : 'VelocityAligned_NegativeZAxisFacing',
	11 : 'VelocityAligned_YAxisFacing',
	12 : 'VelocityAligned_NegativeYAxisFacing',
	13 : 'EMeshCameraFacingOptions_MAX',
}

EMeshCameraFacingUpAxis = {
	0 : 'CameraFacing_NoneUP',
	1 : 'CameraFacing_ZUp',
	2 : 'CameraFacing_NegativeZUp',
	3 : 'CameraFacing_YUp',
	4 : 'CameraFacing_NegativeYUp',
	5 : 'CameraFacing_MAX',
}

EMeshScreenAlignment = {
	0 : 'PSMA_MeshFaceCameraWithRoll',
	1 : 'PSMA_MeshFaceCameraWithSpin',
	2 : 'PSMA_MeshFaceCameraWithLockedAxis',
	3 : 'PSMA_MAX',
}

EParticleEventType = {
	0 : 'EPET_Any',
	1 : 'EPET_Spawn',
	2 : 'EPET_Death',
	3 : 'EPET_Collision',
	4 : 'EPET_Burst',
	5 : 'EPET_Blueprint',
	6 : 'EPET_MAX',
}

EParticleScreenAlignment = {
	0 : 'PSA_FacingCameraPosition',
	1 : 'PSA_Square',
	2 : 'PSA_Rectangle',
	3 : 'PSA_Velocity',
	4 : 'PSA_AwayFromCenter',
	5 : 'PSA_TypeSpecific',
	6 : 'PSA_FacingCameraDistanceBlend',
	7 : 'PSA_MAX',
}

EParticleSysParamType = {
	0 : 'PSPT_None',
	1 : 'PSPT_Scalar',
	2 : 'PSPT_ScalarRand',
	3 : 'PSPT_Vector',
	4 : 'PSPT_VectorRand',
	5 : 'PSPT_Color',
	6 : 'PSPT_Actor',
	7 : 'PSPT_Material',
	8 : 'PSPT_MAX',
}

EParticleSystemOcclusionBoundsMethod = {
	0 : 'EPSOBM_None',
	1 : 'EPSOBM_ParticleBounds',
	2 : 'EPSOBM_CustomBounds',
}

EParticleSystemUpdateMode = {
	0 : 'EPSUM_RealTime',
	1 : 'EPSUM_FixedTime',
}

ETrailsRenderAxisOption = {
	0 : 'Trails_CameraUp',
	1 : 'Trails_SourceUp',
	2 : 'Trails_WorldUp',
	3 : 'Trails_MAX',
}

ParticleReplayState = {
	0 : 'PRS_Disabled',
	1 : 'PRS_Capturing',
	2 : 'PRS_Replaying',
	3 : 'PRS_MAX',
}

ParticleSystemLODMethod = {
	0 : 'PARTICLESYSTEMLODMETHOD_Automatic',
	1 : 'PARTICLESYSTEMLODMETHOD_DirectSet',
	2 : 'PARTICLESYSTEMLODMETHOD_ActivateAutomatic',
}

EFrictionCombineMode = {
	0 : 'Average',
	1 : 'Min',
	2 : 'Multiply',
	3 : 'Max',
}

EPlatformInterfaceDataType = {
	0 : 'PIDT_None',
	1 : 'PIDT_Int',
	2 : 'PIDT_Float',
	3 : 'PIDT_String',
	4 : 'PIDT_Object',
	5 : 'PIDT_Custom',
	6 : 'PIDT_MAX',
}

ESettingsDOF = {
	0 : 'Full3D',
	1 : 'YZPlane',
	2 : 'XZPlane',
	3 : 'XYPlane',
}

ESettingsLockedAxis = {
	0 : 'None',
	1 : 'X',
	2 : 'Y',
	3 : 'Z',
	4 : 'Invalid',
}

EDynamicForceFeedbackAction = {
	0 : 'Start',
	1 : 'Update',
	2 : 'Stop',
}

EViewTargetBlendFunction = {
	0 : 'VTBlend_Linear',
	1 : 'VTBlend_Cubic',
	2 : 'VTBlend_EaseIn',
	3 : 'VTBlend_EaseOut',
	4 : 'VTBlend_EaseInOut',
	5 : 'VTBlend_MAX',
}

ECanBeCharacterBase = {
	0 : 'ECB_No',
	1 : 'ECB_Yes',
	2 : 'ECB_Owner',
	3 : 'ECB_MAX',
}

EHasCustomNavigableGeometry = {
	0 : 'No',
	1 : 'Yes',
	2 : 'EvenIfNotCollidable',
	3 : 'DontExport',
}

ERendererStencilMask = {
	0 : 'ERSM_Default',
	1 : 'ERSM_255',
	2 : 'ERSM_1',
	3 : 'ERSM_2',
	4 : 'ERSM_4',
	5 : 'ERSM_8',
	6 : 'ERSM_16',
	7 : 'ERSM_32',
	8 : 'ERSM_64',
	9 : 'ERSM_128',
}

EAlphaChannelMode = {
	0 : 'Disabled',
	1 : 'LinearColorSpaceOnly',
	2 : 'AllowThroughTonemapper',
}

EAutoExposureMethodUI = {
	0 : 'AEM_Histogram',
	1 : 'AEM_Basic',
	2 : 'AEM_Manual',
	3 : 'AEM_MAX',
}

EClearSceneOptions = {
	0 : 'NoClear',
	1 : 'HardwareClear',
	2 : 'QuadAtMaxZ',
}

ECompositingSampleCount = {
	1 : 'One',
	2 : 'Two',
	4 : 'Four',
	8 : 'Eight',
}

ECustomDepthStencil = {
	0 : 'Disabled',
	1 : 'Enabled',
	2 : 'EnabledOnDemand',
	3 : 'EnabledWithStencil',
}

EDefaultBackBufferPixelFormat = {
	0 : 'DBBPF_B8G8R8A8',
	1 : 'DBBPF_A16B16G16R16_DEPRECATED',
	2 : 'DBBPF_FloatRGB_DEPRECATED',
	3 : 'DBBPF_FloatRGBA',
	4 : 'DBBPF_A2B10G10R10',
	5 : 'DBBPF_MAX',
}

EEarlyZPass = {
	0 : 'None',
	1 : 'OpaqueOnly',
	2 : 'OpaqueAndMasked',
	3 : 'Auto',
}

EMobileMSAASampleCount = {
	1 : 'One',
	2 : 'Two',
	4 : 'Four',
	8 : 'Eight',
}

EReflectionSourceType = {
	0 : 'CapturedScene',
	1 : 'SpecifiedCubemap',
}

ERichCurveExtrapolation = {
	0 : 'RCCE_Cycle',
	1 : 'RCCE_CycleWithOffset',
	2 : 'RCCE_Oscillate',
	3 : 'RCCE_Linear',
	4 : 'RCCE_Constant',
	5 : 'RCCE_None',
}

ERichCurveInterpMode = {
	0 : 'RCIM_Linear',
	1 : 'RCIM_Constant',
	2 : 'RCIM_Cubic',
	3 : 'RCIM_None',
}

EAntiAliasingMethod = {
	0 : 'AAM_None',
	1 : 'AAM_FXAA',
	2 : 'AAM_TemporalAA',
	3 : 'AAM_MSAA',
	4 : 'AAM_SMAA',
	5 : 'AAM_MAX',
}

EAutoExposureMethod = {
	0 : 'AEM_Histogram',
	1 : 'AEM_Basic',
	2 : 'AEM_Manual',
	3 : 'AEM_MAX',
}

EBloomMethod = {
	0 : 'BM_SOG',
	1 : 'BM_FFT',
	2 : 'BM_MAX',
}

EConstraintTransform = {
	0 : 'Absolute',
	1 : 'Relative',
}

EControlConstraint = {
	0 : 'Orientation',
	1 : 'Translation',
	2 : 'MAX',
}

EDepthOfFieldMethod = {
	0 : 'DOFM_BokehDOF',
	1 : 'DOFM_Gaussian',
	2 : 'DOFM_CircleDOF',
	3 : 'DOFM_MAX',
}

EDiffusionQuality = {
	0 : 'DFQ_None',
	1 : 'DFQ_Low',
	2 : 'DFQ_Middle',
	3 : 'DFQ_High',
	4 : 'DFQ_MAX',
}

EGlareType = {
	0 : 'GLT_Cross',
	1 : 'GLT_CrossSpectal',
	2 : 'GLT_SnowCross',
	3 : 'GLT_SnowCrossSpectal',
	4 : 'GLT_CineCamVerticalslits',
	5 : 'GLT_CineCamHorizontalslits',
	6 : 'GLT_Custom',
	7 : 'GLT_MAX',
}

EGraphAxisStyle = {
	0 : 'Lines',
	1 : 'Notches',
	2 : 'Grid',
}

EGraphDataStyle = {
	0 : 'Lines',
	1 : 'Filled',
}

ELegendPosition = {
	0 : 'Outside',
	1 : 'Inside',
}

ELightUnits = {
	0 : 'Unitless',
	1 : 'Candelas',
	2 : 'Lumens',
}

EReflectedAndRefractedRayTracedShadows = {
	0 : 'Disabled',
	1 : 'Hard_shadows',
	2 : 'Area_shadows',
}

EReflectionsType = {
	0 : 'ScreenSpace',
	1 : 'RayTracing',
}

EReporterLineStyle = {
	0 : 'Line',
	1 : 'Dash',
}

ERichCurveCompressionFormat = {
	0 : 'RCCF_Empty',
	1 : 'RCCF_Constant',
	2 : 'RCCF_Linear',
	3 : 'RCCF_Cubic',
	4 : 'RCCF_Mixed',
}

ERichCurveKeyTimeCompressionFormat = {
	0 : 'RCKTCF_uint16',
	1 : 'RCKTCF_float32',
}

ERichCurveTangentMode = {
	0 : 'RCTM_Auto',
	1 : 'RCTM_User',
	2 : 'RCTM_Break',
	3 : 'RCTM_None',
}

ERichCurveTangentWeightMode = {
	0 : 'RCTWM_WeightedNone',
	1 : 'RCTWM_WeightedArrive',
	2 : 'RCTWM_WeightedLeave',
	3 : 'RCTWM_WeightedBoth',
}

ERootMotionAccumulateMode = {
	0 : 'Override',
	1 : 'Additive',
}

ERootMotionFinishVelocityMode = {
	0 : 'MaintainLastRootMotionVelocity',
	1 : 'SetVelocity',
	2 : 'ClampVelocity',
}

ERootMotionSourceSettingsFlags = {
	1 : 'UseSensitiveLiftoffCheck',
	2 : 'DisablePartialEndTick',
}

ERootMotionSourceStatusFlags = {
	1 : 'Prepared',
	2 : 'Finished',
	4 : 'MarkedForRemoval',
}

ERuntimeVirtualTextureMainPassType = {
	0 : 'Never',
	1 : 'Exclusive',
	2 : 'Always',
}

ERuntimeVirtualTextureMaterialType = {
	0 : 'BaseColor',
	1 : 'BaseColor_Normal',
	2 : 'BaseColor_Normal_Specular',
	3 : 'Count',
}

ESSRFilterMethod = {
	0 : 'SSRFM_None',
	1 : 'SSRFM_Gaussian',
	2 : 'SSRFM_Bilateral',
	3 : 'SSRFM_Median',
	4 : 'SSRFM_MAX',
}

ETranslucencyType = {
	0 : 'Raster',
	1 : 'RayTracing',
}

EDetailMode = {
	0 : 'DM_Low',
	1 : 'DM_Medium',
	2 : 'DM_High',
	3 : 'DM_MAX',
}

ERelativeTransformSpace = {
	0 : 'RTS_World',
	1 : 'RTS_Actor',
	2 : 'RTS_Component',
	3 : 'RTS_ParentBoneSpace',
}

ESceneCapturePrimitiveRenderMode = {
	0 : 'PRM_LegacySceneCapture',
	1 : 'PRM_RenderScenePrimitives',
	2 : 'PRM_UseShowOnlyList',
}

EMaterialProperty = {
	0 : 'MP_EmissiveColor',
	1 : 'MP_Opacity',
	2 : 'MP_OpacityMask',
	3 : 'MP_DiffuseColor',
	4 : 'MP_SpecularColor',
	5 : 'MP_BaseColor',
	6 : 'MP_Metallic',
	7 : 'MP_Specular',
	8 : 'MP_Roughness',
	9 : 'MP_Normal',
	10 : 'MP_WorldPositionOffset',
	11 : 'MP_WorldDisplacement',
	12 : 'MP_TessellationMultiplier',
	13 : 'MP_SubsurfaceColor',
	14 : 'MP_CustomData0',
	15 : 'MP_CustomData1',
	16 : 'MP_AmbientOcclusion',
	17 : 'MP_Refraction',
	18 : 'MP_CustomizedUVs0',
	19 : 'MP_CustomizedUVs1',
	20 : 'MP_CustomizedUVs2',
	21 : 'MP_CustomizedUVs3',
	22 : 'MP_CustomizedUVs4',
	23 : 'MP_CustomizedUVs5',
	24 : 'MP_CustomizedUVs6',
	25 : 'MP_CustomizedUVs7',
	26 : 'MP_PixelDepthOffset',
	27 : 'MP_ShadingModel',
	28 : 'MP_ToonOutline',
	29 : 'MP_OutlinePaint',
	30 : 'MP_MaterialAttributes',
	31 : 'MP_CustomOutput',
	32 : 'MP_MAX',
}

EWindowTitleBarMode = {
	0 : 'Overlay',
	1 : 'VerticalBox',
}

EAnimCurveType = {
	0 : 'AttributeCurve',
	1 : 'MaterialCurve',
	2 : 'MorphTargetCurve',
	3 : 'MaxAnimCurveType',
}

EAnimationMode = {
	0 : 'AnimationBlueprint',
	1 : 'AnimationSingleNode',
	2 : 'AnimationCustomMode',
}

EKinematicBonesUpdateToPhysics = {
	0 : 'SkipSimulatingBones',
	1 : 'SkipAllBones',
}

EPhysicsTransformUpdateMode = {
	0 : 'SimulationUpatesComponentTransform',
	1 : 'ComponentTransformIsKinematic',
}

EBoneFilterActionOption = {
	0 : 'Remove',
	1 : 'Keep',
	2 : 'Invalid',
}

EBoneSpaces = {
	0 : 'WorldSpace',
	1 : 'ComponentSpace',
}

EBoneTranslationRetargetingMode = {
	0 : 'Animation',
	1 : 'Skeleton',
	2 : 'AnimationScaled',
	3 : 'AnimationRelative',
	4 : 'OrientAndScale',
}

EBoneVisibilityStatus = {
	0 : 'BVS_HiddenByParent',
	1 : 'BVS_Visible',
	2 : 'BVS_ExplicitlyHidden',
	3 : 'BVS_MAX',
}

EPhysBodyOp = {
	0 : 'PBO_None',
	1 : 'PBO_Term',
	2 : 'PBO_MAX',
}

ESkeletalMeshLODType = {
	0 : 'Reduction',
	1 : 'Proxy',
	2 : 'None',
}

EVisibilityBasedAnimTickOption = {
	0 : 'AlwaysTickPoseAndRefreshBones',
	1 : 'AlwaysTickPose',
	2 : 'OnlyTickMontagesWhenNotRendered',
	3 : 'OnlyTickPoseWhenRendered',
}

SkeletalMeshOptimizationImportance = {
	0 : 'SMOI_Off',
	1 : 'SMOI_Lowest',
	2 : 'SMOI_Low',
	3 : 'SMOI_Normal',
	4 : 'SMOI_High',
	5 : 'SMOI_Highest',
	6 : 'SMOI_MAX',
}

SkeletalMeshOptimizationType = {
	0 : 'SMOT_NumOfTriangles',
	1 : 'SMOT_MaxDeviation',
	2 : 'SMOT_TriangleOrDeviation',
	3 : 'SMOT_MAX',
}

SkeletalMeshTerminationCriterion = {
	0 : 'SMTC_NumOfTriangles',
	1 : 'SMTC_NumOfVerts',
	2 : 'SMTC_TriangleOrVert',
	3 : 'SMTC_AbsNumOfTriangles',
	4 : 'SMTC_AbsNumOfVerts',
	5 : 'SMTC_AbsTriangleOrVert',
	6 : 'SMTC_MAX',
}

EAirAbsorptionMethod = {
	0 : 'Linear',
	1 : 'CustomCurve',
}

EAudioOutputTarget = {
	0 : 'Speaker',
	1 : 'Controller',
	2 : 'ControllerFallbackToSpeaker',
}

EMaxConcurrentResolutionRule = {
	0 : 'PreventNew',
	1 : 'StopOldest',
	2 : 'StopFarthestThenPreventNew',
	3 : 'StopFarthestThenOldest',
	4 : 'StopLowestPriority',
	5 : 'StopQuietest',
	6 : 'StopLowestPriorityThenPreventNew',
}

EReverbSendMethod = {
	0 : 'Linear',
	1 : 'CustomCurve',
	2 : 'Manual',
}

ESkyLightSourceType = {
	0 : 'SLS_CapturedScene',
	1 : 'SLS_SpecifiedCubemap',
	2 : 'SLS_MAX',
}

ESoundDistanceCalc = {
	0 : 'SOUNDDISTANCE_Normal',
	1 : 'SOUNDDISTANCE_InfiniteXYPlane',
	2 : 'SOUNDDISTANCE_InfiniteXZPlane',
	3 : 'SOUNDDISTANCE_InfiniteYZPlane',
	4 : 'SOUNDDISTANCE_MAX',
}

ESoundSpatializationAlgorithm = {
	0 : 'SPATIALIZATION_Default',
	1 : 'SPATIALIZATION_HRTF',
}

EVirtualizationMode = {
	0 : 'Disabled',
	1 : 'PlayWhenSilent',
	2 : 'Restart',
}

EAudioRecordingExportType = {
	0 : 'SoundWave',
	1 : 'WavFile',
}

ESendLevelControlMethod = {
	0 : 'Linear',
	1 : 'CustomCurve',
	2 : 'Manual',
}

ESoundGroup = {
	0 : 'SOUNDGROUP_Default',
	1 : 'SOUNDGROUP_Effects',
	2 : 'SOUNDGROUP_UI',
	3 : 'SOUNDGROUP_Music',
	4 : 'SOUNDGROUP_Voice',
	5 : 'SOUNDGROUP_GameSoundGroup1',
	6 : 'SOUNDGROUP_GameSoundGroup2',
	7 : 'SOUNDGROUP_GameSoundGroup3',
	8 : 'SOUNDGROUP_GameSoundGroup4',
	9 : 'SOUNDGROUP_GameSoundGroup5',
	10 : 'SOUNDGROUP_GameSoundGroup6',
	11 : 'SOUNDGROUP_GameSoundGroup7',
	12 : 'SOUNDGROUP_GameSoundGroup8',
	13 : 'SOUNDGROUP_GameSoundGroup9',
	14 : 'SOUNDGROUP_GameSoundGroup10',
	15 : 'SOUNDGROUP_GameSoundGroup11',
	16 : 'SOUNDGROUP_GameSoundGroup12',
	17 : 'SOUNDGROUP_GameSoundGroup13',
	18 : 'SOUNDGROUP_GameSoundGroup14',
	19 : 'SOUNDGROUP_GameSoundGroup15',
	20 : 'SOUNDGROUP_GameSoundGroup16',
	21 : 'SOUNDGROUP_GameSoundGroup17',
	22 : 'SOUNDGROUP_GameSoundGroup18',
	23 : 'SOUNDGROUP_GameSoundGroup19',
	24 : 'SOUNDGROUP_GameSoundGroup20',
}

ESourceBusChannels = {
	0 : 'Mono',
	1 : 'Stereo',
}

ESourceBusSendLevelControlMethod = {
	0 : 'Linear',
	1 : 'CustomCurve',
	2 : 'Manual',
}

ESubmixChannelFormat = {
	0 : 'Device',
	1 : 'Stereo',
	2 : 'Quad',
	3 : 'FiveDotOne',
	4 : 'SevenDotOne',
	5 : 'Ambisonics',
	6 : 'Count',
}

ModulationParamMode = {
	0 : 'MPM_Normal',
	1 : 'MPM_Abs',
	2 : 'MPM_Direct',
	3 : 'MPM_MAX',
}

EDecompressionType = {
	0 : 'DTYPE_Setup',
	1 : 'DTYPE_Invalid',
	2 : 'DTYPE_Preview',
	3 : 'DTYPE_Native',
	4 : 'DTYPE_RealTime',
	5 : 'DTYPE_Procedural',
	6 : 'DTYPE_Xenon',
	7 : 'DTYPE_Streaming',
	8 : 'DTYPE_MAX',
}

ESoundWaveFFTSize = {
	0 : 'VerySmall_64',
	1 : 'Small_256',
	2 : 'Medium_512',
	3 : 'Large_1024',
	4 : 'VeryLarge_2048',
}

ESplineCoordinateSpace = {
	0 : 'Local',
	1 : 'World',
}

ESplinePointType = {
	0 : 'Linear',
	1 : 'Curve',
	2 : 'Constant',
	3 : 'CurveClamped',
	4 : 'CurveCustomTangent',
}

EImportanceLevel = {
	0 : 'IL_Off',
	1 : 'IL_Lowest',
	2 : 'IL_Low',
	3 : 'IL_Normal',
	4 : 'IL_High',
	5 : 'IL_Highest',
	6 : 'TEMP_BROKEN2',
	7 : 'EImportanceLevel_MAX',
}

ENormalMode = {
	0 : 'NM_PreserveSmoothingGroups',
	1 : 'NM_RecalculateNormals',
	2 : 'NM_RecalculateNormalsSmooth',
	3 : 'NM_RecalculateNormalsHard',
	4 : 'TEMP_BROKEN',
	5 : 'ENormalMode_MAX',
}

EOptimizationType = {
	0 : 'OT_NumOfTriangles',
	1 : 'OT_MaxDeviation',
	2 : 'OT_MAX',
}

ESplineMeshAxis = {
	0 : 'X',
	1 : 'Y',
	2 : 'Z',
}

EStaticMeshLODType = {
	0 : 'Reduction',
	1 : 'Proxy',
}

EOpacitySourceMode = {
	0 : 'OSM_Alpha',
	1 : 'OSM_ColorBrightness',
	2 : 'OSM_RedChannel',
	3 : 'OSM_GreenChannel',
	4 : 'OSM_BlueChannel',
}

EStereoLayerShape = {
	0 : 'SLSH_QuadLayer',
	1 : 'SLSH_CylinderLayer',
	2 : 'SLSH_CubemapLayer',
	3 : 'SLSH_MAX',
}

EStereoLayerType = {
	0 : 'SLT_WorldLocked',
	1 : 'SLT_TrackerLocked',
	2 : 'SLT_FaceLocked',
	3 : 'SLT_MAX',
}

ESubUVBoundingVertexCount = {
	0 : 'BVC_FourVertices',
	1 : 'BVC_EightVertices',
}

ECompositeTextureMode = {
	0 : 'CTM_Disabled',
	1 : 'CTM_NormalRoughnessToRed',
	2 : 'CTM_NormalRoughnessToGreen',
	3 : 'CTM_NormalRoughnessToBlue',
	4 : 'CTM_NormalRoughnessToAlpha',
	5 : 'CTM_MAX',
}

EHorizTextAligment = {
	0 : 'EHTA_Left',
	1 : 'EHTA_Center',
	2 : 'EHTA_Right',
}

ETextureCompressionQuality = {
	0 : 'TCQ_Default',
	1 : 'TCQ_Lowest',
	2 : 'TCQ_Low',
	3 : 'TCQ_Medium',
	4 : 'TCQ_High',
	5 : 'TCQ_Highest',
	6 : 'TCQ_MAX',
}

ETextureLossyCompressionAmount = {
	0 : 'TLCA_Default',
	1 : 'TLCA_None',
	2 : 'TLCA_Lowest',
	3 : 'TLCA_Low',
	4 : 'TLCA_Medium',
	5 : 'TLCA_High',
	6 : 'TLCA_Highest',
}

ETextureMipCount = {
	0 : 'TMC_ResidentMips',
	1 : 'TMC_AllMips',
	2 : 'TMC_AllMipsBiased',
	3 : 'TMC_MAX',
}

ETextureMipLoadOptions = {
	0 : 'Default',
	1 : 'AllMips',
	2 : 'OnlyFirstMip',
}

ETexturePowerOfTwoSetting = {
	0 : 'None',
	1 : 'PadToPowerOfTwo',
	2 : 'PadToSquarePowerOfTwo',
}

ETextureRenderTargetFormat = {
	0 : 'RTF_R8',
	1 : 'RTF_RG8',
	2 : 'RTF_RGBA8',
	3 : 'RTF_R16f',
	4 : 'RTF_RG16f',
	5 : 'RTF_RGBA16f',
	6 : 'RTF_R32f',
	7 : 'RTF_RG32f',
	8 : 'RTF_RGBA32f',
	9 : 'RTF_RGB10A2',
}

ETextureSamplerFilter = {
	0 : 'Point',
	1 : 'Bilinear',
	2 : 'Trilinear',
	3 : 'AnisotropicPoint',
	4 : 'AnisotropicLinear',
}

ETextureSourceArtType = {
	0 : 'TSAT_Uncompressed',
	1 : 'TSAT_PNGCompressed',
	2 : 'TSAT_DDSFile',
	3 : 'TSAT_MAX',
}

ETextureSourceFormat = {
	0 : 'TSF_Invalid',
	1 : 'TSF_G8',
	2 : 'TSF_BGRA8',
	3 : 'TSF_BGRE8',
	4 : 'TSF_RGBA16',
	5 : 'TSF_RGBA16F',
	6 : 'TSF_RGBA8',
	7 : 'TSF_RGBE8',
	8 : 'TSF_MAX',
}

EVerticalTextAligment = {
	0 : 'EVRTA_TextTop',
	1 : 'EVRTA_TextCenter',
	2 : 'EVRTA_TextBottom',
	3 : 'EVRTA_QuadTop',
}

TextureAddress = {
	0 : 'TA_Wrap',
	1 : 'TA_Clamp',
	2 : 'TA_Mirror',
	3 : 'TA_MAX',
}

TextureCompressionSettings = {
	0 : 'TC_Default',
	1 : 'TC_Normalmap',
	2 : 'TC_Masks',
	3 : 'TC_Grayscale',
	4 : 'TC_Displacementmap',
	5 : 'TC_VectorDisplacementmap',
	6 : 'TC_HDR',
	7 : 'TC_EditorIcon',
	8 : 'TC_Alpha',
	9 : 'TC_DistanceFieldFont',
	10 : 'TC_HDR_Compressed',
	11 : 'TC_BC7',
	12 : 'TC_ToonIndexed',
	13 : 'TC_MAX',
}

TextureFilter = {
	0 : 'TF_Nearest',
	1 : 'TF_Bilinear',
	2 : 'TF_Trilinear',
	3 : 'TF_Default',
	4 : 'TF_MAX',
}

TextureGroup = {
	0 : 'TEXTUREGROUP_World',
	1 : 'TEXTUREGROUP_WorldNormalMap',
	2 : 'TEXTUREGROUP_WorldSpecular',
	3 : 'TEXTUREGROUP_Character',
	4 : 'TEXTUREGROUP_CharacterNormalMap',
	5 : 'TEXTUREGROUP_CharacterSpecular',
	6 : 'TEXTUREGROUP_Weapon',
	7 : 'TEXTUREGROUP_WeaponNormalMap',
	8 : 'TEXTUREGROUP_WeaponSpecular',
	9 : 'TEXTUREGROUP_Vehicle',
	10 : 'TEXTUREGROUP_VehicleNormalMap',
	11 : 'TEXTUREGROUP_VehicleSpecular',
	12 : 'TEXTUREGROUP_Cinematic',
	13 : 'TEXTUREGROUP_Effects',
	14 : 'TEXTUREGROUP_EffectsNotFiltered',
	15 : 'TEXTUREGROUP_Skybox',
	16 : 'TEXTUREGROUP_UI',
	17 : 'TEXTUREGROUP_Lightmap',
	18 : 'TEXTUREGROUP_RenderTarget',
	19 : 'TEXTUREGROUP_MobileFlattened',
	20 : 'TEXTUREGROUP_ProcBuilding_Face',
	21 : 'TEXTUREGROUP_ProcBuilding_LightMap',
	22 : 'TEXTUREGROUP_Shadowmap',
	23 : 'TEXTUREGROUP_ColorLookupTable',
	24 : 'TEXTUREGROUP_Terrain_Heightmap',
	25 : 'TEXTUREGROUP_Terrain_Weightmap',
	26 : 'TEXTUREGROUP_Bokeh',
	27 : 'TEXTUREGROUP_IESLightProfile',
	28 : 'TEXTUREGROUP_Pixels2D',
	29 : 'TEXTUREGROUP_HierarchicalLOD',
	30 : 'TEXTUREGROUP_Impostor',
	31 : 'TEXTUREGROUP_ImpostorNormalDepth',
	32 : 'TEXTUREGROUP_8BitData',
	33 : 'TEXTUREGROUP_16BitData',
	34 : 'TEXTUREGROUP_Ground',
	35 : 'TEXTUREGROUP_Project01',
	36 : 'TEXTUREGROUP_Project02',
	37 : 'TEXTUREGROUP_Project03',
	38 : 'TEXTUREGROUP_Project04',
	39 : 'TEXTUREGROUP_Project05',
	40 : 'TEXTUREGROUP_Project06',
	41 : 'TEXTUREGROUP_Project07',
	42 : 'TEXTUREGROUP_Project08',
	43 : 'TEXTUREGROUP_Project09',
	44 : 'TEXTUREGROUP_Project10',
	45 : 'TEXTUREGROUP_MAX',
}

TextureMipGenSettings = {
	0 : 'TMGS_FromTextureGroup',
	1 : 'TMGS_SimpleAverage',
	2 : 'TMGS_Sharpen0',
	3 : 'TMGS_Sharpen1',
	4 : 'TMGS_Sharpen2',
	5 : 'TMGS_Sharpen3',
	6 : 'TMGS_Sharpen4',
	7 : 'TMGS_Sharpen5',
	8 : 'TMGS_Sharpen6',
	9 : 'TMGS_Sharpen7',
	10 : 'TMGS_Sharpen8',
	11 : 'TMGS_Sharpen9',
	12 : 'TMGS_Sharpen10',
	13 : 'TMGS_NoMipmaps',
	14 : 'TMGS_LeaveExistingMips',
	15 : 'TMGS_Blur1',
	16 : 'TMGS_Blur2',
	17 : 'TMGS_Blur3',
	18 : 'TMGS_Blur4',
	19 : 'TMGS_Blur5',
	20 : 'TMGS_Unfiltered',
	21 : 'TMGS_MAX',
}

ETimeStretchCurveMapping = {
	0 : 'T_Original',
	1 : 'T_TargetMin',
	2 : 'T_TargetMax',
	3 : 'MAX',
}

ETimecodeProviderSynchronizationState = {
	0 : 'Closed',
	1 : 'Error',
	2 : 'Synchronized',
	3 : 'Synchronizing',
}

ETimelineDirection = {
	0 : 'Forward',
	1 : 'Backward',
}

ETimelineLengthMode = {
	0 : 'TL_TimelineLength',
	1 : 'TL_LastKeyFrame',
}

ETwitterIntegrationDelegate = {
	0 : 'TID_AuthorizeComplete',
	1 : 'TID_TweetUIComplete',
	2 : 'TID_RequestComplete',
	3 : 'TID_MAX',
}

ETwitterRequestMethod = {
	0 : 'TRM_Get',
	1 : 'TRM_Post',
	2 : 'TRM_Delete',
	3 : 'TRM_MAX',
}

ERenderFocusRule = {
	0 : 'Always',
	1 : 'NonPointer',
	2 : 'NavigationOnly',
	3 : 'Never',
}

EUIScalingRule = {
	0 : 'ShortestSide',
	1 : 'LongestSide',
	2 : 'Horizontal',
	3 : 'Vertical',
	4 : 'Custom',
}

EUserDefinedStructureStatus = {
	0 : 'UDSS_UpToDate',
	1 : 'UDSS_Dirty',
	2 : 'UDSS_Error',
	3 : 'UDSS_Duplicate',
	4 : 'UDSS_MAX',
}

EVectorFieldConstructionOp = {
	0 : 'VFCO_Extrude',
	1 : 'VFCO_Revolve',
	2 : 'VFCO_MAX',
}

EWindSourceType = {
	0 : 'Directional',
	1 : 'Point',
}

EPSCPoolMethod = {
	0 : 'None',
	1 : 'AutoRelease',
	2 : 'ManualRelease',
	3 : 'ManualRelease_OnComplete',
	4 : 'FreeInPool',
}

EVisibilityAggressiveness = {
	0 : 'VIS_LeastAggressive',
	1 : 'VIS_ModeratelyAggressive',
	2 : 'VIS_MostAggressive',
	3 : 'VIS_Max',
}

EVolumeLightingMethod = {
	0 : 'VLM_VolumetricLightmap',
	1 : 'VLM_SparseVolumeLightingSamples',
}

EMediaPlayerOptionBooleanOverride = {
	0 : 'UseMediaPlayerSetting',
	1 : 'Enabled',
	2 : 'Disabled',
}

EClothingWindMethod = {
	0 : 'Legacy',
	1 : 'Accurate',
}

MaskTarget_PhysMesh = {
	0 : 'None',
	1 : 'MaxDistance',
	2 : 'BackstopDistance',
	3 : 'BackstopRadius',
	4 : 'AnimDriveMultiplier',
}

EMediaAudioCaptureDeviceFilter = {
	1 : 'Card',
	2 : 'Microphone',
	4 : 'Software',
	8 : 'Unknown',
}

EMediaPlayerTrack = {
	0 : 'Audio',
	1 : 'Caption',
	2 : 'Metadata',
	3 : 'Script',
	4 : 'Subtitle',
	5 : 'Text',
	6 : 'Video',
}

EMediaSoundChannels = {
	0 : 'Mono',
	1 : 'Stereo',
	2 : 'Surround',
}

EMediaSoundComponentFFTSize = {
	0 : 'Min_64',
	1 : 'Small_256',
	2 : 'Medium_512',
	3 : 'Large_1024',
}

EMediaVideoCaptureDeviceFilter = {
	1 : 'Card',
	2 : 'Software',
	4 : 'Unknown',
	8 : 'Webcam',
}

EMediaWebcamCaptureDeviceFilter = {
	1 : 'DepthSensor',
	2 : 'Front',
	4 : 'Rear',
	8 : 'Unknown',
}

ENavCostDisplay = {
	0 : 'TotalCost',
	1 : 'HeuristicOnly',
	2 : 'RealCostOnly',
}

ERecastPartitioning = {
	0 : 'Monotone',
	1 : 'Watershed',
	2 : 'ChunkyMonotone',
}

ERuntimeGenerationType = {
	0 : 'Static',
	1 : 'DynamicModifiersOnly',
	2 : 'Dynamic',
	3 : 'LegacyGeneration',
}

EVectorVMBaseTypes = {
	0 : 'Float',
	1 : 'Int',
	2 : 'Bool',
	3 : 'Num',
}

EVectorVMOp = {
	0 : 'done',
	1 : 'add',
	2 : 'sub',
	3 : 'mul',
	4 : 'div',
	5 : 'mad',
	6 : 'lerp',
	7 : 'rcp',
	8 : 'rsq',
	9 : 'sqrt',
	10 : 'neg',
	11 : 'abs',
	12 : 'exp',
	13 : 'exp2',
	14 : 'log',
	15 : 'log2',
	16 : 'sin',
	17 : 'cos',
	18 : 'tan',
	19 : 'asin',
	20 : 'acos',
	21 : 'atan',
	22 : 'atan2',
	23 : 'ceil',
	24 : 'floor',
	25 : 'fmod',
	26 : 'frac',
	27 : 'trunc',
	28 : 'clamp',
	29 : 'min',
	30 : 'max',
	31 : 'pow',
	32 : 'round',
	33 : 'sign',
	34 : 'step',
	35 : 'random',
	36 : 'noise',
	37 : 'cmplt',
	38 : 'cmple',
	39 : 'cmpgt',
	40 : 'cmpge',
	41 : 'cmpeq',
	42 : 'cmpneq',
	43 : 'select',
	44 : 'addi',
	45 : 'subi',
	46 : 'muli',
	47 : 'divi',
	48 : 'clampi',
	49 : 'mini',
	50 : 'maxi',
	51 : 'absi',
	52 : 'negi',
	53 : 'signi',
	54 : 'randomi',
	55 : 'cmplti',
	56 : 'cmplei',
	57 : 'cmpgti',
	58 : 'cmpgei',
	59 : 'cmpeqi',
	60 : 'cmpneqi',
	61 : 'bit_and',
	62 : 'bit_or',
	63 : 'bit_xor',
	64 : 'bit_not',
	65 : 'bit_lshift',
	66 : 'bit_rshift',
	67 : 'logic_and',
	68 : 'logic_or',
	69 : 'logic_xor',
	70 : 'logic_not',
	71 : 'f2i',
	72 : 'i2f',
	73 : 'f2b',
	74 : 'b2f',
	75 : 'i2b',
	76 : 'b2i',
	77 : 'inputdata_32bit',
	78 : 'inputdata_noadvance_32bit',
	79 : 'outputdata_32bit',
	80 : 'acquireindex',
	81 : 'external_func_call',
	82 : 'exec_index',
	83 : 'noise2D',
	84 : 'noise3D',
	85 : 'enter_stat_scope',
	86 : 'exit_stat_scope',
	87 : 'update_id',
	88 : 'acquire_id',
	89 : 'NumOpcodes',
}

EVectorVMOperandLocation = {
	0 : 'Register',
	1 : 'Constant',
	2 : 'Num',
}

EGameplayTaskRunResult = {
	0 : 'Error',
	1 : 'Failed',
	2 : 'Success_Paused',
	3 : 'Success_Active',
	4 : 'Success_Finished',
}

EGameplayTaskState = {
	0 : 'Uninitialized',
	1 : 'AwaitingActivation',
	2 : 'Paused',
	3 : 'Active',
	4 : 'Finished',
}

ETaskResourceOverlapPolicy = {
	0 : 'StartOnTop',
	1 : 'StartAtEnd',
}

EAISenseNotifyType = {
	0 : 'OnEveryPerception',
	1 : 'OnPerceptionChange',
}

EAILockSource = {
	0 : 'Animation',
	1 : 'Logic',
	2 : 'Script',
	3 : 'Gameplay',
	4 : 'MAX',
}

EAIOptionFlag = {
	0 : 'Default',
	1 : 'Enable',
	2 : 'Disable',
	3 : 'MAX',
}

EAIRequestPriority = {
	0 : 'SoftScript',
	1 : 'Logic',
	2 : 'HardScript',
	3 : 'Reaction',
	4 : 'Ultimate',
	5 : 'MAX',
}

EAITaskPriority = {
	0 : 'Lowest',
	64 : 'Low',
	127 : 'AutonomousAI',
	192 : 'High',
	254 : 'Ultimate',
}

EGenericAICheck = {
	0 : 'Less',
	1 : 'LessOrEqual',
	2 : 'Equal',
	3 : 'NotEqual',
	4 : 'GreaterOrEqual',
	5 : 'Greater',
	6 : 'IsTrue',
	7 : 'MAX',
}

EPawnActionAbortState = {
	0 : 'NeverStarted',
	1 : 'NotBeingAborted',
	2 : 'MarkPendingAbort',
	3 : 'LatentAbortInProgress',
	4 : 'AbortDone',
	5 : 'MAX',
}

EPawnActionEventType = {
	0 : 'Invalid',
	1 : 'FailedToStart',
	2 : 'InstantAbort',
	3 : 'FinishedAborting',
	4 : 'FinishedExecution',
	5 : 'Push',
}

EPawnActionResult = {
	0 : 'NotStarted',
	1 : 'InProgress',
	2 : 'Success',
	3 : 'Failed',
	4 : 'Aborted',
}

FAIDistanceType = {
	0 : 'Distance3D',
	1 : 'Distance2D',
	2 : 'DistanceZ',
	3 : 'MAX',
}

EArithmeticKeyOperation = {
	0 : 'Equal',
	1 : 'NotEqual',
	2 : 'Less',
	3 : 'LessOrEqual',
	4 : 'Greater',
	5 : 'GreaterOrEqual',
}

EBTBlackboardRestart = {
	0 : 'ValueChange',
	1 : 'ResultChange',
}

EBTChildIndex = {
	0 : 'FirstNode',
	1 : 'TaskNode',
}

EBTDecoratorLogic = {
	0 : 'Invalid',
	1 : 'Test',
	2 : 'And',
	3 : 'Or',
	4 : 'Not',
}

EBTFlowAbortMode = {
	0 : 'None',
	1 : 'LowerPriority',
	2 : 'Self',
	3 : 'Both',
}

EBTNodeResult = {
	0 : 'Succeeded',
	1 : 'Failed',
	2 : 'Aborted',
	3 : 'InProgress',
}

EBTParallelMode = {
	0 : 'AbortBackground',
	1 : 'WaitForBackground',
}

EBasicKeyOperation = {
	0 : 'Set',
	1 : 'NotSet',
}

ETextKeyOperation = {
	0 : 'Equal',
	1 : 'NotEqual',
	2 : 'Contain',
	3 : 'NotContain',
}

EBlackBoardEntryComparison = {
	0 : 'Equal',
	1 : 'NotEqual',
}

EPathExistanceQueryType = {
	0 : 'NavmeshRaycast2D',
	1 : 'HierarchicalQuery',
	2 : 'RegularPathFinding',
}

EPointOnCircleSpacingMethod = {
	0 : 'BySpaceBetween',
	1 : 'ByNumberOfPoints',
}

EAIParamType = {
	0 : 'Float',
	1 : 'Int',
	2 : 'Bool',
	3 : 'MAX',
}

EEQSNormalizationType = {
	0 : 'Absolute',
	1 : 'RelativeToScores',
}

EEnvDirection = {
	0 : 'TwoPoints',
	1 : 'Rotation',
}

EEnvOverlapShape = {
	0 : 'Box',
	1 : 'Sphere',
	2 : 'Capsule',
}

EEnvQueryHightlightMode = {
	0 : 'All',
	1 : 'Best5Pct',
	2 : 'Best25Pct',
}

EEnvQueryParam = {
	0 : 'Float',
	1 : 'Int',
	2 : 'Bool',
}

EEnvQueryRunMode = {
	0 : 'SingleResult',
	1 : 'RandomBest5Pct',
	2 : 'RandomBest25Pct',
	3 : 'AllMatching',
}

EEnvQueryStatus = {
	0 : 'Processing',
	1 : 'Success',
	2 : 'Failed',
	3 : 'Aborted',
	4 : 'OwnerLost',
	5 : 'MissingParam',
}

EEnvQueryTestClamping = {
	0 : 'None',
	1 : 'SpecifiedValue',
	2 : 'FilterThreshold',
}

EEnvQueryTrace = {
	0 : 'None',
	1 : 'Navigation',
	2 : 'Geometry',
	3 : 'NavigationOverLedges',
}

EEnvTestCost = {
	0 : 'Low',
	1 : 'Medium',
	2 : 'High',
}

EEnvTestDistance = {
	0 : 'Distance3D',
	1 : 'Distance2D',
	2 : 'DistanceZ',
	3 : 'DistanceAbsoluteZ',
}

EEnvTestDot = {
	0 : 'Dot3D',
	1 : 'Dot2D',
}

EEnvTestFilterOperator = {
	0 : 'AllPass',
	1 : 'AnyPass',
}

EEnvTestFilterType = {
	0 : 'Minimum',
	1 : 'Maximum',
	2 : 'Range',
	3 : 'Match',
}

EEnvTestPathfinding = {
	0 : 'PathExist',
	1 : 'PathCost',
	2 : 'PathLength',
}

EEnvTestPurpose = {
	0 : 'Filter',
	1 : 'Score',
	2 : 'FilterAndScore',
}

EEnvTestScoreEquation = {
	0 : 'Linear',
	1 : 'Square',
	2 : 'InverseLinear',
	3 : 'SquareRoot',
	4 : 'Constant',
}

EEnvTestScoreOperator = {
	0 : 'AverageScore',
	1 : 'MinScore',
	2 : 'MaxScore',
}

EEnvTestWeight = {
	0 : 'None',
	1 : 'Square',
	2 : 'Inverse',
	3 : 'Unused',
	4 : 'Constant',
	5 : 'Skip',
}

EEnvTraceShape = {
	0 : 'Line',
	1 : 'Box',
	2 : 'Sphere',
	3 : 'Capsule',
}

EPathFollowingAction = {
	0 : 'Error',
	1 : 'NoMove',
	2 : 'DirectMove',
	3 : 'PartialPath',
	4 : 'PathToGoal',
}

EPathFollowingRequestResult = {
	0 : 'Failed',
	1 : 'AlreadyAtGoal',
	2 : 'RequestSuccessful',
}

EPathFollowingResult = {
	0 : 'Success',
	1 : 'Blocked',
	2 : 'OffPath',
	3 : 'Aborted',
	4 : 'Skipped_DEPRECATED',
	5 : 'Invalid',
}

EPathFollowingStatus = {
	0 : 'Idle',
	1 : 'Waiting',
	2 : 'Paused',
	3 : 'Moving',
}

EPawnActionFailHandling = {
	0 : 'RequireSuccess',
	1 : 'IgnoreFailure',
}

EPawnActionMoveMode = {
	0 : 'UsePathfinding',
	1 : 'StraightLine',
}

EPawnSubActionTriggeringPolicy = {
	0 : 'CopyBeforeTriggering',
	1 : 'ReuseInstances',
}

ETeamAttitude = {
	0 : 'Friendly',
	1 : 'Neutral',
	2 : 'Hostile',
}

