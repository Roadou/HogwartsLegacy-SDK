// AblAbilityBlueprintGeneratedClass ABL_EnemyMove_SplineLoop.ABL_EnemyMove_SplineLoop_C
// Size: 0xd8 (Inherited: 0xc8)
struct UABL_EnemyMove_SplineLoop_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct UAblAbility* NewVar_1; // 0xd0(0x08)

	struct UAblAbility* OnGetBranchAbility(struct UAblAbilityContext* Context, struct FName& EventName); // Function ABL_EnemyMove_SplineLoop.ABL_EnemyMove_SplineLoop_C.OnGetBranchAbility // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_EnemyMove_SplineLoop.ABL_EnemyMove_SplineLoop_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_EnemyMove_SplineLoop(int32_t EntryPoint); // Function ABL_EnemyMove_SplineLoop.ABL_EnemyMove_SplineLoop_C.ExecuteUbergraph_ABL_EnemyMove_SplineLoop // (Final|UbergraphFunction) // @ game+0x38a7480
};

