// AblAbilityBlueprintGeneratedClass ABL_Tmbg_RCT_Death_V2.ABL_Tmbg_RCT_Death_V2_C
// Size: 0xf0 (Inherited: 0xe0)
struct UABL_Tmbg_RCT_Death_V2_C : UAblReactionAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct FName DestroyActorName; // 0xe8(0x08)

	void OnCustomEvent(struct UAblAbilityContext* Context, struct FName& EventName); // Function ABL_Tmbg_RCT_Death_V2.ABL_Tmbg_RCT_Death_V2_C.OnCustomEvent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_Tmbg_RCT_Death_V2.ABL_Tmbg_RCT_Death_V2_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_Tmbg_RCT_Death_V2(int32_t EntryPoint); // Function ABL_Tmbg_RCT_Death_V2.ABL_Tmbg_RCT_Death_V2_C.ExecuteUbergraph_ABL_Tmbg_RCT_Death_V2 // (Final|UbergraphFunction) // @ game+0x38a7480
};

