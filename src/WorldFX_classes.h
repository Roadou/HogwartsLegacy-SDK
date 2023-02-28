// Class WorldFX.StatsComponentReportComponent
// Size: 0xe8 (Inherited: 0xc8)
struct UStatsComponentReportComponent : UActorComponent {
	struct FStatsComponentReportSettings Report; // 0xc8(0x18)
	uint32_t OnReport; // 0xe0(0x04)
	uint32_t NextReport; // 0xe4(0x04)
};

// Class WorldFX.StatsComponentReport
// Size: 0x250 (Inherited: 0x248)
struct AStatsComponentReport : AActor {
	struct UStatsComponentReportComponent* UpdateComponent; // 0x248(0x08)
};

// Class WorldFX.WorldFXComponentBase
// Size: 0x240 (Inherited: 0x220)
struct UWorldFXComponentBase : USceneComponent {
	struct FWorldFXFullTracker Tracker; // 0x220(0x18)
	char pad_238[0x8]; // 0x238(0x08)

	void ForceRefreshPreview(); // Function WorldFX.WorldFXComponentBase.ForceRefreshPreview // (Final|Native|Public) // @ game+0x1074730
};

// Class WorldFX.WorldFXComponent
// Size: 0x370 (Inherited: 0x240)
struct UWorldFXComponent : UWorldFXComponentBase {
	struct UWorldFXRule* Rule; // 0x238(0x08)
	struct FWorldFXFull WorldFX; // 0x240(0x120)
	bool bSpawnAttached; // 0x360(0x01)
	char pad_369[0x7]; // 0x369(0x07)

	void SetSpawnAttached(bool bNewSpawnAttached); // Function WorldFX.WorldFXComponent.SetSpawnAttached // (Final|Native|Public|BlueprintCallable) // @ game+0x1d94ac0
	void ResetCascadeParameters(); // Function WorldFX.WorldFXComponent.ResetCascadeParameters // (Final|Native|Public) // @ game+0x13244f0
	void RefreshCascadeParameters(); // Function WorldFX.WorldFXComponent.RefreshCascadeParameters // (Final|Native|Public) // @ game+0x13244f0
	void GetSpawnAttached(bool& bIsSpawnAttached); // Function WorldFX.WorldFXComponent.GetSpawnAttached // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d94770
	struct UWorldFXComponent* CreateWorldFX(struct USceneComponent* AttachTo, struct FWorldFXFull WorldFXSetup, struct FTransform RelativeTransform); // Function WorldFX.WorldFXComponent.CreateWorldFX // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1d94230
};

// Class WorldFX.WorldFXPresetComponent
// Size: 0x3c0 (Inherited: 0x240)
struct UWorldFXPresetComponent : UWorldFXComponentBase {
	struct FDataTableRowHandle Preset; // 0x238(0x10)
	struct UAkAudioEvent* SFXEventOverride; // 0x248(0x08)
	bool bOverrideExtraEnabled; // 0x250(0x01)
	struct FWorldFXAudioEventExtra OverrideExtra; // 0x258(0x28)
	struct UWorldFXNiagaraSystemInitializer* NiagaraLocalInitializer; // 0x280(0x08)
	struct UWorldFXCascadeInstanceParametersBase* CascadeLocalInstanceParameters; // 0x288(0x08)
	struct UWorldFXRule* Rule; // 0x290(0x08)
	struct FWorldFXFull WorldFX; // 0x298(0x120)
	char bPresetSpawnAttached : 1; // 0x3b8(0x01)
	char bSpawnAttached : 1; // 0x3b8(0x01)
	char bOverride_SpawnAttached : 1; // 0x3b8(0x01)
	char pad_3B9_3 : 5; // 0x3b9(0x01)
	char pad_3BA[0x6]; // 0x3ba(0x06)

