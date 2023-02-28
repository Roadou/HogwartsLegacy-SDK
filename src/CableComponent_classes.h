// Class CableComponent.CableActor
// Size: 0x250 (Inherited: 0x248)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x248(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x540 (Inherited: 0x4b0)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x4a8(0x01)
	bool bAttachEnd; // 0x4a9(0x01)
	struct FComponentReference AttachEndTo; // 0x4b0(0x28)
	struct FName AttachEndToSocketName; // 0x4d8(0x08)
	struct FVector EndLocation; // 0x4e0(0x0c)
	float CableLength; // 0x4ec(0x04)
	int32_t NumSegments; // 0x4f0(0x04)
	float SubstepTime; // 0x4f4(0x04)
	int32_t SolverIterations; // 0x4f8(0x04)
	bool bEnableStiffness; // 0x4fc(0x01)
	bool bUseSubstepping; // 0x4fd(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0x4fe(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x4ff(0x01)
	bool bEnableCollision; // 0x500(0x01)
	char pad_503[0x1]; // 0x503(0x01)
	float CollisionFriction; // 0x504(0x04)
	struct FVector CableForce; // 0x508(0x0c)
	float CableGravityScale; // 0x514(0x04)
	float CableWidth; // 0x518(0x04)
	int32_t NumSides; // 0x51c(0x04)
	float TileMaterial; // 0x520(0x04)
	char pad_524[0x1c]; // 0x524(0x1c)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x25d31d0
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0x25d30c0
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x25d3010
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25d2fe0
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25d2fb0
};

