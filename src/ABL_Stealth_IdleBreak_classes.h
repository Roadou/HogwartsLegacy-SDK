// AblAbilityBlueprintGeneratedClass ABL_Stealth_IdleBreak.ABL_Stealth_IdleBreak_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_Stealth_IdleBreak_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_Stealth_IdleBreak.ABL_Stealth_IdleBreak_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_Stealth_IdleBreak.ABL_Stealth_IdleBreak_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_Stealth_IdleBreak(int32_t EntryPoint); // Function ABL_Stealth_IdleBreak.ABL_Stealth_IdleBreak_C.ExecuteUbergraph_ABL_Stealth_IdleBreak // (Final|UbergraphFunction) // @ game+0x38a7480
};

