// Enum Weather.EWeatherDecalParameterType
enum class EWeatherDecalParameterType : uint8 {
	EnvGlobals = 0,
	MID = 1,
	MPC = 2,
	NPC = 3,
	SystemMPC = 4,
	SystemNPC = 5,
	RTPC = 6,
	SceneRigEnvGlobals = 7,
	EWeatherDecalParameterType_MAX = 8
};

// Enum Weather.EWeatherSeasonFilter
enum class EWeatherSeasonFilter : uint8 {
	Fall = 0,
	Winter = 1,
	Spring = 2,
	Summer = 3,
	EWeatherSeasonFilter_MAX = 4
};

// Enum Weather.EWeatherSequenceProbability
enum class EWeatherSequenceProbability : uint8 {
	Common = 0,
	Infrequent = 1,
	Rare = 2,
	VeryRare = 3,
	Never = 4,
	EWeatherSequenceProbability_MAX = 5
};

// Enum Weather.EWeatherSequenceOriginType
enum class EWeatherSequenceOriginType : uint8 {
	Default = 0,
	CustomLottery = 1,
	Volume = 2,
	CommandConsole = 3,
	Override = 4,
	Stack = 5,
	SystemOverride = 6,
	EWeatherSequenceOriginType_MAX = 7
};

// Enum Weather.ESurfaceFogType
enum class ESurfaceFogType : uint8 {
	None = 0,
	Mist = 1,
	Fog = 2,
	Storm = 3,
	ESurfaceFogType_MAX = 4
};

// Enum Weather.EWeatherSurfaceCharacterFXWetState
enum class EWeatherSurfaceCharacterFXWetState : uint8 {
	Dry = 0,
	FirstWet = 1,
	Wet = 2,
	FirstDry = 3,
	EWeatherSurfaceCharacterFXWetState_MAX = 4
};

// Enum Weather.EWeatherSurfaceCharacterFXStateResetType
enum class EWeatherSurfaceCharacterFXStateResetType : uint8 {
	None = 0,
	Zero = 1,
	One = 2,
	EWeatherSurfaceCharacterFXStateResetType_MAX = 3
};

// Enum Weather.EWeatherSurfaceCharacterFXParameters
enum class EWeatherSurfaceCharacterFXParameters : uint8 {
	None = 0,
	LocalCoverage = 1,
	LocalCoverageRate = 2,
	LocalDrying = 3,
	CachedIndoors = 4,
	StormCoverage = 5,
	StormIntensity = 6,
	StormPrecipitation = 7,
	StormType = 8,
	StormAge = 9,
	EWeatherSurfaceCharacterFXParameters_MAX = 10
};

// Enum Weather.EWeatherSurfaceStormType
enum class EWeatherSurfaceStormType : uint8 {
	None = 0,
	Light = 1,
	Normal = 2,
	Heavy = 3,
	Torrential = 4,
	EWeatherSurfaceStormType_MAX = 5
};

// Enum Weather.EWeatherSurfacePrecipitation
enum class EWeatherSurfacePrecipitation : uint8 {
	None = 0,
	Rain = 1,
	Snow = 2,
	EWeatherSurfacePrecipitation_MAX = 3
};

// Enum Weather.EWindParametersTimeBase
enum class EWindParametersTimeBase : uint8 {
	GameSeconds = 0,
	GameMinutes = 1,
	GameHours = 2,
	RealSeconds = 3,
	RealMinutes = 4,
	RealHours = 5,
	EWindParametersTimeBase_MAX = 6
};

// ScriptStruct Weather.SunDiskOverrides
// Size: 0x14 (Inherited: 0x00)
struct FSunDiskOverrides {
	float SizeFactor; // 0x00(0x04)
	float Desaturation; // 0x04(0x04)
	float BrightnessFactor; // 0x08(0x04)
	float CoronaBrightnessFactor; // 0x0c(0x04)
	float CoronaAlphaFactor; // 0x10(0x04)
};

