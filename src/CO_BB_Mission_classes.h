// BlueprintGeneratedClass CO_BB_Mission.CO_BB_Mission_C
// Size: 0x2d0 (Inherited: 0x250)
struct ACO_BB_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines_2_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x258(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines2_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x260(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines10_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x268(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines11_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x270(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines6_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x278(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines14_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x280(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines3_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x288(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines4_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x290(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines5_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x298(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines7_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x2a0(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines8_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x2a8(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines9_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x2b0(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines12_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x2b8(0x08)
	struct ABP_HW_BurnableVines_FIG_07_C* BP_HW_BurnableVines13_ExecuteUbergraph_CO_BB_Mission_RefProperty; // 0x2c0(0x08)
	struct ABP_Mission_VOTrigger_C* BP_Mission_VOTrigger_AvatarHint_EdGraph_0_RefProperty; // 0x2c8(0x08)

	void M_FIG_07_BurnVines(); // Function CO_BB_Mission.CO_BB_Mission_C.M_FIG_07_BurnVines // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function CO_BB_Mission.CO_BB_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function CO_BB_Mission.CO_BB_Mission_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function CO_BB_Mission.CO_BB_Mission_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VinesBurning(struct AActor* Target, struct AActor* Instigator, float Damage, struct FHitResult& Hit); // Function CO_BB_Mission.CO_BB_Mission_C.VinesBurning // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VinesBurning2(struct AActor* Target, struct AActor* Instigator, float Damage, struct FHitResult& Hit); // Function CO_BB_Mission.CO_BB_Mission_C.VinesBurning2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VinesBurning3(struct AActor* Target, struct AActor* Instigator, float Damage, struct FHitResult& Hit); // Function CO_BB_Mission.CO_BB_Mission_C.VinesBurning3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VinesBurning4(struct AActor* Target, struct AActor* Instigator, float Damage, struct FHitResult& Hit); // Function CO_BB_Mission.CO_BB_Mission_C.VinesBurning4 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VinesBurning5(struct AActor* Target, struct AActor* Instigator, float Damage, struct FHitResult& Hit); // Function CO_BB_Mission.CO_BB_Mission_C.VinesBurning5 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_CO_BB_Mission(int32_t EntryPoint); // Function CO_BB_Mission.CO_BB_Mission_C.ExecuteUbergraph_CO_BB_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

