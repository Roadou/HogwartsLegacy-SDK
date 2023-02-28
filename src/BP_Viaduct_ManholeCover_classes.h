// BlueprintGeneratedClass BP_Viaduct_ManholeCover.BP_Viaduct_ManholeCover_C
// Size: 0x338 (Inherited: 0x2d0)
struct ABP_Viaduct_ManholeCover_C : ASkeletalMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UCineCameraComponent* Camera; // 0x2d8(0x08)
	struct UAkComponent* AK_ViaductManholeCover; // 0x2e0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2e8(0x08)
	struct UBoxComponent* Box; // 0x2f0(0x08)
	struct TArray<struct ABP_ViaductBridge_Torch_C*> Braziers; // 0x2f8(0x10)
	bool CanOpen; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct UABP_HW_Manhole_C* ABP; // 0x310(0x08)
	bool FirstTimeOpening; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FTimerHandle CloseTimer; // 0x320(0x08)
	struct ABP_Ladder_C* Ladder; // 0x328(0x08)
	struct ATriggerBox* UndergroundTrigger; // 0x330(0x08)

	void ReceiveBeginPlay(); // Function BP_Viaduct_ManholeCover.BP_Viaduct_ManholeCover_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Viaduct_ManholeCover_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Viaduct_ManholeCover.BP_Viaduct_ManholeCover_C.BndEvt__BP_Viaduct_ManholeCover_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CheckTorches(struct UObject* Caller); // Function BP_Viaduct_ManholeCover.BP_Viaduct_ManholeCover_C.CheckTorches // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_Viaduct_ManholeCover.BP_Viaduct_ManholeCover_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Close(); // Function BP_Viaduct_ManholeCover.BP_Viaduct_ManholeCover_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ManholeOpen(struct UObject* Caller); // Function BP_Viaduct_ManholeCover.BP_Viaduct_ManholeCover_C.ManholeOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Viaduct_ManholeCover_UndergroundTrigger_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_Viaduct_ManholeCover.BP_Viaduct_ManholeCover_C.BndEvt__BP_Viaduct_ManholeCover_UndergroundTrigger_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Viaduct_ManholeCover(int32_t EntryPoint); // Function BP_Viaduct_ManholeCover.BP_Viaduct_ManholeCover_C.ExecuteUbergraph_BP_Viaduct_ManholeCover // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

