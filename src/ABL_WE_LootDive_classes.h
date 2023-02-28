// AblAbilityBlueprintGeneratedClass ABL_WE_LootDive.ABL_WE_LootDive_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_WE_LootDive_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnCustomEvent(struct UAblAbilityContext* Context, struct FName& EventName); // Function ABL_WE_LootDive.ABL_WE_LootDive_C.OnCustomEvent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function ABL_WE_LootDive.ABL_WE_LootDive_C.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_WE_LootDive.ABL_WE_LootDive_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_WE_LootDive.ABL_WE_LootDive_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_WE_LootDive.ABL_WE_LootDive_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_WE_LootDive(int32_t EntryPoint); // Function ABL_WE_LootDive.ABL_WE_LootDive_C.ExecuteUbergraph_ABL_WE_LootDive // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

