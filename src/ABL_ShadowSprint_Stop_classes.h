// AblAbilityBlueprintGeneratedClass ABL_ShadowSprint_Stop.ABL_ShadowSprint_Stop_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_ShadowSprint_Stop_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_ShadowSprint_Stop.ABL_ShadowSprint_Stop_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function ABL_ShadowSprint_Stop.ABL_ShadowSprint_Stop_C.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_ShadowSprint_Stop.ABL_ShadowSprint_Stop_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_ShadowSprint_Stop.ABL_ShadowSprint_Stop_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_ShadowSprint_Stop(int32_t EntryPoint); // Function ABL_ShadowSprint_Stop.ABL_ShadowSprint_Stop_C.ExecuteUbergraph_ABL_ShadowSprint_Stop // (Final|UbergraphFunction) // @ game+0x38a7480
};