	void SetSpawnAttachedOverride(bool bNewSpawnAttached); // Function WorldFX.WorldFXPresetComponent.SetSpawnAttachedOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x1d94c90
	void ResetCascadeParameters(); // Function WorldFX.WorldFXPresetComponent.ResetCascadeParameters // (Final|Native|Public) // @ game+0x13244f0
	void RefreshCascadeParameters(); // Function WorldFX.WorldFXPresetComponent.RefreshCascadeParameters // (Final|Native|Public) // @ game+0x13244f0
	void GetSpawnAttached(bool& bIsSpawnAttached); // Function WorldFX.WorldFXPresetComponent.GetSpawnAttached // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d94800
	void ClearSpawnAttachedOverride(); // Function WorldFX.WorldFXPresetComponent.ClearSpawnAttachedOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x1d94210
};

// Class WorldFX.WorldFXAudioComponent
// Size: 0x2a0 (Inherited: 0x220)
struct UWorldFXAudioComponent : USceneComponent {
	struct UWorldFXRule* Rule; // 0x218(0x08)
	struct FWorldFXAudioEvent SFX; // 0x220(0x60)
	struct FWorldFXAudioTracker Tracker; // 0x280(0x10)
	bool bSpawnAttached; // 0x290(0x01)
	char pad_299[0x7]; // 0x299(0x07)

	void SetSpawnAttached(bool bNewSpawnAttached); // Function WorldFX.WorldFXAudioComponent.SetSpawnAttached // (Final|Native|Public|BlueprintCallable) // @ game+0x1d94a20
	void GetSpawnAttached(bool& bIsSpawnAttached); // Function WorldFX.WorldFXAudioComponent.GetSpawnAttached // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d946e0
	void ForceRefreshPreview(); // Function WorldFX.WorldFXAudioComponent.ForceRefreshPreview // (Final|Native|Public) // @ game+0x1074730
};

// Class WorldFX.WorldFXActor
// Size: 0x250 (Inherited: 0x248)
struct AWorldFXActor : AActor {
	struct UWorldFXComponent* FXComponent; // 0x248(0x08)

	void SetSpawnAttached(bool bNewSpawnAttached); // Function WorldFX.WorldFXActor.SetSpawnAttached // (Final|Native|Public|BlueprintCallable) // @ game+0x1d948b0
	void ResetCascadeParameters(); // Function WorldFX.WorldFXActor.ResetCascadeParameters // (Final|Native|Public) // @ game+0x13244f0
	void RefreshCascadeParameters(); // Function WorldFX.WorldFXActor.RefreshCascadeParameters // (Final|Native|Public) // @ game+0x13244f0
	void GetSpawnAttached(bool& bIsSpawnAttached); // Function WorldFX.WorldFXActor.GetSpawnAttached // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d94420
	void ForceRefreshPreview(); // Function WorldFX.WorldFXActor.ForceRefreshPreview // (Final|Native|Public) // @ game+0x1074730
};

// Class WorldFX.WorldFXPresetActor
// Size: 0x250 (Inherited: 0x248)
struct AWorldFXPresetActor : AActor {
	struct UWorldFXPresetComponent* FXComponent; // 0x248(0x08)

	void SetSpawnAttachedOverride(bool bNewSpawnAttached); // Function WorldFX.WorldFXPresetActor.SetSpawnAttachedOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x1d94b70
	void ResetCascadeParameters(); // Function WorldFX.WorldFXPresetActor.ResetCascadeParameters // (Final|Native|Public) // @ game+0x13244f0
	void RefreshCascadeParameters(); // Function WorldFX.WorldFXPresetActor.RefreshCascadeParameters // (Final|Native|Public) // @ game+0x13244f0
	void GetSpawnAttached(bool& bIsSpawnAttached); // Function WorldFX.WorldFXPresetActor.GetSpawnAttached // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d94580
	void ForceRefreshPreview(); // Function WorldFX.WorldFXPresetActor.ForceRefreshPreview // (Final|Native|Public) // @ game+0x1074730
	void ClearSpawnAttachedOverride(bool bNewSpawnAttached); // Function WorldFX.WorldFXPresetActor.ClearSpawnAttachedOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x1d94160
};

