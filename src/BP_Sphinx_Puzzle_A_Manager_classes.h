// BlueprintGeneratedClass BP_Sphinx_Puzzle_A_Manager.BP_Sphinx_Puzzle_A_Manager_C
// Size: 0x2a0 (Inherited: 0x248)
struct ABP_Sphinx_Puzzle_A_Manager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct ABP_Sphinx_Puzzle_A_Lumos_C* Puzzle; // 0x258(0x08)
	struct TArray<struct ABP_Sphinx_Puzzle_A_Crystal_C*> Crystals; // 0x260(0x10)
	struct UCapsuleComponent* PlayerCapsule; // 0x270(0x08)
	int32_t NumCrystals; // 0x278(0x04)
	int32_t SolvedCrystals; // 0x27c(0x04)
	struct TArray<struct UAkAudioEvent*> SolvedSounds; // 0x280(0x10)
	struct TArray<struct UAkAudioEvent*> SolvedSounds_Motion; // 0x290(0x10)

	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_A_Manager.BP_Sphinx_Puzzle_A_Manager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Activated_Event(struct FVector Location); // Function BP_Sphinx_Puzzle_A_Manager.BP_Sphinx_Puzzle_A_Manager_C.Activated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_A_Manager(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_A_Manager.BP_Sphinx_Puzzle_A_Manager_C.ExecuteUbergraph_BP_Sphinx_Puzzle_A_Manager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

