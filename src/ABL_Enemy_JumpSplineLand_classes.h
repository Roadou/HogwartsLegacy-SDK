// AblAbilityBlueprintGeneratedClass ABL_Enemy_JumpSplineLand.ABL_Enemy_JumpSplineLand_C
// Size: 0xd8 (Inherited: 0xc8)
struct UABL_Enemy_JumpSplineLand_C : UAblNPCAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct UAblAbility* NewVar_1; // 0xd0(0x08)

	struct UAblAbility* OnGetBranchAbility(struct UAblAbilityContext* Context, struct FName& EventName); // Function ABL_Enemy_JumpSplineLand.ABL_Enemy_JumpSplineLand_C.OnGetBranchAbility // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_Enemy_JumpSplineLand.ABL_Enemy_JumpSplineLand_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_Enemy_JumpSplineLand(int32_t EntryPoint); // Function ABL_Enemy_JumpSplineLand.ABL_Enemy_JumpSplineLand_C.ExecuteUbergraph_ABL_Enemy_JumpSplineLand // (Final|UbergraphFunction) // @ game+0x38a7480
};

