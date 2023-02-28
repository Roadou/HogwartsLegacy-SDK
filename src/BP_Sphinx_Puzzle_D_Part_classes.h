// BlueprintGeneratedClass BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C
// Size: 0x2d1 (Inherited: 0x268)
struct ABP_Sphinx_Puzzle_D_Part_C : APhoenixBudgetedStaticMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UAkComponent* Ak_BP_Sphinx_Puzzle_D_Part; // 0x270(0x08)
	struct URollingComponent* Rolling; // 0x278(0x08)
	struct USkeletalMeshComponent* Vine; // 0x280(0x08)
	struct UObjectStateComponent* ObjectState; // 0x288(0x08)
	struct FMulticastInlineDelegate Start; // 0x290(0x10)
	struct FTransform InitialTransform; // 0x2a0(0x30)
	bool bFinished; // 0x2d0(0x01)

	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Success(); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.Success // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Teleport(); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.Teleport // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature(struct UPrimitiveComponent* WakingComponent, struct FName BoneName); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature(struct UPrimitiveComponent* SleepingComponent, struct FName BoneName); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Reveal(); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.Reveal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void LoadSolution(); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.LoadSolution // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Velocity Check Teleport(); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.Velocity Check Teleport // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_D_Part(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.ExecuteUbergraph_BP_Sphinx_Puzzle_D_Part // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Start__DelegateSignature(); // Function BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.Start__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

