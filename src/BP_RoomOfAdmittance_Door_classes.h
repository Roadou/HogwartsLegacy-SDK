// BlueprintGeneratedClass BP_RoomOfAdmittance_Door.BP_RoomOfAdmittance_Door_C
// Size: 0x290 (Inherited: 0x248)
struct ABP_RoomOfAdmittance_Door_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCineCameraComponent* Camera; // 0x250(0x08)
	struct UBoxComponent* Box; // 0x258(0x08)
	struct UAkComponent* Ak_Key_Hole; // 0x260(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x268(0x08)
	struct USceneComponent* Scene; // 0x270(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x278(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x280(0x08)
	struct UABP_Doors_RoomofAdmittance_C* AnimBP; // 0x288(0x08)

	void ReceiveBeginPlay(); // Function BP_RoomOfAdmittance_Door.BP_RoomOfAdmittance_Door_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_RoomOfAdmittance_Door.BP_RoomOfAdmittance_Door_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Rumble(struct UObject* Caller); // Function BP_RoomOfAdmittance_Door.BP_RoomOfAdmittance_Door_C.Rumble // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_RoomOfAdmittance_Door_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_RoomOfAdmittance_Door.BP_RoomOfAdmittance_Door_C.BndEvt__BP_RoomOfAdmittance_Door_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_RoomOfAdmittance_Door_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_RoomOfAdmittance_Door.BP_RoomOfAdmittance_Door_C.BndEvt__BP_RoomOfAdmittance_Door_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_RoomOfAdmittance_Door(int32_t EntryPoint); // Function BP_RoomOfAdmittance_Door.BP_RoomOfAdmittance_Door_C.ExecuteUbergraph_BP_RoomOfAdmittance_Door // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

