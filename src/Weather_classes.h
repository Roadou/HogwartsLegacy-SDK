// Class Weather.CloudParams
// Size: 0x28 (Inherited: 0x28)
struct UCloudParams : UObject {
};

// Class Weather.CloudParamsFixed
// Size: 0x1d8 (Inherited: 0x28)
struct UCloudParamsFixed : UCloudParams {
	struct FName Name; // 0x28(0x08)
	struct FCloudParameters Parameters; // 0x30(0x168)
	struct FVolumetricCloudsWeatherWindParams WindParams; // 0x198(0x3c)
	char pad_1D4[0x4]; // 0x1d4(0x04)
};

// Class Weather.CloudParamsPreset
// Size: 0xa0 (Inherited: 0x28)
struct UCloudParamsPreset : UCloudParams {
	struct FName Name; // 0x28(0x08)
	struct FDataTableRowHandle Preset; // 0x30(0x10)
	struct FVolumetricCloudsWeatherWindParams WindParams; // 0x40(0x3c)
	struct FSunDiskOverrides SunDiskOverrides; // 0x7c(0x14)
	float Overcast; // 0x90(0x04)
	float HeightOffset; // 0x94(0x04)
	bool bSuperExpensiveCloudsCinematicOnly; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Weather.CloudDefinitions
// Size: 0x40 (Inherited: 0x30)
struct UCloudDefinitions : UDataAsset {
	struct TArray<struct UCloudParams*> Definitions; // 0x30(0x10)
};

// Class Weather.FogParams
// Size: 0x28 (Inherited: 0x28)
struct UFogParams : UObject {
};

// Class Weather.FogParamsFixed
// Size: 0x230 (Inherited: 0x28)
struct UFogParamsFixed : UFogParams {
	struct FName Name; // 0x28(0x08)
	struct FFogParameters Parameters; // 0x30(0x200)
};

// Class Weather.FogDefinitions
// Size: 0x228 (Inherited: 0x30)
struct UFogDefinitions : UDataAsset {
	struct TArray<struct UFogParams*> Definitions; // 0x30(0x10)
	struct FExpHeightFogParameters BaseFog; // 0x40(0x1d8)
	struct UMaterialParameterCollection* SurfaceFogMaterialParameterCollection; // 0x218(0x08)
	struct UNiagaraParameterCollection* SurfaceFogNiagaraParameterCollection; // 0x220(0x08)
};

// Class Weather.SceneActionState_WeatherGeneric
// Size: 0x68 (Inherited: 0x50)
struct USceneActionState_WeatherGeneric : USceneRigActionState {
	char pad_50[0x8]; // 0x50(0x08)
	float CachedTime; // 0x58(0x04)
	float CachedDuration; // 0x5c(0x04)
	bool bCachedEnabled; // 0x60(0x01)
	bool bCachedInsideInterval; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class Weather.SceneAction_WeatherGeneric
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherGeneric : USceneRigActionBase {
};

// Class Weather.SceneAction_WeatherSetMaxWindSpeed
// Size: 0x90 (Inherited: 0x88)
struct USceneAction_WeatherSetMaxWindSpeed : USceneAction_WeatherGeneric {
	float MaxWindSpeed; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Weather.SceneAction_WeatherPrecipitationPercentage
// Size: 0x90 (Inherited: 0x88)
struct USceneAction_WeatherPrecipitationPercentage : USceneAction_WeatherGeneric {
	float PrecipitationPercentage; // 0x88(0x04)
	float PrecipitationFadeTime; // 0x8c(0x04)
};

// Class Weather.SceneAction_WeatherAccumulationReset
// Size: 0xa0 (Inherited: 0x88)
struct USceneAction_WeatherAccumulationReset : USceneAction_WeatherGeneric {
	struct FWeatherSurfaceCharacterFXStateReset StateReset; // 0x88(0x02)
	char pad_8A[0x2]; // 0x8a(0x02)
	float PrecipitationPercentage; // 0x8c(0x04)
	float PrecipitationFadeTime; // 0x90(0x04)
	float MaxWindSpeed; // 0x94(0x04)
	bool bSetMaxWindSpeed; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Weather.FullScreenWeatherDecalActor
// Size: 0x250 (Inherited: 0x250)
struct AFullScreenWeatherDecalActor : ADecalActor {
};

// Class Weather.WeatherDecalTracker
// Size: 0x50 (Inherited: 0x28)
struct UWeatherDecalTracker : UObject {
	struct TWeakObjectPtr<struct UObject> Owner; // 0x28(0x08)
	struct AFullScreenWeatherDecalActor* DecalActor; // 0x30(0x08)
	struct FVector BasePosition; // 0x38(0x0c)
	float ZOffset; // 0x44(0x04)
	float SleepUntil; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Weather.WeatherDecal
// Size: 0x28 (Inherited: 0x28)
struct UWeatherDecal : UObject {
};

// Class Weather.WorldWeatherDecal
// Size: 0x28 (Inherited: 0x28)
struct UWorldWeatherDecal : UWeatherDecal {
};

// Class Weather.StormWeatherDecal
// Size: 0x28 (Inherited: 0x28)
struct UStormWeatherDecal : UWeatherDecal {
};

// Class Weather.WeatherDecalDefinitions
// Size: 0x40 (Inherited: 0x30)
struct UWeatherDecalDefinitions : UDataAsset {
	struct TArray<struct UWeatherDecal*> Decals; // 0x30(0x10)
};

// Class Weather.WorldWeatherDecalDefinitions
// Size: 0x40 (Inherited: 0x30)
struct UWorldWeatherDecalDefinitions : UDataAsset {
	struct TArray<struct UWorldWeatherDecal*> Decals; // 0x30(0x10)
};

// Class Weather.WeatherDecalCondition
// Size: 0x28 (Inherited: 0x28)
struct UWeatherDecalCondition : UObject {
};

// Class Weather.WeatherDecalSimpleCondition
// Size: 0x28 (Inherited: 0x28)
struct UWeatherDecalSimpleCondition : UWeatherDecalCondition {
};

// Class Weather.WeatherDecalModifier
// Size: 0x28 (Inherited: 0x28)
struct UWeatherDecalModifier : UObject {
};

// Class Weather.WeatherDecalSettings
// Size: 0x28 (Inherited: 0x28)
struct UWeatherDecalSettings : UWeatherDecalModifier {
};

// Class Weather.WeatherDecalUpdate
// Size: 0x28 (Inherited: 0x28)
struct UWeatherDecalUpdate : UWeatherDecalModifier {
};

// Class Weather.WeatherDecalPlacement
// Size: 0x28 (Inherited: 0x28)
struct UWeatherDecalPlacement : UObject {
};

// Class Weather.WeatherDecalPlacementLegacy
// Size: 0x40 (Inherited: 0x28)
struct UWeatherDecalPlacementLegacy : UWeatherDecalPlacement {
	struct FVector Position; // 0x28(0x0c)
	struct FVector Scale; // 0x34(0x0c)
};

// Class Weather.WeatherDecalPlacementWorld
// Size: 0x28 (Inherited: 0x28)
struct UWeatherDecalPlacementWorld : UWeatherDecalPlacement {
};

// Class Weather.WeatherDecalPlacementActor
// Size: 0x260 (Inherited: 0x248)
struct AWeatherDecalPlacementActor : AActor {
	struct TArray<struct FName> DecalTags; // 0x248(0x10)
	bool bEnabled; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// Class Weather.WeatherDecalPlacementTagPlacementActor
// Size: 0x38 (Inherited: 0x28)
struct UWeatherDecalPlacementTagPlacementActor : UWeatherDecalPlacement {
	struct FName DecalTag; // 0x28(0x08)
	bool bFailOnNotFound; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Weather.SaveReceivesWeatherDecalsStateMesh
// Size: 0x80 (Inherited: 0x28)
struct USaveReceivesWeatherDecalsStateMesh : UObject {
	struct TMap<struct TWeakObjectPtr<struct UMeshComponent>, bool> SaveMap; // 0x28(0x50)
	bool bReceivesWeatherDecals; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	void SetState(bool ReceivesWeatherDecals, bool markRenderStateDirty); // Function Weather.SaveReceivesWeatherDecalsStateMesh.SetState // (Final|Native|Public|BlueprintCallable) // @ game+0x1d05bf0
	void RestoreState(bool markRenderStateDirty); // Function Weather.SaveReceivesWeatherDecalsStateMesh.RestoreState // (Final|Native|Public|BlueprintCallable) // @ game+0x1d05b60
	struct USaveReceivesWeatherDecalsStateMesh* CreateMeshPool(struct AActor* Owner, bool ReceivesWeatherDecals); // Function Weather.SaveReceivesWeatherDecalsStateMesh.CreateMeshPool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d05a90
	struct USaveReceivesWeatherDecalsStateMesh* CreateMeshAutoOwner(struct UMeshComponent* Mesh, bool ReceivesWeatherDecals, bool markRenderStateDirty); // Function Weather.SaveReceivesWeatherDecalsStateMesh.CreateMeshAutoOwner // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d05960
	struct USaveReceivesWeatherDecalsStateMesh* CreateMesh(struct AActor* Owner, struct UMeshComponent* Mesh, bool ReceivesWeatherDecals, bool markRenderStateDirty); // Function Weather.SaveReceivesWeatherDecalsStateMesh.CreateMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d05800
	void AddMesh(struct UMeshComponent* Mesh, bool markRenderStateDirty); // Function Weather.SaveReceivesWeatherDecalsStateMesh.AddMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1d05610
};

// Class Weather.SaveReceivesWeatherDecalsStateActor
// Size: 0x88 (Inherited: 0x80)
struct USaveReceivesWeatherDecalsStateActor : USaveReceivesWeatherDecalsStateMesh {
	struct TWeakObjectPtr<struct AActor> Owner; // 0x80(0x08)

