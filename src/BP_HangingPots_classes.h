// BlueprintGeneratedClass BP_HangingPots.BP_HangingPots_C
// Size: 0x33c (Inherited: 0x248)
struct ABP_HangingPots_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Knot02; // 0x250(0x08)
	struct UStaticMeshComponent* Knot01; // 0x258(0x08)
	struct UCableComponent* AnchorRope; // 0x260(0x08)
	struct UPhysicsConstraintComponent* AnchorRestraint; // 0x268(0x08)
	struct UCableComponent* Cable1; // 0x270(0x08)
	struct UCableComponent* Cable2; // 0x278(0x08)
	struct UPhysicsConstraintComponent* KnotRestraint1; // 0x280(0x08)
	struct UPhysicsConstraintComponent* KnotRestraint2; // 0x288(0x08)
	struct UChildActorComponent* pot2; // 0x290(0x08)
	struct UChildActorComponent* Pot1; // 0x298(0x08)
	struct UStaticMeshComponent* Anchor; // 0x2a0(0x08)
	struct UStaticMeshComponent* Knot; // 0x2a8(0x08)
	struct USceneComponent* SharedRoot; // 0x2b0(0x08)
	struct UStaticMeshComponent* PotMesh1; // 0x2b8(0x08)
	struct UStaticMeshComponent* PotMesh2; // 0x2c0(0x08)
	struct UStaticMeshComponent* Knot1; // 0x2c8(0x08)
	struct UStaticMeshComponent* Knot2; // 0x2d0(0x08)
	struct TArray<struct AActor*> PotArray; // 0x2d8(0x10)
	struct TMap<struct UStaticMeshComponent*, struct UCableComponent*> Cables; // 0x2e8(0x50)
	float GoToSleepRadius; // 0x338(0x04)

	void UserConstructionScript(); // Function BP_HangingPots.BP_HangingPots_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_HangingPots.BP_HangingPots_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HangingPots.BP_HangingPots_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Broken(struct AActor* Who); // Function BP_HangingPots.BP_HangingPots_C.Broken // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_HangingPots.BP_HangingPots_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_HangingPots.BP_HangingPots_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HangingPots(int32_t EntryPoint); // Function BP_HangingPots.BP_HangingPots_C.ExecuteUbergraph_BP_HangingPots // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

