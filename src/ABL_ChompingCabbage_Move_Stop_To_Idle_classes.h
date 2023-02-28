// AblAbilityBlueprintGeneratedClass ABL_ChompingCabbage_Move_Stop_To_Idle.ABL_ChompingCabbage_Move_Stop_To_Idle_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_ChompingCabbage_Move_Stop_To_Idle_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_ChompingCabbage_Move_Stop_To_Idle.ABL_ChompingCabbage_Move_Stop_To_Idle_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function ABL_ChompingCabbage_Move_Stop_To_Idle.ABL_ChompingCabbage_Move_Stop_To_Idle_C.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_ChompingCabbage_Move_Stop_To_Idle.ABL_ChompingCabbage_Move_Stop_To_Idle_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_ChompingCabbage_Move_Stop_To_Idle.ABL_ChompingCabbage_Move_Stop_To_Idle_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_ChompingCabbage_Move_Stop_To_Idle(int32_t EntryPoint); // Function ABL_ChompingCabbage_Move_Stop_To_Idle.ABL_ChompingCabbage_Move_Stop_To_Idle_C.ExecuteUbergraph_ABL_ChompingCabbage_Move_Stop_To_Idle // (Final|UbergraphFunction) // @ game+0x38a7480
};