	void Update(bool markRenderStateDirty); // Function Weather.SaveReceivesWeatherDecalsStateActor.Update // (Final|Native|Public|BlueprintCallable) // @ game+0x1d05cc0
	struct USaveReceivesWeatherDecalsStateActor* CreateActor(struct AActor* Actor, bool ReceivesWeatherDecals, bool markRenderStateDirty); // Function Weather.SaveReceivesWeatherDecalsStateActor.CreateActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d056e0
};

// Class Weather.WeatherDecalConditionSeasons
// Size: 0x40 (Inherited: 0x28)
struct UWeatherDecalConditionSeasons : UWeatherDecalSimpleCondition {
	float Fall; // 0x28(0x04)
	float Winter; // 0x2c(0x04)
	float Spring; // 0x30(0x04)
	float Summer; // 0x34(0x04)
	bool bUseSeasonOverride; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Weather.WeatherDecalConditionSeasonsPhases
// Size: 0x170 (Inherited: 0x28)
struct UWeatherDecalConditionSeasonsPhases : UWeatherDecalCondition {
	struct TMap<int32_t, float> FallPhases; // 0x28(0x50)
	struct TMap<int32_t, float> WinterPhases; // 0x78(0x50)
	struct TMap<int32_t, float> SpringPhases; // 0xc8(0x50)
	struct TMap<int32_t, float> SummerPhases; // 0x118(0x50)
	bool bOnInFall; // 0x168(0x01)
	bool bOnInWinter; // 0x169(0x01)
	bool bOnInSpring; // 0x16a(0x01)
	bool bOnInSummer; // 0x16b(0x01)
	bool bUseSeasonOverride; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
};

// Class Weather.WeatherDecalConditionBlendDomain
// Size: 0x60 (Inherited: 0x28)
struct UWeatherDecalConditionBlendDomain : UWeatherDecalSimpleCondition {
	struct FBlendDomain BlendDomain; // 0x28(0x38)
};

// Class Weather.WeatherDecalConditionConsoleVariable
// Size: 0x40 (Inherited: 0x28)
struct UWeatherDecalConditionConsoleVariable : UWeatherDecalSimpleCondition {
	struct FName ConsoleVariableName; // 0x28(0x08)
	bool bCreateIfNotFound; // 0x30(0x01)
	bool bEditorOnly; // 0x31(0x01)
	char pad_32[0xe]; // 0x32(0x0e)
};

// Class Weather.WeatherDecalConditionOneMinusConsoleVariable
// Size: 0x40 (Inherited: 0x40)
struct UWeatherDecalConditionOneMinusConsoleVariable : UWeatherDecalConditionConsoleVariable {
};

// Class Weather.WeatherDecalSettingsParameters
// Size: 0x118 (Inherited: 0x28)
struct UWeatherDecalSettingsParameters : UWeatherDecalSettings {
	struct FWeatherDecalParameters Parameters; // 0x28(0xf0)
};

// Class Weather.WeatherDecalSettingsEnvGlobalsParameters
// Size: 0x118 (Inherited: 0x118)
struct UWeatherDecalSettingsEnvGlobalsParameters : UWeatherDecalSettingsParameters {
};

// Class Weather.WeatherDecalSettingsFlexParameters
// Size: 0x130 (Inherited: 0x118)
struct UWeatherDecalSettingsFlexParameters : UWeatherDecalSettingsParameters {
	int32_t Types; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x120(0x08)
	struct UNiagaraParameterCollection* NiagaraParameterCollection; // 0x128(0x08)
};

// Class Weather.WeatherDecalUpdateSingleParameter
// Size: 0x30 (Inherited: 0x28)
struct UWeatherDecalUpdateSingleParameter : UWeatherDecalUpdate {
	struct FName Parameter; // 0x28(0x08)
};

// Class Weather.WeatherDecalUpdateSingleParameterFlex
// Size: 0x48 (Inherited: 0x30)
struct UWeatherDecalUpdateSingleParameterFlex : UWeatherDecalUpdateSingleParameter {
	int32_t Types; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x38(0x08)
	struct UNiagaraParameterCollection* NiagaraParameterCollection; // 0x40(0x08)
};

// Class Weather.WeatherDecalUpdateSingleParameterConsoleVariable
// Size: 0x68 (Inherited: 0x48)
struct UWeatherDecalUpdateSingleParameterConsoleVariable : UWeatherDecalUpdateSingleParameterFlex {
	struct FName ConsoleVariableName; // 0x48(0x08)
	float MinValue; // 0x50(0x04)
	float MaxValue; // 0x54(0x04)
	float DefaultValue; // 0x58(0x04)
	bool bCreateIfNotFound; // 0x5c(0x01)
	bool bEditorOnly; // 0x5d(0x01)
	bool bUseMin; // 0x5e(0x01)
	bool bUseMax; // 0x5f(0x01)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class Weather.WeatherDecalUpdateFlexBlend
// Size: 0x48 (Inherited: 0x48)
struct UWeatherDecalUpdateFlexBlend : UWeatherDecalUpdateSingleParameterFlex {
};

// Class Weather.WeatherDecalUpdateZOffset
// Size: 0x28 (Inherited: 0x28)
struct UWeatherDecalUpdateZOffset : UWeatherDecalUpdate {
};

// Class Weather.WeatherDecalConditionalUpdate
// Size: 0x50 (Inherited: 0x28)
struct UWeatherDecalConditionalUpdate : UWeatherDecalUpdate {
	struct TArray<struct UWeatherDecalSimpleCondition*> Conditions; // 0x28(0x10)
	struct TArray<struct UWeatherDecalSettings*> Settings; // 0x38(0x10)
	bool bIncludeOverallBlend; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Weather.WeatherDecalUpdateSeasonsPhases
// Size: 0x70 (Inherited: 0x28)
struct UWeatherDecalUpdateSeasonsPhases : UWeatherDecalUpdate {
	struct TArray<struct UWeatherDecalSettings*> FallPhases; // 0x28(0x10)
	struct TArray<struct UWeatherDecalSettings*> WinterPhases; // 0x38(0x10)
	struct TArray<struct UWeatherDecalSettings*> SpringPhases; // 0x48(0x10)
	struct TArray<struct UWeatherDecalSettings*> SummerPhases; // 0x58(0x10)
	bool bUseSeasonOverride; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Weather.WorldWeatherDecalDefault
// Size: 0x80 (Inherited: 0x28)
struct UWorldWeatherDecalDefault : UWorldWeatherDecal {
	struct FWeatherDecalSetup Setup; // 0x28(0x20)
	struct TArray<struct UWeatherDecalSettings*> InitialSettings; // 0x48(0x10)
	struct TArray<struct UWeatherDecalCondition*> ShowConditions; // 0x58(0x10)
	struct TArray<struct UWeatherDecalUpdate*> Updates; // 0x68(0x10)
	float BlendThreshold; // 0x78(0x04)
	bool bEditorOnly; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
};

// Class Weather.WeatherDefinitions
// Size: 0x30 (Inherited: 0x30)
struct UWeatherDefinitions : UDataAsset {
};

// Class Weather.WeatherExclusionVolume
// Size: 0x2a0 (Inherited: 0x280)
struct AWeatherExclusionVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	bool bHideCameraFX; // 0x288(0x01)
	bool bHideSurfaceFX; // 0x289(0x01)
	char pad_28A[0x2]; // 0x28a(0x02)
	float Priority; // 0x28c(0x04)
	float BlendRadius; // 0x290(0x04)
	float BlendWeight; // 0x294(0x04)
	bool bEnabled; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)

	void SetPriority(float NewPriority); // Function Weather.WeatherExclusionVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1d0a500
};

// Class Weather.WeatherExclusionComponent
// Size: 0x240 (Inherited: 0x220)
struct UWeatherExclusionComponent : USceneComponent {
	bool bHideCameraFX; // 0x220(0x01)
	bool bHideSurfaceFX; // 0x221(0x01)
	char pad_222[0x2]; // 0x222(0x02)
	float Priority; // 0x224(0x04)
	float BlendRadius; // 0x228(0x04)
	float BlendWeight; // 0x22c(0x04)
	bool bEnabled; // 0x230(0x01)
	char pad_231[0xf]; // 0x231(0x0f)

