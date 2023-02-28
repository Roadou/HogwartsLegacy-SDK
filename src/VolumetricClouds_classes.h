// Class VolumetricClouds.Texture2DAlias
// Size: 0x180 (Inherited: 0x180)
struct UTexture2DAlias : UTexture {
};

// Class VolumetricClouds.VolumetricCloudsActor
// Size: 0x318 (Inherited: 0x248)
struct AVolumetricCloudsActor : AActor {
	struct UVolumetricCloudsComponent* Component; // 0x248(0x08)
	struct FDataTableRowHandle Preset; // 0x250(0x10)
	struct FVolumetricCloudsLightingParams Lighting; // 0x260(0x70)
	struct FVolumetricCloudsWeatherWindParams WeatherWind; // 0x2d0(0x3c)
	float GroundShadowsStrength; // 0x30c(0x04)
	bool bUsePresetLighting; // 0x310(0x01)
	bool bUsePresetWeatherWind; // 0x311(0x01)
	char pad_312[0x6]; // 0x312(0x06)
};

// Class VolumetricClouds.VolumetricCloudsCoverageActor
// Size: 0x250 (Inherited: 0x248)
struct AVolumetricCloudsCoverageActor : AActor {
	struct UVolumetricCloudsCoverageComponent* CoverageComponent; // 0x248(0x08)
};

// Class VolumetricClouds.VolumetricCloudsPreviewActor
// Size: 0x250 (Inherited: 0x248)
struct AVolumetricCloudsPreviewActor : AActor {
	struct UVolumetricCloudsPreviewComponent* PreviewComponent; // 0x248(0x08)
};

// Class VolumetricClouds.VolumetricCloudsCoverageComponent
// Size: 0x4c0 (Inherited: 0x480)
struct UVolumetricCloudsCoverageComponent : UPrimitiveComponent {
	enum class ECoverageShapeType ShapeType; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float InnerRadius; // 0x484(0x04)
	float InnerRadiusCoverage; // 0x488(0x04)
	float OuterRadius; // 0x48c(0x04)
	float OuterRadiusCoverage; // 0x490(0x04)
	char pad_494[0x2c]; // 0x494(0x2c)
};

// Class VolumetricClouds.VolumetricCloudsGroundWorldState
// Size: 0x40 (Inherited: 0x28)
struct UVolumetricCloudsGroundWorldState : UObject {
	struct TArray<struct FVolumetricCloudsGroundShadowsState> ShadowedLights; // 0x28(0x10)
	struct UTexture2DAlias* ShadowAlias; // 0x38(0x08)
};

// Class VolumetricClouds.VolumetricCloudsComponent
// Size: 0x770 (Inherited: 0x220)
struct UVolumetricCloudsComponent : USceneComponent {
	struct FVolumetricCloudsParams Params; // 0x220(0x280)
	char pad_4A0[0x230]; // 0x4a0(0x230)
	float Height; // 0x6d0(0x04)
	float HeightOffset; // 0x6d4(0x04)
	char pad_6D8[0x8]; // 0x6d8(0x08)
	struct TWeakObjectPtr<struct UDirectionalLightComponent> PrimaryDirectionalLight; // 0x6e0(0x08)
	struct TWeakObjectPtr<struct UDirectionalLightComponent> SecondaryDirectionalLight; // 0x6e8(0x08)
	struct FVolumetricCloudsGroundShadowsParams GroundShadows; // 0x6f0(0x60)
	struct FVolumetricCloudsGroundShadowsCutOut GroundShadowsCutOut; // 0x750(0x08)
	float GroundShadowsStrength; // 0x758(0x04)
	char pad_75C[0x4]; // 0x75c(0x04)
	struct UVolumetricCloudsGroundWorldState* GroundShadowsState; // 0x760(0x08)
	char bIsIntro : 1; // 0x768(0x01)
	char pad_768_1 : 7; // 0x768(0x01)
	enum class EVisibilityGroupMask VisibilityGroupMask; // 0x769(0x01)
	char pad_76A[0x6]; // 0x76a(0x06)
};

// Class VolumetricClouds.VolumetricCloudsPreviewComponent
// Size: 0x220 (Inherited: 0x220)
struct UVolumetricCloudsPreviewComponent : USceneComponent {
	enum class EPreviewMode PreviewMode; // 0x218(0x01)
};

