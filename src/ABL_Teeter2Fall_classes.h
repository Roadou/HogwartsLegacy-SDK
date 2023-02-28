// AblAbilityBlueprintGeneratedClass ABL_Teeter2Fall.ABL_Teeter2Fall_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_Teeter2Fall_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_Teeter2Fall.ABL_Teeter2Fall_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_Teeter2Fall.ABL_Teeter2Fall_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_Teeter2Fall(int32_t EntryPoint); // Function ABL_Teeter2Fall.ABL_Teeter2Fall_C.ExecuteUbergraph_ABL_Teeter2Fall // (Final|UbergraphFunction) // @ game+0x38a7480
};