	void SetPriority(float NewPriority); // Function Weather.WeatherExclusionComponent.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1d0a600
};

// Class Weather.WeatherCustomBlendDomainWeatherIndoorsBase
// Size: 0x28 (Inherited: 0x28)
struct UWeatherCustomBlendDomainWeatherIndoorsBase : URenderSettingsNamedCustomBlendDomain {
};

// Class Weather.WeatherCustomBlendDomainWeatherIndoors
// Size: 0x28 (Inherited: 0x28)
struct UWeatherCustomBlendDomainWeatherIndoors : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class Weather.WeatherCustomBlendDomainWeatherOutdoors
// Size: 0x28 (Inherited: 0x28)
struct UWeatherCustomBlendDomainWeatherOutdoors : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class Weather.WeatherCustomBlendDomainWeatherDecalOpacity
// Size: 0x28 (Inherited: 0x28)
struct UWeatherCustomBlendDomainWeatherDecalOpacity : URenderSettingsNamedCustomBlendDomain {
};

// Class Weather.WeatherCustomBlendDomainWeatherCameraParticlesSpawnRate
// Size: 0x28 (Inherited: 0x28)
struct UWeatherCustomBlendDomainWeatherCameraParticlesSpawnRate : URenderSettingsNamedCustomBlendDomain {
};

// Class Weather.WeatherCustomBlendDomainWeatherCold
// Size: 0x28 (Inherited: 0x28)
struct UWeatherCustomBlendDomainWeatherCold : URenderSettingsCustomBlendDomain {
};

// Class Weather.WeatherLibrary
// Size: 0x90 (Inherited: 0x30)
struct UWeatherLibrary : UDataAsset {
	struct UWeatherSequences* Sequences; // 0x30(0x08)
	struct UFogDefinitions* FogDefinitions; // 0x38(0x08)
	struct UCloudDefinitions* CloudDefinitions; // 0x40(0x08)
	struct UWindDefinitions* WindDefinitions; // 0x48(0x08)
	struct UWeatherTypesAsset* WeatherSurfaceTypes; // 0x50(0x08)
	struct UGlobalLightingBlendable* DefaultOvercastBlendable; // 0x58(0x08)
	struct URenderSettingsCustomBlendDomain* ProhibitWeatherBlendDomain; // 0x60(0x08)
	struct TSoftObjectPtr<UWeatherPreloads> WeatherPreloadsAsset; // 0x68(0x28)
};

// Class Weather.WeatherOrphanComponent
// Size: 0x118 (Inherited: 0xc8)
struct UWeatherOrphanComponent : UActorComponent {
	struct TWeakObjectPtr<struct UObject> Owner; // 0xc8(0x08)
	struct FBlendDomain BlendDomain; // 0xd0(0x38)
	float TimeToLive; // 0x108(0x04)
	float Age; // 0x10c(0x04)
	float BlendMultiplier; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class Weather.WeatherPostProcessingOrphanComponent
// Size: 0x730 (Inherited: 0x118)
struct UWeatherPostProcessingOrphanComponent : UWeatherOrphanComponent {
	char pad_118[0x8]; // 0x118(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x120(0x5f0)
	char pad_710[0x20]; // 0x710(0x20)
};

// Class Weather.WeatherGlobalLightingBlendableOrphanComponent
// Size: 0x130 (Inherited: 0x118)
struct UWeatherGlobalLightingBlendableOrphanComponent : UWeatherOrphanComponent {
	char pad_118[0x8]; // 0x118(0x08)
	struct UGlobalLightingBlendable* Blendable; // 0x120(0x08)
	float Priority; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// Class Weather.WeatherLocalWindVolume
// Size: 0x2d0 (Inherited: 0x280)
struct AWeatherLocalWindVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	struct FBlendDomain BlendDomain; // 0x288(0x38)
	float Priority; // 0x2c0(0x04)
	float BlendRadius; // 0x2c4(0x04)
	float BlendWeight; // 0x2c8(0x04)
	bool bEnabled; // 0x2cc(0x01)
	bool bUnbounded; // 0x2cd(0x01)
	char pad_2CE[0x2]; // 0x2ce(0x02)

	void SetPriority(float NewPriority); // Function Weather.WeatherLocalWindVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1d0a480
};

// Class Weather.WeatherLocalWindVolumePreset
// Size: 0x2e8 (Inherited: 0x2d0)
struct AWeatherLocalWindVolumePreset : AWeatherLocalWindVolume {
	struct FWindDefinitionName Preset; // 0x2d0(0x10)
	struct TWeakObjectPtr<struct UWindParams> PresetPtr; // 0x2e0(0x08)
};

// Class Weather.WeatherLocalWindVolumeParameters
// Size: 0x3f8 (Inherited: 0x2d0)
struct AWeatherLocalWindVolumeParameters : AWeatherLocalWindVolume {
	struct FWindParameters WindParameters; // 0x2d0(0x128)
};

// Class Weather.WeatherLocalWindVolumeConstant
// Size: 0x2e0 (Inherited: 0x2d0)
struct AWeatherLocalWindVolumeConstant : AWeatherLocalWindVolume {
	struct FWindParametersInstant WindParameters; // 0x2d0(0x10)
};

// Class Weather.WeatherLocalWindComponent
// Size: 0x270 (Inherited: 0x220)
struct UWeatherLocalWindComponent : USceneComponent {
	struct FBlendDomain BlendDomain; // 0x220(0x38)
	float Priority; // 0x258(0x04)
	float BlendRadius; // 0x25c(0x04)
	float BlendWeight; // 0x260(0x04)
	bool bEnabled; // 0x264(0x01)
	bool bUnbounded; // 0x265(0x01)
	char pad_266[0xa]; // 0x266(0x0a)

	void SetPriority(float NewPriority); // Function Weather.WeatherLocalWindComponent.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1d0a580
};

// Class Weather.WeatherLocalWindVolumePresetComponent
// Size: 0x280 (Inherited: 0x270)
struct UWeatherLocalWindVolumePresetComponent : UWeatherLocalWindComponent {
	struct FWindDefinitionName Preset; // 0x268(0x10)
	struct TWeakObjectPtr<struct UWindParams> PresetPtr; // 0x278(0x08)
};

// Class Weather.WeatherLocalWindVolumeParametersComponent
// Size: 0x390 (Inherited: 0x270)
struct UWeatherLocalWindVolumeParametersComponent : UWeatherLocalWindComponent {
	struct FWindParameters WindParameters; // 0x268(0x128)
};

// Class Weather.WeatherLocalWindVolumeConstantComponent
// Size: 0x280 (Inherited: 0x270)
struct UWeatherLocalWindVolumeConstantComponent : UWeatherLocalWindComponent {
	struct FWindParametersInstant WindParameters; // 0x268(0x10)
};

// Class Weather.GlobalLightingBlendableWeatherFog
// Size: 0x208 (Inherited: 0x28)
struct UGlobalLightingBlendableWeatherFog : UGlobalLightingBlendableBase {
	struct FExpHeightFogParameters FogParameters; // 0x28(0x1d8)
	bool bUseEye; // 0x200(0x01)
	bool bValid; // 0x201(0x01)
	char pad_202[0x6]; // 0x202(0x06)
};

// Class Weather.GlobalLightingBlendableWeatherClouds
// Size: 0x178 (Inherited: 0x28)
struct UGlobalLightingBlendableWeatherClouds : UGlobalLightingBlendableBase {
	struct FVolumetricCloudsPresetParameters PresetParameters; // 0x28(0x110)
	struct FVolumetricCloudsWindParameters WindParameters; // 0x138(0x3c)
	bool bPresetValid; // 0x174(0x01)
	bool bWindValid; // 0x175(0x01)
	char pad_176[0x2]; // 0x176(0x02)
};

// Class Weather.WeatherMasterComponent
// Size: 0xc78 (Inherited: 0xc8)
struct UWeatherMasterComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct ULiveWeatherSequenceInfo* CurrentWeatherSequence; // 0xd0(0x08)
	struct FWeatherActionContext ActionContext; // 0xd8(0x8e0)
	struct FWeatherEnvironmentalGlobalsExtras EnvironmentalGlobalsExtras; // 0x9b8(0x90)
	struct UWeatherStorm* CurrentStorm; // 0xa48(0x08)
	struct FWeatherDefinitionName DefaultWeather; // 0xa50(0x10)
	struct FWeatherSequenceOrigin OverrideWeather; // 0xa60(0x20)
	struct FWeatherSequenceOrigin ConsoleWeather; // 0xa80(0x20)
	struct UWorldWeatherDecalDefinitions* WorldDecals; // 0xaa0(0x08)
	struct FWorldWeatherDecalTrackers WorldDecalTrackers; // 0xaa8(0x50)
	float CloudsBlendablePriority; // 0xaf8(0x04)
	char pad_AFC[0x4]; // 0xafc(0x04)
	struct FBlendDomain FogBlendDomain; // 0xb00(0x38)
	float FogBlendablePriority; // 0xb38(0x04)
	char pad_B3C[0x4]; // 0xb3c(0x04)
	struct UGlobalLightingBlendable* OverrideOvercastBlendable; // 0xb40(0x08)
	struct FBlendDomain OvercastBlendDomain; // 0xb48(0x38)
	float OvercastBlendablePriority; // 0xb80(0x04)
	bool bDisableCloudsBlendable; // 0xb84(0x01)
	bool bDisableFogBlendable; // 0xb85(0x01)
	bool bDisableOvercastBlendable; // 0xb86(0x01)
	char pad_B87[0x1]; // 0xb87(0x01)
	struct FWeatherOverrideStack WeatherOverrideStack; // 0xb88(0x10)
	struct FName CurrentLocalSequence; // 0xb98(0x08)
	struct USceneComponent* FXRoot; // 0xba0(0x08)
	struct UGlobalLightingBlendableWeatherFog* FogBlendable; // 0xba8(0x08)
	struct UGlobalLightingBlendableWeatherClouds* CloudsBlendable; // 0xbb0(0x08)
	struct TArray<struct UWeatherSequencePendingLoad*> PendingLoadQueue; // 0xbb8(0x10)
	uint32_t CurrentPlayingID; // 0xbc8(0x04)
	char pad_BCC[0x4]; // 0xbcc(0x04)
	struct TMap<uint32_t, struct UWeatherSequencePendingLoad*> RestoreWeather; // 0xbd0(0x50)
	struct TMap<struct TWeakObjectPtr<struct AActor>, float> ExtraWeatherSwaps; // 0xc20(0x50)
	bool bWeatherIsRunning; // 0xc70(0x01)
	enum class ESeasonEnum CurrentSeason; // 0xc71(0x01)
	char pad_C72[0x6]; // 0xc72(0x06)

