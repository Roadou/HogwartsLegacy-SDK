// BlueprintGeneratedClass BP_Sphinx_Puzzle_L_Manager.BP_Sphinx_Puzzle_L_Manager_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_Sphinx_Puzzle_L_Manager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct ABP_Sphinx_Puzzle_L_ReparoTrail_C* Puzzle; // 0x258(0x08)
	struct TArray<struct ABP_Sphinx_Puzzle_L_Part_C*> Targets; // 0x260(0x10)
	struct UCapsuleComponent* PlayerCapsule; // 0x270(0x08)
	int32_t NumTargets; // 0x278(0x04)
	int32_t CompletedTargets; // 0x27c(0x04)
	int32_t ClosestIndex; // 0x280(0x04)
	float SmallestDist; // 0x284(0x04)

	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_L_Manager.BP_Sphinx_Puzzle_L_Manager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnBroken(bool bActive); // Function BP_Sphinx_Puzzle_L_Manager.BP_Sphinx_Puzzle_L_Manager_C.OnBroken // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRepaired(struct ABP_Sphinx_Puzzle_L_Part_C* Arrow, struct UObjectStateManager* ArrowManager); // Function BP_Sphinx_Puzzle_L_Manager.BP_Sphinx_Puzzle_L_Manager_C.OnRepaired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadSolution(); // Function BP_Sphinx_Puzzle_L_Manager.BP_Sphinx_Puzzle_L_Manager_C.LoadSolution // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_L_Manager(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_L_Manager.BP_Sphinx_Puzzle_L_Manager_C.ExecuteUbergraph_BP_Sphinx_Puzzle_L_Manager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

