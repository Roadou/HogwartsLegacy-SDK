// Enum UtilitiesRuntime.EFacialEmotion
enum class EFacialEmotion : uint8 {
	NONE = 0,
	ALARM = 1,
	AMUSEMENT = 2,
	ANGRY = 3,
	ANGUISH = 4,
	ANNOYANCE = 5,
	ANTICIPATION = 6,
	ANXIETY = 7,
	CONFUSED = 8,
	DELIGHT = 9,
	DISGUST = 10,
	FEAR = 11,
	HAPPY = 12,
	IMPRESSED = 13,
	NEUTRAL = 14,
	PACIFY = 15,
	SAD = 16,
	SICK = 17,
	SLEEP = 18,
	SURPRISE = 19,
	TRUST = 20,
	VALOR = 21,
	MAX = 22
};

// Enum UtilitiesRuntime.EStandardManagedPriority
enum class EStandardManagedPriority : uint8 {
	Lowest = 0,
	AblAbility = 1,
	NPC = 2,
	Teleport = 3,
	PassiveCinematic = 4,
	ActiveCinematic = 5,
	Highest = 6,
	Debug = 7,
	EStandardManagedPriority_MAX = 8
};

// Enum UtilitiesRuntime.ECustomInterpType
enum class ECustomInterpType : uint8 {
	None = 0,
	Constant = 1,
	Interp = 2,
	EaseIn = 3,
	EaseOut = 4,
	EaseInOut = 5,
	ECustomInterpType_MAX = 6
};

// Enum UtilitiesRuntime.EIsPlayer
enum class EIsPlayer : uint8 {
	IsPlayer = 0,
	IsNotPlayer = 1,
	EIsPlayer_MAX = 2
};

// Enum UtilitiesRuntime.ETwoBranches
enum class ETwoBranches : uint8 {
	EQUAL = 0,
	NOTEQUAL = 1,
	ETwoBranches_MAX = 2
};

// Enum UtilitiesRuntime.EManagedPriority
enum class EManagedPriority : uint8 {
	Lowest = 0,
	System = 1,
	AmbientBehavior = 2,
	DynamicBehavior = 3,
	BackgroundCinematic = 4,
	ForegroundCinematic = 5,
	Highest = 6,
	EManagedPriority_MAX = 7
};

// Enum UtilitiesRuntime.EManagedFacialEmotionPriority
enum class EManagedFacialEmotionPriority : uint8 {
	AMBIENT = 0,
	MISSION = 1,
	MECHANIC = 2,
	ABLE = 3,
	ANIM = 4,
	SCENERIG_AMBIENT = 5,
	SCENERIG = 6,
	DIALOG = 7,
	EManagedFacialEmotionPriority_MAX = 8
};

// Enum UtilitiesRuntime.EManagedMovementModePriority
enum class EManagedMovementModePriority : uint8 {
	Lowest = 0,
	PassiveCinematic = 1,
	ActiveCinematic = 2,
	Highest = 3,
	EManagedMovementModePriority_MAX = 4
};

// Enum UtilitiesRuntime.EManagedVisibilityPriority
enum class EManagedVisibilityPriority : uint8 {
	Lowest = 0,
	NpcShutdown = 1,
	SceneRigDefault = 2,
	PersistentVisibility = 3,
	SeatFillerStartup = 4,
	AsyncSpawn = 5,
	OutOfView = 6,
	InViewVisibility = 7,
	HideTrigger = 8,
	VisibilityTimeWindow = 9,
	ForceHidden = 10,
	WanderAndHide = 11,
	HighestSystem = 12,
	PassiveCinematic = 13,
	ActiveCinematic = 14,
	Highest = 15,
	HardDestroyPriority = 16,
	EManagedVisibilityPriority_MAX = 17
};

// Enum UtilitiesRuntime.EFootPlantEnum
enum class EFootPlantEnum : uint8 {
	FOOTPLANT_NONE = 0,
	FOOTPLANT_LEFT = 1,
	FOOTPLANT_RIGHT = 2,
	FOOTPLANT_BOTH = 3,
	FOOTPLANT_UNAVAILABLE = 4,
	FOOTPLANT_MAX = 5
};

// ScriptStruct UtilitiesRuntime.CurtainStageOptions
// Size: 0x04 (Inherited: 0x00)
struct FCurtainStageOptions {
	char Spinner : 1; // 0x00(0x01)
	char LoadingText : 1; // 0x00(0x01)
	char StaticImage : 1; // 0x00(0x01)
	char Tips : 1; // 0x00(0x01)
	char ProgressBar : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct UtilitiesRuntime.GeneratedHandle
// Size: 0x04 (Inherited: 0x00)
struct FGeneratedHandle {
	int32_t Handle; // 0x00(0x04)
};

// ScriptStruct UtilitiesRuntime.VariantMapHandle
// Size: 0x04 (Inherited: 0x04)
struct FVariantMapHandle : FGeneratedHandle {
};

// ScriptStruct UtilitiesRuntime.WorldObjectReference
// Size: 0x20 (Inherited: 0x00)
struct FWorldObjectReference {
	struct FString ObjectReferenceString_NoMarkup; // 0x00(0x10)
	struct TWeakObjectPtr<struct UObject> CachedObjectPtr; // 0x10(0x08)
	struct TWeakObjectPtr<struct UWorld> CachedForWorld; // 0x18(0x08)
};

// ScriptStruct UtilitiesRuntime.WorldActorReference
// Size: 0x20 (Inherited: 0x20)
struct FWorldActorReference : FWorldObjectReference {
};

// ScriptStruct UtilitiesRuntime.IconInfo
// Size: 0x90 (Inherited: 0x08)
struct FIconInfo : FTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x08(0x28)
	bool Locked; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float HAngle; // 0x34(0x04)
	float VAngle; // 0x38(0x04)
	float FieldOfView; // 0x3c(0x04)
	float Padding; // 0x40(0x04)
	float LightHAngle; // 0x44(0x04)
	float LightVAngle; // 0x48(0x04)
	struct FVector CameraOffset; // 0x4c(0x0c)
	struct TSoftObjectPtr<UAnimSequence> AnimSequence; // 0x58(0x28)
	float AnimPercent; // 0x80(0x04)
	struct FName CopyIconInfoRowName; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct UtilitiesRuntime.LandscapeRoadData
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeRoadData {
	struct TArray<struct FLandscapePointData> RoadPoints; // 0x00(0x10)
};

// ScriptStruct UtilitiesRuntime.LandscapePointData
// Size: 0x30 (Inherited: 0x00)
struct FLandscapePointData {
	struct FVector PointLocation; // 0x00(0x0c)
	struct FVector TangentLocation; // 0x0c(0x0c)
	float Width; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FName> Tags; // 0x20(0x10)
};

// ScriptStruct UtilitiesRuntime.CurtainStageEntry
// Size: 0x10 (Inherited: 0x00)
struct FCurtainStageEntry {
	double EnableAtTime; // 0x00(0x08)
	struct FCurtainStageOptions StageOptions; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct UtilitiesRuntime.Phase
// Size: 0x04 (Inherited: 0x00)
struct FPhase {
	float PhaseValue; // 0x00(0x04)
};

// ScriptStruct UtilitiesRuntime.WordRow
// Size: 0x20 (Inherited: 0x08)
struct FWordRow : FTableRowBase {
	struct FString Locale; // 0x08(0x10)
	bool bAlwaysCheck; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