	void WeatherFXRemoveFromExtraSwaps(struct AActor* Actor); // Function Weather.WeatherMasterComponent.WeatherFXRemoveFromExtraSwaps // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d0a860
	void WeatherFXIsInExtraSwaps(struct AActor* Actor, bool& bIsInList); // Function Weather.WeatherMasterComponent.WeatherFXIsInExtraSwaps // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d0a790
	void WeatherFXAddToExtraSwaps(struct AActor* Actor, float OverrideSwapDistanceMeters, bool bAlwaysSwap); // Function Weather.WeatherMasterComponent.WeatherFXAddToExtraSwaps // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d0a680
	void SetOverrideWeather(struct UObject* WorldContextObject, struct FName NewOverrideWeather, bool bInstantChange); // Function Weather.WeatherMasterComponent.SetOverrideWeather // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d0a380
	void SetDefaultWeather(struct UObject* WorldContextObject, struct FName NewDefaultWeather); // Function Weather.WeatherMasterComponent.SetDefaultWeather // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d0a2c0
	void PushWeatherOverride(struct UObject* WorldContextObject, struct FWeatherOverrideStackEntry& Entry, bool& bSuccess); // Function Weather.WeatherMasterComponent.PushWeatherOverride // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d0a160
	void PopWeatherOverride(struct UObject* WorldContextObject, struct UObject* Owner); // Function Weather.WeatherMasterComponent.PopWeatherOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1d0a0a0
	void NextSequence(); // Function Weather.WeatherMasterComponent.NextSequence // (Final|Native|Public) // @ game+0x1d0a080
	void IsSnowing(struct UObject* WorldContextObject, bool& bIsSnowStorm, enum class EWeatherSurfaceStormType& SnowStormType, float& SnowIntensity, float& SnowCoverage, bool bMaskWithIndoors); // Function Weather.WeatherMasterComponent.IsSnowing // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d09e40
	void IsRaining(struct UObject* WorldContextObject, bool& bIsRainStorm, enum class EWeatherSurfaceStormType& RainStormType, float& RainIntensity, float& RainCoverage, bool bMaskWithIndoors); // Function Weather.WeatherMasterComponent.IsRaining // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d09c30
	void GetWeatherWind(struct UObject* WorldContextObject, struct FWindParametersInstant& WindParameters, bool& bHaveWeather); // Function Weather.WeatherMasterComponent.GetWeatherWind // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d09b00
	void GetWeatherMaster(struct UObject* WorldContextObject, struct UWeatherMasterComponent*& WeatherMaster); // Function Weather.WeatherMasterComponent.GetWeatherMaster // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d09a30
	void GetWeatherFXRoot(struct UObject* WorldContextObject, struct USceneComponent*& FXRootComponent); // Function Weather.WeatherMasterComponent.GetWeatherFXRoot // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d09960
	void GetValidWeatherPresets(struct UObject* WorldContextObject, struct TArray<struct FName>& WeatherPresets); // Function Weather.WeatherMasterComponent.GetValidWeatherPresets // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d09880
	void GetOverrideWeather(struct UObject* WorldContextObject, struct FName& CurrentOverrideWeather); // Function Weather.WeatherMasterComponent.GetOverrideWeather // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d097b0
	void GetOvercast(struct UObject* WorldContextObject, float& Overcast); // Function Weather.WeatherMasterComponent.GetOvercast // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d096e0
	void GetDefaultWeather(struct UObject* WorldContextObject, struct FName& CurrentDefaultWeather); // Function Weather.WeatherMasterComponent.GetDefaultWeather // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d09610
	void GetCurrentWeather(struct UObject* WorldContextObject, struct FName& TheCurrentWeather); // Function Weather.WeatherMasterComponent.GetCurrentWeather // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d09540
};

// Class Weather.WeatherMaster
// Size: 0x260 (Inherited: 0x248)
struct AWeatherMaster : AActor {
	struct UWeatherMasterComponent* Component; // 0x248(0x08)
	struct UWindDirectionalSourceComponent* DebugWindComponent; // 0x250(0x08)
	struct URenderSettingsComponent* OvercastVolume; // 0x258(0x08)

	void NextSequence(); // Function Weather.WeatherMaster.NextSequence // (Final|Native|Public) // @ game+0x1d0a050
};

// Class Weather.WeatherCustomBlendDomainBase
// Size: 0x28 (Inherited: 0x28)
struct UWeatherCustomBlendDomainBase : URenderSettingsCustomBlendDomainBase {
};

// Class Weather.WeatherCustomBlendDomainOvercast
// Size: 0x28 (Inherited: 0x28)
struct UWeatherCustomBlendDomainOvercast : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class Weather.WeatherCustomBlendDomainStormCoverage
// Size: 0x28 (Inherited: 0x28)
struct UWeatherCustomBlendDomainStormCoverage : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class Weather.WeatherCustomBlendDomainStormIntensity
// Size: 0x28 (Inherited: 0x28)
struct UWeatherCustomBlendDomainStormIntensity : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class Weather.WeatherCustomBlendDomainSurfaceFogIntensity
// Size: 0x28 (Inherited: 0x28)
struct UWeatherCustomBlendDomainSurfaceFogIntensity : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class Weather.WeatherPreloads
// Size: 0x40 (Inherited: 0x30)
struct UWeatherPreloads : UDataAsset {
	struct FWeatherPreload Preloads; // 0x30(0x10)

	void RebuildPreloads(); // Function Weather.WeatherPreloads.RebuildPreloads // (Final|Native|Public) // @ game+0x13244f0
	void ClearPreloads(); // Function Weather.WeatherPreloads.ClearPreloads // (Final|Native|Public) // @ game+0x13244f0
};

// Class Weather.WeatherVolume
// Size: 0x280 (Inherited: 0x280)
struct AWeatherVolume : AVolume {
};

// Class Weather.WeatherVolumeSortable
// Size: 0x288 (Inherited: 0x280)
struct AWeatherVolumeSortable : AWeatherVolume {
	float Priority; // 0x280(0x04)
	bool bUnbounded; // 0x284(0x01)
	bool bEnabled; // 0x285(0x01)
	char pad_286[0x2]; // 0x286(0x02)
};

// Class Weather.WeatherVolumeSortablePreload
// Size: 0x2a8 (Inherited: 0x288)
struct AWeatherVolumeSortablePreload : AWeatherVolumeSortable {
	struct TArray<struct UObject*> PreloadedObjects; // 0x288(0x10)
	char pad_298[0x10]; // 0x298(0x10)
};

// Class Weather.WeatherPresetVolumeBase
// Size: 0x2a8 (Inherited: 0x2a8)
struct AWeatherPresetVolumeBase : AWeatherVolumeSortablePreload {
};

// Class Weather.WeatherPresetVolume
// Size: 0x2c0 (Inherited: 0x2a8)
struct AWeatherPresetVolume : AWeatherPresetVolumeBase {
	struct FWeatherDefinitionName Preset; // 0x2a8(0x10)
	int32_t Seasons; // 0x2b8(0x04)
	bool bInstantChange; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
};

// Class Weather.WeatherPhasedPresetVolume
// Size: 0x2c0 (Inherited: 0x2a8)
struct AWeatherPhasedPresetVolume : AWeatherPresetVolumeBase {
	struct TArray<struct FWeatherPhasedPresetEntry> Presets; // 0x2a8(0x10)
	struct FName ActivePhase; // 0x2b8(0x08)