// Class WorldFX.WorldFXPresetListActor
// Size: 0x258 (Inherited: 0x248)
struct AWorldFXPresetListActor : AActor {
	struct TArray<struct UWorldFXPresetComponent*> Presets; // 0x248(0x10)

	void SetSpawnAttachedOverride(bool bNewSpawnAttached); // Function WorldFX.WorldFXPresetListActor.SetSpawnAttachedOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x1d94c00
	void ResetCascadeParameters(); // Function WorldFX.WorldFXPresetListActor.ResetCascadeParameters // (Final|Native|Public) // @ game+0x1074730
	void RefreshCascadeParameters(); // Function WorldFX.WorldFXPresetListActor.RefreshCascadeParameters // (Final|Native|Public) // @ game+0x1074730
	void GetSpawnAttached(bool& bIsSpawnAttached); // Function WorldFX.WorldFXPresetListActor.GetSpawnAttached // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d94640
	void ForceRefreshPreviews(); // Function WorldFX.WorldFXPresetListActor.ForceRefreshPreviews // (Final|Native|Public) // @ game+0x1074730
	void ClearSpawnAttachedOverride(); // Function WorldFX.WorldFXPresetListActor.ClearSpawnAttachedOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x1d941f0
};

// Class WorldFX.WorldFXAudioActor
// Size: 0x250 (Inherited: 0x248)
struct AWorldFXAudioActor : AActor {
	struct UWorldFXAudioComponent* SFXComponent; // 0x248(0x08)

	void SetSpawnAttached(bool bNewSpawnAttached); // Function WorldFX.WorldFXAudioActor.SetSpawnAttached // (Final|Native|Public|BlueprintCallable) // @ game+0x1d94970
	void GetSpawnAttached(bool& bIsSpawnAttached); // Function WorldFX.WorldFXAudioActor.GetSpawnAttached // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d944d0
	void ForceRefreshPreview(); // Function WorldFX.WorldFXAudioActor.ForceRefreshPreview // (Final|Native|Public) // @ game+0x1074730
};

// Class WorldFX.WorldFXOctreeFX
// Size: 0x50 (Inherited: 0x28)
struct UWorldFXOctreeFX : UObject {
	struct UWorldFXOctree* OwningOctree; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
	struct UWorldFXRule* Rule; // 0x40(0x08)
	struct TWeakObjectPtr<struct USceneComponent> AttachTo; // 0x48(0x08)
};

// Class WorldFX.WorldFXOctreeFXAudio
// Size: 0xc0 (Inherited: 0x50)
struct UWorldFXOctreeFXAudio : UWorldFXOctreeFX {
	struct UAkAudioEvent* SFXEvent; // 0x50(0x08)
	struct FName EventName; // 0x58(0x08)
	struct TWeakObjectPtr<struct UAkComponent> AkComponent; // 0x60(0x08)
	struct FVector Position; // 0x68(0x0c)
	struct FRotator Rotator; // 0x74(0x0c)
	struct FVector Scale; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FWorldFXAudioEventExtra Extra; // 0x90(0x28)
	struct FName UniqueAttachTag; // 0xb8(0x08)
};

