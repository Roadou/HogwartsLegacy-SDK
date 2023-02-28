// Enum Flow.EWaterType
enum class EWaterType : uint8 {
	NoWater = 0,
	Shallow = 1,
	Deep = 2,
	EWaterType_MAX = 3
};

// Enum Flow.ELakeToolVersion
enum class ELakeToolVersion : uint8 {
	Base = 0,
	FixWaterDepthEncoding = 1,
	Latest = 1,
	ELakeToolVersion_MAX = 2
};

// Enum Flow.EPlayerRenderTarget
enum class EPlayerRenderTarget : uint8 {
	PRT_Ripple = 0,
	PRT_WaveDisplacements = 1,
	PRT_WaveFoam = 2,
	PRT_Count = 3,
	PRT_MAX = 4
};

// ScriptStruct Flow.FlowDataQueryResult
// Size: 0x1c (Inherited: 0x00)
struct FFlowDataQueryResult {
	enum class EWaterType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Height; // 0x04(0x04)
	struct FVector Normal; // 0x08(0x0c)
	struct TWeakObjectPtr<struct AActor> WaterBodyActor; // 0x14(0x08)
};

// ScriptStruct Flow.FlowDynamicRippleRequest
// Size: 0x70 (Inherited: 0x00)
struct FFlowDynamicRippleRequest {
	float Radius; // 0x00(0x04)
	float IntensityMultiplier; // 0x04(0x04)
	struct TWeakObjectPtr<struct USceneComponent> AttachmentComponent; // 0x08(0x08)
	struct TWeakObjectPtr<struct UAmbulatory_MovementComponent> MovementComponent; // 0x10(0x08)
	float WaterHeight; // 0x18(0x04)
	bool bUseWaterHeight; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TMap<struct FName, struct FName> BonesToTrack; // 0x20(0x50)
};

// ScriptStruct Flow.FlowWaveSystemSettingsData
// Size: 0x38 (Inherited: 0x00)
struct FFlowWaveSystemSettingsData {
	struct TArray<struct FString> MapNames; // 0x00(0x10)
	float FirstWaveCascadeSize; // 0x10(0x04)
	int32_t WaveFoamCascadeIndex; // 0x14(0x04)
	float WaveHeightBias; // 0x18(0x04)
	float WaterBleed; // 0x1c(0x04)
	float WaterlineFadeRate; // 0x20(0x04)
	float WetnessSoftening; // 0x24(0x04)
	float FoamFadeRate; // 0x28(0x04)
	float FoamCoverage; // 0x2c(0x04)
	float FoamMultiplier; // 0x30(0x04)
	float FoamDeterminantBias; // 0x34(0x04)
};

// ScriptStruct Flow.LakeAudioSamplePoint
// Size: 0x24 (Inherited: 0x00)
struct FLakeAudioSamplePoint {
	struct FVector Location; // 0x00(0x0c)
	float GeometricDepth; // 0x0c(0x04)
	float WaterDepth; // 0x10(0x04)
	float DistanceToCoast; // 0x14(0x04)
	struct FVector2D CoastDirection; // 0x18(0x08)
	float MaxWaveHeight; // 0x20(0x04)
};

// ScriptStruct Flow.LakeParameters
// Size: 0x40 (Inherited: 0x00)
struct FLakeParameters {
	struct TArray<struct UMaterialInterface*> WaterMaterials; // 0x00(0x10)
	float WindWeight; // 0x10(0x04)
	bool bUseFixedWindVelocity; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector2D FixedWindVelocity; // 0x18(0x08)
	float WindCoastFalloffDistance; // 0x20(0x04)
	float Choppiness; // 0x24(0x04)
	float WaveGravity; // 0x28(0x04)
	float ShallowWaterAttenuation; // 0x2c(0x04)
	struct TArray<struct FGerstnerWave> GerstnerWaves; // 0x30(0x10)
};

// ScriptStruct Flow.GerstnerWave
// Size: 0x18 (Inherited: 0x00)
struct FGerstnerWave {
	float Amplitude; // 0x00(0x04)
	float Wavelength; // 0x04(0x04)
	struct FVector2D Direction; // 0x08(0x08)
	float Phase; // 0x10(0x04)
	float GravityMultiplier; // 0x14(0x04)
};

// ScriptStruct Flow.RiverAudioPoint
// Size: 0x10 (Inherited: 0x00)
struct FRiverAudioPoint {
	struct FVector Location; // 0x00(0x0c)
	float SpeedOfFlow; // 0x0c(0x04)
};

// ScriptStruct Flow.WaterMeshAccelerationStructure
// Size: 0x20 (Inherited: 0x00)
struct FWaterMeshAccelerationStructure {
	struct TArray<char> Data; // 0x00(0x10)
	struct FVector2D LakeLocation; // 0x10(0x08)
	float Extents; // 0x18(0x04)
	int32_t CellsInRow; // 0x1c(0x04)
};

