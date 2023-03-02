// BlueprintGeneratedClass BP_CairnBlockerB.BP_CairnBlockerB_C
// Size: 0x2ec (Inherited: 0x248)
struct ABP_CairnBlockerB_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_Cairn_RockDebris07_A_StaticMeshComponent0; // 0x250(0x08)
	struct UStaticMeshComponent* SM_Cairn_smallPuzzleStone_B_1_StaticMeshComponent0; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Cairn_Column_SideHall_A2_StaticMeshComponent0; // 0x260(0x08)
	struct UStaticMeshComponent* SM_Cairn_RockDebris06_A_StaticMeshComponent0; // 0x268(0x08)
	struct UStaticMeshComponent* SM_Cairn_StoneDebris6_StaticMeshComponent0; // 0x270(0x08)
	struct UStaticMeshComponent* SM_Cairn_PuzzleStoneSlab_Right_StaticMeshComponent0; // 0x278(0x08)
	struct UStaticMeshComponent* SM_Cairn_Column_StoneSlab_A_StaticMeshComponent0; // 0x280(0x08)
	struct USceneComponent* SharedRoot; // 0x288(0x08)
	struct TArray<struct FTransform> EndLocations; // 0x290(0x10)
	float YOffset; // 0x2a0(0x04)
	bool IsOpen; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct TArray<struct UStaticMeshComponent*> StaticMeshComponents; // 0x2a8(0x10)
	struct TArray<struct FTransform> StartingLocations; // 0x2b8(0x10)
	struct FDatabaseMissionList MissionLock; // 0x2c8(0x08)
	struct TArray<struct FDatabaseMissionList> MissionPrereqLocks; // 0x2d0(0x10)
	enum class MissionStatus MissionStateRequired; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	struct FStatList SaveOpenStat; // 0x2e4(0x08)

	void LockCheck(); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.LockCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MissionCheck(bool& CheckPassed); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.MissionCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StatCheck(bool& Pass); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.StatCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetToClosedState(); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.SetToClosedState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetToOpenState(); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.SetToOpenState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GenerateEndLocations(); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.GenerateEndLocations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void UpdateOpenState(); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.UpdateOpenState // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceLockCheck(); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.ForceLockCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void M_NTR_02_OpenDungeonDoor(struct UObject* Caller, int32_t int); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.M_NTR_02_OpenDungeonDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CairnBlockerB(int32_t EntryPoint); // Function BP_CairnBlockerB.BP_CairnBlockerB_C.ExecuteUbergraph_BP_CairnBlockerB // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

