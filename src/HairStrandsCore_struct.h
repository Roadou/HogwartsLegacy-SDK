// Enum HairStrandsCore.EHairCardsSourceType
enum class EHairCardsSourceType : uint8 {
	Procedural = 0,
	Imported = 1,
	EHairCardsSourceType_MAX = 2
};

// Enum HairStrandsCore.EHairCardsGenerationType
enum class EHairCardsGenerationType : uint8 {
	CardsCount = 0,
	UseGuides = 1,
	EHairCardsGenerationType_MAX = 2
};

// Enum HairStrandsCore.EHairCardsClusterType
enum class EHairCardsClusterType : uint8 {
	Low = 0,
	High = 1,
	EHairCardsClusterType_MAX = 2
};

// Enum HairStrandsCore.EGroomGeometryType
enum class EGroomGeometryType : uint8 {
	Strands = 0,
	Cards = 1,
	Meshes = 2,
	EGroomGeometryType_MAX = 3
};

// Enum HairStrandsCore.EHairLODSelectionType
enum class EHairLODSelectionType : uint8 {
	Cpu = 0,
	Gpu = 1,
	EHairLODSelectionType_MAX = 2
};

// Enum HairStrandsCore.EHairInterpolationWeight
enum class EHairInterpolationWeight : uint8 {
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EHairInterpolationWeight_MAX = 4
};

// Enum HairStrandsCore.EHairInterpolationQuality
enum class EHairInterpolationQuality : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EHairInterpolationQuality_MAX = 4
};

// Enum HairStrandsCore.EGroomInterpolationType
enum class EGroomInterpolationType : uint8 {
	None = 0,
	RigidTransform = 2,
	OffsetTransform = 4,
	SmoothTransform = 8,
	EGroomInterpolationType_MAX = 9
};

// Enum HairStrandsCore.EGroomStrandsSize
enum class EGroomStrandsSize : uint8 {
	None = 0,
	Size2 = 2,
	Size4 = 4,
	Size8 = 8,
	Size16 = 16,
	Size32 = 32,
	EGroomStrandsSize_MAX = 33
};

// Enum HairStrandsCore.EGroomNiagaraSolvers
enum class EGroomNiagaraSolvers : uint8 {
	None = 0,
	CosseratRods = 2,
	AngularSprings = 4,
	CustomSolver = 8,
	EGroomNiagaraSolvers_MAX = 9
};

// Enum HairStrandsCore.EGroomBindingMeshType
enum class EGroomBindingMeshType : uint8 {
	SkeletalMesh = 0,
	GeometryCache = 1,
	EGroomBindingMeshType_MAX = 2
};

// Enum HairStrandsCore.EGroomCacheType
enum class EGroomCacheType : uint8 {
	None = 0,
	Strands = 1,
	Guides = 2,
	EGroomCacheType_MAX = 3
};

// Enum HairStrandsCore.EGroomCacheAttributes
enum class EGroomCacheAttributes : uint8 {
	None = 0,
	Position = 1,
	Width = 2,
	Color = 4,
	EGroomCacheAttributes_MAX = 5
};

// Enum HairStrandsCore.EFollicleMaskChannel
enum class EFollicleMaskChannel : uint8 {
	R = 0,
	G = 1,
	B = 2,
	A = 3,
	EFollicleMaskChannel_MAX = 4
};

// Enum HairStrandsCore.EStrandsTexturesMeshType
enum class EStrandsTexturesMeshType : uint8 {
	Static = 0,
	Skeletal = 1,
	EStrandsTexturesMeshType_MAX = 2
};

// Enum HairStrandsCore.EStrandsTexturesTraceType
enum class EStrandsTexturesTraceType : uint8 {
	TraceInside = 0,
	TraceOuside = 1,
	TraceBidirectional = 2,
	EStrandsTexturesTraceType_MAX = 3
};

// Enum HairStrandsCore.EGroomInterpolationWeight
enum class EGroomInterpolationWeight : uint8 {
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EGroomInterpolationWeight_MAX = 4
};

// Enum HairStrandsCore.EGroomInterpolationQuality
enum class EGroomInterpolationQuality : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EGroomInterpolationQuality_MAX = 4
};

