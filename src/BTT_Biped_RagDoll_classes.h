// BlueprintGeneratedClass BTT_Biped_RagDoll.BTT_Biped_RagDoll_C
// Size: 0x158 (Inherited: 0x150)
struct UBTT_Biped_RagDoll_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)

	void DeactivateStates(); // Function BTT_Biped_RagDoll.BTT_Biped_RagDoll_C.DeactivateStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateStates(); // Function BTT_Biped_RagDoll.BTT_Biped_RagDoll_C.ActivateStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_RagDoll.BTT_Biped_RagDoll_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupRagDolling(); // Function BTT_Biped_RagDoll.BTT_Biped_RagDoll_C.SetupRagDolling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_RagDoll.BTT_Biped_RagDoll_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_RagDoll.BTT_Biped_RagDoll_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_RagDoll.BTT_Biped_RagDoll_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_RagDoll.BTT_Biped_RagDoll_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_RagDoll(int32_t EntryPoint); // Function BTT_Biped_RagDoll.BTT_Biped_RagDoll_C.ExecuteUbergraph_BTT_Biped_RagDoll // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

