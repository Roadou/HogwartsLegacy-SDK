// AblAbilityBlueprintGeneratedClass ABL_ChompingCabbage_Idle_Occasionally.ABL_ChompingCabbage_Idle_Occasionally_C
// Size: 0xd8 (Inherited: 0xc8)
struct UABL_ChompingCabbage_Idle_Occasionally_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	int32_t NewVar_1; // 0xd0(0x04)
	int32_t NewVar_2; // 0xd4(0x04)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_ChompingCabbage_Idle_Occasionally.ABL_ChompingCabbage_Idle_Occasionally_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function ABL_ChompingCabbage_Idle_Occasionally.ABL_ChompingCabbage_Idle_Occasionally_C.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_ChompingCabbage_Idle_Occasionally.ABL_ChompingCabbage_Idle_Occasionally_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_ChompingCabbage_Idle_Occasionally.ABL_ChompingCabbage_Idle_Occasionally_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_ChompingCabbage_Idle_Occasionally(int32_t EntryPoint); // Function ABL_ChompingCabbage_Idle_Occasionally.ABL_ChompingCabbage_Idle_Occasionally_C.ExecuteUbergraph_ABL_ChompingCabbage_Idle_Occasionally // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

