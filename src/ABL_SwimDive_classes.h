// AblAbilityBlueprintGeneratedClass ABL_SwimDive.ABL_SwimDive_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_SwimDive_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function ABL_SwimDive.ABL_SwimDive_C.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_SwimDive.ABL_SwimDive_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_SwimDive.ABL_SwimDive_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_SwimDive.ABL_SwimDive_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_SwimDive(int32_t EntryPoint); // Function ABL_SwimDive.ABL_SwimDive_C.ExecuteUbergraph_ABL_SwimDive // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

