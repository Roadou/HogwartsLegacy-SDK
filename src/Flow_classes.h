// Class Flow.FlowQueryAPI
// Size: 0x48 (Inherited: 0x30)
struct UFlowQueryAPI : UWorldSubsystem {
	char pad_30[0x18]; // 0x30(0x18)

	bool QueryWaterData(struct UObject* Requester, struct TArray<struct FVector>& QueryPositions, struct TArray<struct FFlowDataQueryResult>& OutResults, bool bComputeNormals, bool bTraceRay); // Function Flow.FlowQueryAPI.QueryWaterData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1f79e90
};

// Class Flow.FlowRippleSystemSettings
// Size: 0xc0 (Inherited: 0x30)
struct UFlowRippleSystemSettings : UDataAsset {
	float WaveSpeed; // 0x30(0x04)
	float Damping; // 0x34(0x04)
	struct FRuntimeFloatCurve VelocityToIntensity; // 0x38(0x88)
};

// Class Flow.FlowRippleSubsystem
// Size: 0x98 (Inherited: 0x30)
struct UFlowRippleSubsystem : UWorldSubsystem {
	struct UTextureRenderTarget2DArray* RenderTargetResource; // 0x30(0x08)
	struct UPlayerRenderTarget* PlayerRenderTarget; // 0x38(0x08)
	struct UFlowRippleSystemSettings* Settings; // 0x40(0x08)
	char pad_48[0x50]; // 0x48(0x50)

	void UnregisterDynamicRippleSource(struct USceneComponent* Attachment); // Function Flow.FlowRippleSubsystem.UnregisterDynamicRippleSource // (Final|Native|Public|BlueprintCallable) // @ game+0x1f7a2b0
	void RemovePersistentRippleSource(struct USceneComponent* Requester); // Function Flow.FlowRippleSubsystem.RemovePersistentRippleSource // (Final|Native|Public|BlueprintCallable) // @ game+0x1f7a200
	void RegisterDynamicRippleSource(struct FFlowDynamicRippleRequest& Request); // Function Flow.FlowRippleSubsystem.RegisterDynamicRippleSource // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1f7a080
	void AddRipple(struct FVector& PositionWorld, float Intensity, float Radius, float LifeTime, float ForceOverLifetime); // Function Flow.FlowRippleSubsystem.AddRipple // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1f79ce0
	void AddPersistentRippleSource(struct USceneComponent* Requester, float Intensity, float Radius, float OscillationFrequency); // Function Flow.FlowRippleSubsystem.AddPersistentRippleSource // (Final|Native|Public|BlueprintCallable) // @ game+0x1f79b80
};

// Class Flow.FlowWaveSystemSettings
// Size: 0x78 (Inherited: 0x30)
struct UFlowWaveSystemSettings : UDataAsset {
	struct FFlowWaveSystemSettingsData GlobalSettings; // 0x30(0x38)
	struct TArray<struct FFlowWaveSystemSettingsData> PerLevelSettings; // 0x68(0x10)
};

