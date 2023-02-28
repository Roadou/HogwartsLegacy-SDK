// ScriptStruct MasterOverlapThrottler.MasterOverlapThrottlerTracker
// Size: 0x2c (Inherited: 0x00)
struct FMasterOverlapThrottlerTracker {
	struct FMasterOverlapThrottlerSettings Settings; // 0x00(0x10)
	struct FVector LastLocationComparisonActor; // 0x10(0x0c)
	struct FVector LastLocationPrimitveComponent; // 0x1c(0x0c)
	char bDisableThrottling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class ECollisionEnabled OriginalCollisionType; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
};

// ScriptStruct MasterOverlapThrottler.MasterOverlapThrottlerSettings
// Size: 0x10 (Inherited: 0x00)
struct FMasterOverlapThrottlerSettings {
	float NoOverlapEventsRadiusMeters; // 0x00(0x04)
	struct TWeakObjectPtr<struct AActor> ComparisonActor; // 0x04(0x08)
	bool bManageOverlapsEnabled; // 0x0c(0x01)
	bool bManageCollisionEnabled; // 0x0d(0x01)
	bool bPhysicsCollisionsEnabled; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
};

