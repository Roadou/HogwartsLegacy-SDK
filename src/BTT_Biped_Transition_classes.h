// BlueprintGeneratedClass BTT_Biped_Transition.BTT_Biped_Transition_C
// Size: 0x161 (Inherited: 0x150)
struct UBTT_Biped_Transition_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct UObject* TransitionAbilityClass; // 0x158(0x08)
	bool IKRestoreState; // 0x160(0x01)

	void MakeSurePlayerIsOnGround(); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.MakeSurePlayerIsOnGround // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IgnoreInteractActor(bool Flag); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.IgnoreInteractActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableHUD(bool Flag); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.EnableHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleLockOnCamera(struct UObject* Object, bool Allowed); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.ToggleLockOnCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_DisableIK_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.CustActionEvt_DisableIK_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Landed_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Transition(int32_t EntryPoint); // Function BTT_Biped_Transition.BTT_Biped_Transition_C.ExecuteUbergraph_BTT_Biped_Transition // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