// Class WorldFX.WorldFXOctreeFXAudioManaged
// Size: 0x60 (Inherited: 0x50)
struct UWorldFXOctreeFXAudioManaged : UWorldFXOctreeFX {
	struct TWeakObjectPtr<struct UAkComponent> AkComponent; // 0x50(0x08)
	int32_t PlayingID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class WorldFX.WorldFXOctreeFXAmbientAudioManaged
// Size: 0x58 (Inherited: 0x50)
struct UWorldFXOctreeFXAmbientAudioManaged : UWorldFXOctreeFX {
	struct TWeakObjectPtr<struct AAkAmbientSound> AkAmbientSound; // 0x50(0x08)
};

// Class WorldFX.WorldFXCascadeInstanceParametersBase
// Size: 0x28 (Inherited: 0x28)
struct UWorldFXCascadeInstanceParametersBase : UObject {
};

// Class WorldFX.WorldFXCascadeInstanceParametersFlat
// Size: 0x38 (Inherited: 0x28)
struct UWorldFXCascadeInstanceParametersFlat : UWorldFXCascadeInstanceParametersBase {
	struct TArray<struct FWorldFXCascadeSystemParam> InstanceParameters; // 0x28(0x10)
};

// Class WorldFX.WorldFXCascadeInstanceParametersGrouped
// Size: 0x98 (Inherited: 0x28)
struct UWorldFXCascadeInstanceParametersGrouped : UWorldFXCascadeInstanceParametersBase {
	struct FWorldFXCascadeSystemParams InstanceParameters; // 0x28(0x70)
};

// Class WorldFX.WorldFXOctreeFXCascade
// Size: 0x120 (Inherited: 0x50)
struct UWorldFXOctreeFXCascade : UWorldFXOctreeFX {
	struct TSoftObjectPtr<UParticleSystem> ParticleSystem; // 0x50(0x28)
	struct UParticleSystemComponent* ParticleComponent; // 0x78(0x08)
	struct FWorldFXMaterialOverrideList Materials; // 0x80(0x10)
	struct UWorldFXCascadeInstanceParametersBase* InstanceParameters; // 0x90(0x08)
	struct FVector Position; // 0x98(0x0c)
	struct FRotator Rotator; // 0xa4(0x0c)
	struct FVector Scale; // 0xb0(0x0c)
	struct FWorldFXSpawnOverridesFinal SpawnInfo; // 0xbc(0x40)
	struct FWorldFXCascadeSystemAdvancedOptions AdvancedOptions; // 0xfc(0x0c)
	char pad_108[0x18]; // 0x108(0x18)
};

// Class WorldFX.WorldFXOctreeFXCascadeManaged
// Size: 0x58 (Inherited: 0x50)
struct UWorldFXOctreeFXCascadeManaged : UWorldFXOctreeFX {
	struct TWeakObjectPtr<struct UParticleSystemComponent> ParticleComponent; // 0x50(0x08)
};

// Class WorldFX.WorldFXOctreeFXGenericManaged
// Size: 0x60 (Inherited: 0x50)
struct UWorldFXOctreeFXGenericManaged : UWorldFXOctreeFX {
	struct TWeakObjectPtr<struct UActorComponent> ActorComponent; // 0x50(0x08)
	struct FWorldFXGenericManageSettings Manage; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class WorldFX.WorldFXInterface
// Size: 0x28 (Inherited: 0x28)
struct UWorldFXInterface : UInterface {

