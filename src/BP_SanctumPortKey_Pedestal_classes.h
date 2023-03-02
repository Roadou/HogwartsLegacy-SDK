// BlueprintGeneratedClass BP_SanctumPortKey_Pedestal.BP_SanctumPortKey_Pedestal_C
// Size: 0x2c1 (Inherited: 0x248)
struct ABP_SanctumPortKey_Pedestal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Target; // 0x250(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HW_DADA_Statue_Pedestal; // 0x268(0x08)
	struct AActor* Child; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)
	struct FTransform RecallTarget; // 0x280(0x30)
	struct FMulticastInlineDelegate Recall; // 0x2b0(0x10)
	bool ChildAttached; // 0x2c0(0x01)

	void UserConstructionScript(); // Function BP_SanctumPortKey_Pedestal.BP_SanctumPortKey_Pedestal_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_SanctumPortKey_Pedestal.BP_SanctumPortKey_Pedestal_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_SanctumPortKey_Pedestal.BP_SanctumPortKey_Pedestal_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SanctumPortKey_Pedestal.BP_SanctumPortKey_Pedestal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_SanctumPortKey_Pedestal.BP_SanctumPortKey_Pedestal_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetBlueprint(struct AActor* Actor); // Function BP_SanctumPortKey_Pedestal.BP_SanctumPortKey_Pedestal_C.ResetBlueprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SanctumPortKey_Pedestal(int32_t EntryPoint); // Function BP_SanctumPortKey_Pedestal.BP_SanctumPortKey_Pedestal_C.ExecuteUbergraph_BP_SanctumPortKey_Pedestal // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Recall__DelegateSignature(struct AActor* Who, struct AActor* Pedestal); // Function BP_SanctumPortKey_Pedestal.BP_SanctumPortKey_Pedestal_C.Recall__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

