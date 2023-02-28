// BlueprintGeneratedClass BP_World_Event_Spline_Mover.BP_World_Event_Spline_Mover_C
// Size: 0x300 (Inherited: 0x2b0)
struct ABP_World_Event_Spline_Mover_C : ASplineMover {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2b8(0x08)
	struct UStaticMeshComponent* locationMesh; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	struct USkeletalMesh* CreatureMesh; // 0x2d0(0x08)
	struct UWorldEventSpline* WorldEventSpline; // 0x2d8(0x08)
	struct UObject* AnimBlueprint; // 0x2e0(0x08)
	struct UPrimitiveComponent* collisionVolume; // 0x2e8(0x08)
	struct AWorldEventLocationActor* WorldEventLocationActor; // 0x2f0(0x08)
	struct AWorldEventLocationActor* TestWorldEventLocationActor; // 0x2f8(0x08)

	void GetWorldEventSpline(struct AWorldEventLocationActor* WorldEventLocationActor); // Function BP_World_Event_Spline_Mover.BP_World_Event_Spline_Mover_C.GetWorldEventSpline // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupMesh(struct USkinnedMeshComponent* Skeletal Mesh, struct USkeletalMesh* New Creature Mesh, struct UObject* Anim BLueprint, bool Visibility); // Function BP_World_Event_Spline_Mover.BP_World_Event_Spline_Mover_C.SetupMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_World_Event_Spline_Mover.BP_World_Event_Spline_Mover_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_World_Event_Spline_Mover.BP_World_Event_Spline_Mover_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_World_Event_Spline_Mover.BP_World_Event_Spline_Mover_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ActivateSplineMover(); // Function BP_World_Event_Spline_Mover.BP_World_Event_Spline_Mover_C.ActivateSplineMover // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeactivateSplineMover(); // Function BP_World_Event_Spline_Mover.BP_World_Event_Spline_Mover_C.DeactivateSplineMover // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_World_Event_Spline_Mover(int32_t EntryPoint); // Function BP_World_Event_Spline_Mover.BP_World_Event_Spline_Mover_C.ExecuteUbergraph_BP_World_Event_Spline_Mover // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

