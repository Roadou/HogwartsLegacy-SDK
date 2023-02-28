// BlueprintGeneratedClass BTT_Biped_Steal.BTT_Biped_Steal_C
// Size: 0x1ac (Inherited: 0x150)
struct UBTT_Biped_Steal_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	bool InteractPressed; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	struct FVector PickupTargetLocation; // 0x15c(0x0c)
	struct AActor* InteractActor; // 0x168(0x08)
	bool InAlohomora; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct UParticleSystemComponent* LoopingVFX; // 0x178(0x08)
	struct UParticleSystemComponent* MuzzleVFX; // 0x180(0x08)
	struct UNiagaraComponent* AlohomoraBeamFX; // 0x188(0x08)
	struct UParticleSystemComponent* AlohomoraLockFX; // 0x190(0x08)
	struct UNiagaraComponent* PearVFX; // 0x198(0x08)
	bool TicklingPearDoor; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	float DistToPearDoor; // 0x1a4(0x04)
	float PearInterpSpeed; // 0x1a8(0x04)

	void CustActionEvt_ItemCollected_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Steal.BTT_Biped_Steal_C.CustActionEvt_ItemCollected_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Steal.BTT_Biped_Steal_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_CancelSteal_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Steal.BTT_Biped_Steal_C.CustActionEvt_CancelSteal_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Steal.BTT_Biped_Steal_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Steal.BTT_Biped_Steal_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CollectStolenItem(struct UObject* Caller); // Function BTT_Biped_Steal.BTT_Biped_Steal_C.CollectStolenItem // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Steal(int32_t EntryPoint); // Function BTT_Biped_Steal.BTT_Biped_Steal_C.ExecuteUbergraph_BTT_Biped_Steal // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