// ScriptStruct Weather.CloudParameters
// Size: 0x168 (Inherited: 0x00)
struct FCloudParameters {
	struct FVolumetricCloudsPresetParams Params; // 0x00(0x108)
	struct FVolumetricCloudsWeatherWindParams WindParams; // 0x108(0x3c)
	struct FSunDiskOverrides SunDiskOverrides; // 0x144(0x14)
	float Overcast; // 0x158(0x04)
	float HeightOffset; // 0x15c(0x04)
	bool bSuperExpensiveCloudsCinematicOnly; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
};

// ScriptStruct Weather.FogParametersFinal
// Size: 0x1e0 (Inherited: 0x00)
struct FFogParametersFinal {
	struct FExpHeightFogParameters Params; // 0x00(0x1d8)
	bool bFollowCamera; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
};

// ScriptStruct Weather.FogParameters
// Size: 0x200 (Inherited: 0x00)
struct FFogParameters {
	struct FExpHeightFogParametersOverride Params; // 0x00(0x1f8)
	bool bFollowCamera; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
};

// ScriptStruct Weather.WeatherEnvironmentalGlobalsExtras
// Size: 0x90 (Inherited: 0x00)
struct FWeatherEnvironmentalGlobalsExtras {
	struct FEnvironmentalGlobalsExtraVariables StartState; // 0x00(0x30)
	struct FEnvironmentalGlobalsExtraVariables CurrentState; // 0x30(0x30)
	struct FEnvironmentalGlobalsUnsetExtraVariables UNSET; // 0x60(0x30)
};

// ScriptStruct Weather.WeatherActionContext
// Size: 0x8e0 (Inherited: 0x00)
struct FWeatherActionContext {
	struct FFullWeatherState PriorState; // 0x00(0x3f8)
	struct FFullWeatherState CurrentState; // 0x3f8(0x3f8)
	struct FWeatherTime CurrentTime; // 0x7f0(0x68)
	struct TArray<struct UWeatherWindDirectionalSourceComponentBase*> WindSources; // 0x858(0x10)
	struct FWindParametersInstant Wind; // 0x868(0x10)
	struct FWindDetails WindDetails; // 0x878(0x20)
	struct FWorldWindOffset WindOffset; // 0x898(0x14)
	struct FWeatherIndoors WeatherIndoors; // 0x8ac(0x14)
	struct TArray<struct UWeatherOrphanComponent*> LightingOrphans; // 0x8c0(0x10)
	struct FWeatherWindDirectionalSourceStack LegacyWindSourceStack; // 0x8d0(0x10)
};

// ScriptStruct Weather.WeatherWindDirectionalSourceStack
// Size: 0x10 (Inherited: 0x00)
struct FWeatherWindDirectionalSourceStack {
	struct TArray<struct TWeakObjectPtr<struct UWeatherWindDirectionalSourceComponentBase>> Stack; // 0x00(0x10)
};

// ScriptStruct Weather.WeatherIndoors
// Size: 0x14 (Inherited: 0x00)
struct FWeatherIndoors {
	float GameIndoors; // 0x00(0x04)
	float ProbeIndoors; // 0x04(0x04)
	float WeatherIndoors; // 0x08(0x04)
	float FullScreenDecalOpacity; // 0x0c(0x04)
	float CameraParticlesSpawnRate; // 0x10(0x04)
};

// ScriptStruct Weather.WorldWindOffset
// Size: 0x14 (Inherited: 0x00)
struct FWorldWindOffset {
	struct FIntPoint WindOffsetKM; // 0x00(0x08)
	struct FVector2D WindOffsetM; // 0x08(0x08)
	float Age; // 0x10(0x04)
};

// ScriptStruct Weather.WindDetails
// Size: 0x20 (Inherited: 0x00)
struct FWindDetails {
	struct FVector Direction; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Speed; // 0x18(0x04)
	float NormalizedSpeed; // 0x1c(0x04)
};

// ScriptStruct Weather.WindParametersInstant
// Size: 0x10 (Inherited: 0x00)
struct FWindParametersInstant {
	char pad_0[0x8]; // 0x00(0x08)
	float Angle; // 0x08(0x04)
	float SpeedMS; // 0x0c(0x04)
};

// ScriptStruct Weather.WeatherTimeBase
// Size: 0x10 (Inherited: 0x00)
struct FWeatherTimeBase {
	struct FTimespan RealElapsedTime; // 0x00(0x08)
	struct FTimespan GameElapsedTime; // 0x08(0x08)
};

