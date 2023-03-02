// BlueprintGeneratedClass WE_WHO_NEEDS_A_TOURNAMENT.WE_WHO_NEEDS_A_TOURNAMENT_C
// Size: 0x290 (Inherited: 0x250)
struct AWE_WHO_NEEDS_A_TOURNAMENT_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TArray<struct ABP_WE_WNAT_MazeLayout_C*> MazeLayouts; // 0x258(0x10)
	struct ABP_WE_WNAT_MazeLayout_C* CurrentMaze; // 0x268(0x08)
	struct AActor* WE_WNAT_EdGraph_0_RefProperty; // 0x270(0x08)
	struct AForbiddenAreaVolume* ForbiddenAreaVolume1_EdGraph_0_RefProperty; // 0x278(0x08)
	struct ABP_WE_WNAT_Archway_C* BP_WE_WNAT_Archway_2_EdGraph_0_RefProperty; // 0x280(0x08)
	struct ACameraStackVolume* CameraStackVolume_1_EdGraph_0_RefProperty; // 0x288(0x08)

	void SpawnMaze(struct ABP_WE_WNAT_MazeLayout_C*& Maze); // Function WE_WHO_NEEDS_A_TOURNAMENT.WE_WHO_NEEDS_A_TOURNAMENT_C.SpawnMaze // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function WE_WHO_NEEDS_A_TOURNAMENT.WE_WHO_NEEDS_A_TOURNAMENT_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_WE_WHO_NEEDS_A_TOURNAMENT(int32_t EntryPoint); // Function WE_WHO_NEEDS_A_TOURNAMENT.WE_WHO_NEEDS_A_TOURNAMENT_C.ExecuteUbergraph_WE_WHO_NEEDS_A_TOURNAMENT // (Final|UbergraphFunction) // @ game+0x38a7480
};

