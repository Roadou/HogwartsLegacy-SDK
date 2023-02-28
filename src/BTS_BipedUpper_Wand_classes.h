// BlueprintGeneratedClass BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C
// Size: 0x120 (Inherited: 0x111)
struct UBTS_BipedUpper_Wand_C : UBTS_Biped_BasicMobility_C {
	char pad_111[0x7]; // 0x111(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)

	bool PartialBodyAbilityTest(); // Function BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.PartialBodyAbilityTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_BreakoutUpperSuccess_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.CustActionEvt_BreakoutUpperSuccess_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_BreakoutUpperFail_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.CustActionEvt_BreakoutUpperFail_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ServiceBegin(struct AActor* OwnerActor); // Function BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.ServiceBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ServiceEnd(struct AActor* OwnerActor); // Function BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.ServiceEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_BipedUpper_Wand(int32_t EntryPoint); // Function BTS_BipedUpper_Wand.BTS_BipedUpper_Wand_C.ExecuteUbergraph_BTS_BipedUpper_Wand // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

