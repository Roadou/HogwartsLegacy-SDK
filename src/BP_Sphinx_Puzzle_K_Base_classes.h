// BlueprintGeneratedClass BP_Sphinx_Puzzle_K_Base.BP_Sphinx_Puzzle_K_Base_C
// Size: 0x2f0 (Inherited: 0x268)
struct ABP_Sphinx_Puzzle_K_Base_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USkeletalMeshComponent* Vine; // 0x270(0x08)
	struct UParticleSystemComponent* BlockFall_VFX; // 0x278(0x08)
	struct UBoxComponent* CubeOverlap; // 0x280(0x08)
	struct UStaticMeshComponent* 4_LeftDecal; // 0x288(0x08)
	struct UStaticMeshComponent* 3_BackDecal; // 0x290(0x08)
	struct UStaticMeshComponent* 2_RightDecal; // 0x298(0x08)
	struct UStaticMeshComponent* 1_FrontDecal; // 0x2a0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2a8(0x08)
	struct UStaticMeshComponent* Base; // 0x2b0(0x08)
	struct USceneComponent* Root; // 0x2b8(0x08)
	struct TArray<struct FSTR_Sphinx_Flipendo_Block_Sub> NewSymbols; // 0x2c0(0x10)
	struct TArray<struct UStaticMeshComponent*> SymbolComps; // 0x2d0(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> SymbolMeshes; // 0x2e0(0x10)

	void Build(); // Function BP_Sphinx_Puzzle_K_Base.BP_Sphinx_Puzzle_K_Base_C.Build // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Sphinx_Puzzle_K_Base.BP_Sphinx_Puzzle_K_Base_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Success(); // Function BP_Sphinx_Puzzle_K_Base.BP_Sphinx_Puzzle_K_Base_C.Success // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Start(); // Function BP_Sphinx_Puzzle_K_Base.BP_Sphinx_Puzzle_K_Base_C.Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reveal(); // Function BP_Sphinx_Puzzle_K_Base.BP_Sphinx_Puzzle_K_Base_C.Reveal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadSolution(); // Function BP_Sphinx_Puzzle_K_Base.BP_Sphinx_Puzzle_K_Base_C.LoadSolution // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_K_Base(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_K_Base.BP_Sphinx_Puzzle_K_Base_C.ExecuteUbergraph_BP_Sphinx_Puzzle_K_Base // (Final|UbergraphFunction) // @ game+0x38a7480
};

