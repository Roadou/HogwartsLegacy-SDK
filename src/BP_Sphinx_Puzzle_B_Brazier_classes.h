// BlueprintGeneratedClass BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C
// Size: 0x3f0 (Inherited: 0x3b1)
struct ABP_Sphinx_Puzzle_B_Brazier_C : ABP_SphinxPuzzle_Base_C {
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UChildActorComponent* Manager; // 0x3c0(0x08)
	struct TArray<struct FSTR_Sphinx_Incendio_Column> ColumnPlacements; // 0x3c8(0x10)
	struct TArray<struct ABP_Sphinx_Puzzle_B_Part_C*> IncendioColumns; // 0x3d8(0x10)
	struct ABP_Sphinx_Puzzle_B_Manager_C* ManagerActor; // 0x3e8(0x08)

	void Build(); // Function BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.Build // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DefaultSetup(); // Function BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.DefaultSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NotifyCurrentState(enum class EInteractiveState CurrentObjectState); // Function BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.NotifyCurrentState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NotifyBeginPuzzle(enum class EInteractiveState State); // Function BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.NotifyBeginPuzzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Solved(); // Function BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.Solved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PuzzleStart(); // Function BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.PuzzleStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature(); // Function BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_B_Brazier(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.ExecuteUbergraph_BP_Sphinx_Puzzle_B_Brazier // (Final|UbergraphFunction) // @ game+0x38a7480
};

