// BlueprintGeneratedClass BP_BrewingSite.BP_BrewingSite_C
// Size: 0x493 (Inherited: 0x2d8)
struct ABP_BrewingSite_C : ABrewingSite {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCameraStackComponent* CameraStack; // 0x2e0(0x08)
	struct UStaticMeshComponent* SM_PotionsSpoon; // 0x2e8(0x08)
	struct UWidgetComponent* UI_BP_BrewingSite; // 0x2f0(0x08)
	struct UAkComponent* Ak; // 0x2f8(0x08)
	struct UParticleSystemComponent* P_PotionStation_Hob; // 0x300(0x08)
	struct UParticleSystemComponent* BrewingParticles; // 0x308(0x08)
	struct USkeletalMeshComponent* SK_Cauldron; // 0x310(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x318(0x08)
	struct USceneComponent* Scene; // 0x320(0x08)
	struct FSTR_PotionStr PotionStruct; // 0x328(0x48)
	int32_t LoopCount; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct TMap<struct FName, struct USkeletalMesh*> CauldronList; // 0x378(0x50)
	struct TArray<struct UParticleSystem*> Burst Effect Array; // 0x3c8(0x10)
	struct FName CurrentCauldronID; // 0x3d8(0x08)
	struct FName DesiredCauldronID; // 0x3e0(0x08)
	enum class E_CauldronSpawnState CauldronSpawnState; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	struct FVector Potion Effect Location; // 0x3ec(0x0c)
	struct TMap<struct FName, struct FBP_PotionIngredient_AnimDetails> IngredientMeshList; // 0x3f8(0x50)
	int32_t IngredientLoopCounter; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UABP_BrewingSite_C* BrewingSite_ABP; // 0x450(0x08)
	enum class EBrewingState LastBrewingState; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct ABP_LightRig_NurturingStationBase_C* LightRig; // 0x460(0x08)
	struct UParticleSystemComponent* Stirring Particles; // 0x468(0x08)
	struct UUI_BP_BrewingSite_HUD_C* HUDWidget; // 0x470(0x08)
	bool bShouldShowHUD; // 0x478(0x01)
	bool bIsCreatingHUDPending; // 0x479(0x01)
	char pad_47A[0x6]; // 0x47a(0x06)
	struct TArray<struct UStaticMeshComponent*> IngredientComponents; // 0x480(0x10)
	bool bAreIngredientsVisible; // 0x490(0x01)
	bool bHasCalledEndPlay; // 0x491(0x01)
	bool IsClassroomSite; // 0x492(0x01)

