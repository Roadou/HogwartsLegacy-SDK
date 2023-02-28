// Class PhysicsCore.PhysicalMaterial
// Size: 0x80 (Inherited: 0x28)
struct UPhysicalMaterial : UObject {
	float Friction; // 0x28(0x04)
	float StaticFriction; // 0x2c(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x30(0x01)
	bool bOverrideFrictionCombineMode; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float Restitution; // 0x34(0x04)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x38(0x01)
	bool bOverrideRestitutionCombineMode; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float Density; // 0x3c(0x04)
	float SleepLinearVelocityThreshold; // 0x40(0x04)
	float SleepAngularVelocityThreshold; // 0x44(0x04)
	int32_t SleepCounterThreshold; // 0x48(0x04)
	float RaiseMassToPower; // 0x4c(0x04)
	float DestructibleDamageThresholdScale; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x58(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x60(0x01)
	char pad_61[0x1f]; // 0x61(0x1f)
};

// Class PhysicsCore.BodySetupCore
// Size: 0x38 (Inherited: 0x28)
struct UBodySetupCore : UObject {
	struct FName BoneName; // 0x28(0x08)
	enum class EPhysicsType PhysicsType; // 0x30(0x01)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x31(0x01)
	enum class EBodyCollisionResponse CollisionReponse; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// Class PhysicsCore.ChaosPhysicalMaterial
// Size: 0x48 (Inherited: 0x28)
struct UChaosPhysicalMaterial : UObject {
	float Friction; // 0x28(0x04)
	float StaticFriction; // 0x2c(0x04)
	float Restitution; // 0x30(0x04)
	float LinearEtherDrag; // 0x34(0x04)
	float AngularEtherDrag; // 0x38(0x04)
	float SleepingLinearVelocityThreshold; // 0x3c(0x04)
	float SleepingAngularVelocityThreshold; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class PhysicsCore.PhysicalMaterialPropertyBase
// Size: 0x28 (Inherited: 0x28)
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class PhysicsCore.PhysicsSettingsCore
// Size: 0xe8 (Inherited: 0x38)
struct UPhysicsSettingsCore : UDeveloperSettings {
	float DefaultGravityZ; // 0x38(0x04)
	float DefaultTerminalVelocity; // 0x3c(0x04)
	float DefaultFluidFriction; // 0x40(0x04)
	int32_t SimulateScratchMemorySize; // 0x44(0x04)
	int32_t RagdollAggregateThreshold; // 0x48(0x04)
	float TriangleMeshTriangleMinAreaThreshold; // 0x4c(0x04)
	bool bEnableShapeSharing; // 0x50(0x01)
	bool bEnablePCM; // 0x51(0x01)
	bool bEnableStabilization; // 0x52(0x01)
	bool bWarnMissingLocks; // 0x53(0x01)
	bool bEnable2DPhysics; // 0x54(0x01)
	bool bDefaultHasComplexCollision; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	float BounceThresholdVelocity; // 0x58(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x5c(0x01)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	float MaxAngularVelocity; // 0x60(0x04)
	float MaxDepenetrationVelocity; // 0x64(0x04)
	float ContactOffsetMultiplier; // 0x68(0x04)
	float MinContactOffset; // 0x6c(0x04)
	float MaxContactOffset; // 0x70(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x74(0x01)
	enum class ECollisionTraceFlag DefaultShapeComplexity; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
	struct FChaosSolverConfiguration SolverOptions; // 0x78(0x6c)
	char pad_E4[0x4]; // 0xe4(0x04)
};

