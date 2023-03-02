// BlueprintGeneratedClass HN_BB_Mission.HN_BB_Mission_C
// Size: 0x2e8 (Inherited: 0x250)
struct AHN_BB_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)
	struct FTransform LeftDoorTransform; // 0x260(0x30)
	struct FTransform RightDoorTransform; // 0x290(0x30)
	struct FString Aasim Proximity Check; // 0x2c0(0x10)
	struct AStaticMeshActor* SquidDoorBlocker_ExecuteUbergraph_HN_BB_Mission_RefProperty; // 0x2d0(0x08)
	struct AStaticMeshActor* SM_HW_Grotto_Mosaic_AfterState_6_ExecuteUbergraph_HN_BB_Mission_RefProperty; // 0x2d8(0x08)
	struct AStaticMeshActor* SM_HW_Grotto_Mosaic_BeforeState_3_ExecuteUbergraph_HN_BB_Mission_RefProperty; // 0x2e0(0x08)

	void ReceiveBeginPlay(); // Function HN_BB_Mission.HN_BB_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void FGM_01_SLY_CP4_Updated(struct UObject* Caller, struct FName& String); // Function HN_BB_Mission.HN_BB_Mission_C.FGM_01_SLY_CP4_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_BB_Mission(int32_t EntryPoint); // Function HN_BB_Mission.HN_BB_Mission_C.ExecuteUbergraph_HN_BB_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

