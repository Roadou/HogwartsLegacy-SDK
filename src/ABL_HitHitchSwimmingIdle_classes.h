// AblAbilityBlueprintGeneratedClass ABL_HitHitchSwimmingIdle.ABL_HitHitchSwimmingIdle_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_HitHitchSwimmingIdle_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	bool CustomCanBranchTo(struct UAblAbilityContext* Context); // Function ABL_HitHitchSwimmingIdle.ABL_HitHitchSwimmingIdle_C.CustomCanBranchTo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_HitHitchSwimmingIdle.ABL_HitHitchSwimmingIdle_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_HitHitchSwimmingIdle.ABL_HitHitchSwimmingIdle_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_HitHitchSwimmingIdle(int32_t EntryPoint); // Function ABL_HitHitchSwimmingIdle.ABL_HitHitchSwimmingIdle_C.ExecuteUbergraph_ABL_HitHitchSwimmingIdle // (Final|UbergraphFunction) // @ game+0x38a7480
};

