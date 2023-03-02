// AblAbilityBlueprintGeneratedClass ABL_MamaDragon_Return_Perch.ABL_MamaDragon_Return_Perch_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_MamaDragon_Return_Perch_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnCustomEvent(struct UAblAbilityContext* Context, struct FName& EventName); // Function ABL_MamaDragon_Return_Perch.ABL_MamaDragon_Return_Perch_C.OnCustomEvent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_MamaDragon_Return_Perch.ABL_MamaDragon_Return_Perch_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function ABL_MamaDragon_Return_Perch.ABL_MamaDragon_Return_Perch_C.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_MamaDragon_Return_Perch.ABL_MamaDragon_Return_Perch_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_MamaDragon_Return_Perch(int32_t EntryPoint); // Function ABL_MamaDragon_Return_Perch.ABL_MamaDragon_Return_Perch_C.ExecuteUbergraph_ABL_MamaDragon_Return_Perch // (Final|UbergraphFunction) // @ game+0x38a7480
};

