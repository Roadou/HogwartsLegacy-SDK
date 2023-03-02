// BlueprintGeneratedClass BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C
// Size: 0x3f0 (Inherited: 0x3b1)
struct ABP_Sphinx_Puzzle_L_ReparoTrail_C : ABP_SphinxPuzzle_Base_C {
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UChildActorComponent* Manager; // 0x3c0(0x08)
	struct TArray<struct FSTR_Sphinx_Reparo_Statue> StatueDetails; // 0x3c8(0x10)
	struct TArray<struct ABP_Sphinx_Puzzle_L_Part_C*> TargetArray; // 0x3d8(0x10)
	struct FRandomStream Random Seed; // 0x3e8(0x08)

	void Build(); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.Build // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NotifyCurrentState(enum class EInteractiveState CurrentObjectState); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.NotifyCurrentState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NotifyBeginPuzzle(enum class EInteractiveState State); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.NotifyBeginPuzzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Solved(); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.Solved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PuzzleStart(struct ABP_Sphinx_Puzzle_L_Part_C* Arrow, struct UObjectStateManager* ArrowManager); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.PuzzleStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature(); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_L_ReparoTrail(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_L_ReparoTrail.BP_Sphinx_Puzzle_L_ReparoTrail_C.ExecuteUbergraph_BP_Sphinx_Puzzle_L_ReparoTrail // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

