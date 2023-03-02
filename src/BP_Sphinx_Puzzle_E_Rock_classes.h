// BlueprintGeneratedClass BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C
// Size: 0x370 (Inherited: 0x258)
struct ABP_Sphinx_Puzzle_E_Rock_C : AStaticMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct USkeletalMeshComponentBudgeted* Vine; // 0x260(0x08)
	struct URollingComponent* Rolling; // 0x268(0x08)
	struct UObjectStateComponent* ObjectState; // 0x270(0x08)
	bool bSolved; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FMulticastInlineDelegate Spell_Start; // 0x280(0x10)
	struct FMulticastInlineDelegate Spell_End; // 0x290(0x10)
	struct FMulticastInlineDelegate Start_Solve; // 0x2a0(0x10)
	struct FMulticastInlineDelegate Finished; // 0x2b0(0x10)
	struct FVector FlockLoc; // 0x2c0(0x0c)
	bool bFlocking; // 0x2cc(0x01)
	bool bChecking; // 0x2cd(0x01)
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FMulticastInlineDelegate Error; // 0x2d0(0x10)
	struct ABP_Sphinx_Puzzle_E_Stack_C* StackRef; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)
	struct FTransform StartTransform; // 0x2f0(0x30)
	struct FMulticastInlineDelegate Oppugno_Start; // 0x320(0x10)
	struct APlayerCameraManager* PlayerCamManager; // 0x330(0x08)
	struct AActor* PlayerRef; // 0x338(0x08)
	bool bBlocked; // 0x340(0x01)
	bool bRevealed; // 0x341(0x01)
	bool bActivated; // 0x342(0x01)
	char pad_343[0x1]; // 0x343(0x01)
	float CurTime; // 0x344(0x04)
	float TimeLastAffectedBySpell; // 0x348(0x04)
	bool FlockingPaused; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct FVector StartLocation; // 0x350(0x0c)
	bool bIsSolving; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	struct FVector LastLocation; // 0x360(0x0c)
	float StaleLocationCounter; // 0x36c(0x04)

	bool StartReveal(struct AActor* Instigator, bool ShowOccluded); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.StartReveal // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsSolving(bool IsSolving); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.SetIsSolving // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckForStaleLocation(float DeltaTime, bool& LocationIsStale); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.CheckForStaleLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckForImminentZKill(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.CheckForImminentZKill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateGroupedRocks(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ActivateGroupedRocks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStaticMesh(struct TSoftObjectPtr<UStaticMesh> Static Mesh); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.SetStaticMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRevealFade(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnBeginRevealFade // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHiddenObjectHinted(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnHiddenObjectHinted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHiddenObjectRevealed(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnHiddenObjectRevealed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Solved(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Solved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BeginSolving(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.BeginSolving // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BeginFlock(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.BeginFlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndFlock(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.EndFlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PauseFlock(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.PauseFlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinalSolve(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.FinalSolve // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StartMove(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.StartMove // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndMove(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.EndMove // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllowTeleport(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.AllowTeleport // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PauseMove(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.PauseMove // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResumeFlock(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ResumeFlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEndReveal(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnEndReveal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Reveal(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Reveal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadSolution(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.LoadSolution // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_E_Rock(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ExecuteUbergraph_BP_Sphinx_Puzzle_E_Rock // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Oppugno_Start__DelegateSignature(struct UPrimitiveComponent* HitComp); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Oppugno_Start__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Error__DelegateSignature(struct ABP_Sphinx_Puzzle_E_Rock_C* Rock); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Error__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Finished__DelegateSignature(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Finished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Start_Solve__DelegateSignature(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Start_Solve__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spell_End__DelegateSignature(); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Spell_End__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spell_Start__DelegateSignature(struct UPrimitiveComponent* HitComp); // Function BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Spell_Start__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

