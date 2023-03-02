// AblAbilityBlueprintGeneratedClass ABL_MamaDragon_Attack_TimedDelay.ABL_MamaDragon_Attack_TimedDelay_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_MamaDragon_Attack_TimedDelay_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnCustomEvent(struct UAblAbilityContext* Context, struct FName& EventName); // Function ABL_MamaDragon_Attack_TimedDelay.ABL_MamaDragon_Attack_TimedDelay_C.OnCustomEvent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_MamaDragon_Attack_TimedDelay.ABL_MamaDragon_Attack_TimedDelay_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_MamaDragon_Attack_TimedDelay.ABL_MamaDragon_Attack_TimedDelay_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_MamaDragon_Attack_TimedDelay(int32_t EntryPoint); // Function ABL_MamaDragon_Attack_TimedDelay.ABL_MamaDragon_Attack_TimedDelay_C.ExecuteUbergraph_ABL_MamaDragon_Attack_TimedDelay // (Final|UbergraphFunction) // @ game+0x38a7480
};

