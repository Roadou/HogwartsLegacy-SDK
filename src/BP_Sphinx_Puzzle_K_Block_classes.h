// BlueprintGeneratedClass BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C
// Size: 0x380 (Inherited: 0x248)
struct ABP_Sphinx_Puzzle_K_Block_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_Sphinx_Puzzle_K_Block; // 0x250(0x08)
	struct UBoxComponent* BaseOverlap3; // 0x258(0x08)
	struct UBoxComponent* BaseOverlap2; // 0x260(0x08)
	struct UBoxComponent* BaseOverlap1; // 0x268(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x270(0x08)
	struct UStaticMeshComponent* 6_BottomDecal; // 0x278(0x08)
	struct UStaticMeshComponent* 5_TopDecal; // 0x280(0x08)
	struct UStaticMeshComponent* 4_LeftDecal; // 0x288(0x08)
	struct UStaticMeshComponent* 3_BackDecal; // 0x290(0x08)
	struct UStaticMeshComponent* 2_RightDecal; // 0x298(0x08)
	struct UStaticMeshComponent* 1_FrontDecal; // 0x2a0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2a8(0x08)
	struct UStaticMeshComponent* bLock; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	struct FRotator CurRot; // 0x2c0(0x0c)
	bool bActive; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct FMulticastInlineDelegate SolvedEvent; // 0x2d0(0x10)
	bool bStarted; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct TArray<struct UStaticMeshComponent*> SymbolComps; // 0x2e8(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> SymbolMeshes; // 0x2f8(0x10)
	struct TArray<struct FSTR_Sphinx_Flipendo_Block_Sub> NewSymbols; // 0x308(0x10)
	struct FRotator InitRot; // 0x318(0x0c)
	char pad_324[0x4]; // 0x324(0x04)
	struct ABP_Sphinx_Puzzle_K_Base_C* Base; // 0x328(0x08)
	struct FVector TempVel; // 0x330(0x0c)
	bool bNoArresto; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct ASpellTool* AccioTracker; // 0x340(0x08)
	struct FRotator AccioRot; // 0x348(0x0c)
	bool bLevioso; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct FMulticastInlineDelegate Start; // 0x358(0x10)
	bool SkinFXLoaded; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct UMaterialPermuterLoadingBundle* SkinFXBundle; // 0x370(0x08)
	struct FRandomStream Random Seed; // 0x378(0x08)

	bool DisallowArrestoMomentum(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.DisallowArrestoMomentum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DescendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.DescendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDescendo(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.DisallowDescendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool AccioStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.AccioStart // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DepulsoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.DepulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowAccio(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.DisallowAccio // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDepulso(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.DisallowDepulso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowFlipendo(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.DisallowFlipendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowLevioso(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.DisallowLevioso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowWingardium(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.DisallowWingardium // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ExpulsoStart(struct AActor* Instigator, struct FVector Location); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.ExpulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool FlipendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.FlipendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoChargedStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location, struct FVector Velocity, bool InitiatedByPlayer, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.LeviosoChargedStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoStart(struct AActor* Instigator, struct FVector Location, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.LeviosoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool WingardiumStart(struct ASpellTool* SpellTool, struct AActor* Instigator); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.WingardiumStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RotateBlock90(struct FVector HitLocation); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.RotateBlock90 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Build(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.Build // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetRotDir(struct FVector AngularVelocity, struct FVector& AddVec, bool& bSuccess); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.GetRotDir // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAccioThrow(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector ThrowVelocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnAccioThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAccioFailed(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnAccioFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoThrow(struct ASpellTool* SpellTool, struct FVector ThrowDirection, struct FVector ThrowVelocity, struct FVector AngularVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnFlipendoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoThrow(struct ASpellTool* SpellTool, struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnDepulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void CheckRot(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.CheckRot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Success(float DelayTime); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.Success // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExpulsoThrow(struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnExpulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumBegin(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnArrestoMomentumBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumEnd(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnArrestoMomentumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AccioTrack(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.AccioTrack // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAccioEnd(struct AActor* Instigator, bool TransitioningToWingardium); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnAccioEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ResetMotors(bool bStartSpell, bool bAccioStart, bool bEndSpellDelay); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.ResetMotors // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ResetAccio(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.ResetAccio // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoEnd(struct AActor* Instigator, bool InitiatedByPlayer); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnLeviosoEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumEnd(struct AActor* Instigator); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnWingardiumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BaseOverlap1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.BndEvt__BaseOverlap1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BaseOverlap2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.BndEvt__BaseOverlap2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BaseOverlap3_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.BndEvt__BaseOverlap3_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BaseOverlap(struct UPrimitiveComponent* OtherComp); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.BaseOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumGhostStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnWingardiumGhostStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumFailed(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnWingardiumFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoFailed(bool InitiatedByPlayer); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnLeviosoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoFailed(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnFlipendoFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoFailed(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.OnDepulsoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reveal(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.Reveal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadSolution(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.LoadSolution // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_K_Block(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.ExecuteUbergraph_BP_Sphinx_Puzzle_K_Block // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Start__DelegateSignature(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.Start__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SolvedEvent__DelegateSignature(); // Function BP_Sphinx_Puzzle_K_Block.BP_Sphinx_Puzzle_K_Block_C.SolvedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

