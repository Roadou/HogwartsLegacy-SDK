// BlueprintGeneratedClass BTT_Biped_Reaction.BTT_Biped_Reaction_C
// Size: 0x1b1 (Inherited: 0x150)
struct UBTT_Biped_Reaction_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct FName BoneName; // 0x158(0x08)
	struct FVector ImpactPoint; // 0x160(0x0c)
	bool isAnimComplete; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	struct FVector TraceDirection; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct UAblAbility* ReactionAbility; // 0x180(0x08)
	struct AActor* ImpactInstigator; // 0x188(0x08)
	bool LeftBreakoutEnabled; // 0x190(0x01)
	bool RightBreakoutEnabled; // 0x191(0x01)
	bool TopBreakoutEnabled; // 0x192(0x01)
	bool BottomBreakoutEnabled; // 0x193(0x01)
	float ReactionStartTime; // 0x194(0x04)
	float MaxTimeReactingInWater; // 0x198(0x04)
	struct FVector World Direction; // 0x19c(0x0c)
	bool StickMoved; // 0x1a8(0x01)
	bool InCCMiniGame; // 0x1a9(0x01)
	bool AllowLeftStick; // 0x1aa(0x01)
	bool BreakoutSet; // 0x1ab(0x01)
	float ReactionStartHeight; // 0x1ac(0x04)
	bool OnButtslideSurface; // 0x1b0(0x01)

	void SetAutoTargetDirection(struct ABiped_Player* BipedPlayer); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.SetAutoTargetDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RetrieveValuesFromBlackboard(struct AActor* Owner); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.RetrieveValuesFromBlackboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_7(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Landed_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AllowBreakout_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_AllowBreakout_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_16(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_16 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_15(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_15 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_14(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_14 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_13(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_13 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_12(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_12 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_11(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_11 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_10(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_10 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_9(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_9 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_8(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_8 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_7(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_TurnOffBreakout_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_TurnOffBreakout_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_KnockedDown_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_KnockedDown_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_RagdollExit_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.CustActionEvt_RagdollExit_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Reaction(int32_t EntryPoint); // Function BTT_Biped_Reaction.BTT_Biped_Reaction_C.ExecuteUbergraph_BTT_Biped_Reaction // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

