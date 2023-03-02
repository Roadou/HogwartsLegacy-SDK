// BlueprintGeneratedClass BP_Sphinx_Puzzle_K_Manager.BP_Sphinx_Puzzle_K_Manager_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_Sphinx_Puzzle_K_Manager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct ABP_Sphinx_Puzzle_K_BlockMatch_C* Puzzle; // 0x258(0x08)
	struct TArray<struct ABP_Sphinx_Puzzle_K_Block_C*> Blocks; // 0x260(0x10)
	struct UCapsuleComponent* PlayerCapsule; // 0x270(0x08)
	int32_t NumBlocks; // 0x278(0x04)
	int32_t SolvedBlocks; // 0x27c(0x04)

	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_K_Manager.BP_Sphinx_Puzzle_K_Manager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Activated_Event(); // Function BP_Sphinx_Puzzle_K_Manager.BP_Sphinx_Puzzle_K_Manager_C.Activated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_K_Manager(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_K_Manager.BP_Sphinx_Puzzle_K_Manager_C.ExecuteUbergraph_BP_Sphinx_Puzzle_K_Manager // (Final|UbergraphFunction) // @ game+0x38a7480
};