	void WorldFXInterfaceStop(bool bImmediately); // Function WorldFX.WorldFXInterface.WorldFXInterfaceStop // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WorldFXInterfaceStart(struct FWorldFXSpawnOverrides SpawnOverrides); // Function WorldFX.WorldFXInterface.WorldFXInterfaceStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
};

// Class WorldFX.WorldFXOctreeFXInterface
// Size: 0x70 (Inherited: 0x50)
struct UWorldFXOctreeFXInterface : UWorldFXOctreeFX {
	struct TWeakObjectPtr<struct UObject> InterfaceObject; // 0x50(0x08)
	struct FVector Position; // 0x58(0x0c)
	float ExtraRadius; // 0x64(0x04)
	bool bActive; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class WorldFX.WorldFXNiagaraSystemInitializer
// Size: 0x28 (Inherited: 0x28)
struct UWorldFXNiagaraSystemInitializer : UObject {
};

// Class WorldFX.WorldFXNiagaraSystemInitializerParameters
// Size: 0x98 (Inherited: 0x28)
struct UWorldFXNiagaraSystemInitializerParameters : UWorldFXNiagaraSystemInitializer {
	struct FNiagaraHelpersInitializers Parameters; // 0x28(0x70)
};

// Class WorldFX.WorldFXNiagaraSystemInitializerRawParameters
// Size: 0x98 (Inherited: 0x28)
struct UWorldFXNiagaraSystemInitializerRawParameters : UWorldFXNiagaraSystemInitializer {
	struct FNiagaraHelpersInitializerRaw Parameters; // 0x28(0x70)
};

// Class WorldFX.WorldFXOctreeFXNiagara
// Size: 0x120 (Inherited: 0x50)
struct UWorldFXOctreeFXNiagara : UWorldFXOctreeFX {
	struct TSoftObjectPtr<UNiagaraSystem> NiagaraSystem; // 0x50(0x28)
	struct UNiagaraComponent* NiagaraComponent; // 0x78(0x08)
	struct UWorldFXNiagaraSystemInitializer* Initializer; // 0x80(0x08)
	struct FWorldFXMaterialOverrideList Materials; // 0x88(0x10)
	struct FVector Position; // 0x98(0x0c)
	struct FRotator Rotator; // 0xa4(0x0c)
	struct FVector Scale; // 0xb0(0x0c)
	struct FWorldFXSpawnOverridesFinal SpawnInfo; // 0xbc(0x40)
	struct FWorldFXNiagaraSystemAdvancedOptions AdvancedOptions; // 0xfc(0x0c)
	char pad_108[0x18]; // 0x108(0x18)
};

// Class WorldFX.WorldFXOctreeFXNiagaraManaged
// Size: 0x58 (Inherited: 0x50)
struct UWorldFXOctreeFXNiagaraManaged : UWorldFXOctreeFX {
	struct TWeakObjectPtr<struct UNiagaraComponent> NiagaraComponent; // 0x50(0x08)
};

// Class WorldFX.WorldFXNiagaraSystemParameters
// Size: 0xd0 (Inherited: 0x30)
struct UWorldFXNiagaraSystemParameters : UDataAsset {
	char pad_30[0x8]; // 0x30(0x08)
	struct TSoftObjectPtr<UNiagaraSystem> ReferenceNiagaraSystem; // 0x38(0x28)
	struct FNiagaraHelpersInitializers Overrides; // 0x60(0x70)