// Class Flow.FlowWaveSubsystem
// Size: 0x70 (Inherited: 0x30)
struct UFlowWaveSubsystem : UWorldSubsystem {
	struct TArray<struct ULakeComponent*> RegisteredLakes; // 0x30(0x10)
	struct UTextureRenderTarget2DArray* RenderTargetResourcesWaveDisps; // 0x40(0x08)
	struct UTextureRenderTarget2DArray* RenderTargetResourceWaveFoam; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
	struct UFlowWaveSystemSettings* Settings; // 0x58(0x08)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class Flow.LakeAudioComponent
// Size: 0x640 (Inherited: 0x620)
struct ULakeAudioComponent : UAkComponent {
	int32_t MaxNumAudioPoints; // 0x618(0x04)
	float PointSpacing; // 0x61c(0x04)
	struct TArray<struct FLakeAudioSamplePoint> SamplePoints; // 0x628(0x10)
	char pad_638[0x8]; // 0x638(0x08)
};

// Class Flow.LakeParameterGeneratorBase
// Size: 0x28 (Inherited: 0x28)
struct ULakeParameterGeneratorBase : UObject {
};

// Class Flow.LakeParameterGenerator
// Size: 0x60 (Inherited: 0x28)
struct ULakeParameterGenerator : ULakeParameterGeneratorBase {
	struct TArray<struct UMaterialInterface*> WaterMaterials; // 0x28(0x10)
	float WindWeight; // 0x38(0x04)
	bool bUseFixedWindVelocity; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector2D FixedWindVelocity; // 0x40(0x08)
	float WindCoastFalloffDistance; // 0x48(0x04)
	float Choppiness; // 0x4c(0x04)
	float WaveGravity; // 0x50(0x04)
	int32_t RandomSeed; // 0x54(0x04)
	float ShallowWaterAttenuation; // 0x58(0x04)
	float WaveGravityVariance; // 0x5c(0x04)
};

// Class Flow.LakeParametersPreset
// Size: 0x38 (Inherited: 0x30)
struct ULakeParametersPreset : UDataAsset {
	struct ULakeParameterGenerator* ParametersGenerator; // 0x30(0x08)
};

// Class Flow.LakeParameterPresetGenerator
// Size: 0x30 (Inherited: 0x28)
struct ULakeParameterPresetGenerator : ULakeParameterGeneratorBase {
	struct ULakeParametersPreset* Preset; // 0x28(0x08)
};

// Class Flow.LakeParameterManualGenerator
// Size: 0xd0 (Inherited: 0x60)
struct ULakeParameterManualGenerator : ULakeParameterGenerator {
	float OverallWeight; // 0x60(0x04)
	int32_t ComponentsPerOctave; // 0x64(0x04)
	float WaveDirectionVariance; // 0x68(0x04)
	bool bEnable000025; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float Power000025; // 0x70(0x04)
	bool bEnable000050; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float Power000050; // 0x78(0x04)
	bool bEnable000100; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float Power000100; // 0x80(0x04)
	bool bEnable000200; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float Power000200; // 0x88(0x04)
	bool bEnable000400; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float Power000400; // 0x90(0x04)
	bool bEnable000800; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float Power000800; // 0x98(0x04)
	bool bEnable001600; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float Power001600; // 0xa0(0x04)
	bool bEnable003200; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float Power003200; // 0xa8(0x04)
	bool bEnable006400; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float Power006400; // 0xb0(0x04)
	bool bEnable012800; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float Power012800; // 0xb8(0x04)
	bool bEnable025600; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float Power025600; // 0xc0(0x04)
	bool bEnable051200; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float Power051200; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class Flow.LakeParameterSimpleGenerator
// Size: 0x88 (Inherited: 0x60)
struct ULakeParameterSimpleGenerator : ULakeParameterGenerator {
	int32_t NumWaves; // 0x60(0x04)
	float Randomness; // 0x64(0x04)
	float MinWavelength; // 0x68(0x04)
	float MaxWavelength; // 0x6c(0x04)
	float WavelengthFalloff; // 0x70(0x04)
	float MinAmplitude; // 0x74(0x04)
	float MaxAmplitude; // 0x78(0x04)
	float AmplitudeFalloff; // 0x7c(0x04)
	float DirectionAngularSpreadDeg; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Flow.LakeComponent
// Size: 0x1d8 (Inherited: 0xc8)
struct ULakeComponent : UActorComponent {
	struct ULakeParameterGeneratorBase* ParametersGenerator; // 0xc8(0x08)
	struct FLakeParameters Parameters; // 0xd0(0x40)
	float LakeSize; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct UTexture* TextureDirAndDistToCoast; // 0x118(0x08)
	struct UTexture* TextureFlowAndWaterDepth; // 0x120(0x08)
	enum class ELakeToolVersion LakeToolVersion; // 0x128(0x01)
	char pad_129[0x3b]; // 0x129(0x3b)
	struct TWeakObjectPtr<struct UBoxComponent> ParentWaterBox; // 0x164(0x08)
	float OverallWeight; // 0x16c(0x04)
	int32_t ComponentsPerOctave; // 0x170(0x04)
	float WaveDirectionVariance; // 0x174(0x04)
	bool bEnable000025; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	float Power000025; // 0x17c(0x04)
	bool bEnable000050; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	float Power000050; // 0x184(0x04)
	bool bEnable000100; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float Power000100; // 0x18c(0x04)
	bool bEnable000200; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	float Power000200; // 0x194(0x04)
	bool bEnable000400; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	float Power000400; // 0x19c(0x04)
	bool bEnable000800; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	float Power000800; // 0x1a4(0x04)
	bool bEnable001600; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	float Power001600; // 0x1ac(0x04)
	bool bEnable003200; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	float Power003200; // 0x1b4(0x04)
	bool bEnable006400; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float Power006400; // 0x1bc(0x04)
	bool bEnable012800; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	float Power012800; // 0x1c4(0x04)
	bool bEnable025600; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	float Power025600; // 0x1cc(0x04)
	bool bEnable051200; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	float Power051200; // 0x1d4(0x04)