	void SetActiveWeatherPhase(struct FName PhaseName, bool& bSuccess); // Function Weather.WeatherPhasedPresetVolume.SetActiveWeatherPhase // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1d103d0
	void IsValidActiveWeatherPhaseCurrentSeason(struct FName PhaseName, bool& bValid); // Function Weather.WeatherPhasedPresetVolume.IsValidActiveWeatherPhaseCurrentSeason // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d102f0
	void IsValidActiveWeatherPhase(struct FName PhaseName, struct FWeatherSeasonsFilter& ValidSeasons); // Function Weather.WeatherPhasedPresetVolume.IsValidActiveWeatherPhase // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d10210
};

// Class Weather.WeatherCustomSequenceVolume
// Size: 0x2c0 (Inherited: 0x2a8)
struct AWeatherCustomSequenceVolume : AWeatherVolumeSortablePreload {
	struct FWeatherCustomSequenceName CustomSequence; // 0x2a8(0x10)
	bool bUseInFall; // 0x2b8(0x01)
	bool bUseInWinter; // 0x2b9(0x01)
	bool bUseInSpring; // 0x2ba(0x01)
	bool bUseInSummer; // 0x2bb(0x01)
	char pad_2BC[0x4]; // 0x2bc(0x04)
};

// Class Weather.WeatherDisableVolume
// Size: 0x288 (Inherited: 0x280)
struct AWeatherDisableVolume : AWeatherVolume {
	bool bDisableWeather; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
};

// Class Weather.WeatherSequence
// Size: 0x238 (Inherited: 0x238)
struct UWeatherSequence : USceneRig {
};

// Class Weather.WeatherCustomSequences
// Size: 0x40 (Inherited: 0x30)
struct UWeatherCustomSequences : UDataAsset {
	struct TArray<struct FWeatherSequenceCustom> CustomSequences; // 0x30(0x10)
};

// Class Weather.WeatherSequences
// Size: 0x118 (Inherited: 0x30)
struct UWeatherSequences : UDataAsset {
	struct TArray<struct FWeatherSequenceInfo> GeneralSequences; // 0x30(0x10)
	struct TArray<struct FWeatherSequenceInfoWithProbability> SummerSequences; // 0x40(0x10)
	struct TArray<struct FWeatherSequenceInfoWithProbability> FallSequences; // 0x50(0x10)
	struct TArray<struct FWeatherSequenceInfoWithProbability> WinterSequences; // 0x60(0x10)
	struct TArray<struct FWeatherSequenceInfoWithProbability> SpringSequences; // 0x70(0x10)
	struct TArray<struct FWeatherSequenceInfo> MissionSequences; // 0x80(0x10)
	struct TArray<struct FWeatherSequenceInfo> PrivateSequences; // 0x90(0x10)
	struct TArray<struct FWeatherSequenceInfo> EditorOnlySequences; // 0xa0(0x10)
	struct UWeatherCustomSequences* CustomSequences; // 0xb0(0x08)
	struct TArray<struct FWeatherSequenceRedirector> Redirectors; // 0xb8(0x10)
	struct TArray<struct UWeatherSequence*> HardLoadSequences; // 0xc8(0x10)
	struct FWeatherDefinitionName FallDefaultWeather; // 0xd8(0x10)
	struct FWeatherDefinitionName WinterDefaultWeather; // 0xe8(0x10)
	struct FWeatherDefinitionName SpringDefaultWeather; // 0xf8(0x10)
	struct FWeatherDefinitionName SummerDefaultWeather; // 0x108(0x10)
};

// Class Weather.LiveWeatherSequenceInfo
// Size: 0x98 (Inherited: 0x28)
struct ULiveWeatherSequenceInfo : UObject {
	struct UWeatherSequence* Sequence; // 0x28(0x08)
	struct USceneRigPlayer* Player; // 0x30(0x08)
	struct FWeatherSequenceOrigin Origin; // 0x38(0x20)
	struct FWeatherSequenceOrigin Next; // 0x58(0x20)
	float GamePlaybackScale; // 0x78(0x04)
	float DynamicPlaybackScale; // 0x7c(0x04)
	bool bKillASAP; // 0x80(0x01)
	bool bForceInstantChange; // 0x81(0x01)
	bool bCalledReadyToPlay; // 0x82(0x01)
	bool bPaused; // 0x83(0x01)
	bool bDone; // 0x84(0x01)
	char pad_85[0x13]; // 0x85(0x13)
};

// Class Weather.WeatherSequencePendingLoad
// Size: 0xd0 (Inherited: 0x98)
struct UWeatherSequencePendingLoad : ULiveWeatherSequenceInfo {
	struct TSoftObjectPtr<UWeatherSequence> Asset; // 0x98(0x28)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class Weather.SceneAction_WeatherSequence
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequence : USceneRigActionBase {
};

// Class Weather.SceneActionState_WeatherSequence
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequence : USceneRigActionState {
};

// Class Weather.SceneActionState_WeatherSequenceAuto
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceAuto : USceneActionState_WeatherSequence {
};

// Class Weather.SceneAction_WeatherSequencePause
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequencePause : USceneAction_WeatherSequence {
};

// Class Weather.SceneActionState_WeatherSequencePause
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequencePause : USceneActionState_WeatherSequence {
};

// Class Weather.SceneAction_WeatherSequenceCloudsPreset
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequenceCloudsPreset : USceneAction_WeatherSequence {
};

// Class Weather.SceneActionState_WeatherSequenceCloudsPreset
// Size: 0x58 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceCloudsPreset : USceneActionState_WeatherSequenceAuto {
	float LatchedBlendIn; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Weather.SceneAction_WeatherSequenceCloudsPresetDataTable
// Size: 0xd8 (Inherited: 0x88)
struct USceneAction_WeatherSequenceCloudsPresetDataTable : USceneAction_WeatherSequenceCloudsPreset {
	struct FDataTableRowHandle Preset; // 0x88(0x10)
	float HeightOffset; // 0x98(0x04)
	bool bSuperExpensiveCloudsCinematicOnly; // 0x9c(0x01)
	bool bOverrideCoverageChance; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	float OverrideCoverageChance; // 0xa0(0x04)
	bool bOverrideTypeChance; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float OverrideTypeChance; // 0xa8(0x04)
	bool bOverridePrecipitationChance; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float OverridePrecipitationChance; // 0xb0(0x04)
	bool bOverrideHighAltitudeChance; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float OverrideHighAltitudeChance; // 0xb8(0x04)
	bool bOverrideLayerRadius; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float OverrideLayerRadius; // 0xc0(0x04)
	bool bOverrideLayerVerticalHeight; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float OverrideLayerVerticalHeight; // 0xc8(0x04)
	bool bOverrideCoverageCameraFade; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float OverrideCoverageCameraFade; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class Weather.SceneAction_WeatherSequenceCloudsParams
// Size: 0x198 (Inherited: 0x88)
struct USceneAction_WeatherSequenceCloudsParams : USceneAction_WeatherSequenceCloudsPreset {
	struct FVolumetricCloudsPresetParams Params; // 0x88(0x108)
	float HeightOffset; // 0x190(0x04)
	bool bSuperExpensiveCloudsCinematicOnly; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
};

// Class Weather.SceneAction_WeatherSequenceCloudsWind
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequenceCloudsWind : USceneAction_WeatherSequence {
};

// Class Weather.SceneActionState_WeatherSequenceCloudsWind
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceCloudsWind : USceneActionState_WeatherSequenceAuto {
};

// Class Weather.SceneAction_WeatherSequenceCloudsWindParams
// Size: 0xc8 (Inherited: 0x88)
struct USceneAction_WeatherSequenceCloudsWindParams : USceneAction_WeatherSequenceCloudsWind {
	struct FVolumetricCloudsWeatherWindParams WindParams; // 0x88(0x3c)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class Weather.SceneAction_WeatherSequenceCloudsLegacy
// Size: 0x98 (Inherited: 0x88)
struct USceneAction_WeatherSequenceCloudsLegacy : USceneAction_WeatherSequence {
	struct FCloudDefinitionName Definition; // 0x88(0x10)
};

// Class Weather.SceneActionState_WeatherSequenceCloudsLegacy
// Size: 0x58 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceCloudsLegacy : USceneActionState_WeatherSequenceAuto {
	float LatchedBlendIn; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Weather.SceneAction_WeatherSequenceCloudsWeatherParams
// Size: 0xb0 (Inherited: 0x88)
struct USceneAction_WeatherSequenceCloudsWeatherParams : USceneAction_WeatherSequenceCloudsPreset {
	struct FVolumetricCloudsWeatherState WeatherState; // 0x88(0x20)
	float HeightOffset; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class Weather.SceneAction_WeatherSequenceEnvGlobal
// Size: 0x90 (Inherited: 0x88)
struct USceneAction_WeatherSequenceEnvGlobal : USceneAction_WeatherSequence {
	bool bUnsetAtEndOfSequence; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Weather.SceneActionState_WeatherSequenceEnvGlobal
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceEnvGlobal : USceneActionState_WeatherSequence {
};

// Class Weather.SceneAction_WeatherSequenceEnvGlobalScalar
// Size: 0xa0 (Inherited: 0x90)
struct USceneAction_WeatherSequenceEnvGlobalScalar : USceneAction_WeatherSequenceEnvGlobal {
	struct FEnvironmentalGlobalsScalarName VariableName; // 0x90(0x10)
};

// Class Weather.SceneAction_WeatherSequenceEnvGlobalScalarCurve
// Size: 0x138 (Inherited: 0xa0)
struct USceneAction_WeatherSequenceEnvGlobalScalarCurve : USceneAction_WeatherSequenceEnvGlobalScalar {
	struct FRuntimeFloatCurve Value; // 0xa0(0x88)
	float ClampMin; // 0x128(0x04)
	float ClampMax; // 0x12c(0x04)
	float BlendInTime; // 0x130(0x04)
	bool bStretchToDuration; // 0x134(0x01)
	bool bClampMinValue; // 0x135(0x01)
	bool bClampMaxValue; // 0x136(0x01)
	char pad_137[0x1]; // 0x137(0x01)
};

// Class Weather.SceneAction_WeatherSequenceEnvGlobalScalarConstant
// Size: 0xa8 (Inherited: 0xa0)
struct USceneAction_WeatherSequenceEnvGlobalScalarConstant : USceneAction_WeatherSequenceEnvGlobalScalar {
	float Value; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Weather.SceneAction_WeatherSequenceEnvGlobalScalarConstantIn
// Size: 0xa8 (Inherited: 0xa8)
struct USceneAction_WeatherSequenceEnvGlobalScalarConstantIn : USceneAction_WeatherSequenceEnvGlobalScalarConstant {
};

// Class Weather.SceneAction_WeatherSequenceEnvGlobalColor
// Size: 0xa8 (Inherited: 0x90)
struct USceneAction_WeatherSequenceEnvGlobalColor : USceneAction_WeatherSequenceEnvGlobal {
	struct FEnvironmentalGlobalsVectorOrColorName VariableName; // 0x90(0x10)
	bool bLerpWithHSV; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Weather.SceneAction_WeatherSequenceEnvGlobalColorCurve
// Size: 0x2b8 (Inherited: 0xa8)
struct USceneAction_WeatherSequenceEnvGlobalColorCurve : USceneAction_WeatherSequenceEnvGlobalColor {
	struct FRuntimeCurveLinearColor Value; // 0xa8(0x208)
	float BlendInTime; // 0x2b0(0x04)
	bool bStretchToDuration; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
};

// Class Weather.SceneAction_WeatherSequenceEnvGlobalColorConstant
// Size: 0xb8 (Inherited: 0xa8)
struct USceneAction_WeatherSequenceEnvGlobalColorConstant : USceneAction_WeatherSequenceEnvGlobalColor {
	struct FLinearColor Value; // 0xa8(0x10)
};

// Class Weather.SceneAction_WeatherSequenceEnvGlobalColorConstantIn
// Size: 0xb8 (Inherited: 0xb8)
struct USceneAction_WeatherSequenceEnvGlobalColorConstantIn : USceneAction_WeatherSequenceEnvGlobalColorConstant {
};

// Class Weather.SceneAction_WeatherSequenceFog
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequenceFog : USceneAction_WeatherSequence {
};

// Class Weather.SceneActionState_WeatherSequenceFog
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceFog : USceneActionState_WeatherSequenceAuto {
};

// Class Weather.SceneAction_WeatherSequenceFogParams
// Size: 0x268 (Inherited: 0x88)
struct USceneAction_WeatherSequenceFogParams : USceneAction_WeatherSequenceFog {
	struct FExpHeightFogParameters Fog; // 0x88(0x1d8)
	bool bFollowCamera; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
};

// Class Weather.SceneAction_WeatherSequenceFogOverrideParams
// Size: 0x288 (Inherited: 0x88)
struct USceneAction_WeatherSequenceFogOverrideParams : USceneAction_WeatherSequenceFog {
	struct FExpHeightFogParametersOverride Fog; // 0x88(0x1f8)
	bool bFollowCamera; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
};

// Class Weather.SceneAction_WeatherSequenceFogLegacy
// Size: 0x98 (Inherited: 0x88)
struct USceneAction_WeatherSequenceFogLegacy : USceneAction_WeatherSequenceFog {
	struct FFogDefinitionName Definition; // 0x88(0x10)
};

// Class Weather.SceneAction_WeatherSequenceFogNoise
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequenceFogNoise : USceneAction_WeatherSequence {
};

// Class Weather.SceneActionState_WeatherSequenceFogNoise
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceFogNoise : USceneActionState_WeatherSequenceAuto {
};

// Class Weather.SceneAction_WeatherSequenceFogNoiseSet
// Size: 0xd0 (Inherited: 0x88)
struct USceneAction_WeatherSequenceFogNoiseSet : USceneAction_WeatherSequenceFogNoise {
	struct FExpHeightFogVolumetricNoiseParameters Noise; // 0x88(0x48)
};

// Class Weather.SceneAction_WeatherSequenceFogNoiseOverride
// Size: 0xd0 (Inherited: 0x88)
struct USceneAction_WeatherSequenceFogNoiseOverride : USceneAction_WeatherSequenceFogNoise {
	struct FExpHeightFogVolumetricNoiseParametersOverride Noise; // 0x88(0x48)
};

// Class Weather.SceneAction_WeatherSequenceNiagara
// Size: 0xb0 (Inherited: 0x88)
struct USceneAction_WeatherSequenceNiagara : USceneAction_WeatherSequence {
	struct TSoftObjectPtr<UNiagaraSystem> NiagaraSystemAsset; // 0x88(0x28)
};

// Class Weather.SceneActionState_WeatherSequenceNiagara
// Size: 0x80 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceNiagara : USceneActionState_WeatherSequence {
	struct UNiagaraSystem* NiagaraSystem; // 0x50(0x08)
	struct TArray<struct UNiagaraComponent*> NiagaraComponents; // 0x58(0x10)
	bool bInInterval; // 0x68(0x01)
	bool bSpawned; // 0x69(0x01)
	char pad_6A[0x16]; // 0x6a(0x16)
};

// Class Weather.SceneAction_WeatherSequenceNiagaraAttached
// Size: 0x130 (Inherited: 0xb0)
struct USceneAction_WeatherSequenceNiagaraAttached : USceneAction_WeatherSequenceNiagara {
	struct FNiagaraSystemSpawnAttachedPointInfo SpawnInfo; // 0xb0(0x80)
};

// Class Weather.SceneAction_WeatherSequenceCameraNiagara
// Size: 0x140 (Inherited: 0x130)
struct USceneAction_WeatherSequenceCameraNiagara : USceneAction_WeatherSequenceNiagaraAttached {
	struct FName SetOutdoors; // 0x130(0x08)
	bool bSetOutdoorsValue; // 0x138(0x01)
	bool bHideIndoors; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
};

// Class Weather.SceneAction_WeatherSequenceSkeletalNiagara
// Size: 0x160 (Inherited: 0xb0)
struct USceneAction_WeatherSequenceSkeletalNiagara : USceneAction_WeatherSequenceNiagara {
	struct UActorProvider* Actor; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FNiagaraSystemSpawnMultiSkeletalInfo SpawnInfo; // 0xc0(0x80)
	struct FNiagaraHelpersPrimFilter Filter; // 0x140(0x18)
	char pad_158[0x8]; // 0x158(0x08)
};

// Class Weather.SceneAction_WeatherSequenceNiagaraInWorld
// Size: 0x110 (Inherited: 0xb0)
struct USceneAction_WeatherSequenceNiagaraInWorld : USceneAction_WeatherSequenceNiagara {
	struct UTransformProvider* Transform; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FNiagaraSystemSpawnInfo SpawnInfo; // 0xc0(0x50)
};

// Class Weather.SceneAction_WeatherSequenceAudioAmbience
// Size: 0x98 (Inherited: 0x88)
struct USceneAction_WeatherSequenceAudioAmbience : USceneAction_WeatherSequence {
	struct UAkAudioEvent* StartSoundFX; // 0x88(0x08)
	struct UAkAudioEvent* EndSoundFX; // 0x90(0x08)
};

// Class Weather.SceneActionState_WeatherSequenceAudioAmbience
// Size: 0x58 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceAudioAmbience : USceneActionState_WeatherSequence {
	int32_t SoundHandle; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Weather.SceneActionState_WeatherSequenceCameraMesh
// Size: 0x88 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceCameraMesh : USceneActionState_WeatherSequence {
	struct UObject* Mesh; // 0x50(0x08)
	struct UMeshComponent* MeshComponent; // 0x58(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MIDs; // 0x60(0x10)
	bool bInInterval; // 0x70(0x01)
	bool bSpawned; // 0x71(0x01)
	char pad_72[0x16]; // 0x72(0x16)
};

// Class Weather.SceneAction_WeatherSequenceCameraMesh
// Size: 0xd0 (Inherited: 0x88)
struct USceneAction_WeatherSequenceCameraMesh : USceneAction_WeatherSequence {
	struct FVector Offset; // 0x88(0x0c)
	struct FRotator Rotation; // 0x94(0x0c)
	struct FVector Scale; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FWeatherSequenceScalarParameterCurve> Parameters; // 0xb0(0x10)
	struct FName SetMaterialOutdoors; // 0xc0(0x08)
	bool bHideIndoors; // 0xc8(0x01)
	bool bSetOutdoorsValue; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
};

// Class Weather.SceneAction_WeatherSequenceCameraStaticMesh
// Size: 0xf8 (Inherited: 0xd0)
struct USceneAction_WeatherSequenceCameraStaticMesh : USceneAction_WeatherSequenceCameraMesh {
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0xd0(0x28)
};

// Class Weather.SceneAction_WeatherSequenceLightingBase
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequenceLightingBase : USceneAction_WeatherSequence {
};

// Class Weather.SceneActionState_WeatherSequenceLightingBase
// Size: 0x58 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceLightingBase : USceneActionState_WeatherSequence {
	float CurrentTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Weather.SceneAction_WeatherSequenceLightingPostProcessingBase
// Size: 0x90 (Inherited: 0x88)
struct USceneAction_WeatherSequenceLightingPostProcessingBase : USceneAction_WeatherSequenceLightingBase {
	float PostSequenceLifetime; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Weather.SceneActionState_WeatherSequenceLightingPostProcessing
// Size: 0x650 (Inherited: 0x58)
struct USceneActionState_WeatherSequenceLightingPostProcessing : USceneActionState_WeatherSequenceLightingBase {
	char pad_58[0x8]; // 0x58(0x08)
	struct FPostProcessSettings CachedPostProcessSettings; // 0x60(0x5f0)
};

// Class Weather.SceneAction_WeatherSequenceLightingPostProcessing
// Size: 0x6c0 (Inherited: 0x90)
struct USceneAction_WeatherSequenceLightingPostProcessing : USceneAction_WeatherSequenceLightingPostProcessingBase {
	struct FPostProcessSettings PostProcessSettings; // 0x90(0x5f0)
	struct FBlendDomain BlendDomain; // 0x680(0x38)
	float Priority; // 0x6b8(0x04)
	bool bEnabled; // 0x6bc(0x01)
	char pad_6BD[0x3]; // 0x6bd(0x03)
};

// Class Weather.SceneAction_WeatherSequenceLightingPostProcessingBlendConstant
// Size: 0x6d0 (Inherited: 0x6c0)
struct USceneAction_WeatherSequenceLightingPostProcessingBlendConstant : USceneAction_WeatherSequenceLightingPostProcessing {
	float BlendWeight; // 0x6c0(0x04)
	char pad_6C4[0xc]; // 0x6c4(0x0c)
};

// Class Weather.SceneAction_WeatherSequenceLightingPostProcessingBlendCurve
// Size: 0x750 (Inherited: 0x6c0)
struct USceneAction_WeatherSequenceLightingPostProcessingBlendCurve : USceneAction_WeatherSequenceLightingPostProcessing {
	struct FRuntimeFloatCurve BlendWeight; // 0x6c0(0x88)
	bool bStretchToDuration; // 0x748(0x01)
	char pad_749[0x7]; // 0x749(0x07)
};

// Class Weather.SceneAction_WeatherSequenceLightingRenderSettings
// Size: 0x130 (Inherited: 0x90)
struct USceneAction_WeatherSequenceLightingRenderSettings : USceneAction_WeatherSequenceLightingPostProcessingBase {
	struct FRenderSettingsPostProcessing Settings; // 0x90(0x5c)
	float ExposureTweak; // 0xec(0x04)
	struct FBlendDomain BlendDomain; // 0xf0(0x38)
	float Priority; // 0x128(0x04)
	bool bEnabled; // 0x12c(0x01)
	bool bUseExposureTweak; // 0x12d(0x01)
	char pad_12E[0x2]; // 0x12e(0x02)
};

// Class Weather.SceneAction_WeatherSequenceLightingRenderSettingsBlendConstant
// Size: 0x138 (Inherited: 0x130)
struct USceneAction_WeatherSequenceLightingRenderSettingsBlendConstant : USceneAction_WeatherSequenceLightingRenderSettings {
	float BlendWeight; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
};

// Class Weather.SceneAction_WeatherSequenceLightingRenderSettingsBlendCurve
// Size: 0x1c0 (Inherited: 0x130)
struct USceneAction_WeatherSequenceLightingRenderSettingsBlendCurve : USceneAction_WeatherSequenceLightingRenderSettings {
	struct FRuntimeFloatCurve BlendWeight; // 0x130(0x88)
	bool bStretchToDuration; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
};

// Class Weather.SceneAction_WeatherSequenceLightingGlobalLightRigBlendable
// Size: 0xd0 (Inherited: 0x88)
struct USceneAction_WeatherSequenceLightingGlobalLightRigBlendable : USceneAction_WeatherSequenceLightingBase {
	struct UGlobalLightingBlendable* GlobalLightingBlendable; // 0x88(0x08)
	struct FBlendDomain BlendDomain; // 0x90(0x38)
	float Priority; // 0xc8(0x04)
	float PostSequenceLifetime; // 0xcc(0x04)
};

// Class Weather.SceneActionState_WeatherSequenceLightingGlobalLightRigBlendable
// Size: 0x60 (Inherited: 0x58)
struct USceneActionState_WeatherSequenceLightingGlobalLightRigBlendable : USceneActionState_WeatherSequenceLightingBase {
	char pad_58[0x8]; // 0x58(0x08)
};

// Class Weather.SceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendConstant
// Size: 0xd8 (Inherited: 0xd0)
struct USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendConstant : USceneAction_WeatherSequenceLightingGlobalLightRigBlendable {
	float BlendWeight; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class Weather.SceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendCurve
// Size: 0x160 (Inherited: 0xd0)
struct USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendCurve : USceneAction_WeatherSequenceLightingGlobalLightRigBlendable {
	struct FRuntimeFloatCurve BlendWeight; // 0xd0(0x88)
	bool bStretchToDuration; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
};

// Class Weather.SceneAction_WeatherSequenceOvercast
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequenceOvercast : USceneAction_WeatherSequence {
};

// Class Weather.SceneActionState_WeatherSequenceOvercast
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceOvercast : USceneActionState_WeatherSequence {
};

// Class Weather.SceneAction_WeatherSequenceOvercastConstant
// Size: 0x90 (Inherited: 0x88)
struct USceneAction_WeatherSequenceOvercastConstant : USceneAction_WeatherSequenceOvercast {
	float Overcast; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Weather.SceneAction_WeatherSequenceOvercastCurve
// Size: 0x118 (Inherited: 0x88)
struct USceneAction_WeatherSequenceOvercastCurve : USceneAction_WeatherSequenceOvercast {
	struct FRuntimeFloatCurve Overcast; // 0x88(0x88)
	bool bStretchToDuration; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float BlendDuration; // 0x114(0x04)
};

// Class Weather.SceneAction_WeatherSequenceCold
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequenceCold : USceneAction_WeatherSequence {
};

// Class Weather.SceneActionState_WeatherSequenceCold
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceCold : USceneActionState_WeatherSequence {
};

// Class Weather.SceneAction_WeatherSequenceColdConstant
// Size: 0x90 (Inherited: 0x88)
struct USceneAction_WeatherSequenceColdConstant : USceneAction_WeatherSequenceCold {
	float Cold; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Weather.SceneAction_WeatherSequenceColdCurve
// Size: 0x118 (Inherited: 0x88)
struct USceneAction_WeatherSequenceColdCurve : USceneAction_WeatherSequenceCold {
	struct FRuntimeFloatCurve Cold; // 0x88(0x88)
	bool bStretchToDuration; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float BlendDuration; // 0x114(0x04)
};

// Class Weather.SceneAction_WeatherSequenceStormCurve
// Size: 0x118 (Inherited: 0x88)
struct USceneAction_WeatherSequenceStormCurve : USceneAction_WeatherSequence {
	struct FRuntimeFloatCurve Curve; // 0x88(0x88)
	bool bStretchToDuration; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// Class Weather.SceneActionState_WeatherSequenceStormCurve
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceStormCurve : USceneActionState_WeatherSequence {
};

// Class Weather.SceneAction_WeatherSequenceStormIntensity
// Size: 0x118 (Inherited: 0x118)
struct USceneAction_WeatherSequenceStormIntensity : USceneAction_WeatherSequenceStormCurve {
};

// Class Weather.SceneAction_WeatherSequenceStormCoverage
// Size: 0x118 (Inherited: 0x118)
struct USceneAction_WeatherSequenceStormCoverage : USceneAction_WeatherSequenceStormCurve {
};

// Class Weather.SceneAction_WeatherSequenceStorm
// Size: 0xc0 (Inherited: 0x88)
struct USceneAction_WeatherSequenceStorm : USceneAction_WeatherSequence {
	enum class EWeatherSurfacePrecipitation PrecipitationType; // 0x88(0x01)
	enum class EWeatherSurfaceStormType Type; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct TSoftObjectPtr<UWeatherSurfaceDataAsset> Precipitation; // 0x90(0x28)
	struct UWeatherSurfaceDataAsset* PreloadedPrecipitation; // 0xb8(0x08)
};

// Class Weather.SceneActionState_WeatherSequenceStorm
// Size: 0x70 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceStorm : USceneActionState_WeatherSequence {
	struct UWeatherSurfaceDataAsset* Precipitation; // 0x50(0x08)
	bool bKickedOff; // 0x58(0x01)
	char pad_59[0x17]; // 0x59(0x17)
};

// Class Weather.SceneAction_WeatherSequenceStormActor
// Size: 0x98 (Inherited: 0x88)
struct USceneAction_WeatherSequenceStormActor : USceneAction_WeatherSequence {
	struct AWeatherSurfaceWorldFXBlueprint* StormActor; // 0x88(0x08)
	struct UTransformProvider* Transform; // 0x90(0x08)
};

// Class Weather.SceneActionState_WeatherSequenceStormActor
// Size: 0x58 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceStormActor : USceneActionState_WeatherSequence {
	struct TWeakObjectPtr<struct AWeatherSurfaceWorldFXBlueprint> SpawnedActor; // 0x50(0x08)
};

// Class Weather.SceneAction_WeatherSequenceSunDisk
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequenceSunDisk : USceneAction_WeatherSequence {
};

// Class Weather.SceneActionState_WeatherSequenceSunDisk
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceSunDisk : USceneActionState_WeatherSequenceAuto {
};

// Class Weather.SceneAction_WeatherSequenceSunDiskParams
// Size: 0xa0 (Inherited: 0x88)
struct USceneAction_WeatherSequenceSunDiskParams : USceneAction_WeatherSequenceSunDisk {
	struct FSunDiskOverrides SunDisk; // 0x88(0x14)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Weather.SceneAction_WeatherSequenceSunDiskDefaultParams
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequenceSunDiskDefaultParams : USceneAction_WeatherSequenceSunDisk {
};

// Class Weather.SceneAction_WeatherSequenceSurfaceFog
// Size: 0x120 (Inherited: 0x88)
struct USceneAction_WeatherSequenceSurfaceFog : USceneAction_WeatherSequence {
	enum class ESurfaceFogType Type; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FRuntimeFloatCurve Intensity; // 0x90(0x88)
	bool bStretchToDuration; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// Class Weather.SceneActionState_WeatherSequenceSurfaceFog
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceSurfaceFog : USceneActionState_WeatherSequence {
};

// Class Weather.SceneAction_WeatherSequenceWind
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_WeatherSequenceWind : USceneAction_WeatherSequence {
};

// Class Weather.SceneActionState_WeatherSequenceWind
// Size: 0x58 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceWind : USceneActionState_WeatherSequenceAuto {
	struct TWeakObjectPtr<struct UWeatherWindDirectionalSourceComponent> WindSource; // 0x50(0x08)
};

// Class Weather.SceneAction_WeatherSequenceWindParams
// Size: 0x1c0 (Inherited: 0x88)
struct USceneAction_WeatherSequenceWindParams : USceneAction_WeatherSequenceWind {
	struct FWindParameters Wind; // 0x88(0x128)
	struct UWindGustController* WindGustController; // 0x1b0(0x08)
	struct FWindParametersSampleTime SampleTime; // 0x1b8(0x08)
};

// Class Weather.SceneAction_WeatherSequenceWindRandomParams
// Size: 0xa0 (Inherited: 0x88)
struct USceneAction_WeatherSequenceWindRandomParams : USceneAction_WeatherSequenceWind {
	float MinAngle; // 0x88(0x04)
	float MaxAngle; // 0x8c(0x04)
	float MinSpeed; // 0x90(0x04)
	float MaxSpeed; // 0x94(0x04)
	struct UWindGustController* WindGustController; // 0x98(0x08)
};

// Class Weather.SceneAction_WeatherSequenceWindLegacy
// Size: 0x98 (Inherited: 0x88)
struct USceneAction_WeatherSequenceWindLegacy : USceneAction_WeatherSequenceWind {
	struct FWindDefinitionName Definition; // 0x88(0x10)
};

// Class Weather.SceneAction_WeatherSequenceWindMulti
// Size: 0xa8 (Inherited: 0x88)
struct USceneAction_WeatherSequenceWindMulti : USceneAction_WeatherSequence {
	float BlendInTime; // 0x88(0x04)
	enum class EWindParametersTimeBase BlendInTimeBase; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct TArray<struct FWindDefinitionName> Definitions; // 0x90(0x10)
	bool bRandomizeOrder; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Weather.SceneActionState_WeatherSequenceWindMulti
// Size: 0x1a8 (Inherited: 0x50)
struct USceneActionState_WeatherSequenceWindMulti : USceneActionState_WeatherSequence {
	struct TWeakObjectPtr<struct UWeatherWindDirectionalSourceInstantComponent> WindSource; // 0x50(0x08)
	struct FWindParameters WindParameters; // 0x58(0x128)
	struct FWindParametersSampleTime SampleTime; // 0x180(0x08)
	struct UWindGustController* WindGustController; // 0x188(0x08)
	struct FWeatherTimeBase StartWeatherTime; // 0x190(0x10)
	int32_t Index; // 0x1a0(0x04)
	bool bValidParameters; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
};

// Class Weather.WeatherDecalUpdateDecalFullScreenOpacity
// Size: 0x50 (Inherited: 0x48)
struct UWeatherDecalUpdateDecalFullScreenOpacity : UWeatherDecalUpdateSingleParameterFlex {
	bool bIncludeWeatherblendDomainOpacity; // 0x48(0x01)
	bool bToggleVisibilityBasedOnOpacity; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class Weather.StormWeatherDecalTracker
// Size: 0x88 (Inherited: 0x50)
struct UStormWeatherDecalTracker : UWeatherDecalTracker {
	struct TWeakObjectPtr<struct UWorld> OwningWorld; // 0x50(0x08)
	struct FWeatherStormState StormState; // 0x58(0x20)
	struct AWeatherAnimationBlueprint* AnimationActor; // 0x78(0x08)
	struct AWeatherCoverageBlueprint* CoverageActor; // 0x80(0x08)
};

// Class Weather.StormWeatherDecalDefault
// Size: 0xe8 (Inherited: 0x28)
struct UStormWeatherDecalDefault : UStormWeatherDecal {
	struct FWeatherDecalSetup Setup; // 0x28(0x20)
	struct AWeatherAnimationBlueprint* WeatherAnimationClass; // 0x48(0x08)
	struct AWeatherCoverageBlueprint* WeatherCoverageClass; // 0x50(0x08)
	struct FWeatherStormSurfaceParams SurfaceParameters; // 0x58(0x70)
	struct TArray<struct UWeatherDecalSettings*> ExtraSettings; // 0xc8(0x10)
	struct TArray<struct UWeatherDecalUpdate*> Updates; // 0xd8(0x10)
};

// Class Weather.WeatherSurfaceDataAsset
// Size: 0x188 (Inherited: 0x30)
struct UWeatherSurfaceDataAsset : UDataAsset {
	struct FWeatherDecalSetup Decal; // 0x30(0x20)
	struct AWeatherAnimationBlueprint* BPWeatherAnimationClass; // 0x50(0x08)
	struct AWeatherCoverageBlueprint* BPWeatherCoverageClass; // 0x58(0x08)
	struct FWeatherStormSurfaceParams SurfaceParameters; // 0x60(0x70)
	struct FName PermuterName; // 0xd0(0x08)
	float SwapRadius; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FWeatherSurfaceCharacterFXSettings CharacterFX; // 0xe0(0xa0)
	bool bDoWeatherSwap; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
};

// Class Weather.WeatherTypesAsset
// Size: 0x40 (Inherited: 0x30)
struct UWeatherTypesAsset : UDataAsset {
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x30(0x08)
	struct UNiagaraParameterCollection* NiagaraParameterCollection; // 0x38(0x08)
};

// Class Weather.WeatherStorm
// Size: 0xf0 (Inherited: 0x28)
struct UWeatherStorm : UObject {
	struct TWeakObjectPtr<struct AActor> ParentActor; // 0x28(0x08)
	struct TWeakObjectPtr<struct UObject> StormOwner; // 0x30(0x08)
	struct UWeatherSurfaceDataAsset* SurfaceData; // 0x38(0x08)
	struct FWeatherStormState StormState; // 0x40(0x20)
	struct AFullScreenWeatherDecalActor* WeatherDecal; // 0x60(0x08)
	struct AWeatherAnimationBlueprint* WeatherAnimationActor; // 0x68(0x08)
	struct AWeatherCoverageBlueprint* WeatherCoverageActor; // 0x70(0x08)
	struct UMaterialSwapSphereSelectionComponent* WeatherSwapper; // 0x78(0x08)
	struct UMaterialPermuterLoadingBundle* CharacterFXLoadingBundle; // 0x80(0x08)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FWeatherSurfaceCharacterFXState> CharacterFX; // 0x88(0x50)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FMaterialPermuterKey WeatherGroupKey; // 0xe0(0x10)
};

// Class Weather.WeatherSurfaceBlueprintBase
// Size: 0x268 (Inherited: 0x248)
struct AWeatherSurfaceBlueprintBase : AActor {
	struct FWeatherStormState StormState; // 0x248(0x20)
};

// Class Weather.WeatherAnimationBlueprint
// Size: 0x268 (Inherited: 0x268)
struct AWeatherAnimationBlueprint : AWeatherSurfaceBlueprintBase {
};

// Class Weather.WeatherCoverageBlueprint
// Size: 0x268 (Inherited: 0x268)
struct AWeatherCoverageBlueprint : AWeatherSurfaceBlueprintBase {
};

// Class Weather.WeatherSurfaceFogBase
// Size: 0x260 (Inherited: 0x248)
struct AWeatherSurfaceFogBase : AActor {
	int32_t SupportedFogTypes; // 0x248(0x04)
	enum class ESurfaceFogType ShowingFogType; // 0x24c(0x01)
	char pad_24D[0x13]; // 0x24d(0x13)

