// AblAbilityBlueprintGeneratedClass ABL_HitBroom.ABL_HitBroom_C
// Size: 0xe8 (Inherited: 0xe0)
struct UABL_HitBroom_C : UAblReactionAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)

	bool CustomCanBranchTo(struct UAblAbilityContext* Context); // Function ABL_HitBroom.ABL_HitBroom_C.CustomCanBranchTo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_HitBroom.ABL_HitBroom_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_HitBroom.ABL_HitBroom_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_HitBroom(int32_t EntryPoint); // Function ABL_HitBroom.ABL_HitBroom_C.ExecuteUbergraph_ABL_HitBroom // (Final|UbergraphFunction) // @ game+0x38a7480
};

