// Class IcarusRuntime.BTDecorator_IcarusIsFlying
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_IcarusIsFlying : UBTDecorator {
};

// Class IcarusRuntime.BTDecorator_IcarusCanFly
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_IcarusCanFly : UBTDecorator {
};

// Class IcarusRuntime.BTDecorator_IcarusIsPerched
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_IcarusIsPerched : UBTDecorator {
};

// Class IcarusRuntime.BTTask_Icarus_MoveTo
// Size: 0xb0 (Inherited: 0xa8)
struct UBTTask_Icarus_MoveTo : UBTTask_Mercuna_MoveTo {
	bool bUsePathfinding; // 0xa8(0x01)
	bool bUseDynamicAvoidance; // 0xa9(0x01)
	bool bUseTurnSmoothing; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
};

// Class IcarusRuntime.Icarus3DMovementComponent
// Size: 0x250 (Inherited: 0x200)
struct UIcarus3DMovementComponent : UMercuna3DMovementComponent {
	struct FMulticastInlineDelegate OnBehaviorCompleted; // 0x1f8(0x10)
	bool bCanEverFly; // 0x208(0x01)
	char pad_211[0x27]; // 0x211(0x27)
	struct UAblAbility* DefaultTakeOffAbility; // 0x238(0x08)
	struct UAblAbility* DefaultTakeOffAbilityOverride; // 0x240(0x08)
	bool bStartFlying; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)

	void IcarusBehaviorComplete__DelegateSignature(enum class EBehaviorResult Result); // DelegateFunction IcarusRuntime.Icarus3DMovementComponent.IcarusBehaviorComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	float GetTurningCircleRadius(); // Function IcarusRuntime.Icarus3DMovementComponent.GetTurningCircleRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a73f40
	void EnableFlying(); // Function IcarusRuntime.Icarus3DMovementComponent.EnableFlying // (Native|Public|BlueprintCallable) // @ game+0x1a73f20
	void DisableFlying(bool bSwitchToGroundNavigation); // Function IcarusRuntime.Icarus3DMovementComponent.DisableFlying // (Native|Public|BlueprintCallable) // @ game+0x1a73e90
	void BehaviorTakeOffStart(struct UAblAbility* TakeOffAbility, bool bTeleportIfNoTakeOffAbility); // Function IcarusRuntime.Icarus3DMovementComponent.BehaviorTakeOffStart // (Native|Public|BlueprintCallable) // @ game+0x1a73dc0
	void BehaviorStop(enum class EBehaviorResult Result); // Function IcarusRuntime.Icarus3DMovementComponent.BehaviorStop // (Native|Public|BlueprintCallable) // @ game+0x1a73d40
	void BehaviorLandingLocationStart(struct FVector LocationToLandAt, float Height); // Function IcarusRuntime.Icarus3DMovementComponent.BehaviorLandingLocationStart // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a73c60
	void BehaviorLandingActorStart(struct AActor* ActorToLandAt, float Height, float ActorUpdateDistance); // Function IcarusRuntime.Icarus3DMovementComponent.BehaviorLandingActorStart // (Native|Public|BlueprintCallable) // @ game+0x1a73b50
	void BehaviorCircleLocationStart(struct FVector CircleCenterLocation, float Radius, float Height, bool bClockwise, bool bLookAtCirclingLocation, float LookAtMaxPitch); // Function IcarusRuntime.Icarus3DMovementComponent.BehaviorCircleLocationStart // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a73950
	void BehaviorCircleActorStart(struct AActor* CircleCenterActor, float Radius, float Height, bool bClockwise, bool bLookAtCirclingActor, float LookAtMaxPitch, float ActorUpdateDistance); // Function IcarusRuntime.Icarus3DMovementComponent.BehaviorCircleActorStart // (Native|Public|BlueprintCallable) // @ game+0x1a73720
};

// Class IcarusRuntime.IcarusConfig
// Size: 0x30 (Inherited: 0x28)
struct UIcarusConfig : UObject {
	float BehaviorCirclingMinimumValidPointsRatio; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class IcarusRuntime.IcarusNavigationComponent
// Size: 0x1f8 (Inherited: 0x148)
struct UIcarusNavigationComponent : UMercunaNavigationComponent {
	float TurningCircleLookAheadTime; // 0x148(0x04)
	char pad_14C[0xc]; // 0x14c(0x0c)
	struct FMercunaMoveRequest OriginalMoveRequest; // 0x158(0x40)
	char pad_198[0x40]; // 0x198(0x40)
	struct UMercunaPath* CurrentPath; // 0x1d8(0x08)
	struct UMercunaPath* NewPath; // 0x1e0(0x08)
	char pad_1E8[0x10]; // 0x1e8(0x10)

	void SetUseTurnSmoothing(bool bInUseTurnSmoothing); // Function IcarusRuntime.IcarusNavigationComponent.SetUseTurnSmoothing // (Final|Native|Public|BlueprintCallable) // @ game+0x1a73f90
	bool GetUseTurnSmoothing(); // Function IcarusRuntime.IcarusNavigationComponent.GetUseTurnSmoothing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a73f70
};