	void RecalculateBounds(); // Function Weather.WeatherSurfaceFogBase.RecalculateBounds // (Final|Native|Public|BlueprintCallable) // @ game+0x1d1a4d0
	void OnShowSurfaceFog(enum class ESurfaceFogType Type); // Function Weather.WeatherSurfaceFogBase.OnShowSurfaceFog // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHideSurfaceFog(); // Function Weather.WeatherSurfaceFogBase.OnHideSurfaceFog // (Event|Public|BlueprintEvent) // @ game+0x38a7480
};

// Class Weather.WeatherSurfaceFogSimple
// Size: 0x260 (Inherited: 0x260)
struct AWeatherSurfaceFogSimple : AWeatherSurfaceFogBase {
};

// Class Weather.WeatherSurfaceFogSelective
// Size: 0x270 (Inherited: 0x260)
struct AWeatherSurfaceFogSelective : AWeatherSurfaceFogBase {
	struct USceneComponent* OnlyShowHide; // 0x260(0x08)
	bool bOnlyShowHideIncludeChildren; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)

	void SetComponentToShowHide(struct USceneComponent* SceneComponent, bool bIncludeChildren); // Function Weather.WeatherSurfaceFogSelective.SetComponentToShowHide // (Final|Native|Public|BlueprintCallable) // @ game+0x1d1a510
};

// Class Weather.WeatherSurfaceWorldFXBlueprint
// Size: 0x268 (Inherited: 0x268)
struct AWeatherSurfaceWorldFXBlueprint : AWeatherSurfaceBlueprintBase {
};

// Class Weather.WeatherStormFXBase
// Size: 0x258 (Inherited: 0x248)
struct AWeatherStormFXBase : AActor {
	struct UWeatherStorm* WeatherStorm; // 0x248(0x08)
	float OverrideActivationDistanceMeters; // 0x250(0x04)
	bool bUseOverrideActivationDistanceMeters; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)

