// BlueprintGeneratedClass BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C
// Size: 0x418 (Inherited: 0x3b1)
struct ABP_Sphinx_Puzzle_E_RockStack_C : ABP_SphinxPuzzle_Base_C {
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct TArray<struct FSTR_Sphinx_Rock_Stack> StackPlacements; // 0x3c0(0x10)
	int32_t NumSolved; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct ABP_Sphinx_Puzzle_E_Rock_C*> Rocks; // 0x3d8(0x10)
	struct TArray<struct ABP_Sphinx_Puzzle_E_Rock_C*> CurRocks; // 0x3e8(0x10)
	struct TArray<struct ABP_Sphinx_Puzzle_E_Stack_C*> RockStacks; // 0x3f8(0x10)
	struct TArray<struct ABP_Sphinx_Puzzle_E_Base_C*> RockBases; // 0x408(0x10)

	void Build(); // Function BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.Build // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NotifyCurrentState(enum class EInteractiveState CurrentObjectState); // Function BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.NotifyCurrentState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NotifyBeginPuzzle(enum class EInteractiveState State); // Function BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.NotifyBeginPuzzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Solved(); // Function BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.Solved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PuzzleStart(); // Function BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.PuzzleStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Error(struct ABP_Sphinx_Puzzle_E_Rock_C* Rock); // Function BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.Error // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BaseSolved(); // Function BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.BaseSolved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature(); // Function BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_E_RockStack(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.ExecuteUbergraph_BP_Sphinx_Puzzle_E_RockStack // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

