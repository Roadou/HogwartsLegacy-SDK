// AblAbilityBlueprintGeneratedClass ABL_MamaDragon_NTRAttack_End.ABL_MamaDragon_NTRAttack_End_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_MamaDragon_NTRAttack_End_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	bool CustomCanBranchTo(struct UAblAbilityContext* Context); // Function ABL_MamaDragon_NTRAttack_End.ABL_MamaDragon_NTRAttack_End_C.CustomCanBranchTo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnCustomEvent(struct UAblAbilityContext* Context, struct FName& EventName); // Function ABL_MamaDragon_NTRAttack_End.ABL_MamaDragon_NTRAttack_End_C.OnCustomEvent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_MamaDragon_NTRAttack_End.ABL_MamaDragon_NTRAttack_End_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_MamaDragon_NTRAttack_End(int32_t EntryPoint); // Function ABL_MamaDragon_NTRAttack_End.ABL_MamaDragon_NTRAttack_End_C.ExecuteUbergraph_ABL_MamaDragon_NTRAttack_End // (Final|UbergraphFunction) // @ game+0x38a7480
};

