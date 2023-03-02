// BlueprintGeneratedClass BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C
// Size: 0x359 (Inherited: 0x268)
struct ABP_Sphinx_Puzzle_E_Base_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USkeletalMeshComponent* Vine4; // 0x270(0x08)
	struct USkeletalMeshComponent* Vine3; // 0x278(0x08)
	struct UObjectStateComponent* ObjectState; // 0x280(0x08)
	struct USkeletalMeshComponent* Vine2; // 0x288(0x08)
	struct USkeletalMeshComponent* Vine1; // 0x290(0x08)
	struct UNiagaraComponent* MagicBurst; // 0x298(0x08)
	struct UNiagaraComponent* DustRing; // 0x2a0(0x08)
	struct UStaticMeshComponent* Inner_Base; // 0x2a8(0x08)
	struct UStaticMeshComponent* Outer_Base; // 0x2b0(0x08)
	struct UCapsuleComponent* OverlapTrigger; // 0x2b8(0x08)
	struct UBillboardComponent* Billboard4; // 0x2c0(0x08)
	struct UBillboardComponent* Billboard3; // 0x2c8(0x08)
	struct UBillboardComponent* Billboard2; // 0x2d0(0x08)
	struct UBillboardComponent* Billboard1; // 0x2d8(0x08)
	struct UBillboardComponent* Billboard; // 0x2e0(0x08)
	struct USceneComponent* Root; // 0x2e8(0x08)
	struct TArray<struct ABP_Sphinx_Puzzle_E_Rock_C*> Rocks; // 0x2f0(0x10)
	struct ABP_Sphinx_Puzzle_E_Rock_C* CurRock; // 0x300(0x08)
	struct FMulticastInlineDelegate SolvedEvent; // 0x308(0x10)
	struct TArray<struct ABP_Sphinx_Puzzle_E_Rock_C*> RemainingRocks; // 0x318(0x10)
	float SmallestDist; // 0x328(0x04)
	float SolvedNum; // 0x32c(0x04)
	struct TArray<struct FVector> RemainingLocs; // 0x330(0x10)
	struct FVector CurLoc; // 0x340(0x0c)
	int32_t NumLeft; // 0x34c(0x04)
	bool bRocksSet; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int32_t Time; // 0x354(0x04)
	bool bSolved; // 0x358(0x01)

	void SetFlockLocs(); // Function BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.SetFlockLocs // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFinished(); // Function BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.OnFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReplaceRock(struct ABP_Sphinx_Puzzle_E_Rock_C* OldRock, struct ABP_Sphinx_Puzzle_E_Rock_C* NewRock); // Function BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.ReplaceRock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Rise(); // Function BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.Rise // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reveal(); // Function BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.Reveal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadSolution(struct ABP_Sphinx_Puzzle_E_Stack_C* Stack); // Function BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.LoadSolution // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinishLoadSolution(); // Function BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.FinishLoadSolution // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_E_Base(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.ExecuteUbergraph_BP_Sphinx_Puzzle_E_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void SolvedEvent__DelegateSignature(); // Function BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.SolvedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

