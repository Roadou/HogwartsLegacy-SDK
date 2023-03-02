// BlueprintGeneratedClass BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C
// Size: 0x310 (Inherited: 0x268)
struct ABP_Sphinx_Puzzle_A_Crystal_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USphereComponent* OverlapSphere; // 0x270(0x08)
	struct UNiagaraComponent* Particles; // 0x278(0x08)
	struct USkeletalMeshComponent* Vine; // 0x280(0x08)
	struct UAkComponent* Ak_BP_Sphinx_Puzzle_A_Crystal; // 0x288(0x08)
	struct UObjectStateComponent* ObjectState; // 0x290(0x08)
	struct UStaticMeshComponent* SM_LumosBase; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	struct TArray<struct ABP_Sphinx_Puzzle_A_GlowBugs_C*> Glowbugs; // 0x2a8(0x10)
	struct FMulticastInlineDelegate Complete; // 0x2b8(0x10)
	bool bCompleted; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> Meshes; // 0x2d0(0x10)
	struct TArray<struct UMaterialInstance*> Materials; // 0x2e0(0x10)
	int32_t MeshNum; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct AActor* CurGlowBug; // 0x2f8(0x08)
	struct UMaterialInstanceDynamic* MatBase; // 0x300(0x08)
	struct UMaterialInstanceDynamic* MatCrystal; // 0x308(0x08)

	void Build(int32_t Mesh); // Function BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.Build // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PuzzleSolved(); // Function BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.PuzzleSolved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Grabbed_Event(); // Function BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.Grabbed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Dropped_Event(); // Function BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.Dropped_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reveal(); // Function BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.Reveal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadSolution(); // Function BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.LoadSolution // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Sphinx_Puzzle_A_Crystal_OverlapSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.BndEvt__BP_Sphinx_Puzzle_A_Crystal_OverlapSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_A_Crystal(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.ExecuteUbergraph_BP_Sphinx_Puzzle_A_Crystal // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Complete__DelegateSignature(struct FVector Location); // Function BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.Complete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

