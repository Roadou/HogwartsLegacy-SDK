// BlueprintGeneratedClass BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C
// Size: 0x2d0 (Inherited: 0x2b0)
struct ABP_PuzzleCube_Levioso_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UAkComponent* Ak_Ambient_Sound; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_Brazier_SpellCubes_Incendio_Interior; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2c8(0x08)

	bool AccioStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.AccioStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DepulsoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DepulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DescendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DescendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowAccio(); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowAccio // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDepulso(); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowDepulso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDescendo(); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowDescendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowFlipendo(); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowFlipendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowLevioso(); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowLevioso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowWingardium(); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowWingardium // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ExpulsoStart(struct AActor* Instigator, struct FVector Location); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.ExpulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool FlipendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.FlipendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoChargedStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location, struct FVector Velocity, bool InitiatedByPlayer, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.LeviosoChargedStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoStart(struct AActor* Instigator, struct FVector Location, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.LeviosoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool WingardiumStart(struct ASpellTool* SpellTool, struct AActor* Instigator); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.WingardiumStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAccioEnd(struct AActor* Instigator, bool TransitioningToWingardium); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnAccioEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAccioFailed(); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnAccioFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAccioThrow(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector ThrowVelocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnAccioThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoFailed(); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnDepulsoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoThrow(struct ASpellTool* SpellTool, struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnDepulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnExpulsoThrow(struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnExpulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoFailed(); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnFlipendoFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoThrow(struct ASpellTool* SpellTool, struct FVector ThrowDirection, struct FVector ThrowVelocity, struct FVector AngularVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnFlipendoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoFailed(bool InitiatedByPlayer); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnLeviosoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumEnd(struct AActor* Instigator); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnWingardiumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumFailed(); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnWingardiumFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumGhostStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnWingardiumGhostStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoEnd(struct AActor* Instigator, bool InitiatedByPlayer); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnLeviosoEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PuzzleCube_Levioso(int32_t EntryPoint); // Function BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.ExecuteUbergraph_BP_PuzzleCube_Levioso // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

