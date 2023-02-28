// AblAbilityBlueprintGeneratedClass ABL_Blind_Arm_ADD.ABL_Blind_Arm_ADD_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_Blind_Arm_ADD_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_Blind_Arm_ADD.ABL_Blind_Arm_ADD_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_Blind_Arm_ADD.ABL_Blind_Arm_ADD_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_Blind_Arm_ADD(int32_t EntryPoint); // Function ABL_Blind_Arm_ADD.ABL_Blind_Arm_ADD_C.ExecuteUbergraph_ABL_Blind_Arm_ADD // (Final|UbergraphFunction) // @ game+0x38a7480
};

