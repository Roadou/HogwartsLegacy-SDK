// BlueprintGeneratedClass BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C
// Size: 0x180 (Inherited: 0x150)
struct UBTT_Biped_SimpleInteraction_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	float StickMag; // 0x158(0x04)
	bool OnButtslideSurface; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	struct FVector2D CurrentStickDirection; // 0x160(0x08)
	bool RestoreIKState; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UObject* InteractionAbilityClass; // 0x170(0x08)
	struct AActor* InteractActor; // 0x178(0x08)

	void GetBlackboardVariables(); // Function BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.GetBlackboardVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableHUD(bool Flag); // Function BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.EnableHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleLockOnCamera(struct UObject* Object, bool Allowed); // Function BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.ToggleLockOnCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_SimpleInteraction(int32_t EntryPoint); // Function BTT_Biped_SimpleInteraction.BTT_Biped_SimpleInteraction_C.ExecuteUbergraph_BTT_Biped_SimpleInteraction // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