	void RefreshDefaults(); // Function WorldFX.WorldFXNiagaraSystemParameters.RefreshDefaults // (Final|Native|Public) // @ game+0x1074730
	void DefaultsToParameters(); // Function WorldFX.WorldFXNiagaraSystemParameters.DefaultsToParameters // (Final|Native|Public) // @ game+0x1074730
	void ClearParameters(); // Function WorldFX.WorldFXNiagaraSystemParameters.ClearParameters // (Final|Native|Public) // @ game+0x1074730
};

// Class WorldFX.WorldFXNiagaraSystemInitializerParametersAsset
// Size: 0x30 (Inherited: 0x28)
struct UWorldFXNiagaraSystemInitializerParametersAsset : UWorldFXNiagaraSystemInitializer {
	struct UWorldFXNiagaraSystemParameters* Parameters; // 0x28(0x08)
};

// Class WorldFX.WorldFXOctree
// Size: 0xc8 (Inherited: 0x28)
struct UWorldFXOctree : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TMap<struct TWeakObjectPtr<struct UObject>, struct FWorldFXOctreeFXList> FXMap; // 0x30(0x50)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct UWorldFXOctreeFX*> ActiveFX; // 0xa0(0x10)
	struct TArray<struct UWorldFXOctreeFX*> VisibleFX; // 0xb0(0x10)
	bool bVisibleFXValid; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class WorldFX.WorldFXOctreeFXDummy
// Size: 0x60 (Inherited: 0x50)
struct UWorldFXOctreeFXDummy : UWorldFXOctreeFX {
	struct FVector Position; // 0x50(0x0c)
	float ExtraRadius; // 0x5c(0x04)
};

// Class WorldFX.WorldFXRule
// Size: 0x28 (Inherited: 0x28)
struct UWorldFXRule : UObject {
};

// Class WorldFX.WorldFXPresetRule
// Size: 0x30 (Inherited: 0x28)
struct UWorldFXPresetRule : UWorldFXRule {
	struct FWorldFXPresetRuleName Preset; // 0x28(0x08)
};

// Class WorldFX.WorldFXRuleList
// Size: 0x38 (Inherited: 0x28)
struct UWorldFXRuleList : UWorldFXRule {
	struct TArray<struct UWorldFXRule*> Rules; // 0x28(0x10)
};

// Class WorldFX.WorldFXRuleAnd
// Size: 0x38 (Inherited: 0x38)
struct UWorldFXRuleAnd : UWorldFXRuleList {
};

// Class WorldFX.WorldFXRuleOr
// Size: 0x38 (Inherited: 0x38)
struct UWorldFXRuleOr : UWorldFXRuleList {
};

// Class WorldFX.WorldFXRuleNot
// Size: 0x30 (Inherited: 0x28)
struct UWorldFXRuleNot : UWorldFXRule {
	struct UWorldFXRule* Rule; // 0x28(0x08)
};

// Class WorldFX.WorldFXRuleTrue
// Size: 0x28 (Inherited: 0x28)
struct UWorldFXRuleTrue : UWorldFXRule {
};

// Class WorldFX.WorldFXRuleFalse
// Size: 0x28 (Inherited: 0x28)
struct UWorldFXRuleFalse : UWorldFXRule {
};

// Class WorldFX.WorldFXRuleSeasonBase
// Size: 0x28 (Inherited: 0x28)
struct UWorldFXRuleSeasonBase : UWorldFXRule {
};

// Class WorldFX.WorldFXRuleSeason
// Size: 0x30 (Inherited: 0x28)
struct UWorldFXRuleSeason : UWorldFXRuleSeasonBase {
	int32_t Seasons; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class WorldFX.WorldFXRuleSeasonSummer
// Size: 0x28 (Inherited: 0x28)
struct UWorldFXRuleSeasonSummer : UWorldFXRuleSeasonBase {
};

// Class WorldFX.WorldFXRuleSeasonFall
// Size: 0x28 (Inherited: 0x28)
struct UWorldFXRuleSeasonFall : UWorldFXRuleSeasonBase {
};

// Class WorldFX.WorldFXRuleSeasonWinter
// Size: 0x28 (Inherited: 0x28)
struct UWorldFXRuleSeasonWinter : UWorldFXRuleSeasonBase {
};

// Class WorldFX.WorldFXRuleSeasonSpring
// Size: 0x28 (Inherited: 0x28)
struct UWorldFXRuleSeasonSpring : UWorldFXRuleSeasonBase {
};

// Class WorldFX.WorldFXSettings
// Size: 0xb0 (Inherited: 0x30)
struct UWorldFXSettings : UDataAsset {
	struct FWorldFXPerWorldSettings Defaults; // 0x30(0x20)
	struct TMap<struct FName, struct FWorldFXPerWorldSettings> PerWorldDefaults; // 0x50(0x50)
	struct FWorldFXPresets Presets; // 0xa0(0x10)
};

// Class WorldFX.WorldFXSingleton
// Size: 0xe80 (Inherited: 0x248)
struct AWorldFXSingleton : AActor {
	struct FWorldFXPerWorldSettings Settings; // 0x248(0x20)
	struct FCameraFXRoot CameraFXRoot; // 0x268(0x10)
	struct FWorldFXOctreeStack Octree; // 0x278(0x70)
	bool bCullingDisabled; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	int32_t AutoCascadeCullingLevel; // 0x2ec(0x04)
	int32_t AutoNiagaraCullingLevel; // 0x2f0(0x04)
	int32_t AutoAkAmbientCullingLevel; // 0x2f4(0x04)
	struct TSet<struct TWeakObjectPtr<struct AActor>> AutoManagedActors; // 0x2f8(0x50)
	struct TSet<struct TWeakObjectPtr<struct UActorComponent>> AutoManagedComponents; // 0x348(0x50)
	struct TSet<struct TWeakObjectPtr<struct UActorComponent>> ManualManagedComponents; // 0x398(0x50)
	struct TMap<struct TWeakObjectPtr<struct UObject>, struct TWeakObjectPtr<struct UWorldFXOctreeFX>> WorldFXInterfaces; // 0x3e8(0x50)
	struct UWorldFXOctreeFXDummy* FXOctreeFXDummy; // 0x438(0x08)
	struct FVector LastEye; // 0x440(0x0c)
	bool bLastEyeValid; // 0x44c(0x01)
	char pad_44D[0xa33]; // 0x44d(0xa33)

