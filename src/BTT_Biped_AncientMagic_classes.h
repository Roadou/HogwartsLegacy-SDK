// BlueprintGeneratedClass BTT_Biped_AncientMagic.BTT_Biped_AncientMagic_C
// Size: 0x168 (Inherited: 0x150)
struct UBTT_Biped_AncientMagic_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	bool RestoreIKState; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct AAncientMagicHotSpot* AncientMagicActor; // 0x160(0x08)

	void SetContexts(bool Flag); // Function BTT_Biped_AncientMagic.BTT_Biped_AncientMagic_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_AncientMagic.BTT_Biped_AncientMagic_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_AncientMagic.BTT_Biped_AncientMagic_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_AncientMagic.BTT_Biped_AncientMagic_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_AncientMagic.BTT_Biped_AncientMagic_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_AncientMagic.BTT_Biped_AncientMagic_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_AncientMagic(int32_t EntryPoint); // Function BTT_Biped_AncientMagic.BTT_Biped_AncientMagic_C.ExecuteUbergraph_BTT_Biped_AncientMagic // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

