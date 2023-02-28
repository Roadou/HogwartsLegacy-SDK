// BlueprintGeneratedClass BP_LumosSpell.BP_LumosSpell_C
// Size: 0xa69 (Inherited: 0xa50)
struct ABP_LumosSpell_C : ALumosSpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa50(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xa58(0x08)
	struct UInputComponent* ParentInputComponent; // 0xa60(0x08)
	bool IsRunning; // 0xa68(0x01)

	void InpActEvt_Stupefy_K2Node_CustomAnalogInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BP_LumosSpell.BP_LumosSpell_C.InpActEvt_Stupefy_K2Node_CustomAnalogInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void OnStart(); // Function BP_LumosSpell.BP_LumosSpell_C.OnStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnStop(); // Function BP_LumosSpell.BP_LumosSpell_C.OnStop // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_LumosSpell(int32_t EntryPoint); // Function BP_LumosSpell.BP_LumosSpell_C.ExecuteUbergraph_BP_LumosSpell // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

