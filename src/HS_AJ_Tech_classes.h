// BlueprintGeneratedClass HS_AJ_Tech.HS_AJ_Tech_C
// Size: 0x280 (Inherited: 0x250)
struct AHS_AJ_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct AActor* NamedTrollRef; // 0x258(0x08)
	int64_t BeaconHandle; // 0x260(0x08)
	struct ADynamicObjectVolume* DOV_NamedEnemy_TrollMountain_ExecuteUbergraph_HS_AJ_Tech_RefProperty; // 0x268(0x08)
	struct ABP_AstroPuzzle_C* BP_AstroPuzzle_2_ExecuteUbergraph_HS_AJ_Tech_RefProperty; // 0x270(0x08)
	struct ABP_PuzzleHint_C* BP_PuzzleHint_NTR_ExecuteUbergraph_HS_AJ_Tech_RefProperty; // 0x278(0x08)

	void ReceiveBeginPlay(); // Function HS_AJ_Tech.HS_AJ_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void NTR_03_Updated(struct UObject* Caller, struct FName& String); // Function HS_AJ_Tech.HS_AJ_Tech_C.NTR_03_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NamedEnemySpawn(struct AActor* SpawnedActor, struct FName& GroupName); // Function HS_AJ_Tech.HS_AJ_Tech_C.NamedEnemySpawn // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_16_Updated(struct UObject* Caller, struct FName& String); // Function HS_AJ_Tech.HS_AJ_Tech_C.COM_16_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NTR03_ActivatePuzzle(struct UObject* Caller, int32_t int); // Function HS_AJ_Tech.HS_AJ_Tech_C.NTR03_ActivatePuzzle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AJ_Tech_DOV_NamedEnemy_TrollMountain_K2Node_ActorBoundEvent_0_AllEnemiesDeadEvent__DelegateSignature(); // Function HS_AJ_Tech.HS_AJ_Tech_C.BndEvt__HS_AJ_Tech_DOV_NamedEnemy_TrollMountain_K2Node_ActorBoundEvent_0_AllEnemiesDeadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AJ_Tech(int32_t EntryPoint); // Function HS_AJ_Tech.HS_AJ_Tech_C.ExecuteUbergraph_HS_AJ_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

