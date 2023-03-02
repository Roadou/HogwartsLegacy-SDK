// BlueprintGeneratedClass BP_AstroDoorPillar.BP_AstroDoorPillar_C
// Size: 0x378 (Inherited: 0x248)
struct ABP_AstroDoorPillar_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_FreeStandingClock_HandMinutes_Dwiz; // 0x250(0x08)
	struct UNiagaraComponent* VFX_NS_LunarPuzzle_Orbs; // 0x258(0x08)
	struct UNiagaraComponent* VFX_NS_LunarPuzzle_Pillar_Light; // 0x260(0x08)
	struct UArrowComponent* Arrow; // 0x268(0x08)
	struct UStaticMeshComponent* SM_Astronomy_Column_Pillar_Short; // 0x270(0x08)
	struct USceneComponent* SceneRoot; // 0x278(0x08)
	struct UChildActorComponent* CounterClockwiseHandle; // 0x280(0x08)
	struct UChildActorComponent* ClockwiseHandle; // 0x288(0x08)
	struct USpotLightComponentWithCullingSettings* SpotLightComponentWithCullingSettings; // 0x290(0x08)
	struct UStaticMeshComponent* SM_Astronomy_Column_Wires_Short; // 0x298(0x08)
	struct UStaticMeshComponent* SM_Astronomy_Column_Top_Short; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_Astronomy_Column_PullBase_Short; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_Astronomy_Column_Crystal_Short; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_Astronomy_Column_Armilary_Short; // 0x2b8(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2c0(0x08)
	struct USphereComponent* Clockwise Hitbox; // 0x2c8(0x08)
	float Timeline_2_NewTrack_0_78F2180A4780A6DF3D00E987F93A69CE; // 0x2d0(0x04)
	enum class ETimelineDirection Timeline_2__Direction_78F2180A4780A6DF3D00E987F93A69CE; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct UTimelineComponent* Timeline_3; // 0x2d8(0x08)
	float Timeline_1_NewTrack_0_492BEC054C64DEA85F66FC999B4257C7; // 0x2e0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_492BEC054C64DEA85F66FC999B4257C7; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2e8(0x08)
	float Timeline_0_NewTrack_0_35836DF94E90A7547BAAC6A66685882D; // 0x2f0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_35836DF94E90A7547BAAC6A66685882D; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2f8(0x08)
	struct ANone* Handle_2; // 0x300(0x08)
	struct ANone* Handle_3; // 0x308(0x08)
	float RotationCoefficient; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct AActor* Target; // 0x318(0x08)
	bool Movable; // 0x320(0x01)
	enum class E_AstroPillarType Type; // 0x321(0x01)
	char pad_322[0x6]; // 0x322(0x06)
	struct FMulticastInlineDelegate Stopped; // 0x328(0x10)
	struct TArray<struct FVector> Solution Locations; // 0x338(0x10)
	float RotationScale; // 0x348(0x04)
	struct FRotator RotationAtRelease; // 0x34c(0x0c)
	struct FVector ClosestValidPoint; // 0x358(0x0c)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct USceneComponent*> MobilityChange; // 0x368(0x10)

	bool AccioStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.AccioStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DepulsoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.DepulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DescendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.DescendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowAccio(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.DisallowAccio // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDepulso(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.DisallowDepulso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDescendo(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.DisallowDescendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowFlipendo(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.DisallowFlipendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowLevioso(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.DisallowLevioso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowWingardium(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.DisallowWingardium // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ExpulsoStart(struct AActor* Instigator, struct FVector Location); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.ExpulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool FlipendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.FlipendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoChargedStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location, struct FVector Velocity, bool InitiatedByPlayer, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.LeviosoChargedStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoStart(struct AActor* Instigator, struct FVector Location, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.LeviosoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool WingardiumStart(struct ASpellTool* SpellTool, struct AActor* Instigator); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.WingardiumStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DIRCALC(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.DIRCALC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAccioFailed(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnAccioFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAccioThrow(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector ThrowVelocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnAccioThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoFailed(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnDepulsoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoThrow(struct ASpellTool* SpellTool, struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnDepulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnExpulsoThrow(struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnExpulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoFailed(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnFlipendoFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoThrow(struct ASpellTool* SpellTool, struct FVector ThrowDirection, struct FVector ThrowVelocity, struct FVector AngularVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnFlipendoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoEnd(struct AActor* Instigator, bool InitiatedByPlayer); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnLeviosoEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoFailed(bool InitiatedByPlayer); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnLeviosoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumEnd(struct AActor* Instigator); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnWingardiumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumFailed(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnWingardiumFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumGhostStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnWingardiumGhostStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAccioEnd(struct AActor* Instigator, bool TransitioningToWingardium); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.OnAccioEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ToggleAstroLights(bool On); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.ToggleAstroLights // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AstroDoorPillar(int32_t EntryPoint); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.ExecuteUbergraph_BP_AstroDoorPillar // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Stopped__DelegateSignature(); // Function BP_AstroDoorPillar.BP_AstroDoorPillar_C.Stopped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

