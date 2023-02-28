// Class SocialDisplay.SocialAIController
// Size: 0x458 (Inherited: 0x350)
struct ASocialAIController : AAIController {
	char pad_350[0x108]; // 0x350(0x108)

	void SetRequestedSpeed(float InSpeed); // Function SocialDisplay.SocialAIController.SetRequestedSpeed // (Native|Public|BlueprintCallable) // @ game+0x34fe270
	enum class EPathFollowingRequestResult PlayerMoveToDestination(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPaths); // Function SocialDisplay.SocialAIController.PlayerMoveToDestination // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34fdfe0
	float GetRequestedSpeed(); // Function SocialDisplay.SocialAIController.GetRequestedSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34fdfa0
	float GetPathDistanceToGoal(); // Function SocialDisplay.SocialAIController.GetPathDistanceToGoal // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34fdf60
};

// Class SocialDisplay.SocialTravelerController
// Size: 0x4d8 (Inherited: 0x458)
struct ASocialTravelerController : ASocialAIController {
	char pad_458[0x80]; // 0x458(0x80)
};

// Class SocialDisplay.SocialNavigatorController
// Size: 0x508 (Inherited: 0x4d8)
struct ASocialNavigatorController : ASocialTravelerController {
	char pad_4D8[0x30]; // 0x4d8(0x30)
};

// Class SocialDisplay.SocialAgentComponent
// Size: 0x110 (Inherited: 0xc8)
struct USocialAgentComponent : UActorComponent {
	char pad_C8[0x40]; // 0xc8(0x40)
	float m_FOV; // 0x108(0x04)
	bool m_participatesInCollisionAvoidance; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
};

// Class SocialDisplay.SocialAgentObstacleComponent
// Size: 0x120 (Inherited: 0x110)
struct USocialAgentObstacleComponent : USocialAgentComponent {
	char pad_110[0x10]; // 0x110(0x10)
};

// Class SocialDisplay.SocialAgentPawnComponent
// Size: 0x120 (Inherited: 0x110)
struct USocialAgentPawnComponent : USocialAgentComponent {
	char pad_110[0x8]; // 0x110(0x08)
	int32_t m_avoidLOD; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)

	void OnActorHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function SocialDisplay.SocialAgentPawnComponent.OnActorHit // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0x1a33910
};

// Class SocialDisplay.SocialAgentPathFollowerComponent
// Size: 0x258 (Inherited: 0x120)
struct USocialAgentPathFollowerComponent : USocialAgentPawnComponent {
	char pad_120[0x138]; // 0x120(0x138)
};

// Class SocialDisplay.SocialDisplayManager
// Size: 0x88 (Inherited: 0x28)
struct USocialDisplayManager : UCrowdManagerBase {
	char pad_28[0x48]; // 0x28(0x48)
	float m_lookAheadTime; // 0x70(0x04)
	float m_borderLookAheadTime; // 0x74(0x04)
	bool m_logConstraintAllocation; // 0x78(0x01)
	bool m_logAgentPairs; // 0x79(0x01)
	bool m_enableAgentSelection; // 0x7a(0x01)
	bool m_drawVelocityObstacles; // 0x7b(0x01)
	bool m_drawOptimalConstraints; // 0x7c(0x01)
	bool m_drawPenetratingConstraints; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	uint32_t m_debugFrameCount; // 0x80(0x04)
	int32_t m_debugFrameOffset; // 0x84(0x04)
};

// Class SocialDisplay.SocialFollowingComponent
// Size: 0x740 (Inherited: 0x298)
struct USocialFollowingComponent : UPreferredNavDataPathFollowingComponent {
	struct USocialAgentPawnComponent* m_agent; // 0x298(0x08)
	char pad_2A0[0x4a0]; // 0x2a0(0x4a0)

	void OnMovementUpdated(float i_deltaSeconds, struct FVector i_oldLocation, struct FVector i_oldVelocity); // Function SocialDisplay.SocialFollowingComponent.OnMovementUpdated // (Final|Native|Protected|HasDefaults) // @ game+0x34fe5f0
};

// Class SocialDisplay.SocialMultiAgentComponent
// Size: 0xd8 (Inherited: 0xc8)
struct USocialMultiAgentComponent : UActorComponent {
	struct TArray<struct FSocialMultiAgentMember> MemberAgents; // 0xc8(0x10)
};

// Class SocialDisplay.SocialSplineController
// Size: 0x4e0 (Inherited: 0x4d8)
struct ASocialSplineController : ASocialTravelerController {
	char pad_4D8[0x8]; // 0x4d8(0x08)
};

// Class SocialDisplay.SplineFollowingComponent
// Size: 0x378 (Inherited: 0x268)
struct USplineFollowingComponent : UPathFollowingComponent {
	struct USocialAgentPawnComponent* Agent; // 0x268(0x08)
	char pad_270[0x108]; // 0x270(0x108)
};

