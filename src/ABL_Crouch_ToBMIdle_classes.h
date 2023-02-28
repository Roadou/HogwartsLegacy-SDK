// AblAbilityBlueprintGeneratedClass ABL_Crouch_ToBMIdle.ABL_Crouch_ToBMIdle_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_Crouch_ToBMIdle_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_Crouch_ToBMIdle.ABL_Crouch_ToBMIdle_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_Crouch_ToBMIdle.ABL_Crouch_ToBMIdle_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_Crouch_ToBMIdle(int32_t EntryPoint); // Function ABL_Crouch_ToBMIdle.ABL_Crouch_ToBMIdle_C.ExecuteUbergraph_ABL_Crouch_ToBMIdle // (Final|UbergraphFunction) // @ game+0x38a7480
};

