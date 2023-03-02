// BlueprintGeneratedClass BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C
// Size: 0x290 (Inherited: 0x248)
struct ABP_Sphinx_Puzzle_B_Manager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct ABP_Sphinx_Puzzle_B_Brazier_C* Puzzle; // 0x258(0x08)
	struct TArray<struct ABP_Sphinx_Puzzle_B_Part_C*> Columns; // 0x260(0x10)
	struct FMulticastInlineDelegate Solved; // 0x270(0x10)
	struct FMulticastInlineDelegate Start; // 0x280(0x10)

	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Lit_Event(); // Function BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.Lit_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Fail_Event(); // Function BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.Fail_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Restart_Event(); // Function BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.Restart_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_B_Manager(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.ExecuteUbergraph_BP_Sphinx_Puzzle_B_Manager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Start__DelegateSignature(); // Function BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.Start__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Solved__DelegateSignature(); // Function BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.Solved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

