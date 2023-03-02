// BlueprintGeneratedClass BP_HW_Interact_HonkDaff_Large.BP_HW_Interact_HonkDaff_Large_C
// Size: 0x338 (Inherited: 0x2d8)
struct ABP_HW_Interact_HonkDaff_Large_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_HW_Pot_C; // 0x2e0(0x08)
	struct USceneComponent* ForTag; // 0x2e8(0x08)
	struct USphereComponent* Sphere; // 0x2f0(0x08)
	struct UChildActorComponent* ChildActor; // 0x2f8(0x08)
	struct UChildActorComponent* ChildActor3; // 0x300(0x08)
	struct UChildActorComponent* ChildActor2; // 0x308(0x08)
	struct UChildActorComponent* ChildActor1; // 0x310(0x08)
	struct USceneComponent* HonkingDaffs; // 0x318(0x08)
	struct UStaticMeshComponent* SM_HW_DirtFill_A; // 0x320(0x08)
	struct TArray<struct ANone*> HonkDaffs; // 0x328(0x10)

	void InteractionInitiated(); // Function BP_HW_Interact_HonkDaff_Large.BP_HW_Interact_HonkDaff_Large_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_Interact_HonkDaff_Large.BP_HW_Interact_HonkDaff_Large_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_HW_Interact_HonkDaff_Large.BP_HW_Interact_HonkDaff_Large_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ResetSphere(); // Function BP_HW_Interact_HonkDaff_Large.BP_HW_Interact_HonkDaff_Large_C.ResetSphere // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Interact_HonkDaff_Large(int32_t EntryPoint); // Function BP_HW_Interact_HonkDaff_Large.BP_HW_Interact_HonkDaff_Large_C.ExecuteUbergraph_BP_HW_Interact_HonkDaff_Large // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

