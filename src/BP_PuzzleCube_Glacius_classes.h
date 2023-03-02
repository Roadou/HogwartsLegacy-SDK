// BlueprintGeneratedClass BP_PuzzleCube_Glacius.BP_PuzzleCube_Glacius_C
// Size: 0x2d0 (Inherited: 0x2b0)
struct ABP_PuzzleCube_Glacius_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UAkComponent* Ak_Ambient_Sound; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_Brazier_SpellCubes_Incendio_Interior; // 0x2c0(0x08)
	struct UStaticMeshComponent* SM_Brazier_SpellCubes_Glacius; // 0x2c8(0x08)

	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_PuzzleCube_Glacius.BP_PuzzleCube_Glacius_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_PuzzleCube_Glacius.BP_PuzzleCube_Glacius_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_PuzzleCube_Glacius.BP_PuzzleCube_Glacius_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_PuzzleCube_Glacius.BP_PuzzleCube_Glacius_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_PuzzleCube_Glacius.BP_PuzzleCube_Glacius_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PuzzleCube_Glacius.BP_PuzzleCube_Glacius_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PuzzleCube_Glacius(int32_t EntryPoint); // Function BP_PuzzleCube_Glacius.BP_PuzzleCube_Glacius_C.ExecuteUbergraph_BP_PuzzleCube_Glacius // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

