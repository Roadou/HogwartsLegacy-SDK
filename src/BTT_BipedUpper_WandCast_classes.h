// BlueprintGeneratedClass BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C
// Size: 0x163 (Inherited: 0x150)
struct UBTT_BipedUpper_WandCast_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct ASpellTool* CurrentFiringSpell; // 0x158(0x08)
	bool SpellFired; // 0x160(0x01)
	bool ButtonReleased; // 0x161(0x01)
	enum class ERightArmState Right Arm State; // 0x162(0x01)

	void FlushQueuedActions(struct AActor* InActor); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.FlushQueuedActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTargetTrackers(struct AActor* InputPin); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.SetTargetTrackers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartWandAbility(struct AActor* InActor); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.StartWandAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireWandPartial_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.CustActionEvt_FireWandPartial_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SpellMadeContact(struct UObject* Caller, struct FMunitionImpactData& MunitionImpactData); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.SpellMadeContact // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_BipedUpper_WandCast(int32_t EntryPoint); // Function BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.ExecuteUbergraph_BTT_BipedUpper_WandCast // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

