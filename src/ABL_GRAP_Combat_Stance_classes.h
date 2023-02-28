// AblAbilityBlueprintGeneratedClass ABL_GRAP_Combat_Stance.ABL_GRAP_Combat_Stance_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_GRAP_Combat_Stance_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	bool CanInterruptAbility(struct UAblAbilityContext* Context, struct UAblAbility* CurrentAbility); // Function ABL_GRAP_Combat_Stance.ABL_GRAP_Combat_Stance_C.CanInterruptAbility // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_GRAP_Combat_Stance.ABL_GRAP_Combat_Stance_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_GRAP_Combat_Stance(int32_t EntryPoint); // Function ABL_GRAP_Combat_Stance.ABL_GRAP_Combat_Stance_C.ExecuteUbergraph_ABL_GRAP_Combat_Stance // (Final|UbergraphFunction) // @ game+0x38a7480
};

