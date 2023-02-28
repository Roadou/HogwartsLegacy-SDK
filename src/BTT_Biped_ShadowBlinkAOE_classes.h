// BlueprintGeneratedClass BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C
// Size: 0x198 (Inherited: 0x150)
struct UBTT_Biped_ShadowBlinkAOE_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	bool IKRestoreState; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	struct FVector LastDirection; // 0x15c(0x0c)
	struct FVector TeleportLocation; // 0x168(0x0c)
	struct FRotator TeleportRotation; // 0x174(0x0c)
	bool TeleportTest; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct AActor* EnemyActor; // 0x188(0x08)
	struct UObject* AbilityClass; // 0x190(0x08)

	void FallingTest(bool& Falling); // Function BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.FallingTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_ShadowBlinkAOE(int32_t EntryPoint); // Function BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.ExecuteUbergraph_BTT_Biped_ShadowBlinkAOE // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

