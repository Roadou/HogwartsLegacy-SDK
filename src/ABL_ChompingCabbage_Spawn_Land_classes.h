// AblAbilityBlueprintGeneratedClass ABL_ChompingCabbage_Spawn_Land.ABL_ChompingCabbage_Spawn_Land_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_ChompingCabbage_Spawn_Land_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_ChompingCabbage_Spawn_Land.ABL_ChompingCabbage_Spawn_Land_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function ABL_ChompingCabbage_Spawn_Land.ABL_ChompingCabbage_Spawn_Land_C.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_ChompingCabbage_Spawn_Land.ABL_ChompingCabbage_Spawn_Land_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_ChompingCabbage_Spawn_Land.ABL_ChompingCabbage_Spawn_Land_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_ChompingCabbage_Spawn_Land(int32_t EntryPoint); // Function ABL_ChompingCabbage_Spawn_Land.ABL_ChompingCabbage_Spawn_Land_C.ExecuteUbergraph_ABL_ChompingCabbage_Spawn_Land // (Final|UbergraphFunction) // @ game+0x38a7480
};

