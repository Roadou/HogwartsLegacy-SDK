// Class TickSequencer.TickSequencerBucketSetup
// Size: 0xa0 (Inherited: 0x30)
struct UTickSequencerBucketSetup : UDataAsset {
	struct TArray<struct FName> PreActorTickBuckets; // 0x30(0x10)
	struct TArray<struct FName> PrePhysicsBuckets; // 0x40(0x10)
	struct TArray<struct FName> DuringPhysicsBuckets; // 0x50(0x10)
	struct TArray<struct FName> PostPhysicsBuckets; // 0x60(0x10)
	struct TArray<struct FName> PostUpdateWorkBuckets; // 0x70(0x10)
	struct TArray<struct FName> PostActorTickBuckets; // 0x80(0x10)
	struct TArray<struct FName> DynamicBuckets; // 0x90(0x10)
};

// Class TickSequencer.TickSequencerUpdateComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UTickSequencerUpdateComponent : UActorComponent {
	struct FTickSequencerUpdateBucketList Buckets; // 0xc8(0x10)
};

// Class TickSequencer.TickSequencerUpdateComponentPrePhysics
// Size: 0xd8 (Inherited: 0xd8)
struct UTickSequencerUpdateComponentPrePhysics : UTickSequencerUpdateComponent {
};

// Class TickSequencer.TickSequencerUpdateComponentDuringPhysics
// Size: 0xd8 (Inherited: 0xd8)
struct UTickSequencerUpdateComponentDuringPhysics : UTickSequencerUpdateComponent {
};

// Class TickSequencer.TickSequencerUpdateComponentPostPhysics
// Size: 0xd8 (Inherited: 0xd8)
struct UTickSequencerUpdateComponentPostPhysics : UTickSequencerUpdateComponent {
};

// Class TickSequencer.TickSequencerUpdateComponentPostUpdateWork
// Size: 0xd8 (Inherited: 0xd8)
struct UTickSequencerUpdateComponentPostUpdateWork : UTickSequencerUpdateComponent {
};

// Class TickSequencer.TickSequencerUpdateComponentDelegateUpdate
// Size: 0xd8 (Inherited: 0xd8)
struct UTickSequencerUpdateComponentDelegateUpdate : UTickSequencerUpdateComponent {
};

// Class TickSequencer.TickSequencerUpdateComponentPreActorTickUpdate
// Size: 0xd8 (Inherited: 0xd8)
struct UTickSequencerUpdateComponentPreActorTickUpdate : UTickSequencerUpdateComponentDelegateUpdate {
};

// Class TickSequencer.TickSequencerUpdateComponentPostActorTickUpdate
// Size: 0xd8 (Inherited: 0xd8)
struct UTickSequencerUpdateComponentPostActorTickUpdate : UTickSequencerUpdateComponentDelegateUpdate {
};

// Class TickSequencer.TickSequencerSingleton
// Size: 0x2c0 (Inherited: 0x248)
struct ATickSequencerSingleton : AActor {
	struct UTickSequencerBucketSetup* BucketSetup; // 0x248(0x08)
	struct UTickSequencerUpdateComponent* PrePhysicsBuckets; // 0x250(0x08)
	struct UTickSequencerUpdateComponent* DuringPhysicsBuckets; // 0x258(0x08)
	struct UTickSequencerUpdateComponent* PostPhysicsBuckets; // 0x260(0x08)
	struct UTickSequencerUpdateComponent* PostUpdateWorkBuckets; // 0x268(0x08)
	struct UTickSequencerUpdateComponentDelegateUpdate* PreActorTickBuckets; // 0x270(0x08)
	struct UTickSequencerUpdateComponentDelegateUpdate* PostActorTickBuckets; // 0x278(0x08)
	struct FTickSequencerUpdateBucketList DynamicBuckets; // 0x280(0x10)
	struct FDynamicBucketGroupStack DynamicBucketGroupStack; // 0x290(0x10)
	uint32_t LastGetExtraBucketsFrame; // 0x2a0(0x04)
	enum class ETickSequencerGroup CachedDynamicBucketGroup; // 0x2a4(0x01)
	bool bUseExternalPostActorTick; // 0x2a5(0x01)
	char pad_2A6[0x12]; // 0x2a6(0x12)
	uint32_t ManualTickFrame; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)

	void ForceTick(); // Function TickSequencer.TickSequencerSingleton.ForceTick // (Final|Native|Public) // @ game+0x1b80770
};

