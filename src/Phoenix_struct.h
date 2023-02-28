// Enum Phoenix.ENoiseSize
enum class ENoiseSize : uint8 {
	NoNoise = 0,
	SmallNoise = 1,
	MediumNoise = 2,
	LargeNoise = 3,
	HugeNoise = 4,
	UseSize = 5,
	ENoiseSize_MAX = 6
};

// Enum Phoenix.EImpactTypes
enum class EImpactTypes : uint8 {
	None = 0,
	BroomFlight = 1,
	Default = 2,
	ExitWater = 3,
	Explosion = 4,
	Fire = 5,
	Flesh = 6,
	FloatingInWater = 7,
	Footfall = 8,
	Ice = 9,
	Lift = 10,
	Metal = 11,
	Slide = 12,
	SpellDefault = 13,
	SpellDamage = 14,
	SpellDamageLarge = 15,
	Stone = 16,
	Water = 17,
	Wood = 18,
	EImpactTypes_MAX = 19
};

// Enum Phoenix.EBossStates
enum class EBossStates : uint8 {
	BS_None = 0,
	BS_Phase1 = 1,
	BS_Phase2 = 2,
	BS_Phase3 = 3,
	BS_Defeated = 4,
	BS_Victory = 5,
	BS_Finished = 6,
	BS_MAX = 7
};

// Enum Phoenix.EUIHealthBarType
enum class EUIHealthBarType : uint8 {
	HBT_Normal = 0,
	HBT_Boss = 1,
	HBT_Named = 2,
	HBT_Student = 3,
	HBT_None = 4,
	HBT_Count = 5,
	HBT_MAX = 6
};

// Enum Phoenix.EMarkupType
enum class EMarkupType : uint8 {
	NONE = 0,
	ACCIO_IMPULSE_SCALE = 1,
	ACCIO_TRANSITION_TO_WINGARDIUM = 2,
	ACCIO_INTERACT_ON = 3,
	ACCIO_INVULNERABLE_TIME = 4,
	ACCIO_HOVER_HEIGHT_OFFSET = 5,
	SET_ARRESTO_TIME_DILATION = 6,
	ARRESTO_DURATION = 7,
	BUMP_SOUND_THRESHOLD_OVERRIDE = 8,
	COLLISION_ADDITIONAL_CHARACTER_DAMAGE = 9,
	COLLISION_DAMAGE_SCALE = 10,
	COLLISION_DAMAGE_RECEIVED_SCALE = 11,
	CONFUNDO_DURATION = 12,
	CRUCIO_DURATION = 13,
	DEPULSO_IMPULSE_SCALE = 14,
	DEPULSO_LAUNCH_ANGLE = 15,
	DEPULSO_GUARANTEE_DESTROYED = 16,
	DESCENDO_DAMAGE_DELAY = 17,
	DIRECTIONAL_DESTRUCTION_FORCE_ADDITION = 18,
	DIRECTIONAL_DESTRUCTION_FORCE_SCALE = 19,
	RADIAL_DESTRUCTION_FORCE_ADDITION = 20,
	FALL_DAMAGE_MAXIMUM_PERCENT = 21,
	FIRE_DAMAGE_DELAY = 22,
	FIRE_DAMAGE_DELAY_CRITICAL = 23,
	FIRE_DEATH_IMPACT_INHIBITOR = 24,
	FIRE_INITIAL_RADIUS = 25,
	FIRE_FINAL_RADIUS = 26,
	PERK_LOW_HEALTH_PERFORM_FINISHER = 27,
	GLACIUS_DURATION = 28,
	HEALTH_MINIMUM = 29,
	IMPERIO_DURATION = 30,
	LEVIOSO_HOVER_HEIGHT_ADJ = 31,
	LEVIOSO_IGNORE_MASS_LIMIT = 32,
	LEVIOSO_NO_ROTATION = 33,
	LEVIOSO_ROTATION_PITCH = 34,
	LEVIOSO_ROTATION_ROLL = 35,
	LEVIOSO_ROTATION_YAW = 36,
	LEVIOSO_DURATION = 37,
	OPPUGNO_USE_PROJECTILE_REPLACEMENT = 38,
	PETRIFICUS_DURATION = 39,
	PROVIDES_COVER = 40,
	PUSH_FORWARD_VECTOR_X = 41,
	PUSH_FORWARD_VECTOR_Y = 42,
	PUSH_FORWARD_VECTOR_Z = 43,
	PUSH_IMPULSE_SCALE = 44,
	PROTEGO_PERFECT_DAMAGE_SCALE = 45,
	REVELIO_DEPTH_OVERRIDE = 46,
	REVELIO_DISTANCE_OVERRIDE = 47,
	REVELIO_HILIGHT_AS_ENEMY = 48,
	REVELIO_HIDDEN_IGNORE_NEAR_CHECK = 49,
	REVELIO_HIDDEN_IGNORE_LOOKAT_CHECK = 50,
	REVELIO_HIDDEN_DISABLED = 51,
	REVELIO_THRU_WALLS = 52,
	REPAIR_TARGETABLE = 53,
	REPAIR_AUTO_DESTROY_COMPONENT = 54,
	STUPEFY_STUN_TIME = 55,
	SPELLS_USE_CENTER_FOR_BEAM_TARGET_FX = 56,
	SPELLS_USE_CENTER_FOR_IMPACT_FX = 57,
	TARGETING_WEIGHT = 58,
	TARGETING_RADIUS = 59,
	TARGETING_TOP_OFFSET = 60,
	TARGETING_BOTTOM_OFFSET = 61,
	TARGETING_ALLOW_STENCIL = 62,
	TARGETING_IGNORE_LOS = 63,
	TARGETING_COMBAT_MODE = 64,
	TRANSFORMATION_DURATION = 65,
	TRANSFORMATION_ZERO_ORIENTATION = 66,
	TRANSFORMATION_APPLY_FORCE = 67,
	VELOCITY_TRACKER_DURATION_SCALE = 68,
	WINGARDIUM_HOLD_AT_END_TIME = 69,
	WINGARDIUM_IGNORE_MASS_LIMIT = 70,
	WINGARDIUM_ONLY_AFFECT_HIT_COMPONENT = 71,
	WINGARDIUM_OVERRIDE_FACE_CAMERA = 72,
	WINGARDIUM_OVERRIDE_DPAD_LEFT = 73,
	WINGARDIUM_OVERRIDE_DPAD_RIGHT = 74,
	WINGARDIUM_INITIALLY_FACE_TARGET = 75,
	WINGARDIUM_BOUNDS_SCALE = 76,
	WINGARDIUM_BOUNDS_MAX = 77,
	WINGARDIUM_ANGULAR_IMPULSE_SCALE = 78,
	WINGARDIUM_LINEAR_IMPULSE_SCALE = 79,
	EMarkupType_MAX = 80
};

// Enum Phoenix.EObjectSizeClass
enum class EObjectSizeClass : uint8 {
	XXS = 0,
	XS = 1,
	S = 2,
	M = 3,
	L = 4,
	XL = 5,
	XXL = 6,
	AutoGenerate = 7,
	EObjectSizeClass_MAX = 8
};

// Enum Phoenix.EFlammableEnum
enum class EFlammableEnum : uint8 {
	FE_INFLAMMABLE = 0,
	FE_FLAMMABLE = 1,
	FE_USE_MPD = 2,
	FE_MAX = 3
};

// Enum Phoenix.EWidgetType
enum class EWidgetType : uint8 {
	WT_Social = 0,
	WT_Enemy = 1,
	WT_Creature = 2,
	WT_Blip = 3,
	WT_Interact = 4,
	WT_Climb = 5,
	WT_SocialBlip = 6,
	WT_None = 7,
	WT_MAX = 8
};

// Enum Phoenix.EInteractiveState
enum class EInteractiveState : uint8 {
	Normal = 0,
	Any = 1,
	Locked = 2,
	Unlocked = 3,
	Open = 4,
	Closed = 5,
	Frozen = 6,
	Wet = 7,
	OnFire = 8,
	Invisible = 9,
	Immobilized = 10,
	ScaleIncreased = 11,
	ScaledDecreased = 12,
	MassIncreased = 13,
	MassDecreased = 14,
	Undamaged = 15,
	Damage_2 = 16,
	Damage_3 = 17,
	Damage_4 = 18,
	Destroyed = 19,
	Cut = 20,
	Custom_2 = 21,
	Custom_3 = 22,
	Custom_4 = 23,
	Custom_5 = 24,
	Custom_6 = 25,
	Custom_7 = 26,
	Custom_8 = 27,
	Custom_9 = 28,
	Custom_10 = 29,
	Failed = 30,
	Highlighted = 31,
	Dead = 32,
	Unsolved = 33,
	Solved = 34,
	Harvested = 35,
	StateCount = 36,
	None = 255,
	EInteractiveState_MAX = 256
};

// Enum Phoenix.EInventoryObjectSpawnType
enum class EInventoryObjectSpawnType : uint8 {
	InventoryObjectInLevel = 0,
	InventoryObjectDropped = 1,
	InventoryObjectSpawner = 2,
	EInventoryObjectSpawnType_MAX = 3
};

// Enum Phoenix.EGamepadTextInputResult
enum class EGamepadTextInputResult : uint8 {
	Unsupported = 0,
	AlreadyOpen = 1,
	UtilsAPIFailed = 2,
	FieldToLong = 3,
	DialogFailed = 4,
	StringInvalid = 5,
	DialogClosed = 6,
	EGamepadTextInputResult_MAX = 7
};

// Enum Phoenix.EInventoryChangeReason
enum class EInventoryChangeReason : uint8 {
	INVENTORY_CHANGE_REASON_GENERIC = 0,
	INVENTORY_CHANGE_REASON_SOLD = 1,
	INVENTORY_CHANGE_REASON_STOLEN = 2,
	INVENTORY_CHANGE_REASON_PLANTED = 3,
	INVENTORY_CHANGE_REASON_CONSOLE_DEBUG = 4,
	INVENTORY_CHANGE_REASON_POPULATE_VENDOR = 5,
	INVENTORY_CHANGE_REASON_TRANSFERRED = 6,
	INVENTORY_CHANGE_REASON_DROPPED = 7,
	INVENTORY_CHANGE_REASON_GIFTED = 8,
	INVENTORY_CHANGE_REASON_ACTIVITY = 9,
	INVENTORY_CHANGE_REASON_CURRICULUM = 10,
	INVENTORY_CHANGE_REASON_LOOT = 11,
	INVENTORY_CHANGE_REASON_MAIL = 12,
	INVENTORY_CHANGE_REASON_MISSION = 13,
	INVENTORY_CHANGE_REASON_CREATURES = 14,
	INVENTORY_CHANGE_REASON_CRIME = 15,
	INVENTORY_CHANGE_REASON_HERBOLOGY = 16,
	INVENTORY_CHANGE_REASON_POTION_BREW = 17,
	INVENTORY_CHANGE_REASON_CONVERTER = 18,
	INVENTORY_CHANGE_REASON_CONJURATION = 19,
	INVENTORY_CHANGE_REASON_USED = 20,
	INVENTORY_CHANGE_REASON_FORAGED = 21,
	INVENTORY_CHANGE_REASON_PURCHASE = 22,
	INVENTORY_CHANGE_REASON_GEAR_TRANSFER = 23,
	INVENTORY_CHANGE_REASON_MAX = 24
};

// Enum Phoenix.ELeftArmState
enum class ELeftArmState : uint8 {
	None = 0,
	EquipItem = 1,
	HoldItem = 2,
	PlayExecuteMotion = 3,
	PlayHandOnlyMotion = 4,
	AllowMotionTakeover = 5,
	StopMotionOnly = 6,
	StopMotionAndHideItem = 7,
	HideItem = 8,
	ELeftArmState_MAX = 9
};

// Enum Phoenix.ERightArmState
enum class ERightArmState : uint8 {
	None = 0,
	EquipItem = 1,
	UnEquipItem = 2,
	HoldItem = 3,
	PlayExecuteMotion = 4,
	PlayHandOnlyMotion = 5,
	AllowMotionTakeover = 6,
	StopMotionOnly = 7,
	StopMotionAndHideItem = 8,
	HideItem = 9,
	TargetSighted = 10,
	PlayAlertedMotion = 11,
	PlayHeavyAniticipationMotion = 12,
	Optional_PlayHandOnlyMotion = 13,
	StartLumos = 14,
	Channeling = 15,
	Transfiguration = 16,
	WandCastFailed = 17,
	ERightArmState_MAX = 18
};

// Enum Phoenix.ECombatAdditiveState
enum class ECombatAdditiveState : uint8 {
	None = 0,
	Inactive = 1,
	Active = 2,
	ECombatAdditiveState_MAX = 3
};

// Enum Phoenix.EStationInteraction
enum class EStationInteraction : uint8 {
	STATION_INTERACTION_CURRENT_NONE = 0,
	STATION_INTERACTION_CURRENT_ENTERING = 1,
	STATION_INTERACTION_CURRENT_INSIDE = 2,
	STATION_INTERACTION_CURRENT_EXITING = 3,
	STATION_INTERACTION_DESIRED_NONE = 4,
	STATION_INTERACTION_DESIRED_ENTER = 5,
	STATION_INTERACTION_DESIRED_ENTER_NOW = 6,
	STATION_INTERACTION_DESIRED_EXIT = 7,
	STATION_INTERACTION_DESIRED_EXITNOW = 8,
	STATION_INTERACTION_DESIRED_AUTO_EXIT = 9,
	STATION_INTERACTION_MAIL_START = 10,
	STATION_INTERACTION_MAIL_END = 11,
	STATION_INTERACTION_MISSION_START = 12,
	STATION_INTERACTION_MISSION_END = 13,
	STATION_INTERACTION_MAX = 14
};

// Enum Phoenix.EGenderVoice
enum class EGenderVoice : uint8 {
	VOICE_MALE = 0,
	VOICE_FEMALE = 1,
	VOICE_MAX = 2
};

// Enum Phoenix.SocialSemanticIDs
enum class SocialSemanticIDs : uint8 {
	SOCIAL_SEMANTIC_ALARM = 0,
	SOCIAL_SEMANTIC_AMUSEMENT = 1,
	SOCIAL_SEMANTIC_ANGRY = 2,
	SOCIAL_SEMANTIC_ANGUISH = 3,
	SOCIAL_SEMANTIC_ANNOYANCE = 4,
	SOCIAL_SEMANTIC_ANTICIPATION = 5,
	SOCIAL_SEMANTIC_ANXIETY = 6,
	SOCIAL_SEMANTIC_CONFUSED = 7,
	SOCIAL_SEMANTIC_DEAD = 8,
	SOCIAL_SEMANTIC_DEFAULT = 9,
	SOCIAL_SEMANTIC_DELIGHT = 10,
	SOCIAL_SEMANTIC_DISGUST = 11,
	SOCIAL_SEMANTIC_ENCUMBEREDFORWEATHER = 12,
	SOCIAL_SEMANTIC_ENCUMBEREDONEHANDED = 13,
	SOCIAL_SEMANTIC_ENCUMBEREDTWOHANDED = 14,
	SOCIAL_SEMANTIC_FEAR = 15,
	SOCIAL_SEMANTIC_HAPPY = 16,
	SOCIAL_SEMANTIC_IMPRESSED = 17,
	SOCIAL_SEMANTIC_NEUTRAL = 18,
	SOCIAL_SEMANTIC_PACIFY = 19,
	SOCIAL_SEMANTIC_SAD = 20,
	SOCIAL_SEMANTIC_SICK = 21,
	SOCIAL_SEMANTIC_SLEEP = 22,
	SOCIAL_SEMANTIC_SURPRISE = 23,
	SOCIAL_SEMANTIC_TRUST = 24,
	SOCIAL_SEMANTIC_VALOR = 25,
	SOCIAL_SEMANTIC_CENTAURS = 26,
	SOCIAL_SEMANTIC_COASTALREGION = 27,
	SOCIAL_SEMANTIC_FORBIDDENREACHES = 28,
	SOCIAL_SEMANTIC_GRYFFINDOR = 29,
	SOCIAL_SEMANTIC_HOGSMEADE = 30,
	SOCIAL_SEMANTIC_HUFFLEPUFF = 31,
	SOCIAL_SEMANTIC_MIDLANDS = 32,
	SOCIAL_SEMANTIC_RAVENCLAW = 33,
	SOCIAL_SEMANTIC_ROOKWOODEXTORTIONISTS = 34,
	SOCIAL_SEMANTIC_ROOKWOODPOACHERS = 35,
	SOCIAL_SEMANTIC_ROOKWOODTHIEVES = 36,
	SOCIAL_SEMANTIC_SLYTHERIN = 37,
	SOCIAL_SEMANTIC_WETLANDS = 38,
	SOCIAL_SEMANTIC_BEASTS = 39,
	SOCIAL_SEMANTIC_DADA = 40,
	SOCIAL_SEMANTIC_DARKARTS = 41,
	SOCIAL_SEMANTIC_HERBOLOGY = 42,
	SOCIAL_SEMANTIC_INFILTRATOR = 43,
	SOCIAL_SEMANTIC_SOCIALITE = 44,
	SOCIAL_SEMANTIC_ARITHMANCY = 45,
	SOCIAL_SEMANTIC_ARTAPPRECIATION = 46,
	SOCIAL_SEMANTIC_ASTRONOMY = 47,
	SOCIAL_SEMANTIC_CHARMS = 48,
	SOCIAL_SEMANTIC_DIVINATION = 49,
	SOCIAL_SEMANTIC_DUELING = 50,
	SOCIAL_SEMANTIC_HISTORY = 51,
	SOCIAL_SEMANTIC_MUGGLESTUDIES = 52,
	SOCIAL_SEMANTIC_MUSIC = 53,
	SOCIAL_SEMANTIC_POTIONS = 54,
	SOCIAL_SEMANTIC_QUIDDITCH = 55,
	SOCIAL_SEMANTIC_SANGUINECIRCLE = 56,
	SOCIAL_SEMANTIC_SCHOLAR = 57,
	SOCIAL_SEMANTIC_TRANSFIGURATION = 58,
	SOCIAL_SEMANTIC_TRICKSTERS = 59,
	SOCIAL_SEMANTIC_COURAGE = 60,
	SOCIAL_SEMANTIC_EMPATHY = 61,
	SOCIAL_SEMANTIC_HUMOR = 62,
	SOCIAL_SEMANTIC_SOCIAL = 63,
	SOCIAL_SEMANTIC_TRADITIONAL = 64,
	SOCIAL_SEMANTIC_HASTITUDE = 65,
	SOCIAL_SEMANTIC_LAWFULNESS = 66,
	SOCIAL_SEMANTIC_COUNT = 67,
	SOCIAL_SEMANTIC_MAX = 68
};

// Enum Phoenix.AvaAudioDialogueFlags
enum class AvaAudioDialogueFlags : uint8 {
	DLGFLAG_None = 0,
	DLGFLAG_FromConversation = 1,
	DLGFLAG_StartPaused = 2,
	DLGFLAG_DontDispatchLipsyncMessage = 4,
	DLGFLAG_NoQueuingLimits = 8,
	DLGFLAG_SuppressSubtitles = 16,
	DLGFLAG_NonSpatialized = 32,
	DLGFLAG_UseCinematicPolyphony = 64,
	DLGFLAG_MouthLipsyncOnly = 128,
	DLGFLAG_MAX = 129
};

// Enum Phoenix.HouseIds
enum class HouseIds : uint8 {
	HOUSE_GRYFFINDOR = 0,
	HOUSE_HUFFLEPUFF = 1,
	HOUSE_RAVENCLAW = 2,
	HOUSE_SLYTHERIN = 3,
	HOUSE_UNAFFILIATED = 4,
	HOUSE_COUNT = 5,
	HOUSE_MAX = 6
};

// Enum Phoenix.ELockStates
enum class ELockStates : uint8 {
	Unlocked = 0,
	Locked = 1,
	LastLockState = 2,
	ELockStates_MAX = 3
};

// Enum Phoenix.EEnemy_ParryButtonPressed
enum class EEnemy_ParryButtonPressed : uint8 {
	None = 0,
	Parry = 1,
	DodgeBlock = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.EEnemy_ParryDodgeStyle
enum class EEnemy_ParryDodgeStyle : uint8 {
	RollAway = 0,
	RollPerpendicular = 1,
	RollTowards = 2,
	DodgeAway = 3,
	DodgePerpendicular = 4,
	DodgeTowards = 5,
	EEnemy_MAX = 6
};

// Enum Phoenix.EEnemy_ParryCounterStyle
enum class EEnemy_ParryCounterStyle : uint8 {
	Default = 0,
	Direct = 1,
	Downward = 2,
	Upward = 3,
	EEnemy_MAX = 4
};

// Enum Phoenix.EEnemy_ParryCounterStepDirection
enum class EEnemy_ParryCounterStepDirection : uint8 {
	Default = 0,
	Forwards = 1,
	Backwards = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.EEnemy_ParryResponseType
enum class EEnemy_ParryResponseType : uint8 {
	Default = 0,
	Massive = 1,
	Heavy = 2,
	Sustained = 3,
	EEnemy_MAX = 4
};

// Enum Phoenix.EEnemy_ParryCounterType
enum class EEnemy_ParryCounterType : uint8 {
	Default = 0,
	None = 1,
	EEnemy_MAX = 2
};

// Enum Phoenix.EStationExitCallBack
enum class EStationExitCallBack : uint8 {
	InteractionCompleteCallback = 0,
	StartApparateCallback = 1,
	DestructionCallback = 2,
	DoNothingCallback = 3,
	DoNothingCallbackAndClear = 4,
	EStationExitCallBack_MAX = 5
};

// Enum Phoenix.ESEAllowBTShutdownPriority
enum class ESEAllowBTShutdownPriority : uint8 {
	LowestPriority = 0,
	SeatFillerPriority = 1,
	HighestPriority = 2,
	ESEAllowBTShutdownPriority_MAX = 3
};

// Enum Phoenix.ESEPrecacheFleshPriority
enum class ESEPrecacheFleshPriority : uint8 {
	CachedPriority = 0,
	BluePrintPriority = 1,
	PerformTaskPriority = 2,
	CompanionPriority = 3,
	MissionPriority = 4,
	ConversationPriority = 5,
	CinematicPriority = 6,
	ESEPrecacheFleshPriority_MAX = 7
};

// Enum Phoenix.ESchedulingPriority
enum class ESchedulingPriority : uint8 {
	ScheduledEntityPriority = 0,
	BluePrintPriority = 1,
	CompanionPriority = 2,
	NonCombatPriority = 3,
	NPCPriority = 4,
	EnemyPriority = 5,
	CinematicPriority = 6,
	SystemPriority = 7,
	TransientAction = 8,
	ShutdownPriority = 9,
	ForcedShutdownPriority = 10,
	ESchedulingPriority_MAX = 11
};

// Enum Phoenix.E_Goal
enum class E_Goal : uint8 {
	None = 0,
	Current = 1,
	Future = 2,
	E_MAX = 3
};

// Enum Phoenix.EGoalStatusFlags
enum class EGoalStatusFlags : uint8 {
	STATUS_FLAG_NONE = 0,
	STATUS_FLAG_INTRANSIT = 1,
	STATUS_FLAG_STATION_REQUIRED = 2,
	STATUS_FLAG_INTERRUPTED = 4,
	STATUS_FLAG_COMPLETE = 8,
	STATUS_FLAG_DYNAMIC_IN_PROGRESS = 16,
	STATUS_FLAG_FAST_TRAVEL = 32,
	STATUS_FLAG_ENTER_COMPLETE_CALLBACK = 64,
	STATUS_FLAG_EXIT_COMPLETE_CALLBACK = 128,
	STATUS_FLAG_MAX = 129
};

// Enum Phoenix.EMountMovementState
enum class EMountMovementState : uint8 {
	Ground = 0,
	Flying = 1,
	Takeoff = 2,
	Landing = 3,
	EMountMovementState_MAX = 4
};

// Enum Phoenix.ESocialResponseContext
enum class ESocialResponseContext : uint8 {
	None = 0,
	InTransit = 1,
	InStation = 2,
	ESocialResponseContext_MAX = 3
};

// Enum Phoenix.EAdditiveBodyState
enum class EAdditiveBodyState : uint8 {
	None = 0,
	Reacting = 1,
	EAdditiveBodyState_MAX = 2
};

// Enum Phoenix.EFullBodyState
enum class EFullBodyState : uint8 {
	None = 0,
	Moving = 1,
	Combat = 2,
	FlooPowder = 3,
	PortKey = 4,
	Sprinting = 5,
	Jumping = 6,
	FireSpell = 7,
	Blocking = 8,
	Parrying = 9,
	Climbing = 10,
	ClimbingLadder = 11,
	Falling = 12,
	Dodging = 13,
	Reacting = 14,
	Teleporting = 15,
	Harvesting = 16,
	PlantSeed = 17,
	StationInteract = 18,
	PickupBucket = 19,
	PutDownBucket = 20,
	SpreadFeed = 21,
	AncientMagic = 22,
	StartCatchCarry = 23,
	CatchCarry = 24,
	StartCarry = 25,
	EndCarry = 26,
	Swimming = 27,
	ButtSliding = 28,
	OpeningChest = 29,
	Cinematic = 30,
	DodgeDucking = 31,
	ShadowBlinking = 32,
	EFullBodyState_MAX = 33
};

// Enum Phoenix.EParryState
enum class EParryState : uint8 {
	None = 0,
	Swipe1 = 1,
	Swipe2 = 2,
	RightToLeft_Down = 3,
	LeftToRight_Up = 4,
	RightToLeft_Up = 5,
	LeftToRight_Down = 6,
	EParryState_MAX = 7
};

// Enum Phoenix.EPartialBodyState
enum class EPartialBodyState : uint8 {
	None = 0,
	Protego = 1,
	SpellCombo = 2,
	WandEquip = 3,
	SpellFinisher = 4,
	Carry = 5,
	PickupSighted = 6,
	PickupCollect = 7,
	LootCollect = 8,
	StationInteract = 9,
	AttackAnticipation = 10,
	UseInventoryItem = 11,
	WandEquipped = 12,
	BlockedByWall = 13,
	ChannelSpell = 14,
	Cinematic = 15,
	Lumos = 16,
	WandUnEquip = 17,
	Waving = 18,
	EPartialBodyState_MAX = 19
};

// Enum Phoenix.ERightArmPriority
enum class ERightArmPriority : uint8 {
	None = 0,
	LowestPriority = 1,
	UpperBodyIdle = 2,
	UpperBodyAlert = 3,
	UpperBodyAnticipation = 4,
	ChannelSpell = 5,
	UpperBodyFlourish = 6,
	FullBodyUnderLumos = 7,
	Lumos = 8,
	FullBodyUsage = 9,
	UpperBodyUsage = 10,
	WandCastFail = 11,
	FullBodyAbleAbility = 12,
	UpperBodyAbleAbility = 13,
	Cinematic = 14,
	HighestPriority = 15,
	ERightArmPriority_MAX = 16
};

// Enum Phoenix.EMissionComplete
enum class EMissionComplete : uint8 {
	Complete = 0,
	NotComplete = 1,
	EMissionComplete_MAX = 2
};

// Enum Phoenix.EMissionStatus
enum class EMissionStatus : uint8 {
	PreActive = 0,
	Activating = 1,
	Active = 2,
	PostActive = 3,
	Complete = 4,
	Failed = 5,
	Invalid = 6,
	Count = 7,
	EMissionStatus_MAX = 8
};

// Enum Phoenix.EComboType
enum class EComboType : uint8 {
	None = 0,
	Hit_Light = 1,
	Hit_Parry = 2,
	Hit_Heavy = 3,
	Hit_Heavy_2_Plus = 4,
	Hit_Depulso_Oppugno = 5,
	Hit_SendTarget = 6,
	Hit_Finisher = 7,
	ProtegoImpact = 8,
	EComboType_MAX = 9
};

// Enum Phoenix.ESpellCategory
enum class ESpellCategory : uint8 {
	None = 0,
	CC = 1,
	Forceful = 2,
	Heavy = 3,
	Tool = 4,
	Sanctuary = 5,
	DarkArts = 6,
	ESpellCategory_MAX = 7
};

// Enum Phoenix.ENPC_TargetAwareState
enum class ENPC_TargetAwareState : uint8 {
	None = 0,
	Unaware = 1,
	Aware = 2,
	Alert = 3,
	Attack = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ECharacterDeathType
enum class ECharacterDeathType : uint8 {
	Default = 0,
	SplatteringHighFallDeath = 1,
	Spell = 2,
	Custom = 3,
	ECharacterDeathType_MAX = 4
};

// Enum Phoenix.EGenderPronoun
enum class EGenderPronoun : uint8 {
	GENDER_WIZARD = 0,
	GENDER_WITCH = 1,
	GENDER_MAX = 2
};

// Enum Phoenix.SocialHeritageStatusIDs
enum class SocialHeritageStatusIDs : uint8 {
	SOCIAL_HERITAGE_STATUS_HALFBLOOD = 0,
	SOCIAL_HERITAGE_STATUS_MUGGLEBORN = 1,
	SOCIAL_HERITAGE_STATUS_PUREBLOOD = 2,
	SOCIAL_HERITAGE_STATUS_SQUIB = 3,
	SOCIAL_HERITAGE_STATUS_COUNT = 4,
	SOCIAL_HERITAGE_STATUS_MAX = 5
};

// Enum Phoenix.EEdgeState
enum class EEdgeState : uint8 {
	None = 0,
	FirmlyOnGround = 1,
	EdgeBlocked = 2,
	SlightlyOverEdge = 3,
	FullyPastEdge = 4,
	MovingBackToEdge = 5,
	EEdgeState_MAX = 6
};

// Enum Phoenix.EWandLinkResult
enum class EWandLinkResult : uint8 {
	LethalExplode = 0,
	NonLethalGetup = 1,
	NonLethalProne = 2,
	HarlowEnd = 3,
	EWandLinkResult_MAX = 4
};

// Enum Phoenix.EGearSlotIDEnum
enum class EGearSlotIDEnum : uint8 {
	HEAD = 0,
	OUTFIT = 1,
	BACK = 2,
	NECK = 3,
	HAND = 4,
	FACE = 5,
	Num = 6,
	EGearSlotIDEnum_MAX = 7
};

// Enum Phoenix.ELockOnReticleType
enum class ELockOnReticleType : uint8 {
	None = 0,
	LockedOn = 1,
	AimMode = 2,
	Both = 3,
	Retaliate = 4,
	ELockOnReticleType_MAX = 5
};

// Enum Phoenix.ETargetingMode
enum class ETargetingMode : uint8 {
	None = 0,
	AutoTarget = 1,
	LockOn = 2,
	ETargetingMode_MAX = 3
};

// Enum Phoenix.EBulletinBoardType
enum class EBulletinBoardType : uint8 {
	BULLETIN_BOARD_TYPE_HOGWARTS = 0,
	BULLETIN_BOARD_TYPE_HOGSMEADE = 1,
	BULLETIN_BOARD_TYPE_ROOKWOOD_THIEF = 2,
	BULLETIN_BOARD_TYPE_ROOKWOOD_POACHER = 3,
	BULLETIN_BOARD_TYPE_MAX = 4
};

// Enum Phoenix.EMailType
enum class EMailType : uint8 {
	MAIL_TYPE_LETTER = 0,
	MAIL_TYPE_BULLETIN_BOARD_POST = 1,
	MAIL_TYPE_HOGSMEADE_POST = 2,
	MAIL_TYPE_THIEF_POST = 3,
	MAIL_TYPE_POACHER_POST = 4,
	MAIL_TYPE_SHOP_POST = 5,
	MAIL_TYPE_POSTER = 6,
	MAIL_TYPE_COUNT = 7,
	MAIL_TYPE_MAX = 8
};

// Enum Phoenix.EStreamingBehaviorMode
enum class EStreamingBehaviorMode : uint8 {
	Loading = 0,
	Flight = 1,
	Gameplay = 2,
	EStreamingBehaviorMode_MAX = 3
};

// Enum Phoenix.ENPC_Mobility
enum class ENPC_Mobility : uint8 {
	None = 0,
	Default = 1,
	Attack = 2,
	Pressure = 3,
	Far = 4,
	RunTo = 5,
	Wander = 6,
	Scared = 7,
	Flee = 8,
	Cover = 9,
	Close = 10,
	Evade = 11,
	SeekWeapon = 12,
	Dynamic = 13,
	DynamicTarget = 14,
	DynamicSprint = 15,
	ScheduledEntity = 16,
	FollowPlayer = 17,
	Swim = 18,
	Crouch = 19,
	OnFire = 20,
	Charred = 21,
	Crouching = 22,
	UpStairs = 23,
	DownStairs = 24,
	UpSlope = 25,
	DownSlope = 26,
	Retreat = 27,
	RunToNear = 28,
	RetreatSplit = 29,
	CombatWalk = 30,
	CombatJog = 31,
	CombatRun = 32,
	CharredRunTo = 33,
	TooClose = 34,
	Alert = 35,
	Outside = 36,
	Stealth = 37,
	BackOnNav = 38,
	Charge = 39,
	RecoverWeapon = 40,
	PointOfInterest = 41,
	Override = 42,
	Count = 43,
	ENPC_MAX = 44
};

// Enum Phoenix.ENPC_Event
enum class ENPC_Event : uint8 {
	None = 0,
	TransientWeaponActivate = 1,
	TransientWeaponDeactivate = 2,
	TombProtectorMeteor_Choose = 3,
	TombProtectorMeteor_Break = 4,
	TombProtectorMeteor_Throw = 5,
	ENPC_MAX = 6
};

// Enum Phoenix.EEnemyAIState
enum class EEnemyAIState : uint8 {
	None = 0,
	Wander = 1,
	Attack = 2,
	FollowPath = 3,
	Stationary = 4,
	Dead = 5,
	Deprecated_Reacting = 6,
	DEPRECATED_Scared = 7,
	Flee = 8,
	FollowPlayer = 9,
	ScheduledEntity = 10,
	Sidekick = 11,
	OnFire = 12,
	Resurrecting = 13,
	FollowSpline = 14,
	Investigate = 15,
	EEnemyAIState_MAX = 16
};

// Enum Phoenix.ENPC_AudioState
enum class ENPC_AudioState : uint8 {
	None = 0,
	Unaware = 1,
	Alerted = 2,
	Attacking = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.EEnemyAIActionDoneReason
enum class EEnemyAIActionDoneReason : uint8 {
	Stop = 0,
	Abort = 1,
	EEnemyAIActionDoneReason_MAX = 2
};

// Enum Phoenix.EEnemyAIAction
enum class EEnemyAIAction : uint8 {
	None = 0,
	BecomeAware = 1,
	LoseAware = 2,
	LosingTarget = 3,
	DEPRECATED_SeekingWeapon = 4,
	Lumos = 5,
	StoreActiveWeapon = 6,
	ActivateRequiredWeapon = 7,
	ActivateDeferredRequiredWeapon = 8,
	Spawn = 9,
	Dodge = 10,
	DodgeExecute = 11,
	ActivateApperate_DEPRECATED = 12,
	ApperateReappear_DEPRECATED = 13,
	PickupWeapon = 14,
	RespawnWeapon = 15,
	React = 16,
	Dying = 17,
	Dead = 18,
	Destroy = 19,
	Taunt = 20,
	TauntAttack = 21,
	SpellReact = 22,
	FaceTarget = 23,
	FaceLastKnownTarget = 24,
	FaceLoc = 25,
	FaceActor = 26,
	Shuffle = 27,
	Attack = 28,
	AttackStoreWeapon = 29,
	FleeExit = 30,
	Scared = 31,
	FaceWeapon = 32,
	FaceEventLoc = 33,
	Jump = 34,
	Eat_DEPRECATED = 35,
	NurtureInteract_DEPRECATED = 36,
	GameEvent = 37,
	ScheduledEntity = 38,
	Climb = 39,
	TauntDeath = 40,
	Protego = 41,
	SecondaryAttack = 42,
	MoveStop = 43,
	WarnAway = 44,
	ClimbLadder = 45,
	IdleBreak = 46,
	BecomeAlert = 47,
	LoseAlert = 48,
	AlertInvestigate = 49,
	AttachWeapon = 50,
	DetachWeapon = 51,
	HealAttack = 52,
	ReparoAttack_Deprecated = 53,
	ApparateAttack = 54,
	Apparate = 55,
	FlitToLoc_DEPRECATED = 56,
	Disillusionment = 57,
	Vault = 58,
	SidekickAttack = 59,
	RespawnAndAcquireWeapon = 60,
	Flourish = 61,
	ProtegoStart = 62,
	Flying = 63,
	StartDrained = 64,
	Drained = 65,
	StopDrained = 66,
	CustomSpell = 67,
	SubAttackWait = 68,
	SubAttackDesync = 69,
	SubAttackPre = 70,
	SubAttackAttack = 71,
	AlertWait = 72,
	ActivateStoredWeapon = 73,
	WanderIdle = 74,
	AlertLook = 75,
	SubAttackAttackSplit = 76,
	AlertFace = 77,
	AlertIdle = 78,
	SwimToShore = 79,
	Outside = 80,
	TooCloseNPC = 81,
	JumpSpline = 82,
	JumpSplineStart = 83,
	JumpSplineLand = 84,
	Block = 85,
	SubAttackAttackCounter = 86,
	SubAttackAttackApparate = 87,
	SubAttackApparateCounter = 88,
	WaitForRelease = 89,
	PreMoveStart = 90,
	BackOnNav = 91,
	ShuffleStart = 92,
	ActivateHiddenWeapon = 93,
	RecoverWeapon = 94,
	InvestigateStart = 95,
	InvestigateMove = 96,
	InvestigateIdle = 97,
	InvestigateStop = 98,
	SpellEffectStart = 99,
	SpellEffectStop = 100,
	ChargeStart = 101,
	AwareTurnAround = 102,
	AwarePause = 103,
	Count = 104,
	EEnemyAIAction_MAX = 105
};

// Enum Phoenix.ECreatureAIState
enum class ECreatureAIState : uint8 {
	UtilitySelection = 0,
	SpawnOnDen = 1,
	FollowActor = 2,
	PostGrowUp = 3,
	Dead = 4,
	Wander_DEPRECATED = 5,
	NearDeathKneeling = 6,
	InCage = 7,
	CustomAbility = 8,
	Mounted = 9,
	Cinematic = 10,
	ScheduledEntityMode = 11,
	ECreatureAIState_MAX = 12
};

// Enum Phoenix.EEnemyAIWeapon_Event
enum class EEnemyAIWeapon_Event : uint8 {
	None = 0,
	TombProtectorMeteor_Choose = 1,
	TombProtectorMeteor_Break = 2,
	TombProtectorMeteor_Throw = 3,
	EEnemyAIWeapon_MAX = 4
};

// Enum Phoenix.EEnemy_AttackThreatState
enum class EEnemy_AttackThreatState : uint8 {
	None = 0,
	Inactive = 1,
	Active_Blockable = 2,
	Active_Unblockable = 3,
	PreAttack = 4,
	EEnemy_MAX = 5
};

// Enum Phoenix.EGameEvent_Intensity
enum class EGameEvent_Intensity : uint8 {
	None = 0,
	White = 1,
	Yellow = 2,
	Red = 3,
	EGameEvent_MAX = 4
};

// Enum Phoenix.EEnemy_Ability
enum class EEnemy_Ability : uint8 {
	Idle = 0,
	Move = 1,
	Attack = 2,
	Dodge = 3,
	Weapon_DEPRECATED = 4,
	Shuffle = 5,
	TurnInPlace = 6,
	Taunt = 7,
	MoveStop = 8,
	BecomeAware = 9,
	LoseAware = 10,
	PickupWeapon = 11,
	Apparate = 12,
	Reaction = 13,
	StoreWeapon = 14,
	EquipWeapon = 15,
	Spawn = 16,
	Jump = 17,
	Eat_DEPRECATED = 18,
	Flee = 19,
	Dead = 20,
	NurtureInteract_DEPRECATED = 21,
	MoveStart = 22,
	GameEvent = 23,
	Climb = 24,
	Protego = 25,
	SecondaryAttack = 26,
	IdleBreak = 27,
	BecomeAlert = 28,
	LoseAlert = 29,
	HealAttack = 30,
	LosingTarget = 31,
	PreAttack = 32,
	Disillusionment = 33,
	None = 34,
	Lumos = 35,
	Custom = 36,
	ReparoAttack_Deprecated = 37,
	Vault = 38,
	MoveTransition = 39,
	Flourish = 40,
	Flying = 41,
	FollowSpline = 42,
	FollowSplineIdle = 43,
	StartDrained = 44,
	StopDrained = 45,
	Drained = 46,
	AlertWait = 47,
	WanderIdle = 48,
	AlertLook = 49,
	AttackSplit = 50,
	AlertFace = 51,
	JumpSpline = 52,
	MovePivot = 53,
	AttackCounter = 54,
	PreMoveStart = 55,
	RecoverWeapon = 56,
	InvestigateStart = 57,
	InvestigateMove = 58,
	InvestigateIdle = 59,
	InvestigateStop = 60,
	ChargeStart = 61,
	Count = 62,
	EEnemy_MAX = 63
};

// Enum Phoenix.EMenuReaderInterruptType
enum class EMenuReaderInterruptType : uint8 {
	InterruptAll = 0,
	InterruptSelf = 1,
	InterruptSpecifiedOwner = 2,
	InterruptNone = 3,
	EMenuReaderInterruptType_MAX = 4
};

// Enum Phoenix.EUIScreenType
enum class EUIScreenType : uint8 {
	UIST_Screen = 0,
	UIST_NonModalTutorial = 1,
	UIST_ModalTutorial = 2,
	UIST_Popup = 3,
	UIST_MAX = 4
};

// Enum Phoenix.EUIPopupPriority
enum class EUIPopupPriority : uint8 {
	UIPP_Normal = 0,
	UIPP_Important = 1,
	UIPP_Critical = 2,
	UIPP_MAX = 3
};

// Enum Phoenix.EUnlockFailedReason
enum class EUnlockFailedReason : uint8 {
	KeyNotFound = 0,
	AlohomoraLevelNotMet = 1,
	EUnlockFailedReason_MAX = 2
};

// Enum Phoenix.EEncounterEndReason
enum class EEncounterEndReason : uint8 {
	NoCombatVolume_NoAggro = 0,
	CombatVolume_Escaped = 1,
	CombatVolume_Completed = 2,
	EEncounterEndReason_MAX = 3
};

// Enum Phoenix.EEncounterDuelTechniqueOverrideType
enum class EEncounterDuelTechniqueOverrideType : uint8 {
	AlwaysSelectIfValid = 0,
	AlwaysSelectEvenIfInvalid = 1,
	PreferStronglyToSelect = 2,
	PreferLooselyToSelect = 3,
	PreferLooselyToAvoid = 4,
	PreferStronglyToAvoid = 5,
	NeverSelect = 6,
	EEncounterDuelTechniqueOverrideType_MAX = 7
};

// Enum Phoenix.EKeyLayout
enum class EKeyLayout : uint8 {
	QWERTY = 0,
	QWERTZ = 1,
	AZERTY = 2,
	QWERTY_AZERTY = 3,
	EKeyLayout_MAX = 4
};

// Enum Phoenix.EBroomEnemyState
enum class EBroomEnemyState : uint8 {
	None = 0,
	Follow = 1,
	Lead = 2,
	LeadChangePosition = 3,
	Wait = 4,
	EBroomEnemyState_MAX = 5
};

// Enum Phoenix.EHerbGrowthState
enum class EHerbGrowthState : uint8 {
	None = 0,
	Growing = 1,
	Grown = 2,
	Harvested = 3,
	Regrowing = 4,
	EHerbGrowthState_MAX = 5
};

// Enum Phoenix.EBrewingState
enum class EBrewingState : uint8 {
	None = 0,
	Brewing = 1,
	Brewed = 2,
	EBrewingState_MAX = 3
};

// Enum Phoenix.ESanctuaryIdentity
enum class ESanctuaryIdentity : uint8 {
	Default = 0,
	Potioneer = 1,
	Herbologist = 2,
	Magizoologist = 3,
	DarkWizard = 4,
	NUM = 5,
	ESanctuaryIdentity_MAX = 6
};

// Enum Phoenix.ETransfigurationSnapping
enum class ETransfigurationSnapping : uint8 {
	NoSnapping = 0,
	ConjurationSurface = 1,
	Fixed = 2,
	PowerpointSnapping = 3,
	WallSnapping = 4,
	ETransfigurationSnapping_MAX = 5
};

// Enum Phoenix.EDifficulty
enum class EDifficulty : uint8 {
	Story = 0,
	Easy = 1,
	Medium = 2,
	Hard = 3,
	EDifficulty_MAX = 4
};

// Enum Phoenix.EPauseMenuPage
enum class EPauseMenuPage : uint8 {
	PAGE_INVENTORY = 0,
	PAGE_CHARACTER = 1,
	PAGE_TALENTS = 2,
	PAGE_QUESTS = 3,
	PAGE_MAP = 4,
	PAGE_MAIL = 5,
	PAGE_COLLECTIONS = 6,
	PAGE_CHALLENGES = 7,
	PAGE_SETTINGS = 8,
	PAGE_MAX = 9
};

// Enum Phoenix.ECreditEntryType
enum class ECreditEntryType : uint8 {
	Header1 = 0,
	Header2 = 1,
	Header3 = 2,
	Header4 = 3,
	Line = 4,
	Multiline = 5,
	Image = 6,
	Spacer = 7,
	ECreditEntryType_MAX = 8
};

// Enum Phoenix.EInputDeviceUsed
enum class EInputDeviceUsed : uint8 {
	None = 0,
	KeyBoard_Mouse = 1,
	Gamepad = 2,
	EInputDeviceUsed_MAX = 3
};

// Enum Phoenix.EProductionStatus
enum class EProductionStatus : uint8 {
	IN_DEVELOPMENT = 0,
	FUNCTIONAL = 1,
	SHIPPABLE = 2,
	CUT = 3,
	EProductionStatus_MAX = 4
};

// Enum Phoenix.EAblAddLinearImpulseDirectionType
enum class EAblAddLinearImpulseDirectionType : uint8 {
	Global = 0,
	Local = 1,
	ImpactDirection = 2,
	EAblAddLinearImpulseDirectionType_MAX = 3
};

// Enum Phoenix.EMurmurationValueType
enum class EMurmurationValueType : uint8 {
	Absolute = 0,
	Relative = 1,
	EMurmurationValueType_MAX = 2
};

// Enum Phoenix.EQuadrupedSpineChainType
enum class EQuadrupedSpineChainType : uint8 {
	Neck = 0,
	Spine = 1,
	Tail = 2,
	Invalid = 3,
	EQuadrupedSpineChainType_MAX = 4
};

// Enum Phoenix.EDirectionType
enum class EDirectionType : uint8 {
	ImpactDirection = 0,
	CalculatedWorldDirection = 1,
	EDirectionType_MAX = 2
};

// Enum Phoenix.EWandCastCommand
enum class EWandCastCommand : uint8 {
	None = 0,
	FromDodgeDirectional = 1,
	MeleeDirectional = 2,
	LightDirectional = 3,
	LightDirectionalTooClose = 4,
	HeavyDirectional = 5,
	SpecificTag = 6,
	SpecificTagTooClose = 7,
	StealthDirectional = 8,
	EWandCastCommand_MAX = 9
};

// Enum Phoenix.EBallisticTaskDestinationSource
enum class EBallisticTaskDestinationSource : uint8 {
	Stratchpad = 0,
	FromTarget = 1,
	ToTarget = 2,
	ToLoc = 3,
	ToParamLoc = 4,
	EBallisticTaskDestinationSource_MAX = 5
};

// Enum Phoenix.EFlyingBroomState
enum class EFlyingBroomState : uint8 {
	None = 0,
	Flying = 1,
	Strafe = 2,
	BarrelRollLft = 3,
	BarrelRollRht = 4,
	AimMode = 5,
	AftView = 6,
	CombatMode = 7,
	Boosting = 8,
	Turbo = 9,
	React = 10,
	EFlyingBroomState_MAX = 11
};

// Enum Phoenix.EEnemyMoveEndType
enum class EEnemyMoveEndType : uint8 {
	MoveEnd_Slide = 0,
	MoveEnd_MAX = 1
};

// Enum Phoenix.EDesiredDeltaOperator
enum class EDesiredDeltaOperator : uint8 {
	And = 0,
	Or = 1,
	StrafeRules = 2,
	EDesiredDeltaOperator_MAX = 3
};

// Enum Phoenix.EDesiredDeltaTargetTracker
enum class EDesiredDeltaTargetTracker : uint8 {
	DesiredDirection = 0,
	LastDesiredDirection = 1,
	Facing = 2,
	LookAt = 3,
	AimAt = 4,
	StrafeDirection = 5,
	VelocityDirection = 6,
	BufferedDesiredDirection = 7,
	EDesiredDeltaTargetTracker_MAX = 8
};

// Enum Phoenix.EDesiredDeltaSourceDirection
enum class EDesiredDeltaSourceDirection : uint8 {
	FacingDirection = 0,
	DesiredDirection = 1,
	Facing = 2,
	LookAt = 3,
	AimAt = 4,
	StrafeDirection = 5,
	VelocityDirection = 6,
	EDesiredDeltaSourceDirection_MAX = 7
};

// Enum Phoenix.EAblGaitSpeed
enum class EAblGaitSpeed : uint8 {
	Stopped = 0,
	SlowWalk = 1,
	Walk = 2,
	Jog = 3,
	Sprint = 4,
	EAblGaitSpeed_MAX = 5
};

// Enum Phoenix.ESpeedInclusivity
enum class ESpeedInclusivity : uint8 {
	Inclusive = 0,
	InclusiveMinOnly = 1,
	InclusiveMaxOnly = 2,
	NotInclusive = 3,
	ESpeedInclusivity_MAX = 4
};

// Enum Phoenix.ESpeedType
enum class ESpeedType : uint8 {
	DesiredSpeed = 0,
	AverageSpeed = 1,
	ActualSpeed = 2,
	LastDesiredSpeed = 3,
	BufferedDesiredSpeed = 4,
	ESpeedType_MAX = 5
};

// Enum Phoenix.EUseTargetTracker
enum class EUseTargetTracker : uint8 {
	Facing = 0,
	LookAt = 1,
	AimAt = 2,
	EUseTargetTracker_MAX = 3
};

// Enum Phoenix.ECabbage_Mobility
enum class ECabbage_Mobility : uint8 {
	Spawn = 0,
	Attack = 1,
	Bounce = 2,
	Idle = 3,
	Slide = 4,
	ECabbage_MAX = 5
};

// Enum Phoenix.ECameraStackAnimationSelection
enum class ECameraStackAnimationSelection : uint8 {
	Random = 0,
	ClosestToCameraRotation = 1,
	LeftOrRight = 2,
	ECameraStackAnimationSelection_MAX = 3
};

// Enum Phoenix.EAblCameraStackContextOperation
enum class EAblCameraStackContextOperation : uint8 {
	Ignore = 0,
	AddContext = 1,
	RemoveContext = 2,
	EAblCameraStackContextOperation_MAX = 3
};

// Enum Phoenix.UablResetReset_ClothingTeleportMode
enum class UablResetReset_ClothingTeleportMode : uint8 {
	Teleport = 0,
	TeleportAndReset = 1,
	UablResetReset_MAX = 2
};

// Enum Phoenix.EAblCollisionBranchDetectionType
enum class EAblCollisionBranchDetectionType : uint8 {
	MoveDirectionDotHitNormal = 0,
	MoveDirectionDotUpVector = 1,
	HitNormalDotUpVector = 2,
	EAblCollisionBranchDetectionType_MAX = 3
};

// Enum Phoenix.EablEnemy_DragonMobilityType
enum class EablEnemy_DragonMobilityType : uint8 {
	Hover = 0,
	Jump = 1,
	EablEnemy_MAX = 2
};

// Enum Phoenix.EEnemyHoverTaskMode
enum class EEnemyHoverTaskMode : uint8 {
	Start = 0,
	Hover = 1,
	Land = 2,
	EEnemyHoverTaskMode_MAX = 3
};

// Enum Phoenix.EAblAbilityEnemyMoveVelocitySource
enum class EAblAbilityEnemyMoveVelocitySource : uint8 {
	External = 0,
	Fall = 1,
	CustomForward = 2,
	CustomBackward = 3,
	Custom = 4,
	Jump = 5,
	Continued = 6,
	Slide = 7,
	EAblAbilityEnemyMoveVelocitySource_MAX = 8
};

// Enum Phoenix.EContextTaskOperationType
enum class EContextTaskOperationType : uint8 {
	SetAndClear = 0,
	ClearAndSet = 1,
	Set = 2,
	Clear = 3,
	EContextTaskOperationType_MAX = 4
};

// Enum Phoenix.EAblMoveTaskBallisticDestinationSource
enum class EAblMoveTaskBallisticDestinationSource : uint8 {
	Stratchpad = 0,
	FromTarget = 1,
	ToTarget = 2,
	ToLoc = 3,
	ToParamLoc = 4,
	EAblMoveTaskBallisticDestinationSource_MAX = 5
};

// Enum Phoenix.EAblMoveTaskVelocitySource
enum class EAblMoveTaskVelocitySource : uint8 {
	Stratchpad = 0,
	Fall = 1,
	Custom = 2,
	Ballistic = 3,
	EAblMoveTaskVelocitySource_MAX = 4
};

// Enum Phoenix.LookAtType
enum class LookAtType : uint8 {
	Player = 0,
	SpellTarget = 1,
	Both = 2,
	LookAtType_MAX = 3
};

// Enum Phoenix.ERagdollDrivingSetting
enum class ERagdollDrivingSetting : uint8 {
	KeepCurrent = 0,
	AlwaysOverride = 1,
	SetIfStronger = 2,
	SetIfWeaker = 3,
	SetIfAlreadyInFullRagdoll = 4,
	SetIfNotAlreadyInFullRagdoll = 5,
	ERagdollDrivingSetting_MAX = 6
};

// Enum Phoenix.EPhysicalReactionTaskAction
enum class EPhysicalReactionTaskAction : uint8 {
	StartImpactReaction = 0,
	StartReaction = 1,
	HoverStart = 2,
	HoverEnd = 3,
	NoAction = 4,
	EPhysicalReactionTaskAction_MAX = 5
};

// Enum Phoenix.EAblNpcReactCapsuleImpulseVelocitySource
enum class EAblNpcReactCapsuleImpulseVelocitySource : uint8 {
	ReactionDataVelocity = 0,
	ReactorBackwards = 1,
	ReactorFowards = 2,
	ReactorLeft = 3,
	ReactorRight = 4,
	InstigatorTowards = 5,
	InstigatorAway = 6,
	InstigatorLeft = 7,
	InstigatorRight = 8,
	ImpactDirectionTowards = 9,
	ImpactDirectionAway = 10,
	ImpactDirectionLeft = 11,
	ImpactDirectionRight = 12,
	TargetActorTowards = 13,
	TargetActorAway = 14,
	TargetActorLeft = 15,
	TargetActorRight = 16,
	ReactionDataDirection = 17,
	EAblNpcReactCapsuleImpulseVelocitySource_MAX = 18
};

// Enum Phoenix.ENPC_PhysicsBallisticType
enum class ENPC_PhysicsBallisticType : uint8 {
	Target = 0,
	JumpTarget = 1,
	NamedPoint = 2,
	MoveGoal = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.ENPC_PhysicsBallisticToTargetTaskMode
enum class ENPC_PhysicsBallisticToTargetTaskMode : uint8 {
	Start = 0,
	Update = 1,
	StartAndUpdate = 2,
	Reset = 3,
	StartUpdateAndReset = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.EablNPC_FixedSource
enum class EablNPC_FixedSource : uint8 {
	Param = 0,
	External = 1,
	EablNPC_MAX = 2
};

// Enum Phoenix.EAblNpcCollisionDetectionType
enum class EAblNpcCollisionDetectionType : uint8 {
	MoveDirectionDotHitNormal = 0,
	MoveDirectionDotUpVector = 1,
	HitNormalDotUpVector = 2,
	EAblNpcCollisionDetectionType_MAX = 3
};

// Enum Phoenix.ENpcMoveDirectionType
enum class ENpcMoveDirectionType : uint8 {
	Global = 0,
	Local = 1,
	ENpcMoveDirectionType_MAX = 2
};

// Enum Phoenix.ENPCRagdollMode
enum class ENPCRagdollMode : uint8 {
	NoRagdoll = 0,
	FullRagdoll = 1,
	RecoverFromRagdoll = 2,
	ActiveRagdoll = 3,
	ENPCRagdollMode_MAX = 4
};

// Enum Phoenix.EAblNpcPopupDirection
enum class EAblNpcPopupDirection : uint8 {
	Forward = 0,
	Backward = 1,
	Left = 2,
	Right = 3,
	EAblNpcPopupDirection_MAX = 4
};

// Enum Phoenix.ENpcReactFlyToLocationOption
enum class ENpcReactFlyToLocationOption : uint8 {
	ReactionInstigatorLocation = 0,
	ReactionTargetLocation = 1,
	ENpcReactFlyToLocationOption_MAX = 2
};

// Enum Phoenix.EAblNpcReactMoveToSpeedType
enum class EAblNpcReactMoveToSpeedType : uint8 {
	Custom = 0,
	ReactionVelocityMagnitude = 1,
	TimeCurve = 2,
	DistancetoDestinationCurve = 3,
	PositionCurve = 4,
	EAblNpcReactMoveToSpeedType_MAX = 5
};

// Enum Phoenix.EAblNpcReactMoveToDestinationType
enum class EAblNpcReactMoveToDestinationType : uint8 {
	CustomGlobal = 0,
	CustomLocal = 1,
	ReactionTargetLocation = 2,
	ReactionInstigator = 3,
	EAblNpcReactMoveToDestinationType_MAX = 4
};

// Enum Phoenix.EAblNpcReactPopupTaskType
enum class EAblNpcReactPopupTaskType : uint8 {
	ReactionInitialVelocity = 0,
	ReactionInitialDirection = 1,
	DirectionToInstigator = 2,
	ImpactDirection = 3,
	DirectionToTargetActor = 4,
	EAblNpcReactPopupTaskType_MAX = 5
};

// Enum Phoenix.EAblNPCTurnToTaskDestination
enum class EAblNPCTurnToTaskDestination : uint8 {
	Self = 0,
	Owner = 1,
	Instigator = 2,
	TargetActor = 3,
	Camera = 4,
	NpcReactionImpactDirection = 5,
	AlignToParent = 6,
	NpcReactionTargetActor = 7,
	NpcReactionTargetLocation = 8,
	ImpactDirectionFwdBwd = 9,
	ImpactDirectionFwdBwdLftRgt = 10,
	ImpactDirectionFwdBwdInv = 11,
	NpcReactVelDir = 12,
	NpcReactVelDirInv = 13,
	JumpLanding = 14,
	EnemyTarget = 15,
	EAblNPCTurnToTaskDestination_MAX = 16
};

// Enum Phoenix.EObjectStateBranchCondition
enum class EObjectStateBranchCondition : uint8 {
	IsDead = 0,
	IsDazed = 1,
	IsWoundedKneeling = 2,
	EObjectStateBranchCondition_MAX = 3
};

// Enum Phoenix.ETagOperation
enum class ETagOperation : uint8 {
	Add = 0,
	Remove = 1,
	ETagOperation_MAX = 2
};

// Enum Phoenix.EOpportunityType
enum class EOpportunityType : uint8 {
	DarkWizardSteal = 0,
	EOpportunityType_MAX = 1
};

// Enum Phoenix.EObjectArchitectVfxWorldLocalType
enum class EObjectArchitectVfxWorldLocalType : uint8 {
	WorldSpace = 0,
	LocalSpace = 1,
	EObjectArchitectVfxWorldLocalType_MAX = 2
};

// Enum Phoenix.EReactionPlayMultiFxTaskType
enum class EReactionPlayMultiFxTaskType : uint8 {
	UseImpactLocationAndDirectionInverse = 0,
	UseImpactDirectionInverseOnly = 1,
	EReactionPlayMultiFxTaskType_MAX = 2
};

// Enum Phoenix.EReactionRotationSyncPointType
enum class EReactionRotationSyncPointType : uint8 {
	Instigator = 0,
	InstigatorInverse = 1,
	EReactionRotationSyncPointType_MAX = 2
};

// Enum Phoenix.EReactionLocationSyncPointType
enum class EReactionLocationSyncPointType : uint8 {
	Instigator = 0,
	TargetPosition = 1,
	EReactionLocationSyncPointType_MAX = 2
};

// Enum Phoenix.EInteractUseTargetAxis
enum class EInteractUseTargetAxis : uint8 {
	XAxis = 0,
	YAxis = 1,
	ZAxis = 2,
	NegXAxis = 3,
	NegYAxis = 4,
	NegZAxis = 5,
	EInteractUseTargetAxis_MAX = 6
};

// Enum Phoenix.EInteractTurnToFaceRules
enum class EInteractTurnToFaceRules : uint8 {
	None = 0,
	PlayerToTarget = 1,
	TargetToPlayer = 2,
	TargetAxis = 3,
	EInteractTurnToFaceRules_MAX = 4
};

// Enum Phoenix.EInteractOffsetRules
enum class EInteractOffsetRules : uint8 {
	None = 0,
	PlayerToTarget = 1,
	TargetToPlayer = 2,
	TargetAxis = 3,
	TargetPlane = 4,
	EInteractOffsetRules_MAX = 5
};

// Enum Phoenix.EInteractUseTargetTracker
enum class EInteractUseTargetTracker : uint8 {
	FaceTracker = 0,
	AimAtTracker = 1,
	LookAtTracker = 2,
	EInteractUseTargetTracker_MAX = 3
};

// Enum Phoenix.ERootMotModDesiredSpeed
enum class ERootMotModDesiredSpeed : uint8 {
	UseProvided = 0,
	GetFromAnimInstance = 1,
	ERootMotModDesiredSpeed_MAX = 2
};

// Enum Phoenix.EJumpControlType
enum class EJumpControlType : uint8 {
	Velocity = 0,
	Speed = 1,
	EJumpControlType_MAX = 2
};

// Enum Phoenix.EJumpType
enum class EJumpType : uint8 {
	StrafeJump = 0,
	ShortJump = 1,
	LongJump = 2,
	SprintJump = 3,
	EJumpType_MAX = 4
};

// Enum Phoenix.EMoveInterpRule
enum class EMoveInterpRule : uint8 {
	NoInterp = 0,
	Interp = 1,
	InterpConstant = 2,
	EMoveInterpRule_MAX = 3
};

// Enum Phoenix.EMoveMaxSpeedRule
enum class EMoveMaxSpeedRule : uint8 {
	StartingSpeed = 0,
	DesiredSpeed = 1,
	FixedSpeed = 2,
	EMoveMaxSpeedRule_MAX = 3
};

// Enum Phoenix.EMoveMinSpeedRule
enum class EMoveMinSpeedRule : uint8 {
	ZeroSpeed = 0,
	StartingSpeed = 1,
	FixedSpeed = 2,
	EMoveMinSpeedRule_MAX = 3
};

// Enum Phoenix.EMoveDirectionRule
enum class EMoveDirectionRule : uint8 {
	ForwardVector = 0,
	DesiredDirection = 1,
	FacingTracker = 2,
	ForwardVector_NEGATED = 3,
	DesiredDirection_NEGATED = 4,
	FacingTracker_NEGATED = 5,
	EMoveDirectionRule_MAX = 6
};

// Enum Phoenix.EMultiplierType
enum class EMultiplierType : uint8 {
	MultiplyByAxis = 0,
	MultiplyByValue = 1,
	MultiplyByCustomValue = 2,
	EMultiplierType_MAX = 3
};

// Enum Phoenix.ERootMotionModTargetType
enum class ERootMotionModTargetType : uint8 {
	FaceTracker = 0,
	AimAtTracker = 1,
	LookAtTracker = 2,
	ERootMotionModTargetType_MAX = 3
};

// Enum Phoenix.ERootMotionModTurnAssistMethod
enum class ERootMotionModTurnAssistMethod : uint8 {
	UseCurve = 0,
	UseCustomInterp = 1,
	UseDampedSpring = 2,
	ERootMotionModTurnAssistMethod_MAX = 3
};

// Enum Phoenix.ERootMotionModTurnAssistUseDirection
enum class ERootMotionModTurnAssistUseDirection : uint8 {
	FacingTarget_OR_DesiredDirection = 0,
	FallLine = 1,
	DesiredDirectionOnly = 2,
	JumpStartVelocityOnly = 3,
	FallLineWithinRange = 4,
	ERootMotionModTurnAssistUseDirection_MAX = 5
};

// Enum Phoenix.ECollisionResolutionTaskType
enum class ECollisionResolutionTaskType : uint8 {
	PushCharacters = 0,
	ECollisionResolutionTaskType_MAX = 1
};

// Enum Phoenix.ETask_TargetType
enum class ETask_TargetType : uint8 {
	None = 0,
	Location = 1,
	Actor = 2,
	DesiredDirection = 3,
	CognitionTarget = 4,
	FwdLoop = 5,
	ETask_MAX = 6
};

// Enum Phoenix.ETask_TargetTrackerType
enum class ETask_TargetTrackerType : uint8 {
	None = 0,
	Face = 1,
	LookAt = 2,
	AimAt = 3,
	ETask_MAX = 4
};

// Enum Phoenix.EStartVecMethod
enum class EStartVecMethod : uint8 {
	None = 0,
	ReferenceVector = 1,
	RandomAngleOwnerForward = 2,
	RandomAngleToTarget = 3,
	EStartVecMethod_MAX = 4
};

// Enum Phoenix.ETurnAssistUseDirection
enum class ETurnAssistUseDirection : uint8 {
	FacingTarget_OR_DesiredDirection = 0,
	FallLine = 1,
	DesiredDirectionOnly = 2,
	JumpStartVelocityOnly = 3,
	FallLineWithinRange = 4,
	ETurnAssistUseDirection_MAX = 5
};

// Enum Phoenix.EWandComboType
enum class EWandComboType : uint8 {
	Light = 0,
	Heavy = 1,
	LightOrCasual = 2,
	EWandComboType_MAX = 3
};

// Enum Phoenix.EHomeworkType
enum class EHomeworkType : uint8 {
	HOMEWORK_TYPE_SPELL_CAST = 0,
	HOMEWORK_TYPE_SPELL_SUCCESS = 1,
	HOMEWORK_TYPE_POTION = 2,
	HOMEWORK_TYPE_POTION_CONSUMED = 3,
	HOMEWORK_TYPE_SANCTUARY_USE = 4,
	HOMEWORK_TYPE_PLANT = 5,
	HOMEWORK_TYPE_BEAST = 6,
	HOMEWORK_TYPE_COMPANION_MINUTES = 7,
	HOMEWORK_TYPE_BROOM = 8,
	HOMEWORK_TYPE_COMBAT = 9,
	HOMEWORK_TYPE_COLLECT = 10,
	HOMEWORK_TYPE_INVESTIGATE = 11,
	HOMEWORK_TYPE_MISC = 12,
	HOMEWORK_TYPE_CONJURATION = 13,
	HOMEWORK_TYPE_COUNT = 14,
	HOMEWORK_TYPE_MAX = 15
};

// Enum Phoenix.EAcknowledgementSpeakerType
enum class EAcknowledgementSpeakerType : uint8 {
	ANY = 0,
	COMPANION = 1,
	DEEK = 2,
	ENEMY = 3,
	NONENEMY = 4,
	NONE = 5,
	PLAYER = 6,
	VENDOR = 7,
	COUNT = 8,
	EAcknowledgementSpeakerType_MAX = 9
};

// Enum Phoenix.EAcknowledgementRuleType
enum class EAcknowledgementRuleType : uint8 {
	Time = 0,
	Event = 1,
	Ambient = 2,
	COUNT = 3,
	EAcknowledgementRuleType_MAX = 4
};

// Enum Phoenix.ECreatureDataProviderValueRangeType
enum class ECreatureDataProviderValueRangeType : uint8 {
	Min = 0,
	Max = 1,
	Random = 2
};

// Enum Phoenix.ENPCSense_EnemyTargetEval
enum class ENPCSense_EnemyTargetEval : uint8 {
	Aware = 0,
	Attacking = 1,
	Alert = 2,
	ENPCSense_MAX = 3
};

// Enum Phoenix.EAlohomoraLevel
enum class EAlohomoraLevel : uint8 {
	Nothing = 0,
	Level_2 = 1,
	Level_3 = 2,
	Level_4 = 3,
	EAlohomoraLevel_MAX = 4
};

// Enum Phoenix.EAmbientCreatureSpawnVolumePriority
enum class EAmbientCreatureSpawnVolumePriority : uint8 {
	Base = 0,
	Override = 1,
	EAmbientCreatureSpawnVolumePriority_MAX = 2
};

// Enum Phoenix.EAmbientCreatureSpawnVolumeType
enum class EAmbientCreatureSpawnVolumeType : uint8 {
	Spawn = 0,
	Exclude = 1,
	SuppressAndExclude = 2,
	EAmbientCreatureSpawnVolumeType_MAX = 3
};

// Enum Phoenix.EAncientMagicHotSpotCameraType
enum class EAncientMagicHotSpotCameraType : uint8 {
	None = 0,
	OrbitClose = 1,
	OrbitFar = 2,
	PullBack = 3,
	EAncientMagicHotSpotCameraType_MAX = 4
};

// Enum Phoenix.EAncientMagicEffectType
enum class EAncientMagicEffectType : uint8 {
	None = 0,
	Discover = 1,
	Nova = 2,
	Test = 3,
	EAncientMagicEffectType_MAX = 4
};

// Enum Phoenix.AnimationTypeToFetch
enum class AnimationTypeToFetch : uint8 {
	ANIMFETCH_UNKNOWN = 0,
	ANIMFETCH_ENTER = 1,
	ANIMFETCH_EXIT = 2,
	ANIMFETCH_MAX = 3
};

// Enum Phoenix.EOverrideNPCStateOnFinish
enum class EOverrideNPCStateOnFinish : uint8 {
	None = 0,
	Idle = 1,
	Move = 2,
	Attack = 3,
	Disengage = 4,
	Dead = 5,
	Destroy = 6,
	Custom = 7,
	EOverrideNPCStateOnFinish_MAX = 8
};

// Enum Phoenix.EGameplayMechanics
enum class EGameplayMechanics : uint8 {
	Move = 0,
	Jump = 1,
	DodgeRoll = 2,
	Protego = 3,
	LightCast = 4,
	HeavyCast = 5,
	Revelio = 6,
	MapHelp = 7,
	ItemMenu = 8,
	AimMode = 9,
	Finishers = 10,
	Oppugno = 11,
	AutoTarget = 12,
	EGameplayMechanics_MAX = 13
};

// Enum Phoenix.EOpenDoorAnimState
enum class EOpenDoorAnimState : uint8 {
	LeftHand = 0,
	RightHand = 1,
	BothHands = 2,
	EOpenDoorAnimState_MAX = 3
};

// Enum Phoenix.ESBlockedByWallAnimState
enum class ESBlockedByWallAnimState : uint8 {
	None = 0,
	BothHandsOut = 1,
	RightHandOut = 2,
	LeftHandOut = 3,
	ESBlockedByWallAnimState_MAX = 4
};

// Enum Phoenix.ECombatAdditivePriority
enum class ECombatAdditivePriority : uint8 {
	None = 0,
	LowestPriority = 1,
	UpperBodyIdle = 2,
	FullBodyUsage = 3,
	UpperBodyUsage = 4,
	Cinematic = 5,
	HighestPriority = 6,
	ECombatAdditivePriority_MAX = 7
};

// Enum Phoenix.EHeadTrackingPriority
enum class EHeadTrackingPriority : uint8 {
	None = 0,
	LowestPriority = 1,
	UpperBodyAlert = 2,
	FullBodyUsage = 3,
	FullBodySpecialUsage = 4,
	UpperBodyUsage = 5,
	UpperBodySpecialUsage = 6,
	Cinematic = 7,
	HighestPriority = 8,
	EHeadTrackingPriority_MAX = 9
};

// Enum Phoenix.EHeadTrackingState
enum class EHeadTrackingState : uint8 {
	None = 0,
	Disallow = 1,
	Allow = 2,
	AllowHeadOnly = 3,
	Allow360 = 4,
	AllowHeadOnly360 = 5,
	EHeadTrackingState_MAX = 6
};

// Enum Phoenix.ELeftArmPriority
enum class ELeftArmPriority : uint8 {
	None = 0,
	LowestPriority = 1,
	UpperBodyIdle = 2,
	UpperBodyFlourish = 3,
	FullBodyUsage = 4,
	UpperBodyUsage = 5,
	Cinematic = 6,
	HighestPriority = 7,
	ELeftArmPriority_MAX = 8
};

// Enum Phoenix.EHarvestState
enum class EHarvestState : uint8 {
	PullFail = 0,
	PullSucceed = 1,
	PickFail = 2,
	PickSucceed = 3,
	EHarvestState_MAX = 4
};

// Enum Phoenix.EMobilityState
enum class EMobilityState : uint8 {
	None = 0,
	Combat = 1,
	Stealth = 2,
	FlyingBroom = 3,
	EMobilityState_MAX = 4
};

// Enum Phoenix.EBasicMobilityMode
enum class EBasicMobilityMode : uint8 {
	Normal = 0,
	Crouching = 1,
	Stealth = 2,
	EBasicMobilityMode_MAX = 3
};

// Enum Phoenix.EStationMode
enum class EStationMode : uint8 {
	FullBody = 0,
	PartialBody = 1,
	EStationMode_MAX = 2
};

// Enum Phoenix.EStationState
enum class EStationState : uint8 {
	None = 0,
	EnterStation = 1,
	InStation = 2,
	ExitStation = 3,
	EStationState_MAX = 4
};

// Enum Phoenix.EDodgeState
enum class EDodgeState : uint8 {
	None = 0,
	DodgeForward = 1,
	DodgeLeft = 2,
	DodgeRight = 3,
	DodgeBackward = 4,
	EDodgeState_MAX = 5
};

// Enum Phoenix.EAttackState
enum class EAttackState : uint8 {
	None = 0,
	AttackCombo1 = 1,
	AttackCombo2 = 2,
	AttackCombo3 = 3,
	AttackCombo4 = 4,
	AttackCombo5 = 5,
	AttackFinisher1 = 6,
	AttackFinisher2 = 7,
	AttackFinisher3 = 8,
	AttackAOESpell = 9,
	AttackAOEArrestoMomentum = 10,
	AttackAOEDepulso = 11,
	AttackAOEExpectoPatronum = 12,
	AttackAOEExpulso = 13,
	AttackAOEIncendio = 14,
	AttackAOELevioso = 15,
	AttackAOELumos = 16,
	AttackAOEReparo = 17,
	EAttackState_MAX = 18
};

// Enum Phoenix.EReactionState
enum class EReactionState : uint8 {
	None = 0,
	HitLegsLeft = 1,
	HitLegsRight = 2,
	DeathFront = 3,
	DeathLeft = 4,
	DeathRight = 5,
	DeathBack = 6,
	HitHeadDownFront = 7,
	HitHeadDownLeft = 8,
	HitHeadDownRight = 9,
	HitHeadFront = 10,
	HitHeadLeft = 11,
	HitHeadRight = 12,
	HitHeadUpFront = 13,
	HitHeadUpLeft = 14,
	HitHeadUpRight = 15,
	HitTorsoFront = 16,
	HitTorsoLeft = 17,
	HitTorsoRight = 18,
	KnockDownFront = 19,
	KnockDownLeft = 20,
	KnockDownRight = 21,
	EReactionState_MAX = 22
};

// Enum Phoenix.EOcclusionTestMethod
enum class EOcclusionTestMethod : uint8 {
	PrimaryOcclusionOnly = 0,
	HulaHoop_5 = 1,
	FacingPortal_9 = 2,
	EdgeOnPortal_13 = 3,
	EOcclusionTestMethod_MAX = 4
};

// Enum Phoenix.EOcclusionOption
enum class EOcclusionOption : uint8 {
	OcclusionOff = 0,
	OcclusionOnceOnPost = 1,
	OcclusionTick = 2,
	EOcclusionOption_MAX = 3
};

// Enum Phoenix.ECreatureImpactSize
enum class ECreatureImpactSize : uint8 {
	Large = 0,
	Medium = 1,
	Small = 2,
	Num = 3,
	ECreatureImpactSize_MAX = 4
};

// Enum Phoenix.EStreamingBehaviorTactic
enum class EStreamingBehaviorTactic : uint8 {
	Balanced = 0,
	PrioritizeUnloads = 1,
	PrioritizeLoads = 2,
	EStreamingBehaviorTactic_MAX = 3
};

// Enum Phoenix.EVolumeLoadIdentifier
enum class EVolumeLoadIdentifier : uint8 {
	OutsideOnly = 0,
	NearHogwarts = 1,
	NearHogsmeade = 2,
	OverlandBig = 3,
	OverlandMedium = 4,
	OverlandSmall = 5,
	InsideLoaded = 6,
	LastItem = 7,
	EVolumeLoadIdentifier_MAX = 8
};

// Enum Phoenix.EAvatarPresetType
enum class EAvatarPresetType : uint8 {
	EYEBROWCOLOR = 0,
	EYEBROWSHAPE = 1,
	EYECOLOR = 2,
	FACEMARKING0 = 3,
	FACEMARKING1 = 4,
	FACEMARKING2 = 5,
	FACEMARKING3 = 6,
	MAKEUP_LIP = 7,
	MAKEUP_EYELINER = 8,
	MAKEUP_EYESHADOW = 9,
	MAKEUP_BLUSH = 10,
	HAIRCOLOR = 11,
	HAIRSTYLE = 12,
	HEADSTYLE = 13,
	SKINCOLOR = 14,
	EAvatarPresetType_MAX = 15
};

// Enum Phoenix.ECharacterShutdownPriority
enum class ECharacterShutdownPriority : uint8 {
	Lowest = 0,
	PreventStrike = 1,
	InStation = 2,
	NPCOptimization = 3,
	NPCTeleport = 4,
	InCinematic = 5,
	InFinisher = 6,
	SpecialClearAndPrevent = 7,
	SpecialSpawning = 8,
	NonRender = 9,
	FleshCache = 10,
	ECharacterShutdownPriority_MAX = 11
};

// Enum Phoenix.EBaseCharFocusInterestPriority
enum class EBaseCharFocusInterestPriority : uint8 {
	StationBehavior = 0,
	CombatBehavior = 1,
	ScriptedBehavior = 2,
	EBaseCharFocusInterestPriority_MAX = 3
};

// Enum Phoenix.EBeaconState
enum class EBeaconState : uint8 {
	BEACONSTATE_NONE = 0,
	BEACONSTATE_HIDDEN_BY_FOG_OF_WAR = 1,
	BEACONSTATE_UNDISCOVERED_HIDDEN = 2,
	BEACONSTATE_UNDISCOVERED = 3,
	BEACONSTATE_DISCOVERED = 4,
	BEACONSTATE_DISCOVERED_INCOMPLETE = 5,
	BEACONSTATE_DISCOVERED_LOCKED = 6,
	BEACONSTATE_DISCOVERED_UNLOCKED = 7,
	BEACONSTATE_FAST_TRAVEL_LOCKED = 8,
	BEACONSTATE_FAST_TRAVEL_UNLOCKED = 9,
	BEACONSTATE_HANDLED_AT_RUNTIME = 10,
	BEACONSTATE_COMPLETED = 11,
	BEACONSTATE_MISSION_LEVEL_NOT_ENOUGH = 12,
	BEACONSTATE_VENDOR_ACTIVE = 13,
	BEACONSTATE_VENDOR_INACTIVE = 14,
	BEACONSTATE_ICON_STACK = 15,
	BEACONSTATE_MAX = 16
};

// Enum Phoenix.EBeaconSubType
enum class EBeaconSubType : uint8 {
	BEACONSUBTYPE_NONE = 0,
	BEACONSUBTYPE_CHEST_DEFAULT = 1,
	BEACONSUBTYPE_CHEST_TRACKED = 2,
	BEACONSUBTYPE_CHEST_LOOTABLE = 3,
	BEACONSUBTYPE_BEASTDEN_DIRICAWL = 4,
	BEACONSUBTYPE_BEASTDEN_FWOOPER = 5,
	BEACONSUBTYPE_BEASTDEN_GIANTPURPLETOAD = 6,
	BEACONSUBTYPE_BEASTDEN_GRAPHORN = 7,
	BEACONSUBTYPE_BEASTDEN_HIPPOGRIFF = 8,
	BEACONSUBTYPE_BEASTDEN_JOBBERKNOLL = 9,
	BEACONSUBTYPE_BEASTDEN_KNEAZLE = 10,
	BEACONSUBTYPE_BEASTDEN_MOONCALF = 11,
	BEACONSUBTYPE_BEASTDEN_NIFFLER = 12,
	BEACONSUBTYPE_BEASTDEN_PUFFSKEIN = 13,
	BEACONSUBTYPE_BEASTDEN_THESTRAL = 14,
	BEACONSUBTYPE_BEASTDEN_UNICORN = 15,
	BEACONSUBTYPE_COMBATCHALLENGE_PLAYSTATION = 16,
	BEACONSUBTYPE_MAX = 17
};

// Enum Phoenix.EBeaconType
enum class EBeaconType : uint8 {
	BEACONTYPE_NONE = 0,
	BEACONTYPE_HAMLET = 1,
	BEACONTYPE_HOGWARTS = 2,
	BEACONTYPE_HOGSMEADE = 3,
	BEACONTYPE_MAINMISSION = 4,
	BEACONTYPE_SIDEMISSION = 5,
	BEACONTYPE_MISSIONAREA = 6,
	BEACONTYPE_ACTIVEMISSION = 7,
	BEACONTYPE_MISSIONRELATIONSHIP = 8,
	BEACONTYPE_WAYMARKER = 9,
	BEACONTYPE_DUNGEON = 10,
	BEACONTYPE_DUNGEONEXIT = 11,
	BEACONTYPE_BANDITCAMPLARGE = 12,
	BEACONTYPE_BANDITCAMPMEDIUM = 13,
	BEACONTYPE_BANDITCAMPSMALL = 14,
	BEACONTYPE_BANDITCAMPEXSMALL = 15,
	BEACONTYPE_TENT = 16,
	BEACONTYPE_TREASUREVAULT = 17,
	BEACONTYPE_BEASTDEN = 18,
	BEACONTYPE_SPIDERDEN = 19,
	BEACONTYPE_TROLLDEN = 20,
	BEACONTYPE_MAGICALCREATURE = 21,
	BEACONTYPE_ENEMY = 22,
	BEACONTYPE_NAMEDENEMY = 23,
	BEACONTYPE_FINDLOCATION = 24,
	BEACONTYPE_FINDPLAYER = 25,
	BEACONTYPE_LOCATIONS = 26,
	BEACONTYPE_LOCATIONSHOGSMEADE = 27,
	BEACONTYPE_ITEMS = 28,
	BEACONTYPE_CHARACTER = 29,
	BEACONTYPE_FASTTRAVEL = 30,
	BEACONTYPE_FASTTRAVELHOGWARTS = 31,
	BEACONTYPE_FORAGABLE = 32,
	BEACONTYPE_GLADE = 33,
	BEACONTYPE_SPHINXPUZZLE = 34,
	BEACONTYPE_PERCEPTIONCONE = 35,
	BEACONTYPE_PLAYERMARKER = 36,
	BEACONTYPE_REGION = 37,
	BEACONTYPE_REGIONENTRANCE = 38,
	BEACONTYPE_REGIONHOGWARTS = 39,
	BEACONTYPE_ANCIENTMAGIC = 40,
	BEACONTYPE_ASTRONOMY = 41,
	BEACONTYPE_DEMIGUISE = 42,
	BEACONTYPE_RUIN = 43,
	BEACONTYPE_BOTHY = 44,
	BEACONTYPE_COMBATCHALLENGE = 45,
	BEACONTYPE_TREASURECHEST = 46,
	BEACONTYPE_TREASURECHEST_SMALL = 47,
	BEACONTYPE_ALOHOMORALOCK = 48,
	BEACONTYPE_KNOWLEDGEITEM = 49,
	BEACONTYPE_IGNORE = 50,
	BEACONTYPE_PLANT = 51,
	BEACONTYPE_COMPANION = 52,
	BEACONTYPE_LOCATED_ITEM = 53,
	BEACONTYPE_SUBREGION = 54,
	BEACONTYPE_HOGWARTS_FT_OVERRIDE = 55,
	BEACONTYPE_BROOMPLATFORM = 56,
	BEACONTYPE_BROOMRACERING = 57,
	BEACONTYPE_KNOWLEDGE_ENEMY = 58,
	BEACONTYPE_AUTHORITY_FIGURE = 59,
	BEACONTYPE_MISSIONASSIGNMENT = 60,
	BEACONTYPE_VENDOR = 61,
	BEACONTYPE_SPEECHBUBBLE = 62,
	BEACONTYPE_CONVERSATIONBUBBLE = 63,
	BEACONTYPE_DUGBOGDEN = 64,
	BEACONTYPE_INFERIDEN = 65,
	BEACONTYPE_WOLVESDEN = 66,
	BEACONTYPE_DEEK = 67,
	BEACONTYPE_HOGWARTS_EXIT = 68,
	BEACONTYPE_NAMEDENEMYLOCATION = 69,
	BEACONTYPE_BROOMRACE = 70,
	BEACONTYPE_HEDGEMAZE = 71,
	BEACONTYPE_BALLOONS = 72,
	BEACONTYPE_BUTTERFLIES = 73,
	BEACONTYPE_ROLLUP = 74,
	BEACONTYPE_LOSTPAGES = 75,
	BEACONTYPE_ICONSTACK = 76,
	BEACONTYPE_TRAVELVENDOR = 77,
	BEACONTYPE_INVALID = 78,
	BEACONTYPE_MAX = 79
};

// Enum Phoenix.EBeaconFlags
enum class EBeaconFlags : uint8 {
	BEACON_FLAG_NONE = 0,
	BEACON_FLAG_HIDEINACTIVE = 1,
	BEACON_FLAG_SHOWINWORLD = 2,
	BEACON_FLAG_FORCESTATIC = 4,
	BEACON_FLAG_FORCEINACTIVE = 8,
	BEACON_FLAG_ALWAYSCOMPASS = 16,
	BEACON_FLAG_HIDEDISTANCEONHUD = 32,
	BEACON_FLAG_DONTLOCKONHUD = 64,
	BEACON_FLAG_HIDEFROMMAP = 128,
	BEACON_FLAG_ALL = 255,
	BEACON_FLAG_MAX = 256
};

// Enum Phoenix.EBeaconDisplayPriority
enum class EBeaconDisplayPriority : uint8 {
	BEACON_DISPLAY_PRIORITY_LOW = 0,
	BEACON_DISPLAY_PRIORITY_MEDIUM = 1,
	BEACON_DISPLAY_PRIORITY_HIGH = 2,
	BEACON_DISPLAY_PRIORITY_HIGHEST = 3,
	BEACON_DISPLAY_PRIORITY_MAX = 4
};

// Enum Phoenix.EBeaconFunctionalTypes
enum class EBeaconFunctionalTypes : uint8 {
	BEACON_TYPE_STATIC = 0,
	BEACON_TYPE_DYNAMIC = 1,
	BEACON_TYPE_DISCOVERABLE = 2,
	BEACON_TYPE_ROAMING = 3,
	BEACON_TYPE_MAX = 4
};

// Enum Phoenix.FBoneParticleAction
enum class FBoneParticleAction : uint8 {
	Activate = 0,
	Deactivate = 1,
	Destroy = 2,
	FBoneParticleAction_MAX = 3
};

// Enum Phoenix.EBonySkeletonEvent
enum class EBonySkeletonEvent : uint8 {
	SkeletonVisible = 0,
	NonSkeletonHidden = 1,
	EBonySkeletonEvent_MAX = 2
};

// Enum Phoenix.EBool_PlayerHouse
enum class EBool_PlayerHouse : uint8 {
	Gryffindor = 0,
	Hufflepuff = 1,
	Ravenclaw = 2,
	Slytherin = 3,
	EBool_MAX = 4
};

// Enum Phoenix.EBarrelRollDirection
enum class EBarrelRollDirection : uint8 {
	Left = 0,
	Right = 1,
	EBarrelRollDirection_MAX = 2
};

// Enum Phoenix.EActionsCompleteBehaviour
enum class EActionsCompleteBehaviour : uint8 {
	None = 0,
	Dismount = 1,
	MoveToNewSpline = 2,
	EActionsCompleteBehaviour_MAX = 3
};

// Enum Phoenix.ECreatureTargetPredictionStraightLineReachableOption
enum class ECreatureTargetPredictionStraightLineReachableOption : uint8 {
	FromCurrentLocation = 0,
	FromInitialLocation = 1,
	ECreatureTargetPredictionStraightLineReachableOption_MAX = 2
};

// Enum Phoenix.ECreatureTargetPredictionLookAheadOption
enum class ECreatureTargetPredictionLookAheadOption : uint8 {
	FromServiceActivation = 0,
	Fixed = 1,
	ECreatureTargetPredictionLookAheadOption_MAX = 2
};

// Enum Phoenix.ECirclingDirection
enum class ECirclingDirection : uint8 {
	Clockwise = 0,
	Anticlockwise = 1,
	Random = 2,
	Closest = 3,
	ECirclingDirection_MAX = 4
};

// Enum Phoenix.ECreatureMoveToSpeedSetting
enum class ECreatureMoveToSpeedSetting : uint8 {
	SetSpeed = 0,
	KeepPreviousSpeed = 1,
	DistanceAdaptiveSpeed = 2,
	ECreatureMoveToSpeedSetting_MAX = 3
};

// Enum Phoenix.ECreatureGroupCoordinationTagTypesToRemove
enum class ECreatureGroupCoordinationTagTypesToRemove : uint8 {
	RemoveActors = 0,
	RemoveLocations = 1,
	ECreatureGroupCoordinationTagTypesToRemove_MAX = 2
};

// Enum Phoenix.ECaptureState
enum class ECaptureState : uint8 {
	None = 0,
	PreStart = 1,
	Progressing = 2,
	Succeeding = 3,
	Succeeded = 4,
	Cancelling = 5,
	Cancelled = 6,
	Interrupted = 7,
	Failing = 8,
	ECaptureState_MAX = 9
};

// Enum Phoenix.ESpellDirection
enum class ESpellDirection : uint8 {
	SpellDir_North = 0,
	SpellDir_NorthEast = 1,
	SpellDir_East = 2,
	SpellDir_SouthEast = 3,
	SpellDir_South = 4,
	SpellDir_SouthWest = 5,
	SpellDir_West = 6,
	SpellDir_NorthWest = 7,
	SpellDir_MAX = 8
};

// Enum Phoenix.FCharacterBoneProjectionMotionType
enum class FCharacterBoneProjectionMotionType : uint8 {
	Stationary = 0,
	SphericalProjection = 1,
	CapsuleProjection = 2,
	Crawling = 3,
	FCharacterBoneProjectionMotionType_MAX = 4
};

// Enum Phoenix.ECharacterOptionsCollisionResponse
enum class ECharacterOptionsCollisionResponse : uint8 {
	DoNotSetCollisionResponse = 0,
	Ignore = 1,
	Block = 2,
	Overlap = 3,
	ECharacterOptionsCollisionResponse_MAX = 4
};

// Enum Phoenix.EBoolClothInteractorValueType
enum class EBoolClothInteractorValueType : uint8 {
	DEFAULT = 0,
	SET = 1,
	EBoolClothInteractorValueType_MAX = 2
};

// Enum Phoenix.ECLothInteractorValueType
enum class ECLothInteractorValueType : uint8 {
	DEFAULT = 0,
	SET = 1,
	SCALE = 2,
	OFFSET = 3,
	ECLothInteractorValueType_MAX = 4
};

// Enum Phoenix.ECombatParryType
enum class ECombatParryType : uint8 {
	CPT_Parry = 0,
	CPT_Dodge = 1,
	CPT_MAX = 2
};

// Enum Phoenix.ECompanionVO
enum class ECompanionVO : uint8 {
	JoinAvatar = 0,
	FollowAvatarAgain = 1,
	WaitforAvatar = 2,
	AvatarDismisses = 3,
	HealsPlayer = 4,
	PlayerDying = 5,
	PlayerHealsCompanion = 6,
	ScheduleConflictDismiss = 7,
	Reject = 8,
	Stealth = 9,
	Dying = 10,
	PlayerHit = 11,
	PlayerHitDismissWarning = 12,
	Num = 13,
	ECompanionVO_MAX = 14
};

// Enum Phoenix.ESystemicCompanion
enum class ESystemicCompanion : uint8 {
	NoCompanion = 0,
	Sebastian = 1,
	Natsai = 2,
	Poppy = 3,
	ESystemicCompanion_MAX = 4
};

// Enum Phoenix.EVoiceOverConditions
enum class EVoiceOverConditions : uint8 {
	Default = 0,
	ForcePlaying = 1,
	EVoiceOverConditions_MAX = 2
};

// Enum Phoenix.EVoiceOverCompanionSelection
enum class EVoiceOverCompanionSelection : uint8 {
	ForcedOrAnySystemic = 0,
	AnyCompanion = 1,
	PrimaryCompanion = 2,
	ForcedCompanion = 3,
	SystemicCompanion = 4,
	EVoiceOverCompanionSelection_MAX = 5
};

// Enum Phoenix.ECapturedFrameStat
enum class ECapturedFrameStat : uint8 {
	Frame = 0,
	Game = 1,
	Render = 2,
	Gpu = 3,
	Cpu = 4,
	Count = 5,
	ECapturedFrameStat_MAX = 6
};

// Enum Phoenix.EConjurationSpawnState
enum class EConjurationSpawnState : uint8 {
	None = 0,
	Spawned = 1,
	SpawnIn = 2,
	SpawnOut = 3,
	EConjurationSpawnState_MAX = 4
};

// Enum Phoenix.EControlBehaviors
enum class EControlBehaviors : uint8 {
	None = 0,
	Cinematic = 1,
	Station = 2,
	EControlBehaviors_MAX = 3
};

// Enum Phoenix.EConversationType
enum class EConversationType : uint8 {
	Vendor = 0,
	Greeting = 1,
	Critical = 2,
	VendorUpdate = 3,
	Update = 4,
	Standard = 5,
	VO = 6,
	EConversationType_MAX = 7
};

// Enum Phoenix.ECreatureFleeFlyingOption
enum class ECreatureFleeFlyingOption : uint8 {
	DontFly = 0,
	TakeoffImmediately = 1,
	TakeoffFromSprint = 2,
	ECreatureFleeFlyingOption_MAX = 3
};

// Enum Phoenix.ECreatureNavLinkType
enum class ECreatureNavLinkType : uint8 {
	None = 0,
	Jump = 1,
	ECreatureNavLinkType_MAX = 2
};

// Enum Phoenix.ECreatureIdleOverrideState
enum class ECreatureIdleOverrideState : uint8 {
	None = 0,
	Stationary = 1,
	FollowPath = 2,
	RelaxNearSpawnLocation = 3,
	StationaryGrazing = 4,
	ECreatureIdleOverrideState_MAX = 5
};

// Enum Phoenix.ECreatureCombatDebugBehaviorType
enum class ECreatureCombatDebugBehaviorType : uint8 {
	None = 0,
	Exclude = 1,
	Forced = 2,
	ECreatureCombatDebugBehaviorType_MAX = 3
};

// Enum Phoenix.ECreatureCombatDebugDisplayType
enum class ECreatureCombatDebugDisplayType : uint8 {
	None = 0,
	WhenActive = 1,
	Always = 2,
	ECreatureCombatDebugDisplayType_MAX = 3
};

// Enum Phoenix.EMountCombatChargeState
enum class EMountCombatChargeState : uint8 {
	Inactive = 0,
	IntoTransition = 1,
	ChargeLoop = 2,
	OutOfTransition = 3,
	EMountCombatChargeState_MAX = 4
};

// Enum Phoenix.EMountFlyingGait
enum class EMountFlyingGait : uint8 {
	Stop = 0,
	Hover = 1,
	Slow = 2,
	Fast = 3,
	Num = 4,
	EMountFlyingGait_MAX = 5
};

// Enum Phoenix.ECreatureFeedState
enum class ECreatureFeedState : uint8 {
	Inactive = 0,
	Thrown = 1,
	MoveToCreature = 2,
	Eating = 3,
	Vanishing = 4,
	ECreatureFeedState_MAX = 5
};

// Enum Phoenix.ECreatureFeedFloatingState
enum class ECreatureFeedFloatingState : uint8 {
	Static = 0,
	FreeFloating = 1,
	FloatingToTargetTransform = 2,
	AttachedToTransform = 3,
	ECreatureFeedFloatingState_MAX = 4
};

// Enum Phoenix.ECreatureFeedingStationSlotVisualState
enum class ECreatureFeedingStationSlotVisualState : uint8 {
	Empty = 0,
	Filling = 1,
	Full = 2,
	Emptying = 3,
	Dispensing = 4,
	ECreatureFeedingStationSlotVisualState_MAX = 5
};

// Enum Phoenix.ECreatureLookAtBehaviorMode
enum class ECreatureLookAtBehaviorMode : uint8 {
	Disabled = 0,
	Perception = 1,
	LookAround = 2,
	ForcedTarget = 3,
	ECreatureLookAtBehaviorMode_MAX = 4
};

// Enum Phoenix.ECreatureMountErrorMessages
enum class ECreatureMountErrorMessages : uint8 {
	Error_GraphornDisabled = 0,
	Error_HippogriffDisabled = 1,
	Error_TakeOffUnavailable = 2,
	Error_ChargeUnavailable = 3,
	Error_ChargeOnCooldown = 4,
	Error_InsufficientSpawnArea = 5,
	Error_MountDeathCooldown = 6,
	Error_InsideNoTakeOffZone = 7,
	Error_InsideNoLandZone = 8,
	Error_InsideNoMountingZone = 9,
	Error_InsideNoMountingArea = 10,
	Error_MAX = 11
};

// Enum Phoenix.EMountTransitionAnimState
enum class EMountTransitionAnimState : uint8 {
	Wait = 0,
	Mount_Start = 1,
	Mount_Cancel = 2,
	Mount_Standing = 3,
	Mount_Trot = 4,
	Dismount_Standing_Start = 5,
	Dismount_Trot_Start = 6,
	Dismount_Standing = 7,
	Dismount_Trot = 8,
	Dismount_End = 9,
	Dismount_Knockdown = 10,
	EMountTransitionAnimState_MAX = 11
};

// Enum Phoenix.ECreaturePerceptionVolumeType
enum class ECreaturePerceptionVolumeType : uint8 {
	AlwaysPerceiveInside = 0,
	KeepPerceptionInside = 1,
	ECreaturePerceptionVolumeType_MAX = 2
};

// Enum Phoenix.ECreaturePettingBrushFloatingState
enum class ECreaturePettingBrushFloatingState : uint8 {
	FreeFloating = 0,
	FloatingToTargetTransform = 1,
	AttachedToTransform = 2,
	ECreaturePettingBrushFloatingState_MAX = 3
};

// Enum Phoenix.ECreatureCageAnimation
enum class ECreatureCageAnimation : uint8 {
	Idle = 0,
	Alert = 1,
	Wounded = 2,
	ECreatureCageAnimation_MAX = 3
};

// Enum Phoenix.ECreatureAIInitialState
enum class ECreatureAIInitialState : uint8 {
	Auto = 0,
	Idle = 1,
	Stationary = 2,
	FollowPath = 3,
	RelaxNearSpawnLocation = 4,
	SpawnOnDen = 5,
	PostGrowUp = 6,
	InCage = 7,
	StationaryGrazing = 8,
	ECreatureAIInitialState_MAX = 9
};

// Enum Phoenix.ECreaturePregnancyState
enum class ECreaturePregnancyState : uint8 {
	NotPregnant = 0,
	Gestation = 1,
	Incubation = 2,
	ECreaturePregnancyState_MAX = 3
};

// Enum Phoenix.ECreatureNeed
enum class ECreatureNeed : uint8 {
	Fed = 0,
	InteractedWith = 1,
	Count = 2,
	ECreatureNeed_MAX = 3
};

// Enum Phoenix.ECreatureInteraction
enum class ECreatureInteraction : uint8 {
	None = 0,
	Pet = 1,
	Play = 2,
	ECreatureInteraction_MAX = 3
};

// Enum Phoenix.ECreatureNavMeshTurnDirection
enum class ECreatureNavMeshTurnDirection : uint8 {
	Left = 0,
	Right = 1,
	ECreatureNavMeshTurnDirection_MAX = 2
};

// Enum Phoenix.ECreatureStartingIdleBehavior
enum class ECreatureStartingIdleBehavior : uint8 {
	Explore = 0,
	Forage = 1,
	Rest = 2,
	ECreatureStartingIdleBehavior_MAX = 3
};

// Enum Phoenix.ECreatureLandingType
enum class ECreatureLandingType : uint8 {
	None = 0,
	Standing = 1,
	Gallop = 2,
	Trot = 3,
	FromHover = 4,
	Num = 5,
	ECreatureLandingType_MAX = 6
};

// Enum Phoenix.ECreatureTakeoffType
enum class ECreatureTakeoffType : uint8 {
	None = 0,
	Standing = 1,
	Gallop = 2,
	ECreatureTakeoffType_MAX = 3
};

// Enum Phoenix.ECreatureFlightState
enum class ECreatureFlightState : uint8 {
	NotFlying = 0,
	Flying = 1,
	ECreatureFlightState_MAX = 2
};

// Enum Phoenix.ECreatureMovementSpeed
enum class ECreatureMovementSpeed : uint8 {
	Stop = 0,
	Walk = 1,
	Jog = 2,
	Sprint = 3,
	Num = 4,
	ECreatureMovementSpeed_MAX = 5
};

// Enum Phoenix.ECreaturePathEndMode
enum class ECreaturePathEndMode : uint8 {
	Stop = 0,
	KeepSpeed = 1,
	ECreaturePathEndMode_MAX = 2
};

// Enum Phoenix.ECreatureStoppingMode
enum class ECreatureStoppingMode : uint8 {
	Standard = 0,
	Rapid = 1,
	Num = 2,
	ECreatureStoppingMode_MAX = 3
};

// Enum Phoenix.ECreatureStance
enum class ECreatureStance : uint8 {
	Standing = 0,
	Sitting = 1,
	LyingDown = 2,
	Sleeping = 3,
	Flying = 4,
	ECreatureStance_MAX = 5
};

// Enum Phoenix.ESubjectType
enum class ESubjectType : uint8 {
	Class = 0,
	Club = 1,
	ExtraCurricular = 2,
	Nurture = 3,
	SelfStudy = 4,
	ESubjectType_MAX = 5
};

// Enum Phoenix.EDisciplineType
enum class EDisciplineType : uint8 {
	NONE = 0,
	Arithmancy = 1,
	Astronomy = 2,
	Beasts = 3,
	Charms = 4,
	DarkArts = 5,
	DefenceAgainstTheDarkArts = 6,
	Divination = 7,
	Flying = 8,
	Herbology = 9,
	HistoryOfMagic = 10,
	Infiltrator = 11,
	Potions = 12,
	Socialite = 13,
	Transfiguration = 14,
	ALL_DISCIPLINES = 15,
	EDisciplineType_MAX = 16
};

// Enum Phoenix.EKnowledgeTurnInType
enum class EKnowledgeTurnInType : uint8 {
	SingleKnowledge = 0,
	ScholarSpell = 1,
	Location = 2,
	Student = 3,
	EKnowledgeTurnInType_MAX = 4
};

// Enum Phoenix.ETurnInType
enum class ETurnInType : uint8 {
	None = 0,
	Item = 1,
	Knowledge = 2,
	Lock = 3,
	ETurnInType_MAX = 4
};

// Enum Phoenix.EDevilsSnareState
enum class EDevilsSnareState : uint8 {
	Hidden = 0,
	Idle = 1,
	Recoiling = 2,
	Regrowing = 3,
	Grabbing = 4,
	EDevilsSnareState_MAX = 5
};

// Enum Phoenix.EDisillusionmentAwareness
enum class EDisillusionmentAwareness : uint8 {
	Normal = 0,
	Heightened = 1,
	FullyAware = 2,
	EDisillusionmentAwareness_MAX = 3
};

// Enum Phoenix.EBlockNavMeshOverride
enum class EBlockNavMeshOverride : uint8 {
	AllowOverride = 0,
	UseValueAsIs = 1,
	EBlockNavMeshOverride_MAX = 2
};

// Enum Phoenix.EDoorCurveAdjustment
enum class EDoorCurveAdjustment : uint8 {
	NoAdjustment = 0,
	Invert = 1,
	Reverse = 2,
	EDoorCurveAdjustment_MAX = 3
};

// Enum Phoenix.EOpenDoorDirection
enum class EOpenDoorDirection : uint8 {
	AwayFromPlayer = 0,
	Clockwise = 1,
	CounterClockwise = 2,
	EOpenDoorDirection_MAX = 3
};

// Enum Phoenix.EDoorFastTravelType
enum class EDoorFastTravelType : uint8 {
	NotUsingFastTravel = 0,
	TravelToOtherSideOfDoor = 1,
	TravelToNamedLocation = 2,
	TravelToDifferentNamedLocationBasedOnSide = 3,
	EDoorFastTravelType_MAX = 4
};

// Enum Phoenix.EDoorLockLevel
enum class EDoorLockLevel : uint8 {
	Unlocked = 0,
	Level_2 = 1,
	Level_3 = 2,
	Level_4 = 3,
	NeedsKeyToUnlock = 4,
	ChildLock = 5,
	EDoorLockLevel_MAX = 6
};

// Enum Phoenix.EDoorState
enum class EDoorState : uint8 {
	Locked = 0,
	Unlocked = 1,
	Open = 2,
	Sealed = 3,
	EDoorState_MAX = 4
};

// Enum Phoenix.EDuelTechniqueCategory
enum class EDuelTechniqueCategory : uint8 {
	CommonMechanicMastery = 0,
	EnvironmentalOpportunities = 1,
	SpecialEnemyOpportunities = 2,
	SpecialToolSpellEncouragement = 3,
	SpellCombos = 4,
	TalentRequired = 5,
	EDuelTechniqueCategory_MAX = 6
};

// Enum Phoenix.EDuelTechniqueRequirementFunction
enum class EDuelTechniqueRequirementFunction : uint8 {
	All = 0,
	AnyOne = 1,
	AnyTwo = 2,
	FirstPlusAnyOne = 3,
	EDuelTechniqueRequirementFunction_MAX = 4
};

// Enum Phoenix.EDuelTechniqueDepulsoActorType
enum class EDuelTechniqueDepulsoActorType : uint8 {
	Any = 0,
	EnvironmentObstacles = 1,
	Enemies = 2,
	EDuelTechniqueDepulsoActorType_MAX = 3
};

// Enum Phoenix.EDuelTechniqueFirstState
enum class EDuelTechniqueFirstState : uint8 {
	None = 0,
	Frozen = 1,
	OnFire = 2,
	InAir = 3,
	Transformed = 4,
	EDuelTechniqueFirstState_MAX = 5
};

// Enum Phoenix.EDuelTechniqueSubtype
enum class EDuelTechniqueSubtype : uint8 {
	Damage = 0,
	Reaction = 1,
	Depulso = 2,
	TimedEncounter = 3,
	Combo = 4,
	CustomEvent = 5,
	KillAllEnemies = 6,
	Deflect = 7,
	Oppugno = 8,
	SpellEffect = 9,
	TimedJuggle = 10,
	ComboCount = 11,
	SpellEffectMultiple = 12,
	ImperiusKill = 13,
	NoHealthItem = 14,
	EDuelTechniqueSubtype_MAX = 15
};

// Enum Phoenix.EDuelTechniqueDifficulty
enum class EDuelTechniqueDifficulty : uint8 {
	Easy = 0,
	Medium = 1,
	Hard = 2,
	EDuelTechniqueDifficulty_MAX = 3
};

// Enum Phoenix.EDuelTechniqueRules
enum class EDuelTechniqueRules : uint8 {
	ListEncounterRule = 0,
	IncompleteRule = 1,
	NumTimesSeenRule = 2,
	TechniqueWeightRule = 3,
	DifficultyRule = 4,
	SpellCategoryRule = 5,
	ItemRule = 6,
	EnvironmentObstacleRule = 7,
	DTCategoriesRule = 8,
	EquippedSpellsRule = 9,
	EDuelTechniqueRules_MAX = 10
};

// Enum Phoenix.EEnemyRequirementProperty
enum class EEnemyRequirementProperty : uint8 {
	None = 0,
	Juggleable = 1,
	Freezable = 2,
	Burnable = 3,
	Transformable = 4,
	Blockable = 5,
	Unshielded = 6,
	EEnemyRequirementProperty_MAX = 7
};

// Enum Phoenix.ETileState
enum class ETileState : uint8 {
	None = 0,
	Near = 1,
	Mid = 2,
	Far = 3,
	ETileState_MAX = 4
};

// Enum Phoenix.EActor_LoadDBProcessingType
enum class EActor_LoadDBProcessingType : uint8 {
	LoadProcessingType_None = 0,
	LoadProcessingType_NPC = 1,
	LoadProcessingType_ObjectState = 2,
	LoadProcessingType_MAX = 3
};

// Enum Phoenix.EDynamicObjectLoadState
enum class EDynamicObjectLoadState : uint8 {
	None = 0,
	Loading = 1,
	Loaded = 2,
	Unloaded = 3,
	NotInRegistry = 4,
	NotInAssetMap = 5,
	EDynamicObjectLoadState_MAX = 6
};

// Enum Phoenix.EDynamicObjectSpawnerState
enum class EDynamicObjectSpawnerState : uint8 {
	Inactive = 0,
	Active = 1,
	Spawning = 2,
	Dormant = 3,
	EDynamicObjectSpawnerState_MAX = 4
};

// Enum Phoenix.EDynamicObjectVolumeDiscoveryType
enum class EDynamicObjectVolumeDiscoveryType : uint8 {
	Default = 0,
	ActionDOV = 1,
	EDynamicObjectVolumeDiscoveryType_MAX = 2
};

// Enum Phoenix.EDynamicObjectVolumeSpawnDistributionType
enum class EDynamicObjectVolumeSpawnDistributionType : uint8 {
	Uniform = 0,
	UniformWithShuffle = 1,
	VolumeDistribution = 2,
	VolumeDistributionWithShuffle = 3,
	EDynamicObjectVolumeSpawnDistributionType_MAX = 4
};

// Enum Phoenix.EDynamicObjectVolumeSpawnerState
enum class EDynamicObjectVolumeSpawnerState : uint8 {
	Inactive = 0,
	GatheringData = 1,
	Loading = 2,
	Active = 3,
	Spawning = 4,
	Culling = 5,
	Dormant = 6,
	EDynamicObjectVolumeSpawnerState_MAX = 7
};

// Enum Phoenix.EDynamicObjectVolumeState
enum class EDynamicObjectVolumeState : uint8 {
	Inactive = 0,
	Active = 1,
	EDynamicObjectVolumeState_MAX = 2
};

// Enum Phoenix.EEnvironmentObstacle
enum class EEnvironmentObstacle : uint8 {
	Throwable = 0,
	RedBarrel = 1,
	SendTarget = 2,
	ENUM_MAX = 3,
	EEnvironmentObstacle_MAX = 4
};

// Enum Phoenix.ECreatorUpdateState
enum class ECreatorUpdateState : uint8 {
	UpdateSuccess = 0,
	UpdateFail = 1,
	UpdateCurrent = 2,
	UpdateDBFail = 3,
	ECreatorUpdateState_MAX = 4
};

// Enum Phoenix.EnemyApparateActor_Movement
enum class EnemyApparateActor_Movement : uint8 {
	ToLoc = 0,
	ToTarget = 1,
	EnemyApparateActor_MAX = 2
};

// Enum Phoenix.EEnemy_AttackChoiceSource
enum class EEnemy_AttackChoiceSource : uint8 {
	Normal = 0,
	Interrupt = 1,
	Split = 2,
	PreAttack = 3,
	EEnemy_MAX = 4
};

// Enum Phoenix.EEnemyTakeAKneeAction
enum class EEnemyTakeAKneeAction : uint8 {
	None = 0,
	Defeat = 1,
	Advance = 2,
	Num = 3,
	EEnemyTakeAKneeAction_MAX = 4
};

// Enum Phoenix.EEnemyMovementState
enum class EEnemyMovementState : uint8 {
	Stop = 0,
	Walk = 1,
	Jog = 2,
	Gallop = 3,
	Num = 4,
	EEnemyMovementState_MAX = 5
};

// Enum Phoenix.ENPC_FollowSplineScurryState
enum class ENPC_FollowSplineScurryState : uint8 {
	Interval = 0,
	Proximity = 1,
	ENPC_MAX = 2
};

// Enum Phoenix.ENPC_FollowSplineDirection
enum class ENPC_FollowSplineDirection : uint8 {
	Forward = 0,
	Reverse = 1,
	ENPC_MAX = 2
};

// Enum Phoenix.ENPC_FollowSplineEndAction
enum class ENPC_FollowSplineEndAction : uint8 {
	None = 0,
	Loop = 1,
	Bounce = 2,
	Done = 3,
	Die = 4,
	DoneNoReact = 5,
	Deactivate = 6,
	ENPC_MAX = 7
};

// Enum Phoenix.ENPC_ShowUIPerceptionIndicatorMode
enum class ENPC_ShowUIPerceptionIndicatorMode : uint8 {
	Progression = 0,
	AggroOnly = 1,
	ENPC_MAX = 2
};

// Enum Phoenix.ENPC_ShowUIPerceptionCone
enum class ENPC_ShowUIPerceptionCone : uint8 {
	Normal = 0,
	Disillusionment = 1,
	Invisible = 2,
	ENPC_MAX = 3
};

// Enum Phoenix.ENPC_PathSpec
enum class ENPC_PathSpec : uint8 {
	None = 0,
	Ground = 1,
	Water = 2,
	GroundAndWater = 3,
	Custom = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ENPC_Tether
enum class ENPC_Tether : uint8 {
	None = 0,
	Spawn = 1,
	Player = 2,
	Location = 3,
	WanderStartLocation = 4,
	Actor = 5,
	ENPC_MAX = 6
};

// Enum Phoenix.ENPC_GameContext
enum class ENPC_GameContext : uint8 {
	None = 0,
	Swim = 1,
	OnSlope = 2,
	OnStairs = 3,
	Crouching = 4,
	Flying = 5,
	Stealth = 6,
	CCState = 7,
	KnockedDown = 8,
	Levitated = 9,
	ENPC_MAX = 10
};

// Enum Phoenix.ENPC_DissolveType
enum class ENPC_DissolveType : uint8 {
	Dissolve_None = 0,
	Dissolve_Normal = 1,
	Dissovle_HighDamage = 2,
	Dissovle_Impact = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.ENPC_Spawn
enum class ENPC_Spawn : uint8 {
	None = 0,
	Default = 1,
	Birth = 2,
	BurrowUp = 3,
	Descend = 4,
	Apparate = 5,
	Death = 6,
	Smoke = 7,
	CrackWall = 8,
	CrackFloor = 9,
	CrackStanding = 10,
	OnBack = 11,
	GroundOnFront = 12,
	GroundOnBack = 13,
	BurstOut = 14,
	Fall = 15,
	WallStepDown = 16,
	Freeze = 17,
	Petrified = 18,
	JumpDown = 19,
	Animagus = 20,
	Spline = 21,
	Hidden = 22,
	Asleep = 23,
	SplineSmoke = 24,
	JumpSpline = 25,
	Climb = 26,
	AncientMagic = 27,
	Reflection = 28,
	InkySmoke = 29,
	FromStone = 30,
	SlowStand = 31,
	BossSpawn = 32,
	WipeIn = 33,
	ENPC_MAX = 34
};

// Enum Phoenix.EEnemy_CharacterState
enum class EEnemy_CharacterState : uint8 {
	Wander = 0,
	Stationary = 1,
	StationaryUntilAware = 2,
	FollowPath = 3,
	StationaryUntilReleased = 4,
	FollowSpline = 5,
	None = 6,
	EEnemy_MAX = 7
};

// Enum Phoenix.ENPC_TargetSelectionScore
enum class ENPC_TargetSelectionScore : uint8 {
	Distance = 0,
	MaintainTarget = 1,
	StayIn = 2,
	CognitionPriority = 3,
	LargeCharacter = 4,
	NumAttacking = 5,
	RecentlyAttackedBy = 6,
	RecentlyAttackedByPlayer = 7,
	HighlightedByPlayer = 8,
	Attacking = 9,
	RecentlyAttackedPlayer = 10,
	RecentlyAttackedTarget = 11,
	Reacting = 12,
	InCCReaction = 13,
	InRagDoll = 14,
	InAir = 15,
	InCriticalHealth = 16,
	InNearDeathKneeling = 17,
	ShieldsOn = 18,
	Level = 19,
	Health = 20,
	Threat = 21,
	SpiderOnFire = 22,
	InferiusOnFire = 23,
	InferiusKamikaze = 24,
	Leader = 25,
	Perk = 26,
	IneligibleToChange = 27,
	Count = 28,
	ENPC_MAX = 29
};

// Enum Phoenix.ENPC_QBUpdateProcessingType
enum class ENPC_QBUpdateProcessingType : uint8 {
	NPCList = 0,
	QBAttackData = 1,
	Both = 2,
	Custom = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.EEnemySplineSpawnEffectType
enum class EEnemySplineSpawnEffectType : uint8 {
	None = 0,
	Faction = 1,
	Shield = 2,
	Num = 3,
	EEnemySplineSpawnEffectType_MAX = 4
};

// Enum Phoenix.ENPC_NavAttackReachableState
enum class ENPC_NavAttackReachableState : uint8 {
	NotNeeded = 0,
	Unreachable = 1,
	Reachable = 2,
	StraightLineReachable = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.Enemy_MorphStatus
enum class Enemy_MorphStatus : uint8 {
	None = 0,
	MorphingToWolf = 1,
	MorphingToMage = 2,
	Enemy_MAX = 3
};

// Enum Phoenix.Enemy_AttackProgreesionType
enum class Enemy_AttackProgreesionType : uint8 {
	None = 0,
	Stupefy = 1,
	Count = 2,
	Enemy_MAX = 3
};

// Enum Phoenix.EEnemy_AttackSource
enum class EEnemy_AttackSource : uint8 {
	Normal = 0,
	Split = 1,
	Counter = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.EEnemy_AttackResetSource
enum class EEnemy_AttackResetSource : uint8 {
	Normal = 0,
	AttackSplit = 1,
	EEnemy_MAX = 2
};

// Enum Phoenix.Enemy_CanMoveStatus
enum class Enemy_CanMoveStatus : uint8 {
	Stationary = 0,
	NotValidTASForAttacking = 1,
	NonInterruptible = 2,
	WaitInNotInRange = 3,
	CannotApproachNotInRangeOrWaiting = 4,
	CannotApproach = 5,
	InvalidSelectionRange = 6,
	ImmediateOnlyNotInRange = 7,
	ImmediateOnly = 8,
	CannotAttackFromGoalLoc = 9,
	ThresholdNotMet = 10,
	RadiusNotMet = 11,
	CannotMoveInRange = 12,
	CannotRetreat = 13,
	AttackCorridor = 14,
	FailedDestination = 15,
	ForceFace = 16,
	MoveReqNotMet = 17,
	AlreadyAtGoal = 18,
	EnergyDrained = 19,
	StayPut = 20,
	NavMeshNotFound = 21,
	NavPathFailed = 22,
	Enemy_MAX = 23
};

// Enum Phoenix.Enemy_CanAttackAbortStatus
enum class Enemy_CanAttackAbortStatus : uint8 {
	NullAttackData = 0,
	AttackEventAlreadyStarted = 1,
	AttackEventReset = 2,
	VerifyAttack = 3,
	CorridorCheck = 4,
	VerifyAttackTicket = 5,
	LimitAttackOnTargetLocked = 6,
	Enemy_MAX = 7
};

// Enum Phoenix.Enemy_CanAttackReqStatus
enum class Enemy_CanAttackReqStatus : uint8 {
	NoTarget = 0,
	TargetReacting = 1,
	BreakActive = 2,
	InvalidAUSForTurnScore = 3,
	InvalidTAS = 4,
	InsideAttackCorridor = 5,
	InAttackExecuteRetreatDist = 6,
	InvalidAttackState = 7,
	LOSPathToTargetNotClear = 8,
	TeammateToTargetNotClear = 9,
	TeammatePathToTargetNotClear = 10,
	NotInterruptible = 11,
	NotFacing = 12,
	NoAttackData = 13,
	TargetNotNavReachable = 14,
	InAttackExecuteCooldown = 15,
	InTicketCooldown = 16,
	WaitingOnTicket = 17,
	NotInRange = 18,
	EnergyDrained = 19,
	ProtegoStartWait = 20,
	RetaliateActive = 21,
	InWater = 22,
	TargetInWater = 23,
	HeightDifference = 24,
	ParryTargetCurrentWindow = 25,
	LimitAttackOnTarget = 26,
	Suspended = 27,
	ForceMove = 28,
	AlreadyHoldsTicket = 29,
	NoTicketAvailable = 30,
	TargetHasParryWindowAlready = 31,
	Enemy_MAX = 32
};

// Enum Phoenix.NPC_TargetAwareStateRateSource
enum class NPC_TargetAwareStateRateSource : uint8 {
	EnterAware = 0,
	ExitAware = 1,
	EnterAlert = 2,
	ExitAlert = 3,
	NPC_MAX = 4
};

// Enum Phoenix.NPC_ParryCounterrState
enum class NPC_ParryCounterrState : uint8 {
	ParryCounterNone = 0,
	ParryCounterFirst = 1,
	ParryCounterSecond = 2,
	ParryCounterThird = 3,
	ParryCounterFourth = 4,
	ParryCounterFifth = 5,
	ParryCounterBreak = 6,
	NPC_MAX = 7
};

// Enum Phoenix.NPC_GameChangerState
enum class NPC_GameChangerState : uint8 {
	GameChanger_None = 0,
	GameChanger_ReplicaMaster = 1,
	GameChanger_Replicant = 2,
	GameChanger_Animagus_Character = 3,
	GameChanger_Animagus_Loading = 4,
	GameChanger_Animagus_Creature = 5,
	GameChanger_Animagus_Unloading = 6,
	GameChanger_Animagus_Form_Loading = 7,
	GameChanger_Animagus_Form = 8,
	GameChanger_Animagus_Form_Unloading = 9,
	GameChanger_Summoned_Form = 10,
	GameChanger_SummoningDead = 11,
	GameChanger_MAX = 12
};

// Enum Phoenix.EEnemy_AttackThreatHoming
enum class EEnemy_AttackThreatHoming : uint8 {
	Unset = 0,
	Stop = 1,
	Stopped = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.EEnemy_AttackThreatType
enum class EEnemy_AttackThreatType : uint8 {
	None = 0,
	Melee = 1,
	Munition = 2,
	Weapon = 3,
	Ranged = 4,
	Buf = 5,
	Spawn = 6,
	Custom = 7,
	Ballistic = 8,
	RunTo = 9,
	EEnemy_MAX = 10
};

// Enum Phoenix.EEnemy_AttackThreatTracking
enum class EEnemy_AttackThreatTracking : uint8 {
	None = 0,
	Windup = 1,
	Fired = 2,
	Parried = 3,
	ParriedFired = 4,
	EEnemy_MAX = 5
};

// Enum Phoenix.EEnemy_LOSHeightOffsetSource
enum class EEnemy_LOSHeightOffsetSource : uint8 {
	CapsuleHalf = 0,
	Custom = 1,
	EEnemy_MAX = 2
};

// Enum Phoenix.EEnemy_LOSConeRadiusSource
enum class EEnemy_LOSConeRadiusSource : uint8 {
	CapsuleHalf = 0,
	Custom = 1,
	EEnemy_MAX = 2
};

// Enum Phoenix.EEnemy_LimitAttackOnTarget
enum class EEnemy_LimitAttackOnTarget : uint8 {
	None = 0,
	AttackStart = 1,
	WindowStart = 2,
	ReleaseStart = 3,
	RunToStart = 4,
	EEnemy_MAX = 5
};

// Enum Phoenix.EEnemy_AttackSpecificDataType
enum class EEnemy_AttackSpecificDataType : uint8 {
	None = 0,
	Ballistic = 1,
	Flourish = 2,
	RunTo = 3,
	Apparate = 4,
	EEnemy_MAX = 5
};

// Enum Phoenix.EEnemy_AttackScoreTypeLevel
enum class EEnemy_AttackScoreTypeLevel : uint8 {
	Unset = 0,
	VeryLow = 1,
	Low = 2,
	Medium = 3,
	High = 4,
	VeryHigh = 5,
	EEnemy_MAX = 6
};

// Enum Phoenix.EEnemy_TicketScoreType
enum class EEnemy_TicketScoreType : uint8 {
	Allowed = 0,
	HasTicket = 1,
	NotAllowed = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.EEnemy_SelectCooldownType
enum class EEnemy_SelectCooldownType : uint8 {
	Immediate = 0,
	Increment = 1,
	EEnemy_MAX = 2
};

// Enum Phoenix.EEEnemyAISizeCategory
enum class EEEnemyAISizeCategory : uint8 {
	None = 0,
	Tiny = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	Huge = 5,
	Gigantic = 6,
	EEEnemyAISizeCategory_MAX = 7
};

// Enum Phoenix.Enemy_AttackSearchDistType
enum class Enemy_AttackSearchDistType : uint8 {
	Average = 0,
	Close = 1,
	Far = 2,
	Enemy_MAX = 3
};

// Enum Phoenix.EEnemy_ContextMatch
enum class EEnemy_ContextMatch : uint8 {
	Any = 0,
	All = 1,
	EEnemy_MAX = 2
};

// Enum Phoenix.ChooseAttackFlags
enum class ChooseAttackFlags : uint8 {
	UseFallbackRange = 0,
	IgnoreSelectCooldown = 1,
	ResetFailed = 2,
	IgnoreSelectRanges = 3,
	IgnoreOptRanges = 4,
	IgnoreMinAttackAngle = 5,
	TargetOffNav = 6,
	HighTier = 7,
	MedTier = 8,
	LowTier = 9,
	AnyTier = 10,
	IgnoreSelectWeights = 11,
	Count = 12,
	ChooseAttackFlags_MAX = 13
};

// Enum Phoenix.EEnemyGoblinAISpawnType
enum class EEnemyGoblinAISpawnType : uint8 {
	None = 0,
	EEnemyGoblinAISpawnType_MAX = 1
};

// Enum Phoenix.EEnemySpiderAISpawnType
enum class EEnemySpiderAISpawnType : uint8 {
	None = 0,
	UpFromGround = 1,
	FallFromSky = 2,
	DescentOnWeb = 3,
	WakeUp = 4,
	Tumble = 5,
	TumbleAndDie = 6,
	EEnemySpiderAISpawnType_MAX = 7
};

// Enum Phoenix.EEnemyAISpawnType
enum class EEnemyAISpawnType : uint8 {
	None = 0,
	EEnemyAISpawnType_MAX = 1
};

// Enum Phoenix.EEnemy_AttackApparateMode
enum class EEnemy_AttackApparateMode : uint8 {
	None = 0,
	Target = 1,
	Player = 2,
	Self = 3,
	Location = 4,
	Custom = 5,
	EEnemy_MAX = 6
};

// Enum Phoenix.EEnemy_TagContainer
enum class EEnemy_TagContainer : uint8 {
	Shuffle = 0,
	Taunt = 1,
	Spawn = 2,
	IdleBreak = 3,
	Flourish = 4,
	None = 5,
	BecomeAware = 6,
	JumpSpline = 7,
	Count = 8,
	EEnemy_MAX = 9
};

// Enum Phoenix.EEnemy_Context
enum class EEnemy_Context : uint8 {
	HighHealth = 0,
	LowHealth = 1,
	SuccessfulAttack = 2,
	TargetDead = 3,
	LowEnergy = 4,
	TeammateSuccessfulAttack = 5,
	EEnemy_MAX = 6
};

// Enum Phoenix.EEnemy_Shuffle
enum class EEnemy_Shuffle : uint8 {
	Forward = 0,
	Left45 = 1,
	Left90 = 2,
	Left135 = 3,
	Back = 4,
	Right135 = 5,
	Right90 = 6,
	Right45 = 7,
	EEnemy_MAX = 8
};

// Enum Phoenix.ENPC_BlendspaceAngle
enum class ENPC_BlendspaceAngle : uint8 {
	Forward = 0,
	Left45 = 1,
	Left90 = 2,
	Left135 = 3,
	Left180 = 4,
	Right180 = 5,
	Right135 = 6,
	Right90 = 7,
	Right45 = 8,
	ENPC_MAX = 9
};

// Enum Phoenix.EEnemy_AttackType
enum class EEnemy_AttackType : uint8 {
	None = 0,
	Ranged = 1,
	Melee = 2,
	Buf = 3,
	Spawn = 4,
	Custom = 5,
	Ballistic = 6,
	RunTo = 7,
	EEnemy_MAX = 8
};

// Enum Phoenix.EEnemy_AttackingState
enum class EEnemy_AttackingState : uint8 {
	None = 0,
	Init = 1,
	Move = 2,
	Execute = 3,
	Reset = 4,
	Finished = 5,
	EEnemy_MAX = 6
};

// Enum Phoenix.EEnemyAIAttackState
enum class EEnemyAIAttackState : uint8 {
	None = 0,
	Attack = 1,
	Pressure = 2,
	Withdraw = 3,
	StayPut = 4,
	CloseDistance = 5,
	Cover = 6,
	SeekWeapon = 7,
	Evade = 8,
	Follow = 9,
	InOut = 10,
	Reposition = 11,
	SeekTarget = 12,
	BackOnNav = 13,
	LeadPlayer = 14,
	TooClose = 15,
	SwimToShore = 16,
	Standby = 17,
	Duel = 18,
	TooCloseTeammate = 19,
	Companion = 20,
	Count = 21,
	EEnemyAIAttackState_MAX = 22
};

// Enum Phoenix.EEnemyAIAttackStateType
enum class EEnemyAIAttackStateType : uint8 {
	None = 0,
	Attack_1 = 1,
	Pressure_1 = 2,
	Withdraw_1 = 3,
	Count = 4,
	EEnemyAIAttackStateType_MAX = 5
};

// Enum Phoenix.EEnemy_AttackTier
enum class EEnemy_AttackTier : uint8 {
	High = 0,
	Med = 1,
	Low = 2,
	None = 3,
	EEnemy_MAX = 4
};

// Enum Phoenix.EEnemy_Abort
enum class EEnemy_Abort : uint8 {
	None = 0,
	AUS = 1,
	Move = 2,
	Idle = 3,
	MoveCollision = 4,
	MoveCorridor = 5,
	Count = 6,
	EEnemy_MAX = 7
};

// Enum Phoenix.EEnemyAIAnimTransState
enum class EEnemyAIAnimTransState : uint8 {
	None = 0,
	IdleStart = 1,
	IdleBlended = 2,
	LocomotionStart = 3,
	LocomotionBlended = 4,
	EEnemyAIAnimTransState_MAX = 5
};

// Enum Phoenix.EEnemy_IdleType
enum class EEnemy_IdleType : uint8 {
	None = 0,
	Taunt = 1,
	Shuffle = 2,
	IdleBreak = 3,
	Idle = 4,
	Count = 5,
	EEnemy_MAX = 6
};

// Enum Phoenix.EEnemy_AbilityEvent
enum class EEnemy_AbilityEvent : uint8 {
	None = 0,
	FireWand = 1,
	FireWandRandomly = 2,
	DoProtego = 3,
	EndSpellCast = 4,
	DodgeFinished = 5,
	ApparateOut = 6,
	ApparateIn = 7,
	WeaponEquip = 8,
	WeaponStore = 9,
	WeaponPickup = 10,
	BeginVulnerable = 11,
	EndVulnerable = 12,
	BeginInvincible = 13,
	EndInvincible = 14,
	FireSpit = 15,
	BroadcastPendingAttack = 16,
	BeginNoInterrupt = 17,
	EndNoInterrupt = 18,
	Destroy = 19,
	SecondaryAttack = 20,
	DropAllWeapons = 21,
	ThreatStart = 22,
	ThreatEnd = 23,
	ThrowWeapon = 24,
	AttachWeapon = 25,
	DetachWeapon = 26,
	HideCharacter = 27,
	ShowCharacter = 28,
	DoAOECast = 29,
	AttachTransientWeapon = 30,
	DetachTransientWeapon = 31,
	ThrowTransientWeapon = 32,
	FireHeal = 33,
	AttackApparateIn = 34,
	AttackApparateOut = 35,
	WeaponsBuff_DEPRECATED = 36,
	BeginStomp = 37,
	ThrowMeteor = 38,
	GetMeteor = 39,
	HealBuff_DEPRECATED = 40,
	FireDisillusionment = 41,
	ChooseMeteor = 42,
	Disarm = 43,
	Freeze = 44,
	FreezeIfNotReleased = 45,
	ProtegoHide = 46,
	ProtegoShow = 47,
	RespawnAndAcquireWeapon = 48,
	BeginFadeOut = 49,
	BeginFadeIn = 50,
	FireReparo = 51,
	StartSpawn = 52,
	StartAllSpawns = 53,
	RaiseDead = 54,
	AnimagusMorph = 55,
	BuffTeam = 56,
	ProtegoStarted = 57,
	SummonReinforcements = 58,
	ActivateNearestActionDOV = 59,
	FireChannelingSpell = 60,
	StopChannelingSpell = 61,
	FireCustomSpell = 62,
	RagdollReaction = 63,
	StopAllAdditive = 64,
	StartTurnAssist = 65,
	StopTurnAssist = 66,
	FireHeavy = 67,
	AttackEndEarlySplit = 68,
	FindHideLoc = 69,
	AttackApparateAttack = 70,
	JumpSpline = 71,
	WeaponPowerup_DEPRECATED = 72,
	WindowOfOpportunityStart = 73,
	WindowOfOpportunityStop = 74,
	FireAOE = 75,
	TriggerWarning = 76,
	TriggerExplode = 77,
	WandLostDone = 78,
	WandGrabWand = 79,
	WandPickupDone = 80,
	WandRecoveredDone = 81,
	FireCombo = 82,
	ForceUnBlockableStart = 83,
	ForceUnBlockableStop = 84,
	NpcDamageBuff = 85,
	HideWeapon = 86,
	ShowWeapon = 87,
	ApparateRecoverWeapon = 88,
	TriggerAnnounceLoop = 89,
	TriggerWarningStart = 90,
	TriggerWarningLoop = 91,
	TriggerImpact = 92,
	TriggerImpactEnd = 93,
	AOEArresto = 94,
	ClearReflectionSpawn = 95,
	StartMorphToWolf = 96,
	EndMorphToWolf = 97,
	StartMorphToMage = 98,
	EndMorphToMage = 99,
	SetSpawnIneligible = 100,
	EnableHealthBar = 101,
	AOEHeartbeat = 102,
	EEnemy_MAX = 103
};

// Enum Phoenix.EEnemy_AttackDataSource
enum class EEnemy_AttackDataSource : uint8 {
	Choose = 0,
	Attack = 1,
	Count = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.EEnemyAIDodgeState
enum class EEnemyAIDodgeState : uint8 {
	None = 0,
	DodgeLeft = 1,
	DodgeRight = 2,
	RollLeft = 3,
	RollRight = 4,
	SlideLeft = 5,
	SlideRight = 6,
	Duck = 7,
	ApparateToLocation = 8,
	EEnemyAIDodgeState_MAX = 9
};

// Enum Phoenix.AttackCollisionType
enum class AttackCollisionType : uint8 {
	LeftHandWeapon = 0,
	RightHandWeapon = 1,
	BodyCapsule = 2,
	LeftAndRight = 3,
	All = 4,
	AttackCollisionType_MAX = 5
};

// Enum Phoenix.EEnemy_Transition
enum class EEnemy_Transition : uint8 {
	None = 0,
	LosingTarget = 1,
	StoreActiveWeapon = 2,
	Wander = 3,
	Stationary = 4,
	KilledTarget = 5,
	EEnemy_MAX = 6
};

// Enum Phoenix.EEnemy_ProtegoDeflection
enum class EEnemy_ProtegoDeflection : uint8 {
	None = 0,
	DeflectBlock = 1,
	DeflectRandom = 2,
	DeflectTarget = 3,
	DeflectBack = 4,
	DeflectDeflect = 5,
	DeflectCounter = 6,
	EEnemy_MAX = 7
};

// Enum Phoenix.EEnemy_ProtegoLevel
enum class EEnemy_ProtegoLevel : uint8 {
	None = 0,
	TypeA = 1,
	TypeB = 2,
	TypeC = 3,
	TypeD = 4,
	TypePhysical_Deprecated = 5,
	TypeProfessor_Deprecated = 6,
	TypeDuelOpponent = 7,
	TypeStudent_Deprecated = 8,
	TypeTownie_Deprecated = 9,
	TypeBoss_Deprecated = 10,
	TypeBoss_Harlow = 11,
	TypeBoss_Oppugno = 12,
	TypeBoss_AncientMagic = 13,
	TypeBoss_Solomon = 14,
	EEnemy_MAX = 15
};

// Enum Phoenix.EEnemy_StimulusType
enum class EEnemy_StimulusType : uint8 {
	None = 0,
	FinisherAnticipate = 1,
	FinisherAware = 2,
	FinisherReact = 3,
	EEnemy_MAX = 4
};

// Enum Phoenix.EEnemy_PartialState
enum class EEnemy_PartialState : uint8 {
	None = 0,
	WandActive = 1,
	ShieldActive = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.EEnemy_BuffType_DEPRECATED
enum class EEnemy_BuffType_DEPRECATED : uint8 {
	None_DEPRECATED = 0,
	Health_DEPRECATED = 1,
	WeaponRespawn_DEPRECATED = 2,
	WeaponPowerup_DEPRECATED = 3,
	EEnemy_BuffType_MAX = 4
};

// Enum Phoenix.EEnemy_TargetQuadrant
enum class EEnemy_TargetQuadrant : uint8 {
	None = 0,
	LeftForward = 1,
	RightForward = 2,
	LeftBack = 3,
	RightBack = 4,
	Block = 5,
	EEnemy_MAX = 6
};

// Enum Phoenix.EEnemy_AttackExecuteType
enum class EEnemy_AttackExecuteType : uint8 {
	None = 0,
	Default = 1,
	RunTo = 2,
	DeferredEquip = 3,
	EEnemy_MAX = 4
};

// Enum Phoenix.EEnemy_AttackLocSource
enum class EEnemy_AttackLocSource : uint8 {
	None = 0,
	PieCut = 1,
	Evade = 2,
	Reposition = 3,
	Close = 4,
	SeekWeapon = 5,
	Cover = 6,
	Flee = 7,
	Follow = 8,
	Direct = 9,
	InOut = 10,
	Sidekick = 11,
	Around = 12,
	Retreat = 13,
	SeekTarget = 14,
	LeadPlayer = 15,
	BackOnNav = 16,
	TooClose = 17,
	SwimToShore = 18,
	Standby = 19,
	Duel = 20,
	Alert = 21,
	Outside = 22,
	Companion = 23,
	Combat = 24,
	RecoverWeapon = 25,
	POI = 26,
	Count = 27,
	EEnemy_MAX = 28
};

// Enum Phoenix.EEnemy_AttackUpdateState
enum class EEnemy_AttackUpdateState : uint8 {
	None = 0,
	Init = 1,
	Moving = 2,
	Paused = 3,
	StartFace = 4,
	Face = 5,
	StopMove = 6,
	StoppingMove = 7,
	Taunt = 8,
	Shuffle = 9,
	Attack = 10,
	TauntAttack = 11,
	Cover = 12,
	StartReady = 13,
	PickupWeapon = 14,
	StoreActiveWeapon = 15,
	FaceWeapon = 16,
	Ready = 17,
	Apperate = 18,
	CheckRetreat = 19,
	FaceLoc = 20,
	Stunned = 21,
	Jump = 22,
	IdleBreak = 23,
	StartMove = 24,
	UpdateMove = 25,
	StartAttack = 26,
	StartRetreat = 27,
	StopRetreat = 28,
	Retreating = 29,
	StoppingRetreat = 30,
	Flourish = 31,
	Protego = 32,
	StartDrained = 33,
	Drained = 34,
	StopDrained = 35,
	Equip = 36,
	CounterAttack = 37,
	StartMoveWait = 38,
	Count = 39,
	EEnemy_MAX = 40
};

// Enum Phoenix.EEnemy_WeaponRecoveryState
enum class EEnemy_WeaponRecoveryState : uint8 {
	None = 0,
	WaitForActionToStart = 1,
	StartRecovery = 2,
	MoveToLocation = 3,
	PickupWeapon = 4,
	FinalizeRecovery = 5,
	Done = 6,
	EEnemy_MAX = 7
};

// Enum Phoenix.EEnemy_InvestigateState
enum class EEnemy_InvestigateState : uint8 {
	None = 0,
	Start = 1,
	Move = 2,
	Investigate = 3,
	Stop = 4,
	DrawWeapon = 5,
	Pause = 6,
	EEnemy_MAX = 7
};

// Enum Phoenix.EEnemy_TASTreeState
enum class EEnemy_TASTreeState : uint8 {
	None = 0,
	AlertStart_W2Y = 1,
	AggroStart_Y2R = 2,
	EquipWeapon_Y2R = 3,
	StoreWeapon_R2Y = 4,
	AggroLost_R2Y = 5,
	AlertLost_Y2W = 6,
	EEnemy_MAX = 7
};

// Enum Phoenix.EEnemy_AlertState
enum class EEnemy_AlertState : uint8 {
	None = 0,
	AlertStart = 1,
	Face = 2,
	Idle = 3,
	Move = 4,
	StoreWeapon = 5,
	LoseTarget = 6,
	EEnemy_MAX = 7
};

// Enum Phoenix.EEnemy_BBKey
enum class EEnemy_BBKey : uint8 {
	None = 0,
	Spawn = 1,
	Dodge = 2,
	BecomeAware = 3,
	LoseAware = 4,
	LosingTarget = 5,
	DEPRECATED_SeekingWeapon = 6,
	Lumos = 7,
	React = 8,
	StoreActiveWeapon = 9,
	ActivateWeapon = 10,
	Scared = 11,
	Investigate = 12,
	Jump = 13,
	Abort = 14,
	GameEvent = 15,
	DEPRECATED_ScheduledEntity = 16,
	Climb = 17,
	Protego = 18,
	SecondaryAttack = 19,
	ClimbLadder = 20,
	BecomeAlert = 21,
	LoseAlert = 22,
	HealAttack = 23,
	InvestigateAlert = 24,
	Disillusionment = 25,
	ReparoAttack = 26,
	Vault = 27,
	CustomPause = 28,
	SidekickAttack = 29,
	ProtegoStart = 30,
	Alert = 31,
	SwimToShore = 32,
	Outside = 33,
	TooCloseToNPC = 34,
	JumpSpline = 35,
	BackOnNav = 36,
	RecoverWeapon = 37,
	Aggro = 38,
	TASTreeState = 39,
	SpellEffect = 40,
	AwareTurnAround = 41,
	AwarePause = 42,
	EEnemy_MAX = 43
};

// Enum Phoenix.EEnemyAISupportedActions
enum class EEnemyAISupportedActions : uint8 {
	React = 0,
	Spawn = 1,
	Attack = 2,
	BecomeAware = 3,
	LoseAware = 4,
	ActivateStoredWeapon = 5,
	StoreActiveWeapon = 6,
	PickupWeaponFloor = 7,
	PickupWeaponWall = 8,
	DodgeLeft = 9,
	DodgeRight = 10,
	Disappear = 11,
	Reappear = 12,
	Taunt = 13,
	FleeExit = 14,
	InvestigateAlert = 15,
	EEnemyAISupportedActions_MAX = 16
};

// Enum Phoenix.EWeaponAttachmentTransformRules
enum class EWeaponAttachmentTransformRules : uint8 {
	SnapToTargetNotIncludingScale = 0,
	SnapToTargetIncludingScale = 1,
	KeepRelativeTransform = 2,
	KeepWorldTransform = 3,
	EWeaponAttachmentTransformRules_MAX = 4
};

// Enum Phoenix.EEnemyWeaponEquip
enum class EEnemyWeaponEquip : uint8 {
	None = 0,
	Stored = 1,
	Hidden = 2,
	EEnemyWeaponEquip_MAX = 3
};

// Enum Phoenix.EEnemy_WeaponLifetime
enum class EEnemy_WeaponLifetime : uint8 {
	None = 0,
	Throw = 1,
	Drop = 2,
	Protego = 3,
	EEnemy_MAX = 4
};

// Enum Phoenix.EEnemy_WeaponReleaseType
enum class EEnemy_WeaponReleaseType : uint8 {
	DisarmWeapon = 0,
	DisarmShield = 1,
	DropWeapon = 2,
	DropShield = 3,
	ThrowWeapon = 4,
	ThrowTransientWeapon = 5,
	DeathDisarmWeapon = 6,
	DisarmWeaponForRecovery = 7,
	EEnemy_MAX = 8
};

// Enum Phoenix.EEnemyWeaponTypeEnum
enum class EEnemyWeaponTypeEnum : uint8 {
	ESW_Default = 0,
	ESW_Bola = 1,
	ESW_Sword = 2,
	ESW_Axe = 3,
	ESW_Hammer = 4,
	ESW_Mace = 5,
	ESW_Spear = 6,
	ESW_Katar = 7,
	ESW_Shield = 8,
	ESW_DarkWizardWand = 9,
	ESW_Dagger = 10,
	ESW_Meteor = 11,
	ESW_MeteorPiece = 12,
	ESW_Crossbow = 13,
	ESW_MAX = 14
};

// Enum Phoenix.EEnemy_WeaponSource
enum class EEnemy_WeaponSource : uint8 {
	None = 0,
	Active = 1,
	Stored = 2,
	Pickup = 3,
	Transient = 4,
	Required = 5,
	EEnemy_MAX = 6
};

// Enum Phoenix.EEnemyAIWeaponState
enum class EEnemyAIWeaponState : uint8 {
	None = 0,
	Active = 1,
	Claimed = 2,
	Stored = 3,
	Munition = 4,
	EEnemyAIWeaponState_MAX = 5
};

// Enum Phoenix.EEnemyBuffTypeEnum
enum class EEnemyBuffTypeEnum : uint8 {
	EBC_Health = 0,
	EBC_WeaponRespawn = 1,
	EBC_Random = 2,
	EBC_MAX = 3
};

// Enum Phoenix.EHiddenTeleportAttackStep
enum class EHiddenTeleportAttackStep : uint8 {
	ChooseAttackLocation = 0,
	Teleport = 1,
	Hide = 2,
	EHiddenTeleportAttackStep_MAX = 3
};

// Enum Phoenix.EEnemy_ParryRunToType
enum class EEnemy_ParryRunToType : uint8 {
	LeadInAndRelease = 0,
	ReleaseImmediately = 1,
	EEnemy_MAX = 2
};

// Enum Phoenix.EEnemy_ParryMunitionType
enum class EEnemy_ParryMunitionType : uint8 {
	None = 0,
	Weapon = 1,
	Spell = 2,
	Ballistic = 3,
	Melee = 4,
	Custom = 5,
	External = 6,
	RunTo = 7,
	EEnemy_MAX = 8
};

// Enum Phoenix.EEnemy_ParryClosure
enum class EEnemy_ParryClosure : uint8 {
	None = 0,
	Success = 1,
	Fail = 2,
	Neutral = 3,
	EEnemy_MAX = 4
};

// Enum Phoenix.EEnemy_ParryType
enum class EEnemy_ParryType : uint8 {
	None = 0,
	Melee = 1,
	Ranged = 2,
	Ballistic = 3,
	Animation = 4,
	Custom = 5,
	RunTo = 6,
	EEnemy_MAX = 7
};

// Enum Phoenix.EEnemy_ParryWindowStage
enum class EEnemy_ParryWindowStage : uint8 {
	None = 0,
	LeadIn = 1,
	Release = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.EEnemy_ParryWindowType
enum class EEnemy_ParryWindowType : uint8 {
	None = 0,
	Single = 1,
	Dual = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.EEnemy_ParryWindowState
enum class EEnemy_ParryWindowState : uint8 {
	None = 0,
	PreStart = 1,
	Active = 2,
	Parry = 3,
	Fired = 4,
	Aborted = 5,
	EEnemy_MAX = 6
};

// Enum Phoenix.ETrollSwingDirection
enum class ETrollSwingDirection : uint8 {
	Forehand = 0,
	Backhand = 1,
	None = 2,
	ETrollSwingDirection_MAX = 3
};

// Enum Phoenix.EStationSelectionMethod
enum class EStationSelectionMethod : uint8 {
	EQS_SELECT_CLOSEST = 0,
	EQS_SELECT_FARTHEST = 1,
	EQS_SELECT_RANDOM = 2,
	EQS_SELECT_ALL = 3,
	EQS_SELECT_MAX = 4
};

// Enum Phoenix.EExpiryTypes
enum class EExpiryTypes : uint8 {
	ALL = 0,
	LootDrop = 1,
	Infirmary = 2,
	Count = 3,
	EExpiryTypes_MAX = 4
};

// Enum Phoenix.EFT_TravelType
enum class EFT_TravelType : uint8 {
	NormalFastTravelOnly = 0,
	UseFastTravelCVar = 1,
	UnloadFastTravelOnly = 2,
	EFT_MAX = 3
};

// Enum Phoenix.EFT_FromType
enum class EFT_FromType : uint8 {
	EFT_FromType_Normal = 0,
	EFT_FromType_Map = 1,
	EFT_FromType_Door = 2,
	EFT_FromType_Mission = 3,
	EFT_FromType_Floo = 4,
	EFT_FromType_CrimeScene = 5,
	EFT_FromType_SceneAction = 6,
	EFT_FromType_MAX = 7
};

// Enum Phoenix.EFlockPersonalityAxis
enum class EFlockPersonalityAxis : uint8 {
	FPA_PITCH = 0,
	FPA_YAW = 1,
	FPA_ROLL = 2,
	FPA_PITCHORYAW = 3,
	FPA_PITCHORROLL = 4,
	FPA_YAWORROLL = 5,
	FPA_RANDOM = 6,
	FPA_MAX = 7
};

// Enum Phoenix.EBroomMountErrorMessages
enum class EBroomMountErrorMessages : uint8 {
	Error_BroomDisabled = 0,
	Error_InsideNoMountingZone = 1,
	Error_InsideNoMountingArea = 2,
	Error_SpeedBoostUnavailable = 3,
	Error_SpeedBoostOnCooldown = 4,
	Error_InsufficientSpawnArea = 5,
	Error_MAX = 6
};

// Enum Phoenix.EFlyingBroomHitObjectType
enum class EFlyingBroomHitObjectType : uint8 {
	Unknown = 0,
	Creature = 1,
	Character = 2,
	CharacterOnBroom = 3,
	NoMount = 4,
	EFlyingBroomHitObjectType_MAX = 5
};

// Enum Phoenix.EBroomMountType
enum class EBroomMountType : uint8 {
	FromIdleMount = 0,
	FromWalkMount = 1,
	FromJogMount = 2,
	FromSwimming = 3,
	FromFalling = 4,
	InstantMount = 5,
	EBroomMountType_MAX = 6
};

// Enum Phoenix.EBroomDismountType
enum class EBroomDismountType : uint8 {
	DiveDismount = 0,
	GroundDismount = 1,
	InstantDismount = 2,
	EBroomDismountType_MAX = 3
};

// Enum Phoenix.ForceSpeed
enum class ForceSpeed : uint8 {
	ForceStop = 0,
	Normal = 1,
	ForceSpeed_MAX = 2
};

// Enum Phoenix.EFlyingStairState
enum class EFlyingStairState : uint8 {
	Unbuilt = 0,
	Building = 1,
	Built = 2,
	Demolishing = 3,
	FlagForDemolishing = 4,
	EFlyingStairState_MAX = 5
};

// Enum Phoenix.EFocusTriggerInterest
enum class EFocusTriggerInterest : uint8 {
	FOCUSTRIGGER_INTEREST_LOOK = 0,
	FOCUSTRIGGER_INTEREST_ACTION = 1,
	FOCUSTRIGGER_INTEREST_COUNT = 2,
	FOCUSTRIGGER_INTEREST_MAX = 3
};

// Enum Phoenix.EFocusTriggerType
enum class EFocusTriggerType : uint8 {
	FOCUSTRIGGER_TYPE_OPENWORLD = 0,
	FOCUSTRIGGER_TYPE_NPC = 1,
	FOCUSTRIGGER_TYPE_PLAYER = 2,
	FOCUSTRIGGER_TYPE_WORLDEVENT = 3,
	FOCUSTRIGGER_TYPE_COUNT = 4,
	FOCUSTRIGGER_TYPE_MAX = 5
};

// Enum Phoenix.EForageableState
enum class EForageableState : uint8 {
	Inactive = 0,
	Idle = 1,
	Collected = 2,
	EForageableState_MAX = 3
};

// Enum Phoenix.EForbiddenAreaSetting
enum class EForbiddenAreaSetting : uint8 {
	All = 0,
	Male = 1,
	Female = 2,
	SpecificNPC = 3,
	EForbiddenAreaSetting_MAX = 4
};

// Enum Phoenix.EForceRenderSettingsPhase
enum class EForceRenderSettingsPhase : uint8 {
	Startup = 0,
	BeginPlay = 1,
	EndPlay = 2,
	EForceRenderSettingsPhase_MAX = 3
};

// Enum Phoenix.EForceRenderSettingsScope
enum class EForceRenderSettingsScope : uint8 {
	OnPlay = 0,
	OnPlayCooked = 1,
	OnPlayInEditor = 2,
	OnEditorStartup = 3,
	OnEndPlay = 4,
	Always = 5,
	EForceRenderSettingsScope_MAX = 6
};

// Enum Phoenix.EFXAutoTriggerZType
enum class EFXAutoTriggerZType : uint8 {
	Visual = 0,
	Collision = 1,
	EFXAutoTriggerZType_MAX = 2
};

// Enum Phoenix.EFXAutoTriggerZLocation
enum class EFXAutoTriggerZLocation : uint8 {
	Bottom = 0,
	Center = 1,
	Top = 2,
	EFXAutoTriggerZLocation_MAX = 3
};

// Enum Phoenix.EFXAutoTriggerSeason
enum class EFXAutoTriggerSeason : uint8 {
	Fall = 0,
	Winter = 1,
	Spring = 2,
	Summer = 3,
	EFXAutoTriggerSeason_MAX = 4
};

// Enum Phoenix.EPlatforms
enum class EPlatforms : uint8 {
	Platform_Switch = 1,
	Platform_LastGen = 2,
	Platform_NextGen = 4,
	Platform_PC = 8,
	Platform_MAX = 9
};

// Enum Phoenix.ESceneRigCategory
enum class ESceneRigCategory : uint8 {
	None = 0,
	Cinematic = 1,
	Conversation = 2,
	ConversationAmbient = 3,
	Station = 4,
	GhostStory = 5,
	Weather = 6,
	Vignette = 7,
	DialogueOnly = 8,
	Mission = 9,
	WowMoment = 10,
	PIM = 11,
	ESceneRigCategory_MAX = 12
};

// Enum Phoenix.EUIGameOverReason
enum class EUIGameOverReason : uint8 {
	GameOver_Death = 0,
	GameOver_Azkaban = 1,
	GameOver_MissionFailed = 2,
	GameOver_None = 3,
	GameOver_MAX = 4
};

// Enum Phoenix.GearStatType
enum class GearStatType : int32 {
	None = -1,
	Offense = 0,
	Defense = 1,
	Cooldown = 2,
	GearStatType_MAX = 3
};

// Enum Phoenix.EGearHouseID
enum class EGearHouseID : uint8 {
	HOUSE_GRYFFINDOR = 0,
	HOUSE_HUFFLEPUFF = 1,
	HOUSE_RAVENCLAW = 2,
	HOUSE_SLYTHERIN = 3,
	HOUSE_MAX = 4
};

// Enum Phoenix.EVariantGenerationType
enum class EVariantGenerationType : uint8 {
	NOTRAITS = 0,
	FULLTRAITS = 1,
	ONETRAIT = 2,
	EVariantGenerationType_MAX = 3
};

// Enum Phoenix.EHoodPosition
enum class EHoodPosition : uint8 {
	Unset = 0,
	UP = 1,
	DOWN = 2,
	EHoodPosition_MAX = 3
};

// Enum Phoenix.MissionRewardType
enum class MissionRewardType : uint8 {
	MISSION_REWARD_TYPE_CONTAINER = 0,
	MISSION_REWARD_TYPE_ITEM = 1,
	MISSION_REWARD_TYPE_KNOWLEDGE = 2,
	MISSION_REWARD_TYPE_SPELL = 3,
	MISSION_REWARD_TYPE_MAX = 4
};

// Enum Phoenix.MissionStatus
enum class MissionStatus : uint8 {
	MISSION_STATUS_PREACTIVE = 0,
	MISSION_STATUS_ACTIVATING = 1,
	MISSION_STATUS_ACTIVE = 2,
	MISSION_STATUS_POSTACTIVE = 3,
	MISSION_STATUS_COMPLETE = 4,
	MISSION_STATUS_FAILED = 5,
	MISSION_STATUS_INVALID = 6,
	MISSION_STATUS_MAX = 7
};

// Enum Phoenix.EMissionLine
enum class EMissionLine : uint8 {
	Main = 0,
	Side = 1,
	Assignment = 2,
	Relationship = 3,
	Utility = 4,
	Skip = 5,
	DevelopmentOnly = 6,
	EMissionLine_MAX = 7
};

// Enum Phoenix.TaskType
enum class TaskType : uint8 {
	TASK_TYPE_EVALACHIEVEMENT = 0,
	TASK_TYPE_EVALADDBEACON = 1,
	TASK_TYPE_EVALBLUEPRINT = 2,
	TASK_TYPE_EVALBRANCHSTALL = 3,
	TASK_TYPE_EVALCANADDTOINVENTORY = 4,
	TASK_TYPE_EVALCHARACTERMOVEMENT = 5,
	TASK_TYPE_EVALCONVERSATIONRESULT = 6,
	TASK_TYPE_EVALCURTAINRAISED = 7,
	TASK_TYPE_EVALDELAY = 8,
	TASK_TYPE_EVALDELAYONCE = 9,
	TASK_TYPE_EVALDELIVERTO = 10,
	TASK_TYPE_EVALDELIVERTOOBJECT = 11,
	TASK_TYPE_EVALENCOUNTERCOMPLETE = 12,
	TASK_TYPE_EVALENTERWORLD = 13,
	TASK_TYPE_EVALFAKETASKOBJECTIVE = 14,
	TASK_TYPE_EVALFORCEDCONVERSATIONALLOWED = 15,
	TASK_TYPE_EVALGAINEDKNOWLEDGE = 16,
	TASK_TYPE_EVALGAMENOTPAUSED = 17,
	TASK_TYPE_EVALGAMEPLATFORM = 18,
	TASK_TYPE_EVALGEAR = 19,
	TASK_TYPE_EVALHOUSESTATUS = 20,
	TASK_TYPE_EVALINTERACTEDWITH = 21,
	TASK_TYPE_EVALINTERACTEDWITHMISSIONENTRYPOINT = 22,
	TASK_TYPE_EVALINVENTORY = 23,
	TASK_TYPE_EVALKILLS = 24,
	TASK_TYPE_EVALLOCK = 25,
	TASK_TYPE_EVALLOOTDROPLOOTED = 26,
	TASK_TYPE_EVALMISSIONACCEPTED = 27,
	TASK_TYPE_EVALMISSIONCOMPLETE = 28,
	TASK_TYPE_EVALMISSIONENTRYPOINTAVAILABLE = 29,
	TASK_TYPE_EVALNAMEDCREATURESTATE = 30,
	TASK_TYPE_EVALNEVER = 31,
	TASK_TYPE_EVALNPCSTATE = 32,
	TASK_TYPE_EVALONDEMANDGREETING = 33,
	TASK_TYPE_EVALPERFORMTASKSDONE = 34,
	TASK_TYPE_EVALPLAYERDEATH = 35,
	TASK_TYPE_EVALPROXIMITY = 36,
	TASK_TYPE_EVALPURCHASEDPRODUCT = 37,
	TASK_TYPE_EVALREADMAIL = 38,
	TASK_TYPE_EVALSPELLDIAMOND = 39,
	TASK_TYPE_EVALSTAT = 40,
	TASK_TYPE_EVALSTORYGRAPHEVENT = 41,
	TASK_TYPE_EVALSYNCCONVERSATIONTIMECHANGE = 42,
	TASK_TYPE_EVALTALKTO = 43,
	TASK_TYPE_EVALTASKPROGRESS = 44,
	TASK_TYPE_EVALTRIGGERANDWAITFORSTORYGRAPHEVENT = 45,
	TASK_TYPE_EVALWAITFORSTREAMING = 46,
	TASK_TYPE_EVALWAITFORTUTORIAL = 47,
	TASK_TYPE_EVALWAITUNTILNEXTDAY = 48,
	TASK_TYPE_EVALWAITUNTILTIMERANGE = 49,
	TASK_TYPE_EVALWAKEINOWNBED = 50,
	TASK_TYPE_ACTIVATEMISSION = 51,
	TASK_TYPE_ACTIVATET3MOMENT = 52,
	TASK_TYPE_ADDAMBIENTCALLOUT = 53,
	TASK_TYPE_ADDSCHEDULEOVERRIDE = 54,
	TASK_TYPE_ADDTOINVENTORY = 55,
	TASK_TYPE_ADJUSTINVENTORYBYCONTAINER = 56,
	TASK_TYPE_AGGRONPC = 57,
	TASK_TYPE_ASSIGNSPELLTOSPELLDIAMOND = 58,
	TASK_TYPE_AUTOSAVE = 59,
	TASK_TYPE_BEGINEXCLUSIVE = 60,
	TASK_TYPE_CHANGEUPDATECONVERSATION = 61,
	TASK_TYPE_CHECKFIELDGUIDE = 62,
	TASK_TYPE_CLEARBRANCHEVALSTEPBYNAME = 63,
	TASK_TYPE_CLEARBRANCHEVALSTEPS = 64,
	TASK_TYPE_CLEARRESPAWNLOCATIONOVERRIDE = 65,
	TASK_TYPE_CLEARSEASONOVERRIDE = 66,
	TASK_TYPE_COMPLETEMISSION = 67,
	TASK_TYPE_COPYLOCK = 68,
	TASK_TYPE_DISABLEMISSIONENTRYPOINT = 69,
	TASK_TYPE_DISCOVERMISSION = 70,
	TASK_TYPE_DONOTHING = 71,
	TASK_TYPE_ENABLEMISSIONENTRYPOINT = 72,
	TASK_TYPE_ENDEXCLUSIVE = 73,
	TASK_TYPE_ENDPERFORMTASKS = 74,
	TASK_TYPE_FADEIN = 75,
	TASK_TYPE_FADEOUT = 76,
	TASK_TYPE_FASTTRAVEL = 77,
	TASK_TYPE_FORCEAUTOSAVE = 78,
	TASK_TYPE_FORCECONVERSATION = 79,
	TASK_TYPE_FORCEDCOMPANIONALLOWEDAREA = 80,
	TASK_TYPE_GOTOSTEP = 81,
	TASK_TYPE_GRANTKNOWLEDGE = 82,
	TASK_TYPE_INITIALIZESCENERIG = 83,
	TASK_TYPE_INITIALIZESTORYGRAPHEVENT = 84,
	TASK_TYPE_KEEPCURTAINLOWERED = 85,
	TASK_TYPE_KILLMISSION = 86,
	TASK_TYPE_LOADMISSIONSUBLEVEL = 87,
	TASK_TYPE_LOADTRANSIENTSUBLEVEL = 88,
	TASK_TYPE_LOWERCURTAIN = 89,
	TASK_TYPE_PAUSENOTIFICATIONCATEGORY = 90,
	TASK_TYPE_PERFORMTASKS = 91,
	TASK_TYPE_PLAYDIALOGUE = 92,
	TASK_TYPE_PLAYREPEATINGSCENERIG = 93,
	TASK_TYPE_PLAYSCENERIG = 94,
	TASK_TYPE_PLAYT3SCENERIG = 95,
	TASK_TYPE_PLAYTUTORIAL = 96,
	TASK_TYPE_POSTAKEVENTBYNAME = 97,
	TASK_TYPE_PRINTTEXT = 98,
	TASK_TYPE_PROTECTNPC = 99,
	TASK_TYPE_RAISECURTAIN = 100,
	TASK_TYPE_REFRESHVENDORSTOCK = 101,
	TASK_TYPE_REGISTERVENDORCONVERSATION = 102,
	TASK_TYPE_REMEMBERINVENTORY = 103,
	TASK_TYPE_REMOVEAMBIENTCALLOUT = 104,
	TASK_TYPE_REMOVECRITICALNPC = 105,
	TASK_TYPE_REMOVEFROMINVENTORY = 106,
	TASK_TYPE_REMOVESCHEDULEOVERRIDE = 107,
	TASK_TYPE_REMOVEUPDATECONVERSATION = 108,
	TASK_TYPE_REPLACESCHEDULEOVERRIDE = 109,
	TASK_TYPE_RESETSTORYGRAPH = 110,
	TASK_TYPE_RESTOREINVENTORY = 111,
	TASK_TYPE_RESUMENOTIFICATIONCATEGORY = 112,
	TASK_TYPE_RUNSPECIALCASECODE = 113,
	TASK_TYPE_SAVEINVENTORY = 114,
	TASK_TYPE_SENDMAIL = 115,
	TASK_TYPE_SENDMESSAGEFLOAT = 116,
	TASK_TYPE_SENDMESSAGEINT = 117,
	TASK_TYPE_SENDMESSAGENONE = 118,
	TASK_TYPE_SENDMESSAGESTRING = 119,
	TASK_TYPE_SETABANDONRESPAWN = 120,
	TASK_TYPE_SETCONDITIONALREWARD = 121,
	TASK_TYPE_SETCURRENTTIME = 122,
	TASK_TYPE_SETDEBUGCOMPLETETELEPORT = 123,
	TASK_TYPE_SETDIALOGUEGATEPATTERN = 124,
	TASK_TYPE_SETDOORSTATE = 125,
	TASK_TYPE_SETFORCEDCOMPANIONSTATUS = 126,
	TASK_TYPE_SETGAMEFEATURE = 127,
	TASK_TYPE_SETHOBOSCHEDULE = 128,
	TASK_TYPE_SETLOCK = 129,
	TASK_TYPE_SETNAMEDCREATURECANRETURNTOWILD = 130,
	TASK_TYPE_SETNPCSTATE = 131,
	TASK_TYPE_SETNPCWORLD = 132,
	TASK_TYPE_SETQUESTACTIVEJOURNAL = 133,
	TASK_TYPE_SETQUESTAVAILABLEJOURNAL = 134,
	TASK_TYPE_SETQUESTCOMPLETEJOURNAL = 135,
	TASK_TYPE_SETRESPAWNLOCATIONOVERRIDE = 136,
	TASK_TYPE_SETSCHEDULE = 137,
	TASK_TYPE_SETSEASON = 138,
	TASK_TYPE_SETSEASONOVERRIDE = 139,
	TASK_TYPE_SETSPELLDIAMONDSTATE = 140,
	TASK_TYPE_SETSTAT = 141,
	TASK_TYPE_SETSYSTEMICCOMPANIONSTATUS = 142,
	TASK_TYPE_SETTIMEPASSES = 143,
	TASK_TYPE_SETWEATHERSEQUENCE = 144,
	TASK_TYPE_SHOWMISSIONCOMPLETEUI = 145,
	TASK_TYPE_STARTBROOMRACE = 146,
	TASK_TYPE_STOPREPEATINGSCENERIG = 147,
	TASK_TYPE_STOPSCENERIG = 148,
	TASK_TYPE_TRACKMISSION = 149,
	TASK_TYPE_TRIGGERSTORYGRAPHEVENT = 150,
	TASK_TYPE_UNLOADMISSIONSUBLEVEL = 151,
	TASK_TYPE_UNREGISTERVENDORCONVERSATION = 152,
	TASK_TYPE_UPDATEACHIEVEMENT = 153,
	TASK_TYPE_MAX = 154
};

// Enum Phoenix.ETaskType
enum class ETaskType : uint8 {
	EvalAchievement = 0,
	EvalAddBeacon = 1,
	EvalBlueprint = 2,
	EvalBranchStall = 3,
	EvalCanAddToInventory = 4,
	EvalCharacterMovement = 5,
	EvalConversationResult = 6,
	EvalCurtainRaised = 7,
	EvalDelay = 8,
	EvalDelayOnce = 9,
	EvalDeliverTo = 10,
	EvalDeliverToObject = 11,
	EvalEncounterComplete = 12,
	EvalEnterWorld = 13,
	EvalFakeTaskObjective = 14,
	EvalForcedConversationAllowed = 15,
	EvalGainedKnowledge = 16,
	EvalGameNotPaused = 17,
	EvalGamePlatform = 18,
	EvalGear = 19,
	EvalHouseStatus = 20,
	EvalInteractedWith = 21,
	EvalInteractedWithMissionEntryPoint = 22,
	EvalInventory = 23,
	EvalKills = 24,
	EvalLock = 25,
	EvalLootDropLooted = 26,
	EvalMissionAccepted = 27,
	EvalMissionComplete = 28,
	EvalMissionEntryPointAvailable = 29,
	EvalNamedCreatureState = 30,
	EvalNever = 31,
	EvalNPCState = 32,
	EvalOnDemandGreeting = 33,
	EvalPerformTasksDone = 34,
	EvalPlayerDeath = 35,
	EvalProximity = 36,
	EvalPurchasedProduct = 37,
	EvalReadMail = 38,
	EvalSpellDiamond = 39,
	EvalStat = 40,
	EvalStoryGraphEvent = 41,
	EvalSyncConversationTimeChange = 42,
	EvalTalkTo = 43,
	EvalTaskProgress = 44,
	EvalTriggerAndWaitForStoryGraphEvent = 45,
	EvalWaitForStreaming = 46,
	EvalWaitForTutorial = 47,
	EvalWaitUntilNextDay = 48,
	EvalWaitUntilTimeRange = 49,
	EvalWakeInOwnBed = 50,
	ActivateMission = 51,
	ActivateT3Moment = 52,
	AddAmbientCallout = 53,
	AddScheduleOverride = 54,
	AddToInventory = 55,
	AdjustInventoryByContainer = 56,
	AggroNPC = 57,
	AssignSpellToSpellDiamond = 58,
	AutoSave = 59,
	BeginExclusive = 60,
	ChangeUpdateConversation = 61,
	CheckFieldGuide = 62,
	ClearBranchEvalStepByName = 63,
	ClearBranchEvalSteps = 64,
	ClearRespawnLocationOverride = 65,
	ClearSeasonOverride = 66,
	CompleteMission = 67,
	CopyLock = 68,
	DisableMissionEntryPoint = 69,
	DiscoverMission = 70,
	DoNothing = 71,
	EnableMissionEntryPoint = 72,
	EndExclusive = 73,
	EndPerformTasks = 74,
	FadeIn = 75,
	FadeOut = 76,
	FastTravel = 77,
	ForceAutoSave = 78,
	ForceConversation = 79,
	ForcedCompanionAllowedArea = 80,
	GotoStep = 81,
	GrantKnowledge = 82,
	InitializeSceneRig = 83,
	InitializeStoryGraphEvent = 84,
	KeepCurtainLowered = 85,
	KillMission = 86,
	LoadMissionSublevel = 87,
	LoadTransientSublevel = 88,
	LowerCurtain = 89,
	PauseNotificationCategory = 90,
	PerformTasks = 91,
	PlayDialogue = 92,
	PlayRepeatingSceneRig = 93,
	PlaySceneRig = 94,
	PlayT3SceneRig = 95,
	PlayTutorial = 96,
	PostAkEventByName = 97,
	PrintText = 98,
	ProtectNPC = 99,
	RaiseCurtain = 100,
	RefreshVendorStock = 101,
	RegisterVendorConversation = 102,
	RememberInventory = 103,
	RemoveAmbientCallout = 104,
	RemoveCriticalNPC = 105,
	RemoveFromInventory = 106,
	RemoveScheduleOverride = 107,
	RemoveUpdateConversation = 108,
	ReplaceScheduleOverride = 109,
	ResetStoryGraph = 110,
	RestoreInventory = 111,
	ResumeNotificationCategory = 112,
	RunSpecialCaseCode = 113,
	SaveInventory = 114,
	SendMail = 115,
	SendMessageFloat = 116,
	SendMessageInt = 117,
	SendMessageNone = 118,
	SendMessageString = 119,
	SetAbandonRespawn = 120,
	SetConditionalReward = 121,
	SetCurrentTime = 122,
	SetDebugCompleteTeleport = 123,
	SetDialogueGatePattern = 124,
	SetDoorState = 125,
	SetForcedCompanionStatus = 126,
	SetGameFeature = 127,
	SetHoboSchedule = 128,
	SetLock = 129,
	SetNamedCreatureCanReturnToWild = 130,
	SetNPCState = 131,
	SetNPCWorld = 132,
	SetQuestActiveJournal = 133,
	SetQuestAvailableJournal = 134,
	SetQuestCompleteJournal = 135,
	SetRespawnLocationOverride = 136,
	SetSchedule = 137,
	SetSeason = 138,
	SetSeasonOverride = 139,
	SetSpellDiamondState = 140,
	SetStat = 141,
	SetSystemicCompanionStatus = 142,
	SetTimePasses = 143,
	SetWeatherSequence = 144,
	ShowMissionCompleteUI = 145,
	StartBroomRace = 146,
	StopRepeatingSceneRig = 147,
	StopSceneRig = 148,
	TrackMission = 149,
	TriggerStoryGraphEvent = 150,
	UnloadMissionSublevel = 151,
	UnregisterVendorConversation = 152,
	UpdateAchievement = 153,
	ETaskType_MAX = 154
};

// Enum Phoenix.SkeletonTypeIDs
enum class SkeletonTypeIDs : uint8 {
	SK_TYPE_ADULTFEMALE = 0,
	SK_TYPE_ADULTMALE = 1,
	SK_TYPE_CHILDFEMALE = 2,
	SK_TYPE_CHILDMALE = 3,
	SK_TYPE_DEATHMINION = 4,
	SK_TYPE_ELFANY = 5,
	SK_TYPE_GOBLINANY = 6,
	SK_TYPE_TROLLANY = 7,
	SK_TYPE_UNKNOWN = 8,
	SK_TYPE_COUNT = 9,
	SK_TYPE_MAX = 10
};

// Enum Phoenix.AmbientChatterTopicIDs
enum class AmbientChatterTopicIDs : uint8 {
	VO_AMB_Academia = 0,
	VO_AMB_Boasting = 1,
	VO_AMB_COM_09_01_01_GoblinTrouble = 2,
	VO_AMB_COM_09_01_01_HamletRelieved = 3,
	VO_AMB_Common = 4,
	VO_AMB_DAS_COM_36_01_VillGoss = 5,
	VO_AMB_DAS_HeadmasterActingStrange_PolyjuiceMission = 6,
	VO_AMB_DAS_NPC_AvatarDestroyedFerdinandFrame = 7,
	VO_AMB_DAS_NPC_AvatarFoundJackdawHideout = 8,
	VO_AMB_DAS_NPC_AvatarFoundSquidGrotto = 9,
	VO_AMB_DAS_NPC_AvatarMetHeadlessHunt = 10,
	VO_AMB_DAS_NPC_AvatarReturnedFerdinand_HogsHead = 11,
	VO_AMB_DAS_NPC_AvatarReturnedFerdinand_ThreeBroomsticks = 12,
	VO_AMB_DAS_NPC_AvatarSavedHogwarts = 13,
	VO_AMB_DAS_NPC_AvatarSolvedTotemSecrets = 14,
	VO_AMB_DAS_NPC_AvatarSurvivedIntroOne = 15,
	VO_AMB_DAS_NPC_AvatarTalkDiggory = 16,
	VO_AMB_DAS_NPC_HogsHeadRumours = 17,
	VO_AMB_DAS_NPC_RestrictedSectionInvaded = 18,
	VO_AMB_DAS_NPC_RookwoodDetails = 19,
	VO_AMB_DAS_NPC_StudentRodeGraphorn = 20,
	VO_AMB_DAS_NPC_ThreeBroomstickRumours = 21,
	VO_AMB_DarkMatters = 22,
	VO_AMB_Dormitory = 23,
	VO_AMB_Embarrassment = 24,
	VO_AMB_Family = 25,
	VO_AMB_Flying = 26,
	VO_AMB_Ham_BaghAnTaigh = 27,
	VO_AMB_Ham_Brocburrow = 28,
	VO_AMB_Ham_Cragcroft = 29,
	VO_AMB_Ham_Feldcroft = 30,
	VO_AMB_Ham_Hearth = 31,
	VO_AMB_Ham_Irondale = 32,
	VO_AMB_Ham_Keenbridge = 33,
	VO_AMB_Ham_LowerHogsfield = 34,
	VO_AMB_Ham_Marunweem = 35,
	VO_AMB_Ham_PittUponFord = 36,
	VO_AMB_Ham_UpperHogsfield = 37,
	VO_AMB_Headmaster = 38,
	VO_AMB_Herbology = 39,
	VO_AMB_HfO1_01_01_DugbogPre = 40,
	VO_AMB_HfO1_01_02_DugbogPost = 41,
	VO_AMB_History = 42,
	VO_AMB_Hogsmeade = 43,
	VO_AMB_Hogwarts = 44,
	VO_AMB_Magic = 45,
	VO_AMB_Occupation = 46,
	VO_AMB_Owls = 47,
	VO_AMB_Potions = 48,
	VO_AMB_Professors = 49,
	VO_AMB_Reg_Coastline1 = 50,
	VO_AMB_Reg_Coastline2 = 51,
	VO_AMB_Reg_Coastline3 = 52,
	VO_AMB_Reg_Countryside1 = 53,
	VO_AMB_Reg_Countryside2 = 54,
	VO_AMB_Reg_Countryside3 = 55,
	VO_AMB_Society = 56,
	VO_AMB_Transfiguration = 57,
	VO_AMB_Vendors = 58,
	VO_AMB_hCO1_01_01_PoachersAndPeace = 59,
	VO_AMB_hCO2_01_01_POSTManorGossip = 60,
	VO_AMB_hCO2_01_01_PREManorGossip = 61,
	VO_AMB_hCO3_01_Graphorn_PostMount = 62,
	VO_AMB_hCO3_01_Graphorn_PreMount = 63,
	VO_AMB_hCO3_01_POSTDugbog = 64,
	VO_AMB_hCO3_01_PREDugbog = 65,
	VO_AMB_hFO1_01_01_VillagerGoss = 66,
	VO_AMB_hFO4_01_CurrAsh = 67,
	VO_AMB_hFO4_01_InsatiableSpider = 68,
	VO_AMB_hFO4_01_PostAsh = 69,
	VO_AMB_hHN1_01_01_CentaursNearby = 70,
	VO_AMB_hHN1_01_01_HelenAlive = 71,
	VO_AMB_hHN1_01_01_HelenDead = 72,
	VO_AMB_hHN1_01_01_RiverTrollAlive = 73,
	VO_AMB_hHN1_01_01_RiverTrollDead = 74,
	VO_AMB_hHN1_01_01_TunnelTrollAlive = 75,
	VO_AMB_hHN1_01_01_TunnelTrollDead = 76,
	VO_AMB_hHN2_01_01_VillageGoss = 77,
	VO_AMB_hHN3_01_01_VillagerGoss = 78,
	VO_AMB_hHN3_01_CatrinPRE = 79,
	VO_AMB_hHN3_02_CatrinPOST = 80,
	VO_AMB_hHN3_02_PergitPRE = 81,
	VO_AMB_hHS1_01 = 82,
	VO_AMB_hHS2_01_EVL_02 = 83,
	VO_AMB_hHS2_01_EVL_03 = 84,
	VO_AMB_hHS2_01_PostGoblin1 = 85,
	VO_AMB_hHS2_01_PreGoblin1 = 86,
	VO_AMB_hSW1_01_01_POSTTroll = 87,
	VO_AMB_hSW1_01_01_PRETroll = 88,
	VO_AMB_COUNT = 89,
	VO_AMB_MAX = 90
};

// Enum Phoenix.ActivityTypeIDs
enum class ActivityTypeIDs : uint8 {
	ACTIVITY_TYPE_CLASS = 0,
	ACTIVITY_TYPE_CLUB = 1,
	ACTIVITY_TYPE_COMPANION = 2,
	ACTIVITY_TYPE_EVENT = 3,
	ACTIVITY_TYPE_EXCURSION = 4,
	ACTIVITY_TYPE_FREETIME = 5,
	ACTIVITY_TYPE_GUARD = 6,
	ACTIVITY_TYPE_INVESTIGATE = 7,
	ACTIVITY_TYPE_MEAL = 8,
	ACTIVITY_TYPE_MINGLE = 9,
	ACTIVITY_TYPE_MISSION = 10,
	ACTIVITY_TYPE_MISSIONCRITICAL = 11,
	ACTIVITY_TYPE_NURTURE = 12,
	ACTIVITY_TYPE_OCCUPATION = 13,
	ACTIVITY_TYPE_PATROL = 14,
	ACTIVITY_TYPE_PERFORMTASK = 15,
	ACTIVITY_TYPE_REST = 16,
	ACTIVITY_TYPE_SEATFILLERSTATIC = 17,
	ACTIVITY_TYPE_SELFSTUDY = 18,
	ACTIVITY_TYPE_SLEEP = 19,
	ACTIVITY_TYPE_TRANSIENTACTION = 20,
	ACTIVITY_TYPE_COUNT = 21,
	ACTIVITY_TYPE_MAX = 22
};

// Enum Phoenix.UIHUDGroups
enum class UIHUDGroups : uint8 {
	UI_HUDGROUP_ACTIONRING = 0,
	UI_HUDGROUP_ANCIENTMAGICHUD = 1,
	UI_HUDGROUP_AUTOSAVE = 2,
	UI_HUDGROUP_BEACONS = 3,
	UI_HUDGROUP_BEASTCAPTURE = 4,
	UI_HUDGROUP_BOSSHEALTHMETER = 5,
	UI_HUDGROUP_BREWINGHUD = 6,
	UI_HUDGROUP_BROOMHUD = 7,
	UI_HUDGROUP_CALLOUTS = 8,
	UI_HUDGROUP_CHALLENGEHUD = 9,
	UI_HUDGROUP_CHALLENGEUNLOCK = 10,
	UI_HUDGROUP_COMBATBREAKOUT = 11,
	UI_HUDGROUP_COMBATPARRY = 12,
	UI_HUDGROUP_COMBOHELPER = 13,
	UI_HUDGROUP_COMBOHUD = 14,
	UI_HUDGROUP_COMPANIONLEVELNOTIFICATION = 15,
	UI_HUDGROUP_CREATURENURTURINGHUD = 16,
	UI_HUDGROUP_DAMAGEINDICATORPANEL = 17,
	UI_HUDGROUP_DUELTECHNIQUES = 18,
	UI_HUDGROUP_ERRORMESSAGE = 19,
	UI_HUDGROUP_FASTTRAVELUNLOCK = 20,
	UI_HUDGROUP_FIGHTCLUBHUD = 21,
	UI_HUDGROUP_FINISHERMETER = 22,
	UI_HUDGROUP_HINTHUD = 23,
	UI_HUDGROUP_INTERACTION = 24,
	UI_HUDGROUP_LOCKONRETICLE = 25,
	UI_HUDGROUP_LOOKATWIDGET = 26,
	UI_HUDGROUP_MINIMAP = 27,
	UI_HUDGROUP_MISSIONBANNER = 28,
	UI_HUDGROUP_MOUNTHUD = 29,
	UI_HUDGROUP_NPCHEALTHMETER = 30,
	UI_HUDGROUP_NEWZONENOTIFICATION = 31,
	UI_HUDGROUP_NODISMOUNTICON = 32,
	UI_HUDGROUP_NOFLYHUD = 33,
	UI_HUDGROUP_NOTIFICATIONPANEL = 34,
	UI_HUDGROUP_OUTOFAREANOTIFICATION = 35,
	UI_HUDGROUP_OWLMAILNOTIFICATION = 36,
	UI_HUDGROUP_PCACTIONRING = 37,
	UI_HUDGROUP_QUICKHEALTHACTIONS = 38,
	UI_HUDGROUP_QUICKITEMHUD = 39,
	UI_HUDGROUP_RETICLES = 40,
	UI_HUDGROUP_SILVERITEMNOTIFICATION = 41,
	UI_HUDGROUP_SPECIALITEMNOTIFICATION = 42,
	UI_HUDGROUP_TEXTNOTIFICATIONPANEL = 43,
	UI_HUDGROUP_UNREADMAILICON = 44,
	UI_HUDGROUP_VASECOUNTER = 45,
	UI_HUDGROUP_WANTEDHUD = 46,
	UI_HUDGROUP_XPMETER = 47,
	UI_HUDGROUP_COUNT = 48,
	UI_HUDGROUP_MAX = 49
};

// Enum Phoenix.UIActionModes
enum class UIActionModes : uint8 {
	UI_ACTIONMODE_ADVENTURE = 0,
	UI_ACTIONMODE_SANCTUARY = 1,
	UI_ACTIONMODE_COUNT = 2,
	UI_ACTIONMODE_MAX = 3
};

// Enum Phoenix.SocialInteractionTypeIDs
enum class SocialInteractionTypeIDs : uint8 {
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_COMPANION = 0,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_CURRICULUM = 1,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_EXIT = 2,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_EXTORT = 3,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_FACTSHEET = 4,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_FAVOR = 5,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_GIFT = 6,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_MISSION = 7,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_RELATIONSHIP = 8,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_SANCEXPANSION = 9,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_SCAVENGERHUNT = 10,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_TEAGUEINVENTORY = 11,
	SOCIAL_INTERACTION_TYPE_ICON_INTERACTTYPE_VENDOR = 12,
	SOCIAL_INTERACTION_TYPE_NONE = 13,
	SOCIAL_INTERACTION_TYPE_COUNT = 14,
	SOCIAL_INTERACTION_TYPE_MAX = 15
};

// Enum Phoenix.SocialInteractionDisplayStatusIDs
enum class SocialInteractionDisplayStatusIDs : uint8 {
	SOCIAL_INTERACTION_DISPLAY_STATUS_AVAILABLE = 0,
	SOCIAL_INTERACTION_DISPLAY_STATUS_HIDDEN = 1,
	SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_ASKEDFORFAVOR = 2,
	SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_BEINGEXTORTED = 3,
	SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_CRIMECITATIONS = 4,
	SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_ITEM = 5,
	SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_KNOWLEDGE = 6,
	SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_LOCK = 7,
	SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_MISSION = 8,
	SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_SOCAP = 9,
	SOCIAL_INTERACTION_DISPLAY_STATUS_COUNT = 10,
	SOCIAL_INTERACTION_DISPLAY_STATUS_MAX = 11
};

// Enum Phoenix.CollisionTypeIDs
enum class CollisionTypeIDs : uint8 {
	STATION_COLLISION_GROUND = 0,
	STATION_COLLISION_MOVING = 1,
	STATION_COLLISION_SEATED = 2,
	STATION_COLLISION_STANDING = 3,
	STATION_COLLISION_STANDINGNOFORWARD = 4,
	STATION_COLLISION_STANDINGNOFORWARD2P = 5,
	STATION_COLLISION_STANDINGNOREVERSE = 6,
	STATION_COLLISION_STANDINGWITHPROP = 7,
	STATION_COLLISION_COUNT = 8,
	STATION_COLLISION_MAX = 9
};

// Enum Phoenix.PropClassIDs
enum class PropClassIDs : uint8 {
	PROP_CLASS_BED = 0,
	PROP_CLASS_BENCH = 1,
	PROP_CLASS_CHAIR = 2,
	PROP_CLASS_CUSTOM = 3,
	PROP_CLASS_DESK = 4,
	PROP_CLASS_DYNAMIC = 5,
	PROP_CLASS_GROUND = 6,
	PROP_CLASS_INTERACTION = 7,
	PROP_CLASS_LOCATION = 8,
	PROP_CLASS_NONE = 9,
	PROP_CLASS_OCCUPATION = 10,
	PROP_CLASS_STAIRS = 11,
	PROP_CLASS_STAND = 12,
	PROP_CLASS_TABLE = 13,
	PROP_CLASS_COUNT = 14,
	PROP_CLASS_MAX = 15
};

// Enum Phoenix.PropTypeIDs
enum class PropTypeIDs : uint8 {
	PROP_TYPE_BED = 0,
	PROP_TYPE_BENCH2P = 1,
	PROP_TYPE_BENCH2X2P = 2,
	PROP_TYPE_BESPOKE = 3,
	PROP_TYPE_BOOKSHELF = 4,
	PROP_TYPE_BROWSINGSHELF = 5,
	PROP_TYPE_CANDYDISPAYCASE = 6,
	PROP_TYPE_CHAIR1P = 7,
	PROP_TYPE_CHAIR1X1P = 8,
	PROP_TYPE_CHEST = 9,
	PROP_TYPE_CLEANSHELVES = 10,
	PROP_TYPE_COUCH = 11,
	PROP_TYPE_COUCH2P = 12,
	PROP_TYPE_COUCH2X2P = 13,
	PROP_TYPE_COUCH3P = 14,
	PROP_TYPE_DESK1X1P = 15,
	PROP_TYPE_DESK2P = 16,
	PROP_TYPE_DRESSER = 17,
	PROP_TYPE_DRINKTEA = 18,
	PROP_TYPE_FIRESIDE = 19,
	PROP_TYPE_FIRESIDEBENCH2P = 20,
	PROP_TYPE_FLUID = 21,
	PROP_TYPE_GLOBE = 22,
	PROP_TYPE_GREATHALLTABLE = 23,
	PROP_TYPE_GREATHALLTABLEENDCAP = 24,
	PROP_TYPE_GREATHALLTABLESHORT6P = 25,
	PROP_TYPE_GROUNDSIT = 26,
	PROP_TYPE_GUARD = 27,
	PROP_TYPE_HERBOLOGY = 28,
	PROP_TYPE_INVESTIGATE = 29,
	PROP_TYPE_JOB = 30,
	PROP_TYPE_LOUNGECHAIR = 31,
	PROP_TYPE_MAILINTERACTION = 32,
	PROP_TYPE_MISSIONINTERACTION = 33,
	PROP_TYPE_NONE = 34,
	PROP_TYPE_OCCUPATION = 35,
	PROP_TYPE_OFFICEDESK = 36,
	PROP_TYPE_PATROL = 37,
	PROP_TYPE_POTION = 38,
	PROP_TYPE_RAILING1P = 39,
	PROP_TYPE_RAILING1X3P = 40,
	PROP_TYPE_REGISTER = 41,
	PROP_TYPE_SERVICE = 42,
	PROP_TYPE_STAIRS1P = 43,
	PROP_TYPE_STAIRSSIT = 44,
	PROP_TYPE_STAIRSSIT2P = 45,
	PROP_TYPE_STAND1P = 46,
	PROP_TYPE_STAND1X1P = 47,
	PROP_TYPE_STAND1X2P = 48,
	PROP_TYPE_STAND1X3P = 49,
	PROP_TYPE_STAND2P = 50,
	PROP_TYPE_STAND4P = 51,
	PROP_TYPE_STANDINQUE = 52,
	PROP_TYPE_STOOLTALL = 53,
	PROP_TYPE_STUDYDESK = 54,
	PROP_TYPE_TABLE1P = 55,
	PROP_TYPE_TABLE2P = 56,
	PROP_TYPE_TABLE3P = 57,
	PROP_TYPE_TABLE4P = 58,
	PROP_TYPE_TABLE8P = 59,
	PROP_TYPE_TAKINGNOTES = 60,
	PROP_TYPE_TEACHAIR = 61,
	PROP_TYPE_TEADRINKING = 62,
	PROP_TYPE_TELESCOPE = 63,
	PROP_TYPE_VENDOR = 64,
	PROP_TYPE_WALL1X3P = 65,
	PROP_TYPE_WALLSIT = 66,
	PROP_TYPE_WARDROBE = 67,
	PROP_TYPE_WINDOWSHOP = 68,
	PROP_TYPE_COUNT = 69,
	PROP_TYPE_MAX = 70
};

// Enum Phoenix.SocialSemanticTypeIDs
enum class SocialSemanticTypeIDs : uint8 {
	SOCIAL_SEMANTIC_TYPE_DEPRECATED = 0,
	SOCIAL_SEMANTIC_TYPE_EMOTION = 1,
	SOCIAL_SEMANTIC_TYPE_FACTION = 2,
	SOCIAL_SEMANTIC_TYPE_IDENTITY = 3,
	SOCIAL_SEMANTIC_TYPE_INTEREST = 4,
	SOCIAL_SEMANTIC_TYPE_PERSONALITY = 5,
	SOCIAL_SEMANTIC_TYPE_TRAIT = 6,
	SOCIAL_SEMANTIC_TYPE_COUNT = 7,
	SOCIAL_SEMANTIC_TYPE_MAX = 8
};

// Enum Phoenix.SocialConnectionIDs
enum class SocialConnectionIDs : uint8 {
	SOCIALCONNECTION_STATUS_ENEMY = 0,
	SOCIALCONNECTION_STATUS_RIVAL = 1,
	SOCIALCONNECTION_STATUS_SELF = 2,
	SOCIALCONNECTION_STATUS_FRIEND = 3,
	SOCIALCONNECTION_STATUS_FAMILY = 4,
	SOCIALCONNECTION_STATUS_LOVEINTEREST = 5,
	SOCIALCONNECTION_STATUS_BESTFRIEND = 6,
	SOCIALCONNECTION_STATUS_COUNT = 7,
	SOCIALCONNECTION_STATUS_MAX = 8
};

// Enum Phoenix.SocialCapitalStatusIDs
enum class SocialCapitalStatusIDs : uint8 {
	SOCIALCAPITAL_STATUS_STRANGER = 0,
	SOCIALCAPITAL_STATUS_HATE = 1,
	SOCIALCAPITAL_STATUS_DISLIKE = 2,
	SOCIALCAPITAL_STATUS_INDIFFERENT = 3,
	SOCIALCAPITAL_STATUS_FAMILIAR = 4,
	SOCIALCAPITAL_STATUS_CORDIAL = 5,
	SOCIALCAPITAL_STATUS_FRIENDLY = 6,
	SOCIALCAPITAL_STATUS_COMPANION = 7,
	SOCIALCAPITAL_STATUS_COUNT = 8,
	SOCIALCAPITAL_STATUS_MAX = 9
};

// Enum Phoenix.SocialActionObserverTypes
enum class SocialActionObserverTypes : uint8 {
	OBSERVER_TYPE_SOCIALACTIONHEARSAY = 0,
	OBSERVER_TYPE_SOCIALACTIONTARGET = 1,
	OBSERVER_TYPE_SOCIALACTIONWITNESS = 2,
	OBSERVER_TYPE_COUNT = 3,
	OBSERVER_TYPE_MAX = 4
};

// Enum Phoenix.SocialActionTypes
enum class SocialActionTypes : uint8 {
	SOCIAL_ACTION_ACCIO = 0,
	SOCIAL_ACTION_ACCIOMAXIMA = 1,
	SOCIAL_ACTION_AGUAMENTI = 2,
	SOCIAL_ACTION_AGUAMENTIMAXIMA = 3,
	SOCIAL_ACTION_ALOHOMORA = 4,
	SOCIAL_ACTION_ANIMAGUSFORM = 5,
	SOCIAL_ACTION_APOLOGIZE = 6,
	SOCIAL_ACTION_APPARITION = 7,
	SOCIAL_ACTION_ARRESTOMOMENTUM = 8,
	SOCIAL_ACTION_ARRESTOMOMENTUMMAXIMA = 9,
	SOCIAL_ACTION_ATTENDCLASSCLOWN = 10,
	SOCIAL_ACTION_ATTENDCLASSPILFER = 11,
	SOCIAL_ACTION_ATTENDCLASSSLEEP = 12,
	SOCIAL_ACTION_ATTENDCLASSSTUDY = 13,
	SOCIAL_ACTION_ATTENDCLASSTALK = 14,
	SOCIAL_ACTION_ATTENDCLUBPARTICIPATE = 15,
	SOCIAL_ACTION_ATTENDCLUBTALK = 16,
	SOCIAL_ACTION_AVADAKEDAVRA = 17,
	SOCIAL_ACTION_BATBOGEY = 18,
	SOCIAL_ACTION_BORED = 19,
	SOCIAL_ACTION_BROOD = 20,
	SOCIAL_ACTION_BULLYING = 21,
	SOCIAL_ACTION_BULLYINTERVENE = 22,
	SOCIAL_ACTION_CAPTURING = 23,
	SOCIAL_ACTION_CHEERING = 24,
	SOCIAL_ACTION_COLLISION = 25,
	SOCIAL_ACTION_COLOVARIA = 26,
	SOCIAL_ACTION_COMPLIMENT = 27,
	SOCIAL_ACTION_CONFRINGO = 28,
	SOCIAL_ACTION_CONFRINGOMAXIMA = 29,
	SOCIAL_ACTION_CONFUNDO = 30,
	SOCIAL_ACTION_CONJURATION = 31,
	SOCIAL_ACTION_CRIMEPERPIDENTIFIED = 32,
	SOCIAL_ACTION_CRIMERESPONSEAPPROVE = 33,
	SOCIAL_ACTION_CRIMERESPONSEBECKON = 34,
	SOCIAL_ACTION_CRIMERESPONSECOMPLAIN = 35,
	SOCIAL_ACTION_CRIMERESPONSECOWER = 36,
	SOCIAL_ACTION_CRIMERESPONSEFLEE = 37,
	SOCIAL_ACTION_CRIMERESPONSEINVESTIGATE = 38,
	SOCIAL_ACTION_CRIMERESPONSELAUGH = 39,
	SOCIAL_ACTION_CRIMERESPONSEOBSERVE = 40,
	SOCIAL_ACTION_CRIMERESPONSEREPORT = 41,
	SOCIAL_ACTION_CRIMERESPONSERETALIATE = 42,
	SOCIAL_ACTION_CRIMERESPONSESCOLD = 43,
	SOCIAL_ACTION_CRIMERESPONSESHOCK = 44,
	SOCIAL_ACTION_CRIMESCENEDISCOVERED = 45,
	SOCIAL_ACTION_DEBATE = 46,
	SOCIAL_ACTION_DEPULSO = 47,
	SOCIAL_ACTION_DEPULSOMAXIMA = 48,
	SOCIAL_ACTION_DEPULSOMT = 49,
	SOCIAL_ACTION_DESCENDO = 50,
	SOCIAL_ACTION_DIFFINDO = 51,
	SOCIAL_ACTION_DISILLUSIONMENT = 52,
	SOCIAL_ACTION_DRINK = 53,
	SOCIAL_ACTION_DRUNK = 54,
	SOCIAL_ACTION_EAT = 55,
	SOCIAL_ACTION_ENGORGIO = 56,
	SOCIAL_ACTION_EPISKEY = 57,
	SOCIAL_ACTION_EXPECTOPATRONUM = 58,
	SOCIAL_ACTION_EXPECTOPATRONUMMAXIMA = 59,
	SOCIAL_ACTION_EXPELLIARMUS = 60,
	SOCIAL_ACTION_EXPULSO = 61,
	SOCIAL_ACTION_EXPULSOMAXIMA = 62,
	SOCIAL_ACTION_EXTORTION = 63,
	SOCIAL_ACTION_EXTORTIONHIGH = 64,
	SOCIAL_ACTION_FAVORREQUESTED = 65,
	SOCIAL_ACTION_FIENDFYRE = 66,
	SOCIAL_ACTION_FINISHERBLACKPARTICLEEXPLODE = 67,
	SOCIAL_ACTION_FINISHERCRYSTALSHATTER = 68,
	SOCIAL_ACTION_FINISHERDEEPFREEZE = 69,
	SOCIAL_ACTION_FINISHERFIERYSEND = 70,
	SOCIAL_ACTION_FINISHERFLASHSEND = 71,
	SOCIAL_ACTION_FINISHERPETRIFICUSTOTALUS = 72,
	SOCIAL_ACTION_FINISHERSCARABBURST = 73,
	SOCIAL_ACTION_FINISHERSPIDERBURST = 74,
	SOCIAL_ACTION_FINISHERSUPERSLAMS = 75,
	SOCIAL_ACTION_FINITE = 76,
	SOCIAL_ACTION_FLIPENDO = 77,
	SOCIAL_ACTION_FRIENDLYCONVERSATION = 78,
	SOCIAL_ACTION_GIVEGIFTGENERAL = 79,
	SOCIAL_ACTION_GIVEGIFTROMANTIC = 80,
	SOCIAL_ACTION_GLACIUS = 81,
	SOCIAL_ACTION_GLACIUSMAXIMA = 82,
	SOCIAL_ACTION_GOSSIP = 83,
	SOCIAL_ACTION_GREET = 84,
	SOCIAL_ACTION_HAIL = 85,
	SOCIAL_ACTION_HERBOLOGYHERBHARVESTED = 86,
	SOCIAL_ACTION_HERBOLOGYHERBPLANTED = 87,
	SOCIAL_ACTION_HORSEPLAY = 88,
	SOCIAL_ACTION_HOUSEARMORDESTROYED = 89,
	SOCIAL_ACTION_HOUSEARMORREPAIRED = 90,
	SOCIAL_ACTION_HOUSEPOINTSGAINED = 91,
	SOCIAL_ACTION_HOUSEPOINTSLOST = 92,
	SOCIAL_ACTION_IMPERIUS = 93,
	SOCIAL_ACTION_INCARCEROUS = 94,
	SOCIAL_ACTION_INCENDIO = 95,
	SOCIAL_ACTION_INCENDIOMAXIMA = 96,
	SOCIAL_ACTION_INSTANTSCALPING = 97,
	SOCIAL_ACTION_INTIMIDATE = 98,
	SOCIAL_ACTION_INTRUSIONHIGH = 99,
	SOCIAL_ACTION_INTRUSIONINPROGRESSHIGH = 100,
	SOCIAL_ACTION_INTRUSIONINPROGRESSLOW = 101,
	SOCIAL_ACTION_INTRUSIONINPROGRESSMEDIUM = 102,
	SOCIAL_ACTION_INTRUSIONLOW = 103,
	SOCIAL_ACTION_INTRUSIONMEDIUM = 104,
	SOCIAL_ACTION_INTRUSIONTRIVIAL = 105,
	SOCIAL_ACTION_INVESTIGATE = 106,
	SOCIAL_ACTION_LEVIOSO = 107,
	SOCIAL_ACTION_LEVIOSOMAXIMA = 108,
	SOCIAL_ACTION_LUMOS = 109,
	SOCIAL_ACTION_LUMOSMAXIMA = 110,
	SOCIAL_ACTION_MEALTIMECHAT = 111,
	SOCIAL_ACTION_MEALTIMESOCIALIZE = 112,
	SOCIAL_ACTION_MEALTIMESTASH = 113,
	SOCIAL_ACTION_MISSIONACK = 114,
	SOCIAL_ACTION_MISSIONGOSSIP = 115,
	SOCIAL_ACTION_MOCK = 116,
	SOCIAL_ACTION_NAP = 117,
	SOCIAL_ACTION_OBLIVIATE = 118,
	SOCIAL_ACTION_OBSERVE = 119,
	SOCIAL_ACTION_OCCUPATIONMAJOR = 120,
	SOCIAL_ACTION_OCCUPATIONMINOR = 121,
	SOCIAL_ACTION_OCCUPATIONPRIMARY = 122,
	SOCIAL_ACTION_OCCUPATIONSLACKING = 123,
	SOCIAL_ACTION_OPPUGNO = 124,
	SOCIAL_ACTION_OPPUGNOMT = 125,
	SOCIAL_ACTION_PHYSICSTRIVIAL = 126,
	SOCIAL_ACTION_PICKPOCKETHIGH = 127,
	SOCIAL_ACTION_PICKPOCKETINPROGRESSHIGH = 128,
	SOCIAL_ACTION_PICKPOCKETINPROGRESSLOW = 129,
	SOCIAL_ACTION_PICKPOCKETINPROGRESSMEDIUM = 130,
	SOCIAL_ACTION_PICKPOCKETLOW = 131,
	SOCIAL_ACTION_PICKPOCKETMEDIUM = 132,
	SOCIAL_ACTION_PIERTOTUMLOCOMOTOR = 133,
	SOCIAL_ACTION_PLAYERCHAT = 134,
	SOCIAL_ACTION_PROTEGO = 135,
	SOCIAL_ACTION_PROXYCHAT = 136,
	SOCIAL_ACTION_REDUCIO = 137,
	SOCIAL_ACTION_REPARO = 138,
	SOCIAL_ACTION_REPAROMAXIMA = 139,
	SOCIAL_ACTION_REVELIO = 140,
	SOCIAL_ACTION_ROMANTICCONVERSATION = 141,
	SOCIAL_ACTION_SINGLEBUTSOCIAL = 142,
	SOCIAL_ACTION_SLEEP = 143,
	SOCIAL_ACTION_SPELLRESPONSE = 144,
	SOCIAL_ACTION_SPOTOTEA = 145,
	SOCIAL_ACTION_STATIONSPECIFIC = 146,
	SOCIAL_ACTION_STUDY = 147,
	SOCIAL_ACTION_STUPEFY = 148,
	SOCIAL_ACTION_SWEEPING = 149,
	SOCIAL_ACTION_TABOOGAMEOVER = 150,
	SOCIAL_ACTION_TABOOHIGH = 151,
	SOCIAL_ACTION_TABOOMEDIUM = 152,
	SOCIAL_ACTION_TARANTALLEGRA = 153,
	SOCIAL_ACTION_THEFTHIGH = 154,
	SOCIAL_ACTION_THEFTINPROGRESSHIGH = 155,
	SOCIAL_ACTION_THEFTINPROGRESSLOW = 156,
	SOCIAL_ACTION_THEFTINPROGRESSMEDIUM = 157,
	SOCIAL_ACTION_THEFTLOW = 158,
	SOCIAL_ACTION_THEFTMEDIUM = 159,
	SOCIAL_ACTION_TRANSFORMATION = 160,
	SOCIAL_ACTION_TRANSFORMATIONOVERLAND = 161,
	SOCIAL_ACTION_TRIPJINX = 162,
	SOCIAL_ACTION_UNAVAILABLE = 163,
	SOCIAL_ACTION_UNIFIEDTRANSFORMATION = 164,
	SOCIAL_ACTION_VANISHMENT = 165,
	SOCIAL_ACTION_VIOLENCEGAMEOVER = 166,
	SOCIAL_ACTION_VIOLENCEHIGH = 167,
	SOCIAL_ACTION_VIOLENCELOW = 168,
	SOCIAL_ACTION_VIOLENCEMEDIUM = 169,
	SOCIAL_ACTION_VIOLENCETRIVIAL = 170,
	SOCIAL_ACTION_WE_LOOSESNITCH = 171,
	SOCIAL_ACTION_WE_RAINONME = 172,
	SOCIAL_ACTION_WE_SPECIALDELIVERY = 173,
	SOCIAL_ACTION_WE_SUPERSMASH = 174,
	SOCIAL_ACTION_WINDOWSHOPPING = 175,
	SOCIAL_ACTION_WINGARDIUM = 176,
	SOCIAL_ACTION_WINGARDIUMMAXIMA = 177,
	SOCIAL_ACTION_COUNT = 178,
	SOCIAL_ACTION_MAX = 179
};

// Enum Phoenix.EGroundSwarmingForceModifierType
enum class EGroundSwarmingForceModifierType : uint8 {
	Follow = 0,
	Separation = 1,
	SeparationDistance = 2,
	Alignment = 3,
	Cohesion = 4,
	MaxSpeed = 5,
	CurlNoiseScale = 6,
	Velocity = 7,
	EGroundSwarmingForceModifierType_MAX = 8
};

// Enum Phoenix.EGroundSwarmingCurlNoiseMode
enum class EGroundSwarmingCurlNoiseMode : uint8 {
	None = 0,
	Simple2D = 1,
	Faux3D = 2,
	Local2D = 3,
	Expensive3D = 4,
	EGroundSwarmingCurlNoiseMode_MAX = 5
};

// Enum Phoenix.EGroundSwarmingKillEventDeathLeapCollisionType
enum class EGroundSwarmingKillEventDeathLeapCollisionType : uint8 {
	None = 0,
	Simple = 1,
	Complex = 2,
	EGroundSwarmingKillEventDeathLeapCollisionType_MAX = 3
};

// Enum Phoenix.EGroundSwarmingKillEventType
enum class EGroundSwarmingKillEventType : uint8 {
	None = 0,
	HitKillBox = 1,
	HitTarget = 2,
	Poof = 3,
	StartBurrow = 4,
	EGroundSwarmingKillEventType_MAX = 5
};

// Enum Phoenix.EGroundSwarmingExternalForceType
enum class EGroundSwarmingExternalForceType : uint8 {
	Forward = 0,
	Up = 1,
	Right = 2,
	Radial = 3,
	RadialTangentUp = 4,
	CurlNoise = 5,
	EGroundSwarmingExternalForceType_MAX = 6
};

// Enum Phoenix.EGroundSwarmingFocusTypeHint
enum class EGroundSwarmingFocusTypeHint : uint8 {
	None = 0,
	Swarm = 1,
	Target = 2,
	Player = 3,
	EGroundSwarmingFocusTypeHint_MAX = 4
};

// Enum Phoenix.EGroundSwarmingFocusType
enum class EGroundSwarmingFocusType : uint8 {
	Undefined = 0,
	Actor = 1,
	SceneComponent = 2,
	Fixed = 3,
	EGroundSwarmingFocusType_MAX = 4
};

// Enum Phoenix.EGroundSwarmMemberState
enum class EGroundSwarmMemberState : uint8 {
	Frozen = 0,
	Freefalling = 1,
	OnSurface = 2,
	Burrowing = 3,
	DeathLeap = 4,
	Dead = 5,
	EGroundSwarmMemberState_MAX = 6
};

// Enum Phoenix.EGroundSwarmingExitType
enum class EGroundSwarmingExitType : uint8 {
	Burrow = 0,
	Poof = 1,
	EGroundSwarmingExitType_MAX = 2
};

// Enum Phoenix.EGroundSwarmingEventType
enum class EGroundSwarmingEventType : uint8 {
	FirstTargetHit = 0,
	TargetThresholdReached = 1,
	TimedOutMissedThreshold = 2,
	MarkForDeath = 3,
	EGroundSwarmingEventType_MAX = 4
};

// Enum Phoenix.EHerbologyPotionType
enum class EHerbologyPotionType : uint8 {
	None = 0,
	AppliedDuringGrowth = 1,
	EHerbologyPotionType_MAX = 2
};

// Enum Phoenix.EDynamicObstacleShape
enum class EDynamicObstacleShape : uint8 {
	SHAPE_NONE = 0,
	SHAPE_BOX = 1,
	SHAPE_CAPSULE = 2,
	SHAPE_SPHERE = 3,
	SHAPE_MAX = 4
};

// Enum Phoenix.EHideFlags
enum class EHideFlags : uint8 {
	All = 0,
	All_Tier1 = 1,
	All_Tier3 = 2,
	SplineWalkers = 3,
	SeatFillers = 4,
	Creatures = 5,
	All_Tier4 = 6,
	Companions = 7,
	EHideFlags_MAX = 8
};

// Enum Phoenix.EHintConditionResult
enum class EHintConditionResult : uint8 {
	ConditionFalse = 0,
	ConditionTrue = 1,
	ConditionReset = 2,
	EHintConditionResult_MAX = 3
};

// Enum Phoenix.ETier4Type
enum class ETier4Type : uint8 {
	T4Student = 0,
	T4Townsperson = 1,
	T4DarkWizard = 2,
	T4Goblin = 3,
	T4_Max = 4,
	ETier4Type_MAX = 5
};

// Enum Phoenix.EFactsheetItemType
enum class EFactsheetItemType : uint8 {
	FACTSHEET_ITEM_TYPE_UNKNOWN = 0,
	FACTSHEET_ITEM_TYPE_PERSON = 1,
	FACTSHEET_ITEM_TYPE_MAX = 2
};

// Enum Phoenix.EIconButtonState
enum class EIconButtonState : uint8 {
	BS_Enabled = 0,
	BS_Disabled = 1,
	BS_Missing = 2,
	BS_NonExistant = 3,
	BS_MAX = 4
};

// Enum Phoenix.ESpawnAreaEnum
enum class ESpawnAreaEnum : uint8 {
	SPAWN_RING = 0,
	SPAWN_SPHERE = 1,
	SPAWN_SPHERE_FALLOFF = 2,
	SPAWN_MAX = 3
};

// Enum Phoenix.EInfirmaryPriority
enum class EInfirmaryPriority : uint8 {
	Systemic = 0,
	WorldEvent = 1,
	Mission = 2,
	Count = 3,
	EInfirmaryPriority_MAX = 4
};

// Enum Phoenix.EFeatureInstallState
enum class EFeatureInstallState : uint8 {
	NotSupported = 0,
	NotInstalled = 1,
	PartiallyInstalled = 2,
	Installing = 3,
	Installed = 4,
	EFeatureInstallState_MAX = 5
};

// Enum Phoenix.EInstallFeatures
enum class EInstallFeatures : uint8 {
	FullGame = 0,
	SonyContent = 1,
	HighDefTextures = 2,
	LanguagePack_EN = 3,
	LanguagePack_DE = 4,
	LanguagePack_ES = 5,
	LanguagePack_ESMX = 6,
	LanguagePack_FR = 7,
	LanguagePack_IT = 8,
	LanguagePack_JA = 9,
	LanguagePack_PT = 10,
	Count = 11,
	EInstallFeatures_MAX = 12
};

// Enum Phoenix.EInstallManagerState
enum class EInstallManagerState : uint8 {
	Idle = 0,
	Installing = 1,
	InstallAvailable = 2,
	EInstallManagerState_MAX = 3
};

// Enum Phoenix.FBoneSwarmShowType
enum class FBoneSwarmShowType : uint8 {
	Manual = 0,
	EvenDistribution = 1,
	Random = 2,
	AllAtOnce = 3,
	FBoneSwarmShowType_MAX = 4
};

// Enum Phoenix.FBoneSwarmProjectionType
enum class FBoneSwarmProjectionType : uint8 {
	UseCone = 0,
	SphereDistribution = 1,
	TotalRandom = 2,
	FBoneSwarmProjectionType_MAX = 3
};

// Enum Phoenix.EInstancedTrailMemberRotationConstraint
enum class EInstancedTrailMemberRotationConstraint : uint8 {
	ITMRC_NONE = 0,
	ITMRC_WHOLE = 1,
	ITMRC_HALF = 2,
	ITMRC_MAX = 3
};

// Enum Phoenix.EInteractiveAction
enum class EInteractiveAction : uint8 {
	None = 0,
	Interact = 1,
	Auto = 2,
	Lock = 3,
	Unlock = 4,
	Freeze = 5,
	Thaw = 6,
	Wet = 7,
	Dry = 8,
	StartFire = 9,
	ExtinguishFire = 10,
	IncreaseScale = 11,
	DecreaseScale = 12,
	IncreaseScaleRestore = 13,
	DecreaseScaleRestore = 14,
	Highlight = 15,
	Unhighlight = 16,
	Invisible = 17,
	Visible = 18,
	Immobilized = 19,
	Mobilized = 20,
	Damage = 21,
	Destroy = 22,
	Cut = 23,
	Repair = 24,
	Stun = 25,
	Grown = 26,
	EInteractiveAction_MAX = 27
};

// Enum Phoenix.EIntroCheckpoint
enum class EIntroCheckpoint : uint8 {
	CP0 = 0,
	CP1 = 1,
	CP2 = 2,
	CP3 = 3,
	CP4 = 4,
	CP5 = 5,
	CP6 = 6,
	CP7 = 7,
	CP8 = 8,
	CP9 = 9,
	EIntroCheckpoint_MAX = 10
};

// Enum Phoenix.EInventorySortType
enum class EInventorySortType : uint8 {
	Inventory_Sort_Type = 0,
	Inventory_Sort_Newest = 1,
	Inventory_Sort_Value = 2,
	Inventory_Sort_Alphabetical = 3,
	Inventory_Sort_Count = 4,
	Inventory_Sort_MAX = 5
};

// Enum Phoenix.EStolenType
enum class EStolenType : uint8 {
	STOLEN_TYPE_DONT_CARE = 0,
	STOLEN_TYPE_STOLEN = 1,
	STOLEN_TYPE_NOT_STOLEN = 2,
	STOLEN_TYPE_MAX = 3
};

// Enum Phoenix.EInventoryObjectType
enum class EInventoryObjectType : uint8 {
	INVENTORY_OBJECT_TYPE_STANDARD = 0,
	INVENTORY_OBJECT_TYPE_BEAST = 1,
	INVENTORY_OBJECT_TYPE_NAMED_BEAST = 2,
	INVENTORY_OBJECT_TYPE_MAX = 3
};

// Enum Phoenix.EInventoryTabCategory
enum class EInventoryTabCategory : uint8 {
	DefaultInventory = 0,
	QuestItems = 1,
	EInventoryTabCategory_MAX = 2
};

// Enum Phoenix.EInventoryQuality
enum class EInventoryQuality : uint8 {
	DUMMY = 0,
	NoQuality = 3,
	CountQuality = 1,
	EInventoryQuality_MAX = 4
};

// Enum Phoenix.EItemConversionState
enum class EItemConversionState : uint8 {
	Available = 0,
	Converting = 1,
	Converted = 2,
	Pending = 3,
	EItemConversionState_MAX = 4
};

// Enum Phoenix.EKnowledgeApplicability
enum class EKnowledgeApplicability : uint8 {
	Always = 0,
	OnlyIfUnknown = 1,
	EKnowledgeApplicability_MAX = 2
};

// Enum Phoenix.EKnowledgeAction
enum class EKnowledgeAction : uint8 {
	AstronomyAltar = 0,
	BeastCaptured = 1,
	BreedingAssigned = 2,
	BrewPotion = 3,
	CalloutReference = 4,
	Collect = 5,
	Conjure = 6,
	ConversationReference = 7,
	ConversationReward = 8,
	CraftTrait = 9,
	Damaged = 10,
	DemiguiseStatue = 11,
	Discover = 12,
	DuelTechniqueCompleted = 13,
	GatherBeastByproduct = 14,
	GatherPlant = 15,
	HappinessFromFeed = 16,
	HappinessFromPetting = 17,
	HappinessFromPlaying = 18,
	Interact = 19,
	Investigation = 20,
	Killed = 21,
	Mission = 22,
	MissionDayOne = 23,
	MissionJumbo = 24,
	MissionLarge = 25,
	MissionMedium = 26,
	MissionSmall = 27,
	Perceived = 28,
	Received = 29,
	SocialConversation = 30,
	SocialGiveGift = 31,
	SpellCast = 32,
	TutorialUnlock = 33,
	UseFertilizer = 34,
	NamedEnemyKilled = 35,
	HouseChestOpened = 36,
	GoldChestOpened = 37,
	AncientMagicHotSpot = 38,
	MerlinTrialCompleted = 39,
	RecipeLearned = 40,
	UpgradeStats = 41,
	EKnowledgeAction_MAX = 42
};

// Enum Phoenix.EKnowledgeLevel
enum class EKnowledgeLevel : uint8 {
	Unknown = 0,
	Level0 = 1,
	Level1 = 2,
	Level2 = 3,
	Level3 = 4,
	Level4 = 5,
	Level5 = 6,
	Completed = 7,
	Secret = 8,
	Unspecified = 9,
	EKnowledgeLevel_MAX = 10
};

// Enum Phoenix.ELightClippingVolumeFilterType
enum class ELightClippingVolumeFilterType : uint8 {
	None = 0,
	OnlyInside = 1,
	OnlyOutside = 2,
	ELightClippingVolumeFilterType_MAX = 3
};

// Enum Phoenix.ELightClippingPlanesFilterType
enum class ELightClippingPlanesFilterType : uint8 {
	None = 0,
	OnlyNonInverted = 1,
	OnlyInverted = 2,
	ELightClippingPlanesFilterType_MAX = 3
};

// Enum Phoenix.ELineRule_LayeredAnimationLipSyncIntensityType
enum class ELineRule_LayeredAnimationLipSyncIntensityType : uint8 {
	LowToHigh = 0,
	High = 1,
	MediumToHigh = 2,
	Medium = 3,
	LowToMedium = 4,
	Low = 5,
	ELineRule_MAX = 6
};

// Enum Phoenix.ELineRule_LayeredAnimationStartFromType
enum class ELineRule_LayeredAnimationStartFromType : uint8 {
	DialogueLineStart = 0,
	LipsyncPause = 1,
	LipsyncMe = 2,
	LipsyncYou = 3,
	LipsyncQuickly = 4,
	LipsyncAffirmative = 5,
	LipsyncNegative = 6,
	LipsyncHere = 7,
	LipsyncThere = 8,
	LipsyncSuperlative = 9,
	LipsyncGreet = 10,
	LipsyncLaugh = 11,
	LipsyncThink = 12,
	ToneChanges = 13,
	ToneLowToHigh = 14,
	ToneHighToLow = 15,
	ELineRule_MAX = 16
};

// Enum Phoenix.ELineRule_LayeredAnimationType
enum class ELineRule_LayeredAnimationType : uint8 {
	OnlyWhenSpeaking = 0,
	OnlyWhenNotSpeaking = 1,
	Whenever = 2,
	ELineRule_MAX = 3
};

// Enum Phoenix.ELineTraceTestActorObjectTypeQuery
enum class ELineTraceTestActorObjectTypeQuery : uint8 {
	WorldStatic = 0,
	WorldDynamic = 1,
	Pawn = 2,
	PhysicsBody = 3,
	Vehicle = 4,
	Destructible = 5,
	ShallowWater = 6,
	SphereTracer = 7,
	Spell = 8,
	Station = 9,
	DeepWater = 10,
	Weapon = 11,
	WebbedObject = 12,
	Audio_Volume = 13,
	GameVolume = 14,
	PlayerOnly = 15,
	FluidSim = 16,
	NavMarkup = 17,
	Station_Static = 18,
	ELineTraceTestActorObjectTypeQuery_MAX = 19
};

// Enum Phoenix.ELineTraceTestActorCollisionChannel
enum class ELineTraceTestActorCollisionChannel : uint8 {
	WorldStatic = 0,
	WorldDynamic = 1,
	Pawn = 2,
	Visibility = 3,
	Camera = 4,
	PhysicsBody = 5,
	Vehicle = 6,
	Destructible = 7,
	ShallowWater = 8,
	SphereTracer = 9,
	LedgeTrace = 10,
	Spell = 11,
	Station = 12,
	DeepWater = 13,
	Weapon = 14,
	WebbedObject = 15,
	Audio_Volume = 16,
	GameVolume = 17,
	FootIK = 18,
	PlayerOnly = 19,
	FluidSim = 20,
	MapTrace = 21,
	InteractBlocker = 22,
	NavMarkup = 23,
	Station_Static = 24,
	AimConeCheck = 25,
	EdgeCheck = 26,
	ELineTraceTestActorCollisionChannel_MAX = 27
};

// Enum Phoenix.ELineTraceTestActorQueryMobilityType
enum class ELineTraceTestActorQueryMobilityType : uint8 {
	Any = 0,
	Static = 1,
	Dynamic = 2,
	ELineTraceTestActorQueryMobilityType_MAX = 3
};

// Enum Phoenix.ELineTraceTestActorTraceType
enum class ELineTraceTestActorTraceType : uint8 {
	Channel = 0,
	ObjectType = 1,
	Profile = 2,
	ELineTraceTestActorTraceType_MAX = 3
};

// Enum Phoenix.ELockDifficulty
enum class ELockDifficulty : uint8 {
	Level_2 = 0,
	Level_3 = 1,
	Level_4 = 2,
	NeedsKey = 3,
	ELockDifficulty_MAX = 4
};

// Enum Phoenix.EMinimalLockState
enum class EMinimalLockState : uint8 {
	Unlocked = 0,
	Locked = 1,
	EMinimalLockState_MAX = 2
};

// Enum Phoenix.ETransformFunction
enum class ETransformFunction : uint8 {
	NoTransformFunction = 0,
	TransformLinear = 1,
	TransformSine = 2,
	ETransformFunction_MAX = 3
};

// Enum Phoenix.ECategoryGenerationType
enum class ECategoryGenerationType : uint8 {
	Normal = 0,
	RelativeToPlayerLevel = 1,
	ECategoryGenerationType_MAX = 2
};

// Enum Phoenix.EContainerSelectionType
enum class EContainerSelectionType : uint8 {
	RandomByWeight = 0,
	InOrderByWeight = 1,
	EContainerSelectionType_MAX = 2
};

// Enum Phoenix.EEmberTrickRotation
enum class EEmberTrickRotation : uint8 {
	Yaw = 0,
	Pitch = 1,
	Roll = 2,
	EEmberTrickRotation_MAX = 3
};

// Enum Phoenix.EEmberTrickAxis
enum class EEmberTrickAxis : uint8 {
	XAxis = 0,
	YAxis = 1,
	ZAxis = 2,
	EEmberTrickAxis_MAX = 3
};

// Enum Phoenix.ELumosLightingScenarioMask
enum class ELumosLightingScenarioMask : uint8 {
	Legacy = 0,
	CheapSpot = 1,
	SanderRework = 2,
	ELumosLightingScenarioMask_MAX = 3
};

// Enum Phoenix.ELumosLightingScenario
enum class ELumosLightingScenario : uint8 {
	Legacy = 0,
	CheapSpot = 1,
	SanderRework = 2,
	ELumosLightingScenario_MAX = 3
};

// Enum Phoenix.ELumosContactShadows
enum class ELumosContactShadows : uint8 {
	None = 0,
	WorldSpace = 1,
	DepthUnits = 2,
	ELumosContactShadows_MAX = 3
};

// Enum Phoenix.EMailState
enum class EMailState : uint8 {
	MAIL_STATE_PENDING = 0,
	MAIL_STATE_ACTIVE = 1,
	MAIL_STATE_ARCHIVED = 2,
	MAIL_STATE_DELETED_BUT_NEEDED_BY_MISSION = 3,
	MAIL_STATE_MAX = 4
};

// Enum Phoenix.EInteractSensePriority
enum class EInteractSensePriority : uint8 {
	Lowest = 0,
	NPC = 1,
	Conversation = 2,
	ActiveCinematic = 3,
	PerformTask = 4,
	HideTrigger = 5,
	ScheduleTimeWindow = 6,
	Highest = 7,
	EInteractSensePriority_MAX = 8
};

// Enum Phoenix.EMapTransitionStyle
enum class EMapTransitionStyle : uint8 {
	Short = 0,
	Long = 1,
	EMapTransitionStyle_MAX = 2
};

// Enum Phoenix.EMapZoomTypes
enum class EMapZoomTypes : uint8 {
	MAP_TOOL_TIP_TYPE_INVALID = 0,
	MAP_TOOL_TIP_TYPE_TIER1 = 1,
	MAP_TOOL_TIP_TYPE_TIER2 = 2,
	MAP_TOOL_TIP_TYPE_TIER3 = 3,
	MAP_TOOL_TIP_TYPE_TIER4 = 4,
	MAP_TOOL_TIP_TYPE_TIER5 = 5,
	MAP_TOOL_TIP_TYPE_MAX = 6
};

// Enum Phoenix.EMapToolTipTypes
enum class EMapToolTipTypes : uint8 {
	MAP_TOOL_TIP_TYPE_UNSET = 0,
	MAP_TOOL_TIP_TYPE_DUNGEON = 1,
	MAP_TOOL_TIP_TYPE_FAST_TRAVEL = 2,
	MAP_TOOL_TIP_TYPE_CASTLE = 3,
	MAP_TOOL_TIP_TYPE_HAMLET = 4,
	MAP_TOOL_TIP_TYPE_BANDIT_CAMP = 5,
	MAP_TOOL_TIP_TYPE_WAY_MARKER = 6,
	MAP_TOOL_TIP_TYPE_PLAYER_MARKER = 7,
	MAP_TOOL_TIP_TYPE_FILTER_REGION = 8,
	MAP_TOOL_TIP_TYPE_HOGWARTS = 9,
	MAP_TOOL_TIP_TYPE_HOGSMEADE = 10,
	MAP_TOOL_TIP_TYPE_ENEMY_LOCATION = 11,
	MAP_TOOL_TIP_TYPE_MISSION = 12,
	MAP_TOOL_TIP_TYPE_STACK = 13,
	MAP_TOOL_TIP_TYPE_MAX = 14
};

// Enum Phoenix.EMapFilterTypes
enum class EMapFilterTypes : uint8 {
	MAP_FILTER_TYPE_NONE = 0,
	MAP_FILTER_TYPE_GENERAL = 1,
	MAP_FILTER_TYPE_BEASTS = 2,
	MAP_FILTER_TYPE_PLANTS = 3,
	MAP_FILTER_TYPE_MAX = 4
};

// Enum Phoenix.EMapPlayerHouseTypes
enum class EMapPlayerHouseTypes : uint8 {
	MAP_PLAYER_HOUSE_GRYFFINDOR = 0,
	MAP_PLAYER_HOUSE_SLYTHERIN = 1,
	MAP_PLAYER_HOUSE_HUFFLEPUFF = 2,
	MAP_PLAYER_HOUSE_RAVENCLAW = 3,
	MAP_PLAYER_HOUSE_MAX = 4
};

// Enum Phoenix.EMapLocTypes
enum class EMapLocTypes : uint8 {
	MAP_LOC_KEY_NONE = 0,
	MAP_LOC_KEY_ZOOM = 1,
	MAP_LOC_KEY_NEXT_MAP = 2,
	MAP_LOC_KEY_TRACK_QUEST = 3,
	MAP_LOC_KEY_UNTRACK_QUEST = 4,
	MAP_LOC_KEY_SET_WAYPOINT = 5,
	MAP_LOC_KEY_UNSET_WAYPOINT = 6,
	MAP_LOC_KEY_TRAVEL = 7,
	MAP_LOC_KEY_TRAVEL_CLOSEST = 8,
	MAP_LOC_KEY_BACK = 9,
	MAP_LOC_KEY_SELECT = 10,
	MAP_LOC_KEY_MOVE_CAMERA = 11,
	MAP_LOC_KEY_FILTER = 12,
	MAP_LOC_KEY_ROTATE = 13,
	MAP_LOC_GOTO_QUEST_LOG = 14,
	MAP_LOC_GOTO_QUEST_LOG_MNK = 15,
	MAP_LOC_KEY_FAST_TRAVEL_LIST_DO_FAST_TRAVEL = 16,
	MAP_LOC_KEY_FAST_TRAVEL_LIST_DO_SELECT_REGION = 17,
	MAP_LOC_KEY_WAIT = 18,
	MAP_LOC_KEY_TRAVEL_MOUSE_KBD = 19,
	MAP_LOC_KEY_ROTATE_MOUSE_KBD = 20,
	MAP_LOC_KEY_FAST_TRAVEL_LIST_DO_FAST_TRAVEL_MOUSE_KBD = 21,
	MAP_LOC_MAX = 22
};

// Enum Phoenix.EMapStackedIconState
enum class EMapStackedIconState : uint8 {
	MAP_STACKED_ICON_STATE_NONE = 0,
	MAP_STACKED_ICON_STATE_IS_HOVERED = 1,
	MAP_STACKED_ICON_STATE_TRIGGER_CHOOSER = 2,
	MAP_STACKED_ICON_STATE_ANIMATE_CHOOSER = 3,
	MAP_STACKED_ICON_STATE_ANIMATE_CHOOSER_REVERSE = 4,
	MAP_STACKED_ICON_STATE_IN_CHOOSER = 5,
	MAP_STACKED_ICON_STATE_MAX = 6
};

// Enum Phoenix.EMapPostFadeState
enum class EMapPostFadeState : uint8 {
	MAP_POST_FADE_STATE_NONE = 0,
	MAP_POST_FADE_STATE_NEW_MAP = 1,
	MAP_POST_FADE_STATE_CLOSE = 2,
	MAP_POST_FADE_STATE_MAX = 3
};

// Enum Phoenix.EMapIconAnimationStopType
enum class EMapIconAnimationStopType : uint8 {
	MAP_ICON_ANIMATION_STOP_TYPE_ALL = 0,
	MAP_ICON_ANIMATION_STOP_TYPE_POSITION_ONLY = 1,
	MAP_ICON_ANIMATION_STOP_TYPE_SCALE_ONLY = 2,
	MAP_ICON_ANIMATION_STOP_TYPE_MAX = 3
};

// Enum Phoenix.EMapIconState
enum class EMapIconState : uint8 {
	MAP_ICON_STATE_HOVER = 0,
	MAP_ICON_STATE_FT_PULSE = 1,
	MAP_ICON_STATE_PLAYER_BOUNCE = 2,
	MAP_ICON_STATE_NEWLY_DISCOVERED = 3,
	MAP_ICON_STATE_NEAREST_FT = 4,
	MAP_ICON_STATE_STOP_ANIMATION = 5,
	MAP_ICON_STATE_STOP_ANIMATION_POSITION_ONLY = 6,
	MAP_ICON_STATE_STOP_ANIMATION_SCALE_ONLY = 7,
	MAP_ICON_STATE_IDLE = 8,
	MAP_ICON_STATE_INVALID = 9,
	MAP_ICON_STATE_MAX = 10
};

// Enum Phoenix.EMapFadeState
enum class EMapFadeState : uint8 {
	MAP_FADE_STATE_IDLE = 0,
	MAP_FADE_STATE_FADING_OUT = 1,
	MAP_FADE_STATE_FADING_IN = 2,
	MAP_FADE_STATE_FADING_TRANSITION = 3,
	MAP_FADE_STATE_ZOOMING_IN = 4,
	MAP_FADE_STATE_ZOOMING_OUT = 5,
	MAP_FADE_STATE_FADED_OUT = 6,
	MAP_FADE_SCREEN_WIDGET_IN = 7,
	MAP_FADE_SCREEN_WIDGET_OUT = 8,
	MAP_FADE_TENT_FADING_OUT = 9,
	MAP_FADE_TENT_FADING_IN = 10,
	MAP_FADE_TENT_WAITING = 11,
	MAP_WIDGET_STATE_FADING_OUT = 12,
	MAP_WIDGET_STATE_FADING_IN = 13,
	MAP_FADE_STATE_PULSE = 14,
	MAP_MAX = 15
};

// Enum Phoenix.ECursorControlTypes
enum class ECursorControlTypes : uint8 {
	CURSOR_CONTROL_AUTO = 0,
	CURSOR_CONTROL_GAMEPAD = 1,
	CURSOR_CONTROL_MOUSE = 2,
	CURSOR_CONTROL_MAX = 3
};

// Enum Phoenix.EMapScreenFXType
enum class EMapScreenFXType : uint8 {
	MAP_FX_TYPE_NONE = 0,
	MAP_FX_TYPE_ALL = 1,
	MAP_FX_TYPE_ACTIVE = 2,
	MAP_FX_TYPE_INACTIVE = 3,
	MAP_FX_TYPE_MAX = 4
};

// Enum Phoenix.EMapScreenMouseButtonID
enum class EMapScreenMouseButtonID : uint8 {
	MOUSE_BUTTON_LEFT = 0,
	MOUSE_BUTTON_RIGHT = 1,
	MOUSE_BUTTON_WHEEL = 2,
	MOUSE_BUTTON_MAX = 3
};

// Enum Phoenix.EMaskContainerType
enum class EMaskContainerType : uint8 {
	Masked = 0,
	Unmasked = 1,
	EMaskContainerType_MAX = 2
};

// Enum Phoenix.EMiniMapIconSize
enum class EMiniMapIconSize : uint8 {
	MINIMAP_ICONSIZE_SMALL = 0,
	MINIMAP_ICONSIZE_NORMAL = 1,
	MINIMAP_ICONSIZE_LARGE = 2,
	MINIMAP_ICONSIZE_MAX = 3
};

// Enum Phoenix.EMiniMapSizeOption
enum class EMiniMapSizeOption : uint8 {
	MINIMAP_SIZE_OFF = 0,
	MINIMAP_SIZE_SMALL = 1,
	MINIMAP_SIZE_NORMAL = 2,
	MINIMAP_SIZE_LARGE = 3,
	MINIMAP_SIZE_MAX = 4
};

// Enum Phoenix.EMap3DState
enum class EMap3DState : uint8 {
	IDLE = 0,
	START = 1,
	DISCOVER = 2,
	TRANSITION_TO_GROUP = 3,
	GROUP = 4,
	TRANSITION_TO_SINGLE = 5,
	SINGLE = 6,
	TRANSITION_TO_CASTLE = 7,
	CASTLE = 8,
	FASTTRAVEL = 9,
	EMap3DState_MAX = 10
};

// Enum Phoenix.EMapIconAnimationSetType
enum class EMapIconAnimationSetType : uint8 {
	MAP_ICON_ANIMATION_SET_TYPE_APPEND = 0,
	MAP_ICON_ANIMATION_SET_TYPE_DIRECT = 1,
	MAP_ICON_ANIMATION_SET_TYPE_LERP = 2,
	MAP_ICON_ANIMATION_SET_TYPE_MAX = 3
};

// Enum Phoenix.EMapIconAnimationLoopType
enum class EMapIconAnimationLoopType : uint8 {
	MAP_ICON_ANIMATION_LOOP_TYPE_ONE_SHOT = 0,
	MAP_ICON_ANIMATION_LOOP_TYPE_LOOPING = 1,
	MAP_ICON_ANIMATION_LOOP_TYPE_BOUNCE = 2,
	MAP_ICON_ANIMATION_LOOP_TYPE_MAX = 3
};

// Enum Phoenix.EMapIconAnimationBinding
enum class EMapIconAnimationBinding : uint8 {
	MAP_ICON_ANIMATION_BINDING_TRANSLATION = 0,
	MAP_ICON_ANIMATION_BINDING_SCALE = 1,
	MAP_ICON_ANIMATION_BINDING_MAX = 2
};

// Enum Phoenix.EMapIconInstanceTextureType
enum class EMapIconInstanceTextureType : uint8 {
	MAP_ICON_INSTANCE_TEXTURE_TYPE_TEXTURE = 0,
	MAP_ICON_INSTANCE_TEXTURE_TYPE_DOT = 1,
	MAP_ICON_INSTANCE_TEXTURE_TYPE_DIAMOND = 2,
	MAP_ICON_INSTANCE_TEXTURE_TYPE_QUESTIONMARK = 3,
	MAP_ICON_INSTANCE_TEXTURE_TYPE_ALTERNATE = 4,
	MAP_ICON_INSTANCE_TEXTURE_TYPE_INVALID = 5,
	MAP_ICON_INSTANCE_TEXTURE_TYPE_MAX = 6
};

// Enum Phoenix.EMapInstanceIconType
enum class EMapInstanceIconType : uint8 {
	MAP_INSTANCE_ICON_TYPE_NONE = 0,
	MAP_INSTANCE_ICON_TYPE_ICON = 1,
	MAP_INSTANCE_ICON_TYPE_PERCEPTION = 2,
	MAP_INSTANCE_ICON_TYPE_AREA_BEACON_CIRCLE = 3,
	MAP_INSTANCE_ICON_TYPE_AREA_BEACON_ICON = 4,
	MAP_INSTANCE_ICON_TYPE_AREA_BEACON_OUTLINE = 5,
	MAP_INSTANCE_ICON_TYPE_PATH = 6,
	MAP_INSTANCE_ICON_TYPE_AUTHORITY = 7,
	MAP_INSTANCE_ICON_TYPE_ACCESSIBILITY_AUDIO_CUE = 9,
	MAP_INSTANCE_ICON_TYPE_ACCESSIBILITY_EFFECT = 9,
	MAP_INSTANCE_ICON_TYPE_ENEMY = 10,
	MAP_INSTANCE_ICON_TYPE_MAX = 11
};

// Enum Phoenix.EMinimapInstanceIconFlags
enum class EMinimapInstanceIconFlags : uint8 {
	MAP_INSTANCE_ICON_FLAG_ICON = 0,
	MAP_INSTANCE_ICON_FLAG_UP_ARROW = 2,
	MAP_INSTANCE_ICON_FLAG_DOWN_ARROW = 4,
	MAP_INSTANCE_ICON_FLAG_HIGHLIGHT = 8,
	MAP_INSTANCE_ICON_FLAG_MAX = 9
};

// Enum Phoenix.EMapRegionType
enum class EMapRegionType : uint8 {
	MAP_REGION_TYPE_UNDEFINED = 0,
	MAP_REGION_TYPE_ROOM = 1,
	MAP_REGION_TYPE_FLOOR = 2,
	MAP_REGION_TYPE_STAIRS = 3,
	MAP_REGION_TYPE_TOWER = 4,
	MAP_REGION_TYPE_COUNT = 5,
	MAP_REGION_TYPE_MAX = 6
};

// Enum Phoenix.ERegionType
enum class ERegionType : uint8 {
	InvalidRegion = 0,
	HogwartsInitialRegion = 1,
	NorthSwamp = 2,
	ForbiddenForestRegion = 3,
	HogsmeadeRegion = 4,
	MouthOfForbiddenForestRegion = 5,
	HogwartsRegion = 6,
	HogwartsValleyRegion = 7,
	WestHogwartsRegion = 8,
	SouthSwampRegion = 9,
	CoastLakeRegion = 10,
	CoastArmRegion = 11,
	HelmsdaleAreaRegion = 12,
	SouthCoastRegion = 13,
	NorthCoastRegion = 14,
	CoastlineEntrance = 15,
	PittUponFordSubregion = 16,
	SanBakarsTowerSubregion = 17,
	AVMOutlookSubRegion = 18,
	UpperHogsfieldSubregion = 19,
	HSTCastleSubregion = 20,
	HearthSubgregion = 21,
	LowerHogsfieldSubregion = 22,
	BrocburrowSubregion = 23,
	KeenbridgeSubregion = 24,
	AllSaintsCastleSubregion = 25,
	ChepstowCastleSubregion = 26,
	FeldcroftSubregion = 27,
	IrondaleSubregion = 28,
	JerpointCastleSubregion = 29,
	SpookyForestSubregion = 30,
	MarunweemSubregion = 31,
	EvilGoblinCanyonSubregion = 32,
	HalkirkSubregion = 33,
	RookwoodManorSubregion = 34,
	HelmsdaleSubregion = 35,
	ArbroathCastleSubregion = 36,
	HogsmeadeStationSubregion = 37,
	SpireAreaSubregion = 38,
	FearglasCastleSubregion = 39,
	PoidsearRuinSubregion = 40,
	HogwartsSouth_FlightHeightModifier_01 = 41,
	HogwartsSouth_FlightHeightModifier_02 = 42,
	HogwartsSouth_FlightHeightModifier_03 = 43,
	HogwartsSouth_FlightHeightModifier_04 = 44,
	HogwartsSouth_FlightHeightModifier_05 = 45,
	HogwartsSouth_FlightHeightModifier_06 = 46,
	HogwartsSouth_FlightHeightModifier_07 = 47,
	HogwartsSouth_FlightHeightModifier_08 = 48,
	HogwartsNorth_FlightHeightModifier_01 = 49,
	HogwartsNorth_FlightHeightModifier_02 = 50,
	HogwartsNorth_FlightHeightModifier_03 = 51,
	HogwartsNorth_FlightHeightModifier_04 = 52,
	HogwartsNorth_FlightHeightModifier_05 = 53,
	HogwartsNorth_FlightHeightModifier_06 = 54,
	HogwartsNorth_FlightHeightModifier_07 = 55,
	HogwartsNorth_FlightHeightModifier_08 = 56,
	Coast_FlightHeightModifier_01 = 57,
	Coast_FlightHeightModifier_02 = 58,
	Coast_FlightHeightModifier_03 = 59,
	Coast_FlightHeightModifier_04 = 60,
	Coast_FlightHeightModifier_05 = 61,
	Coast_FlightHeightModifier_06 = 62,
	Coast_FlightHeightModifier_07 = 63,
	Coast_FlightHeightModifier_08 = 64,
	HogwartsBounds = 65,
	HogsmeadeBounds = 66,
	HogwartsCastleBounds = 67,
	CoastBounds = 68,
	HogwartsLake = 69,
	Dungeon = 70,
	MapBounds = 71,
	MaxRegions = 72,
	ERegionType_MAX = 73
};

// Enum Phoenix.ESanctuaryMiniMapType
enum class ESanctuaryMiniMapType : uint8 {
	MINIMAP_TYPE_NONE = 0,
	MINIMAP_TYPE_HUB = 1,
	MINIMAP_TYPE_GRASSLAND = 2,
	MINIMAP_TYPE_FOREST = 3,
	MINIMAP_TYPE_COAST = 4,
	MINIMAP_TYPE_SWAMP = 5,
	MINIMAP_TYPE_STUDY = 6,
	MINIMAP_TYPE_MAX = 7
};

// Enum Phoenix.EMapTypes
enum class EMapTypes : uint8 {
	MAP_TYPE_NONE = 0,
	MAP_TYPE_OVERLAND = 1,
	MAP_TYPE_DUNGEON = 2,
	MAP_TYPE_HOGWARTS = 3,
	MAP_TYPE_HOGSMEADE = 4,
	MAP_TYPE_SANCTUARY = 5,
	MAP_TYPE_TENT = 6,
	MAP_TYPE_TUTORIAL = 7,
	MAP_TYPE_MAX = 8
};

// Enum Phoenix.EMiniMapTextureQuadrant
enum class EMiniMapTextureQuadrant : uint8 {
	MINIMAP_TEXTURE_QUADRANT_LEFT = 0,
	MINIMAP_TEXTURE_QUADRANT_RIGHT = 1,
	MINIMAP_TEXTURE_QUADRANT_TOP = 2,
	MINIMAP_TEXTURE_QUADRANT_BOTTOM = 3,
	MINIMAP_TEXTURE_QUADRANT_TOP_RIGHT = 4,
	MINIMAP_TEXTURE_QUADRANT_BOTTOM_LEFT = 5,
	MINIMAP_TEXTURE_QUADRANT_TOP_LEFT = 6,
	MINIMAP_TEXTURE_QUADRANT_BOTTOM_RIGHT = 7,
	MINIMAP_TEXTURE_QUADRANT_MAX = 8
};

// Enum Phoenix.EMiniMapLevels
enum class EMiniMapLevels : uint8 {
	MINI_MAP_LEVEL_OVERLAND = 0,
	MINI_MAP_LEVEL_HOGWARTS = 1,
	MINI_MAP_LEVEL_HOGSMEADE = 2,
	MINI_MAP_LEVEL_DUNGEON = 3,
	MINI_MAP_LEVEL_TUTORIAL = 4,
	MINI_MAP_LEVEL_SANCTUARY = 5,
	MINI_MAP_LEVEL_TENTS = 6,
	MINI_MAP_LEVEL_NONE = 7,
	MINI_MAP_LEVEL_MAX = 8
};

// Enum Phoenix.BannerUpdateType
enum class BannerUpdateType : uint8 {
	BANNER_UPDATE_NEW_MISSION = 0,
	BANNER_UPDATE_MISSION_AVAILABLE = 1,
	BANNER_UPDATE_MISSION_COMPLETE = 2,
	BANNER_UPDATE_MISSION_ENDED = 3,
	BANNER_UPDATE_MISSION_FAILED = 4,
	BANNER_UPDATE_NEW_STEP = 5,
	BANNER_UPDATE_STEP_COMPLETE = 6,
	BANNER_UPDATE_STEP_UPDATED = 7,
	BANNER_UPDATE_STEP_REDISPLAY = 8,
	BANNER_UPDATE_NO_FOCUS_MISSION = 9,
	BANNER_UPDATE_STEP_JOURNAL_UPDATED = 10,
	BANNER_UPDATE_STEP_WAYPOINT = 11,
	BANNER_UPDATE_SHOWMISSIONCOMPLETEUI = 12,
	BANNER_UPDATE_NONE = 13,
	BANNER_UPDATE_COUNT = 14,
	BANNER_UPDATE_MAX = 15
};

// Enum Phoenix.EProgressLockRewardType
enum class EProgressLockRewardType : uint8 {
	PROGRESS_LOCK_REWARD_TYPE_UNKNOWN = 0,
	PROGRESS_LOCK_REWARD_TYPE_SPELL = 1,
	PROGRESS_LOCK_REWARD_TYPE_MAX = 2
};

// Enum Phoenix.EMissionTabType
enum class EMissionTabType : uint8 {
	TABTYPE_ALL = 0,
	TABTYPE_MAIN = 1,
	TABTYPE_SIDE = 2,
	TABTYPE_ASSIGNMENT = 3,
	TABTYPE_RELATIONSHIP = 4,
	TABTYPE_COMPLETE = 5,
	TABTYPE_MAX = 6
};

// Enum Phoenix.EMounted_AIState
enum class EMounted_AIState : uint8 {
	Stationary = 0,
	MovingToPathNode = 1,
	WaitingAtPathNode = 2,
	FinishWaitingAtPathNode = 3,
	MovingToSpline = 4,
	FollowingSpline = 5,
	EMounted_MAX = 6
};

// Enum Phoenix.EMountFlyingSpeedLimit
enum class EMountFlyingSpeedLimit : uint8 {
	Hover = 0,
	Slow = 1,
	EMountFlyingSpeedLimit_MAX = 2
};

// Enum Phoenix.EMountGroundSpeedLimit
enum class EMountGroundSpeedLimit : uint8 {
	Walk = 0,
	Jog = 1,
	EMountGroundSpeedLimit_MAX = 2
};

// Enum Phoenix.EPrerequisiteType
enum class EPrerequisiteType : uint8 {
	None = 0,
	Disable_On_MissionStatus = 1,
	Enable_On_MissionStatus = 2,
	Disable_On_ProgressionLock = 3,
	Enable_On_ProgressionLock = 4,
	EPrerequisiteType_MAX = 5
};

// Enum Phoenix.EMountTypes
enum class EMountTypes : uint8 {
	Broom_Flying = 0,
	Broom_Ground = 1,
	Graphorn_Ground = 2,
	Hippogriff_Flying = 3,
	Hippogriff_Ground = 4,
	Niffler_Ground = 5,
	Avatar_Ground = 6,
	EMountTypes_MAX = 7
};

// Enum Phoenix.ETargetOrientation
enum class ETargetOrientation : uint8 {
	AnyDirection = 0,
	TargetAxis = 1,
	TargetDirection = 2,
	ETargetOrientation_MAX = 3
};

// Enum Phoenix.EMultiPlusRepeat
enum class EMultiPlusRepeat : uint8 {
	Standard = 0,
	Restart = 1,
	Ignore = 2,
	EMultiPlusRepeat_MAX = 3
};

// Enum Phoenix.EMultiFXLoc
enum class EMultiFXLoc : uint8 {
	Location = 0,
	Location_Attached = 1,
	Location_ObjectOrient = 2,
	Location_ObjectOrient_Attached = 3,
	Location_ZeroOrient = 4,
	Location_ZeroOrient_Attached = 5,
	ObjectCenterLoc = 6,
	ObjectCenterLoc_Attached = 7,
	ObjectCenterLoc_ObjectOrient = 8,
	ObjectCenterLoc_ObjectOrient_Attached = 9,
	ObjectCenterLoc_ZeroOrient = 10,
	ObjectCenterLoc_ZeroOrient_Attached = 11,
	ObjectBottomLoc = 12,
	ObjectBottomLoc_Attached = 13,
	ObjectBottomLoc_ObjectOrient = 14,
	ObjectBottomLoc_ObjectOrient_Attached = 15,
	ObjectBottomLoc_ZeroOrient = 16,
	ObjectBottomLoc_ZeroOrient_Attached = 17,
	ObjectAnchorLoc = 18,
	ObjectAnchorLoc_Attached = 19,
	ObjectAnchorLoc_ObjectOrient = 20,
	ObjectAnchorLoc_ObjectOrient_Attached = 21,
	ObjectAnchorLoc_ZeroOrient = 22,
	ObjectAnchorLoc_ZeroOrient_Attached = 23,
	BoneLocation = 24,
	BoneLocation_Attached = 25,
	GroundBelowLoc = 26,
	GroundBelowLoc_ObjectOrient = 27,
	GroundBelowLoc_ZeroOrient = 28,
	GroundBelowLoc_NormalOrient = 29,
	GroundBelowCenterLoc = 30,
	GroundBelowCenterLoc_ObjectOrient = 31,
	GroundBelowCenterLoc_ZeroOrient = 32,
	GroundBelowCenterLoc_NormalOrient = 33,
	Wandtip_Attached = 34,
	EMultiFXLoc_MAX = 35
};

// Enum Phoenix.EMultiFXBeamSource
enum class EMultiFXBeamSource : uint8 {
	Target = 0,
	Instigator = 1,
	BeamSourceProperty = 2,
	EMultiFXBeamSource_MAX = 3
};

// Enum Phoenix.EMultiFXOrientation
enum class EMultiFXOrientation : uint8 {
	AnchorOrient = 0,
	ZeroOrient = 1,
	WandtipOrient = 2,
	GroundOrient = 3,
	InvertOrient = 4,
	InstigatorOrient = 5,
	ImpactPointOrient = 6,
	TargetPointOrient = 7,
	TowardInstigator = 8,
	InstigatorToTarget = 9,
	ZeroPitch = 10,
	ZeroRoll = 11,
	ZeroYaw = 12,
	VelocityOrient = 13,
	WeaponOrient = 14,
	EMultiFXOrientation_MAX = 15
};

// Enum Phoenix.EMultiFXLocation
enum class EMultiFXLocation : uint8 {
	DefaultLoc = 0,
	AnchorLoc = 1,
	ObjectCenterLoc = 2,
	ObjectTopLoc = 3,
	ObjectBottomLoc = 4,
	ObjectFrontLoc = 5,
	ObjectBackLoc = 6,
	ObjectRightLoc = 7,
	ObjectLeftLoc = 8,
	GroundBelowLoc = 9,
	ComponentCenterLoc = 10,
	ComponentTopLoc = 11,
	ComponentBottomLoc = 12,
	ComponentFrontLoc = 13,
	ComponentBackLoc = 14,
	ComponentRightLoc = 15,
	ComponentLeftLoc = 16,
	WandtipLoc = 17,
	ImpactPoint = 18,
	TargetPoint = 19,
	BoneLoc = 20,
	MeshPointNearestInstigator = 21,
	ActorPointNearestInstigator = 22,
	MeshPointNearestLoc = 23,
	ActorPointNearestLoc = 24,
	WaterSurfaceLoc = 25,
	WeaponLoc = 26,
	ProjectileLoc = 27,
	EMultiFXLocation_MAX = 28
};

// Enum Phoenix.EFootprintTypes
enum class EFootprintTypes : uint8 {
	None = 0,
	Human = 1,
	Goblin = 2,
	Troll = 3,
	EFootprintTypes_MAX = 4
};

// Enum Phoenix.EDecalOrientation
enum class EDecalOrientation : uint8 {
	Random = 0,
	Zero = 1,
	InstigatorToTarget = 2,
	TargetToInstigator = 3,
	EDecalOrientation_MAX = 4
};

// Enum Phoenix.ESfxOcclusion
enum class ESfxOcclusion : uint8 {
	NoOcclusion_1 = 0,
	Single_2 = 1,
	HulaHoop_9 = 2,
	FacingPortal_17 = 3,
	EdgeOnPortal_25 = 4,
	ESfxOcclusion_MAX = 5
};

// Enum Phoenix.ENiagraWaterRippleCurveProperty
enum class ENiagraWaterRippleCurveProperty : uint8 {
	TargetMass = 0,
	TargetVelocity = 1,
	TargetVelocityZ = 2,
	InstigatorMass = 3,
	InstigatorVelocity = 4,
	InstigatorVelocityZ = 5,
	ImpactMass = 6,
	ImpactVelocity = 7,
	ImpactMomentum = 8,
	ENiagraWaterRippleCurveProperty_MAX = 9
};

// Enum Phoenix.ENiagraPropertyTarget
enum class ENiagraPropertyTarget : uint8 {
	Target = 0,
	Instigator = 1,
	ENiagraPropertyTarget_MAX = 2
};

// Enum Phoenix.EBoneTargetType
enum class EBoneTargetType : uint8 {
	None = 0,
	Default = 1,
	Biped = 2,
	Dugbog = 3,
	Spider = 4,
	Wolf = 5,
	Dragon = 6,
	EBoneTargetType_MAX = 7
};

// Enum Phoenix.EMultiFXVectorExtension
enum class EMultiFXVectorExtension : uint8 {
	Size = 0,
	SizeXY = 1,
	SizeZ = 2,
	X = 3,
	Y = 4,
	Z = 5,
	EMultiFXVectorExtension_MAX = 6
};

// Enum Phoenix.EMultiFXPropertyOwner
enum class EMultiFXPropertyOwner : uint8 {
	FX = 0,
	Target = 1,
	Instigator = 2,
	EMultiFXPropertyOwner_MAX = 3
};

// Enum Phoenix.EMultiFXCompare
enum class EMultiFXCompare : uint8 {
	Equal = 0,
	NotEqual = 1,
	GreatherThan = 2,
	GreaterThanEqual = 3,
	LessThan = 4,
	LessThanEqual = 5,
	EMultiFXCompare_MAX = 6
};

// Enum Phoenix.EMultiFXState
enum class EMultiFXState : uint8 {
	Attacking = 0,
	Arresto = 1,
	BrokenOrDead = 2,
	CombatCursed = 3,
	Confundo = 4,
	Disillusioned = 5,
	Dodging = 6,
	Frozen = 7,
	InWater = 8,
	Imperius = 9,
	Invulnerable = 10,
	Levioso = 11,
	OnFire = 12,
	Petrificus = 13,
	Reacting = 14,
	Revealed = 15,
	RevealsThruWalls = 16,
	Transformed = 17,
	Vulnerable = 18,
	EMultiFXState_MAX = 19
};

// Enum Phoenix.EMultiFXActor
enum class EMultiFXActor : uint8 {
	Target = 0,
	Instigator = 1,
	Player = 2,
	EMultiFXActor_MAX = 3
};

// Enum Phoenix.EMultiFXSpell
enum class EMultiFXSpell : uint8 {
	UpgradedMechanic = 0,
	EMultiFXSpell_MAX = 1
};

// Enum Phoenix.EMultiFXRepeat
enum class EMultiFXRepeat : uint8 {
	Restart = 0,
	Ignore = 1,
	RestartInstigator = 2,
	IgnoreInstigator = 3,
	EMultiFXRepeat_MAX = 4
};

// Enum Phoenix.EFXPostProcessingDuplicateAction
enum class EFXPostProcessingDuplicateAction : uint8 {
	Abort = 0,
	Replace = 1,
	RunAnyway = 2,
	EFXPostProcessingDuplicateAction_MAX = 3
};

// Enum Phoenix.EFXUpdatePostProcessingCurveParameter
enum class EFXUpdatePostProcessingCurveParameter : uint8 {
	None = 0,
	BlendWeight = 1,
	AllBlendablesWeight = 2,
	Blendable0Weight = 3,
	Blendable1Weight = 4,
	Blendable2Weight = 5,
	Blendable3Weight = 6,
	EFXUpdatePostProcessingCurveParameter_MAX = 7
};

// Enum Phoenix.EFXUpdatePostProcessingParameter
enum class EFXUpdatePostProcessingParameter : uint8 {
	None = 0,
	BlendWeight = 1,
	AllBlendablesWeight = 2,
	Blendable0Weight = 3,
	Blendable1Weight = 4,
	Blendable2Weight = 5,
	Blendable3Weight = 6,
	BlendInTime = 7,
	BlendOutTime = 8,
	DefaultBlendOutTime = 9,
	EFXUpdatePostProcessingParameter_MAX = 10
};

// Enum Phoenix.EMultiFXUse
enum class EMultiFXUse : uint8 {
	Target = 0,
	Instigator = 1,
	TargetCharacter = 2,
	InstigatorCharacter = 3,
	EMultiFXUse_MAX = 4
};

// Enum Phoenix.EAOEMultiFXState
enum class EAOEMultiFXState : uint8 {
	Announce = 0,
	Warning = 1,
	Explode = 2,
	Expired = 3,
	AnnounceStart = 4,
	AnnounceLoop = 5,
	WarningStart = 6,
	WarningLoop = 7,
	Impact = 8,
	ImpactStart = 9,
	ImpactEnd = 10,
	EAOEMultiFXState_MAX = 11
};

// Enum Phoenix.ESpawnAOE
enum class ESpawnAOE : uint8 {
	SuccessfulHit = 0,
	FailedHit = 1,
	Blocked = 2,
	Deflected = 3,
	FizzledOut = 4,
	ESpawnAOE_MAX = 5
};

// Enum Phoenix.EAccessibilityColorRemapMode
enum class EAccessibilityColorRemapMode : uint8 {
	Invalid = 0,
	Initialize = 1,
	None = 2,
	Deuteranope = 3,
	Protanope = 4,
	Tritanope = 5,
	EAccessibilityColorRemapMode_MAX = 6
};

// Enum Phoenix.ENoMountZoneVersion
enum class ENoMountZoneVersion : uint8 {
	NoVersion = 0,
	UniqueNameFix = 1,
	GroundShieldVFX = 2,
	LatestVersion = 2,
	ENoMountZoneVersion_MAX = 3
};

// Enum Phoenix.ENoMountZoneError
enum class ENoMountZoneError : uint8 {
	Error_OutOfBounds = 0,
	Error_NoFlyZone = 1,
	Error_NoMountZone = 2,
	Error_LeavingRaceTrack = 3,
	Error_LeavingArea = 4,
	Error_AbandoningRace = 5,
	Error_MAX = 6
};

// Enum Phoenix.EBroomNoFlyControl
enum class EBroomNoFlyControl : uint8 {
	NOFLY_Default = 0,
	NOFLY_PUSH = 1,
	NOFLY_181 = 2,
	NOFLY_TELEPORT = 3,
	NOFLY_SLOWDOWN = 4,
	NOFLY_HUG = 5,
	NOFLY_NONE = 6,
	NOFLY_COUNT = 7,
	NOFLY_MAX = 8
};

// Enum Phoenix.ENPC_Type
enum class ENPC_Type : uint8 {
	None = 0,
	Enemy = 1,
	Student = 2,
	Creature = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.ENPC_TargetPerceptionIntent
enum class ENPC_TargetPerceptionIntent : uint8 {
	None = 0,
	AsEnemy = 1,
	AsScheduledEntity = 2,
	ENPC_MAX = 3
};

// Enum Phoenix.ENPC_TargetPerceptionType
enum class ENPC_TargetPerceptionType : uint8 {
	None = 0,
	Attack = 1,
	CrimeScene = 2,
	Notify = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.EManagedNPCHeadTrackingPriority
enum class EManagedNPCHeadTrackingPriority : uint8 {
	Lowest = 0,
	PointOfInterest = 1,
	PerformTask = 2,
	AttackTarget = 3,
	Highest = 4,
	Forced = 5,
	EManagedNPCHeadTrackingPriority_MAX = 6
};

// Enum Phoenix.ENPC_JumpSplineDirection
enum class ENPC_JumpSplineDirection : uint8 {
	Forward = 0,
	Reverse = 1,
	ENPC_MAX = 2
};

// Enum Phoenix.ENPC_FollowSplineMoveState
enum class ENPC_FollowSplineMoveState : uint8 {
	Normal = 0,
	Scurry = 1,
	Volume = 2,
	ENPC_MAX = 3
};

// Enum Phoenix.ENPC_FollowSplineState
enum class ENPC_FollowSplineState : uint8 {
	None = 0,
	Inactive = 1,
	Spline = 2,
	Idle = 3,
	Volume = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ENPC_LOSHeightOffsetSource
enum class ENPC_LOSHeightOffsetSource : uint8 {
	Ground = 0,
	Loc = 1,
	ENPC_MAX = 2
};

// Enum Phoenix.ENPC_LOSParamType
enum class ENPC_LOSParamType : uint8 {
	None = 0,
	Perception = 1,
	Attack = 2,
	Waypoint = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.EDistTypeToTarget
enum class EDistTypeToTarget : uint8 {
	None = 0,
	Attack = 1,
	Pressure = 2,
	Far = 3,
	Count = 4,
	EDistTypeToTarget_MAX = 5
};

// Enum Phoenix.Enemy_TASTargetState
enum class Enemy_TASTargetState : uint8 {
	TrackingTarget = 0,
	TrackingPlayer = 1,
	LosingPlayer = 2,
	NotTracking = 3,
	Enemy_MAX = 4
};

// Enum Phoenix.EAbilityTaskScratchPadCondition
enum class EAbilityTaskScratchPadCondition : uint8 {
	None = 0,
	Hit = 1,
	HitTarget = 2,
	HitGround = 3,
	IsBurning = 4,
	IsCharred = 5,
	HasTarget = 6,
	IsDead = 7,
	TriggerTransition = 8,
	RandomDuration = 9,
	RandomDurationTransition = 10,
	ApparateAttackCount = 11,
	HideLocSelected = 12,
	JumpSplineDone = 13,
	SplineSpawnAdvance = 14,
	Suspended = 15,
	Hovering = 16,
	HasWeapon = 17,
	AttackCustomFlag = 18,
	TasIsAlert = 19,
	TasIsAttack = 20,
	IsSwimming = 21,
	EAbilityTaskScratchPadCondition_MAX = 22
};

// Enum Phoenix.ENPC_SecondaryCollisionResponse
enum class ENPC_SecondaryCollisionResponse : uint8 {
	None = 0,
	Attack = 1,
	PushAway = 2,
	ENPC_MAX = 3
};

// Enum Phoenix.ENPC_LOSUserType
enum class ENPC_LOSUserType : uint8 {
	None = 0,
	EnemyToTarget = 1,
	AttackLocToTarget = 2,
	Shuffle = 3,
	Waypoint = 4,
	Retreat = 5,
	BackOnNav = 6,
	ENPC_MAX = 7
};

// Enum Phoenix.ENPC_TargetDirection
enum class ENPC_TargetDirection : uint8 {
	Forward = 0,
	Back = 1,
	Left = 2,
	Right = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.ENPC_DilateSource
enum class ENPC_DilateSource : uint8 {
	None = 0,
	Recovery = 1,
	Param = 2,
	Time = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.ENPC_AlertPointOfInterest
enum class ENPC_AlertPointOfInterest : uint8 {
	None = 0,
	Target = 1,
	TeammateTarget = 2,
	TeammateDeath = 3,
	TeammateDamage = 4,
	Sound = 5,
	TeammateDead = 6,
	Distraction = 7,
	CombatPlant = 8,
	ENPC_MAX = 9
};

// Enum Phoenix.ENPC_LosingTargetType
enum class ENPC_LosingTargetType : uint8 {
	None = 0,
	Seek = 1,
	Death = 2,
	Default = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.ENPC_MoveState
enum class ENPC_MoveState : uint8 {
	Loop = 0,
	Start = 1,
	Stop = 2,
	LoopTurn = 3,
	FollowSpline = 4,
	TurnInPlace = 5,
	Pivot = 6,
	Count = 7,
	ENPC_MAX = 8
};

// Enum Phoenix.ENPC_BlendSpaceCoordinates
enum class ENPC_BlendSpaceCoordinates : uint8 {
	Cartesian = 0,
	Polar = 1,
	Anim = 2,
	MoveTurn = 3,
	Standard = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ENPC_MoveDataState
enum class ENPC_MoveDataState : uint8 {
	Normal = 0,
	Attack = 1,
	ENPC_MAX = 2
};

// Enum Phoenix.ENPC_StopReasonMove
enum class ENPC_StopReasonMove : uint8 {
	MoveData_RequestStop = 0,
	MoveData_ResetRequestStop = 1,
	MoveData_PathFinished = 2,
	UpdateInfo_MoveCorridor = 3,
	UpdateInfo_MoveCollision = 4,
	UpdateMove_AwayFromWaypoint = 5,
	UpdateMove_NotProgressingWaypoint = 6,
	UpdateMove_NotProgressingDestination = 7,
	UpdateMove_UpdateBlocked = 8,
	UpdateMove_WillEnterCorridor = 9,
	SetMoveWaypoint_StartBlocked = 10,
	SetMoveWaypoint_ConstrainLocFailed = 11,
	SetMoveWaypoint_AbruptHeadingChange = 12,
	SetMoveWaypoint_HeadingOffscreen = 13,
	SetMoveWaypoint_NoGroundFound = 14,
	MoveWaypointCheck_NotProgressingDestination = 15,
	MoveWaypointCheck_NotProgressingWaypoint = 16,
	MoveWaypointCheck_AwayFromWaypoint = 17,
	MoveCheck_LOSNotClear = 18,
	MoveCheck_WillEnterCorridor = 19,
	MoveCheck_TooCloseToTarget = 20,
	MoveCheck_TooCloseToTeammates = 21,
	MoveCheck_TooFarHeadingDistance = 22,
	MoveCheck_EnergyDrained = 23,
	ENPC_MAX = 24
};

// Enum Phoenix.ENPC_StopReasonAUS
enum class ENPC_StopReasonAUS : uint8 {
	AUSStartMove_PathFinished = 0,
	AUSStartMove_MoveData_bStopMove = 1,
	AUSStartMove_RequestTimeout = 2,
	AUSUpdateMove_PathFinished = 3,
	AUSUpdateMove_MoveData_bStopMove = 4,
	AUSUpdateMove_RequestTimeout = 5,
	AUSUpdateMove_CanMoveUpdateStopOrAttack = 6,
	AUSMoving_SidekickUpdateStateUpdate = 7,
	AUSMoving_PathFininshed = 8,
	AUSMoving_bStopMove = 9,
	AUSMoving_NotMoving = 10,
	AUSMoving_AtPathDest = 11,
	AUSMoving_AUSAbortPending = 12,
	AUSMoving_MoveAbortPending = 13,
	AUSMoving_AbruptDirectionChange = 14,
	AUSMoving_AbortAttackDistance = 15,
	AUSMoving_AtPendingDest = 16,
	AUSMoving_CanMoveUpdateStopOrAttack = 17,
	AUSMoving_CantAttackFromDest = 18,
	AUSPaused = 19,
	ENPC_MAX = 20
};

// Enum Phoenix.ENPC_StopReason
enum class ENPC_StopReason : uint8 {
	None = 0,
	StopMove = 1,
	MovementStop = 2,
	OnPathFinished = 3,
	PathFollowingComp_OnPathFinished = 4,
	MovementComponent_StopActiveMovement = 5,
	CanAttackChoose_StopReqPriorToAttack = 6,
	CanAttackRequest_StopReqPriorToAttack = 7,
	ENPC_MAX = 8
};

// Enum Phoenix.ENPC_MoveAttemptStatus
enum class ENPC_MoveAttemptStatus : uint8 {
	None = 0,
	Success = 1,
	NoNavData = 2,
	NoSafeNavPoint = 3,
	StartBlocked = 4,
	UpdateBlocked = 5,
	AbruptHeadingChange = 6,
	HeadingOffscreen = 7,
	WillEnterCorridor = 8,
	PassTooCloseToTarget = 9,
	NoPath = 10,
	ConstrainLocFailed = 11,
	NoGroundFound = 12,
	ENPC_MAX = 13
};

// Enum Phoenix.EEnemy_InitTreeTimeoutAction
enum class EEnemy_InitTreeTimeoutAction : uint8 {
	FailNoEnter = 0,
	EnterWithReset = 1,
	EnterNoReset = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.ENPC_Split
enum class ENPC_Split : uint8 {
	None = 0,
	Attack = 1,
	PostAttack = 2,
	CounterAttack = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.ENPC_EvadeMobilityType
enum class ENPC_EvadeMobilityType : uint8 {
	None = 0,
	Slow = 1,
	Medium = 2,
	Fast = 3,
	Count = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ENPC_GameAttackState
enum class ENPC_GameAttackState : uint8 {
	None = 0,
	RunThrough = 1,
	ENPC_MAX = 2
};

// Enum Phoenix.ENPC_GameSubState
enum class ENPC_GameSubState : uint8 {
	None = 0,
	Outside = 1,
	SwimToShore = 2,
	TooClose = 3,
	BackOnNav = 4,
	RecoverWeapon = 5,
	Investigate = 6,
	ENPC_MAX = 7
};

// Enum Phoenix.ENPC_GameState
enum class ENPC_GameState : uint8 {
	None = 0,
	Wander = 1,
	Attack = 2,
	FollowPath = 3,
	Flee = 4,
	ScheduledEntity = 5,
	Alert = 6,
	FollowPlayer = 7,
	Close = 8,
	RunTo = 9,
	Retreat = 10,
	RetreatSplit = 11,
	FollowSpline = 12,
	ENPC_MAX = 13
};

// Enum Phoenix.ENPC_CrouchContext
enum class ENPC_CrouchContext : uint8 {
	InCrouchVolume = 0,
	OnCrouchNavArea = 1,
	CompanionCrouch = 2,
	ENPC_MAX = 3
};

// Enum Phoenix.ENPC_StairsSlopeContext
enum class ENPC_StairsSlopeContext : uint8 {
	None = 0,
	GoingUp = 1,
	GoingDown = 2,
	ENPC_MAX = 3
};

// Enum Phoenix.ENPC_FireContext
enum class ENPC_FireContext : uint8 {
	None = 0,
	Charred = 1,
	OnFire = 2,
	ENPC_MAX = 3
};

// Enum Phoenix.ENPC_MoveTurnTo
enum class ENPC_MoveTurnTo : uint8 {
	None = 0,
	MoveDir = 1,
	Target = 2,
	Weapon = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.ENPC_TurnAssistState
enum class ENPC_TurnAssistState : uint8 {
	None = 0,
	Target = 1,
	PathLoc = 2,
	Loc = 3,
	Weapon = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ENPC_TurnAssistCurve
enum class ENPC_TurnAssistCurve : uint8 {
	Main = 0,
	Time = 1,
	Speed = 2,
	ENPC_MAX = 3
};

// Enum Phoenix.ENPC_TurnAssist
enum class ENPC_TurnAssist : uint8 {
	None = 0,
	Default = 1,
	Mobility = 2,
	MobilityStop = 3,
	TurnInPlace = 4,
	MobilityStart = 5,
	Attack = 6,
	Stomp = 7,
	RunAt = 8,
	Shuffle = 9,
	Taunt = 10,
	IdleBreak = 11,
	AttackReset = 12,
	TargetRelative = 13,
	AlertPointOfInterest = 14,
	AttackClose = 15,
	ENPC_MAX = 16
};

// Enum Phoenix.ENPC_MobilityTurnAssistStartMode
enum class ENPC_MobilityTurnAssistStartMode : uint8 {
	None = 0,
	Immediate = 1,
	FromAnim = 2,
	Delayed = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.ENPC_TurnAssistType
enum class ENPC_TurnAssistType : uint8 {
	None = 0,
	Fixed = 1,
	Target = 2,
	Instigator = 3,
	Player = 4,
	TargetRelative = 5,
	ExternalMode = 6,
	TargetTracker = 7,
	MovementDirection = 8,
	ENPC_MAX = 9
};

// Enum Phoenix.ENPC_SpawnState
enum class ENPC_SpawnState : uint8 {
	None = 0,
	Spawning = 1,
	SpawnFinshed = 2,
	ENPC_MAX = 3
};

// Enum Phoenix.EEnemy_AbilityChannelContext
enum class EEnemy_AbilityChannelContext : uint8 {
	HasWeapon = 0,
	HasShield = 1,
	Unaware = 2,
	Alert = 3,
	Attack = 4,
	IsBlind = 5,
	IsInjured = 6,
	EEnemy_MAX = 7
};

// Enum Phoenix.ENPC_AbilityChannel
enum class ENPC_AbilityChannel : uint8 {
	FullBody = 0,
	FullBodyAdditive = 1,
	PartialBody1 = 2,
	EmoPartial = 3,
	Facial = 4,
	PartialBody = 5,
	RightArmPartial = 6,
	BlindHead = 7,
	BlindArm = 8,
	Injured = 9,
	Right = 10,
	RightArmPartial2 = 11,
	LeftArmPartial = 12,
	ENPC_MAX = 13
};

// Enum Phoenix.EPerceptionPointEvaluateSource
enum class EPerceptionPointEvaluateSource : uint8 {
	None = 0,
	Enemy = 1,
	Target = 2,
	EPerceptionPointEvaluateSource_MAX = 3
};

// Enum Phoenix.EEnemyAITargetPerceiveState
enum class EEnemyAITargetPerceiveState : uint8 {
	None = 0,
	Gather = 1,
	Evaluate = 2,
	EEnemyAITargetPerceiveState_MAX = 3
};

// Enum Phoenix.EEnemy_TargetType
enum class EEnemy_TargetType : uint8 {
	None = 0,
	Attack = 1,
	Flee = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.EEnemy_LOSChannelSet
enum class EEnemy_LOSChannelSet : uint8 {
	All = 0,
	Static = 1,
	StaticAndDynamic = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.EEnemy_LOSType
enum class EEnemy_LOSType : uint8 {
	Line = 0,
	Cone = 1,
	SweptSphere = 2,
	EEnemy_MAX = 3
};

// Enum Phoenix.ENPC_SetStateNext
enum class ENPC_SetStateNext : uint8 {
	None = 0,
	TargetLost = 1,
	PostSpawn = 2,
	TargetSuccess = 3,
	ReactionDone = 4,
	LosingTarget = 5,
	ConfundoDone = 6,
	ENPC_MAX = 7
};

// Enum Phoenix.ENPC_SidekickUpdateState
enum class ENPC_SidekickUpdateState : uint8 {
	None = 0,
	Hover = 1,
	StopMove = 2,
	StoppingMove = 3,
	StartMove = 4,
	UpdateMove = 5,
	Moving = 6,
	ENPC_MAX = 7
};

// Enum Phoenix.ENPC_ThreatLevel
enum class ENPC_ThreatLevel : uint8 {
	None = 0,
	ThreatLow = 1,
	ThreatMedium = 2,
	ThreatHigh = 3,
	ThreatMax = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ENPC_HitDirection
enum class ENPC_HitDirection : uint8 {
	None = 0,
	Front = 1,
	Left = 2,
	Right = 3,
	Back = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ENPC_WaterResponse
enum class ENPC_WaterResponse : uint8 {
	Die = 0,
	TeleportToShore = 1,
	SwimToShore = 2,
	SwimAndAttack = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.EEnemy_AnimMainState
enum class EEnemy_AnimMainState : uint8 {
	None = 0,
	React = 1,
	Abort = 2,
	Dead = 3,
	EEnemy_MAX = 4
};

// Enum Phoenix.EEnemyAIAnimState
enum class EEnemyAIAnimState : uint8 {
	Idle = 0,
	IdleReady = 1,
	Moving = 2,
	Spawn = 3,
	Attack = 4,
	BecomeAware = 5,
	LoseAware = 6,
	ActivateStoredWeapon = 7,
	StoreActiveWeapon = 8,
	PickupWeaponFloor = 9,
	PickupWeaponWall = 10,
	PickupWeapon = 11,
	DodgeLeft = 12,
	DodgeRight = 13,
	Dodge = 14,
	Disappear_DEPRECATED = 15,
	Reappear_DEPRECATED = 16,
	Taunt = 17,
	Land = 18,
	TurnInPlace = 19,
	Shuffle = 20,
	FleeExit = 21,
	MovingRunTo = 22,
	React = 23,
	NurtureInteract_DEPRECATED = 24,
	Eat_DEPRECATED = 25,
	Jump = 26,
	Dead = 27,
	Climb = 28,
	IdleBreak = 29,
	BecomeAlert = 30,
	LoseAlert = 31,
	Apparate = 32,
	Flourish = 33,
	Flying = 34,
	StartDrained = 35,
	StopDrained = 36,
	Drained = 37,
	AlertWait = 38,
	AlertLook = 39,
	JumpSpline = 40,
	EEnemyAIAnimState_MAX = 41
};

// Enum Phoenix.ENPC_MobilityChoiceSource
enum class ENPC_MobilityChoiceSource : uint8 {
	Distance = 0,
	ENPC_MAX = 1
};

// Enum Phoenix.ENPC_PerceptionUpdate
enum class ENPC_PerceptionUpdate : uint8 {
	Target = 0,
	Weapon_DEPRECATED = 1,
	CrimeScene_DEPRECATED = 2,
	GameEvent = 3,
	Default = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ENPC_QBUpdate
enum class ENPC_QBUpdate : uint8 {
	PieCut = 0,
	Direct = 1,
	Close = 2,
	Evade = 3,
	Follow = 4,
	InOut = 5,
	SeekWeapon = 6,
	Cover = 7,
	Ticket = 8,
	Reposition = 9,
	Sidekick = 10,
	TombProtector = 11,
	Around = 12,
	SeekTarget = 13,
	BackOnNav = 14,
	LeadPlayer = 15,
	TooClose = 16,
	SwimToShore = 17,
	Standby = 18,
	Duel = 19,
	Alert = 20,
	Companion = 21,
	Combat = 22,
	RecoverWeapon = 23,
	POI = 24,
	ENPC_MAX = 25
};

// Enum Phoenix.ENPC_QBUpdateEvent
enum class ENPC_QBUpdateEvent : uint8 {
	Ticket = 0,
	MoveChance = 1,
	MoveStop = 2,
	MoveStart = 3,
	Attacked = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ENPC_NavState
enum class ENPC_NavState : uint8 {
	Unknown = 0,
	On = 1,
	Off = 2,
	ENPC_MAX = 3
};

// Enum Phoenix.ENPC_LOSCheckType
enum class ENPC_LOSCheckType : uint8 {
	None = 0,
	AttackLocToTarget = 1,
	EnemyToTarget = 2,
	ENPC_MAX = 3
};

// Enum Phoenix.EPostDeathSortingMode
enum class EPostDeathSortingMode : uint8 {
	FirstInFirstOut = 0,
	ClosestToPlayerFirst = 1,
	FarthestFromPlayerFirst = 2,
	None = 3,
	EPostDeathSortingMode_MAX = 4
};

// Enum Phoenix.EPostDeathCleanupEffect
enum class EPostDeathCleanupEffect : uint8 {
	Dissolve = 0,
	Fade = 1,
	Destroy = 2,
	None = 3,
	EPostDeathCleanupEffect_MAX = 4
};

// Enum Phoenix.EPostDeathCleanupMode
enum class EPostDeathCleanupMode : uint8 {
	TriggerOnMaximumReached = 0,
	TriggerOnTimer = 1,
	None = 2,
	EPostDeathCleanupMode_MAX = 3
};

// Enum Phoenix.EPostDeathState
enum class EPostDeathState : uint8 {
	Enabled = 0,
	Disabled = 1,
	EPostDeathState_MAX = 2
};

// Enum Phoenix.ENPC_PlayerRelTargetTrackingType
enum class ENPC_PlayerRelTargetTrackingType : uint8 {
	None = 0,
	Range = 1,
	Forced = 2,
	Player = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.ENPC_PlayerRelTargetTracking
enum class ENPC_PlayerRelTargetTracking : uint8 {
	None = 0,
	Aware = 1,
	Alert = 2,
	Aggro = 3,
	Combat = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ENPC_PlayerProtectionState
enum class ENPC_PlayerProtectionState : uint8 {
	NormalAttackProtection = 0,
	FullAttackProtection = 1,
	VulnerableNoProtection = 2,
	FlyingProtection = 3,
	SwimmingProtection = 4,
	ENPC_MAX = 5
};

// Enum Phoenix.ENPC_ShutdownState
enum class ENPC_ShutdownState : uint8 {
	None = 0,
	Execution = 1,
	Rendering = 2,
	Disabled = 3,
	ENPC_MAX = 4
};

// Enum Phoenix.ENPC_PerceptionEventResponseType
enum class ENPC_PerceptionEventResponseType : uint8 {
	Normal = 0,
	Distraction = 1,
	ENPC_MAX = 2
};

// Enum Phoenix.EDifficultyScale_Type
enum class EDifficultyScale_Type : uint8 {
	None = 0,
	TicketCooldownAdjustment = 1,
	DamageAdjustment = 2,
	HealthAdjustment = 3,
	ParryDodgeAdjustment = 4,
	PerfectParryAdjustment = 5,
	ProtegoDeflectCount = 6,
	ProtegoDecayRate = 7,
	ProtegoDamageAdjustment = 8,
	ProtegoCooldownTime = 9,
	EDifficultyScale_MAX = 10
};

// Enum Phoenix.ECWCState
enum class ECWCState : uint8 {
	None = 0,
	CWCStart = 1,
	CWCUpdated = 2,
	ECWCState_MAX = 3
};

// Enum Phoenix.ENPC_PerceptionEventType
enum class ENPC_PerceptionEventType : uint8 {
	None = 0,
	Damage = 1,
	Death = 2,
	Sound = 3,
	Engaged = 4,
	Dead = 5,
	StealthDeath = 6,
	Collided = 7,
	MunitionHit = 8,
	MunitionFire = 9,
	Footfall = 10,
	CombatPlant = 11,
	ENPC_MAX = 12
};

// Enum Phoenix.ENPC_ManagerType
enum class ENPC_ManagerType : uint8 {
	None = 0,
	Enemy = 1,
	Student = 2,
	Companion = 3,
	Sidekick = 4,
	Dead = 5,
	Leader = 6,
	Duel = 7,
	AuthorityFig = 8,
	ENPC_MAX = 9
};

// Enum Phoenix.ENPC_AttackSelectionConditions
enum class ENPC_AttackSelectionConditions : uint8 {
	LongDistBump = 0,
	ShortDistBump = 1,
	ShieldBreaker = 2,
	CrowdControlEffect = 3,
	DamagePotential = 4,
	CurseApplier = 5,
	JuggleStarter = 6,
	JuggleContinuer = 7,
	JuggleEnder = 8,
	LargeCharacterInterrupter = 9,
	AOE = 10,
	Fire = 11,
	StupefyAdvancer = 12,
	StupefyEnder = 13,
	PlantPriorityBump = 14,
	Count = 15,
	ENPC_MAX = 16
};

// Enum Phoenix.ENPC_CombatThreatLevel
enum class ENPC_CombatThreatLevel : uint8 {
	Combat_ThreatLevel_None = 0,
	Combat_ThreatLevel_Low = 1,
	Combat_ThreatLevel_Medium = 2,
	Combat_ThreatLevel_High = 3,
	Combat_ThreatLevel_Extreme = 4,
	Combat_ThreatLevel_Boss = 5,
	Combat_ThreatLevel_Count = 6,
	Combat_ThreatLevel_MAX = 7
};

// Enum Phoenix.ENPC_TargetSelectionWeightData
enum class ENPC_TargetSelectionWeightData : uint8 {
	DistNearWeight = 0,
	DistFarWeight = 1,
	DistNear = 2,
	DistFar = 3,
	MaintainTargetWeight = 4,
	MaintainTargetFalloff = 5,
	TargetWeight = 6,
	LargeCharacterWeight = 7,
	NumAttackingMultWeight = 8,
	StayInWeight = 9,
	RecentlyAttackedByWeight = 10,
	RecentlyAttackedByFalloff = 11,
	RecentlyAttackedByPlayerWeight = 12,
	RecentlyAttackedByPlayerFalloff = 13,
	HighlightedByPlayerWeight = 14,
	AttackingWeight = 15,
	RecentlyAttackedTargetWeight = 16,
	RecentlyAttackedTargetFalloff = 17,
	RecentlyAttackedPlayerWeight = 18,
	RecentlyAttackedPlayerFalloff = 19,
	ReactingIncMultWeight = 20,
	ReactingTimePeak = 21,
	ReactingDecMultWeight = 22,
	InCCReactionWeight = 23,
	InKnockDownWeight = 24,
	InRagDollWeight = 25,
	InAirWeight = 26,
	InCriticalHealthWeight = 27,
	InNearDeathKneelingWeight = 28,
	ShielsOnWeight = 29,
	LevelMultWeight = 30,
	LevelMinWeight = 31,
	LevelMaxWeight = 32,
	HealthMultWeight = 33,
	HealthMinWeight = 34,
	HealthMaxWeight = 35,
	ThreatMultWeight = 36,
	ThreatMinWeight = 37,
	ThreatMaxWeight = 38,
	SpiderOnFireWeight = 39,
	InferiusOnFireWeight = 40,
	InferiusKamikazeWeight = 41,
	Count = 42,
	ENPC_MAX = 43
};

// Enum Phoenix.ENPC_SelectionStates
enum class ENPC_SelectionStates : uint8 {
	None = 0,
	Arrested = 1,
	Attacking = 2,
	Confounded = 3,
	Crucioed = 4,
	Cursed = 5,
	DistanceHigh = 6,
	DistanceMed = 7,
	DistanceLow = 8,
	Enchanted = 9,
	Enraged = 10,
	Flying = 11,
	Frozen = 12,
	HealthHigh = 13,
	HealthMed = 14,
	HealthLow = 15,
	HealthCritical = 16,
	Imperiused = 17,
	InAir = 18,
	InCCReaction = 19,
	InKnockDown = 20,
	InRadiusHigh = 21,
	InRadiusMed = 22,
	InRadiusLow = 23,
	InRagDoll = 24,
	InReaction = 25,
	InReactionMax = 26,
	InReactionLong = 27,
	InReactionMed = 28,
	InReactionShort = 29,
	IsInferi = 30,
	IsSpider = 31,
	IsSpiderCrit = 32,
	LargeCharacter = 33,
	Levitated = 34,
	NotCursed = 35,
	NotInReaction = 36,
	OnFire = 37,
	OnGround = 38,
	Petrified = 39,
	RemainingHigh = 40,
	RemainingMed = 41,
	RemainingLow = 42,
	Shielding = 43,
	Stupefy1 = 44,
	Stupefy2 = 45,
	Stupefy3 = 46,
	Stupefy4 = 47,
	Swimming = 48,
	ThreatMax = 49,
	ThreatHigh = 50,
	ThreatMed = 51,
	ThreatLow = 52,
	HitsTaken = 53,
	TimeSinceLastAction = 54,
	RecentlyAttackedByPlayer = 55,
	HighLightedByPlayer = 56,
	RecentlyAttackedPlayer = 57,
	InNearDeathKneeling = 58,
	SpiderOnFire = 59,
	InferiusOnFire = 60,
	InferiusKamikaze = 61,
	Count = 62,
	ENPC_MAX = 63
};

// Enum Phoenix.EObjectPropertyType
enum class EObjectPropertyType : uint8 {
	Animate = 0,
	Inanimate = 1,
	Plant = 2,
	Dead = 3,
	Water = 4,
	EObjectPropertyType_MAX = 5
};

// Enum Phoenix.EOppugnoState
enum class EOppugnoState : uint8 {
	Inactive = 0,
	Wait = 1,
	Pull = 2,
	Hold = 3,
	ThrowWait = 4,
	Throw = 5,
	EndWait = 6,
	End = 7,
	EOppugnoState_MAX = 8
};

// Enum Phoenix.EHelperState
enum class EHelperState : uint8 {
	IDLE = 0,
	START = 1,
	DEPLOY = 2,
	DEPLOY_TURN = 3,
	RUN = 4,
	ATTRACT = 5,
	POP_OUT = 6,
	END = 7,
	EHelperState_MAX = 8
};

// Enum Phoenix.EHogwartsNavmeshID
enum class EHogwartsNavmeshID : uint8 {
	Hogwarts_Navmesh_A = 0,
	Hogwarts_Navmesh_B = 1,
	Hogwarts_Navmesh_Count = 2,
	Hogwarts_Navmesh_MAX = 3
};

// Enum Phoenix.EPathTargetType
enum class EPathTargetType : uint8 {
	PATH_TARGET_NONE = 0,
	PATH_TARGET_STATIC = 1,
	PATH_TARGET_DYNAMIC = 2,
	PATH_TARGET_BEACON = 3,
	PATH_TARGET_WAYPOINT = 4,
	PATH_TARGET_MAX = 5
};

// Enum Phoenix.EPathNodeSpeed
enum class EPathNodeSpeed : uint8 {
	Stopped = 0,
	SlowWalk = 1,
	Walk = 2,
	Jog = 3,
	Sprint = 4,
	Custom = 5,
	EPathNodeSpeed_MAX = 6
};

// Enum Phoenix.EPerformTaskContainerType
enum class EPerformTaskContainerType : uint8 {
	LeadingPlayer = 0,
	EnemyPatrol = 1,
	Custom = 2,
	EPerformTaskContainerType_MAX = 3
};

// Enum Phoenix.EPerformTaskSplineTypes
enum class EPerformTaskSplineTypes : uint8 {
	SlowWalk = 0,
	Walk = 1,
	Jog = 2,
	EPerformTaskSplineTypes_MAX = 3
};

// Enum Phoenix.EPerformTaskFinishAction
enum class EPerformTaskFinishAction : uint8 {
	ReturnToActivity = 0,
	StopAndWait = 1,
	ContinueTaskWhenCancelled = 2,
	EPerformTaskFinishAction_MAX = 3
};

// Enum Phoenix.EPerformTaskHogwarsExpressSettings
enum class EPerformTaskHogwarsExpressSettings : uint8 {
	Activate = 0,
	Deactivate = 1,
	EPerformTaskHogwarsExpressSettings_MAX = 2
};

// Enum Phoenix.EPerformTaskSpeedMode
enum class EPerformTaskSpeedMode : uint8 {
	Stopped = 0,
	SlowWalk = 1,
	Walk = 2,
	Jog = 3,
	MaxSpeedMode = 4,
	EPerformTaskSpeedMode_MAX = 5
};

// Enum Phoenix.EPerformTaskSceneRigSetting
enum class EPerformTaskSceneRigSetting : uint8 {
	Play = 0,
	Stop = 1,
	Persistent = 2,
	EPerformTaskSceneRigSetting_MAX = 3
};

// Enum Phoenix.EPerformTaskSetting
enum class EPerformTaskSetting : uint8 {
	Set = 0,
	Clear = 1,
	EPerformTaskSetting_MAX = 2
};

// Enum Phoenix.EPerformTaskCombatMode
enum class EPerformTaskCombatMode : uint8 {
	Normal = 0,
	Protector = 1,
	Custom = 2,
	DuelOpponent = 3,
	FightClubOpponent = 4,
	Aggressor = 5,
	GroupAggressor = 6,
	EPerformTaskCombatMode_MAX = 7
};

// Enum Phoenix.EPerformTasksChannelingSpell
enum class EPerformTasksChannelingSpell : uint8 {
	Lumos = 0,
	Protego = 1,
	Disillusionment = 2,
	EPerformTasksChannelingSpell_MAX = 3
};

// Enum Phoenix.EPerformTasksSpell
enum class EPerformTasksSpell : uint8 {
	Reparo = 0,
	Confringo = 1,
	Custom = 2,
	EPerformTasksSpell_MAX = 3
};

// Enum Phoenix.EPerkState
enum class EPerkState : uint8 {
	PERK_UNAVAILABLE = 0,
	PERK_AVAILABLE = 1,
	PERK_PURCHASED = 2,
	PERK_UPGRADE_UNAVAILABLE = 3,
	PERK_MAX = 4
};

// Enum Phoenix.EBreakableState
enum class EBreakableState : uint8 {
	Inactive = 0,
	Unbroken = 1,
	Broken = 2,
	EBreakableState_MAX = 3
};

// Enum Phoenix.EGamepadType
enum class EGamepadType : uint8 {
	Gamepad_XboxOne = 0,
	Gamepad_PS4 = 1,
	Gamepad_PS5 = 2,
	Gamepad_Switch = 3,
	Gamepad_Steam = 4,
	Gamepad_Misc = 0,
	Gamepad_MAX = 5
};

// Enum Phoenix.EPhoenixControlMode
enum class EPhoenixControlMode : uint8 {
	Player = 0,
	HoverDrone = 1,
	MAX = 2
};

// Enum Phoenix.ELoadingScreenLocation
enum class ELoadingScreenLocation : uint8 {
	LSL_None = 0,
	LSL_Frontend = 1,
	LSL_Overland = 2,
	LSL_Hogwarts = 3,
	LSL_Hogsmeade = 4,
	LSL_Sanctuary = 5,
	LSL_Dungeon = 6,
	LSL_MAX = 7
};

// Enum Phoenix.EAutoSaveReason
enum class EAutoSaveReason : uint8 {
	AUTO_SAVE_UNKNOWN = 0,
	AUTO_SAVE_MISSION = 1,
	AUTO_SAVE_TIMER = 2,
	AUTO_SAVE_ALWAYS = 3,
	AUTO_SAVE_GAME_MODE_START_PLAY = 4,
	AUTO_SAVE_INTRO = 5,
	AUTO_SAVE_TEST = 6,
	AUTO_SAVE_MAX = 7
};

// Enum Phoenix.ERespawnReason
enum class ERespawnReason : uint8 {
	None = 0,
	RespawnedFromDeath = 1,
	RespawnedFromFailure = 2,
	TraveledToDungeon = 3,
	TraveledFromDungeon = 4,
	FastTraveled = 5,
	StartedNewDay = 6,
	JogIntoScene = 7,
	WalkIntoScene = 8,
	IntrusionCaught = 9,
	DeathlyHallowsSpawn = 10,
	FastTraveledViaMission = 11,
	ERespawnReason_MAX = 12
};

// Enum Phoenix.ENvidiaLatencyMode
enum class ENvidiaLatencyMode : uint8 {
	Off = 0,
	LowLatency = 1,
	LowLatencyWithBoost = 2,
	ENvidiaLatencyMode_MAX = 3
};

// Enum Phoenix.EHighContrastGameplayNPCHint
enum class EHighContrastGameplayNPCHint : uint8 {
	Enemy = 0,
	Companion = 1,
	Friendly = 2,
	EHighContrastGameplayNPCHint_MAX = 3
};

// Enum Phoenix.EHighContrastDistanceType
enum class EHighContrastDistanceType : uint8 {
	Item = 0,
	Door = 1,
	Creature = 2,
	Mount = 3,
	Characters = 4,
	Infinity = 5,
	EHighContrastDistanceType_MAX = 6
};

// Enum Phoenix.EHighContrastGameplayNPCType
enum class EHighContrastGameplayNPCType : uint8 {
	Player = 0,
	LeadNPC = 1,
	Companion = 2,
	Friendly = 3,
	Enemy = 4,
	EHighContrastGameplayNPCType_MAX = 5
};

// Enum Phoenix.EHighContrastGameplayMarkup
enum class EHighContrastGameplayMarkup : uint8 {
	None = 0,
	Player = 1,
	Companion = 2,
	FriendlyNPC = 3,
	EnemyNPC = 4,
	Item = 5,
	Creature = 6,
	Mount = 7,
	RevelioItem = 8,
	RevelioImportant = 9,
	RevelioEnemy = 10,
	ShieldPurple = 11,
	ShieldOrange = 12,
	ShieldRed = 13,
	ShieldWhite = 14,
	ShieldBlue = 15,
	EHighContrastGameplayMarkup_MAX = 16
};

// Enum Phoenix.EFightClubResultsTypes
enum class EFightClubResultsTypes : uint8 {
	FC_Win = 0,
	FC_Lose = 1,
	FC_MAX = 2
};

// Enum Phoenix.EFightClubIntroTypes
enum class EFightClubIntroTypes : uint8 {
	FC_InitiateMatch = 0,
	FC_AdeptMatch = 1,
	FC_ChampionsMatch = 2,
	FC_MAX = 3
};

// Enum Phoenix.ENavAreaFlag
enum class ENavAreaFlag : uint8 {
	Default = 0,
	Jump = 1,
	Vertical = 2,
	Fall = 3,
	ENavAreaFlag_MAX = 4
};

// Enum Phoenix.ENotificationCategory
enum class ENotificationCategory : uint8 {
	NotificationCategory_Celebration = 0,
	NotificationCategory_CelebrationMed = 1,
	NotificationCategory_MissionBanner = 2,
	NotificationCategory_MissionStep = 3,
	NotificationCategory_LevelUp = 4,
	NotificationCategory_Pickups = 5,
	NotificationCategory_Knowledge = 6,
	NotificationCategory_OwlMail = 7,
	NotificationCategory_XP = 8,
	NotificationCategory_SmallText = 9,
	NotificationCategory_All = 10,
	NotificationCategory_MAX = 11
};

// Enum Phoenix.EPhoenixScalabilityPlatform
enum class EPhoenixScalabilityPlatform : uint8 {
	Unknown = 0,
	PC = 1,
	PS4 = 2,
	PS5 = 3,
	Switch = 4,
	XBoxOne = 5,
	XSX = 6,
	EPhoenixScalabilityPlatform_MAX = 7
};

// Enum Phoenix.EPhoenixScalabilityLevel
enum class EPhoenixScalabilityLevel : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	EPhoenixScalabilityLevel_MAX = 5
};

// Enum Phoenix.EPhoenixScalabilityCategory
enum class EPhoenixScalabilityCategory : uint8 {
	ViewDistance = 0,
	AntiAliasing = 1,
	Shadow = 2,
	PostProcess = 3,
	Texture = 4,
	Effects = 5,
	Foliage = 6,
	Shading = 7,
	Volumetrics = 8,
	Sky = 9,
	Population = 10,
	EPhoenixScalabilityCategory_MAX = 11
};

// Enum Phoenix.ETrackingVolumeType
enum class ETrackingVolumeType : uint8 {
	None = 0,
	RandomEncounter = 1,
	EncounterExclusion = 2,
	Perception = 3,
	ForceAction = 4,
	ETrackingVolumeType_MAX = 5
};

// Enum Phoenix.EFacialAnimType
enum class EFacialAnimType : uint8 {
	FACIAL_ANIM_NONE = 0,
	FACIAL_ANIM_TALK = 1,
	FACIAL_ANIM_EAT = 2,
	FACIAL_ANIM_DRINK = 3,
	FACIAL_ANIM_LAUGH = 4,
	FACIAL_ANIM_CHEER = 5,
	FACIAL_ANIM_SLEEP = 6,
	FACIAL_ANIM_BUMPED = 7,
	FACIAL_ANIM_LISTEN = 8,
	FACIAL_ANIM_THINK = 9,
	FACIAL_ANIM_MAX = 10
};

// Enum Phoenix.EPhysicsSimLevelType
enum class EPhysicsSimLevelType : uint8 {
	Attacks = 0,
	Flying = 1,
	LODs = 2,
	Mechanics = 3,
	Misc = 4,
	Mounts = 5,
	Reactions = 6,
	Stations = 7,
	ClothAnimCurves = 8,
	EPhysicsSimLevelType_MAX = 9
};

// Enum Phoenix.EMountErrorMessages
enum class EMountErrorMessages : uint8 {
	Error_EnteringNoFlyZone = 0,
	Error_EnteringNoGroundZone = 1,
	Error_EnteringNoMountsZone = 2,
	Error_InsideNoDismountZone = 3,
	Error_SpeedUpUnavailable = 4,
	Error_LandingUnavailable = 5,
	Error_MAX = 6
};

// Enum Phoenix.EOrientToSlerpType
enum class EOrientToSlerpType : uint8 {
	Snap = 0,
	Velocity = 1,
	Filter = 2,
	Freeze = 3,
	EOrientToSlerpType_MAX = 4
};

// Enum Phoenix.EPointOfInterestState
enum class EPointOfInterestState : uint8 {
	Found = 0,
	Known = 1,
	Hidden = 2,
	EPointOfInterestState_MAX = 3
};

// Enum Phoenix.EPortraitPaintingEntitySource
enum class EPortraitPaintingEntitySource : uint8 {
	Unresolved = 0,
	FleshCacheCallback = 1,
	CustomizableCharacterCallBack = 2,
	CustomizableCharacterScan = 3,
	PopulationManager = 4,
	EPortraitPaintingEntitySource_MAX = 5
};

// Enum Phoenix.EUIQActionBarType
enum class EUIQActionBarType : uint8 {
	QuickAction_Spells = 0,
	QuickAction_Inventory = 1,
	QuickAction_None = 2,
	QuickAction_MAX = 3
};

// Enum Phoenix.ERaceType
enum class ERaceType : uint8 {
	TimeTrial = 0,
	RingSequence = 1,
	ERaceType_MAX = 2
};

// Enum Phoenix.EReticuleState
enum class EReticuleState : uint8 {
	RS_Unlocked = 0,
	RS_Locked = 1,
	RS_FinisherActive = 2,
	RS_FinisherFreeze = 3,
	RS_Fire = 4,
	RS_Idle = 5,
	RS_MAX = 6
};

// Enum Phoenix.ETimedAbilityRetriggerBehaviour
enum class ETimedAbilityRetriggerBehaviour : uint8 {
	Restart = 0,
	Delay_IgnoreActive = 1,
	Delay_ExtendActive = 2,
	Ignore = 3,
	ETimedAbilityRetriggerBehaviour_MAX = 4
};

// Enum Phoenix.ETimedAbilityUnit
enum class ETimedAbilityUnit : uint8 {
	Weeks = 0,
	Days = 1,
	Hours = 2,
	Minutes = 3,
	Seconds = 4,
	RealSeconds = 5,
	ETimedAbilityUnit_MAX = 6
};

// Enum Phoenix.HitTrackerTypes
enum class HitTrackerTypes : uint8 {
	Irrelevant = 0,
	NonConsecutiveDifferent = 1,
	NonConsecutiveSame = 2,
	ConsecutiveSame = 3,
	ConsecutiveDifferent = 4,
	HitTrackerTypes_MAX = 5
};

// Enum Phoenix.ELevelComparison
enum class ELevelComparison : uint8 {
	None = 0,
	MinimumDifference = 1,
	MaximumDifference = 2,
	WithinRangedOf = 3,
	OutsideRangeOf = 4,
	ELevelComparison_MAX = 5
};

// Enum Phoenix.ERPGModInputTags
enum class ERPGModInputTags : uint8 {
	XPLevel = 0,
	ItemEffectiveness = 1,
	OffenseStat = 2,
	DefenseStat = 3,
	CooldownStat = 4,
	StatDamageMultiplier = 5,
	StatDamageReduction = 6,
	StatCooldownReduction = 7,
	LastHealAmount = 8,
	PotionEffectCounter = 9,
	ComboFocusMultiplier = 10,
	NumTags = 11,
	ERPGModInputTags_MAX = 12
};

// Enum Phoenix.ERPGAbilityTag
enum class ERPGAbilityTag : uint8 {
	AccioUpgrade = 0,
	ArrestoMomentumUpgrade = 1,
	AvadaKedavraUpgrade = 2,
	BombardaAOE = 3,
	BombardaCooldown = 4,
	ConfringoProjectiles = 5,
	ConfundoTeammates = 6,
	CrucioHeals = 7,
	CrucioUpgrade = 8,
	DepulsoBounce = 9,
	DepulsoUpgrade = 10,
	DescendoAOE = 11,
	DiffindoUnblockable = 12,
	DiffindoUpgrade = 13,
	DisillusionmentMarking = 14,
	ExpelliarmusSpecialDisarm = 15,
	ExpelliarmusUpgrade = 16,
	FiendFyreUpgrade = 17,
	FlipendoCharged = 18,
	FlipendoUpgrade = 19,
	GlaciusAOE = 20,
	ImperiusAllyDamage = 21,
	IncendioProjectiles = 22,
	IncendioUpgrade = 23,
	LeviosoCharged = 24,
	LeviosoUpgrade = 25,
	LumosSpark = 26,
	OppugnoCharacters = 27,
	OppugnoUpgrade = 28,
	ParryUpgrade = 29,
	ProtegoAOE = 30,
	ProtegoDamageIncrease = 31,
	ProtegoPerfectUnblockable = 32,
	ProtegoPerfectReturn = 33,
	ProtegoFocus = 34,
	RevelioOccluded = 35,
	StupefyUpgrade = 36,
	StupefyPopup = 37,
	StupefyRicochet = 38,
	StupefyElderWand = 39,
	StealthTakedownUpgrade = 40,
	TransformationUpgrade = 41,
	CursedParry = 42,
	CompanionInfiltrationStealth = 43,
	AdditionalCompanion = 44,
	CompanionImmortal = 45,
	CanCriticalDamage = 46,
	ForceCritical = 47,
	LastKillWasShadowTakedown = 48,
	UI_Show_IncomingAttacks = 49,
	UI_Show_Beasts = 50,
	UI_Show_Forageables = 51,
	UI_Show_LawEnforcement = 52,
	Status_WellRested = 53,
	Status_Notorious = 54,
	Status_Renown = 55,
	Status_Infamous = 56,
	DeadlyToken = 57,
	KeepDeadlyToken = 58,
	MomentumToken = 59,
	TacticianToken = 60,
	RadiantAura = 61,
	DADA_Tactician3 = 62,
	DADA_Tactician4 = 63,
	IncreasedCursedAllyDamage = 64,
	DuelistProbing = 65,
	BreakBlockUnaware = 66,
	ShieldBreaker = 67,
	DA_UnlockTime = 68,
	DA_PickPocket1 = 69,
	DA_PickPocket2 = 70,
	DA_CanSellStolenItems = 71,
	DA_ShowObjectsValue = 72,
	Potion_Effect_Edurus = 73,
	Potion_Effect_Beautification = 74,
	Potion_Effect_Maxima = 75,
	Potion_Upgrade_EdurusRock = 76,
	Potion_Upgrade_TwisterMixtureUpgrade = 77,
	Potion_Upgrade_Thunderbrew = 78,
	HerbCapIncrease_2 = 79,
	HerbCapIncrease_3 = 80,
	HerbCapIncrease_4 = 81,
	CabbagePullAggro = 82,
	CabbageGroupBreaksShield = 83,
	VenomousTentaculaWeaken = 84,
	VenomousTentaculaAttackStupifyTarget = 85,
	MandrakeScreamIgnoreCompanions = 86,
	RecallPlantsAfterCombat = 87,
	SwapLowestHealthPlant = 88,
	VenomousTentaculaCanBite = 89,
	CabbagePerformDeathAttack = 90,
	MandrakeImpactAOE = 91,
	MarkLocks = 92,
	Beasts_AoeRecall = 93,
	Beasts_RecallBuff = 94,
	Beasts_BreakShield = 95,
	HighlightSneakOScopes = 96,
	StupefyDistraction = 97,
	ImprovedPolyjuice = 98,
	SHADOW_Blink1 = 99,
	SHADOW_Blink2 = 100,
	INF_Swift = 101,
	INF_Swifter = 102,
	Curses = 103,
	DAC_CurseBreak = 104,
	Talent_Core_OppugnoQuick = 105,
	Talent_Core_DodgeAM = 106,
	Talent_Core_DodgeFast = 107,
	Talent_Core_StupefyStun = 108,
	Talent_Infil_PetrificusTotalus = 109,
	Talent_Curse_CurseLong = 110,
	Talent_Sanc_Mandrake = 111,
	Talent_Sanc_Cabbage = 112,
	Talent_Sanc_Venomous = 113,
	Talent_Sanc_Maxima = 114,
	Talent_Sanc_Invisibility = 115,
	Talent_Sanc_AMPotion = 116,
	NumTags = 117,
	ERPGAbilityTag_MAX = 118
};

// Enum Phoenix.EValueComparison
enum class EValueComparison : uint8 {
	Less = 0,
	LessEqual = 1,
	Equal = 2,
	GreaterEqual = 3,
	Greater = 4,
	NotEqual = 5,
	EValueComparison_MAX = 6
};

// Enum Phoenix.ERPGEffect
enum class ERPGEffect : uint8 {
	None = 0,
	Damage_CriticalHit = 1,
	Potions_DoubleEffective = 2,
	ERPGEffect_MAX = 3
};

// Enum Phoenix.ESaveBlockReason
enum class ESaveBlockReason : uint8 {
	BLOCK_SAVE_UNKNOWN = 0,
	BLOCK_SAVE_PERFORMTASK = 1,
	BLOCK_SAVE_COMBAT = 2,
	BLOCK_SAVE_TUTORIAL = 3,
	BLOCK_SAVE_CINEMATIC = 4,
	BLOCK_SAVE_CONVERSATION = 5,
	BLOCK_SAVE_MOUNT = 6,
	BLOCK_SAVE_EXCLUSIVE_MISSION = 7,
	BLOCK_SAVE_DUNGEON = 8,
	BLOCK_SAVE_MAX = 9
};

// Enum Phoenix.EEmissiveAdaptationOverrideState
enum class EEmissiveAdaptationOverrideState : uint8 {
	Begin = 0,
	BlendIn = 1,
	One = 2,
	BlendOut = 3,
	Complete = 4,
	EEmissiveAdaptationOverrideState_MAX = 5
};

// Enum Phoenix.ESceneActionAdaptationSoftDisableMethod
enum class ESceneActionAdaptationSoftDisableMethod : uint8 {
	MinExposure = 0,
	AverageMinMaxExposure = 1,
	Zero = 2,
	NegativeTwenty = 3,
	ESceneActionAdaptationSoftDisableMethod_MAX = 4
};

// Enum Phoenix.ESceneActionAdaptationAffect
enum class ESceneActionAdaptationAffect : uint8 {
	Bloom = 0,
	AutoExposure = 1,
	Luminance = 2,
	ESceneActionAdaptationAffect_MAX = 3
};

// Enum Phoenix.EAnimateLightColorIntensityBlend
enum class EAnimateLightColorIntensityBlend : uint8 {
	Replace = 0,
	Multiply = 1,
	Additive = 2,
	EAnimateLightColorIntensityBlend_MAX = 3
};

// Enum Phoenix.EBasicLightType
enum class EBasicLightType : uint8 {
	Point = 0,
	Spot = 1,
	Rect = 2,
	EBasicLightType_MAX = 3
};

// Enum Phoenix.USceneAction_ResetClothSim_ClothingTeleportMode
enum class USceneAction_ResetClothSim_ClothingTeleportMode : uint8 {
	Teleport = 0,
	TeleportAndReset = 1,
	USceneAction_ResetClothSim_MAX = 2
};

// Enum Phoenix.ESceneAction_CreatureFlyingOption
enum class ESceneAction_CreatureFlyingOption : uint8 {
	StopFlying = 0,
	StartFlying = 1,
	ESceneAction_MAX = 2
};

// Enum Phoenix.EScheduleEnableDisable
enum class EScheduleEnableDisable : uint8 {
	Ignore = 0,
	Enable = 1,
	DisableAndAbandonStations = 2,
	DisableButStayInStation = 3,
	EScheduleEnableDisable_MAX = 4
};

// Enum Phoenix.ESceneRigRenderingCuts
enum class ESceneRigRenderingCuts : uint8 {
	Camera = 0,
	Exposure = 1,
	PreExposure = 2,
	Fog = 3,
	SkyLight = 4,
	AudioListener = 5,
	ESceneRigRenderingCuts_MAX = 6
};

// Enum Phoenix.EGlobalLightingSimpleFogZMode
enum class EGlobalLightingSimpleFogZMode : uint8 {
	OffsetOnly = 0,
	OffsetIsAbsolute = 1,
	CameraZ = 2,
	PlayerZ = 3,
	SceneRigTransform = 4,
	WorldBase = 5,
	EGlobalLightingSimpleFogZMode_MAX = 6
};

// Enum Phoenix.EHermesMessageAdvancedDynamicPayloadType
enum class EHermesMessageAdvancedDynamicPayloadType : uint8 {
	None = 0,
	Name = 1,
	Boolean = 2,
	Integer = 3,
	Scalar = 4,
	EHermesMessageAdvancedDynamicPayloadType_MAX = 5
};

// Enum Phoenix.EPIMTypes
enum class EPIMTypes : uint8 {
	PressAccept = 0,
	PressAndHoldAccept = 1,
	JoystickClockwise = 2,
	JoystickCounterClockwise = 3,
	JoystickSmileyFace = 4,
	JoystickWaggleLeftRight = 5,
	JoystickLeft = 6,
	JoystickRight = 7,
	JoystickUp = 8,
	JoystickDown = 9,
	TelescopeFocus = 10,
	SpellCast = 11,
	PressWildcardAction = 12,
	EPIMTypes_MAX = 13
};

// Enum Phoenix.EPlayerPerceptionEnableDisable
enum class EPlayerPerceptionEnableDisable : uint8 {
	Ignore = 0,
	Enable = 1,
	Disable = 2,
	EPlayerPerceptionEnableDisable_MAX = 3
};

// Enum Phoenix.EPlayForcedConversation_ConversationInitializationTime
enum class EPlayForcedConversation_ConversationInitializationTime : uint8 {
	WhenCreatingState = 0,
	WhenEnteringAction = 1,
	EPlayForcedConversation_MAX = 2
};

// Enum Phoenix.ECruiseSpeed
enum class ECruiseSpeed : uint8 {
	FastestMotion = 0,
	SlowestMotion = 1,
	AverageSpeed = 2,
	SpecifiedCruisingSpeed = 3,
	ECruiseSpeed_MAX = 4
};

// Enum Phoenix.EFeedbackAnim
enum class EFeedbackAnim : uint8 {
	ANIM_PULSE = 0,
	ANIM_ROTATE_CL = 1,
	ANIM_ROTATE_CCL = 2,
	ANIM_BACK_AND_FORTH = 3,
	ANIM_NONE = 4,
	ANIM_MAX = 5
};

// Enum Phoenix.ESpellButton
enum class ESpellButton : uint8 {
	SPELL_TOP = 0,
	SPELL_BOTTOM = 1,
	SPELL_LEFT = 2,
	SPELL_RIGHT = 3,
	SPELL_MAX = 4
};

// Enum Phoenix.StoryType
enum class StoryType : uint8 {
	STATION_STORY = 0,
	GHOST_STORY = 1,
	StoryType_MAX = 2
};

// Enum Phoenix.StoryParticipantState
enum class StoryParticipantState : uint8 {
	PARTICIPANT_ADDED = 0,
	PARTICIPANT_ARRIVED = 1,
	PARTICIPANT_ENTERED = 2,
	PARTICIPANT_EXITING = 3,
	PARTICIPANT_KICKED = 4,
	PARTICIPANT_EXITED = 5,
	PARTICIPANT_MAX = 6
};

// Enum Phoenix.SceneRigStoryState
enum class SceneRigStoryState : uint8 {
	STORY_NEW = 0,
	STORY_QUEUED = 1,
	STORY_MARKED_FOR_TRANSITION = 2,
	STORY_TRANSITIONING_OUT = 3,
	STORY_ACTIVE = 4,
	STORY_READY_TO_TRANSITION = 5,
	STORY_ENDED = 6,
	STORY_DELETE = 7,
	STORY_STATE_COUNT = 8,
	STORY_MAX = 9
};

// Enum Phoenix.EForcedShutDownPriority
enum class EForcedShutDownPriority : uint8 {
	None = 0,
	ConversationPriority = 1,
	StationPriority = 2,
	CinematicPriority = 3,
	HideTriggerPriority = 4,
	EForcedShutDownPriority_MAX = 5
};

// Enum Phoenix.EForcedNavigationMode
enum class EForcedNavigationMode : uint8 {
	None = 0,
	FreezeNavigation = 1,
	AsyncPathNavigation = 2,
	EForcedNavigationMode_MAX = 3
};

// Enum Phoenix.EForcedShutDownMode
enum class EForcedShutDownMode : uint8 {
	None = 0,
	NoForcedShutDownAllowed = 1,
	ForcedHiddenRenderShutdDown = 2,
	ForcedRenderShutDown = 3,
	ForcedHiddenFleshCacheShutDown = 4,
	ForcedFleshCacheShutDown = 5,
	ForcedAllowRenderShutDown = 6,
	EForcedShutDownMode_MAX = 7
};

// Enum Phoenix.ESynchronizeMethod
enum class ESynchronizeMethod : uint8 {
	Synchronize_None = 0,
	Synchronize_Location = 1,
	Synchronize_Schedule = 2,
	Synchronize_LocationAndSchedule = 3,
	Synchronize_ReleaseCustomT3 = 4,
	Synchronize_MAX = 5
};

// Enum Phoenix.ESpeedOverridePriority
enum class ESpeedOverridePriority : uint8 {
	ScheduledEntityPriority = 0,
	SplineWalkerPriority = 1,
	PerformTaskPriority = 2,
	PerformTaskForAIPriority = 3,
	GhostStoryPriority = 4,
	CrimeSystemPriority = 5,
	ForcedNavigationPriority = 6,
	WalkToStationPriority = 7,
	ApparatePriority = 8,
	ESpeedOverridePriority_MAX = 9
};

// Enum Phoenix.ESEEnsureHighLODPriority
enum class ESEEnsureHighLODPriority : uint8 {
	Companion = 0,
	PassiveCinematic = 1,
	ActiveCinematic = 2,
	PerformTask = 3,
	Creature = 4,
	AuthorityFigure = 5,
	SeatFiller = 6,
	BroomFlight = 7,
	Apparate = 8,
	ESEEnsureHighLODPriority_MAX = 9
};

// Enum Phoenix.EVisibilityTimeWindowState
enum class EVisibilityTimeWindowState : uint8 {
	WithinTimeWindow = 0,
	OutSideTimeWindow = 1,
	WithinTimeWindowSpawn = 2,
	EVisibilityTimeWindowState_MAX = 3
};

// Enum Phoenix.EScheduleEntryType
enum class EScheduleEntryType : uint8 {
	type_static = 0,
	type_dynamic = 1,
	type_MAX = 2
};

// Enum Phoenix.EActivityTypeBits
enum class EActivityTypeBits : int32 {
	ACTIVITY_BIT_NONE = 0,
	ACTIVITY_BIT_MISSION = 1,
	ACTIVITY_BIT_MISSION_CRITICAL = 2,
	ACTIVITY_BIT_EXCURSION = 4,
	ACTIVITY_BIT_HOBO = 8,
	ACTIVITY_BIT_INVESTIGATION = 16,
	ACTIVITY_BIT_PERFORM_TASK = 32,
	ACTIVITY_BIT_PERFORM_TASK_MOVETOLOCATION = 64,
	ACTIVITY_BIT_PERFORM_TASK_MOVETOSTATION = 128,
	ACTIVITY_BIT_PERFORM_TASK_WAITFORPLAYER = 256,
	ACTIVITY_BIT_PERFORM_TASK_CUSTOMNOLOCATIONTASK = 512,
	ACTIVITY_BIT_PERFORM_TASK_CUSTOMLOCATIONTASK = 1024,
	ACTIVITY_BIT_PERFORM_TASK_TELEPORTTOSTATION = 2048,
	ACTIVITY_BIT_PERFORM_TASK_TELEPORTCURTAINDOWN = 4096,
	ACTIVITY_BIT_PERFORM_TASK_FOLLOWACTOR = 8192,
	ACTIVITY_BIT_PERFORM_TASK_WAITFORTIME = 16384,
	ACTIVITY_BIT_PERFORM_TASK_NOP = 32768,
	ACTIVITY_BIT_HAIL = 65536,
	ACTIVITY_BIT_CLASS = 131072,
	ACTIVITY_BIT_PERFORM_TASK_APPARATEOUT = 262144,
	ACTIVITY_BIT_PERFORM_TASK_FOLLOWSCRIPTEDSPLINE = 524288,
	ACTIVITY_BIT_PERFORM_TASK_FOLLOWSPLINE = 1048576,
	ACTIVITY_BIT_WANDER_AND_VANISH = 2097152,
	ACTIVITY_BIT_WALK_AWAY_AND_RECYCLE = 2097152,
	ACTIVITY_BIT_MAX = 2097153
};

// Enum Phoenix.EScrollingWidgetMode
enum class EScrollingWidgetMode : uint8 {
	SCROLLING_WIDGET_MODE_NONE = 0,
	SCROLLING_WIDGET_MODE_ALWAYS_ON = 1,
	SCROLLING_WIDGET_MODE_ON_HOVER = 2,
	SCROLLING_WIDGET_MODE_IF_TRUNCATED = 3,
	SCROLLING_WIDGET_MODE_MAX = 4
};

// Enum Phoenix.EScrollingWidgetTypes
enum class EScrollingWidgetTypes : uint8 {
	SCROLLING_WIDGET_TYPE_NONE = 0,
	SCROLLING_WIDGET_TYPE_LEFT_TO_RIGHT = 1,
	SCROLLING_WIDGET_TYPE_RIGHT_TO_LEFT = 2,
	SCROLLING_WIDGET_TYPE_MAX = 3
};

// Enum Phoenix.ESeasonOverride
enum class ESeasonOverride : uint8 {
	SO_NONE = 0,
	SO_SPRING = 1,
	SO_FALL = 2,
	SO_WINTER = 3,
	SO_SUMMER = 4,
	SO_MAX = 5
};

// Enum Phoenix.ESimpleTopologyType
enum class ESimpleTopologyType : uint8 {
	Init = 0,
	PendingCompute = 1,
	Surface = 2,
	Interior = 3,
	EmptySpace = 4,
	Error = 5,
	ESimpleTopologyType_MAX = 6
};

// Enum Phoenix.ESlaveToSplineUpdateMode
enum class ESlaveToSplineUpdateMode : uint8 {
	Wrap = 0,
	PingPong = 1,
	Once = 2,
	Manual = 3,
	ESlaveToSplineUpdateMode_MAX = 4
};

// Enum Phoenix.ESMeshWidgetParticleEmitterType
enum class ESMeshWidgetParticleEmitterType : uint8 {
	Continuous = 0,
	Explode = 1,
	ESMeshWidgetParticleEmitterType_MAX = 2
};

// Enum Phoenix.ESocialCallOutDisplayChannel
enum class ESocialCallOutDisplayChannel : uint8 {
	SocialCapitalMovement = 0,
	StationSelection = 1,
	ScheduledGoal = 2,
	Name = 3,
	TravelGoalSite = 4,
	NUM_CHANNELS = 5,
	ESocialCallOutDisplayChannel_MAX = 6
};

// Enum Phoenix.ESocialCallOutDisplayMode
enum class ESocialCallOutDisplayMode : uint8 {
	None = 0,
	Name = 1,
	Stations = 2,
	SocialCapital = 3,
	Schedule = 4,
	All = 5,
	Travel = 6,
	ESocialCallOutDisplayMode_MAX = 7
};

// Enum Phoenix.ESpawnCameraActorType
enum class ESpawnCameraActorType : uint8 {
	StackCamera = 0,
	DefaultCamera = 1,
	ESpawnCameraActorType_MAX = 2
};

// Enum Phoenix.EGameEventLocation
enum class EGameEventLocation : uint8 {
	None = 0,
	Caster = 1,
	Impact = 2,
	Target = 3,
	Destination = 4,
	EGameEventLocation_MAX = 5
};

// Enum Phoenix.ESpellUpgrades
enum class ESpellUpgrades : uint8 {
	UpgradedMechanic = 0,
	Maxima = 1,
	IncrementLimitedCount = 2,
	AffectCharacters = 3,
	Unblockable = 4,
	BreakBlockUnaware = 5,
	BreakBlockPygmyPerk = 6,
	Curse = 7,
	WeakenNonLiftable = 8,
	Popup = 9,
	Projectiles = 10,
	IncreasedCharacterDuration = 11,
	AOE = 12,
	PerfectProtegoUnblockable = 13,
	ProtegoAOE = 14,
	ProtegoDamage = 15,
	ProtegoFocusGain = 16,
	CrucioHeals = 17,
	ImperiusAllyDamage = 18,
	BombardaCooldown = 19,
	ESpellUpgrades_MAX = 20
};

// Enum Phoenix.EEnemyShieldBreaker
enum class EEnemyShieldBreaker : uint8 {
	None = 0,
	TypeA_Breaker = 1,
	TypeB_Breaker = 2,
	TypeC_Breaker = 3,
	EEnemyShieldBreaker_MAX = 4
};

// Enum Phoenix.ELockLevel
enum class ELockLevel : uint8 {
	LockLevel1 = 0,
	LockLevel2 = 1,
	LockLevel3 = 2,
	ELockLevel_MAX = 3
};

// Enum Phoenix.EDeflectionType
enum class EDeflectionType : uint8 {
	Deflect_Block = 0,
	Deflect_Back = 1,
	Deflect_Object = 2,
	Deflect_Enemy = 3,
	Deflect_Random = 4,
	Deflect_MAX = 5
};

// Enum Phoenix.EBlockTiming
enum class EBlockTiming : uint8 {
	Block_Normal = 0,
	Block_Perfect = 1,
	Block_MAX = 2
};

// Enum Phoenix.ESpellState
enum class ESpellState : uint8 {
	Cast = 0,
	Success = 1,
	Charged = 2,
	Channeling = 3,
	Other = 4,
	ESpellState_MAX = 5
};

// Enum Phoenix.ESpiderTypeEnum
enum class ESpiderTypeEnum : uint8 {
	ST_Woodlouse = 0,
	ST_Venomous = 1,
	ST_Luminous = 2,
	ST_MAX = 3
};

// Enum Phoenix.EDisbandPriority
enum class EDisbandPriority : uint8 {
	LowestPriority = 0,
	PathUpdatePriority = 1,
	JoinFailurePriority = 2,
	ForcedRemovePriority = 3,
	RemoveSplinePriority = 4,
	EDisbandPriority_MAX = 5
};

// Enum Phoenix.EVolumeType
enum class EVolumeType : uint8 {
	None = 0,
	Box = 1,
	EVolumeType_MAX = 2
};

// Enum Phoenix.EStationSnapConnectionsToGround
enum class EStationSnapConnectionsToGround : uint8 {
	SCTG_UNKNOWN = 0,
	SCTG_NO = 1,
	SCTG_YES = 2,
	SCTG_MAX = 3
};

// Enum Phoenix.EStationPlayerInteractionPermissions
enum class EStationPlayerInteractionPermissions : uint8 {
	PIP_NEVER = 0,
	PIP_WHEN_OCCUPIED = 1,
	PIP_CONDITIONAL = 2,
	PIP_ALWAYS = 3,
	PIP_MAX = 4
};

// Enum Phoenix.EStationBreakableStates
enum class EStationBreakableStates : uint8 {
	Unbroken = 0,
	Broken = 1,
	Protected = 2,
	EStationBreakableStates_MAX = 3
};

// Enum Phoenix.EStationSetupFlags
enum class EStationSetupFlags : uint8 {
	DisallowParentProps = 0,
	Breakable = 1,
	NeedsServiceProvider = 2,
	EStationSetupFlags_MAX = 3
};

// Enum Phoenix.EAsyncAssetLoadState
enum class EAsyncAssetLoadState : uint8 {
	ASSETLOAD_NOT_REQUESTED = 0,
	ASSETLOAD_IN_PROGRESS = 1,
	ASSETLOAD_COMPLETED = 2,
	ASSETLOAD_MAX_STATES = 3,
	ASSETLOAD_MAX = 4
};

// Enum Phoenix.ESpawnedStationTypes
enum class ESpawnedStationTypes : uint8 {
	SPAWNED_STATION_TYPE_NONE = 0,
	SPAWNED_STATION_TYPE_WALKBY = 1,
	SPAWNED_STATION_TYPE_STOPCHAT = 2,
	SPAWNED_STATION_TYPE_MOVING_R = 3,
	SPAWNED_STATION_TYPE_MOVING_LR = 4,
	SPAWNED_STATION_TYPE_COUNT = 5,
	SPAWNED_STATION_TYPE_MAX = 6
};

// Enum Phoenix.EEnterExitAnimVariants
enum class EEnterExitAnimVariants : uint8 {
	ENTEREXITANIM_HUMAN_A = 0,
	ENTEREXITANIM_HUMAN_F = 1,
	ENTEREXITANIM_HUMAN_M = 2,
	ENTEREXITANIM_CHILD_F = 3,
	ENTEREXITANIM_CHILD_M = 4,
	ENTEREXITANIM_DEATHMINION_A = 5,
	ENTEREXITANIM_ELF_A = 6,
	ENTEREXITANIM_GOBLIN_A = 7,
	ENTEREXITANIM_TROLL_A = 8,
	ENTEREXITANIM_MAX = 9
};

// Enum Phoenix.ECollisionResponsePriority
enum class ECollisionResponsePriority : uint8 {
	Normal = 0,
	InStation = 1,
	CollisionResponse = 2,
	PerformTask = 3,
	Blueprint = 4,
	Cinematic = 5,
	Hidden = 6,
	ECollisionResponsePriority_MAX = 7
};

// Enum Phoenix.EStationSetupHouseAndGender
enum class EStationSetupHouseAndGender : uint8 {
	Random = 0,
	Female = 1,
	Male = 2,
	Gryffindor = 3,
	Slytherin = 4,
	Ravenclaw = 5,
	Hufflepuff = 6,
	EStationSetupHouseAndGender_MAX = 7
};

// Enum Phoenix.EStationDataType
enum class EStationDataType : uint8 {
	TYPE_OWNED = 0,
	TYPE_MANAGED = 1,
	TYPE_SITE = 2,
	TYPE_SPAWNED = 3,
	TYPE_PLAYER = 4,
	TYPE_PORTAL = 5,
	TYPE_FLUID = 6,
	TYPE_MAX = 7
};

// Enum Phoenix.ESexType
enum class ESexType : uint8 {
	type_male = 0,
	type_female = 1,
	type_MAX = 2
};

// Enum Phoenix.EStationStoryContent_ClipType
enum class EStationStoryContent_ClipType : uint8 {
	Enter = 0,
	TransitionIn = 1,
	Idle = 2,
	TransitionOut = 3,
	Exit = 4,
	EStationStoryContent_MAX = 5
};

// Enum Phoenix.EStoryEavesdropState
enum class EStoryEavesdropState : uint8 {
	EAV_STATE_NONE = 0,
	EAV_STATE_NOT_STARTED = 1,
	EAV_STATE_PLAYING = 2,
	EAV_STATE_FINISHED = 3,
	EAV_STATE_COUNT = 4,
	EAV_STATE_MAX = 5
};

// Enum Phoenix.EConversationImport
enum class EConversationImport : uint8 {
	ImportFromArticy = 0,
	DoNotImportFromArticy = 1,
	EConversationImport_MAX = 2
};

// Enum Phoenix.EConversationCameraFilterType
enum class EConversationCameraFilterType : uint8 {
	Disable = 0,
	FirstConversationCameraShot = 1,
	LastConversationCameraShot = 2,
	EndingCameraShotWithChoices = 3,
	EndingCameraShotBeforeEmbedded = 4,
	CameraShotDuringPause = 5,
	AllCameraShots = 6,
	EConversationCameraFilterType_MAX = 7
};

// Enum Phoenix.EStoryGraphCondition_PlayerHouse
enum class EStoryGraphCondition_PlayerHouse : uint8 {
	Gryffindor = 0,
	Hufflepuff = 1,
	Ravenclaw = 2,
	Slytherin = 3,
	EStoryGraphCondition_MAX = 4
};

// Enum Phoenix.EStreamingPlaceholderPriority
enum class EStreamingPlaceholderPriority : uint8 {
	HardLoad = 0,
	High = 1,
	Normal = 2,
	EStreamingPlaceholderPriority_MAX = 3
};

// Enum Phoenix.SocialCapitalChangeReasons
enum class SocialCapitalChangeReasons : uint8 {
	SOCAP_CHANGE_DEBUG = 0,
	SOCAP_CHANGE_MISSION = 1,
	SOCAP_CHANGE_KNOWLEDGE = 2,
	SOCAP_CHANGE_SOCIALACTION = 3,
	SOCAP_CHANGE_SOCIALSTATUS = 4,
	SOCAP_CHANGE_CONVERSATION = 5,
	SOCAP_CHANGE_FACTIONSTATUS = 6,
	SOCAP_CHANGE_COUNT = 7,
	SOCAP_CHANGE_MAX = 8
};

// Enum Phoenix.EFadeState
enum class EFadeState : uint8 {
	FadingIn = 0,
	FadingOut = 1,
	EFadeState_MAX = 2
};

// Enum Phoenix.ETrainType
enum class ETrainType : uint8 {
	TRAIN_ENGINE = 0,
	TRAIN_COAL = 1,
	TRAIN_CARRIAGE = 2,
	MAX = 3
};

// Enum Phoenix.ETrainSplineDirection
enum class ETrainSplineDirection : uint8 {
	INCREMENTING_NORTH = 0,
	INCREMENTING_SOUTH = 1,
	INCREMENTING_MAX = 2
};

// Enum Phoenix.ETransfigurationInitialColor
enum class ETransfigurationInitialColor : uint8 {
	Default = 0,
	AlwaysDefaultColor = 1,
	FromPlayersHouse = 2,
	ETransfigurationInitialColor_MAX = 3
};

// Enum Phoenix.ETransfigurationPlacementError
enum class ETransfigurationPlacementError : uint8 {
	NoError = 0,
	NotOnSurface = 1,
	NotInPlayableSpace = 2,
	SpaceOccupied = 3,
	ETransfigurationPlacementError_MAX = 4
};

// Enum Phoenix.EConjurationContext
enum class EConjurationContext : uint8 {
	None = 0,
	Sanctuary = 1,
	Biome_Coastal = 2,
	Biome_Forest = 3,
	Biome_Grassland = 4,
	Biome_Swamp = 5,
	Biome_Tundra = 6,
	DevCustomRoom = 7,
	EConjurationContext_MAX = 8
};

// Enum Phoenix.ETransfigurationActionFlags
enum class ETransfigurationActionFlags : uint8 {
	DUMMY = 0,
	Conjuration = 1,
	Transformation = 2,
	Levitation = 4,
	Vanishment = 8,
	Colovaria = 16,
	Scaling = 32,
	Rotation = 64,
	ETransfigurationActionFlags_MAX = 65
};

// Enum Phoenix.ETransfigurationUnlockType
enum class ETransfigurationUnlockType : uint8 {
	Unknown = 0,
	UnknownCurrentlyUnlocked = 1,
	AlwaysUnlocked = 2,
	Vendor = 3,
	CurriculumReward = 4,
	MissionReward = 5,
	Challenge = 6,
	LootDrop = 7,
	Product = 8,
	ETransfigurationUnlockType_MAX = 9
};

// Enum Phoenix.EConversationTransformType
enum class EConversationTransformType : uint8 {
	Initial = 0,
	InitialAvatarRoot = 1,
	FinalInteractionActorRoot = 2,
	Final = 3,
	EConversationTransformType_MAX = 4
};

// Enum Phoenix.ETransformationScale
enum class ETransformationScale : uint8 {
	Small = 0,
	Default = 1,
	Large = 2,
	ETransformationScale_MAX = 3
};

// Enum Phoenix.ETutorialPersistence
enum class ETutorialPersistence : uint8 {
	Tutorial_Persistence_Restart = 0,
	Tutorial_Persistence_Ignore = 1,
	Tutorial_Persistence_MAX = 2
};

// Enum Phoenix.ETutorialTransparency
enum class ETutorialTransparency : uint8 {
	Tutorial_Transparency_Translucent = 0,
	Tutorial_Transparency_Opaque = 1,
	Tutorial_Transparency_MAX = 2
};

// Enum Phoenix.ETutorialPosition
enum class ETutorialPosition : uint8 {
	Tutorial_TopLeft = 0,
	Tutorial_TopCenter = 1,
	Tutorial_TopRight = 2,
	Tutorial_MiddleLeft = 3,
	Tutorial_MiddleCenter = 4,
	Tutorial_MiddleRight = 5,
	Tutorial_BottomLeft = 6,
	Tutorial_BottomCenter = 7,
	Tutorial_BottomRight = 8,
	Tutorial_CustomLocation = 9,
	Tutorial_MAX = 10
};

// Enum Phoenix.ETutorialState
enum class ETutorialState : uint8 {
	TS_Queued = 0,
	TS_Loading = 1,
	TS_Active = 2,
	TS_MAX = 3
};

// Enum Phoenix.EEasingFunction
enum class EEasingFunction : uint8 {
	EF_None = 0,
	EF_Back_In = 1,
	EF_Back_Out = 2,
	EF_Back_InOut = 3,
	EF_Bounce_In = 4,
	EF_Bounce_Out = 5,
	EF_Bounce_InOut = 6,
	EF_Circ_In = 7,
	EF_Circ_Out = 8,
	EF_Circ_InOut = 9,
	EF_Cubic_In = 10,
	EF_Cubic_Out = 11,
	EF_Cubic_InOut = 12,
	EF_Elastic_In = 13,
	EF_Elastic_Out = 14,
	EF_Elastic_InOut = 15,
	EF_Expo_In = 16,
	EF_Expo_Out = 17,
	EF_Expo_InOut = 18,
	EF_Linear_In = 19,
	EF_Linear_Out = 20,
	EF_Linear_InOut = 21,
	EF_Quad_In = 22,
	EF_Quad_Out = 23,
	EF_Quad_InOut = 24,
	EF_Quart_In = 25,
	EF_Quart_Out = 26,
	EF_Quart_InOut = 27,
	EF_Quint_In = 28,
	EF_Quint_Out = 29,
	EF_Quint_InOut = 30,
	EF_MAX = 31
};

// Enum Phoenix.ETransformProperty
enum class ETransformProperty : uint8 {
	TP_Translation = 0,
	TP_Scale = 1,
	TP_Shear = 2,
	TP_Angle = 3,
	TP_MAX = 4
};

// Enum Phoenix.EFactSheetType
enum class EFactSheetType : uint8 {
	Person = 0,
	Beast = 1,
	Plant = 2,
	Potion = 3,
	EFactSheetType_MAX = 4
};

// Enum Phoenix.EAccessibilityAudioCueEventType
enum class EAccessibilityAudioCueEventType : uint8 {
	ACCESSIBILITY_EVENT_TYPE_INTERACT = 0,
	ACCESSIBILITY_EVENT_TYPE_FOOTSTEPS = 1,
	ACCESSIBILITY_EVENT_TYPE_SPELLCASTER = 2,
	ACCESSIBILITY_EVENT_TYPE_ALERT = 3,
	ACCESSIBILITY_EVENT_TYPE_BEAST_ROAR = 4,
	ACCESSIBILITY_EVENT_TYPE_DESTRUCTIBLE = 5,
	ACCESSIBILITY_EVENT_TYPE_RUNNING_WATER = 6,
	ACCESSIBILITY_EVENT_TYPE_DOOR_OPENCLOSE = 7,
	ACCESSIBILITY_EVENT_TYPE_SHOW_NEGATIVE_INTERACTIONS = 8,
	ACCESSIBILITY_EVENT_TYPE_BROOM = 9,
	ACCESSIBILITY_EVENT_TYPE_LOOT = 10,
	ACCESSIBILITY_EVENT_TYPE_BEAST_AWARE = 11,
	ACCESSIBILITY_EVENT_TYPE_HIT = 12,
	ACCESSIBILITY_EVENT_TYPE_AMBIENT_CONVERSATION = 13,
	ACCESSIBILITY_EVENT_TYPE_STEALTH_DETECTED = 14,
	ACCESSIBILITY_EVENT_TYPE_REVELIO_BELL = 15,
	ACCESSIBILITY_EVENT_TYPE_NONE = 16,
	ACCESSIBILITY_EVENT_TYPE_MAX = 17
};

// Enum Phoenix.EAccessibilityAudioCueMode
enum class EAccessibilityAudioCueMode : uint8 {
	ACCESSIBILITY_EVENT_MODE_ONE_SHOT = 0,
	ACCESSIBILITY_EVENT_MODE_ENTER = 1,
	ACCESSIBILITY_EVENT_MODE_LEAVE = 2,
	ACCESSIBILITY_EVENT_MODE_MAX = 3
};

// Enum Phoenix.EUIAsyncLoadPriority
enum class EUIAsyncLoadPriority : uint8 {
	LoadingPriority_Low = 0,
	LoadingPriority_Normal = 1,
	LoadingPriority_AboveNormal = 2,
	LoadingPriority_High = 3,
	LoadingPriority_Critical = 4,
	LoadingPriority_MAX = 5
};

// Enum Phoenix.EUIPlatformInputDevice
enum class EUIPlatformInputDevice : uint8 {
	UIPID_PS4 = 0,
	UIPID_XBOne = 1,
	UIPID_PS5 = 2,
	UIPID_XSX = 3,
	UIPID_Switch = 4,
	UIPID_PC = 5,
	UIPID_MAX = 6
};

// Enum Phoenix.EFactsheetButtonState
enum class EFactsheetButtonState : uint8 {
	FS_NONE = 0,
	FS_UNKNOWN = 1,
	FS_QUERY = 2,
	FS_REDIRECT = 3,
	FS_KNOWN = 4,
	FS_MAX = 5
};

// Enum Phoenix.EUIDisplayMode
enum class EUIDisplayMode : uint8 {
	UI_Viewing = 0,
	UI_Selling = 1,
	UI_Gifting = 2,
	UI_Finding = 3,
	UI_Transfer = 4,
	UI_AddAction = 5,
	UI_Curriculum = 6,
	UI_None = 7,
	UI_MAX = 8
};

// Enum Phoenix.EFactRarity
enum class EFactRarity : uint8 {
	F_Common = 0,
	F_Uncommon = 1,
	F_Rare = 2,
	F_Mythic = 3,
	F_MAX = 4
};

// Enum Phoenix.EUIFactsheetMode
enum class EUIFactsheetMode : uint8 {
	UI_Compendium = 0,
	UI_Book = 1,
	UI_Person = 2,
	UI_MAX = 3
};

// Enum Phoenix.EFieldGuideExitStates
enum class EFieldGuideExitStates : uint8 {
	FIELD_GUIDE_EXIT_STATE_NONE = 0,
	FIELD_GUIDE_EXIT_STATE_FADING_IN = 1,
	FIELD_GUIDE_EXIT_STATE_FADING_OUT = 2,
	FIELD_GUIDE_EXIT_STATE_SPIN_ON_BLANK = 3,
	FIELD_GUIDE_EXIT_STATE_DELAY = 4,
	FIELD_GUIDE_EXIT_STATE_UNLOAD_FIELD_GUIDE = 5,
	FIELD_GUIDE_EXIT_STATE_NO_FADE = 6,
	FIELD_GUIDE_EXIT_STATE_RESTART_FROM_LAST_SAVE = 7,
	FIELD_GUIDE_EXIT_STATE_LOAD_GAME = 8,
	FIELD_GUIDE_EXIT_STATE_EXIT_TO_MAIN = 9,
	FIELD_GUIDE_EXIT_STATE_EXIT_TO_MAIN_GAME_OVER = 10,
	FIELD_GUIDE_EXIT_STATE_HOVER_DRONE = 11,
	FIELD_GUIDE_EXIT_STATE_FAST_TRAVEL_FROM_MAP = 12,
	FIELD_GUIDE_EXIT_STATE_FAST_TRAVEL_FROM_IMGUI = 13,
	FIELD_GUIDE_EXIT_STATE_ABANDON_QUEST_FROM_QUEST_LOG = 14,
	FIELD_GUIDE_EXIT_STATE_ABANDON_QUEST_FROM_GAME_OVER = 15,
	FIELD_GUIDE_EXIT_STATE_HOLD_FADE = 16,
	FIELD_GUIDE_EXIT_STATE_MAX = 17
};

// Enum Phoenix.EFieldGuideExitReasons
enum class EFieldGuideExitReasons : uint8 {
	FIELD_GUIDE_EXIT_REASON_NONE = 0,
	FIELD_GUIDE_EXIT_REASON_BACK_TO_GAME = 1,
	FIELD_GUIDE_EXIT_REASON_BACK_TO_GAME_FROM_MAP = 2,
	FIELD_GUIDE_EXIT_REASON_LOAD_GAME = 3,
	FIELD_GUIDE_EXIT_REASON_RESTART_FROM_LAST_SAVE = 4,
	FIELD_GUIDE_EXIT_REASON_EXIT_TO_MAIN = 5,
	FIELD_GUIDE_EXIT_REASON_EXIT_TO_MAIN_GAME_OVER = 6,
	FIELD_GUIDE_EXIT_REASON_QUIT_GAME = 7,
	FIELD_GUIDE_EXIT_REASON_FAST_TRAVEL_FROM_MAP = 8,
	FIELD_GUIDE_EXIT_REASON_HOVER_DRONE = 9,
	FIELD_GUIDE_EXIT_REASON_FAST_TRAVEL_FROM_IMGUI = 10,
	FIELD_GUIDE_EXIT_REASON_ABANDON_QUEST_FROM_QUEST_LOG = 11,
	FIELD_GUIDE_EXIT_REASON_ABANDON_QUEST_FROM_GAME_OVER = 12,
	FIELD_GUIDE_EXIT_REASON_MAX = 13
};

// Enum Phoenix.EAccountLinkStatus
enum class EAccountLinkStatus : uint8 {
	NoOnlineConnection = 0,
	LocalOnlyProfile = 1,
	NoLink = 2,
	WBPNLoggedIn = 3,
	WBPNCompleted = 4,
	WWIDLinked = 5,
	EAccountLinkStatus_MAX = 6
};

// Enum Phoenix.ELoginResponse
enum class ELoginResponse : uint8 {
	SuccessNoWWID = 0,
	SuccessAndWWID = 1,
	Incomplete = 2,
	SilentFailure = 3,
	Invalid = 4,
	Failure = 5,
	ELoginResponse_MAX = 6
};

// Enum Phoenix.EVanishmentEventType
enum class EVanishmentEventType : uint8 {
	Instant = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	TopToBottom = 3,
	HorizontallyOutward = 4,
	EVanishmentEventType_MAX = 5
};

// Enum Phoenix.EUpscaleMode
enum class EUpscaleMode : uint8 {
	None = 0,
	DLSS_Off = 1,
	DLSS_Auto = 2,
	DLSS_UltraPerformance = 3,
	DLSS_Performance = 4,
	DLSS_Balanced = 5,
	DLSS_Quality = 6,
	DLSS_UltraQuality = 7,
	AMD_FSR_Performance = 8,
	AMD_FSR_Balanced = 9,
	AMD_FSR_Quality = 10,
	AMD_FSR_UltraQuality = 11,
	NIS_Performance = 12,
	NIS_Balanced = 13,
	NIS_Quality = 14,
	NIS_UltraQuality = 15,
	AMD_FSR2_UltraPerformance = 16,
	AMD_FSR2_Performance = 17,
	AMD_FSR2_Balanced = 18,
	AMD_FSR2_Quality = 19,
	Intel_XeSS_Performance = 20,
	Intel_XeSS_Balanced = 21,
	Intel_XeSS_Quality = 22,
	Intel_XeSS_UltraQuality = 23,
	DLSS_Min = 1,
	DLSS_Max = 7,
	AMD_FSR_Min = 8,
	AMD_FSR_Max = 11,
	NIS_Min = 12,
	NIS_Max = 15,
	AMD_FSR2_Min = 16,
	AMD_FSR2_Max = 19,
	Intel_XeSS_Min = 20,
	Intel_XeSS_Max = 23,
	EUpscaleMode_MAX = 24
};

// Enum Phoenix.EUpscaleBrand
enum class EUpscaleBrand : uint8 {
	None = 0,
	DLSS = 1,
	FSR = 2,
	NIS = 3,
	FSR2 = 4,
	XeSS = 5,
	EUpscaleBrand_MAX = 6
};

// Enum Phoenix.EAntiAliasingMode
enum class EAntiAliasingMode : uint8 {
	TAA_Low = 0,
	TAA_High = 1,
	Nvidia_DLAA = 2,
	EAntiAliasingMode_MAX = 3
};

// Enum Phoenix.EVCType
enum class EVCType : uint8 {
	ITEM = 0,
	LOCK = 1,
	UNKNOWN = 2,
	EVCType_MAX = 3
};

// Enum Phoenix.EWandLinkMiniGameType
enum class EWandLinkMiniGameType : uint8 {
	StickAndButton = 0,
	ButtonMash = 1,
	NewButtonMash = 2,
	EWandLinkMiniGameType_MAX = 3
};

// Enum Phoenix.EWandLinkState
enum class EWandLinkState : uint8 {
	None = 0,
	Start = 1,
	Defend = 2,
	ProtagonistSurge = 3,
	AntagonistSurge = 4,
	EWandLinkState_MAX = 5
};

// Enum Phoenix.EWandLinkInputType
enum class EWandLinkInputType : uint8 {
	LeftShoulderButton = 0,
	RightShoulderButton = 1,
	LeftTriggerButton = 2,
	RightTriggerButton = 3,
	LeftAndRightShoulderButton = 4,
	LeftAndRightTriggerButton = 5,
	RandomWingButton = 6,
	LeftFaceButton = 7,
	TopFaceButton = 8,
	RightFaceButton = 9,
	BottomFaceButton = 10,
	RandomFaceButton = 11,
	EWandLinkInputType_MAX = 12
};

// Enum Phoenix.EWaterVfx
enum class EWaterVfx : uint8 {
	EnterWater = 0,
	Floating = 1,
	ExitWater = 2,
	Count = 3,
	EWaterVfx_MAX = 4
};

// Enum Phoenix.EWingardiumState
enum class EWingardiumState : uint8 {
	Inactive = 0,
	Rise = 1,
	MoveObject = 2,
	End = 3,
	EWingardiumState_MAX = 4
};

// Enum Phoenix.ELocatorState
enum class ELocatorState : uint8 {
	WaitingToSpawn = 0,
	FailedToSpawn = 1,
	ActiveEvent = 2,
	StreamWithLevel = 3,
	Completed = 4,
	ELocatorState_MAX = 5
};

// Enum Phoenix.EWorldFXRulesMoonPhase
enum class EWorldFXRulesMoonPhase : uint8 {
	NewMoon = 0,
	WaxingCrescent = 1,
	FirstQuarter = 2,
	WaxingGibbous = 3,
	FullMoon = 4,
	WaningGibbous = 5,
	LastQuarter = 6,
	WaningCrescent = 7,
	EWorldFXRulesMoonPhase_MAX = 8
};

// ScriptStruct Phoenix.SavedMaterialsForMesh
// Size: 0x10 (Inherited: 0x00)
struct FSavedMaterialsForMesh {
	struct TArray<struct TWeakObjectPtr<struct UMaterialInterface>> SavedMaterialArray; // 0x00(0x10)
};

// ScriptStruct Phoenix.ActiveAbility
// Size: 0x18 (Inherited: 0x00)
struct FActiveAbility {
	struct URPGAbilityBase* Ability; // 0x00(0x08)
	struct URPGAbilityBase* Template; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Phoenix.CachedInventory
// Size: 0x10 (Inherited: 0x00)
struct FCachedInventory {
	struct TArray<struct FInventoryResult> CachedInventory; // 0x00(0x10)
};

// ScriptStruct Phoenix.InventoryResult
// Size: 0x88 (Inherited: 0x00)
struct FInventoryResult {
	struct FName CharacterID; // 0x00(0x08)
	struct FName ItemName; // 0x08(0x08)
	struct FName ItemType; // 0x10(0x08)
	struct FName Variation; // 0x18(0x08)
	struct FName HolderID; // 0x20(0x08)
	int32_t Count; // 0x28(0x04)
	bool Stolen; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t EconomyValue; // 0x30(0x04)
	int32_t SellPrice; // 0x34(0x04)
	int32_t SlotNumber; // 0x38(0x04)
	int32_t MaxInventoryStack; // 0x3c(0x04)
	bool Droppable; // 0x40(0x01)
	bool UniqueItem; // 0x41(0x01)
	bool KeepOnReset; // 0x42(0x01)
	enum class EInventoryChangeReason Reason; // 0x43(0x01)
	int32_t Delta; // 0x44(0x04)
	struct FName OtherCharacterID; // 0x48(0x08)
	struct AActor* OtherActor; // 0x50(0x08)
	bool Consumable; // 0x58(0x01)
	bool UsableFromInventory; // 0x59(0x01)
	bool Sellable; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	int64_t UpdateTime; // 0x60(0x08)
	struct FName UIDisplayMethod; // 0x68(0x08)
	char pad_70[0x18]; // 0x70(0x18)
};

// ScriptStruct Phoenix.QueryFinishedData
// Size: 0x10 (Inherited: 0x00)
struct FQueryFinishedData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.DialogueConversationReference
// Size: 0x10 (Inherited: 0x00)
struct FDialogueConversationReference {
	struct FString EventID; // 0x00(0x10)
};

// ScriptStruct Phoenix.DialogueSequenceReference
// Size: 0x20 (Inherited: 0x00)
struct FDialogueSequenceReference {
	struct FString EventID; // 0x00(0x10)
	struct FString SequenceID; // 0x10(0x10)
};

// ScriptStruct Phoenix.AudioDialogueLineData
// Size: 0x50 (Inherited: 0x00)
struct FAudioDialogueLineData {
	struct FString lineID; // 0x00(0x10)
	struct FString LocDirectKey; // 0x10(0x10)
	float DurationSeconds; // 0x20(0x04)
	int32_t DialogueHandle; // 0x24(0x04)
	struct TWeakObjectPtr<struct AActor> SpeakingActor; // 0x28(0x08)
	struct FString VoiceName; // 0x30(0x10)
	bool bIsFromConversation; // 0x40(0x01)
	bool bIsEmote; // 0x41(0x01)
	bool bForceSubtitle; // 0x42(0x01)
	bool bSuppressSubtitle; // 0x43(0x01)
	bool bSuppressSubtitleCharacterName; // 0x44(0x01)
	enum class EAvaAudioDialogueEmotionHint EmotionHint; // 0x45(0x01)
	enum class SocialSemanticIDs SocialSemanticEmotionHint; // 0x46(0x01)
	char AudioPriority; // 0x47(0x01)
	bool bNonSpatialized; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Phoenix.HitBySpellData
// Size: 0x48 (Inherited: 0x00)
struct FHitBySpellData {
	struct AActor* Victim; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct FVector ImpactLocation; // 0x10(0x0c)
	struct FName SpellType; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct FGameplayTagContainer ImpactTagContainer; // 0x28(0x20)
};

// ScriptStruct Phoenix.DamageResult
// Size: 0x58 (Inherited: 0x00)
struct FDamageResult {
	struct AActor* Victim; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct ASpellTool* SpellTool; // 0x10(0x08)
	struct UInteractionArchitectAsset* MunitionAsset; // 0x18(0x08)
	struct FGameplayTagContainer ImpactTagContainer; // 0x20(0x20)
	float DamageAmount; // 0x40(0x04)
	float BaseDamageAmount; // 0x44(0x04)
	float RemainingHealth; // 0x48(0x04)
	bool bNearDeathKneeling; // 0x4c(0x01)
	bool bDeadlyAttack; // 0x4d(0x01)
	bool bCursedDamage; // 0x4e(0x01)
	bool bDeflection; // 0x4f(0x01)
	bool bPerfectDeflection; // 0x50(0x01)
	bool bFinisher; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Phoenix.LockManagerLock
// Size: 0x0c (Inherited: 0x00)
struct FLockManagerLock {
	struct FName LockId; // 0x00(0x08)
	enum class ELockStates LockState; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Phoenix.Enemy_ParryTimeToImpactData
// Size: 0x30 (Inherited: 0x00)
struct FEnemy_ParryTimeToImpactData {
	float TimeToImpact; // 0x00(0x04)
	int32_t WindowID; // 0x04(0x04)
	struct FGameplayTagContainer MunitionTagContainer; // 0x08(0x20)
	bool bUnblockable; // 0x28(0x01)
	bool bPerfect; // 0x29(0x01)
	enum class EEnemy_ParryCounterType CounterType; // 0x2a(0x01)
	enum class EEnemy_ParryResponseType ResponseType; // 0x2b(0x01)
	enum class EEnemy_ParryCounterStepDirection CounterStepDirection; // 0x2c(0x01)
	enum class EEnemy_ParryCounterStyle CounterStyle; // 0x2d(0x01)
	enum class EEnemy_ParryDodgeStyle DodgeStyle; // 0x2e(0x01)
	enum class EEnemy_ParryButtonPressed ButtonPressed; // 0x2f(0x01)
};

// ScriptStruct Phoenix.Enemy_ParryWindowBeginData
// Size: 0x14 (Inherited: 0x00)
struct FEnemy_ParryWindowBeginData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Phoenix.Enemy_ParryWindowEndData
// Size: 0x08 (Inherited: 0x00)
struct FEnemy_ParryWindowEndData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.SpellForce
// Size: 0x18 (Inherited: 0x00)
struct FSpellForce {
	struct FVector m_forceVector; // 0x00(0x0c)
	struct FVector m_appliedLocation; // 0x0c(0x0c)
};

// ScriptStruct Phoenix.GameplayTagContainerWrapper
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagContainerWrapper {
	struct FGameplayTagContainer m_gameplayTagContainer; // 0x00(0x20)
};

// ScriptStruct Phoenix.ScheduleEntry
// Size: 0xf8 (Inherited: 0x00)
struct FScheduleEntry {
	int32_t StartTime; // 0x00(0x04)
	int32_t EndTime; // 0x04(0x04)
	int32_t DaysMask; // 0x08(0x04)
	int32_t flags; // 0x0c(0x04)
	struct FString Activity; // 0x10(0x10)
	struct FName ActivityType; // 0x20(0x08)
	struct FString Location; // 0x28(0x10)
	struct FString StationKey; // 0x38(0x10)
	struct FString LocationKey; // 0x48(0x10)
	struct TWeakObjectPtr<struct UStationComponent> Station; // 0x58(0x08)
	int32_t StartTimeInMinutes; // 0x60(0x04)
	int32_t EndTimeInMinutes; // 0x64(0x04)
	int32_t DurationMinutes; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FDateTime StartDate; // 0x70(0x08)
	struct FDateTime EndDate; // 0x78(0x08)
	float PathLength; // 0x80(0x04)
	float PathLengthAB; // 0x84(0x04)
	float MoveSpeed; // 0x88(0x04)
	float TimeAvailableSeconds; // 0x8c(0x04)
	float TimeRequiredSeconds; // 0x90(0x04)
	int32_t Priority; // 0x94(0x04)
	float TravelTimeFactor; // 0x98(0x04)
	struct FName OutfitTypeID; // 0x9c(0x08)
	float DistanceTraveled; // 0xa4(0x04)
	char pad_A8[0x50]; // 0xa8(0x50)
};

// ScriptStruct Phoenix.GoalStatus
// Size: 0x04 (Inherited: 0x00)
struct FGoalStatus {
	bool GoalIsActive; // 0x00(0x01)
	bool SiteIsActive; // 0x01(0x01)
	bool StationIsActive; // 0x02(0x01)
	enum class EGoalStatusFlags Status; // 0x03(0x01)
};

// ScriptStruct Phoenix.ClothMountTargets
// Size: 0x18 (Inherited: 0x00)
struct FClothMountTargets {
	struct UTransformProvider* RightClothTargetTransform; // 0x00(0x08)
	struct UTransformProvider* HipsClothTargetTransform; // 0x08(0x08)
	struct UTransformProvider* LeftClothTargetTransform; // 0x10(0x08)
};

// ScriptStruct Phoenix.ComboSplitData
// Size: 0x38 (Inherited: 0x00)
struct FComboSplitData {
	int32_t SplitFrame; // 0x00(0x04)
	int32_t TimeOutFrame; // 0x04(0x04)
	struct UAblAbility* SplitToAbilityBeforeFrame; // 0x08(0x08)
	struct UAblAbility* SplitToAbilityAfterFrame; // 0x10(0x08)
	struct FGameplayTagContainer PerksRequiredForPauseCombo; // 0x18(0x20)
};

// ScriptStruct Phoenix.SocialResponse
// Size: 0x38 (Inherited: 0x00)
struct FSocialResponse {
	bool Accepted; // 0x00(0x01)
	enum class ESocialResponseContext Context; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString Reason; // 0x08(0x10)
	struct FStationQueryData StationToUse; // 0x18(0x20)
};

// ScriptStruct Phoenix.StorySetupData
// Size: 0x10 (Inherited: 0x00)
struct FStorySetupData {
	struct FName SocialAction; // 0x00(0x08)
	int32_t ConnectionIndex; // 0x08(0x04)
	int32_t TargetConnectionsBitmask; // 0x0c(0x04)
};

// ScriptStruct Phoenix.StationQueryData
// Size: 0x20 (Inherited: 0x10)
struct FStationQueryData : FStorySetupData {
	struct TWeakObjectPtr<struct UStationComponent> StationComponent; // 0x10(0x08)
	int32_t ConnectionsBitmask; // 0x18(0x04)
	bool StationValid; // 0x1c(0x01)
	enum class EStationInteraction StationInteractionStatus; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Phoenix.MultiFXHandle
// Size: 0x08 (Inherited: 0x00)
struct FMultiFXHandle {
	uint64_t Handle; // 0x00(0x08)
};

// ScriptStruct Phoenix.SpellLoadOutData
// Size: 0x30 (Inherited: 0x00)
struct FSpellLoadOutData {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct FSpellLoadOut> SpellLoadouts; // 0x10(0x10)
	struct TArray<struct USpellToolRecord*> SpellFinishers; // 0x20(0x10)
};

// ScriptStruct Phoenix.SpellLoadOut
// Size: 0x10 (Inherited: 0x00)
struct FSpellLoadOut {
	struct TArray<struct USpellToolRecord*> SpellToolRecords; // 0x00(0x10)
};

// ScriptStruct Phoenix.MissionID
// Size: 0x08 (Inherited: 0x00)
struct FMissionID {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Phoenix.VendorTransactionInfo
// Size: 0x14 (Inherited: 0x00)
struct FVendorTransactionInfo {
	struct FName ItemName; // 0x00(0x08)
	struct FName ItemGroup; // 0x08(0x08)
	bool bIsBuying; // 0x10(0x01)
	bool bIsStolen; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct Phoenix.SpellCooldownData
// Size: 0x10 (Inherited: 0x00)
struct FSpellCooldownData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.GearItem
// Size: 0x58 (Inherited: 0x00)
struct FGearItem {
	struct FGearItemID GearItemID; // 0x00(0x14)
	enum class EGearSlotIDEnum SlotID; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t GearLevel; // 0x18(0x04)
	int32_t OffenseStat; // 0x1c(0x04)
	int32_t DefenseStat; // 0x20(0x04)
	int32_t CooldownStat; // 0x24(0x04)
	bool bHoodUp; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FName> GeneralAbilityNames; // 0x30(0x10)
	struct TArray<struct FGuid> AbilityInstanceIDs; // 0x40(0x10)
	int32_t IsIdentified; // 0x50(0x04)
	int32_t StatUpgrades; // 0x54(0x04)
};

// ScriptStruct Phoenix.GearItemID
// Size: 0x14 (Inherited: 0x00)
struct FGearItemID {
	struct FName GearID; // 0x00(0x08)
	struct FName GearVariation; // 0x08(0x08)
	bool IsEquipped; // 0x10(0x01)
	enum class EGearSlotIDEnum GearItemSlot; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct Phoenix.ForcedConversation
// Size: 0x10 (Inherited: 0x00)
struct FForcedConversation {
	struct AActor* Initiator; // 0x00(0x08)
	struct FName ConversationID; // 0x08(0x08)
};

// ScriptStruct Phoenix.UIMailInfo
// Size: 0x58 (Inherited: 0x00)
struct FUIMailInfo {
	struct FString MailKey; // 0x00(0x10)
	struct FString SenderName; // 0x10(0x10)
	bool IsRead; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString SendDate; // 0x28(0x10)
	int32_t AttachedContainerSize; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AttachedContainerID; // 0x40(0x10)
	bool CanArchive; // 0x50(0x01)
	bool CanDelete; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Phoenix.MailEntry
// Size: 0x58 (Inherited: 0x00)
struct FMailEntry {
	struct FName m_sender; // 0x00(0x08)
	struct FString m_mailKey; // 0x08(0x10)
	bool m_bShouldAutoPlay; // 0x18(0x01)
	char pad_19[0x3f]; // 0x19(0x3f)
};

// ScriptStruct Phoenix.HealthThreshold
// Size: 0x38 (Inherited: 0x00)
struct FHealthThreshold {
	float HealthValue; // 0x00(0x04)
	bool bHealthValueIsPercent; // 0x04(0x01)
	bool bDamageStop; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float DamageStopTime; // 0x08(0x04)
	bool bShowInUI; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FGameplayTagContainer ImpactTagContainer; // 0x10(0x20)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Phoenix.AIGameEvent
// Size: 0x90 (Inherited: 0x00)
struct FAIGameEvent {
	struct FVector Location; // 0x00(0x0c)
	enum class EGameEvent_Intensity Intensity; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float Duration; // 0x10(0x04)
	float Range; // 0x14(0x04)
	float Falloff; // 0x18(0x04)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct AActor*> Targets; // 0x28(0x10)
	struct FGameplayTagContainer TagContainer; // 0x38(0x20)
	struct FName Name; // 0x58(0x08)
	bool bTrackBackToInstigator; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float TraceBackStepSize; // 0x64(0x04)
	float TraceBackRadius; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct AActor*> EligibleActorsForEvent; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
};

// ScriptStruct Phoenix.InputActionHoldInfo
// Size: 0x02 (Inherited: 0x00)
struct FInputActionHoldInfo {
	enum class EUMGInputAction InputAction; // 0x00(0x01)
	bool bMustHold; // 0x01(0x01)
};

// ScriptStruct Phoenix.LegendItemData
// Size: 0x30 (Inherited: 0x00)
struct FLegendItemData {
	struct FString ButtonString; // 0x00(0x10)
	enum class EUMGInputAction CompletionButton; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString TextString; // 0x18(0x10)
	bool TextStringIsLocalized; // 0x28(0x01)
	bool PressAndHold; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float HoldDuration; // 0x2c(0x04)
};

// ScriptStruct Phoenix.EncounterDuelTechniqueOverride
// Size: 0x0c (Inherited: 0x00)
struct FEncounterDuelTechniqueOverride {
	struct FName ID; // 0x00(0x08)
	enum class EEncounterDuelTechniqueOverrideType OverrideType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Phoenix.SpawnedStudent
// Size: 0x50 (Inherited: 0x00)
struct FSpawnedStudent {
	struct USplineComponent* BroomSpline; // 0x00(0x08)
	struct UFlyingBroomPhysics_Spline* PhysicsData; // 0x08(0x08)
	struct TSoftObjectPtr<UScheduledEntity> ScheduledEntity; // 0x10(0x28)
	struct AFlyingBroom* FlyingBroom; // 0x38(0x08)
	float MaxSpeed; // 0x40(0x04)
	enum class EBroomEnemyState SpawnState; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct AFlyingBroom* SpawnedFlyingBroom; // 0x48(0x08)
};

// ScriptStruct Phoenix.BrewingRecipe
// Size: 0x40 (Inherited: 0x00)
struct FBrewingRecipe {
	struct FName PotionID; // 0x00(0x08)
	struct FName UICategory; // 0x08(0x08)
	int32_t SortingIndex; // 0x10(0x04)
	int32_t Yield; // 0x14(0x04)
	struct TArray<struct FRecipeIngredient> Ingredients; // 0x18(0x10)
	struct FTimespan TimeToBrew; // 0x28(0x08)
	struct FName LockId; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Phoenix.RecipeIngredient
// Size: 0x10 (Inherited: 0x00)
struct FRecipeIngredient {
	struct FRecipeIngredientDefinition RecipeDefinition; // 0x00(0x0c)
	int32_t CurrentlyOwnedQuantity; // 0x0c(0x04)
};

// ScriptStruct Phoenix.RecipeIngredientDefinition
// Size: 0x0c (Inherited: 0x00)
struct FRecipeIngredientDefinition {
	struct FName IngredientName; // 0x00(0x08)
	int32_t Quantity; // 0x08(0x04)
};

// ScriptStruct Phoenix.TransfigurationResource
// Size: 0x0c (Inherited: 0x00)
struct FTransfigurationResource {
	struct FName ItemId; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
};

// ScriptStruct Phoenix.SavedMeshSettings2
// Size: 0x28 (Inherited: 0x00)
struct FSavedMeshSettings2 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Phoenix.StatList
// Size: 0x08 (Inherited: 0x00)
struct FStatList {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Phoenix.CreditEntry
// Size: 0x28 (Inherited: 0x08)
struct FCreditEntry : FTableRowBase {
	enum class ECreditEntryType EntryType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float DurationFactor; // 0x0c(0x04)
	struct FString Text; // 0x10(0x10)
	bool Translated; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Phoenix.InputCheckpoint
// Size: 0x18 (Inherited: 0x00)
struct FInputCheckpoint {
	enum class EUMGInputAction InputAction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D InputWindow; // 0x04(0x08)
	int32_t PathSplineIndex; // 0x0c(0x04)
	struct FVector2D Location; // 0x10(0x08)
};

// ScriptStruct Phoenix.SpellUnlockMiniGamePath
// Size: 0x10 (Inherited: 0x00)
struct FSpellUnlockMiniGamePath {
	struct TArray<struct FSpellUnlockMiniGamePathSegment> PathSegments; // 0x00(0x10)
};

// ScriptStruct Phoenix.SpellUnlockMiniGamePathSegment
// Size: 0x10 (Inherited: 0x00)
struct FSpellUnlockMiniGamePathSegment {
	struct FVector2D StartPoint; // 0x00(0x08)
	struct FVector2D EndPoint; // 0x08(0x08)
};

// ScriptStruct Phoenix.SpellUnlockMiniGameData
// Size: 0xf8 (Inherited: 0x08)
struct FSpellUnlockMiniGameData : FTableRowBase {
	struct FName GameName; // 0x08(0x08)
	struct TSoftObjectPtr<UTexture2D> SpellMask; // 0x10(0x28)
	struct TSoftObjectPtr<UTexture2D> SpellTexture; // 0x38(0x28)
	float StoryDelay; // 0x60(0x04)
	float EasyDelay; // 0x64(0x04)
	float NormalDelay; // 0x68(0x04)
	float HardDelay; // 0x6c(0x04)
	struct TSoftObjectPtr<UTexture2D> SpellIcon; // 0x70(0x28)
	struct TSoftObjectPtr<UTexture2D> SpellIconGlow; // 0x98(0x28)
	struct FSpellUnlockMiniGamePath CurvePath; // 0xc0(0x10)
	struct FInputCheckpoint FinalCheckpoint; // 0xd0(0x18)
	struct TArray<struct FInputCheckpoint> InputCheckpoints; // 0xe8(0x10)
};

// ScriptStruct Phoenix.WorldEventDataRow
// Size: 0x108 (Inherited: 0x08)
struct FWorldEventDataRow : FTableRowBase {
	struct FName WorldEventName; // 0x08(0x08)
	enum class EProductionStatus ProductionStatus; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString EventDescription; // 0x18(0x10)
	struct FSoftObjectPath WorldEvent; // 0x28(0x18)
	int32_t NumberOfAllowedActiveInstances; // 0x40(0x04)
	bool bPersistentEvent; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FWorldEventPersistenceInfo PersistenceInfo; // 0x48(0x08)
	bool bRepeatable; // 0x50(0x01)
	bool bCanSpawnAtLocationWithActivity; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)
	struct FWorldEventTimeSpan EventCooldownTime; // 0x60(0x10)
	bool bOverrideLocatorCooldown; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FWorldEventTimeSpan LocatorCooldownOverride; // 0x74(0x10)
	bool bIgnoreStreamoutVolume; // 0x84(0x01)
	bool bTestMinimumDistanceFromAnotherWorldEvent; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	float MinimumDistanceFromAnotherWorldEvent; // 0x88(0x04)
	int32_t PercentChanceOfBeingSelected; // 0x8c(0x04)
	struct FGameplayTagContainer LocationRequiredDescriptors; // 0x90(0x20)
	struct FGameplayTagContainer LocationDeniedDescriptors; // 0xb0(0x20)
	struct FGameplayTag StartTriggerTag; // 0xd0(0x08)
	struct UWorldEventSocketPreview* PreviewData; // 0xd8(0x08)
	struct FSoftObjectPath PreviewLevel; // 0xe0(0x18)
	struct TArray<struct UWorldEventCondition*> Conditions; // 0xf8(0x10)
};

// ScriptStruct Phoenix.WorldEventTimeSpan
// Size: 0x10 (Inherited: 0x00)
struct FWorldEventTimeSpan {
	int32_t Days; // 0x00(0x04)
	int32_t Hours; // 0x04(0x04)
	int32_t Minutes; // 0x08(0x04)
	int32_t Seconds; // 0x0c(0x04)
};

// ScriptStruct Phoenix.WorldEventPersistenceInfo
// Size: 0x08 (Inherited: 0x00)
struct FWorldEventPersistenceInfo {
	int32_t Stages; // 0x00(0x04)
	bool bRepeatOnComplete; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Phoenix.QuadrupedSpineRebase
// Size: 0xa0 (Inherited: 0x00)
struct FQuadrupedSpineRebase {
	struct FBoneReferenceEx ParentBone; // 0x00(0x10)
	struct TArray<struct FBoneReferenceEx> RebaseBones; // 0x10(0x10)
	char pad_20[0x80]; // 0x20(0x80)
};

// ScriptStruct Phoenix.QuadrupedSpineBoneChain
// Size: 0x38 (Inherited: 0x00)
struct FQuadrupedSpineBoneChain {
	enum class EQuadrupedSpineChainType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FBoneReferenceEx StartBone; // 0x04(0x10)
	struct FBoneReferenceEx EndBone; // 0x14(0x10)
	float weight; // 0x24(0x04)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct Phoenix.TurnDirectionNavMeshCheckSettings
// Size: 0x38 (Inherited: 0x00)
struct FTurnDirectionNavMeshCheckSettings {
	bool bDoNavMeshCheck; // 0x00(0x01)
	bool bForceSuccessIfMount; // 0x01(0x01)
	enum class ECreatureNavMeshTurnDirection TurnDirection; // 0x02(0x01)
	bool bIncActorRadius; // 0x03(0x01)
	float TurnDiameterScalar; // 0x04(0x04)
	float TurnLengthScalar; // 0x08(0x04)
	float BoxExtentsZ; // 0x0c(0x04)
	bool bDebugDrawing; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FGameplayTagContainer TagsIfNavMeshCheckFails; // 0x18(0x20)
};

// ScriptStruct Phoenix.AnimDoneTaskEntry
// Size: 0x08 (Inherited: 0x00)
struct FAnimDoneTaskEntry {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.AnimStateTaskEntry
// Size: 0x08 (Inherited: 0x00)
struct FAnimStateTaskEntry {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.AblTransformMultiChildTask
// Size: 0x90 (Inherited: 0x00)
struct FAblTransformMultiChildTask {
	struct FName ChildName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform InitTransform; // 0x10(0x30)
	struct FTransform DeltaTransform; // 0x40(0x30)
	struct UCurveVector* DeltaTranslate; // 0x70(0x08)
	struct UCurveVector* DeltaRotate; // 0x78(0x08)
	struct UCurveVector* DeltaScale; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct Phoenix.AttackCollisionTaskEntry
// Size: 0x08 (Inherited: 0x00)
struct FAttackCollisionTaskEntry {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.CastSpellTaskEntry
// Size: 0x08 (Inherited: 0x00)
struct FCastSpellTaskEntry {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.EnemyMoveTaskEntry
// Size: 0x90 (Inherited: 0x00)
struct FEnemyMoveTaskEntry {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Phoenix.ImpulseToTargetTaskEntry
// Size: 0x08 (Inherited: 0x00)
struct FImpulseToTargetTaskEntry {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.LedgeAssistTaskEntry
// Size: 0x14 (Inherited: 0x00)
struct FLedgeAssistTaskEntry {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Phoenix.CameraProperties
// Size: 0x40 (Inherited: 0x00)
struct FCameraProperties {
	float MinDistance; // 0x00(0x04)
	float MaxDistance; // 0x04(0x04)
	float MinPitch; // 0x08(0x04)
	float MaxPitch; // 0x0c(0x04)
	float minYaw; // 0x10(0x04)
	float MaxYaw; // 0x14(0x04)
	float minRoll; // 0x18(0x04)
	float MaxRoll; // 0x1c(0x04)
	float minFOV; // 0x20(0x04)
	float maxFOV; // 0x24(0x04)
	float BlendInTime; // 0x28(0x04)
	float BlendOutTime; // 0x2c(0x04)
	float horizontalOffset; // 0x30(0x04)
	float verticalOffset; // 0x34(0x04)
	float weight; // 0x38(0x04)
	bool bSetToDefaultOnExit; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Phoenix.AblMultiFxChildTask
// Size: 0x30 (Inherited: 0x00)
struct FAblMultiFxChildTask {
	struct FName ChildName; // 0x00(0x08)
	struct FName MultiFXHandleName; // 0x08(0x08)
	struct TArray<struct UMultiFX2_Base*> FX; // 0x10(0x10)
	struct FVector LocationOffset; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Phoenix.MeshArrayHolder
// Size: 0x10 (Inherited: 0x00)
struct FMeshArrayHolder {
	struct TArray<struct UStaticMesh*> Meshes; // 0x00(0x10)
};

// ScriptStruct Phoenix.AblSuperSlamCurveData
// Size: 0x18 (Inherited: 0x00)
struct FAblSuperSlamCurveData {
	struct FName BoneName; // 0x00(0x08)
	struct UCurveVector* Curve; // 0x08(0x08)
	bool bInvertX; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Phoenix.TurnAssistTaskEntry
// Size: 0x14 (Inherited: 0x00)
struct FTurnAssistTaskEntry {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Phoenix.FrameToContexts
// Size: 0x50 (Inherited: 0x00)
struct FFrameToContexts {
	struct TMap<int32_t, struct FContextArray> FrameToContextsMap; // 0x00(0x50)
};

// ScriptStruct Phoenix.ContextArray
// Size: 0x10 (Inherited: 0x00)
struct FContextArray {
	struct TArray<struct FInputContextWithType> Contexts; // 0x00(0x10)
};

// ScriptStruct Phoenix.AccioRestoreData
// Size: 0x08 (Inherited: 0x00)
struct FAccioRestoreData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.AccioDampingSphere
// Size: 0x0c (Inherited: 0x00)
struct FAccioDampingSphere {
	float Radius; // 0x00(0x04)
	float LinearDamping; // 0x04(0x04)
	float AngularDamping; // 0x08(0x04)
};

// ScriptStruct Phoenix.SpellLevelData
// Size: 0x01 (Inherited: 0x00)
struct FSpellLevelData {
	char SpellLevel; // 0x00(0x01)
};

// ScriptStruct Phoenix.AccioLevelData
// Size: 0x40 (Inherited: 0x01)
struct FAccioLevelData : FSpellLevelData {
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* BasePhysicsImpulseCurve; // 0x08(0x08)
	struct UCurveFloat* MassScaledPhysicsImpulseCurve; // 0x10(0x08)
	float InitialBasePhysicsImpulse; // 0x18(0x04)
	float InitialMassScaledBasePhysicsImpulse; // 0x1c(0x04)
	float InitialImpulseDuration; // 0x20(0x04)
	float CharacterBasePhysicsImpulse; // 0x24(0x04)
	float CharacterMassScaledPhysicsImpulse; // 0x28(0x04)
	float MaxVelocity; // 0x2c(0x04)
	float AccioCharacterKnockbackAtDistance; // 0x30(0x04)
	float AdditionalFailedRadius; // 0x34(0x04)
	float NonMovableDamage; // 0x38(0x04)
	float NonMovableAdditionalForce; // 0x3c(0x04)
};

// ScriptStruct Phoenix.AchievementCategory
// Size: 0x18 (Inherited: 0x00)
struct FAchievementCategory {
	struct FName CategoryID; // 0x00(0x08)
	struct TArray<struct FAchievementChallenge> Challenges; // 0x08(0x10)
};

// ScriptStruct Phoenix.AchievementChallenge
// Size: 0x30 (Inherited: 0x00)
struct FAchievementChallenge {
	struct FName AchievementChallengeID; // 0x00(0x08)
	int32_t TotalOccurances; // 0x08(0x04)
	int32_t TotalInstances; // 0x0c(0x04)
	int32_t Levels; // 0x10(0x04)
	int32_t CompletedLevels; // 0x14(0x04)
	struct TArray<struct FName> Members; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Phoenix.KnowledgeAchievementResult
// Size: 0x40 (Inherited: 0x00)
struct FKnowledgeAchievementResult {
	struct FName AchievementID; // 0x00(0x08)
	int32_t Occurances; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t Timespan; // 0x10(0x08)
	bool IsComplete; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Instances; // 0x1c(0x04)
	bool IsAvailable; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FAchievementReward> Rewards; // 0x28(0x10)
	struct FName ChallengeCategory; // 0x38(0x08)
};

// ScriptStruct Phoenix.AchievementReward
// Size: 0x20 (Inherited: 0x00)
struct FAchievementReward {
	struct FName RewardType; // 0x00(0x08)
	int32_t RewardInt; // 0x08(0x04)
	struct FName RewardText; // 0x0c(0x08)
	bool IsHidden; // 0x14(0x01)
	bool Delayed; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FName RewardCategory; // 0x18(0x08)
};

// ScriptStruct Phoenix.ActorByStat
// Size: 0x10 (Inherited: 0x00)
struct FActorByStat {
	int32_t StatValue; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UActorProvider* Actor; // 0x08(0x08)
};

// ScriptStruct Phoenix.AIMagicEvent
// Size: 0x30 (Inherited: 0x00)
struct FAIMagicEvent {
	char pad_0[0x4]; // 0x00(0x04)
	struct FVector MagicLocation; // 0x04(0x0c)
	float Power; // 0x10(0x04)
	float MaxRange; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FName Tag; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Phoenix.NPC_StimulusEvent
// Size: 0x38 (Inherited: 0x00)
struct FNPC_StimulusEvent {
	char pad_0[0x28]; // 0x00(0x28)
	struct AActor* Broadcaster; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)
};

// ScriptStruct Phoenix.NPC_CrimeSceneSense
// Size: 0x30 (Inherited: 0x00)
struct FNPC_CrimeSceneSense {
	float PerceiveRadius; // 0x00(0x04)
	float LoseRadius; // 0x04(0x04)
	float HeightDifference; // 0x08(0x04)
	float EvaluateInterval; // 0x0c(0x04)
	struct FNPC_CrimeSceneSense_LOS LOS; // 0x10(0x0c)
	struct FNPC_CrimeSceneSense_FOV FOV; // 0x1c(0x10)
	struct FNPC_CrimeSceneSense_Hearing Hearing; // 0x2c(0x04)
};

// ScriptStruct Phoenix.NPC_CrimeSceneSense_Hearing
// Size: 0x04 (Inherited: 0x00)
struct FNPC_CrimeSceneSense_Hearing {
	float HearingRadius; // 0x00(0x04)
};

// ScriptStruct Phoenix.NPC_CrimeSceneSense_FOV
// Size: 0x10 (Inherited: 0x00)
struct FNPC_CrimeSceneSense_FOV {
	float FOV; // 0x00(0x04)
	float FOVDistance; // 0x04(0x04)
	float FOVHeight; // 0x08(0x04)
	float FOVFalloffScale; // 0x0c(0x04)
};

// ScriptStruct Phoenix.NPC_CrimeSceneSense_LOS
// Size: 0x0c (Inherited: 0x00)
struct FNPC_CrimeSceneSense_LOS {
	bool bLOS; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LOSInterval; // 0x04(0x04)
	float LOSMinDist; // 0x08(0x04)
};

// ScriptStruct Phoenix.AlignToVelocity
// Size: 0x10 (Inherited: 0x00)
struct FAlignToVelocity {
	bool bInstantAlign; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AlignmentSpeed; // 0x04(0x04)
	float AlignmentSpeedScaleVelocity; // 0x08(0x04)
	bool bScaleAlignToVelocity; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Phoenix.AmbientPaintingBudgeterPayload
// Size: 0x10 (Inherited: 0x08)
struct FAmbientPaintingBudgeterPayload : FBudgeterPayload {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Phoenix.AmbientPaintingsLibraryDT
// Size: 0x28 (Inherited: 0x08)
struct FAmbientPaintingsLibraryDT : FTableRowBase {
	struct UFileMediaSource* AtlasMediaSource; // 0x08(0x08)
	struct UDataTable* AtlasDataTable; // 0x10(0x08)
	struct UTexture2D* Poster; // 0x18(0x08)
	int32_t Width; // 0x20(0x04)
	int32_t Count; // 0x24(0x04)
};

// ScriptStruct Phoenix.MovieAtlasData
// Size: 0x18 (Inherited: 0x08)
struct FMovieAtlasData : FTableRowBase {
	int32_t Index; // 0x08(0x04)
	int32_t Width; // 0x0c(0x04)
	int32_t Height; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.AnimationClip_SharedRandomEntry
// Size: 0x10 (Inherited: 0x00)
struct FAnimationClip_SharedRandomEntry {
	struct UAnimationClipProvider* ClipProvider; // 0x00(0x08)
	float weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Phoenix.MappedParticleEffect
// Size: 0x40 (Inherited: 0x00)
struct FMappedParticleEffect {
	struct UParticleSystem* PSTemplate; // 0x00(0x08)
	struct FVector LocationOffset; // 0x08(0x0c)
	struct FRotator RotationOffset; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	char pad_2C[0x14]; // 0x2c(0x14)
};

// ScriptStruct Phoenix.AnimNotify_RiderDialogue_DialogueReferenceList
// Size: 0x10 (Inherited: 0x00)
struct FAnimNotify_RiderDialogue_DialogueReferenceList {
	struct TArray<struct FDialogueConversationReference> DialogueEventReferences; // 0x00(0x10)
};

// ScriptStruct Phoenix.MappedTimedParticleEffect
// Size: 0x28 (Inherited: 0x00)
struct FMappedTimedParticleEffect {
	struct UParticleSystem* PSTemplate; // 0x00(0x08)
	struct FVector LocationOffset; // 0x08(0x0c)
	struct FRotator RotationOffset; // 0x14(0x0c)
	bool bDestroyAtEnd; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Phoenix.ApparitionLevelData
// Size: 0x08 (Inherited: 0x01)
struct FApparitionLevelData : FSpellLevelData {
	char pad_1[0x3]; // 0x01(0x03)
	float TapDistance; // 0x04(0x04)
};

// ScriptStruct Phoenix.ArrestoData
// Size: 0x40 (Inherited: 0x00)
struct FArrestoData {
	struct TArray<struct UMultiFX2_Base*> FX2; // 0x00(0x10)
	char pad_10[0x30]; // 0x10(0x30)
};

// ScriptStruct Phoenix.ArrestoMomentumLevelData
// Size: 0x01 (Inherited: 0x01)
struct FArrestoMomentumLevelData : FSpellLevelData {
};

// ScriptStruct Phoenix.AstronomyMiniGameSolveState
// Size: 0x10 (Inherited: 0x00)
struct FAstronomyMiniGameSolveState {
	float FOV; // 0x00(0x04)
	struct FRotator Rotator; // 0x04(0x0c)
};

// ScriptStruct Phoenix.AstronomyMiniGameSolutionEntry
// Size: 0x30 (Inherited: 0x08)
struct FAstronomyMiniGameSolutionEntry : FTableRowBase {
	float FOV; // 0x08(0x04)
	struct FRotator Rotator; // 0x0c(0x0c)
	float minFOV; // 0x18(0x04)
	float maxFOV; // 0x1c(0x04)
	float Log; // 0x20(0x04)
	float FOVTolerance; // 0x24(0x04)
	float RotationTolerance; // 0x28(0x04)
	float HighlightIntensityMod; // 0x2c(0x04)
};

// ScriptStruct Phoenix.AudioMultiSourceAudioEvent
// Size: 0x18 (Inherited: 0x00)
struct FAudioMultiSourceAudioEvent {
	struct UAkAudioEvent* AkAudioEvent; // 0x00(0x08)
	struct FString EventName; // 0x08(0x10)
};

// ScriptStruct Phoenix.DialogueLineReference
// Size: 0x10 (Inherited: 0x00)
struct FDialogueLineReference {
	struct FName EventID; // 0x00(0x08)
	struct FName DialogueLineID; // 0x08(0x08)
};

// ScriptStruct Phoenix.AvadaKedavraLevelData
// Size: 0x01 (Inherited: 0x01)
struct FAvadaKedavraLevelData : FSpellLevelData {
};

// ScriptStruct Phoenix.AvaDialogueTrackTemplate
// Size: 0x90 (Inherited: 0x20)
struct FAvaDialogueTrackTemplate : FMovieSceneEvalTemplate {
	struct FAvaDialogueTrackTemplateData TemplateData; // 0x20(0x70)
};

// ScriptStruct Phoenix.AvaDialogueTrackSectionData
// Size: 0x70 (Inherited: 0x00)
struct FAvaDialogueTrackSectionData {
	struct UAvaAudioDialogueEvent* Event; // 0x00(0x08)
	struct FString EventName; // 0x08(0x10)
	struct TMap<struct FString, struct FString> RequiredParameters; // 0x18(0x50)
	bool StopWhenAttachedToDestroyed; // 0x68(0x01)
	char flags; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// ScriptStruct Phoenix.AvaDialogueTrackTemplateData
// Size: 0x70 (Inherited: 0x70)
struct FAvaDialogueTrackTemplateData : FAvaDialogueTrackSectionData {
};

// ScriptStruct Phoenix.AvatarFullbodyPreset
// Size: 0x68 (Inherited: 0x08)
struct FAvatarFullbodyPreset : FTableRowBase {
	enum class EGenderEnum Gender; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TMap<enum class EAvatarPresetType, struct TSoftObjectPtr<UAvatarPresetDefinition>> AvatarPresetDefinitions; // 0x10(0x50)
	bool DisplayInEditor; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float SortOrder; // 0x64(0x04)
};

// ScriptStruct Phoenix.AvatarPreset
// Size: 0x40 (Inherited: 0x08)
struct FAvatarPreset : FTableRowBase {
	enum class EAvatarPresetType PresetType; // 0x08(0x01)
	enum class EGenderEnum Gender; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TSoftObjectPtr<UAvatarPresetDefinition> AvatarPresetDefinition; // 0x10(0x28)
	bool DisplayInEditor; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float SortOrder; // 0x3c(0x04)
};

// ScriptStruct Phoenix.AvatarPresetInfo
// Size: 0xc0 (Inherited: 0x08)
struct FAvatarPresetInfo : FTableRowBase {
	struct TArray<struct FAvatarPresetPieceInfo> Meshes; // 0x08(0x10)
	bool bIsColor; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FAvatarPresetIconInfo MaleIconInfo; // 0x20(0x50)
	struct FAvatarPresetIconInfo FemaleIconInfo; // 0x70(0x50)
};

// ScriptStruct Phoenix.AvatarPresetIconInfo
// Size: 0x50 (Inherited: 0x00)
struct FAvatarPresetIconInfo {
	struct FTransform CameraTransform; // 0x00(0x30)
	bool bUseIdle; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float IdleFrame; // 0x34(0x04)
	int32_t IconWidth; // 0x38(0x04)
	int32_t IconHeight; // 0x3c(0x04)
	struct TArray<struct FString> MeshesToHide; // 0x40(0x10)
};

// ScriptStruct Phoenix.AvatarPresetPieceInfo
// Size: 0x20 (Inherited: 0x00)
struct FAvatarPresetPieceInfo {
	struct FName MeshName; // 0x00(0x08)
	bool bMeshSettable; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FName> Parameters; // 0x10(0x10)
};

// ScriptStruct Phoenix.AvatarPresetColorInfo
// Size: 0x18 (Inherited: 0x08)
struct FAvatarPresetColorInfo : FTableRowBase {
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct Phoenix.HouseGear
// Size: 0x40 (Inherited: 0x00)
struct FHouseGear {
	struct FGearName Gryffindor; // 0x00(0x10)
	struct FGearName Hufflepuff; // 0x10(0x10)
	struct FGearName Ravenclaw; // 0x20(0x10)
	struct FGearName Slytherin; // 0x30(0x10)
};

// ScriptStruct Phoenix.GearName
// Size: 0x10 (Inherited: 0x00)
struct FGearName {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Phoenix.FullbodyAvatarPreset
// Size: 0x08 (Inherited: 0x00)
struct FFullbodyAvatarPreset {
	struct FName ID; // 0x00(0x08)
};

// ScriptStruct Phoenix.HumanCharacterId
// Size: 0x08 (Inherited: 0x00)
struct FHumanCharacterId {
	struct FName ID; // 0x00(0x08)
};

// ScriptStruct Phoenix.GenderVoice
// Size: 0x08 (Inherited: 0x00)
struct FGenderVoice {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Phoenix.DynamicNavComponentInfo
// Size: 0x08 (Inherited: 0x00)
struct FDynamicNavComponentInfo {
	struct FSelectableSubobjectName NavigationPrimitiveName; // 0x00(0x08)
};

// ScriptStruct Phoenix.BWorldTransitionEntry
// Size: 0x50 (Inherited: 0x00)
struct FBWorldTransitionEntry {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Phoenix.BeaconDistanceRule
// Size: 0x18 (Inherited: 0x00)
struct FBeaconDistanceRule {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.S_BipedAnimInstanceData_Struct
// Size: 0x01 (Inherited: 0x00)
struct FS_BipedAnimInstanceData_Struct {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.InventoryLoadout
// Size: 0x18 (Inherited: 0x00)
struct FInventoryLoadout {
	struct TArray<struct FInventoryResult> InventoryItemArray; // 0x00(0x10)
	int32_t ActiveItemIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.SpellCooldownAmendInfo
// Size: 0x20 (Inherited: 0x00)
struct FSpellCooldownAmendInfo {
	struct FName SpellName; // 0x00(0x08)
	struct FName SpellGroup; // 0x08(0x08)
	float CooldownTime; // 0x10(0x04)
	float CooldownAmount; // 0x14(0x04)
	float CooldownDelta; // 0x18(0x04)
	bool bIsInCombat; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Phoenix.ObjectStateData
// Size: 0x98 (Inherited: 0x00)
struct FObjectStateData {
	char pad_0[0x60]; // 0x00(0x60)
	struct UAkAudioEvent* HitSfx; // 0x60(0x08)
	float m_baseHealth; // 0x68(0x04)
	float m_minDamageThreshold; // 0x6c(0x04)
	float OverrideMass; // 0x70(0x04)
	float MinOptimumAvatarDistance; // 0x74(0x04)
	float MaxOptimumAvatarDistance; // 0x78(0x04)
	char bIsPersistent : 1; // 0x7c(0x01)
	char bDamagable : 1; // 0x7c(0x01)
	char bNoDamageBreakable : 1; // 0x7c(0x01)
	char bImmuneToSpells : 1; // 0x7c(0x01)
	char bCanBecomeMovable : 1; // 0x7c(0x01)
	char bHighlightWhenBroken : 1; // 0x7c(0x01)
	char m_important : 1; // 0x7c(0x01)
	char bRevelioResource : 1; // 0x7c(0x01)
	char m_hidden : 1; // 0x7d(0x01)
	char bExplode : 1; // 0x7d(0x01)
	char bExplodeOnFire : 1; // 0x7d(0x01)
	char bTransformable : 1; // 0x7d(0x01)
	char bStartBroken : 1; // 0x7d(0x01)
	char bTargetable : 1; // 0x7d(0x01)
	char bSpecialTargetPerception : 1; // 0x7d(0x01)
	char bIgnoreLimitedCountRules : 1; // 0x7d(0x01)
	char bIgnoreActorHit : 1; // 0x7e(0x01)
	char bIgnoreMunitionImpact : 1; // 0x7e(0x01)
	char bTakeDamageFromCharacterCollisions : 1; // 0x7e(0x01)
	char bFragile : 1; // 0x7e(0x01)
	char bDamagableInPieces : 1; // 0x7e(0x01)
	char bTreatAsCharacterForDamage : 1; // 0x7e(0x01)
	char bDieInWater : 1; // 0x7e(0x01)
	char bNeverAffectNavmesh : 1; // 0x7e(0x01)
	char bNavOverrideMobilityCheck : 1; // 0x7f(0x01)
	char bShowTargetUI : 1; // 0x7f(0x01)
	char bCurrentlyTargetedUI : 1; // 0x7f(0x01)
	char pad_7F_3 : 5; // 0x7f(0x01)
	enum class EWidgetType WidgetType; // 0x80(0x01)
	char PriorityLaunchTarget; // 0x81(0x01)
	char pad_82[0x1]; // 0x82(0x01)
	enum class EImpactTypes ImpactTypeOverride; // 0x83(0x01)
	enum class EObjectSizeClass BaseSizeClass; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct TArray<struct ULocalStencilEffectDelegatedActorOverride*> StencilEffectOverrides; // 0x88(0x10)
};

// ScriptStruct Phoenix.CharacterStateData
// Size: 0x280 (Inherited: 0x98)
struct FCharacterStateData : FObjectStateData {
	struct UAkAudioEvent* RagdollHitSfx; // 0x98(0x08)
	struct UBonySkeletonComponent* BonySkeleton; // 0xa0(0x08)
	char pad_A8[0x18]; // 0xa8(0x18)
	float GameEventRadius; // 0xc0(0x04)
	float RegenerationRate; // 0xc4(0x04)
	float CapsuleUnderWaterPercReq; // 0xc8(0x04)
	float CapsuleUnderWaterPercReqStop; // 0xcc(0x04)
	char bOverrideTeammateAlly : 1; // 0xd0(0x01)
	char bWillNearDeathKneel : 1; // 0xd0(0x01)
	char bNearDeathKneelRecover : 1; // 0xd0(0x01)
	char bNearDeathKneelExtendedOnDamage : 1; // 0xd0(0x01)
	char pad_D0_4 : 4; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float DeathRecoverInvulnerableTime; // 0xd4(0x04)
	char bIsBossCharacter : 1; // 0xd8(0x01)
	char bProtected : 1; // 0xd8(0x01)
	char bImmuneToFinisherDeath : 1; // 0xd8(0x01)
	char bIgnoreAllyAttacks : 1; // 0xd8(0x01)
	char bImperiusCharTakesFullDamage : 1; // 0xd8(0x01)
	char pad_D8_5 : 3; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct AActor* ImperiusInstigatorPtr; // 0xe0(0x08)
	char bDisplayDamage : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct FHealthThreshold> HealthThresholdArray; // 0xf0(0x10)
	float CriticalHealthPercent; // 0x100(0x04)
	float ReplicaHealthPercent; // 0x104(0x04)
	struct AActor* OverrideLootDropContainer; // 0x108(0x08)
	char pad_110[0x170]; // 0x110(0x170)
};

// ScriptStruct Phoenix.BipedStateData
// Size: 0x280 (Inherited: 0x280)
struct FBipedStateData : FCharacterStateData {
};

// ScriptStruct Phoenix.BoneParticleTracker
// Size: 0x10 (Inherited: 0x00)
struct FBoneParticleTracker {
	struct TArray<struct FBoneParticleTrackerEntry> Entries; // 0x00(0x10)
};

// ScriptStruct Phoenix.BoneParticleTrackerEntry
// Size: 0x18 (Inherited: 0x00)
struct FBoneParticleTrackerEntry {
	struct TWeakObjectPtr<struct USceneComponent> ParentComponent; // 0x00(0x08)
	struct TWeakObjectPtr<struct UParticleSystemComponent> ParticleSystem; // 0x08(0x08)
	struct FName AttachBone; // 0x10(0x08)
};

// ScriptStruct Phoenix.BonySkeletonTimerProfiles
// Size: 0x68 (Inherited: 0x00)
struct FBonySkeletonTimerProfiles {
	struct FBonySkeletonTimerProfile DefaultProfile; // 0x00(0x58)
	struct TArray<struct FBonySkeletonTimerProfile> Profiles; // 0x58(0x10)
};

// ScriptStruct Phoenix.BonySkeletonTimerProfile
// Size: 0x58 (Inherited: 0x00)
struct FBonySkeletonTimerProfile {
	struct FName ProfileName; // 0x00(0x08)
	struct FBonySkeletonTimer ShowSkeletonTimer; // 0x08(0x08)
	struct FBonySkeletonTimer HideNonSkeletonTimer; // 0x10(0x08)
	struct FBonySkeletonTimer ParticleStartTimer; // 0x18(0x08)
	struct UParticleSystem* Particle; // 0x20(0x08)
	struct TArray<struct FName> ParticleFXBones; // 0x28(0x10)
	struct FBonySkeletonTimer SkinFXStartTimer; // 0x38(0x08)
	struct ASkinFXDefinition* SkinFXEffect; // 0x40(0x08)
	struct TArray<struct FBonySkeletonAudioEvent> AudioEvents; // 0x48(0x10)
};

// ScriptStruct Phoenix.BonySkeletonAudioEvent
// Size: 0x10 (Inherited: 0x00)
struct FBonySkeletonAudioEvent {
	struct FBonySkeletonTimer Timer; // 0x00(0x08)
	struct UAkAudioEvent* Event; // 0x08(0x08)
};

// ScriptStruct Phoenix.BonySkeletonTimer
// Size: 0x08 (Inherited: 0x00)
struct FBonySkeletonTimer {
	float Timeout; // 0x00(0x04)
	bool bEnabled; // 0x04(0x01)
	bool bTripped; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Phoenix.BroomRiderActionContainer
// Size: 0x08 (Inherited: 0x00)
struct FBroomRiderActionContainer {
	struct UBroomRiderActionBase* Action; // 0x00(0x08)
};

// ScriptStruct Phoenix.TagPlacementOrder
// Size: 0x38 (Inherited: 0x00)
struct FTagPlacementOrder {
	struct FName TagID; // 0x00(0x08)
	struct FBlackboardKeySelector ActorBlackboardKey; // 0x08(0x28)
	float LifeTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Phoenix.AttackStateInfo
// Size: 0x02 (Inherited: 0x00)
struct FAttackStateInfo {
	bool bUnblockable; // 0x00(0x01)
	enum class EEnemy_AttackThreatState AttackThreatState; // 0x01(0x01)
};

// ScriptStruct Phoenix.CameraHeightRenderSettingsCullVolume
// Size: 0x10 (Inherited: 0x00)
struct FCameraHeightRenderSettingsCullVolume {
	struct ACullDistanceVolume* CullDistanceVolume; // 0x00(0x08)
	float ApplyAtBlendPercent; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Phoenix.CartSetup
// Size: 0x208 (Inherited: 0x00)
struct FCartSetup {
	struct TSoftObjectPtr<USplineComponent> Spline; // 0x00(0x28)
	struct TSoftObjectPtr<USceneComponent> FrontLeftWheel; // 0x28(0x28)
	struct TSoftObjectPtr<USceneComponent> FrontRightWheel; // 0x50(0x28)
	struct TSoftObjectPtr<USceneComponent> BackLeftWheel; // 0x78(0x28)
	struct TSoftObjectPtr<USceneComponent> BackRightWheel; // 0xa0(0x28)
	struct TSoftObjectPtr<AActor> FrontSteering; // 0xc8(0x28)
	struct TSoftObjectPtr<AActor> FrontAxel; // 0xf0(0x28)
	struct TSoftObjectPtr<AActor> BackAxel; // 0x118(0x28)
	struct TSoftObjectPtr<AActor> CartBodyActor; // 0x140(0x28)
	struct TSoftObjectPtr<AActor> TailgateActor; // 0x168(0x28)
	struct TSoftObjectPtr<AActor> FrontWheelsParent; // 0x190(0x28)
	struct TSoftObjectPtr<AActor> BackWheelsParent; // 0x1b8(0x28)
	struct UBoxComponent* SlowCartTriggerBox; // 0x1e0(0x08)
	struct UBoxComponent* StopCartTriggerBox; // 0x1e8(0x08)
	struct UTimelineComponent* TailGateTimeline; // 0x1f0(0x08)
	float FrontWheelCircumference; // 0x1f8(0x04)
	float BackWheelCircumference; // 0x1fc(0x04)
	float CartLength; // 0x200(0x04)
	float MaxSpeed; // 0x204(0x04)
};

// ScriptStruct Phoenix.CentaurAttackDescriptor
// Size: 0x30 (Inherited: 0x00)
struct FCentaurAttackDescriptor {
	float AttackWeight; // 0x00(0x04)
	struct FVector2D TargetRange; // 0x04(0x08)
	struct FVector2D HeadingToTargetRange; // 0x0c(0x08)
	struct FVector2D AttackCooldownRange; // 0x14(0x08)
	struct FVector2D GroupAttackCooldownRange; // 0x1c(0x08)
	struct FName GroupAttackTagName; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Phoenix.CentaurRepositionDescriptor
// Size: 0x20 (Inherited: 0x00)
struct FCentaurRepositionDescriptor {
	struct FVector2D RepositionToTargetRange; // 0x00(0x08)
	struct FVector2D HoldPositionTargetRange; // 0x08(0x08)
	float IdealTargetRange; // 0x10(0x04)
	struct FVector2D HeadingToTargetRange; // 0x14(0x08)
	float RepositionTimeout; // 0x1c(0x04)
};

// ScriptStruct Phoenix.CharacterBoneProjectionResults
// Size: 0x54 (Inherited: 0x00)
struct FCharacterBoneProjectionResults {
	int32_t ActiveProjections; // 0x00(0x04)
	struct FVector ActorCenter; // 0x04(0x0c)
	struct FVector ActorExtent; // 0x10(0x0c)
	struct FVector ProjectionsCenter; // 0x1c(0x0c)
	struct FVector ProjectionsExtent; // 0x28(0x0c)
	struct FVector TotalProjectionsCenter; // 0x34(0x0c)
	struct FVector TotalProjectionsExtent; // 0x40(0x0c)
	float ActorRadius; // 0x4c(0x04)
	bool bTotalProjectionsValid; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
};

// ScriptStruct Phoenix.CharacterBoneProjectionParams
// Size: 0x04 (Inherited: 0x00)
struct FCharacterBoneProjectionParams {
	int32_t FrameStagger; // 0x00(0x04)
};

// ScriptStruct Phoenix.CharacterBoneProjectionState
// Size: 0xa0 (Inherited: 0x00)
struct FCharacterBoneProjectionState {
	struct FVector Direction; // 0x00(0x0c)
	struct FVector PerpAxis; // 0x0c(0x0c)
	struct FVector InWorldPosition; // 0x18(0x0c)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FQuat InWorldRotator; // 0x30(0x10)
	struct FVector InWorldUp; // 0x40(0x0c)
	struct FName OnBone; // 0x4c(0x08)
	struct FVector InBonePosition; // 0x54(0x0c)
	struct FQuat InBoneRotator; // 0x60(0x10)
	float Age; // 0x70(0x04)
	struct FVector Forward; // 0x74(0x0c)
	bool bForwardValid; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FVector MovementCohesionPoint; // 0x84(0x0c)
	bool bMovementCohesionPoint; // 0x90(0x01)
	bool bProjectionDirty; // 0x91(0x01)
	bool bProjectionValid; // 0x92(0x01)
	bool bHidden; // 0x93(0x01)
	bool bAutoShow; // 0x94(0x01)
	bool bRenderedVisible; // 0x95(0x01)
	bool bRenderTransformDirty; // 0x96(0x01)
	char pad_97[0x9]; // 0x97(0x09)
};

// ScriptStruct Phoenix.CharacterBoneProjection
// Size: 0x40 (Inherited: 0x00)
struct FCharacterBoneProjection {
	struct FVector ProjectionDirection; // 0x00(0x0c)
	struct FVector ProjectionPerpAxis; // 0x0c(0x0c)
	struct FName ProjectionCenter; // 0x18(0x08)
	float ProjectionOffset; // 0x20(0x04)
	struct FCharacterBoneProjectionMotion Motion; // 0x24(0x14)
	float Scale; // 0x38(0x04)
	float HiddenDelay; // 0x3c(0x04)
};

// ScriptStruct Phoenix.CharacterBoneProjectionMotion
// Size: 0x14 (Inherited: 0x00)
struct FCharacterBoneProjectionMotion {
	enum class FCharacterBoneProjectionMotionType MotionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RotationSpeedDegreesPerSecond; // 0x04(0x04)
	float TranslationPeriod; // 0x08(0x04)
	float MaxExtent; // 0x0c(0x04)
	float CrawlingSpeed; // 0x10(0x04)
};

// ScriptStruct Phoenix.SimpleBoneInfoCache
// Size: 0x60 (Inherited: 0x00)
struct FSimpleBoneInfoCache {
	char pad_0[0x10]; // 0x00(0x10)
	struct TMap<struct FName, struct FSimpleBoneInfo> BoneCache; // 0x10(0x50)
};

// ScriptStruct Phoenix.SimpleBoneInfo
// Size: 0xd0 (Inherited: 0x00)
struct FSimpleBoneInfo {
	char pad_0[0xb0]; // 0x00(0xb0)
	struct USkinnedMeshComponent* BoneComponent; // 0xb0(0x08)
	struct USceneComponent* NameNoneComponent; // 0xb8(0x08)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// ScriptStruct Phoenix.CharacterName
// Size: 0x08 (Inherited: 0x00)
struct FCharacterName {
	struct FName CharacterName; // 0x00(0x08)
};

// ScriptStruct Phoenix.CharacterStateHUDStyle
// Size: 0x2c80 (Inherited: 0x08)
struct FCharacterStateHUDStyle : FSlateWidgetStyle {
	struct FTextBlockStyle CurrentActorTextStyle; // 0x08(0x270)
	struct FTextBlockStyle FootPlantTextStyle; // 0x278(0x270)
	struct FTextBlockStyle ChannelTextStyle; // 0x4e8(0x270)
	struct FTextBlockStyle AbilityTextStyle; // 0x758(0x270)
	struct FTextBlockStyle AnimationTextStyle; // 0x9c8(0x270)
	struct FTextBlockStyle AnimationBlendTextStyle; // 0xc38(0x270)
	struct FTextBlockStyle BlendInputTextStyle; // 0xea8(0x270)
	struct FTextBlockStyle PlayRateTextStyle; // 0x1118(0x270)
	struct FTextBlockStyle AdditiveTextStyle; // 0x1388(0x270)
	struct FTextBlockStyle BlendWeightTextStyle; // 0x15f8(0x270)
	struct FTextBlockStyle RootMotionTextStyle; // 0x1868(0x270)
	struct FTextBlockStyle AssetLengthTextStyle; // 0x1ad8(0x270)
	struct FTextBlockStyle GameplayTagTextStyle; // 0x1d48(0x270)
	struct FTextBlockStyle ActorTagTextStyle; // 0x1fb8(0x270)
	struct FTableRowStyle TreeRowStyle; // 0x2228(0x7c8)
	struct FMargin HUDMargin; // 0x29f0(0x10)
	struct FMargin TreeMargin; // 0x2a00(0x10)
	struct FTextBlockStyle AnimationInfoTextStyle; // 0x2a10(0x270)
};

// ScriptStruct Phoenix.CinematicBatchRow
// Size: 0x38 (Inherited: 0x08)
struct FCinematicBatchRow : FTableRowBase {
	struct TSoftObjectPtr<UCinematicBatch> CinematicBatch; // 0x08(0x28)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Phoenix.CinematicRenderJob
// Size: 0xb0 (Inherited: 0x00)
struct FCinematicRenderJob {
	struct FString Suffix; // 0x00(0x10)
	struct FCinematicAvatarSettings AvatarOverrides; // 0x10(0x70)
	struct FTimeInput TimeOfDayOverride; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FWeatherDefinitionName WeatherOverride; // 0x90(0x10)
	struct UCinematicBatchHUD* Overlay; // 0xa0(0x08)
	bool bIsDisabled; // 0xa8(0x01)
	bool bAddToShotgun; // 0xa9(0x01)
	bool bUseViewmodeUnlit; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
};

// ScriptStruct Phoenix.CinematicAvatarSettings
// Size: 0x70 (Inherited: 0x00)
struct FCinematicAvatarSettings {
	struct FHumanCharacterId Character; // 0x00(0x08)
	struct FFullbodyAvatarPreset FullBodyPreset; // 0x08(0x08)
	struct FGenderVoice GenderVoice; // 0x10(0x08)
	struct FGearHeadSlotName HeadGear; // 0x18(0x10)
	struct FGearOutfitSlotName OutfitGear; // 0x28(0x10)
	struct FGearBackSlotName BackGear; // 0x38(0x10)
	struct FGearNeckSlotName NeckGear; // 0x48(0x10)
	struct FGearHandSlotName HandGear; // 0x58(0x10)
	struct FAvatarHouse House; // 0x68(0x08)
};

// ScriptStruct Phoenix.AvatarHouse
// Size: 0x08 (Inherited: 0x00)
struct FAvatarHouse {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Phoenix.GearHandSlotName
// Size: 0x10 (Inherited: 0x10)
struct FGearHandSlotName : FGearName {
};

// ScriptStruct Phoenix.GearNeckSlotName
// Size: 0x10 (Inherited: 0x10)
struct FGearNeckSlotName : FGearName {
};

// ScriptStruct Phoenix.GearBackSlotName
// Size: 0x10 (Inherited: 0x10)
struct FGearBackSlotName : FGearName {
};

// ScriptStruct Phoenix.GearOutfitSlotName
// Size: 0x10 (Inherited: 0x10)
struct FGearOutfitSlotName : FGearName {
};

// ScriptStruct Phoenix.GearHeadSlotName
// Size: 0x10 (Inherited: 0x10)
struct FGearHeadSlotName : FGearName {
};

// ScriptStruct Phoenix.CinematicId
// Size: 0x08 (Inherited: 0x00)
struct FCinematicId {
	struct FName ID; // 0x00(0x08)
};

// ScriptStruct Phoenix.RegionBannerData
// Size: 0x14 (Inherited: 0x00)
struct FRegionBannerData {
	struct FName DisplayName; // 0x00(0x08)
	bool bShowBanner; // 0x08(0x01)
	bool bDoZoom; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float MiniMapZoomTarget; // 0x0c(0x04)
	float MiniMapZoomTime; // 0x10(0x04)
};

// ScriptStruct Phoenix.BoolClothInteractorValue
// Size: 0x02 (Inherited: 0x00)
struct FBoolClothInteractorValue {
	enum class EBoolClothInteractorValueType Type; // 0x00(0x01)
	bool Value; // 0x01(0x01)
};

// ScriptStruct Phoenix.Vector2DClothInteractorValue
// Size: 0x0c (Inherited: 0x00)
struct FVector2DClothInteractorValue {
	enum class ECLothInteractorValueType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Value; // 0x04(0x08)
};

// ScriptStruct Phoenix.VectorClothInteractorValue
// Size: 0x10 (Inherited: 0x00)
struct FVectorClothInteractorValue {
	enum class ECLothInteractorValueType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Value; // 0x04(0x0c)
};

// ScriptStruct Phoenix.IntClothInteractorValue
// Size: 0x08 (Inherited: 0x00)
struct FIntClothInteractorValue {
	enum class ECLothInteractorValueType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct Phoenix.FloatClothInteractorValue
// Size: 0x08 (Inherited: 0x00)
struct FFloatClothInteractorValue {
	enum class ECLothInteractorValueType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct Phoenix.CombatCursedData
// Size: 0x20 (Inherited: 0x00)
struct FCombatCursedData {
	struct TArray<struct UMultiFX2_Base*> ActivateFX2; // 0x00(0x10)
	struct TArray<struct UMultiFX2_Base*> FlairFX2; // 0x10(0x10)
};

// ScriptStruct Phoenix.CombatParryInfo
// Size: 0x20 (Inherited: 0x00)
struct FCombatParryInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.CompanionSettingData
// Size: 0x80 (Inherited: 0x00)
struct FCompanionSettingData {
	float CompanionFarDistance; // 0x00(0x04)
	float CompanionTeleportDistance; // 0x04(0x04)
	float CompanionIdealFollowDistance; // 0x08(0x04)
	float CompanionIdealFollowBufferDistance; // 0x0c(0x04)
	bool bUsePlayerMovement; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MovementDelay; // 0x14(0x04)
	float BypassMovementDelayTimerDistance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	bool bCanSlowWalk; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float StartSlowWalkingProximityRadius; // 0x24(0x04)
	char pad_28[0x4]; // 0x28(0x04)
	bool bCanWalk; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float StartWalkingProximityRadius; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	bool bCanJog; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float StartJoggingProximityRadius; // 0x3c(0x04)
	char pad_40[0x4]; // 0x40(0x04)
	bool bCanSprint; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float StartSprintingProximityRadius; // 0x48(0x04)
	float MaxCompanionCombatDistance; // 0x4c(0x04)
	struct TArray<float> CompanionSpellCooldownMultipliers; // 0x50(0x10)
	float PlayerLowHealthPercentage; // 0x60(0x04)
	float MaxCompanionHealingDistance; // 0x64(0x04)
	float PlayerHealingCooldownTime; // 0x68(0x04)
	float PlayerDownUndetectedTime; // 0x6c(0x04)
	bool UseDisillusionment; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float DisillusionmentCooldownTime; // 0x74(0x04)
	float LumosCooldownTime; // 0x78(0x04)
	float MaximumVoiceoverRange; // 0x7c(0x04)
};

// ScriptStruct Phoenix.CompanionIdentityBuff
// Size: 0x08 (Inherited: 0x00)
struct FCompanionIdentityBuff {
	struct FName AbilityName; // 0x00(0x08)
};

// ScriptStruct Phoenix.CompanionVolumeEntry
// Size: 0x28 (Inherited: 0x00)
struct FCompanionVolumeEntry {
	struct AActor* Volume; // 0x00(0x08)
	struct TWeakObjectPtr<struct APawn> Pawn; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Phoenix.CompanionVolumeSettings
// Size: 0x14 (Inherited: 0x00)
struct FCompanionVolumeSettings {
	float IdealDistanceFromPlayer; // 0x00(0x04)
	bool bDisableInteractions; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float movementDelayTimer; // 0x08(0x04)
	float BufferDistance; // 0x0c(0x04)
	float ReachDistance; // 0x10(0x04)
};

// ScriptStruct Phoenix.CompanionFollowParams
// Size: 0x20 (Inherited: 0x00)
struct FCompanionFollowParams {
	struct FVector FollowLocation; // 0x00(0x0c)
	float ReachDistance; // 0x0c(0x04)
	float BufferDistance; // 0x10(0x04)
	bool bShouldUseTimer; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float movementDelayTimer; // 0x18(0x04)
	float BypassMovementDelayTimerDistance; // 0x1c(0x04)
};

// ScriptStruct Phoenix.ConfundoData
// Size: 0x18 (Inherited: 0x00)
struct FConfundoData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UMultiFX2_Base*> FX2; // 0x08(0x10)
};

// ScriptStruct Phoenix.ConjuredHistoryItem
// Size: 0x10 (Inherited: 0x00)
struct FConjuredHistoryItem {
	struct TArray<struct AActor*> Actors; // 0x00(0x10)
};

// ScriptStruct Phoenix.ConjurationSurfaceMeshBuildParams
// Size: 0x14 (Inherited: 0x00)
struct FConjurationSurfaceMeshBuildParams {
	float MaxAngle; // 0x00(0x04)
	float MaxClimb; // 0x04(0x04)
	float Radius; // 0x08(0x04)
	float BorderSize; // 0x0c(0x04)
	float MinArea; // 0x10(0x04)
};

// ScriptStruct Phoenix.StaticVendorEntry
// Size: 0x18 (Inherited: 0x00)
struct FStaticVendorEntry {
	struct FString CharacterID; // 0x00(0x10)
	bool EnableBeacon; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Phoenix.StaticConversationRegistrationPerUser
// Size: 0x30 (Inherited: 0x00)
struct FStaticConversationRegistrationPerUser {
	struct FString CharacterID; // 0x00(0x10)
	struct TArray<struct FStaticConversationRegistration> Registrations; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct Phoenix.StaticConversationRegistration
// Size: 0x20 (Inherited: 0x00)
struct FStaticConversationRegistration {
	enum class EConversationType ConversationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDialogueConversationReference ArticyConversation; // 0x08(0x10)
	struct UStoryGraph_Conversation* StoryGraph; // 0x18(0x08)
};

// ScriptStruct Phoenix.ConversationRegistration
// Size: 0x160 (Inherited: 0x00)
struct FConversationRegistration {
	char pad_0[0x160]; // 0x00(0x160)
};

// ScriptStruct Phoenix.CreatureCombatStageSpecifier
// Size: 0x0c (Inherited: 0x00)
struct FCreatureCombatStageSpecifier {
	float HealthPercent; // 0x00(0x04)
	int32_t MaxNumChainedAttacks; // 0x04(0x04)
	int32_t NumBehaviorCyclesBeforeReposition; // 0x08(0x04)
};

// ScriptStruct Phoenix.CreatureCombatAttackImpactData
// Size: 0x70 (Inherited: 0x00)
struct FCreatureCombatAttackImpactData {
	struct UCreatureCombatAttackData* AttackData; // 0x00(0x08)
	struct FGameplayTagContainer AnimationArchitectGameplayTags; // 0x08(0x20)
	char pad_28[0x48]; // 0x28(0x48)
};

// ScriptStruct Phoenix.CreatureCombatDataWrapper
// Size: 0x28 (Inherited: 0x00)
struct FCreatureCombatDataWrapper {
	struct UCreatureCombatData* CombatData; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct Phoenix.CreatureCombatAttackParryData
// Size: 0x1c (Inherited: 0x00)
struct FCreatureCombatAttackParryData {
	bool bUnblockableByPlayer; // 0x00(0x01)
	enum class EEnemyShieldBreaker UnblockableByNPC; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ParryLeadIn; // 0x04(0x04)
	float ParryToRelease; // 0x08(0x04)
	float ParryPerfectBegin; // 0x0c(0x04)
	enum class EEnemy_ParryCounterType ParryCounterType; // 0x10(0x01)
	enum class EEnemy_ParryResponseType ParryResponseType; // 0x11(0x01)
	enum class EEnemy_ParryCounterStepDirection ParryCounterStepDirection; // 0x12(0x01)
	enum class EEnemy_ParryCounterStyle ParryCounterStyle; // 0x13(0x01)
	enum class EEnemy_ParryDodgeStyle ParryDodgeStyle; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float ParryAbortDistance; // 0x18(0x04)
};

// ScriptStruct Phoenix.CreatureParticleSurfaceList
// Size: 0x90 (Inherited: 0x00)
struct FCreatureParticleSurfaceList {
	struct FCreatureSurfaceList Large; // 0x00(0x30)
	struct FCreatureSurfaceList Medium; // 0x30(0x30)
	struct FCreatureSurfaceList Small; // 0x60(0x30)
};

// ScriptStruct Phoenix.CreatureSurfaceList
// Size: 0x30 (Inherited: 0x00)
struct FCreatureSurfaceList {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	float LocalParticleScale; // 0x08(0x04)
	float ParticleKickupDirection; // 0x0c(0x04)
	bool UseDecal; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UMaterialInstance* Decal; // 0x18(0x08)
	struct FVector2D DecalRandomSize; // 0x20(0x08)
	bool DirectionalDecal; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t DecalFrameCount; // 0x2c(0x04)
};

// ScriptStruct Phoenix.Creature_GroupCoordination_LocationTag
// Size: 0x24 (Inherited: 0x00)
struct FCreature_GroupCoordination_LocationTag {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct Phoenix.Creature_GroupCoordination_ActorTag
// Size: 0x20 (Inherited: 0x00)
struct FCreature_GroupCoordination_ActorTag {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.CreatureTakeoffMotionData
// Size: 0x38 (Inherited: 0x00)
struct FCreatureTakeoffMotionData {
	struct FGameplayTagContainer AnimationTags; // 0x00(0x20)
	bool bRequiresNavTest; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector2D TestHeadingAngleRange; // 0x24(0x08)
	float TestGroundDistance; // 0x2c(0x04)
	float TestStraightLinePathDistance; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Phoenix.CreatureLandingMotionData
// Size: 0x18 (Inherited: 0x00)
struct FCreatureLandingMotionData {
	float TouchdownTime; // 0x00(0x04)
	float PreTouchdownSpeed; // 0x04(0x04)
	float PostTouchdownSpeed; // 0x08(0x04)
	float PostTouchdownTravelDistance; // 0x0c(0x04)
	float DecelerationDelayTime; // 0x10(0x04)
	float PreferenceFactor; // 0x14(0x04)
};

// ScriptStruct Phoenix.CreatureGaitMotionData
// Size: 0x10 (Inherited: 0x00)
struct FCreatureGaitMotionData {
	float StoppingDistance; // 0x00(0x04)
	float TurnRadius; // 0x04(0x04)
	float TurnRadius180; // 0x08(0x04)
	float TurnLength180; // 0x0c(0x04)
};

// ScriptStruct Phoenix.MountLandingData
// Size: 0x0c (Inherited: 0x00)
struct FMountLandingData {
	float TouchdownTime; // 0x00(0x04)
	float PreTouchdownSpeed; // 0x04(0x04)
	float PostTouchdownSpeed; // 0x08(0x04)
};

// ScriptStruct Phoenix.CreatureFemaleVariationSettings
// Size: 0xe8 (Inherited: 0x00)
struct FCreatureFemaleVariationSettings {
	bool bSwapMeshForFemale; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<USkeletalMesh> FemaleSkeletalMesh; // 0x08(0x28)
	struct TSoftObjectPtr<UObjectArchitectAsset> AudioAsset; // 0x30(0x28)
	struct FCreatureVariation MaterialSwap; // 0x58(0x80)
	struct TArray<struct FCreatureVariation> ColorVariations; // 0xd8(0x10)
};

// ScriptStruct Phoenix.CreatureVariation
// Size: 0x80 (Inherited: 0x00)
struct FCreatureVariation {
	struct FName VariationName; // 0x00(0x08)
	struct TMap<struct FName, struct TSoftObjectPtr<UMaterialInstance>> MaterialSlotsMap; // 0x08(0x50)
	struct TSoftObjectPtr<UObjectArchitectAsset> AudioAsset; // 0x58(0x28)
};

// ScriptStruct Phoenix.CreatureMaleVariationSettings
// Size: 0x60 (Inherited: 0x00)
struct FCreatureMaleVariationSettings {
	struct TSoftObjectPtr<USkeletalMesh> MaleSkeletalMesh; // 0x00(0x28)
	struct TSoftObjectPtr<UObjectArchitectAsset> AudioAsset; // 0x28(0x28)
	struct TArray<struct FCreatureVariation> ColorVariations; // 0x50(0x10)
};

// ScriptStruct Phoenix.CreatureMeshVariation
// Size: 0x58 (Inherited: 0x00)
struct FCreatureMeshVariation {
	struct FName VariationName; // 0x00(0x08)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x08(0x28)
	struct TSoftObjectPtr<UObjectArchitectAsset> AudioAsset; // 0x30(0x28)
};

// ScriptStruct Phoenix.CreatureLookAtBehavior
// Size: 0x90 (Inherited: 0x00)
struct FCreatureLookAtBehavior {
	enum class ETargetID TargetTrackerTargetID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TargetEvaluationMaxLOD; // 0x04(0x04)
	struct FFloatInterval TargetEvaluationInterval; // 0x08(0x08)
	struct UCreatureLookAtTargetEvaluationConfig* TargetEvaluationConfig; // 0x10(0x08)
	float LookAroundMinTime; // 0x18(0x04)
	float LookAroundMaxTime; // 0x1c(0x04)
	float LookAroundMaxPitchUp; // 0x20(0x04)
	float LookAroundMaxPitchDown; // 0x24(0x04)
	float LookAroundMinYaw; // 0x28(0x04)
	float LookAroundMaxYaw; // 0x2c(0x04)
	float LookAroundMinDistance; // 0x30(0x04)
	float LookAroundMaxDistance; // 0x34(0x04)
	char pad_38[0x50]; // 0x38(0x50)
	struct ACreature_Character* OwnerCreature; // 0x88(0x08)
};

// ScriptStruct Phoenix.CreatureMountSpawnLocationHandler
// Size: 0xa0 (Inherited: 0x00)
struct FCreatureMountSpawnLocationHandler {
	struct FVector MountBoxSize; // 0x00(0x0c)
	float FastMountBoxSizeX; // 0x0c(0x04)
	struct FVector2D MinMaxFloorOffset; // 0x10(0x08)
	float RadiusBuffer; // 0x18(0x04)
	float SweepStepSize; // 0x1c(0x04)
	int32_t StepCountPerUpdate; // 0x20(0x04)
	float StepInc; // 0x24(0x04)
	float StepStart; // 0x28(0x04)
	float StepEnd; // 0x2c(0x04)
	bool bSpawnAtRiderZ; // 0x30(0x01)
	bool bDrawDebug; // 0x31(0x01)
	char pad_32[0x6e]; // 0x32(0x6e)
};

// ScriptStruct Phoenix.MountCognitionSenseParams
// Size: 0x18 (Inherited: 0x00)
struct FMountCognitionSenseParams {
	float InteractionRange; // 0x00(0x04)
	float InteractSenseNearHeightDown; // 0x04(0x04)
	float InteractSenseFarHeightDown; // 0x08(0x04)
	float FootprintRadius; // 0x0c(0x04)
	float AutoTargetSenseNearHeightDown; // 0x10(0x04)
	float AutoTargetSenseFarHeightDown; // 0x14(0x04)
};

// ScriptStruct Phoenix.NoMountZoneAvoidanceParams
// Size: 0x1c (Inherited: 0x00)
struct FNoMountZoneAvoidanceParams {
	float FrontTraceLengthGrounded; // 0x00(0x04)
	float FrontTraceLengthGrounded_Jog; // 0x04(0x04)
	float FrontTraceLengthGrounded_Sprint; // 0x08(0x04)
	float FrontTraceLengthGrounded_Charge; // 0x0c(0x04)
	float FrontTraceLengthFlying; // 0x10(0x04)
	float FrontTraceLengthFlying_Slow; // 0x14(0x04)
	float FrontTraceLengthFlying_Fast; // 0x18(0x04)
};

// ScriptStruct Phoenix.CreatureSpawnOverrides
// Size: 0x80 (Inherited: 0x00)
struct FCreatureSpawnOverrides {
	enum class ECreatureAIInitialState StartState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct APathNode* StartPathNode; // 0x08(0x08)
	struct AActor* Cage; // 0x10(0x08)
	enum class ECreatureCageAnimation CageAnimation; // 0x18(0x01)
	bool bOverride_Team; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FString Team; // 0x20(0x10)
	bool bOverride_Gender; // 0x30(0x01)
	bool bGenderIsMaleOverride; // 0x31(0x01)
	bool bIsProtectedFromSpells; // 0x32(0x01)
	bool bIsUncapturable; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FString> AllowedVariations; // 0x38(0x10)
	struct FName NurturingSpaceOverride; // 0x48(0x08)
	bool bOverride_ShouldTAKWhenWild; // 0x50(0x01)
	bool bShouldTAKWhenWildOverride; // 0x51(0x01)
	bool bSpawnFlying; // 0x52(0x01)
	bool bSpawnPerched; // 0x53(0x01)
	bool bPlaySpawnFX; // 0x54(0x01)
	bool bFadeOnSpawn; // 0x55(0x01)
	bool bOverride_FadeWhenFleeing; // 0x56(0x01)
	bool bFadeWhenFleeingOverride; // 0x57(0x01)
	struct TArray<struct ACreaturePerceptionVolume*> PerceptionVolumes; // 0x58(0x10)
	struct ACreatureTetherVolume* TetherVolume; // 0x68(0x08)
	bool bOverride_IsFleeConstrainedByTether; // 0x70(0x01)
	bool bIsFleeConstrainedByTether; // 0x71(0x01)
	bool bOverride_IsPerchingConstrainedByTether; // 0x72(0x01)
	bool bIsPerchingConstrainedByTether; // 0x73(0x01)
	bool bOverride_MaximumFleeMovementSpeed; // 0x74(0x01)
	enum class ECreatureMovementSpeed MaximumFleeMovementSpeed; // 0x75(0x01)
	bool bOverride_CombatMaxDistanceFromTether; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
	float CombatMaxDistanceFromTether; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Phoenix.CreatureActivityThreshold
// Size: 0x10 (Inherited: 0x00)
struct FCreatureActivityThreshold {
	struct FName ActivityName; // 0x00(0x08)
	float HappinessPercentageThreshold; // 0x08(0x04)
	bool bUnlocked; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Phoenix.ActionEnergyData
// Size: 0x0c (Inherited: 0x00)
struct FActionEnergyData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Phoenix.DOTData
// Size: 0x60 (Inherited: 0x00)
struct FDOTData {
	char pad_0[0x10]; // 0x00(0x10)
	struct FName Type; // 0x10(0x08)
	struct FGameplayTagContainer MunitionTagContainer; // 0x18(0x20)
	struct TArray<struct UInteractionArchitectAsset*> MunitionDataAssetArray; // 0x38(0x10)
	struct TArray<struct UMultiFX2_Base*> FX2; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Phoenix.CrucioData
// Size: 0x78 (Inherited: 0x60)
struct FCrucioData : FDOTData {
	char pad_60[0x18]; // 0x60(0x18)
};

// ScriptStruct Phoenix.CrackFillerPostProcessSettings
// Size: 0x1c (Inherited: 0x00)
struct FCrackFillerPostProcessSettings {
	struct FLinearColor CutoffColor; // 0x00(0x10)
	float CutoffDistance; // 0x10(0x04)
	float SkyHoleSize; // 0x14(0x04)
	float SkyHoleHardness; // 0x18(0x04)
};

// ScriptStruct Phoenix.CurriculumKnowledgeRequirement
// Size: 0x18 (Inherited: 0x00)
struct FCurriculumKnowledgeRequirement {
	struct FString KnowledgeCardName; // 0x00(0x10)
	int32_t RequiredLevel; // 0x10(0x04)
	int32_t CurrentLevel; // 0x14(0x04)
};

// ScriptStruct Phoenix.Curriculum_YearData_Updated
// Size: 0x30 (Inherited: 0x00)
struct FCurriculum_YearData_Updated {
	struct TArray<struct FCurriculumRequirements_Updated> UncompletedTurnIns; // 0x00(0x10)
	struct TArray<struct FCurriculumRequirements_Updated> CompletedTurnIns; // 0x10(0x10)
	struct TArray<struct FVCSlot> YearRewards; // 0x20(0x10)
};

// ScriptStruct Phoenix.VCSlot
// Size: 0x58 (Inherited: 0x00)
struct FVCSlot {
	struct FString ID; // 0x00(0x10)
	enum class EVCType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Quantity; // 0x14(0x04)
	int32_t QuantityHigh; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Quality; // 0x20(0x10)
	struct FString QualityHigh; // 0x30(0x10)
	bool ItemIsUnique; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t ItemRandomWeight; // 0x44(0x04)
	int32_t ItemWeightAdjust; // 0x48(0x04)
	bool bShowInCurriculumRewards; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FName ItemType; // 0x50(0x08)
};

// ScriptStruct Phoenix.CurriculumRequirements_Updated
// Size: 0x50 (Inherited: 0x00)
struct FCurriculumRequirements_Updated {
	enum class ETurnInType TurnInType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString TurnInID; // 0x08(0x10)
	struct FString TurnInNPC; // 0x18(0x10)
	int32_t Quantity; // 0x28(0x04)
	int32_t Tier; // 0x2c(0x04)
	struct FString Detail; // 0x30(0x10)
	struct TArray<struct FName> RelatedItems; // 0x40(0x10)
};

// ScriptStruct Phoenix.TurnInItem
// Size: 0x18 (Inherited: 0x00)
struct FTurnInItem {
	struct FString ObjectID; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.DamageInfo
// Size: 0x1c8 (Inherited: 0x00)
struct FDamageInfo {
	float Amount; // 0x00(0x04)
	bool bIsCritical; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FHitResult HitResult; // 0x08(0x88)
	struct FGameplayTagContainer MunitionTagContainer; // 0x90(0x20)
	struct TArray<struct UInteractionArchitectAsset*> MunitionDataAssets; // 0xb0(0x10)
	struct AActor* TargetActor; // 0xc0(0x08)
	struct AActor* DestinationActor; // 0xc8(0x08)
	struct UPrimitiveComponent* TargetComp; // 0xd0(0x08)
	struct AActor* Instigator; // 0xd8(0x08)
	struct AMunitionType_Base* Munition; // 0xe0(0x08)
	struct FVector Velocity; // 0xe8(0x0c)
	struct FVector ImpactDirection; // 0xf4(0x0c)
	struct FVector ImpactNormal; // 0x100(0x0c)
	struct FVector ImpactPoint; // 0x10c(0x0c)
	struct FVector SourcePoint; // 0x118(0x0c)
	struct FVector DestinationPoint; // 0x124(0x0c)
	enum class EImpactTypes ImpactType; // 0x130(0x01)
	bool bIgnoreDamageThreshold; // 0x131(0x01)
	bool bImpactOnFire; // 0x132(0x01)
	bool bSkipImpactSound; // 0x133(0x01)
	bool bPlayerShieldBreaker; // 0x134(0x01)
	enum class EEnemyShieldBreaker EnemyShieldBreaker; // 0x135(0x01)
	bool bCursedDamage; // 0x136(0x01)
	bool bCollisionDamage; // 0x137(0x01)
	bool bDeadlyAttack; // 0x138(0x01)
	bool bFinisher; // 0x139(0x01)
	bool bAlwaysKillTarget; // 0x13a(0x01)
	bool bNoReaction; // 0x13b(0x01)
	bool bOnlyCalculateDamage; // 0x13c(0x01)
	bool bNonLethal; // 0x13d(0x01)
	bool bDOT; // 0x13e(0x01)
	bool bPhysicsCollision; // 0x13f(0x01)
	bool bRestoreBroken; // 0x140(0x01)
	bool bApplyEvenWhenBlocking; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	float DestructionForce; // 0x144(0x04)
	float RadialDestructionForce; // 0x148(0x04)
	float Force; // 0x14c(0x04)
	float DestroyPieceVFXRadius; // 0x150(0x04)
	float Duration; // 0x154(0x04)
	struct FMultiVfx DestroyPieceVFX; // 0x158(0x18)
	struct ASpellTool* SpellTool; // 0x170(0x08)
	struct FName BoneName; // 0x178(0x08)
	struct TWeakObjectPtr<struct UAblReactionData> OutReactionData; // 0x180(0x08)
	float CharacterDamage; // 0x188(0x04)
	float FallDamagePercent; // 0x18c(0x04)
	char pad_190[0x38]; // 0x190(0x38)
};

// ScriptStruct Phoenix.MultiBase
// Size: 0x08 (Inherited: 0x00)
struct FMultiBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.MultiVfx
// Size: 0x18 (Inherited: 0x08)
struct FMultiVfx : FMultiBase {
	struct UParticleSystem* VFX; // 0x08(0x08)
	struct UNiagaraSystem* NiagaraVFX; // 0x10(0x08)
};

// ScriptStruct Phoenix.DatabaseLockList
// Size: 0x08 (Inherited: 0x00)
struct FDatabaseLockList {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Phoenix.DatabaseMissionList
// Size: 0x08 (Inherited: 0x00)
struct FDatabaseMissionList {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Phoenix.DatabaseName
// Size: 0x10 (Inherited: 0x00)
struct FDatabaseName {
	struct FName DBSubType; // 0x00(0x08)
	struct FName DBName; // 0x08(0x08)
};

// ScriptStruct Phoenix.MapDebugPane
// Size: 0x70 (Inherited: 0x00)
struct FMapDebugPane {
	char pad_0[0x58]; // 0x00(0x58)
	struct UCanvasPanel* CanvasPanel; // 0x58(0x08)
	struct TArray<struct FMapDebugPaneItem> TextBlocks; // 0x60(0x10)
};

// ScriptStruct Phoenix.MapDebugPaneItem
// Size: 0x10 (Inherited: 0x00)
struct FMapDebugPaneItem {
	struct UTextBlock* TextBlock; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Phoenix.DeflectionData
// Size: 0x18 (Inherited: 0x00)
struct FDeflectionData {
	struct TArray<struct UMultiFX2_Base*> DeflectedFX2; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Phoenix.DevilsSnareLumosReact
// Size: 0x08 (Inherited: 0x00)
struct FDevilsSnareLumosReact {
	float Distance; // 0x00(0x04)
	float RecoilPercent; // 0x04(0x04)
};

// ScriptStruct Phoenix.DevilsSnareInfo
// Size: 0x28 (Inherited: 0x00)
struct FDevilsSnareInfo {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	struct UMaterialInstance* Material; // 0x08(0x08)
	struct FVector OffsetForAreaOfEffectVolume; // 0x10(0x0c)
	struct FVector IncreaseExtentsForAreaOfEffectVolume; // 0x1c(0x0c)
};

// ScriptStruct Phoenix.DialogueSequenceRuleInstance
// Size: 0x268 (Inherited: 0x00)
struct FDialogueSequenceRuleInstance {
	char pad_0[0x20]; // 0x00(0x20)
	struct UStoryNode_DialogueSequence* DSNode; // 0x20(0x08)
	bool CalledFromEditor; // 0x28(0x01)
	bool StopWhenAttachedToDestroyed; // 0x29(0x01)
	bool CreateTransformActions; // 0x2a(0x01)
	bool CreateChracterOptions; // 0x2b(0x01)
	char AudioDialogueFlags; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct USceneRigProxyActor* CameraProxyActor; // 0x30(0x08)
	struct AActor* CameraActor; // 0x38(0x08)
	struct TArray<struct FName> CastIDs; // 0x40(0x10)
	struct TArray<struct AActor*> CastActors; // 0x50(0x10)
	struct TMap<struct FName, struct USceneRigProxyActor*> IDToElement; // 0x60(0x50)
	struct TMap<struct AActor*, struct USceneRigProxyActor*> ActorToElement; // 0xb0(0x50)
	struct TMap<struct FName, struct AActor*> IDToActor; // 0x100(0x50)
	struct TMap<struct AActor*, struct FName> ActorToID; // 0x150(0x50)
	struct TArray<struct UDialogueLineRuleState*> LineRuleStates; // 0x1a0(0x10)
	char pad_1B0[0x78]; // 0x1b0(0x78)
	struct TArray<struct USceneAction_Animation*> CameraAnimationActionHistory; // 0x228(0x10)
	struct TArray<struct USceneAction_CameraFixup*> CameraFixupActionHistory; // 0x238(0x10)
	struct TArray<struct USceneAction_Transform*> CameraTransformActionHistory; // 0x248(0x10)
	struct TArray<struct USceneAction_Camera*> CameraActionHistory; // 0x258(0x10)
};

// ScriptStruct Phoenix.DisillusionmentData
// Size: 0x28 (Inherited: 0x00)
struct FDisillusionmentData {
	struct UMaterialInterface* EffectMat; // 0x00(0x08)
	struct TArray<struct UMultiFX2_Base*> DisillusionmentFX2; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Phoenix.DuelTechniqueDefinition
// Size: 0x190 (Inherited: 0x00)
struct FDuelTechniqueDefinition {
	char pad_0[0x190]; // 0x00(0x190)
};

// ScriptStruct Phoenix.DuelTechniqueEncounterState
// Size: 0x10 (Inherited: 0x00)
struct FDuelTechniqueEncounterState {
	struct TArray<struct UDuelTechniqueState*> Items; // 0x00(0x10)
};

// ScriptStruct Phoenix.DuelTechnique_UIData
// Size: 0x20 (Inherited: 0x00)
struct FDuelTechnique_UIData {
	struct FString TechniqueDesc; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	bool ValueIsCount; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName TechniqueID; // 0x18(0x08)
};

// ScriptStruct Phoenix.CullDistanceMinMax
// Size: 0x08 (Inherited: 0x00)
struct FCullDistanceMinMax {
	int32_t Min; // 0x00(0x04)
	int32_t Max; // 0x04(0x04)
};

// ScriptStruct Phoenix.AddedFoliageInstancesDataList
// Size: 0x10 (Inherited: 0x00)
struct FAddedFoliageInstancesDataList {
	struct TArray<struct FAddedFoliageInstancesData> Data; // 0x00(0x10)
};

// ScriptStruct Phoenix.AddedFoliageInstancesData
// Size: 0x08 (Inherited: 0x00)
struct FAddedFoliageInstancesData {
	int32_t WorldFoliageDataIndex; // 0x00(0x04)
	int32_t FoliageTransformsIndex; // 0x04(0x04)
};

// ScriptStruct Phoenix.WorldFoliageData
// Size: 0xf0 (Inherited: 0x00)
struct FWorldFoliageData {
	struct TSoftObjectPtr<UWorld> Level; // 0x00(0x28)
	struct FVector LevelBoundsLocation; // 0x28(0x0c)
	struct FBox LevelBoundsMinMax; // 0x34(0x1c)
	float LevelBoundsRadius; // 0x50(0x04)
	char pad_54[0x1c]; // 0x54(0x1c)
	struct TArray<struct FTransform> FoliageTransforms; // 0x70(0x10)
	struct TArray<int32_t> ComponentAssignedTo; // 0x80(0x10)
	struct TArray<int32_t> AddedInstancesIndex; // 0x90(0x10)
	struct TArray<int32_t> TypeIndex; // 0xa0(0x10)
	struct FString LevelName; // 0xb0(0x10)
	int32_t NumInstances; // 0xc0(0x04)
	int32_t NumAddedInstances; // 0xc4(0x04)
	bool bNeedsUpdate; // 0xc8(0x01)
	enum class ETileState CurrentState; // 0xc9(0x01)
	char pad_CA[0x26]; // 0xca(0x26)
};

// ScriptStruct Phoenix.ObjectSpawnTime
// Size: 0x0c (Inherited: 0x00)
struct FObjectSpawnTime {
	int32_t Spawn24Hour; // 0x00(0x04)
	int32_t SpawnMinute; // 0x04(0x04)
	int32_t SpawnSecond; // 0x08(0x04)
};

// ScriptStruct Phoenix.ObjectHabitatFoliageType
// Size: 0x10 (Inherited: 0x00)
struct FObjectHabitatFoliageType {
	struct UFoliageType_InstancedStaticMesh* FoliageType; // 0x00(0x08)
	float MinFoliageDensity; // 0x08(0x04)
	bool bRequired; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Phoenix.ObjectFallbackData
// Size: 0x10 (Inherited: 0x00)
struct FObjectFallbackData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.ObjectTrackerData
// Size: 0x20 (Inherited: 0x00)
struct FObjectTrackerData {
	struct FString AssetType; // 0x00(0x10)
	struct TArray<struct AActor*> ChildObjects; // 0x10(0x10)
};

// ScriptStruct Phoenix.SpellToolPreloadData
// Size: 0x18 (Inherited: 0x00)
struct FSpellToolPreloadData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.DynamicObjectLoadInfo
// Size: 0x5c0 (Inherited: 0x00)
struct FDynamicObjectLoadInfo {
	bool bIsPersistent; // 0x00(0x01)
	bool bFindValidPostion; // 0x01(0x01)
	bool bIsQuestRelevant; // 0x02(0x01)
	char pad_3[0xd]; // 0x03(0x0d)
	struct FTransform InTransform; // 0x10(0x30)
	struct FEnemy_CharacterParams EnemyParams; // 0x40(0x490)
	struct FCreatureSpawnOverrides CreatureSpawnOverrides; // 0x4d0(0x80)
	float SearchRadius; // 0x550(0x04)
	int32_t ParentID; // 0x554(0x04)
	int32_t ObjectID; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct FString TeamAssignment; // 0x560(0x10)
	struct FString LootGroupOverride; // 0x570(0x10)
	struct FString ScheduleFilter; // 0x580(0x10)
	struct FString ScheduleTable; // 0x590(0x10)
	struct FString WorldID; // 0x5a0(0x10)
	struct FString LevelOverride; // 0x5b0(0x10)
};

// ScriptStruct Phoenix.Enemy_CharacterParams
// Size: 0x490 (Inherited: 0x00)
struct FEnemy_CharacterParams {
	enum class ENPC_Spawn SpawnType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString SpawnInLocation; // 0x08(0x10)
	struct TArray<struct AActor*> SpawnIgnoreActors; // 0x18(0x10)
	enum class EEnemy_CharacterState State; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float StationaryTimer; // 0x2c(0x04)
	bool bOverrideShowUI; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FNPC_ShowUI ShowUI; // 0x34(0x0c)
	bool AllowBeacon; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FEnemy_SpawnFreeze> SpawnFreezeParams; // 0x48(0x10)
	struct TArray<struct FEnemy_SpawnFollowSpline> SpawnSplineParams; // 0x58(0x10)
	struct TArray<struct FEnemy_SpawnFollowSpline> SpawnSmokeSplineParams; // 0x68(0x10)
	struct TArray<struct FEnemy_AttackGroup> AttackGroupParams; // 0x78(0x10)
	struct TArray<struct FEnemy_SpawnAsleep> SpawnAsleepParams; // 0x88(0x10)
	struct TArray<struct FEnemy_JumpSplineSpawn> SpawnJumpSplineParams; // 0x98(0x10)
	struct APathNode* PathNodePtr; // 0xa8(0x08)
	enum class ENPC_PathSpec OverridePathSpec; // 0xb0(0x01)
	bool bShutdownOptimizationAllowed; // 0xb1(0x01)
	bool bOverrideOptimizationSettings; // 0xb2(0x01)
	char pad_B3[0x1]; // 0xb3(0x01)
	struct FNPC_OptimizationSettings OverrideOptimizationSettings; // 0xb4(0x28)
	bool bNotDamageableUntilDistanceEnabled; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float NotDamageableUntilDistance; // 0xe0(0x04)
	enum class ENPC_GameContext RequiredGameContext; // 0xe4(0x01)
	bool bPerceptionEnable; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	float PerceptionEnableTimer; // 0xe8(0x04)
	bool bPerceptionDisabledUntilAttacked; // 0xec(0x01)
	bool bOnPlayerTeamUntilAttacked; // 0xed(0x01)
	bool bPlayerOnlyPerception; // 0xee(0x01)
	bool bForcePlayerPerception; // 0xef(0x01)
	bool bAllowForceWhenInDisillusionment; // 0xf0(0x01)
	bool bExcludePlayerPerception; // 0xf1(0x01)
	bool bReinforcementPlayerPerception; // 0xf2(0x01)
	char pad_F3[0x1]; // 0xf3(0x01)
	float ForcePerceptionDistance; // 0xf4(0x04)
	float ForcePerceptionTimeout; // 0xf8(0x04)
	bool bExcludeFromPlayerRelTracking; // 0xfc(0x01)
	bool bPlayCameraCutOnDeath; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	struct UEnemy_TargetSenseAsset* OverrideTargetSenseAsset; // 0x100(0x08)
	float TargetAwareStateRateScale; // 0x108(0x04)
	bool bTargetAwareStateInstantAggro; // 0x10c(0x01)
	bool bOverrideAlertUIRate; // 0x10d(0x01)
	char pad_10E[0x2]; // 0x10e(0x02)
	float AlertUIRate; // 0x110(0x04)
	bool bAggroBehaviorEnabled; // 0x114(0x01)
	bool bLootDropEnable; // 0x115(0x01)
	bool bPerceiveVolumeIgnoreWhenAware; // 0x116(0x01)
	char pad_117[0x1]; // 0x117(0x01)
	struct TArray<struct APerceptionPointArea*> PerceiveVolumeList; // 0x118(0x10)
	struct TArray<struct APerceptionPointArea*> ForceTargetVolumeList; // 0x128(0x10)
	bool bForceVolumeRequireLOS; // 0x138(0x01)
	bool bForceVolumeRequireDistance; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	float ForceVolumeMaxDistance; // 0x13c(0x04)
	struct TArray<struct APerceptionPointArea*> ForceTargetExcludeVolumeList; // 0x140(0x10)
	struct TArray<struct APerceptionPointArea*> TeamateShareVolumeList; // 0x150(0x10)
	struct TArray<struct APerceptionPointArea*> StayInVolumeList; // 0x160(0x10)
	bool bCanRemoveStayInVolumes; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	float StayInRadius; // 0x174(0x04)
	float StayInVolumeTeleportTimeout; // 0x178(0x04)
	bool bStayInVolumeOffNavTeleport; // 0x17c(0x01)
	bool bOnlyKillIfNotInAnyAliveVolume; // 0x17d(0x01)
	char pad_17E[0x2]; // 0x17e(0x02)
	struct TArray<struct APerceptionPointArea*> AliveVolumeList; // 0x180(0x10)
	struct TArray<struct APerceptionPointArea*> KillVolumeList; // 0x190(0x10)
	enum class ENPC_Tether WanderTetherType; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	float WanderTetherDist; // 0x1a4(0x04)
	struct FVector WanderTetherLoc; // 0x1a8(0x0c)
	bool bDisableApparateToMove; // 0x1b4(0x01)
	bool bDisableApparateIfUnreachableLoc; // 0x1b5(0x01)
	bool bFacePlayerOnSpawn; // 0x1b6(0x01)
	char pad_1B7[0x1]; // 0x1b7(0x01)
	int32_t LevelScaleMinOverride; // 0x1b8(0x04)
	int32_t LevelScaleMaxOverride; // 0x1bc(0x04)
	int32_t LevelOffsetOverride; // 0x1c0(0x04)
	struct FPerPlatformInt PerPlatformLevelOffsetOverride; // 0x1c4(0x04)
	bool bSpawnActorDead; // 0x1c8(0x01)
	bool bAllowsDeadSpawn; // 0x1c9(0x01)
	bool bSpawnActorInjured; // 0x1ca(0x01)
	bool bPlayCharacterVOonSpawn; // 0x1cb(0x01)
	float ResetTime; // 0x1cc(0x04)
	enum class EEnemyAIState DisengageState; // 0x1d0(0x01)
	bool bOverrideDeathEffects; // 0x1d1(0x01)
	bool bDestroyOnDeath; // 0x1d2(0x01)
	bool bDoDeathCamOnDeath; // 0x1d3(0x01)
	bool bDoBulletTimeOnDeath; // 0x1d4(0x01)
	bool bDissolveOnDeath; // 0x1d5(0x01)
	bool bFadeOnDeath; // 0x1d6(0x01)
	char pad_1D7[0x1]; // 0x1d7(0x01)
	struct TArray<struct UEnemyAIAttackData*> ExcludeAttackList; // 0x1d8(0x10)
	float RangeScale; // 0x1e8(0x04)
	float DoDamageScale; // 0x1ec(0x04)
	float DoDamageVsPlayerScale; // 0x1f0(0x04)
	bool bUseAttackTicketOverride; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	struct FString GlobalAttackTicketOverride; // 0x1f8(0x10)
	bool bNumTicketsOverride; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	int32_t NumTickets; // 0x20c(0x04)
	bool bTicketCooldownOverride; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	float TicketCooldown; // 0x214(0x04)
	bool bAttackWithoutRestrictions; // 0x218(0x01)
	bool bAlwaysMyTurn; // 0x219(0x01)
	bool bNoAttackExecuteCooldown; // 0x21a(0x01)
	bool bNoAttackSelectCooldown; // 0x21b(0x01)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct FEnemy_InflictedDamageOverTimeData InflictedDamageOverTimeData; // 0x220(0x10)
	struct FEnemy_TargetSelectionData TargetSelectionData; // 0x230(0x18)
	bool bPriorityWeightOverride; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	float PriorityWeight; // 0x24c(0x04)
	char pad_250[0x240]; // 0x250(0x240)
};

// ScriptStruct Phoenix.Enemy_TargetSelectionData
// Size: 0x18 (Inherited: 0x00)
struct FEnemy_TargetSelectionData {
	struct FName TargetSelectionScoreSet; // 0x00(0x08)
	struct TArray<struct FEnemy_TargetPriority> TargetPriorityList; // 0x08(0x10)
};

// ScriptStruct Phoenix.Enemy_TargetPriority
// Size: 0x0c (Inherited: 0x00)
struct FEnemy_TargetPriority {
	struct FName TargetSubTypeID; // 0x00(0x08)
	float PriorityMult; // 0x08(0x04)
};

// ScriptStruct Phoenix.Enemy_InflictedDamageOverTimeData
// Size: 0x10 (Inherited: 0x00)
struct FEnemy_InflictedDamageOverTimeData {
	struct TArray<struct FEnemy_InflictedDamageOverTime> InflictedDamageOverTimeList; // 0x00(0x10)
};

// ScriptStruct Phoenix.Enemy_InflictedDamageOverTime
// Size: 0x10 (Inherited: 0x00)
struct FEnemy_InflictedDamageOverTime {
	float FromTime; // 0x00(0x04)
	float ToTime; // 0x04(0x04)
	float FromNPCDamageMult; // 0x08(0x04)
	float FromPlayerDamageMult; // 0x0c(0x04)
};

// ScriptStruct Phoenix.NPC_OptimizationSettings
// Size: 0x28 (Inherited: 0x00)
struct FNPC_OptimizationSettings {
	float NonCAnimationTickDist; // 0x00(0x04)
	float CAnimationTickDist; // 0x04(0x04)
	float NonCShutdownDist; // 0x08(0x04)
	float CShutdownMinDist; // 0x0c(0x04)
	float CShutdownDist; // 0x10(0x04)
	float NonCRenderedShutdown; // 0x14(0x04)
	float CNotRenderedShutdownNear; // 0x18(0x04)
	float CNotRenderedShutdownFar; // 0x1c(0x04)
	float ShutdownMaxDist; // 0x20(0x04)
	float RenderMaxDist; // 0x24(0x04)
};

// ScriptStruct Phoenix.Enemy_SpawmParams
// Size: 0x01 (Inherited: 0x00)
struct FEnemy_SpawmParams {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.Enemy_JumpSplineSpawn
// Size: 0x90 (Inherited: 0x01)
struct FEnemy_JumpSplineSpawn : FEnemy_SpawmParams {
	bool bFreezeUntilReleased; // 0x00(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FGameplayTagContainer FreezeAATagContainer; // 0x08(0x20)
	float FreezeAnimOffset; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FNPC_JumpSplineData JumpSplineParams; // 0x30(0x40)
	struct FGameplayTagContainer JumpSplineAATagContainer; // 0x70(0x20)
};

// ScriptStruct Phoenix.NPC_JumpSplineData
// Size: 0x40 (Inherited: 0x00)
struct FNPC_JumpSplineData {
	struct ANPC_Spline* SplinePtr; // 0x00(0x08)
	bool bLimitMinMaxSpeed; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MinSpeed; // 0x0c(0x04)
	float MaxSpeed; // 0x10(0x04)
	float SpeedScale; // 0x14(0x04)
	float GravityScalePostApex; // 0x18(0x04)
	float GravityScalePostApexInterpRate; // 0x1c(0x04)
	bool bOverrideStartSpeed; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float OverrideStartSpeed; // 0x24(0x04)
	bool bOverrideGravity; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float OverrideGravity; // 0x2c(0x04)
	float RotateToFaceRate; // 0x30(0x04)
	float InterpToSplineInitialRate; // 0x34(0x04)
	float InterpToSplineRate; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Phoenix.Enemy_SpawnAsleep
// Size: 0x38 (Inherited: 0x01)
struct FEnemy_SpawnAsleep : FEnemy_SpawmParams {
	struct TArray<struct APerceptionPointArea*> WakeupVolumeList; // 0x00(0x10)
	struct FGameplayTagContainer AATagContainer; // 0x10(0x20)
	float AnimOffset; // 0x30(0x04)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Phoenix.Enemy_AttackGroup
// Size: 0x30 (Inherited: 0x00)
struct FEnemy_AttackGroup {
	struct FGameplayTag Tag; // 0x00(0x08)
	int32_t MaxAttacking; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct APerceptionPointArea*> StandbyVolumeList; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct Phoenix.Enemy_SpawnFollowSpline
// Size: 0xa8 (Inherited: 0x01)
struct FEnemy_SpawnFollowSpline : FEnemy_SpawmParams {
	struct ANPC_Spline* SplinePtr; // 0x00(0x08)
	bool bUseLerpedSplineNormals; // 0x08(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FVector SplineLocalOffset; // 0x0c(0x0c)
	float MinSpeed; // 0x18(0x04)
	float MaxSpeed; // 0x1c(0x04)
	float MoveScale; // 0x20(0x04)
	float Acceleration; // 0x24(0x04)
	float Deceleration; // 0x28(0x04)
	float speedRampDist; // 0x2c(0x04)
	float speedRampAccel; // 0x30(0x04)
	enum class ENPC_FollowSplineDirection StartDirection; // 0x34(0x01)
	enum class ENPC_Mobility Mobility; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float StartDist; // 0x38(0x04)
	float StartSplineDelay; // 0x3c(0x04)
	float StartSplineDeviation; // 0x40(0x04)
	bool bWaitToStart; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float SplineInterval; // 0x48(0x04)
	float SplineIntervalDeviation; // 0x4c(0x04)
	float SplineIdleChance; // 0x50(0x04)
	float IdleMinInterval; // 0x54(0x04)
	enum class ENPC_FollowSplineScurryState ScurryState; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float ScurryProximityRadius; // 0x5c(0x04)
	float ScurryCheckInterval; // 0x60(0x04)
	float ScurryCheckIntervalDeviation; // 0x64(0x04)
	float ScurryChance; // 0x68(0x04)
	float ScurryMinSpeed; // 0x6c(0x04)
	float ScurryMaxSpeed; // 0x70(0x04)
	float ScurryInterval; // 0x74(0x04)
	float ScurryIntervalDeviation; // 0x78(0x04)
	enum class ENPC_FollowSplineEndAction EndAction; // 0x7c(0x01)
	bool bOnDieLeaveBehindBody; // 0x7d(0x01)
	bool bAttemptAOEWhenReachingEnd; // 0x7e(0x01)
	char pad_7F[0x1]; // 0x7f(0x01)
	float EndTimout; // 0x80(0x04)
	enum class EEnemyAIState EndState; // 0x84(0x01)
	bool bPerceptionEnabled; // 0x85(0x01)
	bool bOnPerceptionEndBypassAlert; // 0x86(0x01)
	bool bPerceptionEnabledOnNavMesh; // 0x87(0x01)
	bool bPerceptionEnableRequireDistance; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float PerceptionEnableMaxDistance; // 0x8c(0x04)
	bool bOverrideShowUI; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FNPC_ShowUI ShowUI; // 0x94(0x0c)
	bool bTargetable; // 0xa0(0x01)
	bool bPerceivable; // 0xa1(0x01)
	bool bStealthKillable; // 0xa2(0x01)
	bool bCollidable; // 0xa3(0x01)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct Phoenix.NPC_ShowUI
// Size: 0x0c (Inherited: 0x00)
struct FNPC_ShowUI {
	bool bShowName; // 0x00(0x01)
	bool bShowHealthBar; // 0x01(0x01)
	bool bShowBadge; // 0x02(0x01)
	bool bShowCallout; // 0x03(0x01)
	bool bShowDamage; // 0x04(0x01)
	bool bShowPerceptionIndicator; // 0x05(0x01)
	enum class ENPC_ShowUIPerceptionIndicatorMode ShowPerceptionIndicatorMode; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	int32_t ShowMiniMapPerceptionCone; // 0x08(0x04)
};

// ScriptStruct Phoenix.Enemy_SpawnFreeze
// Size: 0x28 (Inherited: 0x01)
struct FEnemy_SpawnFreeze : FEnemy_SpawmParams {
	struct FGameplayTagContainer AATagContainer; // 0x00(0x20)
	float AnimOffset; // 0x20(0x04)
	bool bBranchOnRelease; // 0x24(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct Phoenix.DynamicObjectSpawnData
// Size: 0x80 (Inherited: 0x00)
struct FDynamicObjectSpawnData {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct Phoenix.DynamicObjectLoadData
// Size: 0x38 (Inherited: 0x00)
struct FDynamicObjectLoadData {
	char pad_0[0x28]; // 0x00(0x28)
	struct FMulticastInlineDelegate m_onLoadCompleteDelegate; // 0x28(0x10)
};

// ScriptStruct Phoenix.EditorToolIconInfo
// Size: 0x68 (Inherited: 0x08)
struct FEditorToolIconInfo : FTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x08(0x28)
	struct TSoftClassPtr<UObject> ClassUsedBy; // 0x30(0x28)
	struct FString Description; // 0x58(0x10)
};

// ScriptStruct Phoenix.SpawnInfoGroup
// Size: 0x48 (Inherited: 0x00)
struct FSpawnInfoGroup {
	struct UDynamicObjectInfo* SpawnType; // 0x00(0x08)
	struct TArray<struct ASpawnLocation*> SpawnLocations; // 0x08(0x10)
	float MinDelayBetweenSpawns; // 0x18(0x04)
	float MaxDelayBetweenSpawns; // 0x1c(0x04)
	struct TArray<struct AActor*> ActiveInstances; // 0x20(0x10)
	int32_t InstanceCount; // 0x30(0x04)
	int32_t TargetCount; // 0x34(0x04)
	enum class EDynamicObjectSpawnerState SpawnState; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FTimerHandle TimerHandle; // 0x40(0x08)
};

// ScriptStruct Phoenix.EncounterGroupInfo
// Size: 0x28 (Inherited: 0x00)
struct FEncounterGroupInfo {
	bool bIsPersistent; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct ASpawnLocation*> EncounterSpawnLocations; // 0x08(0x10)
	float SpawnProbability; // 0x18(0x04)
	bool bForceSpawnOnFloor; // 0x1c(0x01)
	bool bUseScatterSpawn; // 0x1d(0x01)
	bool bSpawnOnNavMesh; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float RadiusForNavCheck; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Phoenix.DynamicObjectGroupInfo
// Size: 0x528 (Inherited: 0x00)
struct FDynamicObjectGroupInfo {
	struct FDbSingleColumnInfo SpawnCategoryType; // 0x00(0x88)
	struct FGameplayTag TagRestriction; // 0x88(0x08)
	bool bIsPersistent; // 0x90(0x01)
	bool bSpawnRagdollIfDead; // 0x91(0x01)
	bool bSpawnAllDead; // 0x92(0x01)
	bool bSpawnBlind; // 0x93(0x01)
	bool bSpawnInjured; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct TArray<struct ASpawnLocation*> SpawnLocations; // 0x98(0x10)
	int32_t MinActorCount; // 0xa8(0x04)
	int32_t MaxActorCount; // 0xac(0x04)
	struct FPerPlatformInt OverrideMinActorCount; // 0xb0(0x04)
	struct FPerPlatformInt OverrideMaxActorCount; // 0xb4(0x04)
	float MinDelayBetweenSpawns; // 0xb8(0x04)
	float MaxDelayBetweenSpawns; // 0xbc(0x04)
	float SpawnProbability; // 0xc0(0x04)
	bool bApplyDelayOnFirstSpawn; // 0xc4(0x01)
	bool bApplyDelayWhenCulling; // 0xc5(0x01)
	bool SpawnOnlyOneOfTheGroup; // 0xc6(0x01)
	bool bForceSpawnOnFloor; // 0xc7(0x01)
	bool bSpawnOnNavMesh; // 0xc8(0x01)
	enum class ESpawnActorCollisionHandlingMethod CollisionHandlingMethod; // 0xc9(0x01)
	bool bUseScatterSpawn; // 0xca(0x01)
	char pad_CB[0x1]; // 0xcb(0x01)
	float FloorSweepDistanceZ; // 0xcc(0x04)
	float RadiusForNavCheck; // 0xd0(0x04)
	float SpawnTimeout; // 0xd4(0x04)
	int32_t GatherDataRetryMax; // 0xd8(0x04)
	float GatherDataTimout; // 0xdc(0x04)
	bool bAllowSyncGatherOnTimout; // 0xe0(0x01)
	enum class ENPC_Spawn SpawnTypeOverride; // 0xe1(0x01)
	enum class EEnemy_CharacterState SpawnStateOverride; // 0xe2(0x01)
	bool bAllowLookOverride; // 0xe3(0x01)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FDbSingleColumnInfo SpawnLookOverride; // 0xe8(0x88)
	bool bAllowVoiceOverride; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct FDbSingleColumnInfo SpawnVoiceOverride; // 0x178(0x88)
	enum class EUIHealthBarType HealthBarType; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct APerformTasksForAI* PerformTaskTrigger; // 0x208(0x08)
	bool StartPerformTaskWhenSpawned; // 0x210(0x01)
	bool StartPerformTaskWhenResurrected; // 0x211(0x01)
	bool LoopPerformTask; // 0x212(0x01)
	bool ForceSEMode; // 0x213(0x01)
	char pad_214[0x24]; // 0x214(0x24)
	struct TArray<struct AActor*> ActiveInstances; // 0x238(0x10)
	struct TArray<struct AActor*> AliveInstances; // 0x248(0x10)
	struct TArray<struct UObject*> EntityInstances; // 0x258(0x10)
	char pad_268[0x10]; // 0x268(0x10)
	int32_t SpawnedActorCount; // 0x278(0x04)
	struct FRandomStream Randomizer; // 0x27c(0x08)
	char pad_284[0x4]; // 0x284(0x04)
	struct TMap<uint32_t, struct AActor*> PersistentObjectIDs; // 0x288(0x50)
	char pad_2D8[0x250]; // 0x2d8(0x250)
};

// ScriptStruct Phoenix.DOVScheduleData
// Size: 0x40 (Inherited: 0x00)
struct FDOVScheduleData {
	struct FString ScheduleActivity; // 0x00(0x10)
	struct FString ScheduleLocation; // 0x10(0x10)
	struct FString StartTime; // 0x20(0x10)
	struct FString EndTime; // 0x30(0x10)
};

// ScriptStruct Phoenix.EffectInstance
// Size: 0x28 (Inherited: 0x00)
struct FEffectInstance {
	struct AActor* Object; // 0x00(0x08)
	struct AActor* Owner; // 0x08(0x08)
	struct TWeakObjectPtr<struct UStateEffectComponent> StateEffect; // 0x10(0x08)
	int32_t EffectCount; // 0x18(0x04)
	struct FName Name; // 0x1c(0x08)
	bool bCharacter; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Phoenix.EncounterData
// Size: 0x1f0 (Inherited: 0x00)
struct FEncounterData {
	char pad_0[0x1f0]; // 0x00(0x1f0)
};

// ScriptStruct Phoenix.SpawnZoneScoreData
// Size: 0x38 (Inherited: 0x00)
struct FSpawnZoneScoreData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Phoenix.EncounterScoreData
// Size: 0x10 (Inherited: 0x00)
struct FEncounterScoreData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.SpawnZoneFilterData
// Size: 0x50 (Inherited: 0x00)
struct FSpawnZoneFilterData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Phoenix.EncounterFilterData
// Size: 0x48 (Inherited: 0x00)
struct FEncounterFilterData {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Phoenix.ReportData
// Size: 0x88 (Inherited: 0x00)
struct FReportData {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct Phoenix.ReportRow
// Size: 0x58 (Inherited: 0x00)
struct FReportRow {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Phoenix.ReportBlockData
// Size: 0x0c (Inherited: 0x00)
struct FReportBlockData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Phoenix.ReportHeaderData
// Size: 0x38 (Inherited: 0x00)
struct FReportHeaderData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Phoenix.EncounterHandInstanceData
// Size: 0x01 (Inherited: 0x00)
struct FEncounterHandInstanceData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.EncounterExclusionData
// Size: 0x01 (Inherited: 0x00)
struct FEncounterExclusionData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.EncounterInclusionData
// Size: 0x01 (Inherited: 0x00)
struct FEncounterInclusionData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.EncounterInstanceData
// Size: 0x01 (Inherited: 0x00)
struct FEncounterInstanceData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.SpawnLocationInstanceData
// Size: 0x01 (Inherited: 0x00)
struct FSpawnLocationInstanceData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.DOVInstanceData
// Size: 0x01 (Inherited: 0x00)
struct FDOVInstanceData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.EncounterVolumeInstanceData
// Size: 0x01 (Inherited: 0x00)
struct FEncounterVolumeInstanceData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.LocationCreatorData
// Size: 0xb0 (Inherited: 0x00)
struct FLocationCreatorData {
	struct FDbSingleColumnInfo LocationID; // 0x00(0x88)
	struct FString LocationSchedule; // 0x88(0x10)
	struct AStation* LocationStation; // 0x98(0x08)
	struct TArray<struct ADynamicObjectVolume*> LocationSpawners; // 0xa0(0x10)
};

// ScriptStruct Phoenix.DesiredLocationData
// Size: 0x18 (Inherited: 0x00)
struct FDesiredLocationData {
	struct FString DesiredLocation; // 0x00(0x10)
	bool bLocationAvailable; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Phoenix.EncounterHandInfo
// Size: 0xb8 (Inherited: 0x00)
struct FEncounterHandInfo {
	char pad_0[0xb8]; // 0x00(0xb8)
};

// ScriptStruct Phoenix.Enemy_ApparateActorData
// Size: 0x40 (Inherited: 0x00)
struct FEnemy_ApparateActorData {
	struct FVector Destination; // 0x00(0x0c)
	struct FVector StartLoc; // 0x0c(0x0c)
	float Speed; // 0x18(0x04)
	enum class EnemyApparateActor_Movement Movement; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct AActor* Target; // 0x20(0x08)
	float RangeToTarget; // 0x28(0x04)
	float OffsetZDist; // 0x2c(0x04)
	float CapsuleRadius; // 0x30(0x04)
	float CapsuleHalfHeight; // 0x34(0x04)
	float MaxTime; // 0x38(0x04)
	bool bUseTravelTimeout; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Phoenix.Enemy_TicketData
// Size: 0x08 (Inherited: 0x00)
struct FEnemy_TicketData {
	int32_t NumTickets; // 0x00(0x04)
	int32_t NumAttackedAddTickets; // 0x04(0x04)
};

// ScriptStruct Phoenix.Enemy_SpellOverrides
// Size: 0x28 (Inherited: 0x00)
struct FEnemy_SpellOverrides {
	struct FGameplayTagContainer RequiredTagContainer; // 0x00(0x20)
	struct USpellToolRecord* OverrideSpellToolRecord; // 0x20(0x08)
};

// ScriptStruct Phoenix.Enemy_AttackRange_DistanceData
// Size: 0x18 (Inherited: 0x08)
struct FEnemy_AttackRange_DistanceData : FTableRowBase {
	enum class EEnemyMovementState EnemyMoveState; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MinDistance; // 0x0c(0x04)
	float MaxDistance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.Enemy_TargetSense
// Size: 0x238 (Inherited: 0x00)
struct FEnemy_TargetSense {
	bool bOverrideLOS; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FEnemy_TargetSense_LOS LOS; // 0x04(0x1c)
	bool bOverrideFOV; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FEnemy_TargetSense_FOV FOV; // 0x24(0x1bc)
	struct FEnemy_TargetSense_DisillusionmentScale DisillusionmentScale; // 0x1e0(0x04)
	bool bOverrideRemember; // 0x1e4(0x01)
	char pad_1E5[0x3]; // 0x1e5(0x03)
	struct FEnemy_TargetSense_Remember Remember; // 0x1e8(0x10)
	bool bOverrideTAS; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FEnemy_TargetSense_TAS TAS; // 0x200(0x28)
	bool bOverrideEvaluateDist; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	float EvaluateDist; // 0x22c(0x04)
	float StealthShowBlipDist; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
};

// ScriptStruct Phoenix.Enemy_TargetSense_TAS
// Size: 0x28 (Inherited: 0x00)
struct FEnemy_TargetSense_TAS {
	float EventMaintainTime; // 0x00(0x04)
	float EventAwareAlertValue; // 0x04(0x04)
	struct UCurveFloat* EnterAwareDistCurve; // 0x08(0x08)
	struct UCurveFloat* EnterAlertDistCurve; // 0x10(0x08)
	struct UCurveFloat* ExitAwareDistCurve; // 0x18(0x08)
	struct UCurveFloat* ExitAlertDistCurve; // 0x20(0x08)
};

// ScriptStruct Phoenix.Enemy_TargetSense_Remember
// Size: 0x10 (Inherited: 0x00)
struct FEnemy_TargetSense_Remember {
	float MinTime; // 0x00(0x04)
	float RememberMaxDistance; // 0x04(0x04)
	float LOSTime; // 0x08(0x04)
	float FOVAndHearingTime; // 0x0c(0x04)
};

// ScriptStruct Phoenix.Enemy_TargetSense_DisillusionmentScale
// Size: 0x04 (Inherited: 0x00)
struct FEnemy_TargetSense_DisillusionmentScale {
	float MoreEffectiveScale; // 0x00(0x04)
};

// ScriptStruct Phoenix.Enemy_TargetSense_FOV
// Size: 0x1bc (Inherited: 0x00)
struct FEnemy_TargetSense_FOV {
	struct FEnemy_TargetSense_FOVSet Standard; // 0x00(0x94)
	struct FEnemy_TargetSense_FOVSet Disillusionment; // 0x94(0x94)
	struct FEnemy_TargetSense_FOVSet Invisible; // 0x128(0x94)
};

// ScriptStruct Phoenix.Enemy_TargetSense_FOVSet
// Size: 0x94 (Inherited: 0x00)
struct FEnemy_TargetSense_FOVSet {
	struct FEnemy_TargetSense_FOVParams Aware; // 0x00(0x30)
	struct FEnemy_TargetSense_FOVParams Alert; // 0x30(0x30)
	struct FEnemy_TargetSense_FOVParams Attack; // 0x60(0x30)
	float DisallowTimeWhenApplied; // 0x90(0x04)
};

// ScriptStruct Phoenix.Enemy_TargetSense_FOVParams
// Size: 0x30 (Inherited: 0x00)
struct FEnemy_TargetSense_FOVParams {
	float FOV; // 0x00(0x04)
	float Distance; // 0x04(0x04)
	float Height; // 0x08(0x04)
	float MinHeight; // 0x0c(0x04)
	float NegativeHeight; // 0x10(0x04)
	float NegativeMinHeight; // 0x14(0x04)
	float FalloffScale; // 0x18(0x04)
	float HearingRadius; // 0x1c(0x04)
	float DistanceInstant; // 0x20(0x04)
	float HearingRadiusInstant; // 0x24(0x04)
	float DistanceAdd; // 0x28(0x04)
	float HearingRadiusAdd; // 0x2c(0x04)
};

// ScriptStruct Phoenix.Enemy_TargetSense_LOS
// Size: 0x1c (Inherited: 0x00)
struct FEnemy_TargetSense_LOS {
	float LOSInterval; // 0x00(0x04)
	float LOSMinDist; // 0x04(0x04)
	float LOSUnawareInterval; // 0x08(0x04)
	float LOSAwareInterval; // 0x0c(0x04)
	float LOSAlertInterval; // 0x10(0x04)
	float LOSAggroInterval; // 0x14(0x04)
	float LOSTeammateInterval; // 0x18(0x04)
};

// ScriptStruct Phoenix.Enemy_SpawnSpidersUpdateData
// Size: 0x48 (Inherited: 0x00)
struct FEnemy_SpawnSpidersUpdateData {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Phoenix.Enemy_SplineSpawnActorData
// Size: 0xd0 (Inherited: 0x00)
struct FEnemy_SplineSpawnActorData {
	char pad_0[0xd0]; // 0x00(0xd0)
};

// ScriptStruct Phoenix.Enemy_Ticket_CooldownTableData
// Size: 0x18 (Inherited: 0x08)
struct FEnemy_Ticket_CooldownTableData : FTableRowBase {
	struct FGameplayTag Tag; // 0x08(0x08)
	float Time; // 0x10(0x04)
	float Deviation; // 0x14(0x04)
};

// ScriptStruct Phoenix.Enemy_AttackLocUpdateData
// Size: 0x04 (Inherited: 0x00)
struct FEnemy_AttackLocUpdateData {
	float UpdateInterval; // 0x00(0x04)
};

// ScriptStruct Phoenix.Enemy_TurnInPlaceData
// Size: 0x38 (Inherited: 0x00)
struct FEnemy_TurnInPlaceData {
	float Cooldown; // 0x00(0x04)
	float IgnoreCooldownAngle; // 0x04(0x04)
	float StartAngleTolerance; // 0x08(0x04)
	bool bFixedBlendspaceAngle; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t SupportedBlendspaceAngles; // 0x10(0x04)
	enum class ENPC_MobilityTurnAssistStartMode StartMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float DelayedStartTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FEnemy_TurnInPlaceUberData> ContextList; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Phoenix.Enemy_TurnInPlaceUberData
// Size: 0x28 (Inherited: 0x00)
struct FEnemy_TurnInPlaceUberData {
	enum class ENPC_GameContext GameContext; // 0x00(0x01)
	bool bSupported; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FGameplayTagContainer AATags; // 0x08(0x20)
};

// ScriptStruct Phoenix.Enemy_MeleeAttackOverlapData
// Size: 0xa8 (Inherited: 0x00)
struct FEnemy_MeleeAttackOverlapData {
	struct AActor* Victim; // 0x00(0x08)
	struct AEnemy_Character* Owner; // 0x08(0x08)
	struct FHitResult HitResult; // 0x10(0x88)
	struct FVector NormalImpulse; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct Phoenix.Enemy_EnergyData
// Size: 0x18 (Inherited: 0x00)
struct FEnemy_EnergyData {
	enum class ENPC_GameContext GameContext; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DrainRateScale; // 0x04(0x04)
	float Max; // 0x08(0x04)
	float MaxDeviation; // 0x0c(0x04)
	float RefillRate; // 0x10(0x04)
	float RefillRateScale; // 0x14(0x04)
};

// ScriptStruct Phoenix.Enemy_AccuracyData
// Size: 0x30 (Inherited: 0x00)
struct FEnemy_AccuracyData {
	float MissThreshold; // 0x00(0x04)
	float MissOffset; // 0x04(0x04)
	float NotTargettedMissAdjust; // 0x08(0x04)
	float RunningAwayMissAdjust; // 0x0c(0x04)
	struct UCurveFloat* DistFromPlayerCurve; // 0x10(0x08)
	struct UCurveFloat* TimeOffscreenCurve; // 0x18(0x08)
	struct UCurveFloat* TimeSinceAttackedCurve; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Phoenix.Enemy_ApparateData
// Size: 0x1c (Inherited: 0x00)
struct FEnemy_ApparateData {
	float MinAngle; // 0x00(0x04)
	float MaxAngle; // 0x04(0x04)
	bool AngleIsABS; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MinDist; // 0x0c(0x04)
	float Chance; // 0x10(0x04)
	float SuccessCooldown; // 0x14(0x04)
	float FailedCooldown; // 0x18(0x04)
};

// ScriptStruct Phoenix.NPC_AttackSelectInfo
// Size: 0x02 (Inherited: 0x00)
struct FNPC_AttackSelectInfo {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Phoenix.NPC_TASForceTargetData
// Size: 0x14 (Inherited: 0x00)
struct FNPC_TASForceTargetData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Phoenix.Enemy_MoveStopData
// Size: 0x0c (Inherited: 0x00)
struct FEnemy_MoveStopData {
	enum class EEnemy_AttackLocSource AttackLocSource; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxHeadingChange; // 0x04(0x04)
	float MaxDistanceChange; // 0x08(0x04)
};

// ScriptStruct Phoenix.Enemy_IdleData
// Size: 0x60 (Inherited: 0x00)
struct FEnemy_IdleData {
	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AtLocationRadius; // 0x04(0x04)
	float SuccessCooldown; // 0x08(0x04)
	float SuccessCooldownDeviation; // 0x0c(0x04)
	float FailedCooldown; // 0x10(0x04)
	float FailedCooldownDeviation; // 0x14(0x04)
	float AbortMaxAngle; // 0x18(0x04)
	float AbortMinDist; // 0x1c(0x04)
	float AbortChanceIfTicketAvailable; // 0x20(0x04)
	struct FGameplayTag Tag; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FGameplayTagContainer CombatTags; // 0x30(0x20)
	struct FGameplayTag IATag; // 0x50(0x08)
	struct UInteractionArchitectAsset* IAAsset; // 0x58(0x08)
};

// ScriptStruct Phoenix.Enemy_ShuffleData
// Size: 0x68 (Inherited: 0x60)
struct FEnemy_ShuffleData : FEnemy_IdleData {
	float ReentryCooldown; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Phoenix.Enemy_TombProtector_MeteorPieceData
// Size: 0x38 (Inherited: 0x00)
struct FEnemy_TombProtector_MeteorPieceData {
	struct TWeakObjectPtr<struct AEnemyAIWeapon> MeteorPtr; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Phoenix.SpawnMeteorData
// Size: 0x2c (Inherited: 0x00)
struct FSpawnMeteorData {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct Phoenix.Enemy_DistractionEvent
// Size: 0x18 (Inherited: 0x00)
struct FEnemy_DistractionEvent {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.EnemyVulnerableData
// Size: 0x28 (Inherited: 0x00)
struct FEnemyVulnerableData {
	struct FGameplayTag WeaponTag; // 0x00(0x08)
	bool ProtegoWhenVulnerable; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ChanceToEvade; // 0x0c(0x04)
	int32_t ChanceToProtego; // 0x10(0x04)
	int32_t ProtegoDeflectedAttack; // 0x14(0x04)
	int32_t BlockAttack; // 0x18(0x04)
	int32_t DeflectBackAttack; // 0x1c(0x04)
	int32_t DeflectToTarget; // 0x20(0x04)
	float DamageModifier; // 0x24(0x04)
};

// ScriptStruct Phoenix.EnemyEvadeData
// Size: 0x30 (Inherited: 0x00)
struct FEnemyEvadeData {
	enum class EEnemyAIDodgeState EvadeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAblAbility* EvadeAbilityPtr; // 0x08(0x08)
	struct UInteractionArchitectAsset* InteractionArchitectAssetPtr; // 0x10(0x08)
	float EvadeChance; // 0x18(0x04)
	float EvadeSuccessCooldown; // 0x1c(0x04)
	float EvadeFailedCooldown; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct Phoenix.EnemyGameEventData
// Size: 0x38 (Inherited: 0x00)
struct FEnemyGameEventData {
	struct FGameplayTag GameEventTag; // 0x00(0x08)
	struct UAblAbility* TargetAbilityPtr; // 0x08(0x08)
	enum class ENPC_TurnAssistState TargetTurnState; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UInteractionArchitectAsset* TargetIAAssetPtr; // 0x18(0x08)
	struct UAblAbility* ObserverAbilityPtr; // 0x20(0x08)
	enum class ENPC_TurnAssistState ObserverTurnState; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UInteractionArchitectAsset* ObserverIAAssetPtr; // 0x30(0x08)
};

// ScriptStruct Phoenix.Enemy_AlertPointOfInterestData
// Size: 0x30 (Inherited: 0x00)
struct FEnemy_AlertPointOfInterestData {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Phoenix.Enemy_Attacked
// Size: 0x0c (Inherited: 0x00)
struct FEnemy_Attacked {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Phoenix.Enemy_AttackedBy
// Size: 0x0c (Inherited: 0x00)
struct FEnemy_AttackedBy {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Phoenix.Enemy_AttackedMunitionData
// Size: 0x02 (Inherited: 0x00)
struct FEnemy_AttackedMunitionData {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Phoenix.EnemyAwarenessAmendInfo
// Size: 0x08 (Inherited: 0x00)
struct FEnemyAwarenessAmendInfo {
	enum class NPC_TargetAwareStateRateSource AwareState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DistFromPlayer; // 0x04(0x04)
};

// ScriptStruct Phoenix.PlayerTargetAwareStateData
// Size: 0x03 (Inherited: 0x00)
struct FPlayerTargetAwareStateData {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct Phoenix.RipApartFinisherData
// Size: 0x10 (Inherited: 0x00)
struct FRipApartFinisherData {
	struct USkeletalMesh* BodyMesh; // 0x00(0x08)
	struct USkeletalMesh* LegMesh; // 0x08(0x08)
};

// ScriptStruct Phoenix.Enemy_AttackThreatData
// Size: 0x58 (Inherited: 0x00)
struct FEnemy_AttackThreatData {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Phoenix.Enemy_RetaliateData
// Size: 0x08 (Inherited: 0x00)
struct FEnemy_RetaliateData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.Enemy_AttackDecision
// Size: 0x03 (Inherited: 0x00)
struct FEnemy_AttackDecision {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct Phoenix.Enemy_Alert
// Size: 0x60 (Inherited: 0x00)
struct FEnemy_Alert {
	struct FEnemy_Idle Data; // 0x00(0x60)
};

// ScriptStruct Phoenix.Enemy_Idle
// Size: 0x60 (Inherited: 0x00)
struct FEnemy_Idle {
	enum class EEnemy_ContextMatch ContextMatch; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SupportedContexts; // 0x04(0x04)
	int32_t SupportedWeapons; // 0x08(0x04)
	float MinAngle; // 0x0c(0x04)
	float MaxAngle; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FGameplayTagContainer IATagContainer; // 0x18(0x20)
	struct FGameplayTagContainer TagContainer; // 0x38(0x20)
	int32_t AASupportedDirections; // 0x58(0x04)
	float Chance; // 0x5c(0x04)
};

// ScriptStruct Phoenix.Enemy_Taunt
// Size: 0x60 (Inherited: 0x00)
struct FEnemy_Taunt {
	struct FEnemy_Idle Data; // 0x00(0x60)
};

// ScriptStruct Phoenix.Enemy_Shuffle
// Size: 0x68 (Inherited: 0x00)
struct FEnemy_Shuffle {
	int32_t SupportedDirections; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FEnemy_Idle Data; // 0x08(0x60)
};

// ScriptStruct Phoenix.Enemy_IdleBreak
// Size: 0x60 (Inherited: 0x00)
struct FEnemy_IdleBreak {
	struct FEnemy_Idle Data; // 0x00(0x60)
};

// ScriptStruct Phoenix.Enemy_NextMoveWait
// Size: 0x08 (Inherited: 0x00)
struct FEnemy_NextMoveWait {
	enum class EEnemy_AttackUpdateState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Time; // 0x04(0x04)
};

// ScriptStruct Phoenix.Enemy_NextDecisionWait
// Size: 0x08 (Inherited: 0x00)
struct FEnemy_NextDecisionWait {
	enum class EEnemy_AttackUpdateState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Time; // 0x04(0x04)
};

// ScriptStruct Phoenix.EnemyAIChosenAttackData
// Size: 0x78 (Inherited: 0x00)
struct FEnemyAIChosenAttackData {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct Phoenix.Enemy_UnblockableData
// Size: 0x02 (Inherited: 0x00)
struct FEnemy_UnblockableData {
	bool bUnblockableByPlayer; // 0x00(0x01)
	enum class EEnemyShieldBreaker UnblockableLByNPCLevel; // 0x01(0x01)
};

// ScriptStruct Phoenix.Enemy_AttackRangeData
// Size: 0x0c (Inherited: 0x00)
struct FEnemy_AttackRangeData {
	float RangeMin; // 0x00(0x04)
	float RangeMax; // 0x04(0x04)
	float RangeProbability; // 0x08(0x04)
};

// ScriptStruct Phoenix.Enemy_AttackSpecificData
// Size: 0x01 (Inherited: 0x00)
struct FEnemy_AttackSpecificData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.Enemy_ApparateToData
// Size: 0x28 (Inherited: 0x01)
struct FEnemy_ApparateToData : FEnemy_AttackSpecificData {
	char pad_1[0x7]; // 0x01(0x07)
	struct UAblAbility* ApparateAbilityPtr; // 0x08(0x08)
	enum class EEnemy_AttackApparateMode ApparateMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float RangeMin; // 0x14(0x04)
	float RangeMax; // 0x18(0x04)
	float DistTolerance; // 0x1c(0x04)
	float TravelSpeed; // 0x20(0x04)
	float OffsetZDist; // 0x24(0x04)
};

// ScriptStruct Phoenix.Enemy_RunToData
// Size: 0x48 (Inherited: 0x01)
struct FEnemy_RunToData : FEnemy_AttackSpecificData {
	char pad_1[0x3]; // 0x01(0x03)
	float RunToRangeMin; // 0x04(0x04)
	float RunToRangeMax; // 0x08(0x04)
	float RunMinDist; // 0x0c(0x04)
	float DistTolerance; // 0x10(0x04)
	float Timeout; // 0x14(0x04)
	float AbortDist; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UAblAbility* PreMoveStartAbility; // 0x20(0x08)
	struct TArray<struct FNPC_MobilityData> MobilityData; // 0x28(0x10)
	enum class EEnemy_ParryRunToType ParryRunToType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float ParryRunToSpeedEstimate; // 0x3c(0x04)
	bool ParryRunToUseVelocityInAttackTimeOfImpact; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Phoenix.NPC_MobilityData
// Size: 0xb0 (Inherited: 0x00)
struct FNPC_MobilityData {
	bool bApplySpeed; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpeedMin; // 0x04(0x04)
	float SpeedMax; // 0x08(0x04)
	float MaxTravelDist; // 0x0c(0x04)
	float EnergyCost; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FNPC_MobilitySpeedData> SpeedData; // 0x18(0x10)
	float MoveDistThreshold; // 0x28(0x04)
	float DestinationTolerance; // 0x2c(0x04)
	float MoveMaxHeadingChangeAngle; // 0x30(0x04)
	bool MoveToWaypointOffScreen; // 0x34(0x01)
	bool bMoveStopOnOverlap; // 0x35(0x01)
	bool bDoLOSCheck; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
	float LOSCollisionInterval; // 0x38(0x04)
	float LOSCollisionDist; // 0x3c(0x04)
	bool bUseCorridorCheck; // 0x40(0x01)
	bool bDoRunPastCheck; // 0x41(0x01)
	bool bDoWaypointAwayCheck; // 0x42(0x01)
	bool bDoProgressTowardsCheck; // 0x43(0x01)
	bool bDoDestinationAwayCheck; // 0x44(0x01)
	bool bAbruptDestinationChangeCheck; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	float AbruptDestinationChangeAngle; // 0x48(0x04)
	enum class ENPC_PathSpec PathSpec; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<struct FNPC_MobilityAnimData> AnimData; // 0x50(0x10)
	struct TArray<struct FNPC_MobilityDistanceData> DistanceData; // 0x60(0x10)
	struct TArray<struct FNPC_TurnAssistData> TurnAssistData; // 0x70(0x10)
	struct TArray<struct FNPC_TurnAssistDataContainer> TurnAssistDataContainer; // 0x80(0x10)
	struct TArray<struct FNPC_MobilityTurnAssistStateData> TurnAssistStateData; // 0x90(0x10)
	struct TArray<struct FNPC_MobilityMovementData> MovementData; // 0xa0(0x10)
};

// ScriptStruct Phoenix.NPC_MobilityMovementData
// Size: 0x08 (Inherited: 0x00)
struct FNPC_MobilityMovementData {
	bool bUseAcceleration; // 0x00(0x01)
	bool bOrientToMovement; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float TurnRate; // 0x04(0x04)
};

// ScriptStruct Phoenix.NPC_MobilityTurnAssistStateData
// Size: 0x08 (Inherited: 0x00)
struct FNPC_MobilityTurnAssistStateData {
	enum class ENPC_TurnAssistState MoveTurnTo; // 0x00(0x01)
	enum class ENPC_TurnAssistState MoveStartTurnTo; // 0x01(0x01)
	enum class ENPC_TurnAssistState MoveStopTurnTo; // 0x02(0x01)
	enum class ENPC_MobilityTurnAssistStartMode MoveStartMode; // 0x03(0x01)
	float MoveStartDelayedStartTime; // 0x04(0x04)
};

// ScriptStruct Phoenix.NPC_TurnAssistDataContainer
// Size: 0x0c (Inherited: 0x00)
struct FNPC_TurnAssistDataContainer {
	enum class ENPC_TurnAssist Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FNPC_TurnAssistData Data; // 0x04(0x08)
};

// ScriptStruct Phoenix.NPC_TurnAssistData
// Size: 0x08 (Inherited: 0x00)
struct FNPC_TurnAssistData {
	float YawSpringHalfLife; // 0x00(0x04)
	float YawSpringMaxTurningAngle; // 0x04(0x04)
};

// ScriptStruct Phoenix.NPC_MobilityDistanceData
// Size: 0x08 (Inherited: 0x00)
struct FNPC_MobilityDistanceData {
	float DistanceMin; // 0x00(0x04)
	float DistanceMax; // 0x04(0x04)
};

// ScriptStruct Phoenix.NPC_MobilityAnimData
// Size: 0xe0 (Inherited: 0x00)
struct FNPC_MobilityAnimData {
	struct UAblAbility* IdleAbilityPtr; // 0x00(0x08)
	struct UAblAbility* MoveAbilityPtr; // 0x08(0x08)
	struct FGameplayTagContainer MoveTags; // 0x10(0x20)
	struct FNPC_MobilityAbilityData MoveStart; // 0x30(0x30)
	struct FNPC_MobilityAbilityData MoveStop; // 0x60(0x30)
	struct FNPC_MobilityAbilityData MovePivot; // 0x90(0x30)
	struct TArray<struct FNPC_MobilityAnimSpeedData> AnimSpeedData; // 0xc0(0x10)
	struct TArray<struct FNPC_MobilityAnimBlendSpaceData> BlendSpaceData; // 0xd0(0x10)
};

// ScriptStruct Phoenix.NPC_MobilityAnimBlendSpaceData
// Size: 0x08 (Inherited: 0x00)
struct FNPC_MobilityAnimBlendSpaceData {
	float XInterpSpeed; // 0x00(0x04)
	float YInterpSpeed; // 0x04(0x04)
};

// ScriptStruct Phoenix.NPC_MobilityAnimSpeedData
// Size: 0x08 (Inherited: 0x00)
struct FNPC_MobilityAnimSpeedData {
	float AnimSpeedMin; // 0x00(0x04)
	float AnimSpeedMax; // 0x04(0x04)
};

// ScriptStruct Phoenix.NPC_MobilityAbilityData
// Size: 0x30 (Inherited: 0x00)
struct FNPC_MobilityAbilityData {
	bool bSupported; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAblAbility* AbilityPtr; // 0x08(0x08)
	struct FGameplayTagContainer AATags; // 0x10(0x20)
};

// ScriptStruct Phoenix.NPC_MobilitySpeedData
// Size: 0x08 (Inherited: 0x00)
struct FNPC_MobilitySpeedData {
	struct UNPC_MobilitySpeedChoice* SpeedChoice; // 0x00(0x08)
};

// ScriptStruct Phoenix.Enemy_BallisticData
// Size: 0x10 (Inherited: 0x01)
struct FEnemy_BallisticData : FEnemy_AttackSpecificData {
	char pad_1[0x3]; // 0x01(0x03)
	float OverrideGravity; // 0x04(0x04)
	float ArcParam; // 0x08(0x04)
	float DilateMult; // 0x0c(0x04)
};

// ScriptStruct Phoenix.Enemy_FlourishData
// Size: 0x30 (Inherited: 0x01)
struct FEnemy_FlourishData : FEnemy_AttackSpecificData {
	char pad_1[0x7]; // 0x01(0x07)
	struct FGameplayTagContainer TagContainer; // 0x08(0x20)
	float MinDistToTarget; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Phoenix.Enemy_TicketScoreData
// Size: 0x34 (Inherited: 0x00)
struct FEnemy_TicketScoreData {
	char pad_0[0x34]; // 0x00(0x34)
};

// ScriptStruct Phoenix.Enemy_EnemyIDParams
// Size: 0x190 (Inherited: 0x00)
struct FEnemy_EnemyIDParams {
	char pad_0[0x190]; // 0x00(0x190)
};

// ScriptStruct Phoenix.Enemy_AudioParams
// Size: 0x04 (Inherited: 0x00)
struct FEnemy_AudioParams {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Phoenix.Enemy_InteractionParams
// Size: 0x08 (Inherited: 0x00)
struct FEnemy_InteractionParams {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.Enemy_TicketParams
// Size: 0x10 (Inherited: 0x00)
struct FEnemy_TicketParams {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.Enemy_DamageParams
// Size: 0x18 (Inherited: 0x00)
struct FEnemy_DamageParams {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.Enemy_AccuracyParams
// Size: 0x20 (Inherited: 0x00)
struct FEnemy_AccuracyParams {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.Enemy_AggressivenessParams
// Size: 0x58 (Inherited: 0x00)
struct FEnemy_AggressivenessParams {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Phoenix.Enemy_CombatPositioningParams
// Size: 0x78 (Inherited: 0x00)
struct FEnemy_CombatPositioningParams {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct Phoenix.Enemy_AgilityParams
// Size: 0x38 (Inherited: 0x00)
struct FEnemy_AgilityParams {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Phoenix.Enemy_IdleParams
// Size: 0x30 (Inherited: 0x00)
struct FEnemy_IdleParams {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Phoenix.Enemy_AttackParams
// Size: 0x18 (Inherited: 0x00)
struct FEnemy_AttackParams {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.Enemy_AttackTicketParams
// Size: 0xb0 (Inherited: 0x00)
struct FEnemy_AttackTicketParams {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Phoenix.Enemy_AttackIDData
// Size: 0x90 (Inherited: 0x00)
struct FEnemy_AttackIDData {
	int32_t Level; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDbSingleColumnInfo EnemyDatabaseIDs; // 0x08(0x88)
};

// ScriptStruct Phoenix.EnemyAIAttackDistData
// Size: 0x10 (Inherited: 0x00)
struct FEnemyAIAttackDistData {
	bool bAttackDesperationEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AttackDesperationMinRange; // 0x04(0x04)
	float AttackDesperationMaxRange; // 0x08(0x04)
	float AttackDesperationNotInRangeTime; // 0x0c(0x04)
};

// ScriptStruct Phoenix.EnemyAIAttackDistTableDataContainer
// Size: 0x30 (Inherited: 0x00)
struct FEnemyAIAttackDistTableDataContainer {
	enum class EEnemyAIAttackState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FEnemyAIAttackDistTableData Data; // 0x08(0x28)
};

// ScriptStruct Phoenix.EnemyAIAttackDistTableData
// Size: 0x28 (Inherited: 0x08)
struct FEnemyAIAttackDistTableData : FTableRowBase {
	enum class EEnemyAIAttackStateType m_stateType; // 0x08(0x01)
	enum class EEnemyAIAttackState m_state; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float AttackMinRange; // 0x0c(0x04)
	float ApproachMinRange; // 0x10(0x04)
	float ApproachMaxRange; // 0x14(0x04)
	float AttackMaxRange; // 0x18(0x04)
	float ApproachTolerance; // 0x1c(0x04)
	float AttackRangeTolerance; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Phoenix.Enemy_MobilityData
// Size: 0x40 (Inherited: 0x00)
struct FEnemy_MobilityData {
	float SpeedMin; // 0x00(0x04)
	float SpeedMax; // 0x04(0x04)
	float MoveDistThreshold; // 0x08(0x04)
	struct FEnemy_MobilityMovementData Movement; // 0x0c(0x0c)
	enum class EMobilityModeState MobilityModeState; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FEnemy_MobilityAbilityData AbilityData; // 0x20(0x20)
};

// ScriptStruct Phoenix.Enemy_MobilityAbilityData
// Size: 0x20 (Inherited: 0x00)
struct FEnemy_MobilityAbilityData {
	struct UAblAbility* MoveAbilityPtr; // 0x00(0x08)
	float AnimSpeedMin; // 0x08(0x04)
	float AnimSpeedMax; // 0x0c(0x04)
	struct UCurveFloat* TurnAssistCurve; // 0x10(0x08)
	struct UCurveFloat* TurnAssistTimeMultiplier; // 0x18(0x08)
};

// ScriptStruct Phoenix.Enemy_MobilityMovementData
// Size: 0x0c (Inherited: 0x00)
struct FEnemy_MobilityMovementData {
	bool bUseAcceleration; // 0x00(0x01)
	bool bOrientToMovement; // 0x01(0x01)
	bool bRestoreTurnRate; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float TurnRate; // 0x04(0x04)
	bool bResetDirection; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Phoenix.Enemy_DistanceMobilityData
// Size: 0x48 (Inherited: 0x40)
struct FEnemy_DistanceMobilityData : FEnemy_MobilityData {
	float DistanceMin; // 0x40(0x04)
	float DistanceMax; // 0x44(0x04)
};

// ScriptStruct Phoenix.Enemy_TauntWeaponData
// Size: 0x20 (Inherited: 0x00)
struct FEnemy_TauntWeaponData {
	struct TArray<struct AEnemyAIWeapon*> RequiredWeaponList; // 0x00(0x10)
	struct TArray<struct AEnemyAIWeapon*> RequiredShieldList; // 0x10(0x10)
};

// ScriptStruct Phoenix.Enemy_WeaponAttackOverlapData
// Size: 0xb0 (Inherited: 0x00)
struct FEnemy_WeaponAttackOverlapData {
	struct AActor* Victim; // 0x00(0x08)
	struct AEnemy_Character* Owner; // 0x08(0x08)
	struct FHitResult HitResult; // 0x10(0x88)
	struct FVector NormalImpulse; // 0x98(0x0c)
	struct FVector ImpactLoc; // 0xa4(0x0c)
};

// ScriptStruct Phoenix.SpawnStoredWeaponStr
// Size: 0x10 (Inherited: 0x00)
struct FSpawnStoredWeaponStr {
	struct AEnemyAIWeapon* weaponClassType; // 0x00(0x08)
	bool bForceSpawn; // 0x08(0x01)
	bool bSkipSpawnStored; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Phoenix.EnemyAIWeaponSocketData
// Size: 0x30 (Inherited: 0x08)
struct FEnemyAIWeaponSocketData : FTableRowBase {
	struct AEnemyAIWeapon* Weapon; // 0x08(0x08)
	struct FName SocketName; // 0x10(0x08)
	struct FVector Offset; // 0x18(0x0c)
	struct FRotator RotationOffset; // 0x24(0x0c)
};

// ScriptStruct Phoenix.Enemy_WeaponAttackData
// Size: 0x30 (Inherited: 0x00)
struct FEnemy_WeaponAttackData {
	struct TArray<struct AEnemyAIWeapon*> RequiredList; // 0x00(0x10)
	struct AEnemyAIWeapon* TransientWeapon; // 0x10(0x08)
	struct FName TransientWeaponSocket; // 0x18(0x08)
	float EquipedSelectScale; // 0x20(0x04)
	float StoredSelectScale; // 0x24(0x04)
	float SeekSelectScale; // 0x28(0x04)
	bool bDeferredEquip; // 0x2c(0x01)
	bool bDoNotUseWeaponForAttack; // 0x2d(0x01)
	bool bDestroyTransientWeaponOnDeactivate; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
};

// ScriptStruct Phoenix.EBC_BoneRadiusVelocity
// Size: 0x18 (Inherited: 0x00)
struct FEBC_BoneRadiusVelocity {
	struct FName Bone; // 0x00(0x08)
	float orbitRadius; // 0x08(0x04)
	float orbitVelocity; // 0x0c(0x04)
	float LinearVelocity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.Enemy_ParryData
// Size: 0xc0 (Inherited: 0x00)
struct FEnemy_ParryData {
	char pad_0[0xc0]; // 0x00(0xc0)
};

// ScriptStruct Phoenix.Enemy_ParryWindowData
// Size: 0x110 (Inherited: 0x00)
struct FEnemy_ParryWindowData {
	char pad_0[0x110]; // 0x00(0x110)
};

// ScriptStruct Phoenix.Enemy_ParriedWindowData
// Size: 0x34 (Inherited: 0x00)
struct FEnemy_ParriedWindowData {
	char pad_0[0x34]; // 0x00(0x34)
};

// ScriptStruct Phoenix.Enemy_ParryWindowSetupData
// Size: 0x30 (Inherited: 0x00)
struct FEnemy_ParryWindowSetupData {
	bool bShowUI; // 0x00(0x01)
	bool bPersistPastImpact; // 0x01(0x01)
	bool bDilateLeadIn; // 0x02(0x01)
	bool bDilateRelease; // 0x03(0x01)
	bool bTargetIsPlayer; // 0x04(0x01)
	bool bTargetIsOnMount; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct AActor* TargetPtr; // 0x08(0x08)
	float LeadIn; // 0x10(0x04)
	float ToRelease; // 0x14(0x04)
	bool bUnblockable; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float Perfect; // 0x1c(0x04)
	float AbortDistance; // 0x20(0x04)
	enum class EEnemy_ParryCounterType CounterType; // 0x24(0x01)
	enum class EEnemy_ParryResponseType ResponseType; // 0x25(0x01)
	enum class EEnemy_ParryCounterStepDirection CounterStepDirection; // 0x26(0x01)
	enum class EEnemy_ParryCounterStyle CounterStyle; // 0x27(0x01)
	enum class EEnemy_ParryDodgeStyle DodgeStyle; // 0x28(0x01)
	bool bManuallyLaunchedProjectile; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Phoenix.Enemy_ParryReleaseStartEventData
// Size: 0x08 (Inherited: 0x00)
struct FEnemy_ParryReleaseStartEventData {
	int32_t WindowID; // 0x00(0x04)
	float TimeToImpact; // 0x04(0x04)
};

// ScriptStruct Phoenix.Enemy_ParryFiredEventData
// Size: 0x0c (Inherited: 0x00)
struct FEnemy_ParryFiredEventData {
	int32_t WindowID; // 0x00(0x04)
	enum class EEnemy_ParryType ParryType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float TimeToImpact; // 0x08(0x04)
};

// ScriptStruct Phoenix.Enemy_ParryWindowGetTimeToImpactData
// Size: 0x20 (Inherited: 0x00)
struct FEnemy_ParryWindowGetTimeToImpactData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.EnemyStateData
// Size: 0x2a0 (Inherited: 0x280)
struct FEnemyStateData : FCharacterStateData {
	struct TArray<struct UObject*> FriendlyFireTypeList; // 0x280(0x10)
	char bIgnoreDatabaseData : 1; // 0x290(0x01)
	char bVulnerableInAir : 1; // 0x290(0x01)
	char pad_290_2 : 6; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float InAirVulnerabilityHeightRequirement; // 0x294(0x04)
	char bJuggernautInCombat : 1; // 0x298(0x01)
	char bIsStealthAttackDisabled : 1; // 0x298(0x01)
	char pad_298_2 : 6; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
};

// ScriptStruct Phoenix.ExplodingSkeletonPieceTracker
// Size: 0x70 (Inherited: 0x00)
struct FExplodingSkeletonPieceTracker {
	struct UStaticMeshComponent* Piece; // 0x00(0x08)
	struct FExplodingSkeletonPieceFX FX; // 0x08(0x18)
	struct FExplodingSkeletonPieceFXFade FadeFX; // 0x20(0x18)
	struct FExplodingSkeletonPieceVFXTracker FXTracker; // 0x38(0x10)
	struct FExplodingSkeletonPieceVFXTracker FadeFXTracker; // 0x48(0x10)
	float ActivationDelay; // 0x58(0x04)
	float CollisionDelay; // 0x5c(0x04)
	float Timeout; // 0x60(0x04)
	float FadeOut; // 0x64(0x04)
	char bIsSimulatingPhysics : 1; // 0x68(0x01)
	char bEnabledCollisions : 1; // 0x68(0x01)
	char bFadingOut : 1; // 0x68(0x01)
	char bSuspended : 1; // 0x68(0x01)
	char pad_68_4 : 4; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Phoenix.ExplodingSkeletonPieceVFXTracker
// Size: 0x10 (Inherited: 0x00)
struct FExplodingSkeletonPieceVFXTracker {
	struct UNiagaraComponent* FXComponent; // 0x00(0x08)
	bool bStarted; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Phoenix.ExplodingSkeletonPieceFXBase
// Size: 0x10 (Inherited: 0x00)
struct FExplodingSkeletonPieceFXBase {
	struct UNiagaraSystem* NiagaraVFX; // 0x00(0x08)
	struct FName OpacityParameter; // 0x08(0x08)
};

// ScriptStruct Phoenix.ExplodingSkeletonPieceFXFade
// Size: 0x18 (Inherited: 0x10)
struct FExplodingSkeletonPieceFXFade : FExplodingSkeletonPieceFXBase {
	bool bWaitForSystemToFinish; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Phoenix.ExplodingSkeletonPieceFX
// Size: 0x18 (Inherited: 0x10)
struct FExplodingSkeletonPieceFX : FExplodingSkeletonPieceFXBase {
	bool bWaitForActivation; // 0x10(0x01)
	bool bKillOnStartFade; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Phoenix.ExplodingSkeletonImpulse
// Size: 0x28 (Inherited: 0x00)
struct FExplodingSkeletonImpulse {
	struct FVector ImpulseOrigin; // 0x00(0x0c)
	struct FVector LinearImpulse; // 0x0c(0x0c)
	bool bUseLinearImpulseOrigin; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float RadialImpulseRadius; // 0x1c(0x04)
	float RadialImpulseStrength; // 0x20(0x04)
	bool bRadialImpulseFalloff; // 0x24(0x01)
	bool bUseSkeletalCentroidAsImpulseOrigin; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct Phoenix.ExplodingSkeletonInitialDelay
// Size: 0x0c (Inherited: 0x00)
struct FExplodingSkeletonInitialDelay {
	float BaseInitialDelay; // 0x00(0x04)
	float InitialDelayAtMinHeight; // 0x04(0x04)
	float InitialDelayAtMaxHeight; // 0x08(0x04)
};

// ScriptStruct Phoenix.ExplodingSkeletonSetup
// Size: 0x30 (Inherited: 0x00)
struct FExplodingSkeletonSetup {
	struct TArray<struct FExplodingSkeletonBoneMeshSetup> Attached; // 0x00(0x10)
	struct FExplodingSkeletonSetupTimers AttachedBaseTimers; // 0x10(0x08)
	struct TArray<struct FExplodingSkeletonGenericMeshSetup> Generic; // 0x18(0x10)
	struct FExplodingSkeletonSetupTimers GenericBaseTimers; // 0x28(0x08)
};

// ScriptStruct Phoenix.ExplodingSkeletonSetupTimers
// Size: 0x08 (Inherited: 0x00)
struct FExplodingSkeletonSetupTimers {
	float ActivationDelay; // 0x00(0x04)
	float CollisionDelay; // 0x04(0x04)
};

// ScriptStruct Phoenix.ExplodingSkeletonGenericMeshSetup
// Size: 0x68 (Inherited: 0x00)
struct FExplodingSkeletonGenericMeshSetup {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct FVector2D ScaleMinMax; // 0x08(0x08)
	int32_t MinInstances; // 0x10(0x04)
	int32_t MaxInstances; // 0x14(0x04)
	struct FExplodingSkeletonPieceTimers Timers; // 0x18(0x18)
	struct FExplodingSkeletonPieceFX FX; // 0x30(0x18)
	float PercentageWithFX; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FExplodingSkeletonPieceFXFade FadeFX; // 0x50(0x18)
};

// ScriptStruct Phoenix.ExplodingSkeletonPieceTimers
// Size: 0x18 (Inherited: 0x00)
struct FExplodingSkeletonPieceTimers {
	struct FVector2D ActivationDelayMinMax; // 0x00(0x08)
	struct FVector2D TimeoutMinMax; // 0x08(0x08)
	struct FVector2D FadeOutMinMax; // 0x10(0x08)
};

// ScriptStruct Phoenix.ExplodingSkeletonBoneMeshSetup
// Size: 0x18 (Inherited: 0x00)
struct FExplodingSkeletonBoneMeshSetup {
	struct FName AttachTo; // 0x00(0x08)
	struct TArray<struct FExplodingSkeletonBoneMesh> Meshes; // 0x08(0x10)
};

// ScriptStruct Phoenix.ExplodingSkeletonBoneMesh
// Size: 0x80 (Inherited: 0x00)
struct FExplodingSkeletonBoneMesh {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	struct FExplodingSkeletonPieceTimers Timers; // 0x2c(0x18)
	char pad_44[0x4]; // 0x44(0x04)
	struct FExplodingSkeletonPieceFX FX; // 0x48(0x18)
	struct FExplodingSkeletonPieceFXFade FadeFX; // 0x60(0x18)
	bool bMeshInCharacterSpace; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct Phoenix.ExplodingSkeletonGenericMeshSetupInstance
// Size: 0x70 (Inherited: 0x68)
struct FExplodingSkeletonGenericMeshSetupInstance : FExplodingSkeletonGenericMeshSetup {
	int32_t Instances; // 0x68(0x04)
	int32_t WithFX; // 0x6c(0x04)
};

// ScriptStruct Phoenix.MeshStateLightingFeatures
// Size: 0x01 (Inherited: 0x00)
struct FMeshStateLightingFeatures {
	char bCastShadows : 1; // 0x00(0x01)
	char bCastDynamicShadow : 1; // 0x00(0x01)
	char bCastContactShadow : 1; // 0x00(0x01)
	char bCastCapsuleDirectShadow : 1; // 0x00(0x01)
	char bOverride_bCastShadows : 1; // 0x00(0x01)
	char bOverride_bCastDynamicShadow : 1; // 0x00(0x01)
	char bOverride_bCastContactShadow : 1; // 0x00(0x01)
	char bOverride_bCastCapsuleDirectShadow : 1; // 0x00(0x01)
};

// ScriptStruct Phoenix.FastTravelLocationName
// Size: 0x08 (Inherited: 0x00)
struct FFastTravelLocationName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Phoenix.TravelLocation
// Size: 0x48 (Inherited: 0x00)
struct FTravelLocation {
	struct FString LocationID; // 0x00(0x10)
	struct FVector DropInLocaton; // 0x10(0x0c)
	struct FVector BeaconLocation; // 0x1c(0x0c)
	float DropInYaw; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString WorldName; // 0x30(0x10)
	bool bIsSaveLocation; // 0x40(0x01)
	bool bIsFloo; // 0x41(0x01)
	bool bIsBuiltNightly; // 0x42(0x01)
	bool bShowOnMap; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Phoenix.FastTravelTestEntry
// Size: 0x20 (Inherited: 0x00)
struct FFastTravelTestEntry {
	struct FString Name; // 0x00(0x10)
	struct FString Locations; // 0x10(0x10)
};

// ScriptStruct Phoenix.AdditionalProjectiles
// Size: 0x10 (Inherited: 0x00)
struct FAdditionalProjectiles {
	struct AMunitionType_Base* MunitionActor; // 0x00(0x08)
	float Delay; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Phoenix.FlipendoLevelData
// Size: 0x20 (Inherited: 0x01)
struct FFlipendoLevelData : FSpellLevelData {
	char pad_1[0x3]; // 0x01(0x03)
	float TapBasePhysicsImpulseXY; // 0x04(0x04)
	float TapBasePhysicsImpulseZ; // 0x08(0x04)
	float TapBaseAngularVelocity; // 0x0c(0x04)
	float TapMassScaledPhysicsImpulseXY; // 0x10(0x04)
	float TapMassScaledPhysicsImpulseZ; // 0x14(0x04)
	float TapMassScaleAngularVelocity; // 0x18(0x04)
	float TapMaxVelocity; // 0x1c(0x04)
};

// ScriptStruct Phoenix.FlockingFadeParameters
// Size: 0x34 (Inherited: 0x00)
struct FFlockingFadeParameters {
	float AutoStartFade; // 0x00(0x04)
	bool bAutoStartFade; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName FadeEnable; // 0x08(0x08)
	struct FName FadeDrawSphereCenter; // 0x10(0x08)
	struct FName FadeDrawSphereRadius; // 0x18(0x08)
	struct FName FadeDrawTransition; // 0x20(0x08)
	float TransitionWidth; // 0x28(0x04)
	float RadiusTimeConstant; // 0x2c(0x04)
	bool bDynamicBounds; // 0x30(0x01)
	bool bKillActorWhenDone; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
};

// ScriptStruct Phoenix.FlockCollisionParameters
// Size: 0x14 (Inherited: 0x00)
struct FFlockCollisionParameters {
	float Radius; // 0x00(0x04)
	int32_t PercentageWithCollision; // 0x04(0x04)
	uint32_t CollisionsTestsPerFrame; // 0x08(0x04)
	uint32_t StartupDelay; // 0x0c(0x04)
	bool bTraceComplex; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Phoenix.FlockGenerationParameters
// Size: 0x70 (Inherited: 0x00)
struct FFlockGenerationParameters {
	int32_t Members; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* MemberMesh; // 0x08(0x08)
	struct USkeletalMesh* MemberSkeletalMesh; // 0x10(0x08)
	bool bSkeletalMesh; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UParticleSystem* MemberParticleSystem; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform MemberParticleSystemTransform; // 0x30(0x30)
	int32_t PercentageWithParticleSystems; // 0x60(0x04)
	bool bAllowSkeletalMesh; // 0x64(0x01)
	char pad_65[0xb]; // 0x65(0x0b)
};

// ScriptStruct Phoenix.FlockingParameters
// Size: 0x68 (Inherited: 0x00)
struct FFlockingParameters {
	float Follow; // 0x00(0x04)
	float FollowLag; // 0x04(0x04)
	float AwayDamping; // 0x08(0x04)
	float MinFollowDistance; // 0x0c(0x04)
	float MaxFollowDistance; // 0x10(0x04)
	bool bEnforceMaxFollowDistance; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float Separation; // 0x18(0x04)
	float SeparationDistance; // 0x1c(0x04)
	int32_t Clusters; // 0x20(0x04)
	float Alignment; // 0x24(0x04)
	float Cohesion; // 0x28(0x04)
	bool bEnforceMaxSpeed; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float MaxSpeed; // 0x30(0x04)
	float VelocityDamping; // 0x34(0x04)
	struct FAlignToVelocity AlignSettings; // 0x38(0x10)
	bool bAlign; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float LocalSpace; // 0x4c(0x04)
	bool bUseDynamicLeader; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float SwitchDynamicLeaderTimeMin; // 0x54(0x04)
	float SwitchDynamicLeaderTimeMax; // 0x58(0x04)
	float StrengthMod; // 0x5c(0x04)
	float NumericMaxBounds; // 0x60(0x04)
	float NumericSpeedLimit; // 0x64(0x04)
};

// ScriptStruct Phoenix.FlockingParametersAdjustable
// Size: 0x5c (Inherited: 0x00)
struct FFlockingParametersAdjustable {
	float Follow; // 0x00(0x04)
	float FollowLag; // 0x04(0x04)
	float AwayDamping; // 0x08(0x04)
	float MinFollowDistance; // 0x0c(0x04)
	float MaxFollowDistance; // 0x10(0x04)
	bool bEnforceMaxFollowDistance; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float Separation; // 0x18(0x04)
	float SeparationDistance; // 0x1c(0x04)
	float Alignment; // 0x20(0x04)
	float Cohesion; // 0x24(0x04)
	bool bEnforceMaxSpeed; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MaxSpeed; // 0x2c(0x04)
	float VelocityDamping; // 0x30(0x04)
	struct FAlignToVelocity AlignSettings; // 0x34(0x10)
	bool bAlign; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float LocalSpace; // 0x48(0x04)
	bool bUseDynamicLeader; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float SwitchDynamicLeaderTimeMin; // 0x50(0x04)
	float SwitchDynamicLeaderTimeMax; // 0x54(0x04)
	float StrengthMod; // 0x58(0x04)
};

// ScriptStruct Phoenix.FlockMemberInitialConditions
// Size: 0x2c (Inherited: 0x00)
struct FFlockMemberInitialConditions {
	float PositionMin; // 0x00(0x04)
	float PositionMax; // 0x04(0x04)
	float SpeedMin; // 0x08(0x04)
	float SpeedMax; // 0x0c(0x04)
	struct FVector StartingUp; // 0x10(0x0c)
	float RandomRotationMin; // 0x1c(0x04)
	float RandomRotationMax; // 0x20(0x04)
	float Scale; // 0x24(0x04)
	float RandomizeScalePercent; // 0x28(0x04)
};

// ScriptStruct Phoenix.FlockMemberInitialState
// Size: 0x30 (Inherited: 0x00)
struct FFlockMemberInitialState {
	struct FQuat Rotation; // 0x00(0x10)
	struct FVector Position; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	float Scale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Phoenix.FlockingParametersAdjustableBlend
// Size: 0xc0 (Inherited: 0x00)
struct FFlockingParametersAdjustableBlend {
	struct FFlockingParametersAdjustable Start; // 0x00(0x5c)
	struct FFlockingParametersAdjustable End; // 0x5c(0x5c)
	float BlendTimeSeconds; // 0xb8(0x04)
	float Age; // 0xbc(0x04)
};

// ScriptStruct Phoenix.FlockingSpeedMap
// Size: 0x10 (Inherited: 0x00)
struct FFlockingSpeedMap {
	float MinSpeedMS; // 0x00(0x04)
	float MaxSpeedMS; // 0x04(0x04)
	float OutputLow; // 0x08(0x04)
	float OutputHigh; // 0x0c(0x04)
};

// ScriptStruct Phoenix.FlockPersonalities
// Size: 0x180 (Inherited: 0x00)
struct FFlockPersonalities {
	struct FFlockPersonalityWanderer Wanderers; // 0x00(0x28)
	bool bWanderers; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FFlockPersonalityLagger Laggers; // 0x30(0x20)
	bool bLaggers; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FFlockPersonalitySpacer Spacers; // 0x58(0x20)
	bool bSpacers; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FFlockPersonalitySpooker Spookers; // 0x80(0x38)
	bool bSpookers; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FFlockPersonalitySpinner Spinners; // 0xc0(0x38)
	bool bSpinners; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FFlockPersonalitySpinner AlternateSpinners; // 0x100(0x38)
	bool bAlternateSpinners; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FFlockPersonalityAnimate Animates; // 0x140(0x38)
	bool bAnimates; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
};

// ScriptStruct Phoenix.FlockPersonalityAnimate
// Size: 0x38 (Inherited: 0x00)
struct FFlockPersonalityAnimate {
	struct FFlockPersonalityDistribution Distribution; // 0x00(0x08)
	struct TArray<struct UAnimationAsset*> Animations; // 0x08(0x10)
	float MinPlaybackRate; // 0x18(0x04)
	float MaxPlaybackRate; // 0x1c(0x04)
	bool bLoop; // 0x20(0x01)
	char pad_21[0x17]; // 0x21(0x17)
};

// ScriptStruct Phoenix.FlockPersonalityDistribution
// Size: 0x08 (Inherited: 0x00)
struct FFlockPersonalityDistribution {
	float Percentage; // 0x00(0x04)
	bool bAllowStacking; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Phoenix.FlockPersonalitySpinner
// Size: 0x38 (Inherited: 0x00)
struct FFlockPersonalitySpinner {
	struct FFlockPersonalityDistribution Distribution; // 0x00(0x08)
	float MinWaitTime; // 0x08(0x04)
	float MaxWaitTime; // 0x0c(0x04)
	float MinSpinDuration; // 0x10(0x04)
	float MaxSpinDuration; // 0x14(0x04)
	enum class EFlockPersonalityAxis Axis; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float SpinSpeed; // 0x1c(0x04)
	bool bInWorld; // 0x20(0x01)
	char pad_21[0x17]; // 0x21(0x17)
};

// ScriptStruct Phoenix.FlockPersonalitySpooker
// Size: 0x38 (Inherited: 0x00)
struct FFlockPersonalitySpooker {
	struct FFlockPersonalityDistribution Distribution; // 0x00(0x08)
	float MinCalmTime; // 0x08(0x04)
	float MaxCalmTime; // 0x0c(0x04)
	float MinSpookDuration; // 0x10(0x04)
	float MaxSpookDuration; // 0x14(0x04)
	struct FVector SpookForce; // 0x18(0x0c)
	char pad_24[0x14]; // 0x24(0x14)
};

// ScriptStruct Phoenix.FlockPersonalitySpacer
// Size: 0x20 (Inherited: 0x00)
struct FFlockPersonalitySpacer {
	struct FFlockPersonalityDistribution Distribution; // 0x00(0x08)
	float MinFactor; // 0x08(0x04)
	float MaxFactor; // 0x0c(0x04)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Phoenix.FlockPersonalityLagger
// Size: 0x20 (Inherited: 0x00)
struct FFlockPersonalityLagger {
	struct FFlockPersonalityDistribution Distribution; // 0x00(0x08)
	float MinFactor; // 0x08(0x04)
	float MaxFactor; // 0x0c(0x04)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Phoenix.FlockPersonalityWanderer
// Size: 0x28 (Inherited: 0x00)
struct FFlockPersonalityWanderer {
	struct FFlockPersonalityDistribution Distribution; // 0x00(0x08)
	float Frequency; // 0x08(0x04)
	float MinFactor; // 0x0c(0x04)
	float MaxFactor; // 0x10(0x04)
	char pad_14[0x14]; // 0x14(0x14)
};

// ScriptStruct Phoenix.FlyingBroomBoostStat
// Size: 0x0c (Inherited: 0x00)
struct FFlyingBroomBoostStat {
	float HeightFromGround; // 0x00(0x04)
	float RechargeRate; // 0x04(0x04)
	float DecayRate; // 0x08(0x04)
};

// ScriptStruct Phoenix.FlyingBroomImpulseData
// Size: 0x1c (Inherited: 0x00)
struct FFlyingBroomImpulseData {
	float Impulse; // 0x00(0x04)
	float StartImpulse; // 0x04(0x04)
	float MaxSpeed; // 0x08(0x04)
	float MinDamping; // 0x0c(0x04)
	float MaxDamping; // 0x10(0x04)
	float DampingWhenNotMoving; // 0x14(0x04)
	bool bEnable; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Phoenix.FlyingStairStatus
// Size: 0x18 (Inherited: 0x00)
struct FFlyingStairStatus {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.AttachedActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FAttachedActorInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.ForbiddenAreaSpecificNPC
// Size: 0x88 (Inherited: 0x00)
struct FForbiddenAreaSpecificNPC {
	struct FDbSingleColumnInfo DbCharacterID; // 0x00(0x88)
};

// ScriptStruct Phoenix.ForceRenderSettingsCommand
// Size: 0x18 (Inherited: 0x00)
struct FForceRenderSettingsCommand {
	enum class EForceRenderSettingsScope Scope; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Command; // 0x04(0x08)
	struct FName Value; // 0x0c(0x08)
	bool bDisable; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Phoenix.FrontEndLevels
// Size: 0x38 (Inherited: 0x08)
struct FFrontEndLevels : FTableRowBase {
	struct FText LevelName; // 0x08(0x18)
	struct FText Path; // 0x20(0x18)
};

// ScriptStruct Phoenix.GlaciusPrimData
// Size: 0x10 (Inherited: 0x00)
struct FGlaciusPrimData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.FrozenData
// Size: 0x38 (Inherited: 0x00)
struct FFrozenData {
	struct TArray<struct UMultiFX2_Base*> FX2; // 0x00(0x10)
	struct FVector ImpactLocation; // 0x10(0x0c)
	struct FVector ImpactNormal; // 0x1c(0x0c)
	struct AMunitionType_Base* TalentAOEMunition; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Phoenix.RemapScalarRange
// Size: 0x10 (Inherited: 0x00)
struct FRemapScalarRange {
	struct FVector2D InputRange; // 0x00(0x08)
	struct FVector2D OutputRange; // 0x08(0x08)
};

// ScriptStruct Phoenix.ObjectHandles
// Size: 0x10 (Inherited: 0x00)
struct FObjectHandles {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.GearStatRecipeData
// Size: 0x20 (Inherited: 0x00)
struct FGearStatRecipeData {
	enum class GearStatType StatType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Upgrade; // 0x04(0x04)
	struct TArray<struct FRecipeIngredient> Ingredients; // 0x08(0x10)
	bool bHasAllIngredients; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Phoenix.GearTraitRecipeData
// Size: 0x48 (Inherited: 0x00)
struct FGearTraitRecipeData {
	struct FGearTraitRecipeDefinition RecipeDefinition; // 0x00(0x30)
	bool bIsUnlocked; // 0x30(0x01)
	bool bHasAllIngredients; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<struct FRecipeIngredient> Ingredients; // 0x38(0x10)
};

// ScriptStruct Phoenix.GearTraitRecipeDefinition
// Size: 0x30 (Inherited: 0x00)
struct FGearTraitRecipeDefinition {
	struct FName TraitID; // 0x00(0x08)
	struct FName LockId; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
	struct TArray<struct FRecipeIngredientDefinition> Ingredients; // 0x18(0x10)
	struct FName RarityTier; // 0x28(0x08)
};

// ScriptStruct Phoenix.GearCharacterPieceDefinition
// Size: 0x148 (Inherited: 0x00)
struct FGearCharacterPieceDefinition {
	struct UCharacterPiece* CharacterPiece; // 0x00(0x08)
	struct FMaterialParameterDefinition MaterialParams; // 0x08(0xf0)
	struct TMap<enum class EGearHouseID, struct FMaterialParameterDefinition> HouseMaterialParams; // 0xf8(0x50)
};

// ScriptStruct Phoenix.MaterialParameterDefinition
// Size: 0xf0 (Inherited: 0x00)
struct FMaterialParameterDefinition {
	struct TMap<struct FName, float> ScalarOverrides; // 0x00(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorOverrides; // 0x50(0x50)
	struct TMap<struct FName, struct UTexture*> TextureOverrides; // 0xa0(0x50)
};

// ScriptStruct Phoenix.GearUI
// Size: 0x18 (Inherited: 0x00)
struct FGearUI {
	struct FName SourceID; // 0x00(0x08)
	struct TArray<struct FString> Descriptions; // 0x08(0x10)
};

// ScriptStruct Phoenix.GearFaceSlotName
// Size: 0x10 (Inherited: 0x10)
struct FGearFaceSlotName : FGearName {
};

// ScriptStruct Phoenix.GroundSwarmBurrowingParameters
// Size: 0x30 (Inherited: 0x00)
struct FGroundSwarmBurrowingParameters {
	float BurrowingMinDelay; // 0x00(0x04)
	float BurrowingMaxDelay; // 0x04(0x04)
	float BurrowingForce; // 0x08(0x04)
	float BurrowingMaxSpeed; // 0x0c(0x04)
	float SwarmForceFactor; // 0x10(0x04)
	float SurfaceVelocityDampening; // 0x14(0x04)
	float BurrowingDeathTimeout; // 0x18(0x04)
	float DeathLeapTimeout; // 0x1c(0x04)
	float DeathLeapImpulse; // 0x20(0x04)
	float DeathLeapThresholdAngleDegrees; // 0x24(0x04)
	float FreefallingDeathDuration; // 0x28(0x04)
	bool bAlignToVelocity; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Phoenix.GroundSwarmVoxelCollisionParameters
// Size: 0x34 (Inherited: 0x00)
struct FGroundSwarmVoxelCollisionParameters {
	float InitialGroundScanHeight; // 0x00(0x04)
	int32_t PreCacheMaxCollisionsFrame; // 0x04(0x04)
	float Radius; // 0x08(0x04)
	float SurfaceOffset; // 0x0c(0x04)
	float MaxTimeStep; // 0x10(0x04)
	float Elasticity; // 0x14(0x04)
	float ElasticityVariancePercent; // 0x18(0x04)
	float StickyThreshold; // 0x1c(0x04)
	float BounceNoiseAmountDegrees; // 0x20(0x04)
	float FreefallTimeout; // 0x24(0x04)
	float DeadRecycleDelayMin; // 0x28(0x04)
	float DeadRecycleDelayMax; // 0x2c(0x04)
	float RespawnVelocityVariance; // 0x30(0x04)
};

// ScriptStruct Phoenix.GroundSwarmVoxelCollisionDebugParameters
// Size: 0x34 (Inherited: 0x00)
struct FGroundSwarmVoxelCollisionDebugParameters {
	bool bShowVoxels; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FSimpleTopologyVoxelArrayDebug ShowVoxels; // 0x04(0x0c)
	bool bShowCollisions; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float TimeFactor; // 0x14(0x04)
	float ShowPreCacheLandingsTime; // 0x18(0x04)
	int32_t StartCollisionInstance; // 0x1c(0x04)
	bool bLockCollisionInstance; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t StopTimeCollisionCount; // 0x24(0x04)
	float CollisionTimeFilter; // 0x28(0x04)
	bool bSlowTimeOnCollisions; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float ForceLinesReset; // 0x30(0x04)
};

// ScriptStruct Phoenix.SimpleTopologyVoxelArrayDebug
// Size: 0x0c (Inherited: 0x00)
struct FSimpleTopologyVoxelArrayDebug {
	bool bShowEmptySpace; // 0x00(0x01)
	bool bShowSurfaceVoxels; // 0x01(0x01)
	bool bShowSurfaceNormals; // 0x02(0x01)
	bool bShowPointCenterOffset; // 0x03(0x01)
	bool bShowSurfacePlanes; // 0x04(0x01)
	bool bShowInterior; // 0x05(0x01)
	bool bShowPendingCompute; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float PlaneOffset; // 0x08(0x04)
};

// ScriptStruct Phoenix.GroundSwarmGenerationParameters
// Size: 0x10 (Inherited: 0x00)
struct FGroundSwarmGenerationParameters {
	int32_t Members; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* MemberMesh; // 0x08(0x08)
};

// ScriptStruct Phoenix.GroundSwarmExternals
// Size: 0xf0 (Inherited: 0x00)
struct FGroundSwarmExternals {
	struct FGroundSwarmingFocus Follow; // 0x00(0xa0)
	struct FGroundSwarmingExternalForces ExternalForces; // 0xa0(0x10)
	struct FGroundSwarmingForceModifiers ForceModifiers; // 0xb0(0x10)
	struct FGroundSwarmingDeathVolumes DeathVolumes; // 0xc0(0x10)
	struct FGroundSwarmSimulationFollowInfo FollowInfo; // 0xd0(0x1c)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Phoenix.GroundSwarmSimulationFollowInfo
// Size: 0x1c (Inherited: 0x00)
struct FGroundSwarmSimulationFollowInfo {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float ForceFactor; // 0x18(0x04)
};

// ScriptStruct Phoenix.GroundSwarmingDeathVolumes
// Size: 0x10 (Inherited: 0x00)
struct FGroundSwarmingDeathVolumes {
	struct TArray<struct FGroundSwarmingDeathVolume> DeathVolumes; // 0x00(0x10)
};

// ScriptStruct Phoenix.GroundSwarmingDeathVolume
// Size: 0x110 (Inherited: 0x00)
struct FGroundSwarmingDeathVolume {
	struct FGroundSwarmingFocus Origin; // 0x00(0xa0)
	struct FVector HalfExtent; // 0xa0(0x0c)
	enum class EGroundSwarmingKillEventType KillEvent; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct FSwarmMemberDesiredDeathState DesiredDeathState; // 0xb0(0x34)
	bool bAutoBounds; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float AutoBoundsScaleXY; // 0xe8(0x04)
	bool bTestXYOnly; // 0xec(0x01)
	bool bEnabled; // 0xed(0x01)
	char pad_EE[0x2]; // 0xee(0x02)
	struct FBox AABB; // 0xf0(0x1c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct Phoenix.SwarmMemberDesiredDeathState
// Size: 0x34 (Inherited: 0x00)
struct FSwarmMemberDesiredDeathState {
	enum class EGroundSwarmMemberState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector DeathLeapImpulse; // 0x04(0x0c)
	float DeathLeapImpulseVariancePercent; // 0x10(0x04)
	enum class EGroundSwarmingKillEventDeathLeapCollisionType DeathLeapCheckForActorCollision; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector DeathLeapAlignTowardsCenter; // 0x18(0x0c)
	bool bDeathLeapAlignTowardsCenter; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float StateTimeout; // 0x28(0x04)
	bool bStateTimeout; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t Instigator; // 0x30(0x04)
};

// ScriptStruct Phoenix.GroundSwarmingFocus
// Size: 0xa0 (Inherited: 0x00)
struct FGroundSwarmingFocus {
	enum class EGroundSwarmingFocusType Type; // 0x00(0x01)
	enum class EGroundSwarmingFocusTypeHint TypeHint; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector Point; // 0x04(0x0c)
	struct FRotator Orientation; // 0x10(0x0c)
	struct FVector Extents; // 0x1c(0x0c)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x28(0x08)
	struct TWeakObjectPtr<struct USceneComponent> SceneComponent; // 0x30(0x08)
	struct FBox CurrentBounds; // 0x38(0x1c)
	struct FVector CurrentPosition; // 0x54(0x0c)
	struct FVector CurrentVelocity; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FQuat CurrentOrientation; // 0x70(0x10)
	struct FGroundSwarmingVelocityTracker VelocityTracker; // 0x80(0x10)
	bool bBoundsIncludeNonColliding; // 0x90(0x01)
	bool bCacheBounds; // 0x91(0x01)
	char pad_92[0xe]; // 0x92(0x0e)
};

// ScriptStruct Phoenix.GroundSwarmingVelocityTracker
// Size: 0x10 (Inherited: 0x00)
struct FGroundSwarmingVelocityTracker {
	struct FVector LastPosition; // 0x00(0x0c)
	bool bLastPositionValid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Phoenix.GroundSwarmingForceModifiers
// Size: 0x10 (Inherited: 0x00)
struct FGroundSwarmingForceModifiers {
	struct TArray<struct FGroundSwarmingForceModifier> ForceModifiers; // 0x00(0x10)
};

// ScriptStruct Phoenix.GroundSwarmingForceModifier
// Size: 0xd0 (Inherited: 0x00)
struct FGroundSwarmingForceModifier {
	enum class EGroundSwarmingForceModifierType Type; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FGroundSwarmingFocus Origin; // 0x10(0xa0)
	float InnerRadius; // 0xb0(0x04)
	float InnerMultiplier; // 0xb4(0x04)
	float OuterRadius; // 0xb8(0x04)
	float OuterMultiplier; // 0xbc(0x04)
	bool bUseXYDistance; // 0xc0(0x01)
	bool bEnabled; // 0xc1(0x01)
	char pad_C2[0xe]; // 0xc2(0x0e)
};

// ScriptStruct Phoenix.GroundSwarmingExternalForces
// Size: 0x10 (Inherited: 0x00)
struct FGroundSwarmingExternalForces {
	struct TArray<struct FGroundSwarmingExternalForce> ExternalForces; // 0x00(0x10)
};

// ScriptStruct Phoenix.GroundSwarmingExternalForce
// Size: 0xd0 (Inherited: 0x00)
struct FGroundSwarmingExternalForce {
	enum class EGroundSwarmingExternalForceType Type; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FGroundSwarmingFocus Origin; // 0x10(0xa0)
	float InnerForce; // 0xb0(0x04)
	float InnerRadius; // 0xb4(0x04)
	float OuterForce; // 0xb8(0x04)
	float OuterRadius; // 0xbc(0x04)
	float CurlNoiseXYScaling; // 0xc0(0x04)
	float CurlNoiseEpsilon; // 0xc4(0x04)
	bool bOuterForceUnbounded; // 0xc8(0x01)
	bool bUseXYDistance; // 0xc9(0x01)
	bool bSurfaceOnly; // 0xca(0x01)
	bool bEnabled; // 0xcb(0x01)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct Phoenix.GroundSwarmingParameters
// Size: 0x50 (Inherited: 0x00)
struct FGroundSwarmingParameters {
	float GravityFactor; // 0x00(0x04)
	float Follow; // 0x04(0x04)
	float Separation; // 0x08(0x04)
	float SeparationDistance; // 0x0c(0x04)
	float Alignment; // 0x10(0x04)
	float Cohesion; // 0x14(0x04)
	float FollowLag; // 0x18(0x04)
	float MaxSpeed; // 0x1c(0x04)
	struct FGroundSwarmingCurlNoiseParameters CurlNoise; // 0x20(0x18)
	float CurlNoiseScale; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UAkAudioEvent* MemberSfxLoop; // 0x40(0x08)
	int32_t MaxMembersWithSFXLoop; // 0x48(0x04)
	bool bAlignToVelocity; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct Phoenix.GroundSwarmingCurlNoiseParameters
// Size: 0x18 (Inherited: 0x00)
struct FGroundSwarmingCurlNoiseParameters {
	enum class EGroundSwarmingCurlNoiseMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	float SampleRate; // 0x08(0x04)
	float Force; // 0x0c(0x04)
	float ForceVariancePercent; // 0x10(0x04)
	float Epsilon; // 0x14(0x04)
};

// ScriptStruct Phoenix.GroundSwarmingCurlNoiseForce
// Size: 0x10 (Inherited: 0x00)
struct FGroundSwarmingCurlNoiseForce {
	struct FVector Force; // 0x00(0x0c)
	float Timeout; // 0x0c(0x04)
};

// ScriptStruct Phoenix.GroundSwarmerInitialConditions
// Size: 0x3c (Inherited: 0x00)
struct FGroundSwarmerInitialConditions {
	float XYPositionMin; // 0x00(0x04)
	float XYPositionMax; // 0x04(0x04)
	float ZPositionMin; // 0x08(0x04)
	float ZPositionMax; // 0x0c(0x04)
	float XYVelocityMin; // 0x10(0x04)
	float XYVelocityMax; // 0x14(0x04)
	float ZVelocityMin; // 0x18(0x04)
	float ZVelocityMax; // 0x1c(0x04)
	struct FVector StartingUp; // 0x20(0x0c)
	float RandomRotationMin; // 0x2c(0x04)
	float RandomRotationMax; // 0x30(0x04)
	float Scale; // 0x34(0x04)
	float RandomizeScalePercent; // 0x38(0x04)
};

// ScriptStruct Phoenix.GroundSwarmerInitialState
// Size: 0x30 (Inherited: 0x00)
struct FGroundSwarmerInitialState {
	struct FQuat Rotation; // 0x00(0x10)
	struct FVector Position; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	float Scale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Phoenix.GroundSwarmInitialShapeSettings
// Size: 0x0c (Inherited: 0x00)
struct FGroundSwarmInitialShapeSettings {
	float RandomConeHalfAngle; // 0x00(0x04)
	float Offset; // 0x04(0x04)
	bool bRefreshOnBeginPlay; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Phoenix.GroundSwarmingTargetTracker
// Size: 0x18 (Inherited: 0x00)
struct FGroundSwarmingTargetTracker {
	struct AActor* Target; // 0x00(0x08)
	int32_t Hits; // 0x08(0x04)
	float ThresholdMetDelayTimer; // 0x0c(0x04)
	bool bSignalledThresholdResult; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Phoenix.GuideSplineTrajectory
// Size: 0xd8 (Inherited: 0x00)
struct FGuideSplineTrajectory {
	float TargetPositionSpeed; // 0x00(0x04)
	float SimDT; // 0x04(0x04)
	float TargetHalfLife; // 0x08(0x04)
	float TrajectoryHalfLife; // 0x0c(0x04)
	float TrajectoryDampingFactor; // 0x10(0x04)
	float TrajectorySpeed; // 0x14(0x04)
	float TrajectorySpeedInitialAccelerationHalfLife; // 0x18(0x04)
	float TrajectorySpeedFinalDecelerationHalfLife; // 0x1c(0x04)
	float StartingBurstTime; // 0x20(0x04)
	float StartingBurstTrajectorySpeed; // 0x24(0x04)
	float ResimulationMergeDistanceThreshold; // 0x28(0x04)
	char pad_2C[0xac]; // 0x2c(0xac)
};

// ScriptStruct Phoenix.SeedInfo
// Size: 0x30 (Inherited: 0x00)
struct FSeedInfo {
	struct FName PlantID; // 0x00(0x08)
	struct FName Seed_ItemID; // 0x08(0x08)
	struct FName LockId; // 0x10(0x08)
	bool bUnlocked; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName PlotSize; // 0x1c(0x08)
	bool bIsMultiHarvestable; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t GrowthTimeSec; // 0x28(0x04)
	int32_t SortingIndex; // 0x2c(0x04)
};

// ScriptStruct Phoenix.PlantDefinition
// Size: 0x44 (Inherited: 0x00)
struct FPlantDefinition {
	struct FName PlantID; // 0x00(0x08)
	int32_t Tier; // 0x08(0x04)
	struct FName Seed_ItemID; // 0x0c(0x08)
	struct FName LockId; // 0x14(0x08)
	struct FName ByproductID; // 0x1c(0x08)
	struct FName PlotSize; // 0x24(0x08)
	int32_t GrowthTimeSec; // 0x2c(0x04)
	bool bIsMultiHarvestable; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t RegrowthTimeSec; // 0x34(0x04)
	int32_t Yield_Planted; // 0x38(0x04)
	int32_t Yield_Foraged; // 0x3c(0x04)
	int32_t SortingIndex; // 0x40(0x04)
};

// ScriptStruct Phoenix.FertilizerEffect
// Size: 0x04 (Inherited: 0x00)
struct FFertilizerEffect {
	int32_t ExtraYield; // 0x00(0x04)
};

// ScriptStruct Phoenix.IdentityLightTemplateSettings
// Size: 0x28 (Inherited: 0x00)
struct FIdentityLightTemplateSettings {
	char bOverride_Intensity : 1; // 0x00(0x01)
	char bOverride_Color : 1; // 0x00(0x01)
	char bOverride_Temperature : 1; // 0x00(0x01)
	char bOverride_AttenuationRadius : 1; // 0x00(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x00(0x01)
	char bOverride_VolumetricScatteringIntensity : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Intensity; // 0x04(0x04)
	struct FLinearColor LightColor; // 0x08(0x10)
	float LightTemperature; // 0x18(0x04)
	float AttenuationRadius; // 0x1c(0x04)
	float IndirectLightingIntensity; // 0x20(0x04)
	float VolumetricScatteringIntensity; // 0x24(0x04)
};

// ScriptStruct Phoenix.ImperiusData
// Size: 0x18 (Inherited: 0x00)
struct FImperiusData {
	struct TArray<struct UMultiFX2_Base*> FX2; // 0x00(0x10)
	struct UGameplayPropertyMod* Mod; // 0x10(0x08)
};

// ScriptStruct Phoenix.BurningMaterial
// Size: 0x18 (Inherited: 0x00)
struct FBurningMaterial {
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Phoenix.InfirmaryStudentStatus
// Size: 0x18 (Inherited: 0x00)
struct FInfirmaryStudentStatus {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.InstallFeature
// Size: 0x28 (Inherited: 0x00)
struct FInstallFeature {
	enum class EInstallFeatures FeatureId; // 0x00(0x01)
	bool bIsLanguagePack; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString FeatureTag; // 0x08(0x10)
	struct TArray<int32_t> ChunkIds; // 0x18(0x10)
};

// ScriptStruct Phoenix.BoneSwarmGenerationParameters
// Size: 0x10 (Inherited: 0x00)
struct FBoneSwarmGenerationParameters {
	int32_t Members; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* MemberMesh; // 0x08(0x08)
};

// ScriptStruct Phoenix.BoneSwarmerInitialConditions
// Size: 0x54 (Inherited: 0x00)
struct FBoneSwarmerInitialConditions {
	enum class FBoneSwarmProjectionType ProjectionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector BaseProjectionDirection; // 0x04(0x0c)
	float MinConeHalfAngle; // 0x10(0x04)
	float MaxConeHalfAngle; // 0x14(0x04)
	enum class FCharacterBoneProjectionMotionType MotionType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float MinRotationSpeed; // 0x1c(0x04)
	float MaxRotationSpeed; // 0x20(0x04)
	float MinTranslationPeriod; // 0x24(0x04)
	float MaxTranslationPeriod; // 0x28(0x04)
	float MinTranslationExtent; // 0x2c(0x04)
	float MaxTranslationExtent; // 0x30(0x04)
	float MinCrawlingSpeed; // 0x34(0x04)
	float MaxCrawlingSpeed; // 0x38(0x04)
	enum class FBoneSwarmShowType ShowType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MinHiddenTime; // 0x40(0x04)
	float MaxHiddenTime; // 0x44(0x04)
	float Offset; // 0x48(0x04)
	float Scale; // 0x4c(0x04)
	float RandomizeScalePercent; // 0x50(0x04)
};

// ScriptStruct Phoenix.InstancedMeshPositionalSources
// Size: 0x10 (Inherited: 0x00)
struct FInstancedMeshPositionalSources {
	struct TArray<struct FInstancedMeshPositionalSource> Sources; // 0x00(0x10)
};

// ScriptStruct Phoenix.InstancedMeshPositionalSource
// Size: 0x10 (Inherited: 0x00)
struct FInstancedMeshPositionalSource {
	int32_t Instance; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkComponent* SoundComponent; // 0x08(0x08)
};

// ScriptStruct Phoenix.InstancedTrailMember
// Size: 0xc0 (Inherited: 0x00)
struct FInstancedTrailMember {
	char pad_0[0xc0]; // 0x00(0xc0)
};

// ScriptStruct Phoenix.InstancedTrailMemberBehavior
// Size: 0x1e0 (Inherited: 0x00)
struct FInstancedTrailMemberBehavior {
	struct FInstancedTrailPlacement Placement; // 0x00(0x44)
	char pad_44[0x4]; // 0x44(0x04)
	struct FInstancedTrailMemberScale Scale; // 0x48(0x98)
	struct FInstancedTrailMemberSpawnLerp SpawnLerp; // 0xe0(0xa0)
	bool bUseSpawnLerp; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	struct FInstancedTrailMemberSpin Spin; // 0x184(0x34)
	bool bUseSpin; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	struct FInstancedTrailMemberVelocity Velocity; // 0x1bc(0x20)
	bool bUseVelocity; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
};

// ScriptStruct Phoenix.InstancedTrailMemberVelocity
// Size: 0x20 (Inherited: 0x00)
struct FInstancedTrailMemberVelocity {
	float Inherit; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float RandomInheritConeHalfAngle; // 0x08(0x04)
	struct FVector LocalVelocity; // 0x0c(0x0c)
	bool bLocalVelocity; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float LocalVelocityConeHalfAngle; // 0x1c(0x04)
};

// ScriptStruct Phoenix.InstancedTrailMemberSpin
// Size: 0x34 (Inherited: 0x00)
struct FInstancedTrailMemberSpin {
	float RotationsMin; // 0x00(0x04)
	float RotationsMax; // 0x04(0x04)
	enum class EInstancedTrailMemberRotationConstraint RotationConstraint; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Speed; // 0x0c(0x04)
	float Friction; // 0x10(0x04)
	bool bFlipFlopSpeed; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector Axis; // 0x18(0x0c)
	float RandomizeAxisConeHalfAngle; // 0x24(0x04)
	float MinDelay; // 0x28(0x04)
	float MaxDelay; // 0x2c(0x04)
	float ChanceOfNoRotations; // 0x30(0x04)
};

// ScriptStruct Phoenix.InstancedTrailMemberSpawnLerp
// Size: 0xa0 (Inherited: 0x00)
struct FInstancedTrailMemberSpawnLerp {
	struct FRuntimeFloatCurve Curve; // 0x00(0x88)
	struct FVector RotateAxis; // 0x88(0x0c)
	bool bRotateAxis; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float RotateDegrees; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct Phoenix.InstancedTrailMemberScale
// Size: 0x98 (Inherited: 0x00)
struct FInstancedTrailMemberScale {
	float Scale; // 0x00(0x04)
	float RandomizePercent; // 0x04(0x04)
	struct FRuntimeFloatCurve Curve; // 0x08(0x88)
	bool bScaleCurve; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct Phoenix.InstancedTrailPlacement
// Size: 0x44 (Inherited: 0x00)
struct FInstancedTrailPlacement {
	struct FRotator InitialRotation; // 0x00(0x0c)
	bool bInitialRotation; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float RandomRotationDegrees; // 0x10(0x04)
	bool bRandomRotation; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float UpDown; // 0x18(0x04)
	bool bUpDown; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float LeftRight; // 0x20(0x04)
	bool bLeftRight; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float ForeAft; // 0x28(0x04)
	bool bForeAft; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float DirRotation; // 0x30(0x04)
	bool bDirRotation; // 0x34(0x01)
	bool bOnGround; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float OnGroundTraceDepth; // 0x38(0x04)
	float OnGroundZTweak; // 0x3c(0x04)
	float OnGroundZTweakRandomizePercent; // 0x40(0x04)
};

// ScriptStruct Phoenix.InteractiveObjectLinkData
// Size: 0x20 (Inherited: 0x00)
struct FInteractiveObjectLinkData {
	enum class EInteractiveState m_startState; // 0x00(0x01)
	enum class EInteractiveState m_endState; // 0x01(0x01)
	enum class EInteractiveAction m_action; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FText m_message; // 0x08(0x18)
};

// ScriptStruct Phoenix.UseItemAbilityInfo
// Size: 0x10 (Inherited: 0x00)
struct FUseItemAbilityInfo {
	struct FName ItemName; // 0x00(0x08)
	struct FName AbilityName; // 0x08(0x08)
};

// ScriptStruct Phoenix.InventoryFilter
// Size: 0x30 (Inherited: 0x00)
struct FInventoryFilter {
	struct FString Value; // 0x00(0x10)
	struct FString ColumnName; // 0x10(0x10)
	struct FString TableName; // 0x20(0x10)
};

// ScriptStruct Phoenix.ItemStaticMeshMapStruct
// Size: 0x10 (Inherited: 0x08)
struct FItemStaticMeshMapStruct : FTableRowBase {
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
};

// ScriptStruct Phoenix.ItemProperties
// Size: 0x6c (Inherited: 0x00)
struct FItemProperties {
	struct FName ItemId; // 0x00(0x08)
	int32_t EconomyValue; // 0x08(0x04)
	int32_t SellPrice; // 0x0c(0x04)
	bool Inventoryable; // 0x10(0x01)
	bool Persistent; // 0x11(0x01)
	bool Consumable; // 0x12(0x01)
	bool bTriggerAbilityOnConsume; // 0x13(0x01)
	bool Giftable; // 0x14(0x01)
	bool Sellable; // 0x15(0x01)
	bool Dropable; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	int32_t MaxInventoryStack; // 0x18(0x04)
	struct FName ItemUsageType; // 0x1c(0x08)
	struct FName ItemUsageObjectID; // 0x24(0x08)
	struct FName LockId; // 0x2c(0x08)
	struct FName OnUseLockID; // 0x34(0x08)
	struct FName RarityTier; // 0x3c(0x08)
	struct FName PrerequisiteLockID; // 0x44(0x08)
	struct FName PrerequisiteLockID2; // 0x4c(0x08)
	struct FName ItemType; // 0x54(0x08)
	bool UsableFromInventory; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32_t ItemLevel; // 0x60(0x04)
	struct FName StorageLocation; // 0x64(0x08)
};

// ScriptStruct Phoenix.InventoryHolder
// Size: 0x18 (Inherited: 0x00)
struct FInventoryHolder {
	struct FName HolderID; // 0x00(0x08)
	struct TArray<struct FInventoryResult> InventoryResults; // 0x08(0x10)
};

// ScriptStruct Phoenix.IsmDesInstance
// Size: 0x110 (Inherited: 0x00)
struct FIsmDesInstance {
	char pad_0[0x70]; // 0x00(0x70)
	struct AActor* DA; // 0x70(0x08)
	char pad_78[0x98]; // 0x78(0x98)
};

// ScriptStruct Phoenix.ItemName
// Size: 0x08 (Inherited: 0x00)
struct FItemName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Phoenix.KnowledgeGainInfo
// Size: 0x28 (Inherited: 0x00)
struct FKnowledgeGainInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Phoenix.CollectionCategory
// Size: 0x58 (Inherited: 0x00)
struct FCollectionCategory {
	struct FName CategoryID; // 0x00(0x08)
	struct TMap<struct FName, struct FCollectionSubcategory> Subcategories; // 0x08(0x50)
};

// ScriptStruct Phoenix.CollectionSubcategory
// Size: 0x58 (Inherited: 0x00)
struct FCollectionSubcategory {
	struct FName SubcategoryID; // 0x00(0x08)
	struct TMap<struct FName, struct FCollectionItem> CollectionItems; // 0x08(0x50)
};

// ScriptStruct Phoenix.CollectionItem
// Size: 0x28 (Inherited: 0x00)
struct FCollectionItem {
	struct FName ItemId; // 0x00(0x08)
	struct FName ItemState; // 0x08(0x08)
	int64_t UpdateTime; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Phoenix.KnowledgeAuthority
// Size: 0x18 (Inherited: 0x00)
struct FKnowledgeAuthority {
	struct FName SubjectID; // 0x00(0x08)
	struct FName AuthorityID; // 0x08(0x08)
	enum class EKnowledgeLevel Level; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t SocialCapital; // 0x14(0x04)
};

// ScriptStruct Phoenix.OdcLadderInfo
// Size: 0x28 (Inherited: 0x00)
struct FOdcLadderInfo {
	int32_t LadderHeight; // 0x00(0x04)
	float LadderMeshHeight; // 0x04(0x04)
	bool bOverrideBottomLinkEnd; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector BottomLinkEnd; // 0x0c(0x0c)
	bool bOverrideTopLinkEnd; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector TopLinkEnd; // 0x1c(0x0c)
};

// ScriptStruct Phoenix.LayerInfoWeight
// Size: 0x18 (Inherited: 0x00)
struct FLayerInfoWeight {
	struct FString Name; // 0x00(0x10)
	float weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.LayerInfoData
// Size: 0x28 (Inherited: 0x00)
struct FLayerInfoData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Phoenix.LayerInfoWeightData
// Size: 0x18 (Inherited: 0x00)
struct FLayerInfoWeightData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.LeviosoData
// Size: 0x90 (Inherited: 0x00)
struct FLeviosoData {
	struct TArray<struct UMultiFX2_Base*> FX2; // 0x00(0x10)
	char pad_10[0x40]; // 0x10(0x40)
	struct UCurveFloat* HoverTargetOffset; // 0x50(0x08)
	struct UCurveVector* HoverTargetRotation; // 0x58(0x08)
	struct TArray<struct UInteractionArchitectAsset*> DataAssetArray; // 0x60(0x10)
	struct FGameplayTagContainer MunitionTagContainer; // 0x70(0x20)
};

// ScriptStruct Phoenix.LightComponentStatesSaveData
// Size: 0x10 (Inherited: 0x00)
struct FLightComponentStatesSaveData {
	struct TArray<struct ULightComponentStateData*> Data; // 0x00(0x10)
};

// ScriptStruct Phoenix.LightComponentStates
// Size: 0x10 (Inherited: 0x00)
struct FLightComponentStates {
	struct TArray<struct ULightComponentState*> States; // 0x00(0x10)
};

// ScriptStruct Phoenix.LightTemplateSettings
// Size: 0x28 (Inherited: 0x00)
struct FLightTemplateSettings {
	float Intensity; // 0x00(0x04)
	struct FLinearColor LightColor; // 0x04(0x10)
	float LightTemperature; // 0x14(0x04)
	float AttenuationRadius; // 0x18(0x04)
	float IndirectLightingIntensity; // 0x1c(0x04)
	float VolumetricScatteringIntensity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Phoenix.DialogLineRule_CameraCharacter
// Size: 0xa0 (Inherited: 0x00)
struct FDialogLineRule_CameraCharacter {
	struct FSceneRigStage_ActorReference Actor; // 0x00(0x10)
	struct TArray<struct FDialogLineRule_CameraAnimation> Animations; // 0x10(0x10)
	struct FDialogLineRule_CameraFixup CameraFixup; // 0x20(0x48)
	struct FSceneRigStage_TransformReference Placement; // 0x68(0x10)
	struct UTransformProvider* PlacementTransform; // 0x78(0x08)
	struct FAnimationRequestLayerReference PlacementLayer; // 0x80(0x08)
	float OffsetFromDialogueLine; // 0x88(0x04)
	float SwitchCameraLengthThreshold; // 0x8c(0x04)
	bool UseWhenSpeaking; // 0x90(0x01)
	bool UseAtEnd; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float OffsetFromEnd; // 0x94(0x04)
	float MinimumPreviousCameraLength; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct Phoenix.DialogLineRule_CameraFixup
// Size: 0x48 (Inherited: 0x00)
struct FDialogLineRule_CameraFixup {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	enum class ECameraFixupLayer Layer; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct UCameraFixupOperation*> Operations; // 0x28(0x10)
	struct TArray<struct UCameraFixupActorAction*> ActorActions; // 0x38(0x10)
};

// ScriptStruct Phoenix.DialogLineRule_CameraAnimation
// Size: 0x28 (Inherited: 0x00)
struct FDialogLineRule_CameraAnimation {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FAnimationRequestLayerReference Layer; // 0x20(0x08)
};

// ScriptStruct Phoenix.DialogueLineRule_PickCameraItem
// Size: 0x10 (Inherited: 0x00)
struct FDialogueLineRule_PickCameraItem {
	struct UActorProvider* Camera; // 0x00(0x08)
	float weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Phoenix.EventLocationResult
// Size: 0x30 (Inherited: 0x00)
struct FEventLocationResult {
	struct FVector Position; // 0x00(0x0c)
	float ZRotation; // 0x0c(0x04)
	struct FString LocationName; // 0x10(0x10)
	struct FString Guid; // 0x20(0x10)
};

// ScriptStruct Phoenix.MeshOffset
// Size: 0x10 (Inherited: 0x00)
struct FMeshOffset {
	struct FVector Position; // 0x00(0x0c)
	float Yaw; // 0x0c(0x04)
};

// ScriptStruct Phoenix.LODViewerMeshBox
// Size: 0x28 (Inherited: 0x00)
struct FLODViewerMeshBox {
	struct FString MeshName; // 0x00(0x10)
	struct FVector Min; // 0x10(0x0c)
	struct FVector Max; // 0x1c(0x0c)
};

// ScriptStruct Phoenix.LODViewerInfos
// Size: 0x08 (Inherited: 0x00)
struct FLODViewerInfos {
	float ScreenSize; // 0x00(0x04)
	float Hysteresis; // 0x04(0x04)
};

// ScriptStruct Phoenix.LootDropChanceAmendInfo
// Size: 0x14 (Inherited: 0x00)
struct FLootDropChanceAmendInfo {
	struct FName ItemId; // 0x00(0x08)
	struct FName ItemType; // 0x08(0x08)
	float PercentChance; // 0x10(0x04)
};

// ScriptStruct Phoenix.LootContainer
// Size: 0x20 (Inherited: 0x00)
struct FLootContainer {
	struct FString UniqueContainerID; // 0x00(0x10)
	struct TArray<struct FLootSlot> Slots; // 0x10(0x10)
};

// ScriptStruct Phoenix.LootSlot
// Size: 0x38 (Inherited: 0x00)
struct FLootSlot {
	struct FString ID; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Quality; // 0x18(0x10)
	bool ItemIsUnique; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t Slot; // 0x2c(0x04)
	bool Stolen; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Phoenix.LootPick
// Size: 0x20 (Inherited: 0x00)
struct FLootPick {
	struct FString ContainerID; // 0x00(0x10)
	int32_t ContainerWeightMin; // 0x10(0x04)
	int32_t ContainerWeightMax; // 0x14(0x04)
	int32_t ContainerWeightBase; // 0x18(0x04)
	int32_t ItemRollCount; // 0x1c(0x04)
};

// ScriptStruct Phoenix.LootWeight
// Size: 0x0c (Inherited: 0x00)
struct FLootWeight {
	int32_t WeightMin; // 0x00(0x04)
	int32_t WeightMax; // 0x04(0x04)
	int32_t ItemIndex; // 0x08(0x04)
};

// ScriptStruct Phoenix.LumosScalabilitySettingsQuality
// Size: 0x28 (Inherited: 0x00)
struct FLumosScalabilitySettingsQuality {
	struct ULumosScalabilityAsset* Low; // 0x00(0x08)
	struct ULumosScalabilityAsset* Medium; // 0x08(0x08)
	struct ULumosScalabilityAsset* High; // 0x10(0x08)
	struct ULumosScalabilityAsset* Epic; // 0x18(0x08)
	struct ULumosScalabilityAsset* Cinematic; // 0x20(0x08)
};

// ScriptStruct Phoenix.LumosScalabilitySettingsMatch
// Size: 0x18 (Inherited: 0x00)
struct FLumosScalabilitySettingsMatch {
	struct UWorld* World; // 0x00(0x08)
	struct AActor* Caster; // 0x08(0x08)
	bool bIsPlayer; // 0x10(0x01)
	enum class EPhoenixScalabilityLevel PlatformLevel; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Phoenix.LumosScalabilitySettings
// Size: 0x48 (Inherited: 0x00)
struct FLumosScalabilitySettings {
	enum class ELumosLightingScenario Lighting; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LightRadiusFactor; // 0x04(0x04)
	float EmissiveDecalRatio; // 0x08(0x04)
	enum class EShadowQualityLevels CastShadowsThreshold; // 0x0c(0x01)
	bool bRenderAsSimpleLight; // 0x0d(0x01)
	bool bSkipSimpleLightDemotion; // 0x0e(0x01)
	bool bProjectDynamicShadows; // 0x0f(0x01)
	bool bCastStaticShadows; // 0x10(0x01)
	bool bCastDynamicShadows; // 0x11(0x01)
	bool bCastVolumetricShadow; // 0x12(0x01)
	bool bCastTranslucentShadows; // 0x13(0x01)
	bool bAffectVolumetricLighting; // 0x14(0x01)
	bool bCastRaytracedShadow; // 0x15(0x01)
	bool bWbDoNotCacheShadows; // 0x16(0x01)
	enum class ELumosContactShadows ContactShadows; // 0x17(0x01)
	float ContactShadowLength; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct ULumosPostProcessingAsset* PostProcessing; // 0x20(0x08)
	float MinDistance; // 0x28(0x04)
	float OuterConeAngle; // 0x2c(0x04)
	struct TArray<struct UMaterialSwapMeshState*> CasterMeshStates; // 0x30(0x10)
	bool bCasterMeshStatesIncludeChildren; // 0x40(0x01)
	bool bUsePostProcessing; // 0x41(0x01)
	bool bOverride_MinDistance; // 0x42(0x01)
	bool bOverride_OuterConeAngle; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Phoenix.LumosLevelData
// Size: 0x10 (Inherited: 0x01)
struct FLumosLevelData : FSpellLevelData {
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	float Intensity; // 0x08(0x04)
	float MinDistance; // 0x0c(0x04)
};

// ScriptStruct Phoenix.MapLevelData
// Size: 0x50 (Inherited: 0x00)
struct FMapLevelData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Phoenix.MiniMapNameAndTexture
// Size: 0x48 (Inherited: 0x00)
struct FMiniMapNameAndTexture {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Phoenix.MapNavMeshData
// Size: 0x40 (Inherited: 0x00)
struct FMapNavMeshData {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Phoenix.MapIconChooserDehighlight
// Size: 0x20 (Inherited: 0x00)
struct FMapIconChooserDehighlight {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.MapIconChooserData
// Size: 0x28 (Inherited: 0x00)
struct FMapIconChooserData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Phoenix.MapRegionEnemyLevel
// Size: 0x08 (Inherited: 0x00)
struct FMapRegionEnemyLevel {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.MapBeaconPoint
// Size: 0x50 (Inherited: 0x00)
struct FMapBeaconPoint {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Phoenix.MapTriangle
// Size: 0x70 (Inherited: 0x00)
struct FMapTriangle {
	uint32_t Index; // 0x00(0x04)
	int32_t Indices[0x3]; // 0x04(0x0c)
	struct FVector Vertex[0x3]; // 0x10(0x24)
	int32_t LayerIndex; // 0x34(0x04)
	char pad_38[0x38]; // 0x38(0x38)
};

// ScriptStruct Phoenix.MapBoundingBox
// Size: 0x18 (Inherited: 0x00)
struct FMapBoundingBox {
	struct FVector Min; // 0x00(0x0c)
	struct FVector Max; // 0x0c(0x0c)
};

// ScriptStruct Phoenix.MapBoundingBox2D
// Size: 0x10 (Inherited: 0x00)
struct FMapBoundingBox2D {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.MapIconModelAnimation
// Size: 0x50 (Inherited: 0x00)
struct FMapIconModelAnimation {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Phoenix.HoverDataEvent
// Size: 0x10 (Inherited: 0x00)
struct FHoverDataEvent {
	char pad_0[0x1]; // 0x00(0x01)
	bool isWayMarker; // 0x01(0x01)
	char pad_2[0xe]; // 0x02(0x0e)
};

// ScriptStruct Phoenix.MapToolTipData
// Size: 0x1b8 (Inherited: 0x00)
struct FMapToolTipData {
	struct FVector InitialIconPosition; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UBeaconInfo* BeaconInfo; // 0x10(0x08)
	struct AMapCursor* CursorWidget; // 0x18(0x08)
	struct FString Title; // 0x20(0x10)
	struct FString Region; // 0x30(0x10)
	struct FString Description; // 0x40(0x10)
	struct FText Legend; // 0x50(0x18)
	struct FMissionLogData MissionData; // 0x68(0xa8)
	int32_t LevelRequirement; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct FMissionRewardData> MissionRewards; // 0x118(0x10)
	enum class EMapToolTipTypes Type; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32_t Distance; // 0x12c(0x04)
	bool ShouldShowDistance; // 0x130(0x01)
	enum class EMapZoomTypes ZoomType; // 0x131(0x01)
	char pad_132[0x6]; // 0x132(0x06)
	struct FString AvailableMissionsTitle; // 0x138(0x10)
	bool ShouldShowAvailableMissions; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct TArray<struct FString> AvailableMissionNames; // 0x150(0x10)
	struct TArray<struct FString> AvailableMissionIcons; // 0x160(0x10)
	struct TArray<struct FLinearColor> AvailableMissionColors; // 0x170(0x10)
	struct TArray<struct FRegionPopuplData> CollectionStats; // 0x180(0x10)
	struct FString EnemyLevelString; // 0x190(0x10)
	int32_t EnemyLevelMin; // 0x1a0(0x04)
	int32_t EnemyLevelMax; // 0x1a4(0x04)
	struct TArray<struct FLegendItemData> ButtonLegends; // 0x1a8(0x10)
};

// ScriptStruct Phoenix.RegionPopuplData
// Size: 0x30 (Inherited: 0x00)
struct FRegionPopuplData {
	struct FString IconName; // 0x00(0x10)
	struct FString ItemName; // 0x10(0x10)
	enum class EBeaconType Type; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t Total; // 0x24(0x04)
	int32_t TotalFinished; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Phoenix.MissionRewardData
// Size: 0x28 (Inherited: 0x00)
struct FMissionRewardData {
	struct FString ItemId; // 0x00(0x10)
	struct FString ItemCategory; // 0x10(0x10)
	int32_t Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Phoenix.MissionLogData
// Size: 0xa8 (Inherited: 0x00)
struct FMissionLogData {
	struct FName MissionID; // 0x00(0x08)
	int32_t MissionLevel; // 0x08(0x04)
	int32_t SuggestedMissionLevel; // 0x0c(0x04)
	struct FString PrereqLockID1; // 0x10(0x10)
	struct FString PrereqLockID2; // 0x20(0x10)
	struct FString MissionTitle; // 0x30(0x10)
	struct FString QuestJournal; // 0x40(0x10)
	struct FString StepJournal; // 0x50(0x10)
	struct TArray<struct FTaskData> TaskStates; // 0x60(0x10)
	struct TArray<struct FString> RewardIDs; // 0x70(0x10)
	struct TArray<struct FMissionRewardData> RewardData; // 0x80(0x10)
	enum class EMissionLine MissionLine; // 0x90(0x01)
	bool IsSpine; // 0x91(0x01)
	bool IsHomework; // 0x92(0x01)
	bool IsRelationship; // 0x93(0x01)
	bool IsExclusive; // 0x94(0x01)
	bool IsTrackable; // 0x95(0x01)
	bool IsComplete; // 0x96(0x01)
	char pad_97[0x1]; // 0x97(0x01)
	struct TArray<struct FProgressLockRewardEntry> ProgressLockRewards; // 0x98(0x10)
};

// ScriptStruct Phoenix.ProgressLockRewardEntry
// Size: 0x0c (Inherited: 0x00)
struct FProgressLockRewardEntry {
	enum class EProgressLockRewardType RewardType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName RewardName; // 0x04(0x08)
};

// ScriptStruct Phoenix.TaskData
// Size: 0x20 (Inherited: 0x00)
struct FTaskData {
	struct FString DisplayName; // 0x00(0x10)
	bool IsComplete; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t RuntimeValue1; // 0x14(0x04)
	int32_t RuntimeValue2; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Phoenix.SanctuaryMiniMapUnlocks
// Size: 0x10 (Inherited: 0x00)
struct FSanctuaryMiniMapUnlocks {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.MapScreenMouseButton
// Size: 0x0c (Inherited: 0x00)
struct FMapScreenMouseButton {
	bool Pressed; // 0x00(0x01)
	bool Released; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float PressedTime; // 0x04(0x04)
	bool Clicked; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Phoenix.MapDungeonSubdivisionData
// Size: 0x18 (Inherited: 0x00)
struct FMapDungeonSubdivisionData {
	float PerceptionRadius; // 0x00(0x04)
	float ZoomFactor; // 0x04(0x04)
	struct FString Owner; // 0x08(0x10)
};

// ScriptStruct Phoenix.MapFXChainEntry
// Size: 0xd0 (Inherited: 0x00)
struct FMapFXChainEntry {
	struct FString Name; // 0x00(0x10)
	float Delay; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FMapFXItem FXData; // 0x18(0x40)
	struct FTimerHandle TimerHandle; // 0x58(0x08)
	struct FTransform Transform; // 0x60(0x30)
	struct FVector Scale; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString SFXName; // 0xa0(0x10)
	bool AutoActivate; // 0xb0(0x01)
	bool AutoDestroy; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct UNiagaraComponent* NiagaraComponent; // 0xb8(0x08)
	int32_t Priority; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
};

// ScriptStruct Phoenix.MapFXItem
// Size: 0x40 (Inherited: 0x00)
struct FMapFXItem {
	struct UNiagaraSystem* NiagaraSystem; // 0x00(0x08)
	struct FString Path; // 0x08(0x10)
	struct FString Name; // 0x18(0x10)
	bool Looped; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FVector Scale; // 0x2c(0x0c)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Phoenix.MapWithinRegion
// Size: 0x30 (Inherited: 0x00)
struct FMapWithinRegion {
	struct APhoenixMapRegion* Region; // 0x00(0x08)
	struct APhoenixMapRegion* SubRegion; // 0x08(0x08)
	struct APhoenixMapRegion* LevelRegion; // 0x10(0x08)
	struct APhoenixMapRegion* InnerLevelRegion; // 0x18(0x08)
	struct FString RegionName; // 0x20(0x10)
};

// ScriptStruct Phoenix.DungeonMissionGate
// Size: 0x20 (Inherited: 0x00)
struct FDungeonMissionGate {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.MapDungeonSaveDataBlob
// Size: 0x10 (Inherited: 0x00)
struct FMapDungeonSaveDataBlob {
	struct TArray<struct FMapDungeonSaveData> DungeonFOWDataListData; // 0x00(0x10)
};

// ScriptStruct Phoenix.MapDungeonSaveData
// Size: 0x4020 (Inherited: 0x00)
struct FMapDungeonSaveData {
	struct FString DungeonName; // 0x00(0x10)
	char pad_10[0x4010]; // 0x10(0x4010)
};

// ScriptStruct Phoenix.MapOptions
// Size: 0x10 (Inherited: 0x00)
struct FMapOptions {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.MiniMapOptions
// Size: 0x10 (Inherited: 0x00)
struct FMiniMapOptions {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.MarkupData
// Size: 0x08 (Inherited: 0x00)
struct FMarkupData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.MapDungeonSubdivisionTable
// Size: 0x50 (Inherited: 0x08)
struct FMapDungeonSubdivisionTable : FTableRowBase {
	struct FString DungeonName; // 0x08(0x10)
	struct FString OwnerName; // 0x18(0x10)
	float PerceptionRadius; // 0x28(0x04)
	float ZoomFactor; // 0x2c(0x04)
	struct FMissionName MissionLock; // 0x30(0x08)
	struct FString MissionStepLock; // 0x38(0x10)
	bool OpenAfterMission; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Phoenix.MissionName
// Size: 0x08 (Inherited: 0x00)
struct FMissionName {
	struct FName MissionName; // 0x00(0x08)
};

// ScriptStruct Phoenix.MapFXDataTable
// Size: 0x48 (Inherited: 0x08)
struct FMapFXDataTable : FTableRowBase {
	struct FMapFXData Overland; // 0x08(0x10)
	struct FMapFXData Hogwarts; // 0x18(0x10)
	struct FMapFXData Hogsmeade; // 0x28(0x10)
	struct FMapFXData Dungeon; // 0x38(0x10)
};

// ScriptStruct Phoenix.MapFXData
// Size: 0x10 (Inherited: 0x00)
struct FMapFXData {
	struct TArray<struct FMapFXEntry> Effects; // 0x00(0x10)
};

// ScriptStruct Phoenix.MapFXEntry
// Size: 0x20 (Inherited: 0x00)
struct FMapFXEntry {
	struct FName FXName; // 0x00(0x08)
	struct FName FXPath; // 0x08(0x08)
	struct FVector Scale; // 0x10(0x0c)
	bool Looped; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Phoenix.HogwartsDBIcon
// Size: 0x70 (Inherited: 0x00)
struct FHogwartsDBIcon {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct Phoenix.HogwartsRegion
// Size: 0x30 (Inherited: 0x00)
struct FHogwartsRegion {
	struct UBeaconInfo* Region; // 0x00(0x08)
	struct TArray<struct UBeaconInfo*> RegionsIcons; // 0x08(0x10)
	struct FName RequiredLock1; // 0x18(0x08)
	struct UBeaconInfo* AlertBeacon; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Phoenix.HogwartsRegionHoveredHiddenIcons
// Size: 0x14 (Inherited: 0x00)
struct FHogwartsRegionHoveredHiddenIcons {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Phoenix.PathLocationData
// Size: 0x38 (Inherited: 0x00)
struct FPathLocationData {
	struct UMapMarkupComponent* Room; // 0x00(0x08)
	struct UMapLocation* Floor; // 0x08(0x08)
	struct UMapMarkupComponent* Stair; // 0x10(0x08)
	struct UMapLocation* Primary; // 0x18(0x08)
	struct AMapLocationActor* PrimaryStructureLocationActor; // 0x20(0x08)
	struct FVector PathPoint; // 0x28(0x0c)
	bool bISinglePrimaryLocation; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Phoenix.LocationGroup
// Size: 0x10 (Inherited: 0x00)
struct FLocationGroup {
	struct TArray<struct AMapLocationActor*> Locations; // 0x00(0x10)
};

// ScriptStruct Phoenix.MapIconAnimationsDataTable
// Size: 0x48 (Inherited: 0x08)
struct FMapIconAnimationsDataTable : FTableRowBase {
	float AnimationTime; // 0x08(0x04)
	enum class EMapIconAnimationLoopType LoopType; // 0x0c(0x01)
	enum class EMapIconAnimationBinding Binding; // 0x0d(0x01)
	enum class EMapIconAnimationSetType SetType; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	float LoopDelay; // 0x10(0x04)
	bool LerpToColor; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FDataTableRowHandle TargetColor; // 0x18(0x10)
	float OverlandScale; // 0x28(0x04)
	float HogsmeadeScale; // 0x2c(0x04)
	float HogwartsScale; // 0x30(0x04)
	float ScalingMultiplier; // 0x34(0x04)
	struct TArray<struct FVector> AnimationKeys; // 0x38(0x10)
};

// ScriptStruct Phoenix.MapIconCacheDataTable
// Size: 0x18 (Inherited: 0x08)
struct FMapIconCacheDataTable : FTableRowBase {
	struct TArray<struct FString> Icons; // 0x08(0x10)
};

// ScriptStruct Phoenix.MapIconColors
// Size: 0x108 (Inherited: 0x08)
struct FMapIconColors : FTableRowBase {
	struct FDataTableRowHandle UndiscoveredIconColor; // 0x08(0x10)
	struct FDataTableRowHandle DiscoveredIconColor; // 0x18(0x10)
	struct FDataTableRowHandle DiscoveredIncompleteIconColor; // 0x28(0x10)
	struct FDataTableRowHandle CompletedIconColor; // 0x38(0x10)
	struct FDataTableRowHandle LockedIconColor; // 0x48(0x10)
	struct FDataTableRowHandle UnlockedIconColor; // 0x58(0x10)
	struct FDataTableRowHandle TrackedIconColor; // 0x68(0x10)
	struct FDataTableRowHandle TrackedWaypointIconColor; // 0x78(0x10)
	struct FDataTableRowHandle MainLineMissionIconColor; // 0x88(0x10)
	struct FDataTableRowHandle ClosestFastTravelIconColor; // 0x98(0x10)
	struct FDataTableRowHandle MissionLevelNotHighEnough; // 0xa8(0x10)
	struct FDataTableRowHandle AuthorityFigureColor; // 0xb8(0x10)
	struct FDataTableRowHandle EnemyColor; // 0xc8(0x10)
	struct FDataTableRowHandle HiddenByFogOfWar; // 0xd8(0x10)
	struct FDataTableRowHandle FastTravelLocked; // 0xe8(0x10)
	struct FDataTableRowHandle FastTravelUnlocked; // 0xf8(0x10)
};

// ScriptStruct Phoenix.MapIconEntry
// Size: 0x70 (Inherited: 0x00)
struct FMapIconEntry {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct Phoenix.CompassIconStyle
// Size: 0x68 (Inherited: 0x08)
struct FCompassIconStyle : FTableRowBase {
	float IconBaseScale; // 0x08(0x04)
	struct FVector2D IconElevationOffsetUp; // 0x0c(0x08)
	struct FVector2D IconElevationOffsetDown; // 0x14(0x08)
	float IconElevationScale; // 0x1c(0x04)
	struct FString MapIconName; // 0x20(0x10)
	struct FString MinimapIconName; // 0x30(0x10)
	bool HasAlternateTexture; // 0x40(0x01)
	bool ShowOnMinimap; // 0x41(0x01)
	bool ShowOnHUD; // 0x42(0x01)
	bool LockToHUD; // 0x43(0x01)
	float HudViewDistHogwarts; // 0x44(0x04)
	float HudViewDistOverland; // 0x48(0x04)
	float HudMinViewDist; // 0x4c(0x04)
	bool BroomRevelio; // 0x50(0x01)
	bool ShowHudDistanceNums; // 0x51(0x01)
	bool ShouldClearOnComplete; // 0x52(0x01)
	bool ReplayableOnComplete; // 0x53(0x01)
	bool HasCompleteTexture; // 0x54(0x01)
	bool NeedsGlint; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	float MaxDistance; // 0x58(0x04)
	float MinDistance; // 0x5c(0x04)
	float Priority; // 0x60(0x04)
	bool ShowPulsingIcon; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct Phoenix.MapLocTable
// Size: 0x18 (Inherited: 0x08)
struct FMapLocTable : FTableRowBase {
	struct TArray<struct FMapLocItem> MapActions; // 0x08(0x10)
};

// ScriptStruct Phoenix.MapLocItem
// Size: 0x28 (Inherited: 0x00)
struct FMapLocItem {
	enum class EMapLocTypes MapAction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ButtonKey; // 0x08(0x10)
	struct FString LocKey; // 0x18(0x10)
};

// ScriptStruct Phoenix.MapLocDataItem
// Size: 0x20 (Inherited: 0x00)
struct FMapLocDataItem {
	struct FString ButtonKey; // 0x00(0x10)
	struct FString LocKey; // 0x10(0x10)
};

// ScriptStruct Phoenix.RegionNamesDataTable
// Size: 0x28 (Inherited: 0x08)
struct FRegionNamesDataTable : FTableRowBase {
	enum class ERegionType RegionType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString RegionLocName; // 0x10(0x10)
	int32_t EnemyLevelMin; // 0x20(0x04)
	int32_t EnemyLevelMax; // 0x24(0x04)
};

// ScriptStruct Phoenix.MapBeaconStateSaveData
// Size: 0x50 (Inherited: 0x00)
struct FMapBeaconStateSaveData {
	struct TMap<struct FString, int32_t> BeaconStateMap; // 0x00(0x50)
};

// ScriptStruct Phoenix.MapWaypointInfo
// Size: 0x24 (Inherited: 0x00)
struct FMapWaypointInfo {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct Phoenix.MapIconListContainer
// Size: 0x10 (Inherited: 0x00)
struct FMapIconListContainer {
	struct TArray<struct FMapIconEntry> IconList; // 0x00(0x10)
};

// ScriptStruct Phoenix.IconWidgetLog
// Size: 0x30 (Inherited: 0x00)
struct FIconWidgetLog {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Phoenix.MapTierData
// Size: 0x44 (Inherited: 0x00)
struct FMapTierData {
	char pad_0[0x44]; // 0x00(0x44)
};

// ScriptStruct Phoenix.TierDataTable
// Size: 0x58 (Inherited: 0x08)
struct FTierDataTable : FTableRowBase {
	enum class EBeaconType BeaconType; // 0x08(0x01)
	enum class EBeaconState BeaconState; // 0x09(0x01)
	bool CanFastTravel; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FMapTierDescription Tier1; // 0x0c(0x0c)
	struct FMapTierDescription Tier2; // 0x18(0x0c)
	struct FMapTierDescription Tier3; // 0x24(0x0c)
	struct FMapTierDescription Tier4; // 0x30(0x0c)
	struct FMapTierDescription Tier5; // 0x3c(0x0c)
	float IconScale; // 0x48(0x04)
	float IconZoomScaleFactor; // 0x4c(0x04)
	int32_t IconPriority; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Phoenix.MapTierDescription
// Size: 0x0c (Inherited: 0x00)
struct FMapTierDescription {
	bool Dot; // 0x00(0x01)
	bool Icon; // 0x01(0x01)
	bool Name; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Scale; // 0x04(0x04)
	bool ShowOverFogOfWar; // 0x08(0x01)
	bool AllowHoverOverFogOfWar; // 0x09(0x01)
	bool AllowHover; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct Phoenix.MaterialParameterSetter
// Size: 0x98 (Inherited: 0x00)
struct FMaterialParameterSetter {
	struct FName ParameterName; // 0x00(0x08)
	struct USetParameterValue* ParameterValue; // 0x08(0x08)
	struct FAlphaBlend BlendIn; // 0x10(0x30)
	struct FAlphaBlend BlendOut; // 0x40(0x30)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x70(0x10)
	struct TArray<struct USetParameterValue*> PreviousValues; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
};

// ScriptStruct Phoenix.MaterialPropertyOverrideData
// Size: 0xb0 (Inherited: 0x00)
struct FMaterialPropertyOverrideData {
	bool bOverrideObjectPropertyType; // 0x00(0x01)
	enum class EObjectPropertyType ObjectPropertyType; // 0x01(0x01)
	bool bOverrideWaterproof; // 0x02(0x01)
	char bWaterproof : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	bool bOverrideImmuneToFireDamage; // 0x04(0x01)
	char bImmuneToFireDamage : 1; // 0x05(0x01)
	char pad_5_1 : 7; // 0x05(0x01)
	bool bOverrideDamagableWhenCharred; // 0x06(0x01)
	char bDamagableWhenCharred : 1; // 0x07(0x01)
	char pad_7_1 : 7; // 0x07(0x01)
	bool bOverrideDestroyWhenCharred; // 0x08(0x01)
	char bDestroyWhenCharred : 1; // 0x09(0x01)
	char pad_9_1 : 7; // 0x09(0x01)
	bool bOverrideFireDamagePerSecond; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float FireDamagePerSecond; // 0x0c(0x04)
	bool bOverrideBurnRate; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BurnRate; // 0x14(0x04)
	bool bOverrideCharacterDurationScale; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float CharacterDurationScale; // 0x1c(0x04)
	bool bOverrideBurnRingWidth; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float BurnRingWidth; // 0x24(0x04)
	bool bOverrideFireJumpDistance; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float FireJumpDistance; // 0x2c(0x04)
	bool bOverrideCharredPercent; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float CharredPercent; // 0x34(0x04)
	bool bOverridOverlayBurn; // 0x38(0x01)
	char bOverlayBurn : 1; // 0x39(0x01)
	char pad_39_1 : 7; // 0x39(0x01)
	bool bOverrideBurnMaterial; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct UMaterialInterface* BurnMaterial; // 0x40(0x08)
	bool bOverrideCharredMaterial; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UMaterialInterface* CharredMaterial; // 0x50(0x08)
	bool bOverrideCharredDamageMultiplier; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float CharredDamageMultiplier; // 0x5c(0x04)
	bool bOverrideFireParticleSpawnRateScale; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float FireParticleSpawnRateScale; // 0x64(0x04)
	bool bOverrideFireStartSfx; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UAkAudioEvent* FireStartSfx; // 0x70(0x08)
	bool bOverrideFireLoopSfx; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UAkAudioEvent* FireLoopSfx; // 0x80(0x08)
	bool bOverrideFireEndSfx; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UAkAudioEvent* FireEndSfx; // 0x90(0x08)
	bool bOverrideFreezable; // 0x98(0x01)
	char bFreezable : 1; // 0x99(0x01)
	char pad_99_1 : 7; // 0x99(0x01)
	bool bOverrideDamagableWhenFrozen; // 0x9a(0x01)
	char bDamagableWhenFrozen : 1; // 0x9b(0x01)
	char pad_9B_1 : 7; // 0x9b(0x01)
	bool bOverrideIcePhysicalMaterial; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct UPhysicalMaterial* IcePhysicalMaterial; // 0xa0(0x08)
	bool bOverrideFrozenDamageMultiplier; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float FrozenDamageMultiplier; // 0xac(0x04)
};

// ScriptStruct Phoenix.MaterialDefaultParameters
// Size: 0xf0 (Inherited: 0x00)
struct FMaterialDefaultParameters {
	struct TMap<struct FName, float> Scalars; // 0x00(0x50)
	struct TMap<struct FName, struct FLinearColor> Vectors; // 0x50(0x50)
	struct TMap<struct FName, struct UTexture*> Textures; // 0xa0(0x50)
};

// ScriptStruct Phoenix.MinimapHogwartsLevels
// Size: 0x1c (Inherited: 0x00)
struct FMinimapHogwartsLevels {
	float Z1; // 0x00(0x04)
	float Z2; // 0x04(0x04)
	float Z3; // 0x08(0x04)
	float Z4; // 0x0c(0x04)
	float Z5; // 0x10(0x04)
	float Z6; // 0x14(0x04)
	float Average; // 0x18(0x04)
};

// ScriptStruct Phoenix.MinimapHogwartsLevelData
// Size: 0x10 (Inherited: 0x08)
struct FMinimapHogwartsLevelData : FTableRowBase {
	float BottomZValue; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Phoenix.MiniMapIconBackgrounds
// Size: 0x38 (Inherited: 0x08)
struct FMiniMapIconBackgrounds : FTableRowBase {
	struct FString IconName; // 0x08(0x10)
	struct FString IconBackgroundLayer2; // 0x18(0x10)
	struct FString IconBackgroundLayer3; // 0x28(0x10)
};

// ScriptStruct Phoenix.MiniMapIconOutlines
// Size: 0x28 (Inherited: 0x08)
struct FMiniMapIconOutlines : FTableRowBase {
	struct FString IconName; // 0x08(0x10)
	struct FString OutlineName; // 0x18(0x10)
};

// ScriptStruct Phoenix.MinimapWidgetLog
// Size: 0x48 (Inherited: 0x00)
struct FMinimapWidgetLog {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Phoenix.MiniMapSaveDataBlob
// Size: 0x50 (Inherited: 0x00)
struct FMiniMapSaveDataBlob {
	char pad_0[0x8]; // 0x00(0x08)
	struct FMiniMapSanctuarySaveData Sanctuary; // 0x08(0x18)
	char pad_20[0x4]; // 0x20(0x04)
	struct FMiniMapTentsData Tents; // 0x24(0x04)
	char pad_28[0x3]; // 0x28(0x03)
	bool IsInTent; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString LastTentName; // 0x30(0x10)
	struct FVector LastOverlandLocation; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Phoenix.MiniMapTentsData
// Size: 0x04 (Inherited: 0x00)
struct FMiniMapTentsData {
	int32_t CurrentLevel; // 0x00(0x04)
};

// ScriptStruct Phoenix.MiniMapSanctuarySaveData
// Size: 0x18 (Inherited: 0x00)
struct FMiniMapSanctuarySaveData {
	char pad_0[0x10]; // 0x00(0x10)
	enum class ESanctuaryMiniMapType CurrentMapType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Phoenix.MiniMapDungeonData
// Size: 0x01 (Inherited: 0x00)
struct FMiniMapDungeonData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.MiniMapHogsmeadeData
// Size: 0x01 (Inherited: 0x00)
struct FMiniMapHogsmeadeData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.MiniMapHogwartsData
// Size: 0x01 (Inherited: 0x00)
struct FMiniMapHogwartsData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.MiniMapTutorialSaveData
// Size: 0x01 (Inherited: 0x00)
struct FMiniMapTutorialSaveData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.MiniMapOverlandSaveData
// Size: 0x01 (Inherited: 0x00)
struct FMiniMapOverlandSaveData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.MinimapIntrusionArea
// Size: 0x48 (Inherited: 0x00)
struct FMinimapIntrusionArea {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Phoenix.MissionTabData
// Size: 0x40 (Inherited: 0x00)
struct FMissionTabData {
	enum class EMissionTabType MissionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMissionLogData> MissionData; // 0x08(0x10)
	struct FString TitleText; // 0x18(0x10)
	struct FString NoMissionText; // 0x28(0x10)
	bool ShowTotals; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Phoenix.RegionHeightData
// Size: 0x08 (Inherited: 0x00)
struct FRegionHeightData {
	float RegionHeight; // 0x00(0x04)
	bool bAllowBuffer; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Phoenix.MultiVfxSfx
// Size: 0x28 (Inherited: 0x18)
struct FMultiVfxSfx : FMultiVfx {
	struct UAkAudioEvent* SFX; // 0x18(0x08)
	struct UAkAudioEvent* EndSfx; // 0x20(0x08)
};

// ScriptStruct Phoenix.MultiFX
// Size: 0x30 (Inherited: 0x28)
struct FMultiFX : FMultiVfxSfx {
	struct ASkinFXDefinition* SkinFX; // 0x28(0x08)
};

// ScriptStruct Phoenix.MultiFXPlus
// Size: 0x70 (Inherited: 0x30)
struct FMultiFXPlus : FMultiFX {
	enum class EMultiFXLoc PlacementMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t MaxBoneFX; // 0x34(0x04)
	struct TArray<struct FName> AttachBoneList; // 0x38(0x10)
	struct FVector VfxOffset; // 0x48(0x0c)
	struct FVector VfxScale; // 0x54(0x0c)
	float DurationLimit; // 0x60(0x04)
	float SecondsBetweenSpawns; // 0x64(0x04)
	char bOnCharacters : 1; // 0x68(0x01)
	char bOnNonMovable : 1; // 0x68(0x01)
	char bOnNonActors : 1; // 0x68(0x01)
	char EndWhenMovementStops : 1; // 0x68(0x01)
	char pad_68_4 : 4; // 0x68(0x01)
	enum class EMultiPlusRepeat RepeatMode; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// ScriptStruct Phoenix.MultiSfx
// Size: 0x18 (Inherited: 0x08)
struct FMultiSfx : FMultiBase {
	struct UAkAudioEvent* SFX; // 0x08(0x08)
	struct UAkAudioEvent* EndSfx; // 0x10(0x08)
};

// ScriptStruct Phoenix.MultiFXData
// Size: 0x48 (Inherited: 0x00)
struct FMultiFXData {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Phoenix.MultiFX2_FootprintInfo
// Size: 0x40 (Inherited: 0x00)
struct FMultiFX2_FootprintInfo {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FVector DecalRandomSizeMin; // 0x08(0x0c)
	struct FVector DecalRandomSizeMax; // 0x14(0x0c)
	bool DirectionalDecal; // 0x20(0x01)
	bool FlipLeftFoot; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32_t DecalFrameCount; // 0x24(0x04)
	float FadeInDelay; // 0x28(0x04)
	float FadeInTime; // 0x2c(0x04)
	float LifeSpan; // 0x30(0x04)
	float FadeTime; // 0x34(0x04)
	bool bRenderAfterWeather; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Phoenix.MultiFX2_SkinFxImpactOptions
// Size: 0x01 (Inherited: 0x00)
struct FMultiFX2_SkinFxImpactOptions {
	char bWorldPoint : 1; // 0x00(0x01)
	char bWorldNormal : 1; // 0x00(0x01)
	char bWorldFullBasis : 1; // 0x00(0x01)
	char bAttachedPoint : 1; // 0x00(0x01)
	char bAttachedNormal : 1; // 0x00(0x01)
	char bAttachedUseClosestBone : 1; // 0x00(0x01)
	char bAttachedFullBasis : 1; // 0x00(0x01)
	char pad_0_7 : 1; // 0x00(0x01)
};

// ScriptStruct Phoenix.BoneListSpawnInfo
// Size: 0x10 (Inherited: 0x00)
struct FBoneListSpawnInfo {
	struct TArray<struct FName> BoneList; // 0x00(0x10)
};

// ScriptStruct Phoenix.FXPoke
// Size: 0x08 (Inherited: 0x00)
struct FFXPoke {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.FXPokeNiagara
// Size: 0x78 (Inherited: 0x08)
struct FFXPokeNiagara : FFXPoke {
	struct TArray<struct FPokeNiagaraFXFloat> Floats; // 0x08(0x10)
	struct TArray<struct FPokeNiagaraFXColor> Colors; // 0x18(0x10)
	struct TArray<struct FPokeNiagaraFXVector> Vectors; // 0x28(0x10)
	struct TArray<struct FPokeNiagaraFXVector4> Vector4s; // 0x38(0x10)
	struct TArray<struct FPokeNiagaraFXQuat> Quats; // 0x48(0x10)
	struct TArray<struct FPokeNiagaraFXInt> Ints; // 0x58(0x10)
	struct TArray<struct FPokeNiagaraFXBool> Bools; // 0x68(0x10)
};

// ScriptStruct Phoenix.PokeNiagaraFXParameter
// Size: 0x10 (Inherited: 0x08)
struct FPokeNiagaraFXParameter : FFXPoke {
	struct FName Parameter; // 0x08(0x08)
};

// ScriptStruct Phoenix.PokeNiagaraFXBool
// Size: 0x18 (Inherited: 0x10)
struct FPokeNiagaraFXBool : FPokeNiagaraFXParameter {
	bool bValue; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Phoenix.PokeNiagaraFXInt
// Size: 0x18 (Inherited: 0x10)
struct FPokeNiagaraFXInt : FPokeNiagaraFXParameter {
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.PokeNiagaraFXQuat
// Size: 0x20 (Inherited: 0x10)
struct FPokeNiagaraFXQuat : FPokeNiagaraFXParameter {
	struct FRotator Rotator; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Phoenix.PokeNiagaraFXVector4
// Size: 0x20 (Inherited: 0x10)
struct FPokeNiagaraFXVector4 : FPokeNiagaraFXParameter {
	struct FVector4 Vector; // 0x10(0x10)
};

// ScriptStruct Phoenix.PokeNiagaraFXVector
// Size: 0x20 (Inherited: 0x10)
struct FPokeNiagaraFXVector : FPokeNiagaraFXParameter {
	struct FVector Vector; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Phoenix.PokeNiagaraFXColor
// Size: 0x20 (Inherited: 0x10)
struct FPokeNiagaraFXColor : FPokeNiagaraFXParameter {
	struct FLinearColor Color; // 0x10(0x10)
};

// ScriptStruct Phoenix.PokeNiagaraFXFloat
// Size: 0x18 (Inherited: 0x10)
struct FPokeNiagaraFXFloat : FPokeNiagaraFXParameter {
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.PostProcessingFXCurveSet
// Size: 0x50 (Inherited: 0x00)
struct FPostProcessingFXCurveSet {
	struct TArray<struct FPostProcessingFXCurve> BlendCurves; // 0x00(0x10)
	struct TArray<struct FPostProcessingVarScalarCurveWithKill> PostProcessingScalarCurves; // 0x10(0x10)
	struct TArray<struct FPostProcessingVarColorCurveWithKill> PostProcessingColorCurves; // 0x20(0x10)
	struct TArray<struct FPostProcessingMIDScalarCurve> BlendableMaterialScalarCurves; // 0x30(0x10)
	struct TArray<struct FPostProcessingMIDColorCurve> BlendableMaterialColorCurves; // 0x40(0x10)
};

// ScriptStruct Phoenix.PostProcessingMIDColorCurve
// Size: 0x220 (Inherited: 0x00)
struct FPostProcessingMIDColorCurve {
	struct FName Parameter; // 0x00(0x08)
	int32_t Blendable; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRuntimeCurveLinearColor Curve; // 0x10(0x208)
	bool bKillWhenDone; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
};

// ScriptStruct Phoenix.PostProcessingMIDScalarCurve
// Size: 0xa0 (Inherited: 0x00)
struct FPostProcessingMIDScalarCurve {
	struct FName Parameter; // 0x00(0x08)
	int32_t Blendable; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRuntimeFloatCurve Curve; // 0x10(0x88)
	bool bKillWhenDone; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct Phoenix.PostProcessingVarColorCurveWithKill
// Size: 0x220 (Inherited: 0x218)
struct FPostProcessingVarColorCurveWithKill : FPostProcessingVarColorCurve {
	bool bKillWhenDone; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
};

// ScriptStruct Phoenix.PostProcessingVarScalarCurveWithKill
// Size: 0xa0 (Inherited: 0x98)
struct FPostProcessingVarScalarCurveWithKill : FPostProcessingVarScalarCurve {
	bool bKillWhenDone; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct Phoenix.PostProcessingFXCurve
// Size: 0x98 (Inherited: 0x00)
struct FPostProcessingFXCurve {
	enum class EFXUpdatePostProcessingCurveParameter Parameter; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve Curve; // 0x08(0x88)
	bool bKillWhenDone; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct Phoenix.UpdateNiagaraSkinFXColorCurve
// Size: 0x220 (Inherited: 0x00)
struct FUpdateNiagaraSkinFXColorCurve {
	struct FName NiagaraParameter; // 0x00(0x08)
	struct FName SkinFXParameter; // 0x08(0x08)
	struct FRuntimeCurveLinearColor Curve; // 0x10(0x208)
	bool bKillWhenDone; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
};

// ScriptStruct Phoenix.UpdateNiagaraSkinFXFloatCurve
// Size: 0xa0 (Inherited: 0x00)
struct FUpdateNiagaraSkinFXFloatCurve {
	struct FName NiagaraParameter; // 0x00(0x08)
	struct FName SkinFXParameter; // 0x08(0x08)
	struct FRuntimeFloatCurve Curve; // 0x10(0x88)
	bool bKillWhenDone; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct Phoenix.UpdateNiagaraFXColorCurve
// Size: 0x218 (Inherited: 0x00)
struct FUpdateNiagaraFXColorCurve {
	struct FName Parameter; // 0x00(0x08)
	struct FRuntimeCurveLinearColor Curve; // 0x08(0x208)
	bool bKillWhenDone; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
};

// ScriptStruct Phoenix.UpdateNiagaraFXFloatCurve
// Size: 0x98 (Inherited: 0x00)
struct FUpdateNiagaraFXFloatCurve {
	struct FName Parameter; // 0x00(0x08)
	struct FRuntimeFloatCurve Curve; // 0x08(0x88)
	bool bKillWhenDone; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct Phoenix.FXUpdateInfo
// Size: 0x10 (Inherited: 0x00)
struct FFXUpdateInfo {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.MultiFXPlusHandles
// Size: 0x10 (Inherited: 0x00)
struct FMultiFXPlusHandles {
	struct TArray<struct FMultiFXHandle> FXHandleArray; // 0x00(0x10)
};

// ScriptStruct Phoenix.NiagaraPoserParticleState
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraPoserParticleState {
	struct TArray<struct FVector> Positions; // 0x00(0x10)
	struct TArray<struct FQuat> Orientations; // 0x10(0x10)
	struct TArray<struct FVector> Scales; // 0x20(0x10)
};

// ScriptStruct Phoenix.NiagraPoserSetup
// Size: 0x68 (Inherited: 0x00)
struct FNiagraPoserSetup {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	struct TArray<struct FName> OnlyAnimateBones; // 0x08(0x10)
	struct TArray<struct FName> DoNotAnimateBones; // 0x18(0x10)
	struct UNiagaraSystem* NiagaraSystem; // 0x28(0x08)
	struct FString UseSpecificEmitter; // 0x30(0x10)
	struct FNiagraPoserParticleQuery ParticleQuery; // 0x40(0x1c)
	float InitialDelay; // 0x5c(0x04)
	float LerpTime; // 0x60(0x04)
	bool bApplyAlphabetically; // 0x64(0x01)
	bool bHideUndrivenBones; // 0x65(0x01)
	bool bOnlyAnimateBones; // 0x66(0x01)
	bool bDoNotAnimateBones; // 0x67(0x01)
};

// ScriptStruct Phoenix.NiagraPoserParticleQuery
// Size: 0x1c (Inherited: 0x00)
struct FNiagraPoserParticleQuery {
	struct FName Position; // 0x00(0x08)
	struct FName Orientation; // 0x08(0x08)
	struct FName Scale3D; // 0x10(0x08)
	char bOrientation : 1; // 0x18(0x01)
	char bScale3d : 1; // 0x18(0x01)
	char pad_18_2 : 6; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Phoenix.NiagraPoserBone
// Size: 0x50 (Inherited: 0x00)
struct FNiagraPoserBone {
	struct FName Name; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform InitialTransform; // 0x10(0x30)
	char bInitialHidden : 1; // 0x40(0x01)
	char bHidden : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
};

// ScriptStruct Phoenix.ChallengeNotificationData
// Size: 0x18 (Inherited: 0x00)
struct FChallengeNotificationData {
	struct FName ChallengeID; // 0x00(0x08)
	struct FName ChallengeCategory; // 0x08(0x08)
	int32_t Completed; // 0x10(0x04)
	int32_t Total; // 0x14(0x04)
};

// ScriptStruct Phoenix.CollectionNotificationData
// Size: 0x10 (Inherited: 0x00)
struct FCollectionNotificationData {
	struct FName CollectionID; // 0x00(0x08)
	struct FName CollectionCategory; // 0x08(0x08)
};

// ScriptStruct Phoenix.PickupNotificationData
// Size: 0x60 (Inherited: 0x00)
struct FPickupNotificationData {
	struct FString ItemName; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	bool IsNameTranslatable; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString ItemIcon; // 0x28(0x10)
	int32_t ItemCount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString HeaderText; // 0x40(0x10)
	bool SpecialCollection; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FName ItemVariation; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Phoenix.GenericNotificationData
// Size: 0x30 (Inherited: 0x00)
struct FGenericNotificationData {
	struct FString HeaderText; // 0x00(0x10)
	struct FString SubheaderText; // 0x10(0x10)
	struct FString IconName; // 0x20(0x10)
};

// ScriptStruct Phoenix.VaultSettings
// Size: 0x20 (Inherited: 0x00)
struct FVaultSettings {
	bool bForceReachingVaultLinkEndLocation; // 0x00(0x01)
	bool bSnapRotationBeforeVault; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UAblAbility* VaultAbility; // 0x08(0x08)
	struct TArray<struct FVaultRangeSet> VaultVariations; // 0x10(0x10)
};

// ScriptStruct Phoenix.VaultRangeSet
// Size: 0x20 (Inherited: 0x00)
struct FVaultRangeSet {
	struct UAblAbility* VaultAbility; // 0x00(0x08)
	float LowerLimit; // 0x08(0x04)
	float HigherLimit; // 0x0c(0x04)
	bool bUsePreAlignment; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector RelativeAlignmentLocation; // 0x14(0x0c)
};

// ScriptStruct Phoenix.SlideSettings
// Size: 0x40 (Inherited: 0x00)
struct FSlideSettings {
	struct UInteractionArchitectAsset* SlideReactionMunition; // 0x00(0x08)
	struct FGameplayTagContainer SlideReactionTag; // 0x08(0x20)
	struct UAblReactionAbility* SlideReactionAbility; // 0x28(0x08)
	float SweepUpOffset; // 0x30(0x04)
	float SweepRadius; // 0x34(0x04)
	float SweepFallbackDist; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Phoenix.LadderSettings
// Size: 0xa8 (Inherited: 0x00)
struct FLadderSettings {
	struct UAblAbility* LadderAbility; // 0x00(0x08)
	bool bForceReachingClimbLinkEndLocation; // 0x08(0x01)
	bool bSnapRotationBeforeClimb; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float DefaultHorizontalOffset; // 0x0c(0x04)
	float TopDismountTolerance; // 0x10(0x04)
	float BottomDismountTolerance; // 0x14(0x04)
	struct FClimbLadderSet MountBottom; // 0x18(0x18)
	struct FClimbLadderSet MountTop; // 0x30(0x18)
	struct FClimbLadderSet DismountTop; // 0x48(0x18)
	struct FClimbLadderSet DismountBottom; // 0x60(0x18)
	struct FClimbLadderSet ClimbUp; // 0x78(0x18)
	struct FClimbLadderSet ClimbDown; // 0x90(0x18)
};

// ScriptStruct Phoenix.ClimbLadderSet
// Size: 0x18 (Inherited: 0x00)
struct FClimbLadderSet {
	struct UAblAbility* OverrideClimbAbility; // 0x00(0x08)
	bool bUsePreAlignment; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector RelativeAlignmentLocation; // 0x0c(0x0c)
};

// ScriptStruct Phoenix.ClimbSettings
// Size: 0x30 (Inherited: 0x00)
struct FClimbSettings {
	bool bForceReachingClimbLinkEndLocation; // 0x00(0x01)
	bool bSnapRotationBeforeClimb; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UAblAbility* ClimbAbility; // 0x08(0x08)
	struct UAblAbility* JumpToClimbAbility; // 0x10(0x08)
	struct UAblAbility* SwimClimbAbility; // 0x18(0x08)
	struct TArray<struct FClimbRangeSet> ClimbVariations; // 0x20(0x10)
};

// ScriptStruct Phoenix.ClimbRangeSet
// Size: 0x20 (Inherited: 0x00)
struct FClimbRangeSet {
	struct UAblAbility* ClimbAbility; // 0x00(0x08)
	float LowerLimit; // 0x08(0x04)
	float HigherLimit; // 0x0c(0x04)
	bool bUsePreAlignment; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector RelativeAlignmentLocation; // 0x14(0x0c)
};

// ScriptStruct Phoenix.SuspendHermesData
// Size: 0x02 (Inherited: 0x00)
struct FSuspendHermesData {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Phoenix.NPC_TargetPerceptionParams
// Size: 0x3c (Inherited: 0x00)
struct FNPC_TargetPerceptionParams {
	bool bPlayerOnly; // 0x00(0x01)
	bool bTargetsFromTeammates; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName CrimeSceneTeamName; // 0x04(0x08)
	struct FName AttackTeamName; // 0x0c(0x08)
	struct FName NotifyTeamName; // 0x14(0x08)
	bool bResultSuccess; // 0x1c(0x01)
	char pad_1D[0x1f]; // 0x1d(0x1f)
};

// ScriptStruct Phoenix.NPC_PathSpec
// Size: 0x58 (Inherited: 0x00)
struct FNPC_PathSpec {
	enum class ENPC_PathSpec Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FOdcPathSpec PathSpec; // 0x08(0x50)
};

// ScriptStruct Phoenix.NPC_SpellReactionInfo
// Size: 0x08 (Inherited: 0x00)
struct FNPC_SpellReactionInfo {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.Enemy_AlertData
// Size: 0x08 (Inherited: 0x00)
struct FEnemy_AlertData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.NPC_NavPath
// Size: 0x20 (Inherited: 0x00)
struct FNPC_NavPath {
	bool bPathGenerated; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector> Points; // 0x08(0x10)
	bool bPathIsPartial; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Phoenix.Enemy_LimitAttackOnTargetData
// Size: 0x08 (Inherited: 0x00)
struct FEnemy_LimitAttackOnTargetData {
	float TimeToFireEnd; // 0x00(0x04)
	float StartTimeout; // 0x04(0x04)
};

// ScriptStruct Phoenix.Enemy_ParryParamData
// Size: 0x10 (Inherited: 0x00)
struct FEnemy_ParryParamData {
	bool bWindowOpenUntilImpact; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WindowLength; // 0x04(0x04)
	float LeadInSkipLength; // 0x08(0x04)
	bool bCanSuspendRelease; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Phoenix.NPC_GameStateMobilityData
// Size: 0x0c (Inherited: 0x00)
struct FNPC_GameStateMobilityData {
	enum class ENPC_GameState State; // 0x00(0x01)
	enum class ENPC_Mobility Mobility; // 0x01(0x01)
	bool bOverrideSpeed; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float MinSpeed; // 0x04(0x04)
	float MaxSpeed; // 0x08(0x04)
};

// ScriptStruct Phoenix.NPC_HouseElfData
// Size: 0x28 (Inherited: 0x00)
struct FNPC_HouseElfData {
	struct UAblAbility* HidingAbility; // 0x00(0x08)
	struct UAblAbility* SightedAbility; // 0x08(0x08)
	struct UAblAbility* FleeAbility; // 0x10(0x08)
	struct UAblAbility* BefriendAbility; // 0x18(0x08)
	float ScaredTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Phoenix.FinisherRequirementData
// Size: 0x50 (Inherited: 0x00)
struct FFinisherRequirementData {
	struct TArray<struct FFinisherData> KillAbilities; // 0x00(0x10)
	struct TArray<struct FFinisherData> NoKillAbilities; // 0x10(0x10)
	bool bRequireMinDistance; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float MinDistance; // 0x24(0x04)
	bool bRequireMaxDistance; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MaxDistance; // 0x2c(0x04)
	bool bMustBeOnGround; // 0x30(0x01)
	bool bMustBeInAir; // 0x31(0x01)
	bool bMustBeArmed; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct TArray<struct FName> RequiredSpellUnlocks; // 0x38(0x10)
	struct FGameplayTag FinisherFilterTag; // 0x48(0x08)
};

// ScriptStruct Phoenix.FinisherData
// Size: 0x50 (Inherited: 0x00)
struct FFinisherData {
	struct TSoftClassPtr<UObject> AvatarAbility; // 0x00(0x28)
	struct FGameplayTagContainer MunitionTags; // 0x28(0x20)
	int32_t weight; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Phoenix.NPC_AbilityTaskMovementEntry
// Size: 0x24 (Inherited: 0x00)
struct FNPC_AbilityTaskMovementEntry {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct Phoenix.NPC_PerceptionChoiceOverride
// Size: 0x08 (Inherited: 0x00)
struct FNPC_PerceptionChoiceOverride {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.EnemyAIBehaviorTreeDataTable
// Size: 0x18 (Inherited: 0x08)
struct FEnemyAIBehaviorTreeDataTable : FTableRowBase {
	struct FGameplayTag GameplayTag; // 0x08(0x08)
	struct UBehaviorTree* BehaviorTreePtr; // 0x10(0x08)
};

// ScriptStruct Phoenix.BehaviorTreeDataTable
// Size: 0x18 (Inherited: 0x08)
struct FBehaviorTreeDataTable : FTableRowBase {
	struct FGameplayTag GameplayTag; // 0x08(0x08)
	struct UBehaviorTree* BehaviorTreePtr; // 0x10(0x08)
};

// ScriptStruct Phoenix.NPC_LOSTraceParams
// Size: 0x24 (Inherited: 0x00)
struct FNPC_LOSTraceParams {
	float TargetAway; // 0x00(0x04)
	float TargetUp; // 0x04(0x04)
	float TargetSwimmingUp; // 0x08(0x04)
	float TargetHalfCapsuleScale; // 0x0c(0x04)
	float PerceiverUp; // 0x10(0x04)
	float PerceiverSwimmingUp; // 0x14(0x04)
	float PerceiverHalfCapsuleScale; // 0x18(0x04)
	float Radius; // 0x1c(0x04)
	float NPC2NPCUp; // 0x20(0x04)
};

// ScriptStruct Phoenix.NPC_PerceptionEvent
// Size: 0xf8 (Inherited: 0x00)
struct FNPC_PerceptionEvent {
	char pad_0[0xf8]; // 0x00(0xf8)
};

// ScriptStruct Phoenix.NPC_SecondaryTargetData
// Size: 0x10 (Inherited: 0x00)
struct FNPC_SecondaryTargetData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.NPC_ActionParams
// Size: 0x38 (Inherited: 0x00)
struct FNPC_ActionParams {
	struct AActor* ActorPtr; // 0x00(0x08)
	struct FVector Loc; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FGameplayTagContainer TagContainer; // 0x18(0x20)
};

// ScriptStruct Phoenix.NPC_SpawnData
// Size: 0x58 (Inherited: 0x00)
struct FNPC_SpawnData {
	enum class ENPC_Spawn Type; // 0x00(0x01)
	bool bHideOnSpawnStart; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float bUnhideOnSpawnStartDelay; // 0x04(0x04)
	bool bApplyForceOnSpawn; // 0x08(0x01)
	bool bTurnToTargetOnSpawn; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FGameplayTagContainer IATags; // 0x10(0x20)
	struct FGameplayTagContainer AATags; // 0x30(0x20)
	struct UBehaviorTree* SpawnBehaviorTree; // 0x50(0x08)
};

// ScriptStruct Phoenix.NPC_SpawnLocationMap
// Size: 0x18 (Inherited: 0x00)
struct FNPC_SpawnLocationMap {
	struct FString Location; // 0x00(0x10)
	enum class ENPC_Spawn Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Phoenix.NPC_MobilityTransition
// Size: 0x10 (Inherited: 0x00)
struct FNPC_MobilityTransition {
	enum class ENPC_Mobility FromMobility; // 0x00(0x01)
	enum class ENPC_Mobility ToMobility; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UAblAbility* AbilityPtr; // 0x08(0x08)
};

// ScriptStruct Phoenix.NPC_MobilityUberData
// Size: 0x30 (Inherited: 0x00)
struct FNPC_MobilityUberData {
	enum class ENPC_Mobility Mode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UNPC_MobilityChoice* MobilityChoice; // 0x08(0x08)
	enum class ENPC_GameContext GameContext; // 0x10(0x01)
	enum class ENPC_StairsSlopeContext StairsSlopeState; // 0x11(0x01)
	enum class ENPC_FireContext FireContext; // 0x12(0x01)
	enum class ENPC_GameState GameState; // 0x13(0x01)
	enum class ENPC_GameSubState GameSubState; // 0x14(0x01)
	enum class ENPC_GameAttackState GameAttackState; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32_t Priority; // 0x18(0x04)
	bool bOverrideSpeed; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float MinSpeed; // 0x20(0x04)
	float MaxSpeed; // 0x24(0x04)
	struct UNPC_MobilitySpeedChoice* SpeedChoice; // 0x28(0x08)
};

// ScriptStruct Phoenix.NPC_MobilityDataContainer
// Size: 0xb8 (Inherited: 0x00)
struct FNPC_MobilityDataContainer {
	enum class ENPC_Mobility Mode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FNPC_MobilityData Data; // 0x08(0xb0)
};

// ScriptStruct Phoenix.NPC_PerceptionInfo
// Size: 0x30 (Inherited: 0x00)
struct FNPC_PerceptionInfo {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Phoenix.NPC_LosingTarget
// Size: 0x18 (Inherited: 0x00)
struct FNPC_LosingTarget {
	enum class ENPC_LosingTargetType State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FNPC_DynamicBehaviorTree DynamicBehaviorTree; // 0x08(0x10)
};

// ScriptStruct Phoenix.NPC_DynamicBehaviorTree
// Size: 0x10 (Inherited: 0x00)
struct FNPC_DynamicBehaviorTree {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
};

// ScriptStruct Phoenix.NPC_AbilityChannel
// Size: 0x40 (Inherited: 0x00)
struct FNPC_AbilityChannel {
	enum class ENPC_AbilityChannel Channel; // 0x00(0x01)
	bool bEnable; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t OnState; // 0x04(0x04)
	int32_t OnAnims; // 0x08(0x04)
	int32_t OnContext; // 0x0c(0x04)
	struct FGameplayTagContainer TagContainer; // 0x10(0x20)
	struct UAblAbility* ChannelAbilityPtr; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Phoenix.NPC_AbilityChannelMap
// Size: 0x0c (Inherited: 0x00)
struct FNPC_AbilityChannelMap {
	struct FName Name; // 0x00(0x08)
	enum class ENPC_AbilityChannel Channel; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Phoenix.NPC_ScalingParams
// Size: 0x4c (Inherited: 0x00)
struct FNPC_ScalingParams {
	char pad_0[0x4c]; // 0x00(0x4c)
};

// ScriptStruct Phoenix.NPC_PerceptionChoiceParams
// Size: 0x40 (Inherited: 0x00)
struct FNPC_PerceptionChoiceParams {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Phoenix.SpellDataAssetMappingTableRow
// Size: 0x30 (Inherited: 0x08)
struct FSpellDataAssetMappingTableRow : FTableRowBase {
	struct TSoftObjectPtr<UEnemyAIAttackData> SpellAttackDataAsset; // 0x08(0x28)
};

// ScriptStruct Phoenix.BossFightData
// Size: 0x24 (Inherited: 0x00)
struct FBossFightData {
	struct FName BossFightName; // 0x00(0x08)
	enum class EBossStates BossFightState; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct TWeakObjectPtr<struct AActor> BossCharacterPtr; // 0x0c(0x08)
	float StartTime; // 0x14(0x04)
	float EndTime; // 0x18(0x04)
	float ElapsedTime; // 0x1c(0x04)
	bool BossFightStarted; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Phoenix.NPC_CameraInfo
// Size: 0x24 (Inherited: 0x00)
struct FNPC_CameraInfo {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct Phoenix.NPC_PlayerInfo
// Size: 0x18 (Inherited: 0x00)
struct FNPC_PlayerInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.NPC_NavInfo
// Size: 0x0c (Inherited: 0x00)
struct FNPC_NavInfo {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Phoenix.NPC_SharedAlertPointOfInterest
// Size: 0x20 (Inherited: 0x00)
struct FNPC_SharedAlertPointOfInterest {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.NPCSenseListenerData
// Size: 0x50 (Inherited: 0x00)
struct FNPCSenseListenerData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Phoenix.Player_FootfallData
// Size: 0x38 (Inherited: 0x00)
struct FPlayer_FootfallData {
	char pad_0[0x14]; // 0x00(0x14)
	float PingDistance; // 0x14(0x04)
	float MinSpeed; // 0x18(0x04)
	float MaxSpeed; // 0x1c(0x04)
	float MinRange; // 0x20(0x04)
	float MaxRange; // 0x24(0x04)
	enum class EGameEvent_Intensity Intensity; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MinDisillusionmentRange; // 0x2c(0x04)
	float MaxDisillusionmentRange; // 0x30(0x04)
	enum class EGameEvent_Intensity DisillusionmentIntensity; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Phoenix.PostDeath_Params
// Size: 0x18 (Inherited: 0x00)
struct FPostDeath_Params {
	enum class EPostDeathCleanupEffect CleanUpEffect; // 0x00(0x01)
	enum class EPostDeathCleanupMode CleanUpMode; // 0x01(0x01)
	enum class EPostDeathSortingMode SortingMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t BatchSize; // 0x04(0x04)
	int32_t MaxAllowedDeadNPCs; // 0x08(0x04)
	int32_t MinAllowedDeadNPCs; // 0x0c(0x04)
	float TimeBetweenBatches; // 0x10(0x04)
	float TimerModeDelay; // 0x14(0x04)
};

// ScriptStruct Phoenix.Enemy_ParryDBData
// Size: 0x30 (Inherited: 0x00)
struct FEnemy_ParryDBData {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Phoenix.NPC_PlayerRelTargetTrackingData
// Size: 0x14 (Inherited: 0x00)
struct FNPC_PlayerRelTargetTrackingData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Phoenix.NPC_GlobalNPCData
// Size: 0x1b8 (Inherited: 0x00)
struct FNPC_GlobalNPCData {
	char pad_0[0x1b8]; // 0x00(0x1b8)
};

// ScriptStruct Phoenix.Enemy_ParryNPCData
// Size: 0x190 (Inherited: 0x00)
struct FEnemy_ParryNPCData {
	char pad_0[0x190]; // 0x00(0x190)
};

// ScriptStruct Phoenix.NPC_ShutdownData
// Size: 0x14 (Inherited: 0x00)
struct FNPC_ShutdownData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Phoenix.NPC_GlobalTargetData
// Size: 0x228 (Inherited: 0x00)
struct FNPC_GlobalTargetData {
	char pad_0[0x228]; // 0x00(0x228)
};

// ScriptStruct Phoenix.NPC_PerceptionEventData
// Size: 0x30 (Inherited: 0x00)
struct FNPC_PerceptionEventData {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Phoenix.DifficultyScaleData
// Size: 0x40 (Inherited: 0x00)
struct FDifficultyScaleData {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Phoenix.NPC_PerceivedUniqueTargetActorData
// Size: 0x0c (Inherited: 0x00)
struct FNPC_PerceivedUniqueTargetActorData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Phoenix.NPC_PerceivedTargetActorData
// Size: 0x18 (Inherited: 0x00)
struct FNPC_PerceivedTargetActorData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.NPC_TargetSelectionWeightsSet
// Size: 0x10 (Inherited: 0x00)
struct FNPC_TargetSelectionWeightsSet {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.NPC_TargetSelectionWeightData
// Size: 0x100 (Inherited: 0x00)
struct FNPC_TargetSelectionWeightData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<enum class ENPC_TargetSelectionWeightData, float> WeightDataMap; // 0x08(0x50)
	char pad_58[0xa8]; // 0x58(0xa8)
};

// ScriptStruct Phoenix.NPCAttackConditionalData
// Size: 0x68 (Inherited: 0x00)
struct FNPCAttackConditionalData {
	struct FString ConditionName; // 0x00(0x10)
	enum class ENPC_SelectionStates ConditionType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TMap<enum class ENPC_AttackSelectionConditions, struct FNPCAttackConditionValue> EffectValues; // 0x18(0x50)
};

// ScriptStruct Phoenix.NPCAttackConditionValue
// Size: 0x08 (Inherited: 0x00)
struct FNPCAttackConditionValue {
	enum class ENPC_AttackSelectionConditions WeightType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WeightValue; // 0x04(0x04)
};

// ScriptStruct Phoenix.NPC_SelectionState
// Size: 0x08 (Inherited: 0x00)
struct FNPC_SelectionState {
	enum class ENPC_SelectionStates StateType; // 0x00(0x01)
	bool StateEnabled; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float StateValue; // 0x04(0x04)
};

// ScriptStruct Phoenix.NPC_CombatThreatLevelData
// Size: 0x20 (Inherited: 0x00)
struct FNPC_CombatThreatLevelData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.AssetTrackerData
// Size: 0x78 (Inherited: 0x00)
struct FAssetTrackerData {
	struct FString AssetType; // 0x00(0x10)
	int32_t MaxChildrenInWorld; // 0x10(0x04)
	int32_t CurrentChildCount; // 0x14(0x04)
	struct TMap<struct AActor*, struct FChildSpawnData> ChildSpawnData; // 0x18(0x50)
	struct FMulticastInlineDelegate ObjectCountChangedDelegate; // 0x68(0x10)
};

// ScriptStruct Phoenix.ChildSpawnData
// Size: 0x18 (Inherited: 0x00)
struct FChildSpawnData {
	struct AActor* ParentActor; // 0x00(0x08)
	struct TArray<struct AActor*> SpawnChildren; // 0x08(0x10)
};

// ScriptStruct Phoenix.NPCPersistentData
// Size: 0x50 (Inherited: 0x00)
struct FNPCPersistentData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Phoenix.NpcTimers
// Size: 0xa0 (Inherited: 0x00)
struct FNpcTimers {
	struct TMap<struct FName, struct FNpcTimer> NpcTimers; // 0x00(0x50)
	struct TMap<struct FName, struct FNpcFxTimer> NpcFxTimers; // 0x50(0x50)
};

// ScriptStruct Phoenix.NpcFxTimer
// Size: 0x130 (Inherited: 0x00)
struct FNpcFxTimer {
	float TimeStart; // 0x00(0x04)
	float TimeStop; // 0x04(0x04)
	struct FMaterialParameterSetter MaterialParameterSetter; // 0x08(0x98)
	struct FMultiFXWrapper MultiFX; // 0xa0(0x38)
	char pad_D8[0x58]; // 0xd8(0x58)
};

// ScriptStruct Phoenix.MultiFXWrapper
// Size: 0x38 (Inherited: 0x00)
struct FMultiFXWrapper {
	struct FName MultiFXHandleName; // 0x00(0x08)
	struct TArray<struct UMultiFX2_Base*> FX; // 0x08(0x10)
	struct FVector Location; // 0x18(0x0c)
	struct FName AttachPointName; // 0x24(0x08)
	char pad_2C[0xc]; // 0x2c(0x0c)
};

// ScriptStruct Phoenix.NpcTimer
// Size: 0x50 (Inherited: 0x00)
struct FNpcTimer {
	float TimeStart; // 0x00(0x04)
	float TimeStop; // 0x04(0x04)
	char pad_8[0x48]; // 0x08(0x48)
};

// ScriptStruct Phoenix.RepairData
// Size: 0x238 (Inherited: 0x00)
struct FRepairData {
	struct UGeometryCollection* DestructibleGeometryCollection; // 0x00(0x08)
	struct UStaticMesh* BaseMesh; // 0x08(0x08)
	struct FName BaseCollisionProfileName; // 0x10(0x08)
	struct TArray<struct UMultiFX2_Base*> DeathFX2; // 0x18(0x10)
	struct TArray<struct UMultiFX2_Base*> DamagableInPiecesFX2; // 0x28(0x10)
	enum class ENoiseSize DeathNoiseSize; // 0x38(0x01)
	bool bFadeOutEntireGC; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float ChunkFadeOutDelay; // 0x3c(0x04)
	float ChunkFadeVisiblePct; // 0x40(0x04)
	int32_t ChunkFadeVisibleMax; // 0x44(0x04)
	int32_t ChunkFadeVisibleMin; // 0x48(0x04)
	struct FPerPlatformInt MaxClusterLevel; // 0x4c(0x04)
	struct FPerPlatformInt DisableMeshBreak; // 0x50(0x04)
	struct FVector AnchorFieldOffset; // 0x54(0x0c)
	struct FVector AnchorFieldSize; // 0x60(0x0c)
	float DestroyFromCenterMultiplier; // 0x6c(0x04)
	float DestroyObjectRadius; // 0x70(0x04)
	float DestroyObjectStrain; // 0x74(0x04)
	float DestroyLinearForce; // 0x78(0x04)
	float DestroyLinearForceMultiplier; // 0x7c(0x04)
	float DestroyAngularForceMultiplier; // 0x80(0x04)
	float DestroyRadialForce; // 0x84(0x04)
	struct AFieldSystemActor* DestroyObjectFieldSystemClass; // 0x88(0x08)
	struct FName ChunkCollisionProfileName; // 0x90(0x08)
	struct UPhysicalMaterial* ChunkPhysicalMaterial; // 0x98(0x08)
	struct TArray<struct UMultiFX2_Base*> ChunkTrailFX2; // 0xa0(0x10)
	struct UParticleSystem* ChunkTrailParticleSystem; // 0xb0(0x08)
	struct UNiagaraSystem* ChunkTrailNiagaraVfx; // 0xb8(0x08)
	struct UParticleSystem* ChunkFadeParticleSystem; // 0xc0(0x08)
	struct UNiagaraSystem* ChunkFadeNiagaraVfx; // 0xc8(0x08)
	struct UParticleSystem* ChunkImpactParticleSystem; // 0xd0(0x08)
	struct UNiagaraSystem* ChunkImpactNiagaraVfx; // 0xd8(0x08)
	float ChunkImpactDelay; // 0xe0(0x04)
	float ChunkImpactMinimumImpulse; // 0xe4(0x04)
	float ChunkImpactMinimumVolume; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FObjectFadeParams ChunkFadeOutParams; // 0xf0(0x90)
	struct FObjectFadeParams ChunkFadeInParams; // 0x180(0x90)
	struct TArray<struct UReparoData*> ReparoDataArray; // 0x210(0x10)
	struct UAkAudioEvent* RepairSfx; // 0x220(0x08)
	struct UReparoData* ReparoDataPtr; // 0x228(0x08)
	char bRepairable : 1; // 0x230(0x01)
	char bRepairChildren : 1; // 0x230(0x01)
	char bRepairInPlaceOnly : 1; // 0x230(0x01)
	char bRepairUsingActorTransform : 1; // 0x230(0x01)
	char bUseMainComponentTransform : 1; // 0x230(0x01)
	char Hide : 1; // 0x230(0x01)
	char DisableCollision : 1; // 0x230(0x01)
	char DisablePhysics : 1; // 0x230(0x01)
	char bEnableCollisionDuringRepair : 1; // 0x231(0x01)
	char bNavigationBlockedIfDestroyed : 1; // 0x231(0x01)
	char bCommonBreakable : 1; // 0x231(0x01)
	char bSpawnAnchorField : 1; // 0x231(0x01)
	char bDestroyAnchorFieldOnDestroyed : 1; // 0x231(0x01)
	char bDisableGC : 1; // 0x231(0x01)
	char bChunkCharacterStepUpOn : 1; // 0x231(0x01)
	char bLargeDestructible : 1; // 0x231(0x01)
	char bAutoTargetableBroken : 1; // 0x232(0x01)
	char pad_232_1 : 7; // 0x232(0x01)
	char pad_233[0x5]; // 0x233(0x05)
};

// ScriptStruct Phoenix.DbId
// Size: 0x60 (Inherited: 0x00)
struct FDbId {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Phoenix.ObjectSizeClassStruct
// Size: 0x20 (Inherited: 0x08)
struct FObjectSizeClassStruct : FTableRowBase {
	float Width; // 0x08(0x04)
	float DamagePerSecondMultiplier; // 0x0c(0x04)
	struct AMunitionType_Base* OnFireDestroyedAOE; // 0x10(0x08)
	float OnFireDestroyedDamage; // 0x18(0x04)
	enum class ENoiseSize ObjectNoiseSize; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Phoenix.MarkupKeyValue
// Size: 0x08 (Inherited: 0x00)
struct FMarkupKeyValue {
	enum class EMarkupType Key; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct Phoenix.CooldownPickupImpulse
// Size: 0x18 (Inherited: 0x00)
struct FCooldownPickupImpulse {
	struct FVector Min; // 0x00(0x0c)
	struct FVector Max; // 0x0c(0x0c)
};

// ScriptStruct Phoenix.CooldownPickupData
// Size: 0x68 (Inherited: 0x00)
struct FCooldownPickupData {
	struct ACooldownPickup* CooldownPickupActor; // 0x00(0x08)
	float weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<enum class ESpellCategory, float> CooldownRecoveryMap; // 0x10(0x50)
	float FocusGain; // 0x60(0x04)
	float HealthGainPercent; // 0x64(0x04)
};

// ScriptStruct Phoenix.HealingFX
// Size: 0x18 (Inherited: 0x00)
struct FHealingFX {
	float HealingThreshold; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct UMultiFX2_Base*> FX2; // 0x08(0x10)
};

// ScriptStruct Phoenix.PhysicsReactionGroup
// Size: 0x30 (Inherited: 0x00)
struct FPhysicsReactionGroup {
	float MinDamageThreshold; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UInteractionArchitectAsset* MunitionDataLevelAsset; // 0x08(0x08)
	struct FGameplayTag ImpactStrengthTag; // 0x10(0x08)
	float CharacterDamage; // 0x18(0x04)
	enum class ENoiseSize NoiseSize; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TArray<struct UMultiFX2_Base*> CollisionFX2; // 0x20(0x10)
};

// ScriptStruct Phoenix.RecentDamage
// Size: 0x18 (Inherited: 0x00)
struct FRecentDamage {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.EnableCCDInfo
// Size: 0x18 (Inherited: 0x00)
struct FEnableCCDInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.OriginalInfo
// Size: 0x50 (Inherited: 0x00)
struct FOriginalInfo {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Phoenix.OriginalPrimInfo
// Size: 0x40 (Inherited: 0x00)
struct FOriginalPrimInfo {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Phoenix.ObjectStateCollisionPair
// Size: 0x18 (Inherited: 0x00)
struct FObjectStateCollisionPair {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.CalculateTarget
// Size: 0x10 (Inherited: 0x00)
struct FCalculateTarget {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.OppugnoLevelData
// Size: 0x4e0 (Inherited: 0x01)
struct FOppugnoLevelData : FSpellLevelData {
	char pad_1[0x3]; // 0x01(0x03)
	float MassLimit; // 0x04(0x04)
	int32_t ObjectLimit; // 0x08(0x04)
	bool bOnlyAffectGroup; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float OppugnoRadius; // 0x10(0x04)
	float PullBasePhysicsImpulse; // 0x14(0x04)
	float PullMassScaledPhysicsImpulse; // 0x18(0x04)
	float PullMaxVelocity; // 0x1c(0x04)
	float PullTargetRadius; // 0x20(0x04)
	struct FVector HoldOffset; // 0x24(0x0c)
	float HoldBasePhysicsImpulse; // 0x30(0x04)
	float HoldMassScaledPhysicsImpulse; // 0x34(0x04)
	float HoldMaxVelocity; // 0x38(0x04)
	float HoldTargetRadius; // 0x3c(0x04)
	float HoldImpulseScale; // 0x40(0x04)
	struct FRotator HoldRotationRate; // 0x44(0x0c)
	float HoldNearDistanceScale; // 0x50(0x04)
	float ThrowBasePhysicsImpulse; // 0x54(0x04)
	float ThrowMassScaledPhysicsImpulse; // 0x58(0x04)
	struct FVector ThrowTorque; // 0x5c(0x0c)
	float ThrowMaxVelocity; // 0x68(0x04)
	float ThrowAngle; // 0x6c(0x04)
	struct FVector HoldRelativeLocation; // 0x70(0x0c)
	float TimeToPull; // 0x7c(0x04)
	float TimeToThrow; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FRuntimeFloatCurve PullPrimaryCurve; // 0x88(0x88)
	struct FRuntimeFloatCurve PullPerpendicularCurve; // 0x110(0x88)
	struct FVector2D PullPerpendicularInputRange; // 0x198(0x08)
	struct FVector2D PullPerpendicularOutputRange; // 0x1a0(0x08)
	float PullPerpendicularRotationAngle; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FRuntimeFloatCurve PullOvershootCurve; // 0x1b0(0x88)
	struct FRuntimeFloatCurve PullThrowCurve; // 0x238(0x88)
	struct FRuntimeFloatCurve PullRollCurve; // 0x2c0(0x88)
	struct FRuntimeFloatCurve PullPitchCurve; // 0x348(0x88)
	struct FRuntimeFloatCurve PullYawCurve; // 0x3d0(0x88)
	struct FRuntimeFloatCurve ThrowPitchCurve; // 0x458(0x88)
};

// ScriptStruct Phoenix.PathPointTags
// Size: 0x10 (Inherited: 0x00)
struct FPathPointTags {
	struct TArray<struct FName> Tags; // 0x00(0x10)
};

// ScriptStruct Phoenix.IdentityParticleSystemsData
// Size: 0x50 (Inherited: 0x00)
struct FIdentityParticleSystemsData {
	struct TMap<enum class ESanctuaryIdentity, struct FParticleSystemsData> IdentityOverrides; // 0x00(0x50)
};

// ScriptStruct Phoenix.ParticleSystemsData
// Size: 0x20 (Inherited: 0x00)
struct FParticleSystemsData {
	struct TArray<struct FParticleSystemTrigger> ParticleSystems; // 0x00(0x10)
	struct TArray<struct FNiagaraSystemTrigger> NiagaraSystems; // 0x10(0x10)
};

// ScriptStruct Phoenix.NiagaraSystemTrigger
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraSystemTrigger {
	struct TSoftObjectPtr<UNiagaraSystem> ParticleSystem; // 0x00(0x28)
	bool UseSpawnRate; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Spawnrate; // 0x2c(0x04)
	bool UseParticleColor; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FColor ParticleColor; // 0x34(0x04)
};

// ScriptStruct Phoenix.ParticleSystemTrigger
// Size: 0x38 (Inherited: 0x00)
struct FParticleSystemTrigger {
	struct TSoftObjectPtr<UParticleSystem> ParticleSystem; // 0x00(0x28)
	bool UseSpawnRate; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Spawnrate; // 0x2c(0x04)
	bool UseParticleColor; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FColor ParticleColor; // 0x34(0x04)
};

// ScriptStruct Phoenix.PathCollectorPath
// Size: 0x70 (Inherited: 0x00)
struct FPathCollectorPath {
	struct TArray<struct FVector> Path; // 0x00(0x10)
	int32_t Priority; // 0x10(0x04)
	float Distance; // 0x14(0x04)
	struct FString Name; // 0x18(0x10)
	struct FVector Start; // 0x28(0x0c)
	struct FVector Location; // 0x34(0x0c)
	struct FString IconName; // 0x40(0x10)
	bool bIsMission; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FName MissionID; // 0x54(0x08)
	struct FName CharacterID; // 0x5c(0x08)
	bool bTintIt; // 0x64(0x01)
	char pad_65[0xb]; // 0x65(0x0b)
};

// ScriptStruct Phoenix.DebugMapData
// Size: 0x50 (Inherited: 0x00)
struct FDebugMapData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FDebugMapLine> DrawLines; // 0x08(0x10)
	struct TArray<struct FDebugMapPoint> drawPoints; // 0x18(0x10)
	struct FVector Offset; // 0x28(0x0c)
	float Width; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct APhoenixPathActor*> meshActors; // 0x40(0x10)
};

// ScriptStruct Phoenix.DebugMapPoint
// Size: 0x1c (Inherited: 0x00)
struct FDebugMapPoint {
	struct FLinearColor Color; // 0x00(0x10)
	struct FVector Location; // 0x10(0x0c)
};

// ScriptStruct Phoenix.DebugMapLine
// Size: 0x10 (Inherited: 0x00)
struct FDebugMapLine {
	struct TArray<struct FDebugMapPoint> Points; // 0x00(0x10)
};

// ScriptStruct Phoenix.AsyncPathData
// Size: 0x48 (Inherited: 0x00)
struct FAsyncPathData {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Phoenix.PathDestinationLocation
// Size: 0x14 (Inherited: 0x00)
struct FPathDestinationLocation {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Phoenix.DebugHelper
// Size: 0x10 (Inherited: 0x00)
struct FDebugHelper {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.DebugPathItem
// Size: 0x80 (Inherited: 0x00)
struct FDebugPathItem {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct Phoenix.MapLocationHint
// Size: 0x18 (Inherited: 0x00)
struct FMapLocationHint {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.AIPerformTaskContainer
// Size: 0x40 (Inherited: 0x00)
struct FAIPerformTaskContainer {
	struct UAIPerformTaskBase* TaskData; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WidgetTransform; // 0x10(0x30)
};

// ScriptStruct Phoenix.PerkInfoFX
// Size: 0x30 (Inherited: 0x00)
struct FPerkInfoFX {
	struct FMultiFX PerkFX; // 0x00(0x30)
};

// ScriptStruct Phoenix.PerkTreeEntry
// Size: 0x70 (Inherited: 0x00)
struct FPerkTreeEntry {
	struct FString ID; // 0x00(0x10)
	struct FString PerkCategory; // 0x10(0x10)
	int32_t LevelRequirement; // 0x20(0x04)
	int32_t Row; // 0x24(0x04)
	int32_t Column; // 0x28(0x04)
	struct FName LockId; // 0x2c(0x08)
	struct FName LockID2; // 0x34(0x08)
	struct FName AbilityID; // 0x3c(0x08)
	enum class EPerkState State; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t CurrentLevel; // 0x48(0x04)
	int32_t MaxLevel; // 0x4c(0x04)
	struct FString NextUpgrade; // 0x50(0x10)
	bool IsUpgrade; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t TotalEffectiveLevel; // 0x64(0x04)
	struct FName PrerequisitePerkID; // 0x68(0x08)
};

// ScriptStruct Phoenix.PetrificusData
// Size: 0x10 (Inherited: 0x00)
struct FPetrificusData {
	struct TArray<struct UMultiFX2_Base*> FX2; // 0x00(0x10)
};

// ScriptStruct Phoenix.SpellCastData
// Size: 0x18 (Inherited: 0x00)
struct FSpellCastData {
	struct AActor* Target; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct FName SpellType; // 0x10(0x08)
};

// ScriptStruct Phoenix.PhoenixCameraSettingsData
// Size: 0x88 (Inherited: 0x00)
struct FPhoenixCameraSettingsData {
	float FieldOfViewOffset; // 0x00(0x04)
	float InputSensitivityDefault; // 0x04(0x04)
	float InputSensitivityAiming; // 0x08(0x04)
	float InputAccelerationDefault; // 0x0c(0x04)
	float InputAccelerationAiming; // 0x10(0x04)
	float AimAssistStrength; // 0x14(0x04)
	float GamepadDeadzone; // 0x18(0x04)
	bool bGamepadSouthpaw; // 0x1c(0x01)
	bool bGamepadAimingSwitch; // 0x1d(0x01)
	bool bInvertX; // 0x1e(0x01)
	bool bInvertY; // 0x1f(0x01)
	bool bInvertFlightY; // 0x20(0x01)
	bool bToggleAim; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float FollowSpeed; // 0x24(0x04)
	float CameraShake; // 0x28(0x04)
	bool bCineCameraShake; // 0x2c(0x01)
	bool bDepthOfField; // 0x2d(0x01)
	bool bChromaticAberration; // 0x2e(0x01)
	bool bFilmGrain; // 0x2f(0x01)
	bool bMotionBlur; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MotionBlurAmount; // 0x34(0x04)
	float DirectorCam_RotationInputSensitivity; // 0x38(0x04)
	float DirectorCam_RotationInputAcceleration; // 0x3c(0x04)
	float DirectorCam_RollInputSensitivity; // 0x40(0x04)
	float DirectorCam_RollInputAcceleration; // 0x44(0x04)
	float DirectorCam_RotationFiltering; // 0x48(0x04)
	float DirectorCam_MoveInputSensitivity; // 0x4c(0x04)
	float DirectorCam_MoveInputAcceleration; // 0x50(0x04)
	float DirectorCam_PedestalInputSensitivity; // 0x54(0x04)
	float DirectorCam_PedestalInputAcceleration; // 0x58(0x04)
	float DirectorCam_MoveFiltering; // 0x5c(0x04)
	float DirectorCam_ZoomInputSensitivity; // 0x60(0x04)
	float DirectorCam_ZoomInputAcceleration; // 0x64(0x04)
	float DirectorCam_ZoomFiltering; // 0x68(0x04)
	float DirectorCam_FocusDistanceInputSensitivity; // 0x6c(0x04)
	float DirectorCam_FocusDistanceInputAcceleration; // 0x70(0x04)
	float DirectorCam_FocusDistanceFiltering; // 0x74(0x04)
	float DirectorCam_Aperture; // 0x78(0x04)
	float DirectorCam_AmbientIntensity; // 0x7c(0x04)
	float DirectorCam_AmbientFrequency; // 0x80(0x04)
	bool bDirectorCam_DollyInLocalSpace; // 0x84(0x01)
	bool bDirectorCam_TruckInLocalSpace; // 0x85(0x01)
	bool bDirectorCam_PedestalInLocalSpace; // 0x86(0x01)
	bool bDirectorCam_SwitchRollAndZoomInput; // 0x87(0x01)
};

// ScriptStruct Phoenix.AnimatedCreditEntry
// Size: 0x10 (Inherited: 0x00)
struct FAnimatedCreditEntry {
	struct UPhoenixCreditEntryWidget* EntryWidget; // 0x00(0x08)
	float EntryStartTime; // 0x08(0x04)
	float EntryEndTime; // 0x0c(0x04)
};

// ScriptStruct Phoenix.SettingsSourceFile
// Size: 0x18 (Inherited: 0x00)
struct FSettingsSourceFile {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.NvidiaLatencyModeInfo
// Size: 0x18 (Inherited: 0x00)
struct FNvidiaLatencyModeInfo {
	enum class ENvidiaLatencyMode Mode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString LocStr; // 0x08(0x10)
};

// ScriptStruct Phoenix.PhoenixButtonStruct
// Size: 0x28 (Inherited: 0x00)
struct FPhoenixButtonStruct {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Phoenix.ExperienceChange
// Size: 0x20 (Inherited: 0x00)
struct FExperienceChange {
	int32_t ExperiencePoints; // 0x00(0x04)
	int32_t ExperienceLevelStartPoints; // 0x04(0x04)
	int32_t ExperienceLevelEndPoints; // 0x08(0x04)
	int32_t ExperienceLevel; // 0x0c(0x04)
	bool ExperienceLevelChanged; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t PreviousExperiencePoints; // 0x14(0x04)
	int32_t PreviousExperienceLevelStartPoint; // 0x18(0x04)
	int32_t PreviousExperienceLevelEndPoints; // 0x1c(0x04)
};

// ScriptStruct Phoenix.MultiplePoiTest
// Size: 0x20 (Inherited: 0x00)
struct FMultiplePoiTest {
	struct FString TestName; // 0x00(0x10)
	struct FString MapName; // 0x10(0x10)
};

// ScriptStruct Phoenix.NotificationCategoryData
// Size: 0xa0 (Inherited: 0x00)
struct FNotificationCategoryData {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Phoenix.NotificationRequest
// Size: 0x20 (Inherited: 0x00)
struct FNotificationRequest {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.SlidingData
// Size: 0x10 (Inherited: 0x00)
struct FSlidingData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.ImpactCameraShakeData
// Size: 0x20 (Inherited: 0x00)
struct FImpactCameraShakeData {
	struct UCameraShakeBase* CameraShake; // 0x00(0x08)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float Falloff; // 0x10(0x04)
	char bOrientShakeTowardsEpicenter : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x18(0x08)
};

// ScriptStruct Phoenix.ImpactEffectData
// Size: 0x18 (Inherited: 0x00)
struct FImpactEffectData {
	struct TArray<struct UMultiFX2_Base*> FX2; // 0x00(0x10)
	enum class EImpactTypes ChainedType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Phoenix.DbAssetMapTestStruct
// Size: 0x30 (Inherited: 0x08)
struct FDbAssetMapTestStruct : FTableRowBase {
	struct TSoftClassPtr<UObject> m_actorClass; // 0x08(0x28)
};

// ScriptStruct Phoenix.DialogueLineAndAudioFlags
// Size: 0x18 (Inherited: 0x00)
struct FDialogueLineAndAudioFlags {
	struct FDialogueLineReference DialogueLineReference; // 0x00(0x10)
	struct FAudioDialogueFlags AudioDialogueFlags; // 0x10(0x07)
	char pad_17[0x1]; // 0x17(0x01)
};

// ScriptStruct Phoenix.CharacterNameAndIsLocalPlayer
// Size: 0x20 (Inherited: 0x00)
struct FCharacterNameAndIsLocalPlayer {
	struct FName CharacterName; // 0x00(0x08)
	bool LocalPlayer; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString ActorProvider; // 0x10(0x10)
};

// ScriptStruct Phoenix.PhysicalResponseEventData
// Size: 0x28 (Inherited: 0x00)
struct FPhysicalResponseEventData {
	struct AActor* OwningActor; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct Phoenix.PhysicsSimLevelRow
// Size: 0x58 (Inherited: 0x08)
struct FPhysicsSimLevelRow : FTableRowBase {
	enum class EPhysicsSimLevelType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<UWorld> Level; // 0x10(0x28)
	struct FVector Location; // 0x38(0x0c)
	struct FRotator Rotation; // 0x44(0x0c)
	bool bIsPlayerControlled; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Phoenix.PlayerTemplateNameToDataAsset
// Size: 0x10 (Inherited: 0x08)
struct FPlayerTemplateNameToDataAsset : FTableRowBase {
	struct UPlayerTemplateDataAsset* PlayerTemplateDataAsset; // 0x08(0x08)
};

// ScriptStruct Phoenix.LockChange
// Size: 0x0c (Inherited: 0x00)
struct FLockChange {
	struct FName LockId; // 0x00(0x08)
	enum class ELockStates newLockState; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Phoenix.SpellDiamondInput
// Size: 0x20 (Inherited: 0x00)
struct FSpellDiamondInput {
	struct FName Slot1; // 0x00(0x08)
	struct FName Slot2; // 0x08(0x08)
	struct FName Slot3; // 0x10(0x08)
	struct FName Slot4; // 0x18(0x08)
};

// ScriptStruct Phoenix.ItemInput
// Size: 0x0c (Inherited: 0x00)
struct FItemInput {
	struct FName ItemId; // 0x00(0x08)
	int32_t ItemQuantity; // 0x08(0x04)
};

// ScriptStruct Phoenix.OrientToSlerp
// Size: 0x0c (Inherited: 0x00)
struct FOrientToSlerp {
	enum class EOrientToSlerpType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Speed; // 0x04(0x04)
	float Filter; // 0x08(0x04)
};

// ScriptStruct Phoenix.PointOfInterest
// Size: 0x28 (Inherited: 0x00)
struct FPointOfInterest {
	struct FString PointOfInterestId; // 0x00(0x10)
	struct FVector Location; // 0x10(0x0c)
	float DiscoverDistance; // 0x1c(0x04)
	enum class EPointOfInterestState State; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Phoenix.TickTrackerData
// Size: 0x38 (Inherited: 0x00)
struct FTickTrackerData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Phoenix.MastermindPopupInfo
// Size: 0x20 (Inherited: 0x00)
struct FMastermindPopupInfo {
	bool bIsPlayingIntro; // 0x00(0x01)
	bool bIsPlayingOutro; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FInputActionHoldInfo> CompletionActions; // 0x08(0x10)
	bool bIsWaitPopup; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Phoenix.PortraitPaintingEntities
// Size: 0x10 (Inherited: 0x00)
struct FPortraitPaintingEntities {
	struct TArray<struct FPortraitPaintingEntity> Entities; // 0x00(0x10)
};

// ScriptStruct Phoenix.PortraitPaintingEntity
// Size: 0x28 (Inherited: 0x00)
struct FPortraitPaintingEntity {
	struct FString EntityName; // 0x00(0x10)
	struct TWeakObjectPtr<struct AActor> EntityActor; // 0x10(0x08)
	struct TWeakObjectPtr<struct UPortraitPaintingEntityComponent> EntityComponent; // 0x18(0x08)
	enum class EPortraitPaintingEntitySource Source; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Phoenix.PortraitPaintingComponentStates
// Size: 0x50 (Inherited: 0x00)
struct FPortraitPaintingComponentStates {
	struct TMap<struct TWeakObjectPtr<struct USceneComponent>, struct FPortraitPaintingComponentState> States; // 0x00(0x50)
};

// ScriptStruct Phoenix.PortraitPaintingComponentState
// Size: 0x08 (Inherited: 0x00)
struct FPortraitPaintingComponentState {
	float BoundsScale; // 0x00(0x04)
	enum class ECollisionEnabled CollisionEnabled; // 0x04(0x01)
	char bUseAttachParentBound : 1; // 0x05(0x01)
	char bCastShadow : 1; // 0x05(0x01)
	char bCastContactShadow : 1; // 0x05(0x01)
	char bCastCapsuleDirectShadow : 1; // 0x05(0x01)
	char bReceivesDecals : 1; // 0x05(0x01)
	char bReceivesWeatherDecals : 1; // 0x05(0x01)
	char bIgnoreLightLeakingCorrection : 1; // 0x05(0x01)
	char bSetCollisionEnabled : 1; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Phoenix.ProtegoLevelData
// Size: 0x2c (Inherited: 0x01)
struct FProtegoLevelData : FSpellLevelData {
	char pad_1[0x3]; // 0x01(0x03)
	float PerfectTime; // 0x04(0x04)
	float DisarmPercent; // 0x08(0x04)
	float DisarmForce; // 0x0c(0x04)
	float PerfectAOERadius; // 0x10(0x04)
	float PerfectCharacterBasePhysicsImpulse; // 0x14(0x04)
	float PerfectCharacterMassScaledPhysicsImpulse; // 0x18(0x04)
	float PerfectCharacterMaxVelocity; // 0x1c(0x04)
	float NormalCharacterBasePhysicsImpulse; // 0x20(0x04)
	float NormalCharacterMassScaledPhysicsImpulse; // 0x24(0x04)
	float NormalCharacterMaxVelocity; // 0x28(0x04)
};

// ScriptStruct Phoenix.ProtegoEffectsData
// Size: 0x98 (Inherited: 0x00)
struct FProtegoEffectsData {
	struct TArray<enum class EEnemy_ProtegoLevel> ShieldTypes; // 0x00(0x10)
	struct TArray<struct UMultiFX2_Base*> ShieldActivateFX2; // 0x10(0x10)
	struct TArray<struct UMultiFX2_Base*> ShieldLoopFX2; // 0x20(0x10)
	struct TArray<struct UMultiFX2_Base*> ShieldIntensityFX2; // 0x30(0x10)
	struct TArray<struct UMultiFX2_Base*> ShieldDeactivateFX2; // 0x40(0x10)
	struct TArray<struct UMultiFX2_Base*> ShieldWandLoopFX2; // 0x50(0x10)
	struct TArray<struct UMultiFX2_Base*> ShieldHitFX2; // 0x60(0x10)
	struct TArray<struct UMultiFX2_Base*> ShieldFailedFX2; // 0x70(0x10)
	struct UCurveFloat* EffectRampInCurve; // 0x80(0x08)
	struct FName ShieldSkinEffectName; // 0x88(0x08)
	float ProtegoShieldFxDelay; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Phoenix.QActionItemLayout
// Size: 0x18 (Inherited: 0x00)
struct FQActionItemLayout {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.QActionGroup
// Size: 0x18 (Inherited: 0x00)
struct FQActionGroup {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.QActionItemMacro
// Size: 0x18 (Inherited: 0x00)
struct FQActionItemMacro {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.QActionItem
// Size: 0x0c (Inherited: 0x00)
struct FQActionItem {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Phoenix.QInventoryActionItem
// Size: 0x20 (Inherited: 0x0c)
struct FQInventoryActionItem : FQActionItem {
	char pad_C[0x14]; // 0x0c(0x14)
};

// ScriptStruct Phoenix.QAWorldOverrideData
// Size: 0x38 (Inherited: 0x00)
struct FQAWorldOverrideData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Phoenix.ItemChange
// Size: 0x20 (Inherited: 0x00)
struct FItemChange {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.RacerTime
// Size: 0x0c (Inherited: 0x00)
struct FRacerTime {
	struct FName RacerName; // 0x00(0x08)
	float RaceTime; // 0x08(0x04)
};

// ScriptStruct Phoenix.RarityColors
// Size: 0x48 (Inherited: 0x08)
struct FRarityColors : FTableRowBase {
	struct FDataTableRowHandle Outline; // 0x08(0x10)
	struct FDataTableRowHandle Glow; // 0x18(0x10)
	struct FDataTableRowHandle Back; // 0x28(0x10)
	struct FDataTableRowHandle Text; // 0x38(0x10)
};

// ScriptStruct Phoenix.RevealData
// Size: 0x28 (Inherited: 0x00)
struct FRevealData {
	struct TArray<struct UMultiFX2_Base*> FX2; // 0x00(0x10)
	struct TArray<struct UMultiFX2_Base*> GlobalFX2; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Phoenix.RPGTimeTriggers
// Size: 0x38 (Inherited: 0x00)
struct FRPGTimeTriggers {
	bool bUseRatioOfLifetime; // 0x00(0x01)
	enum class ETimedAbilityUnit Unit; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float StartTime; // 0x04(0x04)
	float StopTime; // 0x08(0x04)
	enum class ETimedAbilityRetriggerBehaviour RetriggerBehaviour; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct URPGTriggerEffect_Base* TriggerEffect; // 0x10(0x08)
	bool bIsActive; // 0x18(0x01)
	bool bWasActive; // 0x19(0x01)
	bool bUseIngameSimulationTime; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct FDateTime StartTimeStamp; // 0x20(0x08)
	struct FDateTime StopTimeStamp; // 0x28(0x08)
	bool bRepeating; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float LoopPauseTime; // 0x34(0x04)
};

// ScriptStruct Phoenix.RPGUIInfo
// Size: 0x10 (Inherited: 0x00)
struct FRPGUIInfo {
	struct FName SourceID; // 0x00(0x08)
	int32_t SlotID; // 0x08(0x04)
	bool bShowInHUD; // 0x0c(0x01)
	bool bShowInMenu; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct Phoenix.ItemFilter
// Size: 0x18 (Inherited: 0x00)
struct FItemFilter {
	bool bMatchesWholeWord; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Filter; // 0x08(0x10)
};

// ScriptStruct Phoenix.RPGHitTracker
// Size: 0x18 (Inherited: 0x00)
struct FRPGHitTracker {
	struct AActor* Target; // 0x00(0x08)
	float Timestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USpellToolRecord* Spell; // 0x10(0x08)
};

// ScriptStruct Phoenix.SocialReasoningComparison
// Size: 0x01 (Inherited: 0x00)
struct FSocialReasoningComparison {
	enum class SocialCapitalChangeReasons ComparedToReasoning; // 0x00(0x01)
};

// ScriptStruct Phoenix.SocialSemanticsComparison
// Size: 0x08 (Inherited: 0x00)
struct FSocialSemanticsComparison {
	enum class SocialSemanticIDs SocialSemantic; // 0x00(0x01)
	enum class EValueComparison ComparisonOperator; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t ComparisonValue; // 0x04(0x04)
};

// ScriptStruct Phoenix.ValueComparison
// Size: 0x08 (Inherited: 0x00)
struct FValueComparison {
	enum class EValueComparison ComparisonOperator; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ComparisonValue; // 0x04(0x04)
};

// ScriptStruct Phoenix.SceneRigRule_RuleAsset
// Size: 0x40 (Inherited: 0x00)
struct FSceneRigRule_RuleAsset {
	char ForSpecificActor : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSceneRigStage_ActorReference SpecificActor; // 0x08(0x10)
	struct FGameplayTagContainer Tags; // 0x18(0x20)
	struct UDialogueSequenceRule* Rule; // 0x38(0x08)
};

// ScriptStruct Phoenix.SanctuaryBonusStatus
// Size: 0x20 (Inherited: 0x00)
struct FSanctuaryBonusStatus {
	struct FName BonusID; // 0x00(0x08)
	struct FString UnlockTextKey; // 0x08(0x10)
	float Value; // 0x18(0x04)
	bool bIsMaxedOut; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Phoenix.SanctuaryIdentitySettings
// Size: 0x680 (Inherited: 0x00)
struct FSanctuaryIdentitySettings {
	struct FSanctuaryIdentityDayNightSettings DayNightSettings; // 0x00(0x20)
	struct FSanctuaryIdentityGlobalLightingSettings GlobalLightingSettings; // 0x20(0x08)
	struct FSanctuaryIdentityRenderSettings RenderSettings; // 0x28(0x68)
	struct FPostProcessSettings PostProcessSettings; // 0x90(0x5f0)
};

// ScriptStruct Phoenix.SanctuaryIdentityRenderSettings
// Size: 0x68 (Inherited: 0x00)
struct FSanctuaryIdentityRenderSettings {
	char bOverride_Exposure : 1; // 0x00(0x01)
	char bOverride_ColorGrading : 1; // 0x00(0x01)
	char bOverride_Film : 1; // 0x00(0x01)
	char bOverride_LensFX : 1; // 0x00(0x01)
	char bOverride_Bloom : 1; // 0x00(0x01)
	char bOverride_MotionBlur : 1; // 0x00(0x01)
	char bOverride_DepthOfField : 1; // 0x00(0x01)
	char bOverride_Ambient : 1; // 0x00(0x01)
	char bOverride_ScreenSpaceReflections : 1; // 0x01(0x01)
	char bOverride_EmissiveAdaptation : 1; // 0x01(0x01)
	char bOverride_ExposureTweak : 1; // 0x01(0x01)
	char bOverride_DistanceFog : 1; // 0x01(0x01)
	char bOverride_CharacterLightRigAdjustments : 1; // 0x01(0x01)
	char pad_1_5 : 3; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FRenderSettingsPPExposureName Exposure; // 0x04(0x08)
	struct FRenderSettingsPPColorGradingName ColorGrading; // 0x0c(0x08)
	struct FRenderSettingsPPFilmName Film; // 0x14(0x08)
	struct FRenderSettingsPPLensFXName LensFX; // 0x1c(0x08)
	struct FRenderSettingsPPBloomName Bloom; // 0x24(0x08)
	struct FRenderSettingsPPMotionBlurName MotionBlur; // 0x2c(0x08)
	struct FRenderSettingsPPDepthOfFieldName DepthOfField; // 0x34(0x08)
	struct FRenderSettingsPPAmbientName Ambient; // 0x3c(0x08)
	struct FRenderSettingsPPScreenSpaceReflectionsName ScreenSpaceReflections; // 0x44(0x08)
	struct FRenderSettingsEmissiveAdaptationName EmissiveAdaptation; // 0x4c(0x08)
	float ExposureTweak; // 0x54(0x04)
	struct FDistanceFogName DistanceFog; // 0x58(0x08)
	struct FCharacterLightRigAdjustmentsName CharacterLightRigAdjustments; // 0x60(0x08)
};

// ScriptStruct Phoenix.SanctuaryIdentityGlobalLightingSettings
// Size: 0x08 (Inherited: 0x00)
struct FSanctuaryIdentityGlobalLightingSettings {
	struct UGlobalLightingBlendable* GlobalLightingBlendable; // 0x00(0x08)
};

// ScriptStruct Phoenix.SanctuaryIdentityDayNightSettings
// Size: 0x20 (Inherited: 0x00)
struct FSanctuaryIdentityDayNightSettings {
	struct TArray<struct UTimeSource*> TimeSources; // 0x00(0x10)
	struct TArray<struct UEphemerisSubroutine*> EphemerisProgram; // 0x10(0x10)
};

// ScriptStruct Phoenix.SanctuaryPortalIdentityMaterialOverrideSettings
// Size: 0x20 (Inherited: 0x00)
struct FSanctuaryPortalIdentityMaterialOverrideSettings {
	char bOverride_Desaturation : 1; // 0x00(0x01)
	char bOverride_Brightness : 1; // 0x00(0x01)
	char bOverride_Contrast : 1; // 0x00(0x01)
	char bOverride_Tint : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Desaturation; // 0x04(0x04)
	float Brightness; // 0x08(0x04)
	float Contrast; // 0x0c(0x04)
	struct FLinearColor Tint; // 0x10(0x10)
};

// ScriptStruct Phoenix.SanctuaryPortalMaterialSettings
// Size: 0x1c (Inherited: 0x00)
struct FSanctuaryPortalMaterialSettings {
	float Desaturation; // 0x00(0x04)
	float Brightness; // 0x04(0x04)
	float Contrast; // 0x08(0x04)
	struct FLinearColor Tint; // 0x0c(0x10)
};

// ScriptStruct Phoenix.SanctuaryStreamingIslandDefinition
// Size: 0x68 (Inherited: 0x00)
struct FSanctuaryStreamingIslandDefinition {
	struct FName IslandName; // 0x00(0x08)
	struct TArray<struct FSanctuaryStreamingZoneDefinition> Zones; // 0x08(0x10)
	struct TSoftObjectPtr<UWorld> LightingScenario; // 0x18(0x28)
	struct TSoftObjectPtr<UWorld> OctreeScenario; // 0x40(0x28)
};

// ScriptStruct Phoenix.SanctuaryStreamingZoneDefinition
// Size: 0xe0 (Inherited: 0x00)
struct FSanctuaryStreamingZoneDefinition {
	struct FName ZoneName; // 0x00(0x08)
	struct TArray<struct TSoftObjectPtr<UWorld>> MinimumLoad; // 0x08(0x10)
	struct TArray<struct TSoftObjectPtr<UWorld>> ParallelLoad; // 0x18(0x10)
	bool bStayVisibleWhenIslandIsHidden; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FDbSingleColumnInfo Lock; // 0x30(0x88)
	struct TArray<struct FDbSingleColumnInfo> Locks; // 0xb8(0x10)
	bool bMustBeLockedToLoadZone; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TArray<struct FName> ChildZones; // 0xd0(0x10)
};

// ScriptStruct Phoenix.SanctuaryExpansionDefinition
// Size: 0x08 (Inherited: 0x00)
struct FSanctuaryExpansionDefinition {
	struct FName ExpansionLockID; // 0x00(0x08)
};

// ScriptStruct Phoenix.MultiLightDescription
// Size: 0x98 (Inherited: 0x00)
struct FMultiLightDescription {
	enum class EBasicLightType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FBasicLightDescription Common; // 0x04(0x4c)
	struct FPointLightDescription Point; // 0x50(0x14)
	struct FSpotLightDescription Spot; // 0x64(0x1c)
	struct FRectLightDescription Rect; // 0x80(0x18)
};

// ScriptStruct Phoenix.RectLightDescription
// Size: 0x18 (Inherited: 0x00)
struct FRectLightDescription {
	float SourceWidth; // 0x00(0x04)
	float SourceHeight; // 0x04(0x04)
	float BarnDoorAngle; // 0x08(0x04)
	float BarnDoorLength; // 0x0c(0x04)
	struct UTexture* SourceTexture; // 0x10(0x08)
};

// ScriptStruct Phoenix.SpotLightDescription
// Size: 0x1c (Inherited: 0x00)
struct FSpotLightDescription {
	float InnerConeAngle; // 0x00(0x04)
	float OuterConeAngle; // 0x04(0x04)
	bool bUseInverseSquaredFalloff; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float LightFalloffExponent; // 0x0c(0x04)
	float SourceRadius; // 0x10(0x04)
	float SoftSourceRadius; // 0x14(0x04)
	float SourceLength; // 0x18(0x04)
};

// ScriptStruct Phoenix.PointLightDescription
// Size: 0x14 (Inherited: 0x00)
struct FPointLightDescription {
	bool bUseInverseSquaredFalloff; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LightFalloffExponent; // 0x04(0x04)
	float SourceRadius; // 0x08(0x04)
	float SoftSourceRadius; // 0x0c(0x04)
	float SourceLength; // 0x10(0x04)
};

// ScriptStruct Phoenix.BasicLightDescription
// Size: 0x4c (Inherited: 0x00)
struct FBasicLightDescription {
	enum class ELightUnits IntensityUnits; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Intensity; // 0x04(0x04)
	float AttenuationRadius; // 0x08(0x04)
	struct FColor LightColor; // 0x0c(0x04)
	float Temperature; // 0x10(0x04)
	float VolumetricScatteringIntensity; // 0x14(0x04)
	float SpecularScale; // 0x18(0x04)
	struct FBasicLightShadowDescription Shadows; // 0x1c(0x1c)
	struct FLightingChannels LightingChannels; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FBasicLightBloomDescription Bloom; // 0x3c(0x0c)
	char bAffectTranslucentLighting : 1; // 0x48(0x01)
	char bTransmission : 1; // 0x48(0x01)
	char bAffectReflection : 1; // 0x48(0x01)
	char bUseTemperature : 1; // 0x48(0x01)
	char bEnableLightShaftBloom : 1; // 0x48(0x01)
	char pad_48_5 : 3; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Phoenix.BasicLightBloomDescription
// Size: 0x0c (Inherited: 0x00)
struct FBasicLightBloomDescription {
	float BloomScale; // 0x00(0x04)
	float BloomThreshold; // 0x04(0x04)
	struct FColor BloomTint; // 0x08(0x04)
};

// ScriptStruct Phoenix.BasicLightShadowDescription
// Size: 0x1c (Inherited: 0x00)
struct FBasicLightShadowDescription {
	char bCastShadows : 1; // 0x00(0x01)
	char bCastStaticShadows : 1; // 0x00(0x01)
	char bCastDynamicShadows : 1; // 0x00(0x01)
	char bCastVolumetricShadow : 1; // 0x00(0x01)
	char bContactShadowLengthInWS : 1; // 0x00(0x01)
	char bCastTranslucentShadows : 1; // 0x00(0x01)
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x00(0x01)
	char pad_0_7 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ShadowResolutionScale; // 0x04(0x04)
	float ShadowBias; // 0x08(0x04)
	float ShadowSlopeBias; // 0x0c(0x04)
	float ShadowSharpen; // 0x10(0x04)
	float ContactShadowLength; // 0x14(0x04)
	float NearShadowClippingDistance; // 0x18(0x04)
};

// ScriptStruct Phoenix.SceneActionConsoleVariable
// Size: 0x10 (Inherited: 0x00)
struct FSceneActionConsoleVariable {
	struct FName Variable; // 0x00(0x08)
	struct FName Value; // 0x08(0x08)
};

// ScriptStruct Phoenix.SceneActionConsoleCommand
// Size: 0x18 (Inherited: 0x00)
struct FSceneActionConsoleCommand {
	struct FName Command; // 0x00(0x08)
	struct FName ValueOnEnter; // 0x08(0x08)
	struct FName ValueOnExit; // 0x10(0x08)
};

// ScriptStruct Phoenix.RenderingCutBits
// Size: 0x08 (Inherited: 0x00)
struct FRenderingCutBits {
	int32_t RenderingCuts; // 0x00(0x04)
	int32_t Frames; // 0x04(0x04)
};

// ScriptStruct Phoenix.HermesMessageAdvancedDynamicPayload
// Size: 0x18 (Inherited: 0x00)
struct FHermesMessageAdvancedDynamicPayload {
	enum class EHermesMessageAdvancedDynamicPayloadType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	bool Boolean; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t Integer; // 0x10(0x04)
	float Scalar; // 0x14(0x04)
};

// ScriptStruct Phoenix.MaterialSwapKeyBundlePreload
// Size: 0x03 (Inherited: 0x00)
struct FMaterialSwapKeyBundlePreload {
	enum class EMaterialPermuterLoadingPriority Priority; // 0x00(0x01)
	bool bAttachedChildren; // 0x01(0x01)
	bool bComponentChildren; // 0x02(0x01)
};

// ScriptStruct Phoenix.SceneActionMaterialSwapParameter
// Size: 0x10 (Inherited: 0x00)
struct FSceneActionMaterialSwapParameter {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Parameter; // 0x08(0x08)
};

// ScriptStruct Phoenix.SceneActionMaterialSwapParameterColor
// Size: 0x18 (Inherited: 0x10)
struct FSceneActionMaterialSwapParameterColor : FSceneActionMaterialSwapParameter {
	struct UColorProvider* Value; // 0x10(0x08)
};

// ScriptStruct Phoenix.SceneActionMaterialSwapParameterVector
// Size: 0x18 (Inherited: 0x10)
struct FSceneActionMaterialSwapParameterVector : FSceneActionMaterialSwapParameter {
	struct UVectorProvider* Value; // 0x10(0x08)
};

// ScriptStruct Phoenix.SceneActionMaterialSwapParameterScalar
// Size: 0x18 (Inherited: 0x10)
struct FSceneActionMaterialSwapParameterScalar : FSceneActionMaterialSwapParameter {
	struct UFloatProvider* Value; // 0x10(0x08)
};

// ScriptStruct Phoenix.SceneActionSkinFXProviderParameters
// Size: 0x30 (Inherited: 0x00)
struct FSceneActionSkinFXProviderParameters {
	struct TArray<struct FSceneActionSkinFXProviderParameterScalar> Scalars; // 0x00(0x10)
	struct TArray<struct FSceneActionSkinFXProviderParameterVector> Vectors; // 0x10(0x10)
	struct TArray<struct FSceneActionSkinFXProviderParameterColor> Colors; // 0x20(0x10)
};

// ScriptStruct Phoenix.SceneActionSkinFXProviderParameter
// Size: 0x10 (Inherited: 0x00)
struct FSceneActionSkinFXProviderParameter {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Parameter; // 0x08(0x08)
};

// ScriptStruct Phoenix.SceneActionSkinFXProviderParameterColor
// Size: 0x18 (Inherited: 0x10)
struct FSceneActionSkinFXProviderParameterColor : FSceneActionSkinFXProviderParameter {
	struct UColorProvider* Value; // 0x10(0x08)
};

// ScriptStruct Phoenix.SceneActionSkinFXProviderParameterVector
// Size: 0x18 (Inherited: 0x10)
struct FSceneActionSkinFXProviderParameterVector : FSceneActionSkinFXProviderParameter {
	struct UVectorProvider* Value; // 0x10(0x08)
};

// ScriptStruct Phoenix.SceneActionSkinFXProviderParameterScalar
// Size: 0x18 (Inherited: 0x10)
struct FSceneActionSkinFXProviderParameterScalar : FSceneActionSkinFXProviderParameter {
	struct UFloatProvider* Value; // 0x10(0x08)
};

// ScriptStruct Phoenix.SkyStateSmoothInOut
// Size: 0x08 (Inherited: 0x00)
struct FSkyStateSmoothInOut {
	float SmoothInTime; // 0x00(0x04)
	float SmoothOutTime; // 0x04(0x04)
};

// ScriptStruct Phoenix.ActionParameter_AkAudioEvent
// Size: 0x28 (Inherited: 0x00)
struct FActionParameter_AkAudioEvent {
	struct FSceneRigParameterBinding_AkAudioEvent BoundParameter; // 0x00(0x08)
	struct FSceneRigAkAudioEventTrackSectionData DefaultEvent; // 0x08(0x20)
};

// ScriptStruct Phoenix.SceneRigAkAudioEventTrackSectionData
// Size: 0x20 (Inherited: 0x00)
struct FSceneRigAkAudioEventTrackSectionData {
	struct UAkAudioEvent* Event; // 0x00(0x08)
	bool RetriggerEvent; // 0x08(0x01)
	bool StopAtSectionEnd; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float MaxSourceDuration; // 0x0c(0x04)
	struct FString EventName; // 0x10(0x10)
};

// ScriptStruct Phoenix.SceneRigParameterBinding_AkAudioEvent
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_AkAudioEvent : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_AkAudioEvent* Reference; // 0x00(0x08)
};

// ScriptStruct Phoenix.ActionParameter_AkAudioRTPC
// Size: 0x20 (Inherited: 0x00)
struct FActionParameter_AkAudioRTPC {
	struct FSceneRigParameterBinding_AkAudioRTPC BoundParameter; // 0x00(0x08)
	struct FSceneRigAkAudioRTPCTrackSectionData DefaultRTPC; // 0x08(0x18)
};

// ScriptStruct Phoenix.SceneRigAkAudioRTPCTrackSectionData
// Size: 0x18 (Inherited: 0x00)
struct FSceneRigAkAudioRTPCTrackSectionData {
	struct FString RTPCName; // 0x00(0x10)
	float RTPCValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.SceneRigParameterBinding_AkAudioRTPC
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_AkAudioRTPC : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_AkAudioRTPC* Reference; // 0x00(0x08)
};

// ScriptStruct Phoenix.ActionParameter_AkAudioState
// Size: 0x18 (Inherited: 0x00)
struct FActionParameter_AkAudioState {
	struct FSceneRigParameterBinding_AkAudioState BoundParameter; // 0x00(0x08)
	struct FSceneRigAkAudioStateTrackSectionData DefaultState; // 0x08(0x10)
};

// ScriptStruct Phoenix.SceneRigAkAudioStateTrackSectionData
// Size: 0x10 (Inherited: 0x00)
struct FSceneRigAkAudioStateTrackSectionData {
	struct FName stateGroup; // 0x00(0x08)
	struct FName State; // 0x08(0x08)
};

// ScriptStruct Phoenix.SceneRigParameterBinding_AkAudioState
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_AkAudioState : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_AkAudioState* Reference; // 0x00(0x08)
};

// ScriptStruct Phoenix.ActionParameter_AvaAudioMusic
// Size: 0x20 (Inherited: 0x00)
struct FActionParameter_AvaAudioMusic {
	struct FSceneRigParameterBinding_AvaAudioMusic BoundParameter; // 0x00(0x08)
	struct FSceneRigAvaAudioMusicTrackSectionData DefaultEvent; // 0x08(0x18)
};

// ScriptStruct Phoenix.SceneRigAvaAudioMusicTrackSectionData
// Size: 0x18 (Inherited: 0x00)
struct FSceneRigAvaAudioMusicTrackSectionData {
	struct FString EventName; // 0x00(0x10)
	int32_t Priority; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.SceneRigParameterBinding_AvaAudioMusic
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_AvaAudioMusic : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_AvaAudioMusic* Reference; // 0x00(0x08)
};

// ScriptStruct Phoenix.ActionParameter_AvaAudioState
// Size: 0x20 (Inherited: 0x00)
struct FActionParameter_AvaAudioState {
	struct FSceneRigParameterBinding_AvaAudioState BoundParameter; // 0x00(0x08)
	struct FSceneRigAvaAudioStateTrackSectionData DefaultState; // 0x08(0x14)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Phoenix.SceneRigAvaAudioStateTrackSectionData
// Size: 0x14 (Inherited: 0x00)
struct FSceneRigAvaAudioStateTrackSectionData {
	struct FName stateGroup; // 0x00(0x08)
	struct FName State; // 0x08(0x08)
	int32_t Priority; // 0x10(0x04)
};

// ScriptStruct Phoenix.SceneRigParameterBinding_AvaAudioState
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_AvaAudioState : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_AvaAudioState* Reference; // 0x00(0x08)
};

// ScriptStruct Phoenix.SceneRigSocketEntry
// Size: 0x10 (Inherited: 0x00)
struct FSceneRigSocketEntry {
	struct FName SocketName; // 0x00(0x08)
	struct USceneRigProvider* SceneRigProvider; // 0x08(0x08)
};

// ScriptStruct Phoenix.RequestedGoal
// Size: 0x68 (Inherited: 0x00)
struct FRequestedGoal {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct Phoenix.ActivityStruct
// Size: 0x28 (Inherited: 0x00)
struct FActivityStruct {
	float StartTime; // 0x00(0x04)
	float EndTime; // 0x04(0x04)
	struct FString ActivityID; // 0x08(0x10)
	struct FString ActivityTypeID; // 0x18(0x10)
};

// ScriptStruct Phoenix.MastermindScreenInfo
// Size: 0x28 (Inherited: 0x00)
struct FMastermindScreenInfo {
	struct FString ScreenName; // 0x00(0x10)
	struct TArray<struct FString> ExtraScreenStrings; // 0x10(0x10)
	bool bIsPlayingIntro; // 0x20(0x01)
	bool bIsPlayingOutro; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Phoenix.ShadowSprintImpulseData
// Size: 0x14 (Inherited: 0x00)
struct FShadowSprintImpulseData {
	float Impulse; // 0x00(0x04)
	float MaxSpeed; // 0x04(0x04)
	float MinDamping; // 0x08(0x04)
	float MaxDamping; // 0x0c(0x04)
	float DampingWhenNotMoving; // 0x10(0x04)
};

// ScriptStruct Phoenix.SimpleCapsuleSkeleton
// Size: 0x80 (Inherited: 0x00)
struct FSimpleCapsuleSkeleton {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FName, struct FSimpleCapsule> Capsules; // 0x08(0x50)
	struct TArray<struct FName> BoneKeys; // 0x58(0x10)
	struct FCapsuleBoundingSphere Bounds; // 0x68(0x14)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Phoenix.CapsuleBoundingSphere
// Size: 0x14 (Inherited: 0x00)
struct FCapsuleBoundingSphere {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	bool bValid; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Phoenix.SimpleCapsule
// Size: 0x20 (Inherited: 0x00)
struct FSimpleCapsule {
	struct FVector Origin; // 0x00(0x0c)
	struct FVector UnitAxis; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float Height; // 0x1c(0x04)
};

// ScriptStruct Phoenix.SimpleCapsuleSkeletonWithBones
// Size: 0xd0 (Inherited: 0x80)
struct FSimpleCapsuleSkeletonWithBones : FSimpleCapsuleSkeleton {
	struct TMap<struct FName, struct FTransform> Bones; // 0x80(0x50)
};

// ScriptStruct Phoenix.CollisionLineSegment
// Size: 0x20 (Inherited: 0x00)
struct FCollisionLineSegment {
	struct FVector Origin; // 0x00(0x0c)
	struct FVector Dir; // 0x0c(0x0c)
	float Length; // 0x18(0x04)
	float ClosestIntersectionT; // 0x1c(0x04)
};

// ScriptStruct Phoenix.CapsuleBoundingSphereGroup
// Size: 0x10 (Inherited: 0x00)
struct FCapsuleBoundingSphereGroup {
	struct TArray<struct FCapsuleBoundingSphere> Spheres; // 0x00(0x10)
};

// ScriptStruct Phoenix.SimpleCapsuleSurfacePointNormal
// Size: 0x38 (Inherited: 0x20)
struct FSimpleCapsuleSurfacePointNormal : FSimpleCapsule {
	struct FVector Point; // 0x20(0x0c)
	struct FVector Normal; // 0x2c(0x0c)
};

// ScriptStruct Phoenix.SimpleTopologyVoxelArray
// Size: 0xa8 (Inherited: 0x00)
struct FSimpleTopologyVoxelArray {
	struct FSimpleTopologyParams Topology; // 0x00(0x18)
	float InvVoxelSize; // 0x18(0x04)
	struct FSimpleTopologyVoxelIndex MinVoxelIndex; // 0x1c(0x0c)
	struct FSimpleTopologyVoxelIndex MaxVoxelIndex; // 0x28(0x0c)
	char pad_34[0x74]; // 0x34(0x74)
};

// ScriptStruct Phoenix.SimpleTopologyVoxelIndex
// Size: 0x0c (Inherited: 0x00)
struct FSimpleTopologyVoxelIndex {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
	int32_t Z; // 0x08(0x04)
};

// ScriptStruct Phoenix.SimpleTopologyParams
// Size: 0x18 (Inherited: 0x00)
struct FSimpleTopologyParams {
	struct FVector Center; // 0x00(0x0c)
	float VoxelSize; // 0x0c(0x04)
	float SweepDistanceZ; // 0x10(0x04)
	bool bUseBoxSweeps; // 0x14(0x01)
	bool bSolidsOnly; // 0x15(0x01)
	bool bTraceComplex; // 0x16(0x01)
	bool bForceSynchronous; // 0x17(0x01)
};

// ScriptStruct Phoenix.SimpleTopologyVoxelLineTraceResult
// Size: 0x68 (Inherited: 0x00)
struct FSimpleTopologyVoxelLineTraceResult {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct Phoenix.SimpleTopologyVoxelSweptTraceResult
// Size: 0x50 (Inherited: 0x00)
struct FSimpleTopologyVoxelSweptTraceResult {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Phoenix.SimpleTopologyVoxel
// Size: 0x1c (Inherited: 0x00)
struct FSimpleTopologyVoxel {
	struct FSimpleTopologyPointNormal Plane; // 0x00(0x18)
	enum class ESimpleTopologyType Type; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Phoenix.SimpleTopologyPointNormal
// Size: 0x18 (Inherited: 0x00)
struct FSimpleTopologyPointNormal {
	struct FVector Point; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
};

// ScriptStruct Phoenix.SkinFXEventTriggerHermesMessage
// Size: 0x18 (Inherited: 0x00)
struct FSkinFXEventTriggerHermesMessage {
	struct USkinFXComponent* SkinFXComponent; // 0x00(0x08)
	struct FName SkinFXEffectName; // 0x08(0x08)
	enum class ESkinFXDelegateEvent SkinFXEvent; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Phoenix.SlaveToSplineSlave
// Size: 0x20 (Inherited: 0x00)
struct FSlaveToSplineSlave {
	struct AActor* Slave; // 0x00(0x08)
	enum class ESlaveToSplineUpdateMode Mode; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float DurationFactor; // 0x0c(0x04)
	float SplineT; // 0x10(0x04)
	float SplineTReset; // 0x14(0x04)
	bool bUseConstantVelocity; // 0x18(0x01)
	bool bPositionOnly; // 0x19(0x01)
	bool bIncludeScale; // 0x1a(0x01)
	bool bReverseDirection; // 0x1b(0x01)
	bool bDisableCollision; // 0x1c(0x01)
	bool bFollowEnabled; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Phoenix.NavSlideInfo
// Size: 0x18 (Inherited: 0x00)
struct FNavSlideInfo {
	struct FVector BottomLinkEnd; // 0x00(0x0c)
	struct FVector TopLinkEnd; // 0x0c(0x0c)
};

// ScriptStruct Phoenix.SMeshWidgetParticleEmitterProperties
// Size: 0x48 (Inherited: 0x00)
struct FSMeshWidgetParticleEmitterProperties {
	enum class ESMeshWidgetParticleEmitterType EmitterType; // 0x00(0x01)
	bool RunOnStart; // 0x01(0x01)
	bool FixToWidgetGeometry; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t ParticlesPerSecond; // 0x04(0x04)
	float MinEmissionAngle; // 0x08(0x04)
	float MaxEmissionAngle; // 0x0c(0x04)
	float MinLifeTime; // 0x10(0x04)
	float MaxLifeTime; // 0x14(0x04)
	float MinSpeed; // 0x18(0x04)
	float MaxSpeed; // 0x1c(0x04)
	float StartScale; // 0x20(0x04)
	float EndScale; // 0x24(0x04)
	struct FVector2D Force; // 0x28(0x08)
	struct FVector2D RandomForceMin; // 0x30(0x08)
	struct FVector2D RandomForceMax; // 0x38(0x08)
	float RandomForceRateOfChange; // 0x40(0x04)
	float RandomForceScaleOfChange; // 0x44(0x04)
};

// ScriptStruct Phoenix.SocialCallout
// Size: 0x30 (Inherited: 0x00)
struct FSocialCallout {
	bool IsFresh; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSocialDebug SocialDebug; // 0x08(0x10)
	struct FSocialCapitalMovement SocialCapitalMovement; // 0x18(0x18)
};

// ScriptStruct Phoenix.SocialCapitalMovement
// Size: 0x18 (Inherited: 0x00)
struct FSocialCapitalMovement {
	bool IsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Magnitude; // 0x04(0x04)
	struct FString Reason; // 0x08(0x10)
};

// ScriptStruct Phoenix.SocialDebug
// Size: 0x10 (Inherited: 0x00)
struct FSocialDebug {
	struct TArray<struct FString> DebugStrings; // 0x00(0x10)
};

// ScriptStruct Phoenix.AmendSocapDetails
// Size: 0x28 (Inherited: 0x00)
struct FAmendSocapDetails {
	struct FName socialActionName; // 0x00(0x08)
	int32_t currentSocap; // 0x08(0x04)
	struct FName currentSocapStatus; // 0x0c(0x08)
	float currentSocapStatusPercent; // 0x14(0x04)
	int32_t deltaSocap; // 0x18(0x04)
	struct FName socapReason; // 0x1c(0x08)
	int32_t Magnitude; // 0x24(0x04)
};

// ScriptStruct Phoenix.GreetingQueryData
// Size: 0x20 (Inherited: 0x00)
struct FGreetingQueryData {
	bool IsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct TWeakObjectPtr<struct ASocialReasoning> TargetReasoner; // 0x04(0x08)
	struct FName SocialAction; // 0x0c(0x08)
	struct FName SocialActionResponse; // 0x14(0x08)
	int32_t SocialActionResponseMagnitude; // 0x1c(0x04)
};

// ScriptStruct Phoenix.SpellData
// Size: 0xe0 (Inherited: 0x00)
struct FSpellData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName SpellName; // 0x08(0x08)
	struct AActor* Instigator; // 0x10(0x08)
	struct FHitResult Hit; // 0x18(0x88)
	struct FVector ImpactDirection; // 0xa0(0x0c)
	struct FVector ImpactLocation; // 0xac(0x0c)
	struct FVector Velocity; // 0xb8(0x0c)
	struct FVector Destination; // 0xc4(0x0c)
	struct AActor* DestinationActor; // 0xd0(0x08)
	float Duration; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct Phoenix.CastSpellData
// Size: 0x48 (Inherited: 0x00)
struct FCastSpellData {
	char pad_0[0x18]; // 0x00(0x18)
	struct TWeakObjectPtr<struct AActor> TargetActor; // 0x18(0x08)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x20(0x08)
	struct USpellToolRecord* SpellToolRecord; // 0x28(0x08)
	char pad_30[0x18]; // 0x30(0x18)
};

// ScriptStruct Phoenix.SpellMgrLoadOutData
// Size: 0x20 (Inherited: 0x00)
struct FSpellMgrLoadOutData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.SpellMgrLoadOut
// Size: 0x18 (Inherited: 0x00)
struct FSpellMgrLoadOut {
	struct TArray<struct FName> SpellNames; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Phoenix.SpellUpgradeState
// Size: 0x84 (Inherited: 0x00)
struct FSpellUpgradeState {
	struct FName SpellName; // 0x00(0x08)
	enum class ESpellCategory SpellCategory; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName GroupName; // 0x0c(0x08)
	struct FName CurriculumAssociation; // 0x14(0x08)
	struct FSpellUpgradeParameters SpellUpgradeParameters; // 0x1c(0x60)
	char pad_7C[0x4]; // 0x7c(0x04)
	bool NurtureOnly; // 0x80(0x01)
	bool AllowInUI; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
};

// ScriptStruct Phoenix.SpellUpgradeParameters
// Size: 0x60 (Inherited: 0x00)
struct FSpellUpgradeParameters {
	float Range; // 0x00(0x04)
	float CooldownTime; // 0x04(0x04)
	float NonCombatCooldownMultiplier; // 0x08(0x04)
	float DamageObject; // 0x0c(0x04)
	float DamageCharacter; // 0x10(0x04)
	float PhysicsImpulseSuccess; // 0x14(0x04)
	float PhysicsImpulseFailed; // 0x18(0x04)
	float Duration; // 0x1c(0x04)
	float DurationCharacter; // 0x20(0x04)
	float DurationCreature; // 0x24(0x04)
	float DurationPlayer; // 0x28(0x04)
	float ChargeTime; // 0x2c(0x04)
	float ChargedMaxTime; // 0x30(0x04)
	float ChannelingMinTime; // 0x34(0x04)
	enum class EGameEvent_Intensity CastNoiseIntensity; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float CastNoiseRadius; // 0x3c(0x04)
	enum class EGameEvent_Intensity ImpactNoiseIntensity; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float ImpactNoiseRadius; // 0x44(0x04)
	float ProjectileSpeed; // 0x48(0x04)
	float ProjectileGravity; // 0x4c(0x04)
	int32_t LimitedCountObject; // 0x50(0x04)
	int32_t LimitedCountCharacter; // 0x54(0x04)
	enum class EImpactTypes ImpactType; // 0x58(0x01)
	enum class EObjectSizeClass SizeLimit; // 0x59(0x01)
	enum class EEnemyShieldBreaker EnemyShieldBreaker; // 0x5a(0x01)
	char Affect; // 0x5b(0x01)
	char AllowNonObjectInfoActors : 1; // 0x5c(0x01)
	char UpgradedMechanics : 1; // 0x5c(0x01)
	char PlayObjectImpactEffects : 1; // 0x5c(0x01)
	char PlayerShieldBreaker : 1; // 0x5c(0x01)
	char BeastCapture : 1; // 0x5c(0x01)
	char pad_5C_5 : 3; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct Phoenix.UISpellState
// Size: 0x14 (Inherited: 0x00)
struct FUISpellState {
	struct FName SpellName; // 0x00(0x08)
	bool AllowInUI; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName LockName; // 0x0c(0x08)
};

// ScriptStruct Phoenix.ImpactLevelData
// Size: 0x90 (Inherited: 0x01)
struct FImpactLevelData : FSpellLevelData {
	char pad_1[0x7]; // 0x01(0x07)
	struct AMunitionType_Base* MunitionActor; // 0x08(0x08)
	struct TArray<struct UMultiFX2_Base*> HitActorFX2; // 0x10(0x10)
	struct TArray<struct UMultiFX2_Base*> HitTerrainFX2; // 0x20(0x10)
	struct TArray<struct UMultiFX2_Base*> HitBlockedFX2; // 0x30(0x10)
	struct TArray<struct UMultiFX2_Base*> HitDeflectedFX2; // 0x40(0x10)
	struct TArray<struct UMultiFX2_Base*> DeflectedMunitionFX2; // 0x50(0x10)
	struct TArray<struct UMultiFX2_Base*> FizzleOutFX2; // 0x60(0x10)
	struct TArray<struct UMultiFX2_Base*> PostPerfectProtegoFX2; // 0x70(0x10)
	struct TArray<struct UMultiFX2_Base*> AffectTargetFX2; // 0x80(0x10)
};

// ScriptStruct Phoenix.AbilityFunction
// Size: 0x0c (Inherited: 0x00)
struct FAbilityFunction {
	struct FGameplayTag GameplayTag; // 0x00(0x08)
	enum class ESpellUpgrades Upgrade; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Phoenix.ActiveSpellInfo
// Size: 0x18 (Inherited: 0x00)
struct FActiveSpellInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.SpellMunitionInfo
// Size: 0x138 (Inherited: 0x00)
struct FSpellMunitionInfo {
	char pad_0[0x138]; // 0x00(0x138)
};

// ScriptStruct Phoenix.OnSpellHitInfo
// Size: 0x10 (Inherited: 0x00)
struct FOnSpellHitInfo {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.SplineSceneRig
// Size: 0x60 (Inherited: 0x00)
struct FSplineSceneRig {
	struct ASceneRigActor* MainParallelSceneRigActor; // 0x00(0x08)
	struct ASceneRigActor* InterruptParallelSceneRigActor; // 0x08(0x08)
	struct ASceneRigActor* ResumeParallelSceneRigActor; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform LocalTransform; // 0x20(0x30)
	char pad_50[0x10]; // 0x50(0x10)
};

// ScriptStruct Phoenix.Swarmer
// Size: 0x28 (Inherited: 0x00)
struct FSwarmer {
	struct UStaticMeshComponent* Mesh; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct Phoenix.SpringFollowComponentSettings
// Size: 0x24 (Inherited: 0x00)
struct FSpringFollowComponentSettings {
	float AttachedMass; // 0x00(0x04)
	float RadialConstraintMeters; // 0x04(0x04)
	float RadialMinimumtMeters; // 0x08(0x04)
	float SpringK; // 0x0c(0x04)
	float SpringB; // 0x10(0x04)
	float Damping; // 0x14(0x04)
	float RadialDamping; // 0x18(0x04)
	float GravityFactor; // 0x1c(0x04)
	float SwirlForce; // 0x20(0x04)
};

// ScriptStruct Phoenix.StationValidationError
// Size: 0x20 (Inherited: 0x00)
struct FStationValidationError {
	struct FString ShortMessage; // 0x00(0x10)
	struct FString LongMessage; // 0x10(0x10)
};

// ScriptStruct Phoenix.CachedStation
// Size: 0x68 (Inherited: 0x00)
struct FCachedStation {
	struct FVector Location; // 0x00(0x0c)
	struct FName ParentLocation; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FName, struct FCachedStationPath> PathsToOtherLocations; // 0x18(0x50)
};

// ScriptStruct Phoenix.CachedStationPath
// Size: 0x18 (Inherited: 0x00)
struct FCachedStationPath {
	struct TArray<struct FVector> PathPoints; // 0x00(0x10)
	float PathLength; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.StationStoryAnimationContent
// Size: 0x18 (Inherited: 0x00)
struct FStationStoryAnimationContent {
	struct TArray<struct UAnimSequenceBase*> Animation; // 0x00(0x10)
	float weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Phoenix.StoryEAVandAMB
// Size: 0xa0 (Inherited: 0x00)
struct FStoryEAVandAMB {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Phoenix.StoryEAVandAMBParticipant
// Size: 0x28 (Inherited: 0x00)
struct FStoryEAVandAMBParticipant {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Phoenix.StoryGraph_Conversation_CameraFilter
// Size: 0x28 (Inherited: 0x00)
struct FStoryGraph_Conversation_CameraFilter {
	enum class EConversationCameraFilterType ConversationCameraFilterType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UNameProvider*> EnableCameraNames; // 0x08(0x10)
	struct TArray<struct UNameProvider*> DisableCameraNames; // 0x18(0x10)
};

// ScriptStruct Phoenix.StreamingPlaceholderLockState
// Size: 0xb0 (Inherited: 0x00)
struct FStreamingPlaceholderLockState {
	struct FDbSingleColumnInfo Lock; // 0x00(0x88)
	struct TSoftClassPtr<UObject> Actor; // 0x88(0x28)
};

// ScriptStruct Phoenix.StupidShaderSpecialType
// Size: 0x01 (Inherited: 0x00)
struct FStupidShaderSpecialType {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.StupidShaderGroup
// Size: 0x01 (Inherited: 0x00)
struct FStupidShaderGroup {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.StupidShaderEntry
// Size: 0xb0 (Inherited: 0x00)
struct FStupidShaderEntry {
	struct FName Source; // 0x00(0x08)
	struct FName Platform; // 0x08(0x08)
	struct FName Output; // 0x10(0x08)
	struct FString Type; // 0x18(0x10)
	struct FString Permutation; // 0x28(0x10)
	struct FName Group; // 0x38(0x08)
	struct FName SpecialType; // 0x40(0x08)
	struct FName OutputHash; // 0x48(0x08)
	struct TMap<struct FName, struct FName> OPTIONS; // 0x50(0x50)
	struct FName NiagaraContainer; // 0xa0(0x08)
	bool bResolveNiagaraSource; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct Phoenix.AwareStateInfo
// Size: 0x08 (Inherited: 0x00)
struct FAwareStateInfo {
	enum class ENPC_TargetAwareState AwareState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AlertPercent; // 0x04(0x04)
};

// ScriptStruct Phoenix.TesselatedPlaneParams
// Size: 0x2c (Inherited: 0x00)
struct FTesselatedPlaneParams {
	float XSize; // 0x00(0x04)
	float YSize; // 0x04(0x04)
	float VertSpacing; // 0x08(0x04)
	float DefaultZ; // 0x0c(0x04)
	float UVTiling; // 0x10(0x04)
	bool bUseUVs; // 0x14(0x01)
	bool bHasCollision; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FLinearColor VertexColor; // 0x18(0x10)
	bool bUseVertexColors; // 0x28(0x01)
	bool bCreateNormals; // 0x29(0x01)
	bool bCreateTangents; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
};

// ScriptStruct Phoenix.ProceduralGeometry
// Size: 0x68 (Inherited: 0x00)
struct FProceduralGeometry {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct Phoenix.TextureUtilEdgetableTup
// Size: 0x2ee4 (Inherited: 0x00)
struct FTextureUtilEdgetableTup {
	char pad_0[0x2ee4]; // 0x00(0x2ee4)
};

// ScriptStruct Phoenix.TextureUtilBucket
// Size: 0x0c (Inherited: 0x00)
struct FTextureUtilBucket {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Phoenix.SocapAmendInfo
// Size: 0x30 (Inherited: 0x00)
struct FSocapAmendInfo {
	struct AActor* MyActor; // 0x00(0x08)
	struct FString MyActorName; // 0x08(0x10)
	struct FName MyActorSubtype; // 0x18(0x08)
	int32_t Delta; // 0x20(0x04)
	enum class SocialActionTypes Action; // 0x24(0x01)
	enum class SocialCapitalChangeReasons Reason; // 0x25(0x01)
	enum class SocialSemanticIDs Semantic; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	int32_t StatusNameHint; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Phoenix.SocialActionInfo
// Size: 0x28 (Inherited: 0x00)
struct FSocialActionInfo {
	struct FName ActionName; // 0x00(0x08)
	float ActionTime; // 0x08(0x04)
	struct FName ActionData; // 0x0c(0x08)
	struct FName ObserverType; // 0x14(0x08)
	struct FName SocialSemantic; // 0x1c(0x08)
	int32_t SocialActionDynamicRowID; // 0x24(0x04)
};

// ScriptStruct Phoenix.SocialConversationData
// Size: 0x18 (Inherited: 0x00)
struct FSocialConversationData {
	struct FName ConversationLine; // 0x00(0x08)
	struct FName ConversationType; // 0x08(0x08)
	struct FName DisplayStatus; // 0x10(0x08)
};

// ScriptStruct Phoenix.HerbStaticMeshMapStruct
// Size: 0x30 (Inherited: 0x08)
struct FHerbStaticMeshMapStruct : FTableRowBase {
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x08(0x28)
};

// ScriptStruct Phoenix.AddedInstanceInfo
// Size: 0x68 (Inherited: 0x00)
struct FAddedInstanceInfo {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct Phoenix.CategoryLocations
// Size: 0x30 (Inherited: 0x00)
struct FCategoryLocations {
	char pad_0[0x14]; // 0x00(0x14)
	struct FRandomStream Randomizer; // 0x14(0x08)
	char pad_1C[0x14]; // 0x1c(0x14)
};

// ScriptStruct Phoenix.ISMIndices
// Size: 0x28 (Inherited: 0x00)
struct FISMIndices {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Phoenix.SpawnActorData
// Size: 0x50 (Inherited: 0x00)
struct FSpawnActorData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Phoenix.FadingState
// Size: 0x08 (Inherited: 0x00)
struct FFadingState {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.TrainNavRenderSplines
// Size: 0x30 (Inherited: 0x00)
struct FTrainNavRenderSplines {
	struct TSoftObjectPtr<AActor> RenderSpline; // 0x00(0x28)
	enum class ETrainSplineDirection Directon; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Phoenix.TransfigurationAutomation
// Size: 0x01 (Inherited: 0x00)
struct FTransfigurationAutomation {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Phoenix.CachedColovariaComponentInfo
// Size: 0x10 (Inherited: 0x00)
struct FCachedColovariaComponentInfo {
	struct FName ActorComponentName; // 0x00(0x08)
	struct UPrimitiveComponent* PrimitiveComponent; // 0x08(0x08)
};

// ScriptStruct Phoenix.CachedColovariaMaterialArray
// Size: 0x10 (Inherited: 0x00)
struct FCachedColovariaMaterialArray {
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x00(0x10)
};

// ScriptStruct Phoenix.TransfigSlotPoolExpansion
// Size: 0x14 (Inherited: 0x00)
struct FTransfigSlotPoolExpansion {
	struct FName LockId; // 0x00(0x08)
	struct FName SlotID; // 0x08(0x08)
	int32_t SlotAmount; // 0x10(0x04)
};

// ScriptStruct Phoenix.TransfigSlotPool
// Size: 0x68 (Inherited: 0x00)
struct FTransfigSlotPool {
	struct FName SlotID; // 0x00(0x08)
	int32_t BaseSlots; // 0x08(0x04)
	int32_t MaximumSlots; // 0x0c(0x04)
	int32_t SlotsUnlocked; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<enum class EConjurationContext, int32_t> SlotsOccupied; // 0x18(0x50)
};

// ScriptStruct Phoenix.ConjurationBudget
// Size: 0x0c (Inherited: 0x00)
struct FConjurationBudget {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Phoenix.TransfigurationMovementStyleTableRow
// Size: 0x30 (Inherited: 0x08)
struct FTransfigurationMovementStyleTableRow : FTableRowBase {
	struct TSoftClassPtr<UObject> EffectClass; // 0x08(0x28)
};

// ScriptStruct Phoenix.LockableTransfigurationItem
// Size: 0x70 (Inherited: 0x00)
struct FLockableTransfigurationItem {
	struct FName ItemName; // 0x00(0x08)
	bool bIsUnlocked; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FTransfigurationUnlockSource UnlockSource; // 0x10(0x50)
	bool bHasTransformationOptions; // 0x60(0x01)
	bool bHasColorOptions; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	int32_t SortingIndex; // 0x64(0x04)
	bool bIsPrefab; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Phoenix.TransfigurationUnlockSource
// Size: 0x50 (Inherited: 0x00)
struct FTransfigurationUnlockSource {
	enum class ETransfigurationUnlockType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName VendorID; // 0x04(0x08)
	struct FName VendorLocationID; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MissionTitleTextKey; // 0x18(0x10)
	struct FText ChallengeTitleText; // 0x28(0x18)
	enum class EDisciplineType Discipline; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t CurriculumYear; // 0x44(0x04)
	struct FName ProductID; // 0x48(0x08)
};

// ScriptStruct Phoenix.DBLocationReference
// Size: 0x10 (Inherited: 0x00)
struct FDBLocationReference {
	struct FString LocationName; // 0x00(0x10)
};

// ScriptStruct Phoenix.TransformationStyleTableRow
// Size: 0x30 (Inherited: 0x08)
struct FTransformationStyleTableRow : FTableRowBase {
	struct TSoftClassPtr<UObject> EffectClass; // 0x08(0x28)
};

// ScriptStruct Phoenix.TransformationOverlandData
// Size: 0x108 (Inherited: 0x00)
struct FTransformationOverlandData {
	struct TArray<struct UMultiFX2_Base*> HideFX2; // 0x00(0x10)
	struct TArray<struct UMultiFX2_Base*> SpawnFX2; // 0x10(0x10)
	struct TArray<struct UMultiFX2_Base*> UnspawnFX2; // 0x20(0x10)
	struct TArray<struct UMultiFX2_Base*> RestoreFX2; // 0x30(0x10)
	struct FGameplayTagContainer RestoreMunitionTagContainer; // 0x40(0x20)
	struct UInteractionArchitectAsset* RestoreMunitionDataAsset; // 0x60(0x08)
	char pad_68[0xa0]; // 0x68(0xa0)
};

// ScriptStruct Phoenix.NewTutorialSequence
// Size: 0x78 (Inherited: 0x08)
struct FNewTutorialSequence : FTableRowBase {
	struct FName TutorialName; // 0x08(0x08)
	enum class ETutorialPersistence Persistence; // 0x10(0x01)
	bool WaitForNotificationsToClear; // 0x11(0x01)
	bool MissionBannerNotification; // 0x12(0x01)
	bool LevelUpNotification; // 0x13(0x01)
	bool MissionStepNotification; // 0x14(0x01)
	bool OwlMailNotification; // 0x15(0x01)
	bool KnowledgeNotification; // 0x16(0x01)
	bool XPNotification; // 0x17(0x01)
	bool SpellNotification; // 0x18(0x01)
	bool ConversationActive; // 0x19(0x01)
	bool ShouldKeepCheckingForExitCondition; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct TArray<struct FName> HermesMessagesOnTutorialStart; // 0x20(0x10)
	struct TArray<struct FNewTutorialInfo> TutorialSequence; // 0x30(0x10)
	struct TArray<struct FName> HermesMessagesOnTutorialCompletion; // 0x40(0x10)
	struct TArray<struct FName> KnowledgeCategories; // 0x50(0x10)
	struct TArray<struct FName> KnowledgeUnlocks; // 0x60(0x10)
	bool CanReplayTutorial; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Phoenix.NewTutorialInfo
// Size: 0x110 (Inherited: 0x00)
struct FNewTutorialInfo {
	struct FName Alias; // 0x00(0x08)
	struct FString Title; // 0x08(0x10)
	struct FString Body; // 0x18(0x10)
	struct FString BodyPC; // 0x28(0x10)
	struct TArray<struct FString> RuntimeText; // 0x38(0x10)
	bool ShouldShowCursor; // 0x48(0x01)
	bool ShouldHideCursorOnRemove; // 0x49(0x01)
	bool PlaySoundEffectOnCompletion; // 0x4a(0x01)
	bool Modal; // 0x4b(0x01)
	enum class ETutorialTransparency TransparencyType; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FString ImageName; // 0x50(0x10)
	struct TArray<struct FLegendItemData> LegendItems; // 0x60(0x10)
	bool PausesTheGame; // 0x70(0x01)
	bool ApplyBlur; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float ExpiryTimer; // 0x74(0x04)
	bool ExpiryTimerStartsAutomatically; // 0x78(0x01)
	bool ForceCompleteOnExpiry; // 0x79(0x01)
	bool AllowNonModalInput; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	float TimeDilationFactor; // 0x7c(0x04)
	struct TArray<enum class EGameplayMechanics> ExclusiveMechanics; // 0x80(0x10)
	enum class ETutorialPosition Position; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FTutorialLayoutData PositionData; // 0x94(0x10)
	float PreDelay; // 0xa4(0x04)
	float PostDelay; // 0xa8(0x04)
	struct FName WaitOnHermesMessage; // 0xac(0x08)
	enum class EUMGInputAction CompletionButton; // 0xb4(0x01)
	bool MustHoldCompletionButton; // 0xb5(0x01)
	bool VisibleOverMenu; // 0xb6(0x01)
	bool OpenPauseMenuOnComplete; // 0xb7(0x01)
	struct FName PauseMenuPage; // 0xb8(0x08)
	bool PauseMenuLockToPage; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct TArray<struct FName> HermesMessagesOnStepCompletion; // 0xc8(0x10)
	struct TArray<struct FInputContextWithType> ContextOverrides; // 0xd8(0x10)
	struct TArray<struct FName_GameLogicVarInt32> GameVarOverrides; // 0xe8(0x10)
	struct FSoftObjectPath Video; // 0xf8(0x18)
};

// ScriptStruct Phoenix.TutorialLayoutData
// Size: 0x10 (Inherited: 0x00)
struct FTutorialLayoutData {
	struct FVector2D Position; // 0x00(0x08)
	struct FVector2D Alignment; // 0x08(0x08)
};

// ScriptStruct Phoenix.TutorialSequence
// Size: 0x50 (Inherited: 0x08)
struct FTutorialSequence : FTableRowBase {
	struct FName TutorialName; // 0x08(0x08)
	struct TArray<struct FTutorialInfo> TutorialSequence; // 0x10(0x10)
	struct FString CleanupMessage; // 0x20(0x10)
	struct FString KnowledgeCategory; // 0x30(0x10)
	struct FString KnowledgeUnlock; // 0x40(0x10)
};

// ScriptStruct Phoenix.TutorialInfo
// Size: 0xa0 (Inherited: 0x00)
struct FTutorialInfo {
	struct FString Title; // 0x00(0x10)
	struct FString Body; // 0x10(0x10)
	struct FString BodyPC; // 0x20(0x10)
	struct FString ImageName; // 0x30(0x10)
	struct FString ButtonLegend; // 0x40(0x10)
	bool Modal; // 0x50(0x01)
	enum class ETutorialPosition NonModalPosition; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float DisplayTime; // 0x54(0x04)
	struct FName MonitoredAction; // 0x58(0x08)
	enum class EInputEvent PressOrRelease; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString OptInMessage; // 0x68(0x10)
	bool WaitForTaskCompleteMessage; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct FInputContextWithType> ContextOverrides; // 0x80(0x10)
	struct FString DismissalEventName; // 0x90(0x10)
};

// ScriptStruct Phoenix.TutorialLog
// Size: 0x18 (Inherited: 0x00)
struct FTutorialLog {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.MastermindTutorialInfo
// Size: 0x68 (Inherited: 0x00)
struct FMastermindTutorialInfo {
	bool bIsPlayingIntro; // 0x00(0x01)
	bool bIsPlayingOutro; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName TutorialName; // 0x04(0x08)
	struct FName TutorialStepAlias; // 0x0c(0x08)
	bool bIsModal; // 0x14(0x01)
	bool bExpectsInput; // 0x15(0x01)
	enum class EUMGInputAction CompletionButton; // 0x16(0x01)
	bool MustHoldCompletionButton; // 0x17(0x01)
	struct TMap<enum class EUMGInputAction, bool> CompletionButtons; // 0x18(0x50)
};

// ScriptStruct Phoenix.TutorialStateInfo
// Size: 0x18 (Inherited: 0x00)
struct FTutorialStateInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.TutorialAfterNotificationEntry
// Size: 0x18 (Inherited: 0x00)
struct FTutorialAfterNotificationEntry {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.ConversationOption
// Size: 0x48 (Inherited: 0x00)
struct FConversationOption {
	struct FString Text_ID; // 0x00(0x10)
	struct FString Icon_ID; // 0x10(0x10)
	int32_t MenuNode_ID; // 0x20(0x04)
	bool Disabled; // 0x24(0x01)
	enum class EAvaAudioDialogueConditionFailedLineHandling Reason_Tooltip; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct FName ReasonName; // 0x28(0x08)
	bool PreviouslyUsed; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString Conversation_ID; // 0x38(0x10)
};

// ScriptStruct Phoenix.FactSheetResult
// Size: 0x38 (Inherited: 0x00)
struct FFactSheetResult {
	struct FName RegistryId; // 0x00(0x08)
	struct FName HouseID; // 0x08(0x08)
	struct FName FlavorID; // 0x10(0x08)
	struct FName FactSheetType; // 0x18(0x08)
	enum class EKnowledgeLevel SubjectKnowledgeLevel; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float SubjectKnowledgeLevelAmount; // 0x24(0x04)
	struct TArray<struct FFactInformation> Facts; // 0x28(0x10)
};

// ScriptStruct Phoenix.FactInformation
// Size: 0x30 (Inherited: 0x00)
struct FFactInformation {
	struct FName FactName; // 0x00(0x08)
	struct FString FactType; // 0x08(0x10)
	struct FString FactCategory; // 0x18(0x10)
	bool HasFactSheet; // 0x28(0x01)
	enum class EKnowledgeLevel CurrentKnowledgeLevel; // 0x29(0x01)
	enum class EKnowledgeLevel NeededKnowledgeLevel; // 0x2a(0x01)
	bool SecretFactLocked; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Phoenix.PeopleInformation
// Size: 0x14 (Inherited: 0x00)
struct FPeopleInformation {
	struct FName PersonName; // 0x00(0x08)
	struct FName SubtypeID; // 0x08(0x08)
	enum class SocialSemanticIDs HouseID; // 0x10(0x01)
	enum class SocialCapitalStatusIDs SocialCap; // 0x11(0x01)
	enum class EKnowledgeLevel CurrentKnowledgeLevel; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
};

// ScriptStruct Phoenix.AccessibilityAudioCueIconTable
// Size: 0x68 (Inherited: 0x08)
struct FAccessibilityAudioCueIconTable : FTableRowBase {
	struct FName CueName; // 0x08(0x08)
	struct FName IconName; // 0x10(0x08)
	float LifeTime; // 0x18(0x04)
	bool ShouldFade; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float FadeTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FDataTableRowHandle Colour; // 0x28(0x10)
	float Scale; // 0x38(0x04)
	bool ShouldRotate; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float DefaultRotation; // 0x40(0x04)
	int32_t MaxInstances; // 0x44(0x04)
	int32_t MaxVisibleInstances; // 0x48(0x04)
	int32_t MaxInstancesPerActor; // 0x4c(0x04)
	int32_t Priority; // 0x50(0x04)
	float Range; // 0x54(0x04)
	float ClampDistance; // 0x58(0x04)
	char pad_5C[0xc]; // 0x5c(0x0c)
};

// ScriptStruct Phoenix.AccessibilityAudioCueData
// Size: 0x08 (Inherited: 0x00)
struct FAccessibilityAudioCueData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Phoenix.AccessibilityAudioCueEventPacket
// Size: 0x10 (Inherited: 0x00)
struct FAccessibilityAudioCueEventPacket {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Phoenix.AccessibilityAudioCueEvent
// Size: 0x30 (Inherited: 0x00)
struct FAccessibilityAudioCueEvent {
	struct TArray<struct FMapIconEntry> Icons; // 0x00(0x10)
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct Phoenix.MyGenericSQLResultMap
// Size: 0x50 (Inherited: 0x00)
struct FMyGenericSQLResultMap {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Phoenix.UIColorDataTable
// Size: 0x88 (Inherited: 0x08)
struct FUIColorDataTable : FTableRowBase {
	struct FLinearColor NormalVision; // 0x08(0x10)
	struct FLinearColor Protanopia; // 0x18(0x10)
	struct FLinearColor Deuteranopia; // 0x28(0x10)
	struct FLinearColor Tritanopia; // 0x38(0x10)
	char pad_48[0x40]; // 0x48(0x40)
};

// ScriptStruct Phoenix.MenuReaderVoice
// Size: 0x30 (Inherited: 0x00)
struct FMenuReaderVoice {
	struct FString VoiceID; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct FString Gender; // 0x20(0x10)
};

// ScriptStruct Phoenix.UIHUDElementLog
// Size: 0x30 (Inherited: 0x00)
struct FUIHUDElementLog {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Phoenix.UIMenuTransitionLog
// Size: 0x20 (Inherited: 0x00)
struct FUIMenuTransitionLog {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Phoenix.UIFieldGuideShutdownLog
// Size: 0x28 (Inherited: 0x00)
struct FUIFieldGuideShutdownLog {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Phoenix.NewItem
// Size: 0x18 (Inherited: 0x00)
struct FNewItem {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Phoenix.WidgetType
// Size: 0x10 (Inherited: 0x08)
struct FWidgetType : FTableRowBase {
	struct UUserWidget* Widget; // 0x08(0x08)
};

// ScriptStruct Phoenix.OnlineOfferStruct
// Size: 0xc0 (Inherited: 0x00)
struct FOnlineOfferStruct {
	struct FString OfferId; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText LongDescription; // 0x40(0x18)
	struct FText RegularPriceText; // 0x58(0x18)
	int32_t RegularPrice; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FText PriceText; // 0x78(0x18)
	int32_t NumericPrice; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString CurrencyCode; // 0x98(0x10)
	struct FDateTime ReleaseDate; // 0xa8(0x08)
	struct FDateTime ExpirationDate; // 0xb0(0x08)
	char DiscountType; // 0xb8(0x01)
	bool Purchasable; // 0xb9(0x01)
	bool Owned; // 0xba(0x01)
	char pad_BB[0x5]; // 0xbb(0x05)
};

// ScriptStruct Phoenix.VanishmentStyleTableRow
// Size: 0x30 (Inherited: 0x08)
struct FVanishmentStyleTableRow : FTableRowBase {
	struct TSoftClassPtr<UObject> EffectClass; // 0x08(0x28)
};

// ScriptStruct Phoenix.VanishmentEvent
// Size: 0x20 (Inherited: 0x00)
struct FVanishmentEvent {
	struct FName SurfaceTag; // 0x00(0x08)
	enum class EVanishmentEventType EventType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float DesiredDurationSeconds; // 0x0c(0x04)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Phoenix.VegetationInteractionSettings
// Size: 0x24 (Inherited: 0x00)
struct FVegetationInteractionSettings {
	struct FVector Offset; // 0x00(0x0c)
	float InnerRadius; // 0x0c(0x04)
	float OuterRadius; // 0x10(0x04)
	float ForceScalingMultiplierMin; // 0x14(0x04)
	float ForceScalingMultiplierMax; // 0x18(0x04)
	float MaxAngleMultiplierMin; // 0x1c(0x04)
	float MaxAngleMultiplierMax; // 0x20(0x04)
};

// ScriptStruct Phoenix.VegetationInteractionSpringMassTracker
// Size: 0x08 (Inherited: 0x00)
struct FVegetationInteractionSpringMassTracker {
	float SpringMass; // 0x00(0x04)
	float SpringMassVelocity; // 0x04(0x04)
};

// ScriptStruct Phoenix.VegetationInteractionSpringMassSettings
// Size: 0x18 (Inherited: 0x00)
struct FVegetationInteractionSpringMassSettings {
	float MaxVelocityMS; // 0x00(0x04)
	float RotationalVelocityDegreesSec; // 0x04(0x04)
	float FirstOrderDamping; // 0x08(0x04)
	float SecondOrderDamping; // 0x0c(0x04)
	float SecondOrderNaturalFrequency; // 0x10(0x04)
	float SecondOrderStrength; // 0x14(0x04)
};

// ScriptStruct Phoenix.VegetationInteractionVelocityTracker
// Size: 0x30 (Inherited: 0x00)
struct FVegetationInteractionVelocityTracker {
	struct FVector VelocityDirection; // 0x00(0x0c)
	float Speed; // 0x0c(0x04)
	float AngularVelocity; // 0x10(0x04)
	struct FVector LastPosition; // 0x14(0x0c)
	struct FVector LastForward; // 0x20(0x0c)
	bool bInitialized; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Phoenix.VegetationInteractionSource
// Size: 0x90 (Inherited: 0x00)
struct FVegetationInteractionSource {
	float Priority; // 0x00(0x04)
	struct FBoxSphereBounds Bounds; // 0x04(0x1c)
	struct FVector WorldPosition; // 0x20(0x0c)
	float InnerRadius; // 0x2c(0x04)
	float OuterRadius; // 0x30(0x04)
	float ForceScalingMultiplier; // 0x34(0x04)
	float MaxAngleMultiplier; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FVegetationInteractionCameraFade CameraFade; // 0x40(0x38)
	struct FVector CameraFadeTarget; // 0x78(0x0c)
	float CameraFadeBaseZ; // 0x84(0x04)
	float CameraDistanceSquared; // 0x88(0x04)
	bool bOnCamera; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// ScriptStruct Phoenix.VegetationInteractionCameraFade
// Size: 0x38 (Inherited: 0x00)
struct FVegetationInteractionCameraFade {
	char pad_0[0x8]; // 0x00(0x08)
	float CapsuleInnerRadiusAtCamera; // 0x08(0x04)
	float CapsuleOuterRadiusAtCamera; // 0x0c(0x04)
	float CapsuleInnerRadiusAtTarget; // 0x10(0x04)
	float CapsuleOuterRadiusAtTarget; // 0x14(0x04)
	float FadeFalloffPower; // 0x18(0x04)
	float AspectRatio; // 0x1c(0x04)
	float Strength; // 0x20(0x04)
	float MinimumVegetationHeight; // 0x24(0x04)
	float PlayerZOffset; // 0x28(0x04)
	float TargetZOffset; // 0x2c(0x04)
	float TargetRelativeDistanceMeters; // 0x30(0x04)
	float PlayerTargetLerp; // 0x34(0x04)
};

// ScriptStruct Phoenix.VendorBroomPreviewActor
// Size: 0x30 (Inherited: 0x08)
struct FVendorBroomPreviewActor : FTableRowBase {
	struct TSoftClassPtr<UObject> BroomPreviewClass; // 0x08(0x28)
};

// ScriptStruct Phoenix.UnavailableIconInfo
// Size: 0x18 (Inherited: 0x00)
struct FUnavailableIconInfo {
	struct FName IconAssetName; // 0x00(0x08)
	struct FName LockId; // 0x08(0x08)
	struct FName DescTextKey; // 0x10(0x08)
};

// ScriptStruct Phoenix.VendorInfo
// Size: 0x10 (Inherited: 0x00)
struct FVendorInfo {
	struct FName VendorID; // 0x00(0x08)
	struct FName VendorLocationID; // 0x08(0x08)
};

// ScriptStruct Phoenix.StockPick
// Size: 0x20 (Inherited: 0x00)
struct FStockPick {
	struct FString ContainerID; // 0x00(0x10)
	int32_t LowWeight; // 0x10(0x04)
	int32_t HighWeight; // 0x14(0x04)
	int32_t BaseWeight; // 0x18(0x04)
	int32_t MinItems; // 0x1c(0x04)
};

// ScriptStruct Phoenix.StockSlot
// Size: 0x28 (Inherited: 0x00)
struct FStockSlot {
	struct FString ID; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Quality; // 0x18(0x10)
};

// ScriptStruct Phoenix.SimpleMonitorInformation
// Size: 0x28 (Inherited: 0x00)
struct FSimpleMonitorInformation {
	struct FString MonitorName; // 0x00(0x10)
	int32_t MonitorIndex; // 0x10(0x04)
	bool bIsPrimary; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t NativeWidth; // 0x18(0x04)
	int32_t NativeHeight; // 0x1c(0x04)
	struct FVector2D VirtualPosition; // 0x20(0x08)
};

// ScriptStruct Phoenix.GraphicsAdapterDesc
// Size: 0x18 (Inherited: 0x00)
struct FGraphicsAdapterDesc {
	struct FString Name; // 0x00(0x10)
	int32_t LUIDLow; // 0x10(0x04)
	int32_t LUIDHigh; // 0x14(0x04)
};

// ScriptStruct Phoenix.WandLinkUIMiniGame_ButtonMashDifficultyLevels
// Size: 0x18 (Inherited: 0x00)
struct FWandLinkUIMiniGame_ButtonMashDifficultyLevels {
	float AntagonistAttackSpeed; // 0x00(0x04)
	float AntagonistStartingSurgeToPct; // 0x04(0x04)
	float ProtagonistMashInterpToSpeed; // 0x08(0x04)
	float ProtagonistNoMashInterpToZero; // 0x0c(0x04)
	float ProtagonistAttackSpeed; // 0x10(0x04)
	float ProtagonistWinConditionPct; // 0x14(0x04)
};

// ScriptStruct Phoenix.OverlapActorSortEntry
// Size: 0x28 (Inherited: 0x00)
struct FOverlapActorSortEntry {
	struct AActor* OverlapActor; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct Phoenix.WandLinkStage
// Size: 0x08 (Inherited: 0x00)
struct FWandLinkStage {
	struct UWandLinkUIMiniGame* WandLinkUIMiniGame; // 0x00(0x08)
};

// ScriptStruct Phoenix.WetMaterial
// Size: 0x10 (Inherited: 0x00)
struct FWetMaterial {
	struct TWeakObjectPtr<struct UMaterialInstanceDynamic> MaterialInstanceDynamic; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Phoenix.WingardiumRestoreData
// Size: 0x14 (Inherited: 0x00)
struct FWingardiumRestoreData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Phoenix.SocketPreview
// Size: 0x20 (Inherited: 0x00)
struct FSocketPreview {
	struct FGameplayTag SocketDescriptorTag; // 0x00(0x08)
	struct FSoftObjectPath PreviewActor; // 0x08(0x18)
};

// ScriptStruct Phoenix.SplinePointEvents
// Size: 0x18 (Inherited: 0x00)
struct FSplinePointEvents {
	int32_t SplinePointIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> Events; // 0x08(0x10)
};

