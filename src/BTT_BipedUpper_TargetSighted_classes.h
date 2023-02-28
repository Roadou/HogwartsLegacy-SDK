// BlueprintGeneratedClass BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C
// Size: 0x158 (Inherited: 0x150)
struct UBTT_BipedUpper_TargetSighted_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)

	void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TSighted(struct UAISense* Sense, struct AActor* Target); // Function BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.TSighted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TChanged(struct UAISense* Sense, struct AActor* NewTarget, struct AActor* OldTarget); // Function BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.TChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TLost(struct UAISense* Sense, struct AActor* OldTarget); // Function BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.TLost // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_BipedUpper_TargetSighted(int32_t EntryPoint); // Function BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.ExecuteUbergraph_BTT_BipedUpper_TargetSighted // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