// ScriptStruct HairStrandsCore.HairGroupInfo
// Size: 0x18 (Inherited: 0x00)
struct FHairGroupInfo {
	int32_t GroupId; // 0x00(0x04)
	int32_t NumCurves; // 0x04(0x04)
	int32_t NumGuides; // 0x08(0x04)
	int32_t NumCurveVertices; // 0x0c(0x04)
	int32_t NumGuideVertices; // 0x10(0x04)
	float MaxCurveLength; // 0x14(0x04)
};

// ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
// Size: 0x1c (Inherited: 0x18)
struct FHairGroupInfoWithVisibility : FHairGroupInfo {
	bool bIsVisible; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct HairStrandsCore.HairGroupsMaterial
// Size: 0x10 (Inherited: 0x00)
struct FHairGroupsMaterial {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FName SlotName; // 0x08(0x08)
};

// ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
// Size: 0xc0 (Inherited: 0x00)
struct FHairGroupsCardsSourceDescription {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	enum class EHairCardsSourceType SourceType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UStaticMesh* ProceduralMesh; // 0x18(0x08)
	struct FString ProceduralMeshKey; // 0x20(0x10)
	struct UStaticMesh* ImportedMesh; // 0x30(0x08)
	struct FHairGroupsProceduralCards ProceduralSettings; // 0x38(0x38)
	struct FHairGroupCardsTextures Textures; // 0x70(0x30)
	int32_t GroupIndex; // 0xa0(0x04)
	int32_t LODIndex; // 0xa4(0x04)
	struct FHairGroupCardsInfo CardsInfo; // 0xa8(0x08)
	struct FString ImportedMeshKey; // 0xb0(0x10)
};

// ScriptStruct HairStrandsCore.HairGroupCardsInfo
// Size: 0x08 (Inherited: 0x00)
struct FHairGroupCardsInfo {
	int32_t NumCards; // 0x00(0x04)
	int32_t NumCardVertices; // 0x04(0x04)
};

// ScriptStruct HairStrandsCore.HairGroupCardsTextures
// Size: 0x30 (Inherited: 0x00)
struct FHairGroupCardsTextures {
	struct UTexture2D* DepthTexture; // 0x00(0x08)
	struct UTexture2D* CoverageTexture; // 0x08(0x08)
	struct UTexture2D* TangentTexture; // 0x10(0x08)
	struct UTexture2D* AttributeTexture; // 0x18(0x08)
	struct UTexture2D* AuxilaryDataTexture; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct HairStrandsCore.HairGroupsProceduralCards
// Size: 0x38 (Inherited: 0x00)
struct FHairGroupsProceduralCards {
	struct FHairCardsClusterSettings ClusterSettings; // 0x00(0x08)
	struct FHairCardsGeometrySettings GeometrySettings; // 0x08(0x1c)
	struct FHairCardsTextureSettings TextureSettings; // 0x24(0x10)
	int32_t Version; // 0x34(0x04)
};

// ScriptStruct HairStrandsCore.HairCardsTextureSettings
// Size: 0x10 (Inherited: 0x00)
struct FHairCardsTextureSettings {
	int32_t AtlasMaxResolution; // 0x00(0x04)
	int32_t PixelPerCentimeters; // 0x04(0x04)
	int32_t LengthTextureCount; // 0x08(0x04)
	int32_t DensityTextureCount; // 0x0c(0x04)
};

// ScriptStruct HairStrandsCore.HairCardsGeometrySettings
// Size: 0x1c (Inherited: 0x00)
struct FHairCardsGeometrySettings {
	enum class EHairCardsGenerationType GenerationType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CardsCount; // 0x04(0x04)
	enum class EHairCardsClusterType ClusterType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MinSegmentLength; // 0x0c(0x04)
	float AngularThreshold; // 0x10(0x04)
	float MinCardsLength; // 0x14(0x04)
	float MaxCardsLength; // 0x18(0x04)
};

// ScriptStruct HairStrandsCore.HairCardsClusterSettings
// Size: 0x08 (Inherited: 0x00)
struct FHairCardsClusterSettings {
	float ClusterDecimation; // 0x00(0x04)
	enum class EHairCardsClusterType Type; // 0x04(0x01)
	bool bUseGuide; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct HairStrandsCore.HairGroupsLOD
// Size: 0x18 (Inherited: 0x00)
struct FHairGroupsLOD {
	struct TArray<struct FHairLODSettings> LODs; // 0x00(0x10)
	float ClusterWorldSize; // 0x10(0x04)
	float ClusterScreenSizeScale; // 0x14(0x04)
};

// ScriptStruct HairStrandsCore.HairLODSettings
// Size: 0x18 (Inherited: 0x00)
struct FHairLODSettings {
	float CurveDecimation; // 0x00(0x04)
	float VertexDecimation; // 0x04(0x04)
	float AngularThreshold; // 0x08(0x04)
	float ScreenSize; // 0x0c(0x04)
	float ThicknessScale; // 0x10(0x04)
	bool bVisible; // 0x14(0x01)
	enum class EGroomGeometryType GeometryType; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct HairStrandsCore.HairGroupsInterpolation
// Size: 0x14 (Inherited: 0x00)
struct FHairGroupsInterpolation {
	struct FHairDecimationSettings DecimationSettings; // 0x00(0x08)
	struct FHairInterpolationSettings InterpolationSettings; // 0x08(0x0c)
};

// ScriptStruct HairStrandsCore.HairInterpolationSettings
// Size: 0x0c (Inherited: 0x00)
struct FHairInterpolationSettings {
	bool bOverrideGuides; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HairToGuideDensity; // 0x04(0x04)
	enum class EHairInterpolationQuality InterpolationQuality; // 0x08(0x01)
	enum class EHairInterpolationWeight InterpolationDistance; // 0x09(0x01)
	bool bRandomizeGuide; // 0x0a(0x01)
	bool bUseUniqueGuide; // 0x0b(0x01)
};

// ScriptStruct HairStrandsCore.HairDecimationSettings
// Size: 0x08 (Inherited: 0x00)
struct FHairDecimationSettings {
	float CurveDecimation; // 0x00(0x04)
	float VertexDecimation; // 0x04(0x04)
};

// ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
// Size: 0x60 (Inherited: 0x00)
struct FHairGroupsMeshesSourceDescription {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct UStaticMesh* ImportedMesh; // 0x10(0x08)
	struct FHairGroupCardsTextures Textures; // 0x18(0x30)
	int32_t GroupIndex; // 0x48(0x04)
	int32_t LODIndex; // 0x4c(0x04)
	struct FString ImportedMeshKey; // 0x50(0x10)
};

// ScriptStruct HairStrandsCore.HairGroupsPhysics
// Size: 0x2c8 (Inherited: 0x00)
struct FHairGroupsPhysics {
	struct FHairSolverSettings SolverSettings; // 0x00(0x38)
	struct FHairExternalForces ExternalForces; // 0x38(0x1c)
	char pad_54[0x4]; // 0x54(0x04)
	struct FHairMaterialConstraints MaterialConstraints; // 0x58(0x1d8)
	struct FHairStrandsParameters StrandsParameters; // 0x230(0x98)
};

// ScriptStruct HairStrandsCore.HairStrandsParameters
// Size: 0x98 (Inherited: 0x00)
struct FHairStrandsParameters {
	enum class EGroomStrandsSize StrandsSize; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StrandsDensity; // 0x04(0x04)
	float StrandsSmoothing; // 0x08(0x04)
	float StrandsThickness; // 0x0c(0x04)
	struct FRuntimeFloatCurve ThicknessScale; // 0x10(0x88)
};

// ScriptStruct HairStrandsCore.HairMaterialConstraints
// Size: 0x1d8 (Inherited: 0x00)
struct FHairMaterialConstraints {
	struct FHairBendConstraint BendConstraint; // 0x00(0x98)
	struct FHairStretchConstraint StretchConstraint; // 0x98(0x98)
	struct FHairCollisionConstraint CollisionConstraint; // 0x130(0xa8)
};

// ScriptStruct HairStrandsCore.HairCollisionConstraint
// Size: 0xa8 (Inherited: 0x00)
struct FHairCollisionConstraint {
	bool SolveCollision; // 0x00(0x01)
	bool ProjectCollision; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float StaticFriction; // 0x04(0x04)
	float KineticFriction; // 0x08(0x04)
	float StrandsViscosity; // 0x0c(0x04)
	struct FIntVector GridDimension; // 0x10(0x0c)
	float CollisionRadius; // 0x1c(0x04)
	struct FRuntimeFloatCurve RadiusScale; // 0x20(0x88)
};

// ScriptStruct HairStrandsCore.HairStretchConstraint
// Size: 0x98 (Inherited: 0x00)
struct FHairStretchConstraint {
	bool SolveStretch; // 0x00(0x01)
	bool ProjectStretch; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float StretchDamping; // 0x04(0x04)
	float StretchStiffness; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRuntimeFloatCurve StretchScale; // 0x10(0x88)
};

// ScriptStruct HairStrandsCore.HairBendConstraint
// Size: 0x98 (Inherited: 0x00)
struct FHairBendConstraint {
	bool SolveBend; // 0x00(0x01)
	bool ProjectBend; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float BendDamping; // 0x04(0x04)
	float BendStiffness; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRuntimeFloatCurve BendScale; // 0x10(0x88)
};

// ScriptStruct HairStrandsCore.HairExternalForces
// Size: 0x1c (Inherited: 0x00)
struct FHairExternalForces {
	struct FVector GravityVector; // 0x00(0x0c)
	float AirDrag; // 0x0c(0x04)
	struct FVector AirVelocity; // 0x10(0x0c)
};

// ScriptStruct HairStrandsCore.HairSolverSettings
// Size: 0x38 (Inherited: 0x00)
struct FHairSolverSettings {
	bool EnableSimulation; // 0x00(0x01)
	enum class EGroomNiagaraSolvers NiagaraSolver; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TSoftObjectPtr<UNiagaraSystem> CustomSystem; // 0x08(0x28)
	int32_t SubSteps; // 0x30(0x04)
	int32_t IterationCount; // 0x34(0x04)
};

// ScriptStruct HairStrandsCore.HairGroupsRendering
// Size: 0x30 (Inherited: 0x00)
struct FHairGroupsRendering {
	struct FName MaterialSlotName; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
	struct FHairGeometrySettings GeometrySettings; // 0x10(0x10)
	struct FHairShadowSettings ShadowSettings; // 0x20(0x0c)
	struct FHairAdvancedRenderingSettings AdvancedSettings; // 0x2c(0x02)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
// Size: 0x02 (Inherited: 0x00)
struct FHairAdvancedRenderingSettings {
	bool bUseStableRasterization; // 0x00(0x01)
	bool bScatterSceneLighting; // 0x01(0x01)
};

// ScriptStruct HairStrandsCore.HairShadowSettings
// Size: 0x0c (Inherited: 0x00)
struct FHairShadowSettings {
	float HairShadowDensity; // 0x00(0x04)
	float HairRaytracingRadiusScale; // 0x04(0x04)
	bool bUseHairRaytracingGeometry; // 0x08(0x01)
	bool bVoxelize; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct HairStrandsCore.HairGeometrySettings
// Size: 0x10 (Inherited: 0x00)
struct FHairGeometrySettings {
	float HairWidth; // 0x00(0x04)
	float HairRootScale; // 0x04(0x04)
	float HairTipScale; // 0x08(0x04)
	float HairClipScale; // 0x0c(0x04)
};

// ScriptStruct HairStrandsCore.GoomBindingGroupInfo
// Size: 0x10 (Inherited: 0x00)
struct FGoomBindingGroupInfo {
	int32_t RenRootCount; // 0x00(0x04)
	int32_t RenLODCount; // 0x04(0x04)
	int32_t SimRootCount; // 0x08(0x04)
	int32_t SimLODCount; // 0x0c(0x04)
};

// ScriptStruct HairStrandsCore.GroomCacheInfo
// Size: 0x28 (Inherited: 0x00)
struct FGroomCacheInfo {
	int32_t Version; // 0x00(0x04)
	enum class EGroomCacheType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FGroomAnimationInfo AnimationInfo; // 0x08(0x20)
};

// ScriptStruct HairStrandsCore.GroomAnimationInfo
// Size: 0x20 (Inherited: 0x00)
struct FGroomAnimationInfo {
	uint32_t NumFrames; // 0x00(0x04)
	float SecondsPerFrame; // 0x04(0x04)
	float Duration; // 0x08(0x04)
	float StartTime; // 0x0c(0x04)
	float EndTime; // 0x10(0x04)
	int32_t StartFrame; // 0x14(0x04)
	int32_t EndFrame; // 0x18(0x04)
	enum class EGroomCacheAttributes Attributes; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct HairStrandsCore.GroomCacheImportSettings
// Size: 0x20 (Inherited: 0x00)
struct FGroomCacheImportSettings {
	bool bImportGroomCache; // 0x00(0x01)
	bool bImportGroomAsset; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FSoftObjectPath GroomAsset; // 0x08(0x18)
};

// ScriptStruct HairStrandsCore.FollicleMaskOptions
// Size: 0x10 (Inherited: 0x00)
struct FFollicleMaskOptions {
	struct UGroomAsset* Groom; // 0x00(0x08)
	enum class EFollicleMaskChannel Channel; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct HairStrandsCore.HairGroupDesc
// Size: 0x44 (Inherited: 0x00)
struct FHairGroupDesc {
	float HairLength; // 0x00(0x04)
	float HairWidth; // 0x04(0x04)
	bool HairWidth_Override; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float HairRootScale; // 0x0c(0x04)
	bool HairRootScale_Override; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float HairTipScale; // 0x14(0x04)
	bool HairTipScale_Override; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float HairClipScale; // 0x1c(0x04)
	bool HairClipScale_Override; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float HairShadowDensity; // 0x24(0x04)
	bool HairShadowDensity_Override; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float HairRaytracingRadiusScale; // 0x2c(0x04)
	bool HairRaytracingRadiusScale_Override; // 0x30(0x01)
	bool bUseHairRaytracingGeometry; // 0x31(0x01)
	bool bUseHairRaytracingGeometry_Override; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float LODBias; // 0x34(0x04)
	bool bUseStableRasterization; // 0x38(0x01)
	bool bUseStableRasterization_Override; // 0x39(0x01)
	bool bScatterSceneLighting; // 0x3a(0x01)
	bool bScatterSceneLighting_Override; // 0x3b(0x01)
	bool bSupportVoxelization; // 0x3c(0x01)
	bool bSupportVoxelization_Override; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	int32_t LODForcedIndex; // 0x40(0x04)
};

// ScriptStruct HairStrandsCore.GroomHairGroupPreview
// Size: 0x20 (Inherited: 0x00)
struct FGroomHairGroupPreview {
	int32_t GroupId; // 0x00(0x04)
	int32_t CurveCount; // 0x04(0x04)
	int32_t GuideCount; // 0x08(0x04)
	struct FHairGroupsInterpolation InterpolationSettings; // 0x0c(0x14)
};

// ScriptStruct HairStrandsCore.GroomBuildSettings
// Size: 0x0c (Inherited: 0x00)
struct FGroomBuildSettings {
	bool bOverrideGuides; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HairToGuideDensity; // 0x04(0x04)
	enum class EGroomInterpolationQuality InterpolationQuality; // 0x08(0x01)
	enum class EGroomInterpolationWeight InterpolationDistance; // 0x09(0x01)
	bool bRandomizeGuide; // 0x0a(0x01)
	bool bUseUniqueGuide; // 0x0b(0x01)
};

// ScriptStruct HairStrandsCore.GroomConversionSettings
// Size: 0x18 (Inherited: 0x00)
struct FGroomConversionSettings {
	struct FVector Rotation; // 0x00(0x0c)
	struct FVector Scale; // 0x0c(0x0c)
};

// ScriptStruct HairStrandsCore.MovieSceneGroomCacheParams
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneGroomCacheParams {
	struct UGroomCache* GroomCache; // 0x00(0x08)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	struct FFrameNumber StartFrameOffset; // 0x0c(0x04)
	struct FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneGroomCacheSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneGroomCacheSectionTemplateParameters Params; // 0x20(0x28)
};

// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneGroomCacheSectionTemplateParameters : FMovieSceneGroomCacheParams {
	struct FFrameNumber SectionStartTime; // 0x20(0x04)
	struct FFrameNumber SectionEndTime; // 0x24(0x04)
};

