// Enum AnimationArchitectRuntime.TagsChangedEvent
enum class TagsChangedEvent : uint8 {
	TagAdded = 0,
	TagRemoved = 1,
	TagsChangedEvent_MAX = 2
};

// Enum AnimationArchitectRuntime.EInteractionProject
enum class EInteractionProject : uint8 {
	Reactions = 0,
	Creatures = 1,
	NPC = 2,
	EInteractionProject_MAX = 3
};

// Enum AnimationArchitectRuntime.ArchitectType
enum class ArchitectType : uint8 {
	ANIMATION_ARCHITECT = 0,
	INTERACTION_ARCHITECT = 1,
	SOUND_ARCHITECT = 2,
	STATION_ARCHITECT = 3,
	OBJECT_ARCHITECT = 4,
	ArchitectType_MAX = 5
};

// Enum AnimationArchitectRuntime.EAsyncLoadAnimationState
enum class EAsyncLoadAnimationState : uint8 {
	NOT_REQUESTED = 0,
	REQUEST_IN_PROGRESS = 1,
	REQUEST_COMPLETED = 2,
	EAsyncLoadAnimationState_MAX = 3
};

// ScriptStruct AnimationArchitectRuntime.BaseArchitectAsset_Connection
// Size: 0x01 (Inherited: 0x00)
struct FBaseArchitectAsset_Connection {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AnimationArchitectRuntime.AnimationArchitectAsset_Connection
// Size: 0x30 (Inherited: 0x01)
struct FAnimationArchitectAsset_Connection : FBaseArchitectAsset_Connection {
	struct FGameplayTagContainer GameplayTags; // 0x00(0x20)
	struct TArray<struct FAnimationArchitectAsset_AssetProxy> AssetProxies; // 0x20(0x10)
};

// ScriptStruct AnimationArchitectRuntime.BaseArchitectAsset_AssetProxy
// Size: 0x10 (Inherited: 0x00)
struct FBaseArchitectAsset_AssetProxy {
	struct FName AssetName; // 0x00(0x08)
	struct FName ExternalName; // 0x08(0x08)
};

// ScriptStruct AnimationArchitectRuntime.AnimationArchitectAsset_AssetProxy
// Size: 0x20 (Inherited: 0x10)
struct FAnimationArchitectAsset_AssetProxy : FBaseArchitectAsset_AssetProxy {
	struct UAnimationAsset* AnimationAsset; // 0x10(0x08)
	float Probability; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AnimationArchitectRuntime.BaseArchitectCandidate
// Size: 0x18 (Inherited: 0x00)
struct FBaseArchitectCandidate {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct AnimationArchitectRuntime.BaseArchitectAsset_SoftDependencyContainer
// Size: 0x18 (Inherited: 0x00)
struct FBaseArchitectAsset_SoftDependencyContainer {
	struct FName Category; // 0x00(0x08)
	struct TArray<struct FName> AssetNames; // 0x08(0x10)
};

// ScriptStruct AnimationArchitectRuntime.BaseArchitectMonolithicAsset_DefaultKeyOrder
// Size: 0x10 (Inherited: 0x00)
struct FBaseArchitectMonolithicAsset_DefaultKeyOrder {
	struct TArray<struct FGameplayTag> DefaultKeyOrder; // 0x00(0x10)
};

// ScriptStruct AnimationArchitectRuntime.BaseArchitectMonolithicAsset_Class
// Size: 0x20 (Inherited: 0x00)
struct FBaseArchitectMonolithicAsset_Class {
	struct TArray<struct FName> Categories; // 0x00(0x10)
	struct TArray<struct FBaseArchitectMonolithicAsset_Connection> ConnectionArray; // 0x10(0x10)
};

// ScriptStruct AnimationArchitectRuntime.BaseArchitectMonolithicAsset_Connection
// Size: 0x30 (Inherited: 0x01)
struct FBaseArchitectMonolithicAsset_Connection : FBaseArchitectAsset_Connection {
	struct FGameplayTagContainer GameplayTags; // 0x00(0x20)
	struct TArray<struct FBaseArchitectMonolithicAsset_AssetProxy> AssetProxies; // 0x20(0x10)
};

// ScriptStruct AnimationArchitectRuntime.BaseArchitectMonolithicAsset_AssetProxy
// Size: 0x0c (Inherited: 0x00)
struct FBaseArchitectMonolithicAsset_AssetProxy {
	struct FName AssetName; // 0x00(0x08)
	float Probability; // 0x08(0x04)
};

// ScriptStruct AnimationArchitectRuntime.BaseArchitectTransition
// Size: 0x10 (Inherited: 0x00)
struct FBaseArchitectTransition {
	struct TWeakObjectPtr<struct UBaseArchitectState> EndState; // 0x00(0x08)
	struct UAnimationAsset* TransitionAnim; // 0x08(0x08)
};

// ScriptStruct AnimationArchitectRuntime.InteractionArchitectAsset_Connection
// Size: 0x28 (Inherited: 0x01)
struct FInteractionArchitectAsset_Connection : FBaseArchitectAsset_Connection {
	struct TArray<struct FInteractionArchitectAsset_KeyValueGroup> KeyValueGroups; // 0x00(0x10)
	struct TArray<struct FInteractionArchitectAsset_AssetProxy> AssetProxies; // 0x10(0x10)
	bool bIsAdditive; // 0x20(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct AnimationArchitectRuntime.InteractionArchitectAsset_AssetProxy
// Size: 0x20 (Inherited: 0x10)
struct FInteractionArchitectAsset_AssetProxy : FBaseArchitectAsset_AssetProxy {
	struct UObject* GeneratedClass; // 0x10(0x08)
	float Probability; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AnimationArchitectRuntime.InteractionArchitectAsset_KeyValueGroup
// Size: 0x28 (Inherited: 0x00)
struct FInteractionArchitectAsset_KeyValueGroup {
	struct UBaseArchitectAsset* Asset; // 0x00(0x08)
	struct FGameplayTagContainer GameplayTags; // 0x08(0x20)
};

// ScriptStruct AnimationArchitectRuntime.ObjectArchitectAsset_Connection
// Size: 0x30 (Inherited: 0x01)
struct FObjectArchitectAsset_Connection : FBaseArchitectAsset_Connection {
	struct FGameplayTagContainer GameplayTags; // 0x00(0x20)
	struct TArray<struct FObjectArchitectAsset_AssetProxy> AssetProxies; // 0x20(0x10)
};

// ScriptStruct AnimationArchitectRuntime.ObjectArchitectAsset_AssetProxy
// Size: 0x20 (Inherited: 0x10)
struct FObjectArchitectAsset_AssetProxy : FBaseArchitectAsset_AssetProxy {
	struct UObject* ObjectAsset; // 0x10(0x08)
	float Probability; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AnimationArchitectRuntime.PreloadArchitectHUDStyle
// Size: 0x11b0 (Inherited: 0x08)
struct FPreloadArchitectHUDStyle : FSlateWidgetStyle {
	struct FTextBlockStyle WorldTextStyle; // 0x08(0x270)
	struct FTextBlockStyle LevelTextStyle; // 0x278(0x270)
	struct FTextBlockStyle LoadedAssetTextStyle; // 0x4e8(0x270)
	struct FTextBlockStyle LoadingAssetTextStyle; // 0x758(0x270)
	struct FTableRowStyle TreeRowStyle; // 0x9c8(0x7c8)
	struct FMargin HUDMargin; // 0x1190(0x10)
	struct FMargin TreeMargin; // 0x11a0(0x10)
};

// ScriptStruct AnimationArchitectRuntime.PreLoadAssetArchitectAsset_Connection
// Size: 0x30 (Inherited: 0x01)
struct FPreLoadAssetArchitectAsset_Connection : FBaseArchitectAsset_Connection {
	struct FGameplayTagContainer GameplayTags; // 0x00(0x20)
	struct TArray<struct FPreLoadAssetArchitectAsset_AssetProxy> AssetProxies; // 0x20(0x10)
};

// ScriptStruct AnimationArchitectRuntime.PreLoadAssetArchitectAsset_AssetProxy
// Size: 0x20 (Inherited: 0x10)
struct FPreLoadAssetArchitectAsset_AssetProxy : FBaseArchitectAsset_AssetProxy {
	struct UObject* ObjectAsset; // 0x10(0x08)
	float Probability; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AnimationArchitectRuntime.StationArchitectAsset_Connection
// Size: 0x30 (Inherited: 0x01)
struct FStationArchitectAsset_Connection : FBaseArchitectAsset_Connection {
	struct FGameplayTagContainer GameplayTags; // 0x00(0x20)
	struct TArray<struct FStationArchitectAsset_AssetProxy> AssetProxies; // 0x20(0x10)
};

// ScriptStruct AnimationArchitectRuntime.StationArchitectAsset_AssetProxy
// Size: 0x20 (Inherited: 0x10)
struct FStationArchitectAsset_AssetProxy : FBaseArchitectAsset_AssetProxy {
	struct UObject* StationAsset; // 0x10(0x08)
	float Probability; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

