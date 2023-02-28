// AblAbilityBlueprintGeneratedClass ABL_HitFreeze.ABL_HitFreeze_C
// Size: 0xe8 (Inherited: 0xe0)
struct UABL_HitFreeze_C : UAblReactionAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)

	bool CustomCanBranchTo(struct UAblAbilityContext* Context); // Function ABL_HitFreeze.ABL_HitFreeze_C.CustomCanBranchTo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_HitFreeze.ABL_HitFreeze_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_HitFreeze(int32_t EntryPoint); // Function ABL_HitFreeze.ABL_HitFreeze_C.ExecuteUbergraph_ABL_HitFreeze // (Final|UbergraphFunction) // @ game+0x38a7480
};