	bool UnregisterWorldFXInterface(struct TScriptInterface<IWorldFXInterface> WorldFXInterface); // Function WorldFX.WorldFXSingleton.UnregisterWorldFXInterface // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d9b6a0
	bool RegisterWorldFXInterface(struct TScriptInterface<IWorldFXInterface> WorldFXInterface, struct FVector Position, struct FWorldFXSimpleCullDistance CullDistance, struct UWorldFXRule* Rule, float ExtraRadius); // Function WorldFX.WorldFXSingleton.RegisterWorldFXInterface // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1d9b4d0
	void PresetRuleExists(struct FWorldFXPresetRuleName PresetName, bool& bResult); // Function WorldFX.WorldFXSingleton.PresetRuleExists // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d9b400
	void PresetRuleEvaluateWithSpawnParameters(struct UObject* WorldContextObject, struct FWorldFXPresetRuleName PresetName, struct FVector FXSpawnPosition, struct FWorldFXSpawnOverrides& SpawnOverrides, bool& bResult); // Function WorldFX.WorldFXSingleton.PresetRuleEvaluateWithSpawnParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d9b1d0
	void PresetRuleEvaluate(struct UObject* WorldContextObject, struct FWorldFXPresetRuleName PresetName, struct FVector FXSpawnPosition, bool& bResult); // Function WorldFX.WorldFXSingleton.PresetRuleEvaluate // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d9b070
	void IsWorldFXInterfaceRegistered(struct TScriptInterface<IWorldFXInterface> WorldFXInterface, bool& bIsRegistered); // Function WorldFX.WorldFXSingleton.IsWorldFXInterfaceRegistered // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d9af80
	struct UWorldFXRule* GetPresetRule(struct FWorldFXPresetRuleName PresetRuleName); // Function WorldFX.WorldFXSingleton.GetPresetRule // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d9aef0
	void ForgetManagedNiagaraComponent(struct UNiagaraComponent* NiagaraComponent); // Function WorldFX.WorldFXSingleton.ForgetManagedNiagaraComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d9ae70
	void ForgetManagedGenericComponent(struct UActorComponent* ActorComponent); // Function WorldFX.WorldFXSingleton.ForgetManagedGenericComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d9ae70
	void ForgetManagedCascadeComponent(struct UParticleSystemComponent* ParticleSystemComponent); // Function WorldFX.WorldFXSingleton.ForgetManagedCascadeComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d9ae70
	void ForgetManagedAudioComponent(struct UAkComponent* AudioComponent); // Function WorldFX.WorldFXSingleton.ForgetManagedAudioComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d9ae70
	void AutoManageNiagaraComponent(struct UNiagaraComponent* NiagaraComponent, float CullDistanceMeters); // Function WorldFX.WorldFXSingleton.AutoManageNiagaraComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d9adb0
	void AutoManageGenericComponent(struct UActorComponent* ActorComponent, struct FWorldFXGenericManageSettings Manage, float CullDistanceMeters); // Function WorldFX.WorldFXSingleton.AutoManageGenericComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d9acb0
	void AutoManageCascadeComponent(struct UParticleSystemComponent* ParticleSystemComponent, float CullDistanceMeters); // Function WorldFX.WorldFXSingleton.AutoManageCascadeComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d9abf0
	void AutoManageAudioComponent(struct UAkComponent* AudioComponent, float CullDistanceMeters); // Function WorldFX.WorldFXSingleton.AutoManageAudioComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d9ab30
};

