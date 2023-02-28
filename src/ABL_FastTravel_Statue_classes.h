// AblAbilityBlueprintGeneratedClass ABL_FastTravel_Statue.ABL_FastTravel_Statue_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_FastTravel_Statue_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_FastTravel_Statue.ABL_FastTravel_Statue_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_FastTravel_Statue.ABL_FastTravel_Statue_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_FastTravel_Statue(int32_t EntryPoint); // Function ABL_FastTravel_Statue.ABL_FastTravel_Statue_C.ExecuteUbergraph_ABL_FastTravel_Statue // (Final|UbergraphFunction) // @ game+0x38a7480
};

