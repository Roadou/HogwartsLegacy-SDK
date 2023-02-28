// BlueprintGeneratedClass BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C
// Size: 0x143 (Inherited: 0xf8)
struct UBTS_Biped_MoveAndIdle_C : UBTService_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	bool StationInteractionInitiated; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct AActor* interactionActor; // 0x108(0x08)
	struct FStationQueryData StationData; // 0x110(0x20)
	bool Stealing; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct USceneRig* SceneRigToUse; // 0x138(0x08)
	bool IsCrawling; // 0x140(0x01)
	bool PartialBodyReactionPlaying; // 0x141(0x01)
	bool StickPressed; // 0x142(0x01)

	void AbortTask(); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.AbortTask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddWidgetToScreen(struct UUserWidget* ScreenToAdd); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.AddWidgetToScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayPartialBodyReaction(struct UObject* Object, struct FName Selection); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.PlayPartialBodyReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractInitiated_Station(); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InteractInitiated_Station // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractCanceled_Station(); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InteractCanceled_Station // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interact_Station(); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.Interact_Station // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GainKnowledge(); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.GainKnowledge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CleanupStation(); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CleanupStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsStrafing(bool& Redirected); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.IsStrafing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AncientMagicDetect_K2Node_BTCustomActionEvent_7(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_AncientMagicDetect_K2Node_BTCustomActionEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpellMadeContact_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_SpellMadeContact_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_PartialBodyReaction_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_PartialBodyReaction_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_OpenDoorLeft_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_OpenDoorLeft_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_OpenDoorRight_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_OpenDoorRight_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ServiceEnd(struct AActor* OwnerActor); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.ServiceEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StationStoryEnded(struct UObject* Caller); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.StationStoryEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PartialBodyReaction(struct UObject* Caller, struct FName& String); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.PartialBodyReaction // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ServiceBegin(struct AActor* OwnerActor); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.ServiceBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MountCreature_DismountEnd(struct UObject* Caller); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.MountCreature_DismountEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_Biped_MoveAndIdle(int32_t EntryPoint); // Function BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.ExecuteUbergraph_BTS_Biped_MoveAndIdle // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