	void GetCauldronState(enum class E_CauldronSpawnState& CauldronState); // Function BP_BrewingSite.BP_BrewingSite_C.GetCauldronState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIngredientVisibility(bool Visible); // Function BP_BrewingSite.BP_BrewingSite_C.SetIngredientVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetOrCreateIngredientComponent(int32_t Slot, struct UStaticMeshComponent*& Output); // Function BP_BrewingSite.BP_BrewingSite_C.GetOrCreateIngredientComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideHUD(); // Function BP_BrewingSite.BP_BrewingSite_C.HideHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowHUD(); // Function BP_BrewingSite.BP_BrewingSite_C.ShowHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCauldron(bool bShow); // Function BP_BrewingSite.BP_BrewingSite_C.ShowCauldron // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct USkeletalMesh* GetCauldronSkeletalMesh(); // Function BP_BrewingSite.BP_BrewingSite_C.GetCauldronSkeletalMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void UpdateCanHighlight(); // Function BP_BrewingSite.BP_BrewingSite_C.UpdateCanHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitialPotionVisuals(); // Function BP_BrewingSite.BP_BrewingSite_C.SetInitialPotionVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearPouredMeshes(); // Function BP_BrewingSite.BP_BrewingSite_C.ClearPouredMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetIngredientSlots(); // Function BP_BrewingSite.BP_BrewingSite_C.ResetIngredientSlots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIngredientSlotInfo(int32_t Slot, struct UStaticMesh* Mesh, bool Poured); // Function BP_BrewingSite.BP_BrewingSite_C.SetIngredientSlotInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reset Potion Station assets(); // Function BP_BrewingSite.BP_BrewingSite_C.Reset Potion Station assets // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetStructData(struct FName& Key); // Function BP_BrewingSite.BP_BrewingSite_C.GetStructData // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCauldron(struct FName CauldronID); // Function BP_BrewingSite.BP_BrewingSite_C.SetCauldron // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMaterialAndLiquidForPotion(); // Function BP_BrewingSite.BP_BrewingSite_C.SetMaterialAndLiquidForPotion // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitialBrewingState(enum class EBrewingState State); // Function BP_BrewingSite.BP_BrewingSite_C.SetInitialBrewingState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_23F584064C7F8E16068BE9B710E228BD(struct UObject* Loaded); // Function BP_BrewingSite.BP_BrewingSite_C.OnLoaded_23F584064C7F8E16068BE9B710E228BD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_23F584064C7F8E16068BE9B77D585B49(struct UObject* Loaded); // Function BP_BrewingSite.BP_BrewingSite_C.OnLoaded_23F584064C7F8E16068BE9B77D585B49 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BrewingSite.BP_BrewingSite_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BP_NotifyBrewingStateChange(enum class EBrewingState NewState, bool bIsInitialState); // Function BP_BrewingSite.BP_BrewingSite_C.BP_NotifyBrewingStateChange // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OpenSiteUI(); // Function BP_BrewingSite.BP_BrewingSite_C.OpenSiteUI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnBeginBrewing(); // Function BP_BrewingSite.BP_BrewingSite_C.OnBeginBrewing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBrewingComplete(); // Function BP_BrewingSite.BP_BrewingSite_C.OnBrewingComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPotionCollected(); // Function BP_BrewingSite.BP_BrewingSite_C.OnPotionCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStir(); // Function BP_BrewingSite.BP_BrewingSite_C.OnStir // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnableCamera(); // Function BP_BrewingSite.BP_BrewingSite_C.OnEnableCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DespawnCauldron(); // Function BP_BrewingSite.BP_BrewingSite_C.DespawnCauldron // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnCauldron(); // Function BP_BrewingSite.BP_BrewingSite_C.SpawnCauldron // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectedCauldronUpdated(struct FName CauldronID); // Function BP_BrewingSite.BP_BrewingSite_C.SelectedCauldronUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CauldronSpawned(); // Function BP_BrewingSite.BP_BrewingSite_C.CauldronSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CauldronDespawned(); // Function BP_BrewingSite.BP_BrewingSite_C.CauldronDespawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CauldronDespawning(); // Function BP_BrewingSite.BP_BrewingSite_C.CauldronDespawning // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CauldronSpawning(); // Function BP_BrewingSite.BP_BrewingSite_C.CauldronSpawning // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPotionCanceled(); // Function BP_BrewingSite.BP_BrewingSite_C.OnPotionCanceled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Ingredient_AnimNotify(int32_t Slot); // Function BP_BrewingSite.BP_BrewingSite_C.Ingredient_AnimNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_Pickup(); // Function BP_BrewingSite.BP_BrewingSite_C.AnimNotify_Pickup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Random Effect Trigger(); // Function BP_BrewingSite.BP_BrewingSite_C.Random Effect Trigger // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitialVisualState(); // Function BP_BrewingSite.BP_BrewingSite_C.SetInitialVisualState // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshBrewingSiteHUD(); // Function BP_BrewingSite.BP_BrewingSite_C.RefreshBrewingSiteHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void KillStirParticles(); // Function BP_BrewingSite.BP_BrewingSite_C.KillStirParticles // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BrewingSite.BP_BrewingSite_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnDisableCamera(bool ReturnToPlayer); // Function BP_BrewingSite.BP_BrewingSite_C.OnDisableCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateBrewingSiteHUD(); // Function BP_BrewingSite.BP_BrewingSite_C.CreateBrewingSiteHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BrewingSite(int32_t EntryPoint); // Function BP_BrewingSite.BP_BrewingSite_C.ExecuteUbergraph_BP_BrewingSite // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

