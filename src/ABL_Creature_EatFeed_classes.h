// AblAbilityBlueprintGeneratedClass ABL_Creature_EatFeed.ABL_Creature_EatFeed_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_Creature_EatFeed_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	bool CanInterruptAbility(struct UAblAbilityContext* Context, struct UAblAbility* CurrentAbility); // Function ABL_Creature_EatFeed.ABL_Creature_EatFeed_C.CanInterruptAbility // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_Creature_EatFeed.ABL_Creature_EatFeed_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_Creature_EatFeed(int32_t EntryPoint); // Function ABL_Creature_EatFeed.ABL_Creature_EatFeed_C.ExecuteUbergraph_ABL_Creature_EatFeed // (Final|UbergraphFunction) // @ game+0x38a7480
};

