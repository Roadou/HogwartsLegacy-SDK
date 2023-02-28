// BlueprintGeneratedClass BP_ProtegoSpell_DW.BP_ProtegoSpell_DW_C
// Size: 0xdc0 (Inherited: 0xda8)
struct ABP_ProtegoSpell_DW_C : AProtegoSpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xda8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xdb0(0x08)
	struct USkinFXComponent* Skin FXComponent; // 0xdb8(0x08)

	void OnStop(); // Function BP_ProtegoSpell_DW.BP_ProtegoSpell_DW_C.OnStop // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnStart(); // Function BP_ProtegoSpell_DW.BP_ProtegoSpell_DW_C.OnStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EndShieldEffects(); // Function BP_ProtegoSpell_DW.BP_ProtegoSpell_DW_C.EndShieldEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartShieldEffects(); // Function BP_ProtegoSpell_DW.BP_ProtegoSpell_DW_C.StartShieldEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateShieldEffects(); // Function BP_ProtegoSpell_DW.BP_ProtegoSpell_DW_C.UpdateShieldEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ProtegoSpell_DW.BP_ProtegoSpell_DW_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StartShieldSkinEffects(); // Function BP_ProtegoSpell_DW.BP_ProtegoSpell_DW_C.StartShieldSkinEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndShieldSkinEffects(); // Function BP_ProtegoSpell_DW.BP_ProtegoSpell_DW_C.EndShieldSkinEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ProtegoSpell_DW(int32_t EntryPoint); // Function BP_ProtegoSpell_DW.BP_ProtegoSpell_DW_C.ExecuteUbergraph_BP_ProtegoSpell_DW // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

