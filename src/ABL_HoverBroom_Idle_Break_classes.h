// AblAbilityBlueprintGeneratedClass ABL_HoverBroom_Idle_Break.ABL_HoverBroom_Idle_Break_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_HoverBroom_Idle_Break_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_HoverBroom_Idle_Break.ABL_HoverBroom_Idle_Break_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_HoverBroom_Idle_Break.ABL_HoverBroom_Idle_Break_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_HoverBroom_Idle_Break(int32_t EntryPoint); // Function ABL_HoverBroom_Idle_Break.ABL_HoverBroom_Idle_Break_C.ExecuteUbergraph_ABL_HoverBroom_Idle_Break // (Final|UbergraphFunction) // @ game+0x38a7480
};