	void OnStormStart(struct FWeatherStormState StormState); // Function Weather.WeatherStormFXBase.OnStormStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnStormEnd(); // Function Weather.WeatherStormFXBase.OnStormEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void IsStorming(bool& bStorming); // Function Weather.WeatherStormFXBase.IsStorming // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d1a440
	void GetStormState(struct FWeatherStormState& StormState, bool& bStorming); // Function Weather.WeatherStormFXBase.GetStormState // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d1a330
};

// Class Weather.WeatherStormFXSimple
// Size: 0x290 (Inherited: 0x258)
struct AWeatherStormFXSimple : AWeatherStormFXBase {
	struct FWeatherStormTypeFXSettings Settings; // 0x258(0x20)
	struct FWeatherStormTypeFXSettingsState State; // 0x278(0x18)
};

// Class Weather.WeatherStormFXMulti
// Size: 0x278 (Inherited: 0x258)
struct AWeatherStormFXMulti : AWeatherStormFXBase {
	struct TArray<struct FWeatherStormTypeFXSettings> Settings; // 0x258(0x10)
	struct TArray<struct FWeatherStormTypeFXSettingsState> States; // 0x268(0x10)
};

// Class Weather.WindParams
// Size: 0x28 (Inherited: 0x28)
struct UWindParams : UObject {
};

// Class Weather.WindParamsFixed
// Size: 0x160 (Inherited: 0x28)
struct UWindParamsFixed : UWindParams {
	struct FName Name; // 0x28(0x08)
	float Angle; // 0x30(0x04)
	float Speed; // 0x34(0x04)
	struct UWindGustController* WindGustController; // 0x38(0x08)
	struct FWindParametersSampleTime SampleTime; // 0x40(0x08)
	struct FRuntimeFloatCurve ModAngle; // 0x48(0x88)
	struct FRuntimeFloatCurve ModSpeed; // 0xd0(0x88)
	bool bLoopModAngle; // 0x158(0x01)
	bool bLoopModSpeed; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
};

// Class Weather.WindDefinitions
// Size: 0x58 (Inherited: 0x30)
struct UWindDefinitions : UDataAsset {
	struct TArray<struct UWindParams*> Definitions; // 0x30(0x10)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x40(0x08)
	struct UNiagaraParameterCollection* NiagaraParameterCollection; // 0x48(0x08)
	float NormalizedWindSpeedMetersPerSecond; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Weather.WeatherWindDirectionalSourceComponentBase
// Size: 0x240 (Inherited: 0x220)
struct UWeatherWindDirectionalSourceComponentBase : UWindSourceComponentBase {
	struct TWeakObjectPtr<struct UObject> Owner; // 0x220(0x08)
	float ExternalBlend; // 0x228(0x04)
	float ForceBlendOut; // 0x22c(0x04)
	float OrphanDeathTime; // 0x230(0x04)
	float OrphanDeathCountdown; // 0x234(0x04)
	bool bMarkedAsOrphan; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class Weather.WeatherWindDirectionalSourceInstantComponent
// Size: 0x260 (Inherited: 0x240)
struct UWeatherWindDirectionalSourceInstantComponent : UWeatherWindDirectionalSourceComponentBase {
	struct FWindParametersInstant WindParamsInstant; // 0x240(0x10)
	struct UWindGustController* WindGustController; // 0x250(0x08)
	float Strength; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
};

// Class Weather.WeatherWindDirectionalSourceComponent
// Size: 0x390 (Inherited: 0x260)
struct UWeatherWindDirectionalSourceComponent : UWeatherWindDirectionalSourceInstantComponent {
	struct FWindParameters WindParams; // 0x260(0x128)
	struct FWindParametersSampleTime SampleTime; // 0x388(0x08)
};

// Class Weather.WindVolumeInterface
// Size: 0x28 (Inherited: 0x28)
struct UWindVolumeInterface : UInterface {
};