// ScriptStruct Weather.WeatherTime
// Size: 0x68 (Inherited: 0x10)
struct FWeatherTime : FWeatherTimeBase {
	float RealDeltaTime; // 0x10(0x04)
	float AccumulationDeltaTime; // 0x14(0x04)
	struct FWeatherWorldTime GameTime; // 0x18(0x20)
	struct FWeatherTimeSyncTime SyncTime; // 0x38(0x18)
	struct FDateTime SequenceStart; // 0x50(0x08)
	struct FTimespan SequenceDuration; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct Weather.WeatherTimeSyncTime
// Size: 0x18 (Inherited: 0x00)
struct FWeatherTimeSyncTime {
	struct FTimespan GameSyncBase; // 0x00(0x08)
	struct FTimespan SequenceSyncBase; // 0x08(0x08)
	struct FTimespan SyncError; // 0x10(0x08)
};

// ScriptStruct Weather.WeatherWorldTime
// Size: 0x20 (Inherited: 0x00)
struct FWeatherWorldTime {
	char pad_0[0x8]; // 0x00(0x08)
	struct FDateTime DateTime; // 0x08(0x08)
	float DeltaTime; // 0x10(0x04)
	float Rate; // 0x14(0x04)
	bool bDeltaTimeValid; // 0x18(0x01)
	bool bRateValid; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Weather.FullWeatherState
// Size: 0x3f8 (Inherited: 0x00)
struct FFullWeatherState {
	struct FVolumetricCloudsPresetParameters CloudsPreset; // 0x00(0x110)
	struct FVolumetricCloudsWindParameters CloudsWind; // 0x110(0x3c)
	struct FSunDiskOverrides SunDiskOverrides; // 0x14c(0x14)
	struct FExpHeightFogParameters Fog; // 0x160(0x1d8)
	struct FExpHeightFogVolumetricNoiseParameters FogNoiseOverride; // 0x338(0x48)
	struct FExpHeightFogVolumetricNoiseParameters FogNoiseOverrideHistory; // 0x380(0x48)
	float Overcast; // 0x3c8(0x04)
	float Cold; // 0x3cc(0x04)
	struct FWeatherStormParams Storm; // 0x3d0(0x18)
	struct FSurfaceFogParameters SurfaceFog; // 0x3e8(0x08)
	char bFogFollowCamera : 1; // 0x3f0(0x01)
	char bCloudsPresetValid : 1; // 0x3f0(0x01)
	char bCloudsWindValid : 1; // 0x3f0(0x01)
	char bSunDiskOverridesValid : 1; // 0x3f0(0x01)
	char bFogValid : 1; // 0x3f0(0x01)
	char bFogNoiseOverrideValid : 1; // 0x3f0(0x01)
	char bFogNoiseOverrideHistoryValid : 1; // 0x3f0(0x01)
	char bOvercastValid : 1; // 0x3f0(0x01)
	char bColdValid : 1; // 0x3f1(0x01)
	char bPrecipitationValid : 1; // 0x3f1(0x01)
	char bStormTypeValid : 1; // 0x3f1(0x01)
	char bStormCoverageValid : 1; // 0x3f1(0x01)
	char bStormIntensityValid : 1; // 0x3f1(0x01)
	char bStormHeightValid : 1; // 0x3f1(0x01)
	char bSurfaceFogTypeValid : 1; // 0x3f1(0x01)
	char bSurfaceFogIntensityValid : 1; // 0x3f1(0x01)
	char pad_3F2[0x6]; // 0x3f2(0x06)
};

// ScriptStruct Weather.SurfaceFogParameters
// Size: 0x08 (Inherited: 0x00)
struct FSurfaceFogParameters {
	enum class ESurfaceFogType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Intensity; // 0x04(0x04)
};

// ScriptStruct Weather.WeatherStormParams
// Size: 0x18 (Inherited: 0x00)
struct FWeatherStormParams {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EWeatherSurfacePrecipitation Precipitation; // 0x08(0x01)
	enum class EWeatherSurfaceStormType Type; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float Coverage; // 0x0c(0x04)
	float Intensity; // 0x10(0x04)
	float StormHeight; // 0x14(0x04)
};

// ScriptStruct Weather.WorldWeatherDecalTrackers
// Size: 0x50 (Inherited: 0x00)
struct FWorldWeatherDecalTrackers {
	struct TMap<struct TWeakObjectPtr<struct UWeatherDecal>, struct UWeatherDecalTracker*> Trackers; // 0x00(0x50)
};

// ScriptStruct Weather.WeatherDecalSetup
// Size: 0x20 (Inherited: 0x00)
struct FWeatherDecalSetup {
	struct UMaterialInterface* DecalMaterial; // 0x00(0x08)
	struct FName DecalName; // 0x08(0x08)
	struct UWeatherDecalPlacement* DecalPlacement; // 0x10(0x08)
	int32_t DecalSortOrderOffset; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Weather.WeatherDecalParameters
// Size: 0xf0 (Inherited: 0x00)
struct FWeatherDecalParameters {
	struct TMap<struct FName, float> Scalars; // 0x00(0x50)
	struct TMap<struct FName, struct FLinearColor> Colors; // 0x50(0x50)
	struct TMap<struct FName, struct FVector> Vectors; // 0xa0(0x50)
};

// ScriptStruct Weather.WeatherDefinition
// Size: 0x38 (Inherited: 0x00)
struct FWeatherDefinition {
	struct FName Name; // 0x00(0x08)
	struct FCloudDefinitionName Clouds; // 0x08(0x10)
	struct FFogDefinitionName Fog; // 0x18(0x10)
	struct FWindDefinitionName Wind; // 0x28(0x10)
};

// ScriptStruct Weather.WeatherDropdownName
// Size: 0x10 (Inherited: 0x00)
struct FWeatherDropdownName {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Weather.WindDefinitionName
// Size: 0x10 (Inherited: 0x10)
struct FWindDefinitionName : FWeatherDropdownName {
};

// ScriptStruct Weather.FogDefinitionName
// Size: 0x10 (Inherited: 0x10)
struct FFogDefinitionName : FWeatherDropdownName {
};

// ScriptStruct Weather.CloudDefinitionName
// Size: 0x10 (Inherited: 0x10)
struct FCloudDefinitionName : FWeatherDropdownName {
};

// ScriptStruct Weather.WeatherCustomSequenceName
// Size: 0x10 (Inherited: 0x10)
struct FWeatherCustomSequenceName : FWeatherDropdownName {
};

// ScriptStruct Weather.WeatherDefinitionName
// Size: 0x10 (Inherited: 0x10)
struct FWeatherDefinitionName : FWeatherDropdownName {
};

// ScriptStruct Weather.WeatherSequenceName
// Size: 0x10 (Inherited: 0x10)
struct FWeatherSequenceName : FWeatherDropdownName {
};

// ScriptStruct Weather.WeatherSequenceNoRedirectorsName
// Size: 0x10 (Inherited: 0x10)
struct FWeatherSequenceNoRedirectorsName : FWeatherSequenceName {
};

// ScriptStruct Weather.WeatherOverrideStack
// Size: 0x10 (Inherited: 0x00)
struct FWeatherOverrideStack {
	struct TArray<struct FWeatherOverrideStackEntry> Presets; // 0x00(0x10)
};

// ScriptStruct Weather.WeatherOverrideStackEntry
// Size: 0x28 (Inherited: 0x00)
struct FWeatherOverrideStackEntry {
	struct TWeakObjectPtr<struct UObject> Owner; // 0x00(0x08)
	struct FWeatherSequenceName Preset; // 0x08(0x10)
	float PlaybackScale; // 0x18(0x04)
	bool bInstantSwitch; // 0x1c(0x01)
	bool bRestorePriorWeather; // 0x1d(0x01)
	bool bRestorePriorWeatherInstant; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	int32_t PriorityBoost; // 0x20(0x04)
	int32_t UniqueId; // 0x24(0x04)
};

// ScriptStruct Weather.WeatherPreload
// Size: 0x10 (Inherited: 0x00)
struct FWeatherPreload {
	struct TArray<struct UObject*> Preloads; // 0x00(0x10)
};

// ScriptStruct Weather.WeatherPhasedPresetEntry
// Size: 0x20 (Inherited: 0x00)
struct FWeatherPhasedPresetEntry {
	struct FName Phase; // 0x00(0x08)
	struct FWeatherDefinitionName Preset; // 0x08(0x10)
	int32_t Seasons; // 0x18(0x04)
	bool bInstantChange; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Weather.WeatherSeasonsFilter
// Size: 0x04 (Inherited: 0x00)
struct FWeatherSeasonsFilter {
	int32_t Seasons; // 0x00(0x04)
};

// ScriptStruct Weather.WeatherSequenceQueueRequest
// Size: 0x48 (Inherited: 0x00)
struct FWeatherSequenceQueueRequest {
	struct TSoftObjectPtr<UWeatherSequence> Asset; // 0x00(0x28)
	struct FWeatherSequenceOrigin Origin; // 0x28(0x20)
};

// ScriptStruct Weather.WeatherSequenceOrigin
// Size: 0x20 (Inherited: 0x00)
struct FWeatherSequenceOrigin {
	struct FName Sequence; // 0x00(0x08)
	float PlaybackScale; // 0x08(0x04)
	int32_t StackID; // 0x0c(0x04)
	enum class EWeatherSequenceOriginType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t PriorityBoost; // 0x14(0x04)
	uint32_t PlayingID; // 0x18(0x04)
	bool bInstantChange; // 0x1c(0x01)
	bool bRestorePriorWeather; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Weather.WeatherSequenceRedirector
// Size: 0x18 (Inherited: 0x00)
struct FWeatherSequenceRedirector {
	struct FName OldName; // 0x00(0x08)
	struct FWeatherSequenceNoRedirectorsName RedirectTo; // 0x08(0x10)
};

// ScriptStruct Weather.WeatherSequenceCustom
// Size: 0x20 (Inherited: 0x00)
struct FWeatherSequenceCustom {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FWeatherSequenceInfoWithProbability> Sequences; // 0x08(0x10)
	float PlaybackScale; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Weather.WeatherSequenceInfo
// Size: 0x38 (Inherited: 0x00)
struct FWeatherSequenceInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	struct TSoftObjectPtr<UWeatherSequence> Sequence; // 0x10(0x28)
};

// ScriptStruct Weather.WeatherSequenceInfoWithProbability
// Size: 0x40 (Inherited: 0x38)
struct FWeatherSequenceInfoWithProbability : FWeatherSequenceInfo {
	enum class EWeatherSequenceProbability Probability; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Weather.WeatherSequenceScalarParameterCurve
// Size: 0x98 (Inherited: 0x00)
struct FWeatherSequenceScalarParameterCurve {
	struct FName Parameter; // 0x00(0x08)
	struct FRuntimeFloatCurve Value; // 0x08(0x88)
	bool bStretchToDuration; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct Weather.SurfaceFogActorWorldTracker
// Size: 0x50 (Inherited: 0x00)
struct FSurfaceFogActorWorldTracker {
	struct TMap<struct UWorld*, struct FSurfaceFogActorTracker> Trackers; // 0x00(0x50)
};

// ScriptStruct Weather.SurfaceFogActorTracker
// Size: 0x20 (Inherited: 0x00)
struct FSurfaceFogActorTracker {
	struct TArray<struct AWeatherSurfaceFogBase*> Actors; // 0x00(0x10)
	struct TArray<struct AWeatherSurfaceFogBase*> CurrentlyActivated; // 0x10(0x10)
};

// ScriptStruct Weather.WeatherFXBaseActorWorldTracker
// Size: 0x50 (Inherited: 0x00)
struct FWeatherFXBaseActorWorldTracker {
	struct TMap<struct UWorld*, struct FWeatherFXBaseActorTracker> Trackers; // 0x00(0x50)
};

// ScriptStruct Weather.WeatherFXBaseActorTracker
// Size: 0x20 (Inherited: 0x00)
struct FWeatherFXBaseActorTracker {
	struct TArray<struct AWeatherStormFXBase*> Actors; // 0x00(0x10)
	struct TArray<struct AWeatherStormFXBase*> CurrentlyActivated; // 0x10(0x10)
};

// ScriptStruct Weather.WeatherSurfaceCharacterFXState
// Size: 0x140 (Inherited: 0x00)
struct FWeatherSurfaceCharacterFXState {
	struct FWeatherSurfaceCharacterFXSettings Settings; // 0x00(0xa0)
	struct USkinFXComponent* SkinFX; // 0xa0(0x08)
	struct FName SkinFXName; // 0xa8(0x08)
	struct UNiagaraComponent* NiagaraVFX; // 0xb0(0x08)
	struct USaveReceivesWeatherDecalsStateActor* WeatherDecalsState; // 0xb8(0x08)
	int32_t StartSoundFXHandle; // 0xc0(0x04)
	int32_t EndSoundFXHandle; // 0xc4(0x04)
	struct FMaterialSwapParameters SkinFXParameters; // 0xc8(0x50)
	float LocalCoverage; // 0x118(0x04)
	float LocalCoverageRate; // 0x11c(0x04)
	float CachedIndoors; // 0x120(0x04)
	float CachedIndoorsAgeMilliseconds; // 0x124(0x04)
	struct TWeakObjectPtr<struct USceneComponent> ComponentForInsideTest; // 0x128(0x08)
	float NextSkinFXParameterUpdate; // 0x130(0x04)
	float SuspendedTimer; // 0x134(0x04)
	enum class EWeatherSurfaceCharacterFXWetState State; // 0x138(0x01)
	char bCheckedIfSwappable : 1; // 0x139(0x01)
	char bSuspended : 1; // 0x139(0x01)
	char bAlwaysOutdoors : 1; // 0x139(0x01)
	char bExactInside : 1; // 0x139(0x01)
	char bDryingOut : 1; // 0x139(0x01)
	char pad_139_5 : 3; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
};

// ScriptStruct Weather.WeatherSurfaceCharacterFXSettings
// Size: 0xa0 (Inherited: 0x00)
struct FWeatherSurfaceCharacterFXSettings {
	struct ASkinFXDefinition* SkinFX; // 0x00(0x08)
	struct FName SkinFXStormLocalCoverageParameter; // 0x08(0x08)
	struct FWeatherSurfaceCharacterFXParameter SkinFXParameter; // 0x10(0x10)
	struct FWeatherSurfaceCharacterFXParameter SkinFXParameterExtra; // 0x20(0x10)
	struct UNiagaraSystem* NiagaraVFX; // 0x30(0x08)
	struct FName NiagaraVFXSpawnRateMultiply; // 0x38(0x08)
	struct FName NiagaraVFXStormLocalCoverageParameter; // 0x40(0x08)
	struct UAkAudioEvent* StartSoundFX; // 0x48(0x08)
	struct UAkAudioEvent* EndSoundFX; // 0x50(0x08)
	float FullCoverageMinutes; // 0x58(0x04)
	float FullDryMinutes; // 0x5c(0x04)
	float ClampCoverage; // 0x60(0x04)
	float LocalCoverateRateFilter; // 0x64(0x04)
	struct TArray<struct FName> SwapCharacterClassNames; // 0x68(0x10)
	struct TArray<struct FName> NoSwapActorTags; // 0x78(0x10)
	struct FName AlwaysOutdoorsActorTag; // 0x88(0x08)
	struct FName PreferredInsideComponentName; // 0x90(0x08)
	char bSetSkinFXStormLocalCoverageParameter : 1; // 0x98(0x01)
	char bSetNiagaraVFXSpawnRateMultiply : 1; // 0x98(0x01)
	char bSetNiagaraVFXStormLocalCoverageParameter : 1; // 0x98(0x01)
	char pad_98_3 : 5; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct Weather.WeatherSurfaceCharacterFXParameter
// Size: 0x10 (Inherited: 0x00)
struct FWeatherSurfaceCharacterFXParameter {
	struct FName Parameter; // 0x00(0x08)
	enum class EWeatherSurfaceCharacterFXParameters Red; // 0x08(0x01)
	enum class EWeatherSurfaceCharacterFXParameters Green; // 0x09(0x01)
	enum class EWeatherSurfaceCharacterFXParameters Blue; // 0x0a(0x01)
	enum class EWeatherSurfaceCharacterFXParameters Alpha; // 0x0b(0x01)
	bool bSetParameter; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Weather.WeatherSurfaceCharacterFXStateReset
// Size: 0x02 (Inherited: 0x00)
struct FWeatherSurfaceCharacterFXStateReset {
	enum class EWeatherSurfaceCharacterFXStateResetType IndoorsReset; // 0x00(0x01)
	enum class EWeatherSurfaceCharacterFXStateResetType OutdoorsReset; // 0x01(0x01)
};

// ScriptStruct Weather.WeatherStormTypeFXSettings
// Size: 0x20 (Inherited: 0x00)
struct FWeatherStormTypeFXSettings {
	int32_t PrecipitationTypes; // 0x00(0x04)
	int32_t StormTypes; // 0x04(0x04)
	struct UNiagaraSystem* NiagaraVFX; // 0x08(0x08)
	struct UAkAudioEvent* StartSoundFX; // 0x10(0x08)
	struct UAkAudioEvent* EndSoundFX; // 0x18(0x08)
};

// ScriptStruct Weather.WeatherStormTypeFXSettingsState
// Size: 0x18 (Inherited: 0x00)
struct FWeatherStormTypeFXSettingsState {
	struct UNiagaraComponent* NiagaraVFXComponent; // 0x00(0x08)
	int32_t SoundFXHandle; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAkAudioEvent* EndSoundFX; // 0x10(0x08)
};

// ScriptStruct Weather.WeatherStormSurfaceParams
// Size: 0x70 (Inherited: 0x00)
struct FWeatherStormSurfaceParams {
	struct FLinearColor WeatherColorModifier; // 0x00(0x10)
	float WeatherRoughness; // 0x10(0x04)
	float WeatherSpecular; // 0x14(0x04)
	float WeatherCoverageMagnitude; // 0x18(0x04)
	float WeatherCoverageThreshold; // 0x1c(0x04)
	struct FVector WeatherDirection; // 0x20(0x0c)
	float WeatherEdgeStrength; // 0x2c(0x04)
	float WeatherEdgeMinimum; // 0x30(0x04)
	float WeatherAnimationMagnitude; // 0x34(0x04)
	float WeatherAnimationEdgeStrength; // 0x38(0x04)
	float WeatherAnimationEdgeMinimum; // 0x3c(0x04)
	float WeatherSurfaceTiling; // 0x40(0x04)
	float WeatherFarCoverage; // 0x44(0x04)
	float WeatherSurfaceFadeStart; // 0x48(0x04)
	float WeatherSurfaceFadeEnd; // 0x4c(0x04)
	float MacroNoiseTiling1; // 0x50(0x04)
	float MacroNoiseTiling2; // 0x54(0x04)
	float MacroNoiseScale; // 0x58(0x04)
	float MacroNoiseBias; // 0x5c(0x04)
	float RippleNormalTiling; // 0x60(0x04)
	float RippleNormalSpeedU; // 0x64(0x04)
	float RippleNormalSpeedV; // 0x68(0x04)
	float RippleNormalAmount; // 0x6c(0x04)
};

// ScriptStruct Weather.WeatherStormState
// Size: 0x20 (Inherited: 0x18)
struct FWeatherStormState : FWeatherStormParams {
	float Age; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Weather.WeatherWorldTimeEditor
// Size: 0x38 (Inherited: 0x20)
struct FWeatherWorldTimeEditor : FWeatherWorldTime {
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct Weather.WindParameters
// Size: 0x128 (Inherited: 0x10)
struct FWindParameters : FWindParametersInstant {
	struct FRuntimeFloatCurve ModAngle; // 0x10(0x88)
	struct FRuntimeFloatCurve ModSpeed; // 0x98(0x88)
	bool bLoopModAngle; // 0x120(0x01)
	bool bLoopModSpeed; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
};

// ScriptStruct Weather.WindParametersSampleTime
// Size: 0x08 (Inherited: 0x00)
struct FWindParametersSampleTime {
	enum class EWindParametersTimeBase Base; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Factor; // 0x04(0x04)
};

// ScriptStruct Weather.WindParametersInstantBlend
// Size: 0x18 (Inherited: 0x10)
struct FWindParametersInstantBlend : FWindParametersInstant {
	float Blend; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

