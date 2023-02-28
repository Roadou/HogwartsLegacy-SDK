// AblAbilityBlueprintGeneratedClass ABL_Levitated_Loop.ABL_Levitated_Loop_C
// Size: 0xe8 (Inherited: 0xe0)
struct UABL_Levitated_Loop_C : UAblReactionAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)

	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function ABL_Levitated_Loop.ABL_Levitated_Loop_C.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_Levitated_Loop.ABL_Levitated_Loop_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_Levitated_Loop.ABL_Levitated_Loop_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_Levitated_Loop(int32_t EntryPoint); // Function ABL_Levitated_Loop.ABL_Levitated_Loop_C.ExecuteUbergraph_ABL_Levitated_Loop // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

