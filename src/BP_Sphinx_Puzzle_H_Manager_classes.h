// BlueprintGeneratedClass BP_Sphinx_Puzzle_H_Manager.BP_Sphinx_Puzzle_H_Manager_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_Sphinx_Puzzle_H_Manager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct ABP_Sphinx_Puzzle_H_StupefyTarget_C* Puzzle; // 0x258(0x08)
	struct TArray<struct ABP_Sphinx_Puzzle_H_Part_C*> Stones; // 0x260(0x10)
	struct UCapsuleComponent* PlayerCapsule; // 0x270(0x08)
	int32_t NumStones; // 0x278(0x04)
	int32_t DestroyedStones; // 0x27c(0x04)

	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_H_Manager.BP_Sphinx_Puzzle_H_Manager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StoneDestroyed(); // Function BP_Sphinx_Puzzle_H_Manager.BP_Sphinx_Puzzle_H_Manager_C.StoneDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StoneRepaired(); // Function BP_Sphinx_Puzzle_H_Manager.BP_Sphinx_Puzzle_H_Manager_C.StoneRepaired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_H_Manager(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_H_Manager.BP_Sphinx_Puzzle_H_Manager_C.ExecuteUbergraph_BP_Sphinx_Puzzle_H_Manager // (Final|UbergraphFunction) // @ game+0x38a7480
};

