// Enum TickSequencer.ETickSequencerBucketDelegateInit
enum class ETickSequencerBucketDelegateInit : uint8 {
	GameOnly = 0,
	EditorOnly = 1,
	Always = 2,
	ETickSequencerBucketDelegateInit_MAX = 3
};

// Enum TickSequencer.ETickSequencerGroup
enum class ETickSequencerGroup : uint8 {
	PreActorTick = 0,
	PrePhysics = 1,
	DuringPhysics = 2,
	PostPhysics = 3,
	PostUpdateWork = 4,
	PostActorTick = 5,
	Invalid = 6,
	ETickSequencerGroup_MAX = 7
};

// ScriptStruct TickSequencer.DynamicBucketGroupStack
// Size: 0x10 (Inherited: 0x00)
struct FDynamicBucketGroupStack {
	struct TArray<struct FDynamicBucketGroupStackEntry> Stack; // 0x00(0x10)
};

// ScriptStruct TickSequencer.DynamicBucketGroupStackEntry
// Size: 0x0c (Inherited: 0x00)
struct FDynamicBucketGroupStackEntry {
	struct TWeakObjectPtr<struct UObject> Owner; // 0x00(0x08)
	enum class ETickSequencerGroup Group; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TickSequencer.TickSequencerUpdateBucketList
// Size: 0x10 (Inherited: 0x00)
struct FTickSequencerUpdateBucketList {
	struct TArray<struct FTickSequencerGroupBucket> Buckets; // 0x00(0x10)
};

// ScriptStruct TickSequencer.TickSequencerGroupBucket
// Size: 0x18 (Inherited: 0x00)
struct FTickSequencerGroupBucket {
	struct FName Bucket; // 0x00(0x08)
	struct TArray<struct FTickSequencerBucketDelegate> Delegates; // 0x08(0x10)
};

// ScriptStruct TickSequencer.TickSequencerBucketDelegate
// Size: 0x28 (Inherited: 0x00)
struct FTickSequencerBucketDelegate {
	char pad_0[0x20]; // 0x00(0x20)
	struct FTickSequencerBucketDelegateOptions OPTIONS; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TickSequencer.TickSequencerBucketDelegateOptions
// Size: 0x01 (Inherited: 0x00)
struct FTickSequencerBucketDelegateOptions {
	char bTickWhenPaused : 1; // 0x00(0x01)
	char bSuspend : 1; // 0x00(0x01)
	char bTickInEditor : 1; // 0x00(0x01)
	char bTickOnlyInEditor : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
};

