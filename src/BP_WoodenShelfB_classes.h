// BlueprintGeneratedClass BP_WoodenShelfB.BP_WoodenShelfB_C
// Size: 0x370 (Inherited: 0x357)
struct ABP_WoodenShelfB_C : ANone {
	char pad_357[0x1]; // 0x357(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x360(0x08)
	struct UAkComponent* Ak_BP_WoodenShelfB; // 0x368(0x08)

	bool DecreaseFire(float decreaseAmount); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool AccioStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.AccioStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DepulsoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.DepulsoStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DescendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.DescendoStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowAccio(); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.DisallowAccio // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDepulso(); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.DisallowDepulso // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDescendo(); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.DisallowDescendo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowFlipendo(); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.DisallowFlipendo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowLevioso(); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.DisallowLevioso // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowWingardium(); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.DisallowWingardium // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ExpulsoStart(struct AActor* Instigator, struct FVector Location); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.ExpulsoStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool FlipendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.FlipendoStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoChargedStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location, struct FVector Velocity, bool InitiatedByPlayer, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.LeviosoChargedStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoStart(struct AActor* Instigator, struct FVector Location, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.LeviosoStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool WingardiumStart(struct ASpellTool* SpellTool, struct AActor* Instigator); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.WingardiumStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void FireStarted(); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.FireStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WoodenShelfB(int32_t EntryPoint); // Function BP_WoodenShelfB.BP_WoodenShelfB_C.ExecuteUbergraph_BP_WoodenShelfB // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