	void CreatePresetFromParameters(); // Function Flow.LakeComponent.CreatePresetFromParameters // (Final|Native|Public) // @ game+0x1074730
};

// Class Flow.PlayerRenderTargetCascade
// Size: 0x50 (Inherited: 0x28)
struct UPlayerRenderTargetCascade : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class Flow.PlayerRenderTarget
// Size: 0xa8 (Inherited: 0x28)
struct UPlayerRenderTarget : UObject {
	struct TArray<struct UPlayerRenderTargetCascade*> Cascades; // 0x28(0x10)
	struct UTextureRenderTarget2DArray* RenderTarget; // 0x38(0x08)
	struct UTextureRenderTarget2DArray* RenderTargetAux; // 0x40(0x08)
	char pad_48[0x60]; // 0x48(0x60)
};

// Class Flow.PlayerRenderTargetSubsystem
// Size: 0x58 (Inherited: 0x30)
struct UPlayerRenderTargetSubsystem : UWorldSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UPlayerRenderTarget*> RenderTargets; // 0x38(0x10)
	struct UMaterialParameterCollection* RenderTargetMaterialParams; // 0x48(0x08)
	struct UNiagaraParameterCollection* NiagaraParameterCollection; // 0x50(0x08)
};

// Class Flow.RiverSectionAudioVisualizerComponent
// Size: 0xc8 (Inherited: 0xc8)
struct URiverSectionAudioVisualizerComponent : UActorComponent {
};

// Class Flow.RiverSectionAudio
// Size: 0x280 (Inherited: 0x248)
struct ARiverSectionAudio : AActor {
	bool bRelativeLocations; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct TArray<struct FRiverAudioPoint> AudioPoints; // 0x250(0x10)
	struct UAkComponent* AkComponent; // 0x260(0x08)
	struct FVector ClosestAudioLocation; // 0x268(0x0c)
	int32_t ClosestIndex; // 0x274(0x04)
	float CurrSpeedOfFlow; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
};

// Class Flow.WaterCollisionComponent
// Size: 0x510 (Inherited: 0x510)
struct UWaterCollisionComponent : UStaticMeshComponent {
};

// Class Flow.WaterInteractionComponent
// Size: 0x130 (Inherited: 0xc8)
struct UWaterInteractionComponent : UActorComponent {
	bool bCanRipple; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TMap<struct FName, struct FName> BonesToTrack; // 0xd0(0x50)
	float Radius; // 0x120(0x04)
	float IntensityMultiplier; // 0x124(0x04)
	char pad_128[0x8]; // 0x128(0x08)

	void WakeUp(bool bEnableForWater); // Function Flow.WaterInteractionComponent.WakeUp // (Final|Native|Public|BlueprintCallable) // @ game+0x1f7a340
	void Sleep(); // Function Flow.WaterInteractionComponent.Sleep // (Final|Native|Public|BlueprintCallable) // @ game+0x1f7a290
};

// Class Flow.RuntimeHierarchicalInstancedStaticMeshComponent
// Size: 0x6b0 (Inherited: 0x6b0)
struct URuntimeHierarchicalInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
};

// Class Flow.WaterTileMeshComponent
// Size: 0x2e0 (Inherited: 0x220)
struct UWaterTileMeshComponent : USceneComponent {
	struct UStaticMesh* SubtileMesh; // 0x218(0x08)
	struct FVector4 LakeRelativeOffsetAndExtents; // 0x220(0x10)
	float LakeSize; // 0x230(0x04)
	struct UTexture* TextureDirAndDistToCoast; // 0x238(0x08)
	struct UTexture* TextureFlowAndWaterDepth; // 0x240(0x08)
	char pad_24C[0x3c]; // 0x24c(0x3c)
	struct FWaterMeshAccelerationStructure AccelerationStructure; // 0x288(0x20)
	struct TArray<struct URuntimeHierarchicalInstancedStaticMeshComponent*> HierarchicalInstancedTilesComponents; // 0x2a8(0x10)
	struct TArray<struct UInstancedStaticMeshComponent*> InstancedTilesComponents; // 0x2b8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> WaterMaterialInstances; // 0x2c8(0x10)
	char pad_2D8[0x8]; // 0x2d8(0x08)

	void RebuildAccelerationStructure(); // Function Flow.WaterTileMeshComponent.RebuildAccelerationStructure // (Final|Native|Public) // @ game+0x1f7a060
};

