// BlueprintGeneratedClass BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C
// Size: 0x110 (Inherited: 0xf8)
struct UBTS_BipedUpper_TopLevel_C : UBTService_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct ALumosSpellTool* CurrentFiringSpell; // 0x100(0x08)
	struct FTimerHandle LumosTimerHandle; // 0x108(0x08)

	void Flush Queued Actions(); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.Flush Queued Actions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_EquipBucket_K2Node_BTCustomActionEvent_13(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_EquipBucket_K2Node_BTCustomActionEvent_13 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_12(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_12 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_11(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_11 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_10(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_10 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_TriggerWaving_K2Node_BTCustomActionEvent_9(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_TriggerWaving_K2Node_BTCustomActionEvent_9 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_UseInventoryItemUpper_K2Node_BTCustomActionEvent_8(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_UseInventoryItemUpper_K2Node_BTCustomActionEvent_8 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_PerformCallOut_K2Node_BTCustomActionEvent_7(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_PerformCallOut_K2Node_BTCustomActionEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Lumos_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_Lumos_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Lumos_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_Lumos_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Lumos_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_Lumos_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_OpenDoorLeftUpper_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_OpenDoorLeftUpper_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_OpenDoorRightUpper_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_OpenDoorRightUpper_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Looting_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_Looting_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ServiceBegin(struct AActor* OwnerActor); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.ServiceBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ServiceEnd(struct AActor* OwnerActor); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.ServiceEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void InTwoHandCarry(struct UObject* Caller); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.InTwoHandCarry // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoneWaving(struct UObject* Caller); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.DoneWaving // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FireLumos(); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.FireLumos // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_BipedUpper_TopLevel(int32_t EntryPoint); // Function BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.ExecuteUbergraph_BTS_BipedUpper_TopLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

