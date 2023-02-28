// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x2e0 (Inherited: 0xd0)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_D0[0x110]; // 0xd0(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1e0(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x230(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations; // 0x280(0x50)
	char pad_2D0[0x10]; // 0x2d0(0x10)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4d236e0
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x348 (Inherited: 0x248)
struct AChaosSolverActor : AActor {
	struct FChaosSolverConfiguration Properties; // 0x248(0x6c)
	float TimeStepMultiplier; // 0x2b4(0x04)
	int32_t CollisionIterations; // 0x2b8(0x04)
	int32_t PushOutIterations; // 0x2bc(0x04)
	int32_t PushOutPairIterations; // 0x2c0(0x04)
	float ClusterConnectionFactor; // 0x2c4(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x2c8(0x01)
	bool DoGenerateCollisionData; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2cc(0x10)
	bool DoGenerateBreakingData; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x2e0(0x10)
	bool DoGenerateTrailingData; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x2f4(0x10)
	float MassScale; // 0x304(0x04)
	bool bGenerateContactGraph; // 0x308(0x01)
	bool bHasFloor; // 0x309(0x01)
	char pad_30A[0x2]; // 0x30a(0x02)
	float FloorHeight; // 0x30c(0x04)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x310(0x03)
	char pad_313[0x5]; // 0x313(0x05)
	struct UBillboardComponent* SpriteComponent; // 0x318(0x08)
	char pad_320[0x18]; // 0x320(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x338(0x08)
	char pad_340[0x8]; // 0x340(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x1545db0
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x4d237d0
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

