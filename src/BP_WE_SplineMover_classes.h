// BlueprintGeneratedClass BP_WE_SplineMover.BP_WE_SplineMover_C
// Size: 0x318 (Inherited: 0x2b0)
struct ABP_WE_SplineMover_C : ASplineMover {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2b8(0x08)
	struct UStaticMeshComponent* locationMesh; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	struct USkeletalMesh* CreatureMesh; // 0x2d0(0x08)
	bool SocketTriggerOverride; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct ABP_WE_GenericSpline_C* WEGenericSpline; // 0x2e0(0x08)
	struct ATriggerBox* Box Trigger; // 0x2e8(0x08)
	struct UObject* AnimBlueprint; // 0x2f0(0x08)
	struct UPrimitiveComponent* CollisionVolume; // 0x2f8(0x08)
	struct FObjectFadeParamsSpeedDuration Mesh Fade in; // 0x300(0x0c)
	struct FObjectFadeParamsSpeedDuration Mesh Fade out; // 0x30c(0x0c)

	void SetupMesh(struct USkinnedMeshComponent* Skeletal Mesh, struct USkeletalMesh* New Creature Mesh, struct UObject* Anim BLueprint, bool Visibility, struct ABP_WE_GenericSpline_C* Spline); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.SetupMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box Trigger_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.BndEvt__Box Trigger_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__locationMesh_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.BndEvt__locationMesh_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerA(struct FVector Location); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.Event_WE_TriggerA // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerB(struct FVector Location); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.Event_WE_TriggerB // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_Fade(struct FVector Location); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.Event_WE_Fade // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerC(struct FVector Location); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.Event_WE_TriggerC // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerD(struct FVector Location); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.Event_WE_TriggerD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ActivateSplineMover(); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.ActivateSplineMover // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeactivateSplineMover(); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.DeactivateSplineMover // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_SplineMover(int32_t EntryPoint); // Function BP_WE_SplineMover.BP_WE_SplineMover_C.ExecuteUbergraph_BP_WE_SplineMover // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

