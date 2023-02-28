// Class MeshModelingTools.AddPatchToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UAddPatchToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.AddPatchToolProperties
// Size: 0x70 (Inherited: 0x60)
struct UAddPatchToolProperties : UInteractiveToolPropertySet {
	float Width; // 0x60(0x04)
	float Rotation; // 0x64(0x04)
	int32_t Subdivisions; // 0x68(0x04)
	float Shift; // 0x6c(0x04)
};

// Class MeshModelingTools.AddPatchTool
// Size: 0x100 (Inherited: 0x88)
struct UAddPatchTool : USingleClickTool {
	char pad_88[0x8]; // 0x88(0x08)
	struct UAddPatchToolProperties* ShapeSettings; // 0x90(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x98(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xa0(0x08)
	char pad_A8[0x58]; // 0xa8(0x58)
};

// Class MeshModelingTools.AddPrimitiveToolBuilder
// Size: 0x38 (Inherited: 0x28)
struct UAddPrimitiveToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class MeshModelingTools.ProceduralShapeToolProperties
// Size: 0x70 (Inherited: 0x60)
struct UProceduralShapeToolProperties : UInteractiveToolPropertySet {
	bool bInstanceIfPossible; // 0x60(0x01)
	enum class EMakeMeshPolygroupMode PolygroupMode; // 0x61(0x01)
	enum class EMakeMeshPlacementType PlaceMode; // 0x62(0x01)
	bool bSnapToGrid; // 0x63(0x01)
	enum class EMakeMeshPivotLocation PivotLocation; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float Rotation; // 0x68(0x04)
	bool bAlignShapeToPlacementSurface; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.ProceduralRectangleToolProperties
// Size: 0x80 (Inherited: 0x70)
struct UProceduralRectangleToolProperties : UProceduralShapeToolProperties {
	float Width; // 0x70(0x04)
	float Depth; // 0x74(0x04)
	int32_t WidthSubdivisions; // 0x78(0x04)
	int32_t DepthSubdivisions; // 0x7c(0x04)
};

// Class MeshModelingTools.ProceduralBoxToolProperties
// Size: 0x88 (Inherited: 0x80)
struct UProceduralBoxToolProperties : UProceduralRectangleToolProperties {
	float Height; // 0x80(0x04)
	int32_t HeightSubdivisions; // 0x84(0x04)
};

// Class MeshModelingTools.ProceduralRoundedRectangleToolProperties
// Size: 0x88 (Inherited: 0x80)
struct UProceduralRoundedRectangleToolProperties : UProceduralRectangleToolProperties {
	float CornerRadius; // 0x80(0x04)
	int32_t CornerSlices; // 0x84(0x04)
};

// Class MeshModelingTools.ProceduralDiscToolProperties
// Size: 0x80 (Inherited: 0x70)
struct UProceduralDiscToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0x70(0x04)
	int32_t RadialSlices; // 0x74(0x04)
	int32_t RadialSubdivisions; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class MeshModelingTools.ProceduralPuncturedDiscToolProperties
// Size: 0x88 (Inherited: 0x80)
struct UProceduralPuncturedDiscToolProperties : UProceduralDiscToolProperties {
	float HoleRadius; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class MeshModelingTools.ProceduralTorusToolProperties
// Size: 0x80 (Inherited: 0x70)
struct UProceduralTorusToolProperties : UProceduralShapeToolProperties {
	float MajorRadius; // 0x70(0x04)
	float MinorRadius; // 0x74(0x04)
	int32_t TubeSlices; // 0x78(0x04)
	int32_t CrossSectionSlices; // 0x7c(0x04)
};

// Class MeshModelingTools.ProceduralCylinderToolProperties
// Size: 0x80 (Inherited: 0x70)
struct UProceduralCylinderToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0x70(0x04)
	float Height; // 0x74(0x04)
	int32_t RadialSlices; // 0x78(0x04)
	int32_t HeightSubdivisions; // 0x7c(0x04)
};

// Class MeshModelingTools.ProceduralConeToolProperties
// Size: 0x80 (Inherited: 0x70)
struct UProceduralConeToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0x70(0x04)
	float Height; // 0x74(0x04)
	int32_t RadialSlices; // 0x78(0x04)
	int32_t HeightSubdivisions; // 0x7c(0x04)
};

// Class MeshModelingTools.ProceduralArrowToolProperties
// Size: 0x88 (Inherited: 0x70)
struct UProceduralArrowToolProperties : UProceduralShapeToolProperties {
	float ShaftRadius; // 0x70(0x04)
	float ShaftHeight; // 0x74(0x04)
	float HeadRadius; // 0x78(0x04)
	float HeadHeight; // 0x7c(0x04)
	int32_t RadialSlices; // 0x80(0x04)
	int32_t TotalSubdivisions; // 0x84(0x04)
};

// Class MeshModelingTools.ProceduralSphereToolProperties
// Size: 0x80 (Inherited: 0x70)
struct UProceduralSphereToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0x70(0x04)
	int32_t LatitudeSlices; // 0x74(0x04)
	int32_t LongitudeSlices; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class MeshModelingTools.ProceduralSphericalBoxToolProperties
// Size: 0x78 (Inherited: 0x70)
struct UProceduralSphericalBoxToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0x70(0x04)
	int32_t Subdivisions; // 0x74(0x04)
};

// Class MeshModelingTools.LastActorInfo
// Size: 0x58 (Inherited: 0x28)
struct ULastActorInfo : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct AActor* Actor; // 0x38(0x08)
	struct UStaticMesh* StaticMesh; // 0x40(0x08)
	struct UProceduralShapeToolProperties* ShapeSettings; // 0x48(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x50(0x08)
};

// Class MeshModelingTools.AddPrimitiveTool
// Size: 0xf0 (Inherited: 0x88)
struct UAddPrimitiveTool : USingleClickTool {
	char pad_88[0x8]; // 0x88(0x08)
	struct UProceduralShapeToolProperties* ShapeSettings; // 0x90(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x98(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xa0(0x08)
	struct ULastActorInfo* LastGenerated; // 0xa8(0x08)
	struct FString AssetName; // 0xb0(0x10)
	char pad_C0[0x30]; // 0xc0(0x30)
};

// Class MeshModelingTools.AddBoxPrimitiveTool
// Size: 0xf0 (Inherited: 0xf0)
struct UAddBoxPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddCylinderPrimitiveTool
// Size: 0xf0 (Inherited: 0xf0)
struct UAddCylinderPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddConePrimitiveTool
// Size: 0xf0 (Inherited: 0xf0)
struct UAddConePrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddRectanglePrimitiveTool
// Size: 0xf0 (Inherited: 0xf0)
struct UAddRectanglePrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddRoundedRectanglePrimitiveTool
// Size: 0xf0 (Inherited: 0xf0)
struct UAddRoundedRectanglePrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddDiscPrimitiveTool
// Size: 0xf0 (Inherited: 0xf0)
struct UAddDiscPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddPuncturedDiscPrimitiveTool
// Size: 0xf0 (Inherited: 0xf0)
struct UAddPuncturedDiscPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddTorusPrimitiveTool
// Size: 0xf0 (Inherited: 0xf0)
struct UAddTorusPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddArrowPrimitiveTool
// Size: 0xf0 (Inherited: 0xf0)
struct UAddArrowPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddSpherePrimitiveTool
// Size: 0xf0 (Inherited: 0xf0)
struct UAddSpherePrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddSphericalBoxPrimitiveTool
// Size: 0xf0 (Inherited: 0xf0)
struct UAddSphericalBoxPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AlignObjectsToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UAlignObjectsToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.AlignObjectsToolProperties
// Size: 0x70 (Inherited: 0x60)
struct UAlignObjectsToolProperties : UInteractiveToolPropertySet {
	enum class EAlignObjectsAlignTypes AlignType; // 0x60(0x04)
	enum class EAlignObjectsAlignToOptions AlignTo; // 0x64(0x04)
	enum class EAlignObjectsBoxPoint BoxPosition; // 0x68(0x04)
	bool bAlignX; // 0x6c(0x01)
	bool bAlignY; // 0x6d(0x01)
	bool bAlignZ; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
};

// Class MeshModelingTools.AlignObjectsTool
// Size: 0x140 (Inherited: 0x90)
struct UAlignObjectsTool : UMultiSelectionTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UAlignObjectsToolProperties* AlignProps; // 0x98(0x08)
	char pad_A0[0xa0]; // 0xa0(0xa0)
};

// Class MeshModelingTools.BakeMeshAttributeMapsToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UBakeMeshAttributeMapsToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.BakeMeshAttributeMapsToolProperties
// Size: 0xa0 (Inherited: 0x60)
struct UBakeMeshAttributeMapsToolProperties : UInteractiveToolPropertySet {
	enum class EBakeMapType MapType; // 0x60(0x04)
	enum class EBakeTextureResolution Resolution; // 0x64(0x04)
	bool bUseWorldSpace; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float Thickness; // 0x6c(0x04)
	struct FString UVLayer; // 0x70(0x10)
	struct TArray<struct FString> UVLayerNamesList; // 0x80(0x10)
	struct TArray<struct UTexture2D*> Result; // 0x90(0x10)

	struct TArray<struct FString> GetUVLayerNamesFunc(); // Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc // (Final|Native|Public) // @ game+0x21de150
};

// Class MeshModelingTools.BakedNormalMapToolProperties
// Size: 0x60 (Inherited: 0x60)
struct UBakedNormalMapToolProperties : UInteractiveToolPropertySet {
};

// Class MeshModelingTools.BakedOcclusionMapToolProperties
// Size: 0x88 (Inherited: 0x60)
struct UBakedOcclusionMapToolProperties : UInteractiveToolPropertySet {
	enum class EOcclusionMapPreview Preview; // 0x60(0x04)
	int32_t OcclusionRays; // 0x64(0x04)
	float MaxDistance; // 0x68(0x04)
	float SpreadAngle; // 0x6c(0x04)
	enum class EOcclusionMapDistribution Distribution; // 0x70(0x04)
	bool bGaussianBlur; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float BlurRadius; // 0x78(0x04)
	float BiasAngle; // 0x7c(0x04)
	enum class ENormalMapSpace NormalSpace; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class MeshModelingTools.BakedOcclusionMapVisualizationProperties
// Size: 0x68 (Inherited: 0x60)
struct UBakedOcclusionMapVisualizationProperties : UInteractiveToolPropertySet {
	float BaseGrayLevel; // 0x60(0x04)
	float OcclusionMultiplier; // 0x64(0x04)
};

// Class MeshModelingTools.BakedCurvatureMapToolProperties
// Size: 0x80 (Inherited: 0x60)
struct UBakedCurvatureMapToolProperties : UInteractiveToolPropertySet {
	enum class EBakedCurvatureTypeMode CurvatureType; // 0x60(0x04)
	enum class EBakedCurvatureColorMode ColorMode; // 0x64(0x04)
	float RangeMultiplier; // 0x68(0x04)
	float MinRangeMultiplier; // 0x6c(0x04)
	enum class EBakedCurvatureClampMode Clamping; // 0x70(0x04)
	bool bGaussianBlur; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float BlurRadius; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class MeshModelingTools.BakedTexture2DImageProperties
// Size: 0x70 (Inherited: 0x60)
struct UBakedTexture2DImageProperties : UInteractiveToolPropertySet {
	struct UTexture2D* SourceTexture; // 0x60(0x08)
	int32_t UVLayer; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class MeshModelingTools.BakeMeshAttributeMapsTool
// Size: 0x4f8 (Inherited: 0x90)
struct UBakeMeshAttributeMapsTool : UMultiSelectionTool {
	struct UBakeMeshAttributeMapsToolProperties* Settings; // 0x90(0x08)
	struct UBakedNormalMapToolProperties* NormalMapProps; // 0x98(0x08)
	struct UBakedOcclusionMapToolProperties* OcclusionMapProps; // 0xa0(0x08)
	struct UBakedCurvatureMapToolProperties* CurvatureMapProps; // 0xa8(0x08)
	struct UBakedTexture2DImageProperties* Texture2DProps; // 0xb0(0x08)
	struct UBakedOcclusionMapVisualizationProperties* VisualizationProps; // 0xb8(0x08)
	char pad_C0[0x10]; // 0xc0(0x10)
	struct UMaterialInstanceDynamic* PreviewMaterial; // 0xd0(0x08)
	struct UMaterialInstanceDynamic* BentNormalPreviewMaterial; // 0xd8(0x08)
	char pad_E0[0x360]; // 0xe0(0x360)
	struct UTexture2D* CachedNormalMap; // 0x440(0x08)
	char pad_448[0x28]; // 0x448(0x28)
	struct UTexture2D* CachedOcclusionMap; // 0x470(0x08)
	struct UTexture2D* CachedBentNormalMap; // 0x478(0x08)
	char pad_480[0x28]; // 0x480(0x28)
	struct UTexture2D* CachedCurvatureMap; // 0x4a8(0x08)
	char pad_4B0[0x10]; // 0x4b0(0x10)
	struct UTexture2D* CachedMeshPropertyMap; // 0x4c0(0x08)
	char pad_4C8[0x10]; // 0x4c8(0x10)
	struct UTexture2D* CachedTexture2DImageMap; // 0x4d8(0x08)
	struct UTexture2D* EmptyNormalMap; // 0x4e0(0x08)
	struct UTexture2D* EmptyColorMapBlack; // 0x4e8(0x08)
	struct UTexture2D* EmptyColorMapWhite; // 0x4f0(0x08)
};

// Class MeshModelingTools.BakeTransformToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UBakeTransformToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.BakeTransformToolProperties
// Size: 0x68 (Inherited: 0x60)
struct UBakeTransformToolProperties : UInteractiveToolPropertySet {
	bool bBakeRotation; // 0x60(0x01)
	enum class EBakeScaleMethod BakeScale; // 0x61(0x01)
	bool bRecenterPivot; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
};

// Class MeshModelingTools.BakeTransformTool
// Size: 0xb8 (Inherited: 0x90)
struct UBakeTransformTool : UMultiSelectionTool {
	struct UBakeTransformToolProperties* BasicProperties; // 0x90(0x08)
	char pad_98[0x20]; // 0x98(0x20)
};

// Class MeshModelingTools.PhysicsObjectToolPropertySet
// Size: 0xb8 (Inherited: 0x60)
struct UPhysicsObjectToolPropertySet : UInteractiveToolPropertySet {
	struct FString ObjectName; // 0x60(0x10)
	enum class ECollisionGeometryMode CollisionType; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FPhysicsSphereData> Spheres; // 0x78(0x10)
	struct TArray<struct FPhysicsBoxData> Boxes; // 0x88(0x10)
	struct TArray<struct FPhysicsCapsuleData> Capsules; // 0x98(0x10)
	struct TArray<struct FPhysicsConvexData> Convexes; // 0xa8(0x10)
};

// Class MeshModelingTools.CollisionGeometryVisualizationProperties
// Size: 0x70 (Inherited: 0x60)
struct UCollisionGeometryVisualizationProperties : UInteractiveToolPropertySet {
	float LineThickness; // 0x60(0x04)
	bool bShowHidden; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FColor Color; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class MeshModelingTools.CombineMeshesToolBuilder
// Size: 0x38 (Inherited: 0x28)
struct UCombineMeshesToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class MeshModelingTools.CombineMeshesToolProperties
// Size: 0x88 (Inherited: 0x60)
struct UCombineMeshesToolProperties : UInteractiveToolPropertySet {
	bool bIsDuplicateMode; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	enum class ECombineTargetType WriteOutputTo; // 0x64(0x04)
	struct FString OutputName; // 0x68(0x10)
	struct FString OutputAsset; // 0x78(0x10)
};

// Class MeshModelingTools.CombineMeshesTool
// Size: 0xb8 (Inherited: 0x90)
struct UCombineMeshesTool : UMultiSelectionTool {
	struct UCombineMeshesToolProperties* BasicProperties; // 0x90(0x08)
	struct UOnAcceptHandleSourcesProperties* HandleSourceProperties; // 0x98(0x08)
	char pad_A0[0x18]; // 0xa0(0x18)
};

// Class MeshModelingTools.ConvertToPolygonsToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UConvertToPolygonsToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.ConvertToPolygonsToolProperties
// Size: 0x70 (Inherited: 0x60)
struct UConvertToPolygonsToolProperties : UInteractiveToolPropertySet {
	enum class EConvertToPolygonsMode ConversionMode; // 0x60(0x04)
	float AngleTolerance; // 0x64(0x04)
	bool bCalculateNormals; // 0x68(0x01)
	bool bShowGroupColors; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class MeshModelingTools.ConvertToPolygonsTool
// Size: 0x3e0 (Inherited: 0x88)
struct UConvertToPolygonsTool : USingleSelectionTool {
	struct UConvertToPolygonsToolProperties* Settings; // 0x88(0x08)
	struct UPreviewMesh* PreviewMesh; // 0x90(0x08)
	char pad_98[0x348]; // 0x98(0x348)
};

// Class MeshModelingTools.CSGMeshesToolProperties
// Size: 0x68 (Inherited: 0x60)
struct UCSGMeshesToolProperties : UInteractiveToolPropertySet {
	enum class ECSGOperation Operation; // 0x60(0x01)
	bool bShowNewBoundaryEdges; // 0x61(0x01)
	bool bAttemptFixHoles; // 0x62(0x01)
	bool bOnlyUseFirstMeshMaterials; // 0x63(0x01)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class MeshModelingTools.CSGMeshesTool
// Size: 0x120 (Inherited: 0xf0)
struct UCSGMeshesTool : UBaseCreateFromSelectedTool {
	struct UCSGMeshesToolProperties* CSGProperties; // 0xf0(0x08)
	char pad_F8[0x10]; // 0xf8(0x10)
	struct ULineSetComponent* DrawnLineSet; // 0x108(0x08)
	char pad_110[0x10]; // 0x110(0x10)
};

// Class MeshModelingTools.CSGMeshesToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UCSGMeshesToolBuilder : UBaseCreateFromSelectedToolBuilder {
};

// Class MeshModelingTools.DeformMeshPolygonsToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UDeformMeshPolygonsToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.DeformMeshPolygonsTransformProperties
// Size: 0x80 (Inherited: 0x60)
struct UDeformMeshPolygonsTransformProperties : UInteractiveToolPropertySet {
	enum class EGroupTopologyDeformationStrategy DeformationStrategy; // 0x60(0x01)
	enum class EQuickTransformerMode TransformMode; // 0x61(0x01)
	bool bSelectFaces; // 0x62(0x01)
	bool bSelectEdges; // 0x63(0x01)
	bool bSelectVertices; // 0x64(0x01)
	bool bSnapToWorldGrid; // 0x65(0x01)
	bool bShowWireframe; // 0x66(0x01)
	char pad_67[0x1]; // 0x67(0x01)
	enum class EWeightScheme SelectedWeightScheme; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	double HandleWeight; // 0x70(0x08)
	bool bPostFixHandles; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class MeshModelingTools.DeformMeshPolygonsTool
// Size: 0x13c0 (Inherited: 0xc0)
struct UDeformMeshPolygonsTool : UMeshSurfacePointTool {
	char pad_C0[0x8]; // 0xc0(0x08)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xc8(0x08)
	struct UDeformMeshPolygonsTransformProperties* TransformProps; // 0xd0(0x08)
	char pad_D8[0x12e8]; // 0xd8(0x12e8)
};

// Class MeshModelingTools.DisplaceMeshCommonProperties
// Size: 0x90 (Inherited: 0x60)
struct UDisplaceMeshCommonProperties : UInteractiveToolPropertySet {
	enum class EDisplaceMeshToolDisplaceType DisplacementType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float DisplaceIntensity; // 0x64(0x04)
	int32_t RandomSeed; // 0x68(0x04)
	int32_t Subdivisions; // 0x6c(0x04)
	struct FName WeightMap; // 0x70(0x08)
	struct TArray<struct FString> WeightMapsList; // 0x78(0x10)
	bool bInvertWeightMap; // 0x88(0x01)
	bool bDisableSizeWarning; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)

	struct TArray<struct FString> GetWeightMapsFunc(); // Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc // (Final|Native|Public) // @ game+0x21e2d70
};

// Class MeshModelingTools.DisplaceMeshTextureMapProperties
// Size: 0x68 (Inherited: 0x60)
struct UDisplaceMeshTextureMapProperties : UInteractiveToolPropertySet {
	struct UTexture2D* DisplacementMap; // 0x60(0x08)
};

// Class MeshModelingTools.DisplaceMeshDirectionalFilterProperties
// Size: 0x78 (Inherited: 0x60)
struct UDisplaceMeshDirectionalFilterProperties : UInteractiveToolPropertySet {
	bool bEnableFilter; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FVector FilterDirection; // 0x64(0x0c)
	float FilterWidth; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MeshModelingTools.DisplaceMeshPerlinNoiseProperties
// Size: 0x70 (Inherited: 0x60)
struct UDisplaceMeshPerlinNoiseProperties : UInteractiveToolPropertySet {
	struct TArray<struct FPerlinLayerProperties> PerlinLayerProperties; // 0x60(0x10)
};

// Class MeshModelingTools.DisplaceMeshSineWaveProperties
// Size: 0x78 (Inherited: 0x60)
struct UDisplaceMeshSineWaveProperties : UInteractiveToolPropertySet {
	float SineWaveFrequency; // 0x60(0x04)
	float SineWavePhaseShift; // 0x64(0x04)
	struct FVector SineWaveDirection; // 0x68(0x0c)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MeshModelingTools.DisplaceMeshToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UDisplaceMeshToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.DisplaceMeshTool
// Size: 0x3f0 (Inherited: 0x88)
struct UDisplaceMeshTool : USingleSelectionTool {
	struct UDisplaceMeshCommonProperties* CommonProperties; // 0x88(0x08)
	struct UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties; // 0x90(0x08)
	struct UDisplaceMeshTextureMapProperties* TextureMapProperties; // 0x98(0x08)
	struct UDisplaceMeshPerlinNoiseProperties* NoiseProperties; // 0xa0(0x08)
	struct UDisplaceMeshSineWaveProperties* SineWaveProperties; // 0xa8(0x08)
	char pad_B0[0x340]; // 0xb0(0x340)
};

// Class MeshModelingTools.DrawAndRevolveToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UDrawAndRevolveToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.RevolveProperties
// Size: 0xb0 (Inherited: 0x60)
struct URevolveProperties : UInteractiveToolPropertySet {
	double RevolutionDegrees; // 0x60(0x08)
	double RevolutionDegreesOffset; // 0x68(0x08)
	int32_t Steps; // 0x70(0x04)
	bool bReverseRevolutionDirection; // 0x74(0x01)
	bool bFlipMesh; // 0x75(0x01)
	bool bProfileIsCrossSectionOfSide; // 0x76(0x01)
	enum class ERevolvePropertiesPolygroupMode PolygroupMode; // 0x77(0x01)
	enum class ERevolvePropertiesQuadSplit QuadSplitMode; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	double DiagonalProportionTolerance; // 0x80(0x08)
	enum class ERevolvePropertiesCapFillMode CapFillMode; // 0x88(0x01)
	bool bWeldFullRevolution; // 0x89(0x01)
	bool bWeldVertsOnAxis; // 0x8a(0x01)
	char pad_8B[0x5]; // 0x8b(0x05)
	double AxisWeldTolerance; // 0x90(0x08)
	bool bSharpNormals; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	double SharpNormalAngleTolerance; // 0xa0(0x08)
	bool bFlipVs; // 0xa8(0x01)
	bool bUVsSkipFullyWeldedEdges; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
};

// Class MeshModelingTools.RevolveToolProperties
// Size: 0xd0 (Inherited: 0xb0)
struct URevolveToolProperties : URevolveProperties {
	bool bConnectOpenProfileToAxis; // 0xb0(0x01)
	bool bSnapToWorldGrid; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	struct FVector DrawPlaneOrigin; // 0xb4(0x0c)
	struct FRotator DrawPlaneOrientation; // 0xc0(0x0c)
	bool bEnableSnapping; // 0xcc(0x01)
	bool bAllowedToEditDrawPlane; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
};

// Class MeshModelingTools.RevolveOperatorFactory
// Size: 0x38 (Inherited: 0x28)
struct URevolveOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UDrawAndRevolveTool* RevolveTool; // 0x30(0x08)
};

// Class MeshModelingTools.DrawAndRevolveTool
// Size: 0x120 (Inherited: 0x80)
struct UDrawAndRevolveTool : UInteractiveTool {
	char pad_80[0x78]; // 0x80(0x78)
	struct UCurveControlPointsMechanic* ControlPointsMechanic; // 0xf8(0x08)
	struct UConstructionPlaneMechanic* PlaneMechanic; // 0x100(0x08)
	struct URevolveToolProperties* Settings; // 0x108(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x110(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0x118(0x08)
};

// Class MeshModelingTools.DrawPolygonToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UDrawPolygonToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.DrawPolygonToolStandardProperties
// Size: 0x78 (Inherited: 0x60)
struct UDrawPolygonToolStandardProperties : UInteractiveToolPropertySet {
	enum class EDrawPolygonDrawMode PolygonType; // 0x60(0x01)
	enum class EDrawPolygonOutputMode OutputMode; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float FeatureSizeRatio; // 0x64(0x04)
	float ExtrudeHeight; // 0x68(0x04)
	int32_t Steps; // 0x6c(0x04)
	bool bAllowSelfIntersections; // 0x70(0x01)
	bool bShowGizmo; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// Class MeshModelingTools.DrawPolygonToolSnapProperties
// Size: 0x78 (Inherited: 0x60)
struct UDrawPolygonToolSnapProperties : UInteractiveToolPropertySet {
	bool bEnableSnapping; // 0x60(0x01)
	bool bSnapToWorldGrid; // 0x61(0x01)
	bool bSnapToVertices; // 0x62(0x01)
	bool bSnapToEdges; // 0x63(0x01)
	bool bSnapToAngles; // 0x64(0x01)
	bool bSnapToLengths; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	float SegmentLength; // 0x68(0x04)
	bool bHitSceneObjects; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float HitNormalOffset; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MeshModelingTools.DrawPolygonTool
// Size: 0x570 (Inherited: 0x80)
struct UDrawPolygonTool : UInteractiveTool {
	char pad_80[0x8]; // 0x80(0x08)
	struct UDrawPolygonToolStandardProperties* PolygonProperties; // 0x88(0x08)
	struct UDrawPolygonToolSnapProperties* SnapProperties; // 0x90(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x98(0x08)
	char pad_A0[0xb0]; // 0xa0(0xb0)
	struct UPreviewMesh* PreviewMesh; // 0x150(0x08)
	struct UTransformGizmo* PlaneTransformGizmo; // 0x158(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0x160(0x08)
	char pad_168[0x3d8]; // 0x168(0x3d8)
	struct UPlaneDistanceFromHitMechanic* HeightMechanic; // 0x540(0x08)
	char pad_548[0x28]; // 0x548(0x28)
};

// Class MeshModelingTools.DrawPolyPathToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UDrawPolyPathToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.DrawPolyPathProperties
// Size: 0x80 (Inherited: 0x60)
struct UDrawPolyPathProperties : UInteractiveToolPropertySet {
	enum class EDrawPolyPathOutputMode OutputType; // 0x60(0x04)
	enum class EDrawPolyPathWidthMode WidthMode; // 0x64(0x04)
	float Width; // 0x68(0x04)
	enum class EDrawPolyPathHeightMode HeightMode; // 0x6c(0x04)
	float Height; // 0x70(0x04)
	float RampStartRatio; // 0x74(0x04)
	bool bSnapToWorldGrid; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class MeshModelingTools.DrawPolyPathExtrudeProperties
// Size: 0x68 (Inherited: 0x60)
struct UDrawPolyPathExtrudeProperties : UInteractiveToolPropertySet {
	enum class EDrawPolyPathExtrudeDirection Direction; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class MeshModelingTools.DrawPolyPathTool
// Size: 0x210 (Inherited: 0x80)
struct UDrawPolyPathTool : UInteractiveTool {
	char pad_80[0x20]; // 0x80(0x20)
	struct UDrawPolyPathProperties* TransformProps; // 0xa0(0x08)
	struct UDrawPolyPathExtrudeProperties* ExtrudeProperties; // 0xa8(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0xb0(0x08)
	char pad_B8[0x88]; // 0xb8(0x88)
	struct UConstructionPlaneMechanic* PlaneMechanic; // 0x140(0x08)
	char pad_148[0xa0]; // 0x148(0xa0)
	struct UPolyEditPreviewMesh* EditPreview; // 0x1e8(0x08)
	struct UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x1f0(0x08)
	struct USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x1f8(0x08)
	struct UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x200(0x08)
	char pad_208[0x8]; // 0x208(0x08)
};

// Class MeshModelingTools.DynamicMeshBrushTool
// Size: 0x1f8 (Inherited: 0x1b8)
struct UDynamicMeshBrushTool : UBaseBrushTool {
	struct UPreviewMesh* PreviewMesh; // 0x1b8(0x08)
	char pad_1C0[0x38]; // 0x1c0(0x38)
};

// Class MeshModelingTools.DynamicMeshSculptToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UDynamicMeshSculptToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.BrushSculptProperties
// Size: 0x78 (Inherited: 0x60)
struct UBrushSculptProperties : UInteractiveToolPropertySet {
	bool bIsRemeshingEnabled; // 0x60(0x01)
	enum class EDynamicMeshSculptBrushType PrimaryBrushType; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float PrimaryBrushSpeed; // 0x64(0x04)
	bool bPreserveUVFlow; // 0x68(0x01)
	bool bFreezeTarget; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float SmoothBrushSpeed; // 0x6c(0x04)
	bool bDetailPreservingSmooth; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class MeshModelingTools.DynamicSculptToolActions
// Size: 0x68 (Inherited: 0x60)
struct UDynamicSculptToolActions : UInteractiveToolPropertySet {
	char pad_60[0x8]; // 0x60(0x08)

	void DiscardAttributes(); // Function MeshModelingTools.DynamicSculptToolActions.DiscardAttributes // (Final|Native|Public) // @ game+0x21e2d50
};

// Class MeshModelingTools.MeshConstraintProperties
// Size: 0x68 (Inherited: 0x60)
struct UMeshConstraintProperties : UInteractiveToolPropertySet {
	bool bPreserveSharpEdges; // 0x60(0x01)
	enum class EMeshBoundaryConstraint MeshBoundaryConstraint; // 0x61(0x01)
	enum class EGroupBoundaryConstraint GroupBoundaryConstraint; // 0x62(0x01)
	enum class EMaterialBoundaryConstraint MaterialBoundaryConstraint; // 0x63(0x01)
	bool bPreventNormalFlips; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class MeshModelingTools.RemeshProperties
// Size: 0x70 (Inherited: 0x68)
struct URemeshProperties : UMeshConstraintProperties {
	float SmoothingStrength; // 0x68(0x04)
	bool bFlips; // 0x6c(0x01)
	bool bSplits; // 0x6d(0x01)
	bool bCollapses; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
};

// Class MeshModelingTools.BrushRemeshProperties
// Size: 0x80 (Inherited: 0x70)
struct UBrushRemeshProperties : URemeshProperties {
	bool bEnableRemeshing; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t TriangleSize; // 0x74(0x04)
	int32_t PreserveDetail; // 0x78(0x04)
	int32_t iterations; // 0x7c(0x04)
};

// Class MeshModelingTools.FixedPlaneBrushProperties
// Size: 0x80 (Inherited: 0x60)
struct UFixedPlaneBrushProperties : UInteractiveToolPropertySet {
	bool bPropertySetEnabled; // 0x60(0x01)
	bool bShowGizmo; // 0x61(0x01)
	bool bSnapToGrid; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	struct FVector Position; // 0x64(0x0c)
	struct FQuat Rotation; // 0x70(0x10)
};

// Class MeshModelingTools.DynamicMeshSculptTool
// Size: 0xd20 (Inherited: 0xc0)
struct UDynamicMeshSculptTool : UMeshSurfacePointTool {
	struct USculptBrushProperties* BrushProperties; // 0xc0(0x08)
	struct UBrushSculptProperties* SculptProperties; // 0xc8(0x08)
	struct USculptMaxBrushProperties* SculptMaxBrushProperties; // 0xd0(0x08)
	struct UKelvinBrushProperties* KelvinBrushProperties; // 0xd8(0x08)
	struct UBrushRemeshProperties* RemeshProperties; // 0xe0(0x08)
	struct UFixedPlaneBrushProperties* GizmoProperties; // 0xe8(0x08)
	struct UMeshEditingViewProperties* ViewProperties; // 0xf0(0x08)
	struct UDynamicSculptToolActions* SculptToolActions; // 0xf8(0x08)
	char pad_100[0x40]; // 0x100(0x40)
	struct UBrushStampIndicator* BrushIndicator; // 0x140(0x08)
	struct UMaterialInstanceDynamic* BrushIndicatorMaterial; // 0x148(0x08)
	struct UPreviewMesh* BrushIndicatorMesh; // 0x150(0x08)
	struct UOctreeDynamicMeshComponent* DynamicMeshComponent; // 0x158(0x08)
	struct UMaterialInstanceDynamic* ActiveOverrideMaterial; // 0x160(0x08)
	char pad_168[0xba0]; // 0x168(0xba0)
	struct UTransformGizmo* PlaneTransformGizmo; // 0xd08(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0xd10(0x08)
	char pad_D18[0x8]; // 0xd18(0x08)
};

// Class MeshModelingTools.EdgeLoopInsertionToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UEdgeLoopInsertionToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.EdgeLoopInsertionProperties
// Size: 0x90 (Inherited: 0x60)
struct UEdgeLoopInsertionProperties : UInteractiveToolPropertySet {
	enum class EEdgeLoopPositioningMode PositionMode; // 0x60(0x04)
	enum class EEdgeLoopInsertionMode InsertionMode; // 0x64(0x04)
	int32_t NumLoops; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	double ProportionOffset; // 0x70(0x08)
	double DistanceOffset; // 0x78(0x08)
	bool bInteractive; // 0x80(0x01)
	bool bFlipOffsetDirection; // 0x81(0x01)
	bool bWireframe; // 0x82(0x01)
	char pad_83[0x5]; // 0x83(0x05)
	double VertexTolerance; // 0x88(0x08)
};

// Class MeshModelingTools.EdgeLoopInsertionOperatorFactory
// Size: 0x38 (Inherited: 0x28)
struct UEdgeLoopInsertionOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UEdgeLoopInsertionTool* Tool; // 0x30(0x08)
};

// Class MeshModelingTools.EdgeLoopInsertionTool
// Size: 0x500 (Inherited: 0x88)
struct UEdgeLoopInsertionTool : USingleSelectionTool {
	char pad_88[0x10]; // 0x88(0x10)
	struct UEdgeLoopInsertionProperties* Settings; // 0x98(0x08)
	char pad_A0[0x260]; // 0xa0(0x260)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0x300(0x08)
	char pad_308[0x1f8]; // 0x308(0x1f8)
};

// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UEditMeshPolygonsToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.PolyEditCommonProperties
// Size: 0x70 (Inherited: 0x60)
struct UPolyEditCommonProperties : UInteractiveToolPropertySet {
	bool bShowWireframe; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	enum class ELocalFrameMode LocalFrameMode; // 0x64(0x04)
	bool bLockRotation; // 0x68(0x01)
	bool bSnapToWorldGrid; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// Size: 0x68 (Inherited: 0x60)
struct UEditMeshPolygonsToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class MeshModelingTools.EditMeshPolygonsToolActions
// Size: 0x68 (Inherited: 0x68)
struct UEditMeshPolygonsToolActions : UEditMeshPolygonsToolActionPropertySet {

	void Retriangulate(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate // (Final|Native|Public) // @ game+0x21e7b40
	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals // (Final|Native|Public) // @ game+0x21e7b20
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Outset // (Final|Native|Public) // @ game+0x21e7ac0
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Offset // (Final|Native|Public) // @ game+0x21e7aa0
	void Merge(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Merge // (Final|Native|Public) // @ game+0x21e7a80
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Inset // (Final|Native|Public) // @ game+0x21e7a40
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Flip // (Final|Native|Public) // @ game+0x21e79e0
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude // (Final|Native|Public) // @ game+0x21e79a0
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect // (Final|Native|Public) // @ game+0x21e7980
	void DELETE(); // Function MeshModelingTools.EditMeshPolygonsToolActions.DELETE // (Final|Native|Public) // @ game+0x21e7960
	void Decompose(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose // (Final|Native|Public) // @ game+0x21e7940
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces // (Final|Native|Public) // @ game+0x21e7920
};

// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// Size: 0x68 (Inherited: 0x68)
struct UEditMeshPolygonsToolActions_Triangles : UEditMeshPolygonsToolActionPropertySet {

	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals // (Final|Native|Public) // @ game+0x21e7b20
	void Poke(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke // (Final|Native|Public) // @ game+0x21e7b00
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset // (Final|Native|Public) // @ game+0x21e7ac0
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset // (Final|Native|Public) // @ game+0x21e7aa0
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset // (Final|Native|Public) // @ game+0x21e7a40
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip // (Final|Native|Public) // @ game+0x21e79e0
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude // (Final|Native|Public) // @ game+0x21e79a0
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect // (Final|Native|Public) // @ game+0x21e7980
	void DELETE(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.DELETE // (Final|Native|Public) // @ game+0x21e7960
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces // (Final|Native|Public) // @ game+0x21e7920
};

// Class MeshModelingTools.EditMeshPolygonsToolUVActions
// Size: 0x68 (Inherited: 0x68)
struct UEditMeshPolygonsToolUVActions : UEditMeshPolygonsToolActionPropertySet {

	void PlanarProjection(); // Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection // (Final|Native|Public) // @ game+0x21e7ae0
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
// Size: 0x68 (Inherited: 0x68)
struct UEditMeshPolygonsToolEdgeActions : UEditMeshPolygonsToolActionPropertySet {

	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld // (Final|Native|Public) // @ game+0x21e7c00
	void Straighten(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten // (Final|Native|Public) // @ game+0x21e7bc0
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole // (Final|Native|Public) // @ game+0x21e79c0
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// Size: 0x68 (Inherited: 0x68)
struct UEditMeshPolygonsToolEdgeActions_Triangles : UEditMeshPolygonsToolActionPropertySet {

	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld // (Final|Native|Public) // @ game+0x21e7c00
	void Split(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split // (Final|Native|Public) // @ game+0x21e7ba0
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip // (Final|Native|Public) // @ game+0x21e7a00
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole // (Final|Native|Public) // @ game+0x21e79c0
	void Collapse(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse // (Final|Native|Public) // @ game+0x21e7900
};

// Class MeshModelingTools.PolyEditExtrudeProperties
// Size: 0x68 (Inherited: 0x60)
struct UPolyEditExtrudeProperties : UInteractiveToolPropertySet {
	enum class EPolyEditExtrudeDirection Direction; // 0x60(0x04)
	bool bShellsToSolids; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class MeshModelingTools.PolyEditOffsetProperties
// Size: 0x68 (Inherited: 0x60)
struct UPolyEditOffsetProperties : UInteractiveToolPropertySet {
	bool bUseFaceNormals; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class MeshModelingTools.PolyEditInsetProperties
// Size: 0x70 (Inherited: 0x60)
struct UPolyEditInsetProperties : UInteractiveToolPropertySet {
	bool bReproject; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Softness; // 0x64(0x04)
	bool bBoundaryOnly; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float AreaScale; // 0x6c(0x04)
};

// Class MeshModelingTools.PolyEditOutsetProperties
// Size: 0x70 (Inherited: 0x60)
struct UPolyEditOutsetProperties : UInteractiveToolPropertySet {
	float Softness; // 0x60(0x04)
	bool bBoundaryOnly; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float AreaScale; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class MeshModelingTools.PolyEditCutProperties
// Size: 0x68 (Inherited: 0x60)
struct UPolyEditCutProperties : UInteractiveToolPropertySet {
	enum class EPolyEditCutPlaneOrientation Orientation; // 0x60(0x04)
	bool bSnapToVertices; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class MeshModelingTools.PolyEditSetUVProperties
// Size: 0x68 (Inherited: 0x60)
struct UPolyEditSetUVProperties : UInteractiveToolPropertySet {
	bool bShowMaterial; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class MeshModelingTools.EditMeshPolygonsTool
// Size: 0x7d0 (Inherited: 0xc0)
struct UEditMeshPolygonsTool : UMeshSurfacePointTool {
	char pad_C0[0x10]; // 0xc0(0x10)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xd0(0x08)
	struct UPolyEditCommonProperties* CommonProps; // 0xd8(0x08)
	struct UEditMeshPolygonsToolActions* EditActions; // 0xe0(0x08)
	struct UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles; // 0xe8(0x08)
	struct UEditMeshPolygonsToolEdgeActions* EditEdgeActions; // 0xf0(0x08)
	struct UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles; // 0xf8(0x08)
	struct UEditMeshPolygonsToolUVActions* EditUVActions; // 0x100(0x08)
	struct UPolyEditExtrudeProperties* ExtrudeProperties; // 0x108(0x08)
	struct UPolyEditOffsetProperties* OffsetProperties; // 0x110(0x08)
	struct UPolyEditInsetProperties* InsetProperties; // 0x118(0x08)
	struct UPolyEditOutsetProperties* OutsetProperties; // 0x120(0x08)
	struct UPolyEditCutProperties* CutProperties; // 0x128(0x08)
	struct UPolyEditSetUVProperties* SetUVProperties; // 0x130(0x08)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0x138(0x08)
	char pad_140[0x8]; // 0x140(0x08)
	struct UMultiTransformer* MultiTransformer; // 0x148(0x08)
	char pad_150[0x350]; // 0x150(0x350)
	struct UPolyEditPreviewMesh* EditPreview; // 0x4a0(0x08)
	char pad_4A8[0x8]; // 0x4a8(0x08)
	struct UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x4b0(0x08)
	struct USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x4b8(0x08)
	struct UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x4c0(0x08)
	char pad_4C8[0x308]; // 0x4c8(0x308)
};

// Class MeshModelingTools.EditNormalsToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UEditNormalsToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.EditNormalsToolProperties
// Size: 0x70 (Inherited: 0x60)
struct UEditNormalsToolProperties : UInteractiveToolPropertySet {
	bool bRecomputeNormals; // 0x60(0x01)
	enum class ENormalCalculationMethod NormalCalculationMethod; // 0x61(0x01)
	bool bFixInconsistentNormals; // 0x62(0x01)
	bool bInvertNormals; // 0x63(0x01)
	enum class ESplitNormalMethod SplitNormalMethod; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float SharpEdgeAngleThreshold; // 0x68(0x04)
	bool bAllowSharpVertices; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.EditNormalsAdvancedProperties
// Size: 0x60 (Inherited: 0x60)
struct UEditNormalsAdvancedProperties : UInteractiveToolPropertySet {
};

// Class MeshModelingTools.EditNormalsOperatorFactory
// Size: 0x40 (Inherited: 0x28)
struct UEditNormalsOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UEditNormalsTool* Tool; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.EditNormalsTool
// Size: 0x100 (Inherited: 0x90)
struct UEditNormalsTool : UMultiSelectionTool {
	struct UEditNormalsToolProperties* BasicProperties; // 0x90(0x08)
	struct UEditNormalsAdvancedProperties* AdvancedProperties; // 0x98(0x08)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa0(0x10)
	char pad_B0[0x50]; // 0xb0(0x50)
};

// Class MeshModelingTools.EditPivotToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UEditPivotToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.EditPivotToolProperties
// Size: 0x68 (Inherited: 0x60)
struct UEditPivotToolProperties : UInteractiveToolPropertySet {
	bool bEnableSnapDragging; // 0x60(0x01)
	enum class EEditPivotSnapDragRotationMode RotationMode; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class MeshModelingTools.EditPivotToolActionPropertySet
// Size: 0x70 (Inherited: 0x60)
struct UEditPivotToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_60[0x8]; // 0x60(0x08)
	bool bUseWorldBox; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)

	void Top(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Top // (Final|Native|Public) // @ game+0x21e7be0
	void Right(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Right // (Final|Native|Public) // @ game+0x21e7b60
	void Left(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Left // (Final|Native|Public) // @ game+0x21e7a60
	void Front(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Front // (Final|Native|Public) // @ game+0x21e7a20
	void Center(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Center // (Final|Native|Public) // @ game+0x21e78c0
	void Bottom(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom // (Final|Native|Public) // @ game+0x21e78a0
	void Back(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Back // (Final|Native|Public) // @ game+0x21e7880
};

// Class MeshModelingTools.EditPivotTool
// Size: 0x200 (Inherited: 0x90)
struct UEditPivotTool : UMultiSelectionTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UEditPivotToolProperties* TransformProps; // 0x98(0x08)
	struct UEditPivotToolActionPropertySet* EditPivotActions; // 0xa0(0x08)
	char pad_A8[0xd0]; // 0xa8(0xd0)
	struct TArray<struct FEditPivotTarget> ActiveGizmos; // 0x178(0x10)
	char pad_188[0x78]; // 0x188(0x78)
};

// Class MeshModelingTools.EditUVIslandsToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UEditUVIslandsToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.EditUVIslandsTool
// Size: 0x380 (Inherited: 0xc0)
struct UEditUVIslandsTool : UMeshSurfacePointTool {
	char pad_C0[0x8]; // 0xc0(0x08)
	struct UExistingMeshMaterialProperties* MaterialSettings; // 0xc8(0x08)
	struct UMaterialInstanceDynamic* CheckerMaterial; // 0xd0(0x08)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xd8(0x08)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct UMultiTransformer* MultiTransformer; // 0xf0(0x08)
	char pad_F8[0x288]; // 0xf8(0x288)
};

// Class MeshModelingTools.ExtractCollisionGeometryToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UExtractCollisionGeometryToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.ExtractCollisionGeometryTool
// Size: 0x330 (Inherited: 0x88)
struct UExtractCollisionGeometryTool : USingleSelectionTool {
	struct UCollisionGeometryVisualizationProperties* VizSettings; // 0x88(0x08)
	struct UPhysicsObjectToolPropertySet* ObjectProps; // 0x90(0x08)
	struct UPreviewGeometry* PreviewElements; // 0x98(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xa0(0x08)
	char pad_A8[0x288]; // 0xa8(0x288)
};

// Class MeshModelingTools.GroupEdgeInsertionToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UGroupEdgeInsertionToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.GroupEdgeInsertionProperties
// Size: 0x70 (Inherited: 0x60)
struct UGroupEdgeInsertionProperties : UInteractiveToolPropertySet {
	enum class EGroupEdgeInsertionMode InsertionMode; // 0x60(0x04)
	bool bWireframe; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	double VertexTolerance; // 0x68(0x08)
};

// Class MeshModelingTools.GroupEdgeInsertionOperatorFactory
// Size: 0x38 (Inherited: 0x28)
struct UGroupEdgeInsertionOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UGroupEdgeInsertionTool* Tool; // 0x30(0x08)
};

// Class MeshModelingTools.GroupEdgeInsertionTool
// Size: 0x550 (Inherited: 0x88)
struct UGroupEdgeInsertionTool : USingleSelectionTool {
	char pad_88[0x10]; // 0x88(0x10)
	struct UGroupEdgeInsertionProperties* Settings; // 0x98(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xa0(0x08)
	char pad_A8[0x4a8]; // 0xa8(0x4a8)
};

// Class MeshModelingTools.HoleFillToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UHoleFillToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.SmoothHoleFillProperties
// Size: 0x88 (Inherited: 0x60)
struct USmoothHoleFillProperties : UInteractiveToolPropertySet {
	bool bConstrainToHoleInterior; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t RemeshingExteriorRegionWidth; // 0x64(0x04)
	int32_t SmoothingExteriorRegionWidth; // 0x68(0x04)
	int32_t SmoothingInteriorRegionWidth; // 0x6c(0x04)
	float InteriorSmoothness; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	double FillDensityScalar; // 0x78(0x08)
	bool bProjectDuringRemesh; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class MeshModelingTools.HoleFillToolProperties
// Size: 0x68 (Inherited: 0x60)
struct UHoleFillToolProperties : UInteractiveToolPropertySet {
	enum class EHoleFillOpFillType FillType; // 0x60(0x01)
	bool bRemoveIsolatedTriangles; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class MeshModelingTools.HoleFillToolActions
// Size: 0x68 (Inherited: 0x60)
struct UHoleFillToolActions : UInteractiveToolPropertySet {
	char pad_60[0x8]; // 0x60(0x08)

	void SelectAll(); // Function MeshModelingTools.HoleFillToolActions.SelectAll // (Final|Native|Public) // @ game+0x21e7b80
	void Clear(); // Function MeshModelingTools.HoleFillToolActions.Clear // (Final|Native|Public) // @ game+0x21e78e0
};

// Class MeshModelingTools.HoleFillStatisticsProperties
// Size: 0xb0 (Inherited: 0x60)
struct UHoleFillStatisticsProperties : UInteractiveToolPropertySet {
	struct FString InitialHoles; // 0x60(0x10)
	struct FString SelectedHoles; // 0x70(0x10)
	struct FString SuccessfulFills; // 0x80(0x10)
	struct FString FailedFills; // 0x90(0x10)
	struct FString RemainingHoles; // 0xa0(0x10)
};

// Class MeshModelingTools.HoleFillOperatorFactory
// Size: 0x38 (Inherited: 0x28)
struct UHoleFillOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UHoleFillTool* FillTool; // 0x30(0x08)
};

// Class MeshModelingTools.HoleFillTool
// Size: 0x1e0 (Inherited: 0x88)
struct UHoleFillTool : USingleSelectionTool {
	char pad_88[0x10]; // 0x88(0x10)
	struct USmoothHoleFillProperties* SmoothHoleFillProperties; // 0x98(0x08)
	struct UHoleFillToolProperties* Properties; // 0xa0(0x08)
	struct UHoleFillToolActions* Actions; // 0xa8(0x08)
	struct UHoleFillStatisticsProperties* Statistics; // 0xb0(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xb8(0x08)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0xc0(0x08)
	char pad_C8[0x118]; // 0xc8(0x118)
};

// Class MeshModelingTools.MeshSculptBrushOpProps
// Size: 0x60 (Inherited: 0x60)
struct UMeshSculptBrushOpProps : UInteractiveToolPropertySet {
};

// Class MeshModelingTools.BaseKelvinletBrushOpProps
// Size: 0x70 (Inherited: 0x60)
struct UBaseKelvinletBrushOpProps : UMeshSculptBrushOpProps {
	float Stiffness; // 0x60(0x04)
	float Incompressiblity; // 0x64(0x04)
	int32_t BrushSteps; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class MeshModelingTools.ScaleKelvinletBrushOpProps
// Size: 0x78 (Inherited: 0x70)
struct UScaleKelvinletBrushOpProps : UBaseKelvinletBrushOpProps {
	float Strength; // 0x70(0x04)
	float Falloff; // 0x74(0x04)
};

// Class MeshModelingTools.PullKelvinletBrushOpProps
// Size: 0x78 (Inherited: 0x70)
struct UPullKelvinletBrushOpProps : UBaseKelvinletBrushOpProps {
	float Falloff; // 0x70(0x04)
	float Depth; // 0x74(0x04)
};

// Class MeshModelingTools.SharpPullKelvinletBrushOpProps
// Size: 0x78 (Inherited: 0x70)
struct USharpPullKelvinletBrushOpProps : UBaseKelvinletBrushOpProps {
	float Falloff; // 0x70(0x04)
	float Depth; // 0x74(0x04)
};

// Class MeshModelingTools.TwistKelvinletBrushOpProps
// Size: 0x78 (Inherited: 0x70)
struct UTwistKelvinletBrushOpProps : UBaseKelvinletBrushOpProps {
	float Strength; // 0x70(0x04)
	float Falloff; // 0x74(0x04)
};

// Class MeshModelingTools.MeshAnalysisProperties
// Size: 0x80 (Inherited: 0x60)
struct UMeshAnalysisProperties : UInteractiveToolPropertySet {
	struct FString SurfaceArea; // 0x60(0x10)
	struct FString Volume; // 0x70(0x10)
};

// Class MeshModelingTools.MeshAttributePaintToolBuilder
// Size: 0x80 (Inherited: 0x30)
struct UMeshAttributePaintToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class MeshModelingTools.MeshAttributePaintToolProperties
// Size: 0x88 (Inherited: 0x60)
struct UMeshAttributePaintToolProperties : UInteractiveToolPropertySet {
	struct TArray<struct FName> Attributes; // 0x60(0x10)
	int32_t SelectedAttribute; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString AttributeName; // 0x78(0x10)
};

// Class MeshModelingTools.MeshAttributePaintEditActions
// Size: 0x68 (Inherited: 0x60)
struct UMeshAttributePaintEditActions : UInteractiveToolPropertySet {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class MeshModelingTools.MeshAttributePaintTool
// Size: 0x610 (Inherited: 0x1f8)
struct UMeshAttributePaintTool : UDynamicMeshBrushTool {
	struct UMeshAttributePaintToolProperties* AttribProps; // 0x1f8(0x08)
	char pad_200[0x410]; // 0x200(0x410)
};

// Class MeshModelingTools.MeshBoundaryToolBase
// Size: 0x150 (Inherited: 0x88)
struct UMeshBoundaryToolBase : USingleSelectionTool {
	char pad_88[0xb0]; // 0x88(0xb0)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0x138(0x08)
	struct USingleClickInputBehavior* LoopSelectClickBehavior; // 0x140(0x08)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MeshModelingTools.InflateBrushOpProps
// Size: 0x68 (Inherited: 0x60)
struct UInflateBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
};

// Class MeshModelingTools.MeshInspectorToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UMeshInspectorToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.MeshInspectorProperties
// Size: 0x78 (Inherited: 0x60)
struct UMeshInspectorProperties : UInteractiveToolPropertySet {
	bool bWireframe; // 0x60(0x01)
	bool bBoundaryEdges; // 0x61(0x01)
	bool bBowtieVertices; // 0x62(0x01)
	bool bPolygonBorders; // 0x63(0x01)
	bool bUVSeams; // 0x64(0x01)
	bool bUVBowties; // 0x65(0x01)
	bool bNormalSeams; // 0x66(0x01)
	bool bNormalVectors; // 0x67(0x01)
	bool bTangentVectors; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float NormalLength; // 0x6c(0x04)
	float TangentLength; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MeshModelingTools.MeshInspectorTool
// Size: 0x128 (Inherited: 0x88)
struct UMeshInspectorTool : USingleSelectionTool {
	struct UMeshInspectorProperties* Settings; // 0x88(0x08)
	struct UExistingMeshMaterialProperties* MaterialSettings; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xa0(0x08)
	struct ULineSetComponent* DrawnLineSet; // 0xa8(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0xb0(0x08)
	char pad_B8[0x70]; // 0xb8(0x70)
};

// Class MeshModelingTools.NewMeshMaterialProperties
// Size: 0x70 (Inherited: 0x60)
struct UNewMeshMaterialProperties : UInteractiveToolPropertySet {
	struct TWeakObjectPtr<struct UMaterialInterface> Material; // 0x60(0x08)
	float UVScale; // 0x68(0x04)
	bool bWorldSpaceUVScale; // 0x6c(0x01)
	bool bWireframe; // 0x6d(0x01)
	bool bShowExtendedOptions; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
};

// Class MeshModelingTools.ExistingMeshMaterialProperties
// Size: 0x78 (Inherited: 0x60)
struct UExistingMeshMaterialProperties : UInteractiveToolPropertySet {
	enum class ESetMeshMaterialMode MaterialMode; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float CheckerDensity; // 0x64(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x68(0x08)
	struct UMaterialInstanceDynamic* CheckerMaterial; // 0x70(0x08)
};

// Class MeshModelingTools.MeshEditingViewProperties
// Size: 0x88 (Inherited: 0x60)
struct UMeshEditingViewProperties : UInteractiveToolPropertySet {
	bool bShowWireframe; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	enum class EMeshEditingMaterialModes MaterialMode; // 0x64(0x04)
	bool bFlatShading; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FLinearColor Color; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UTexture2D* Image; // 0x80(0x08)
};

// Class MeshModelingTools.MoveBrushOpProps
// Size: 0x70 (Inherited: 0x60)
struct UMoveBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
	float Depth; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class MeshModelingTools.PinchBrushOpProps
// Size: 0x70 (Inherited: 0x60)
struct UPinchBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
	float Depth; // 0x68(0x04)
	bool bPerpDamping; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.BasePlaneBrushOpProps
// Size: 0x60 (Inherited: 0x60)
struct UBasePlaneBrushOpProps : UMeshSculptBrushOpProps {
};

// Class MeshModelingTools.PlaneBrushOpProps
// Size: 0x70 (Inherited: 0x60)
struct UPlaneBrushOpProps : UBasePlaneBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
	float Depth; // 0x68(0x04)
	enum class EPlaneBrushSideMode WhichSide; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.ViewAlignedPlaneBrushOpProps
// Size: 0x70 (Inherited: 0x60)
struct UViewAlignedPlaneBrushOpProps : UBasePlaneBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
	float Depth; // 0x68(0x04)
	enum class EPlaneBrushSideMode WhichSide; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.FixedPlaneBrushOpProps
// Size: 0x70 (Inherited: 0x60)
struct UFixedPlaneBrushOpProps : UBasePlaneBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
	float Depth; // 0x68(0x04)
	enum class EPlaneBrushSideMode WhichSide; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.StandardSculptBrushOpProps
// Size: 0x68 (Inherited: 0x60)
struct UStandardSculptBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
};

// Class MeshModelingTools.ViewAlignedSculptBrushOpProps
// Size: 0x68 (Inherited: 0x60)
struct UViewAlignedSculptBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
};

// Class MeshModelingTools.SculptMaxBrushOpProps
// Size: 0x78 (Inherited: 0x60)
struct USculptMaxBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
	float MaxHeight; // 0x68(0x04)
	bool bUseFixedHeight; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float FixedHeight; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MeshModelingTools.SculptBrushProperties
// Size: 0x88 (Inherited: 0x78)
struct USculptBrushProperties : UBrushBaseProperties {
	float Depth; // 0x78(0x04)
	bool bHitBackFaces; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float Lazyness; // 0x80(0x04)
	bool bShowPerBrushProps; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// Class MeshModelingTools.KelvinBrushProperties
// Size: 0x70 (Inherited: 0x60)
struct UKelvinBrushProperties : UInteractiveToolPropertySet {
	float FalloffDistance; // 0x60(0x04)
	float Stiffness; // 0x64(0x04)
	float Incompressiblity; // 0x68(0x04)
	int32_t BrushSteps; // 0x6c(0x04)
};

// Class MeshModelingTools.WorkPlaneProperties
// Size: 0x80 (Inherited: 0x60)
struct UWorkPlaneProperties : UInteractiveToolPropertySet {
	bool bPropertySetEnabled; // 0x60(0x01)
	bool bShowGizmo; // 0x61(0x01)
	bool bSnapToGrid; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	struct FVector Position; // 0x64(0x0c)
	struct FQuat Rotation; // 0x70(0x10)
};

// Class MeshModelingTools.SculptMaxBrushProperties
// Size: 0x68 (Inherited: 0x60)
struct USculptMaxBrushProperties : UInteractiveToolPropertySet {
	float MaxHeight; // 0x60(0x04)
	bool bFreezeCurrentHeight; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class MeshModelingTools.MeshSculptToolBase
// Size: 0x9e0 (Inherited: 0xc0)
struct UMeshSculptToolBase : UMeshSurfacePointTool {
	struct USculptBrushProperties* BrushProperties; // 0xc0(0x08)
	struct UWorkPlaneProperties* GizmoProperties; // 0xc8(0x08)
	char pad_D0[0xe0]; // 0xd0(0xe0)
	struct TMap<int32_t, struct UMeshSculptBrushOpProps*> BrushOpPropSets; // 0x1b0(0x50)
	char pad_200[0x50]; // 0x200(0x50)
	struct TMap<int32_t, struct UMeshSculptBrushOpProps*> SecondaryBrushOpPropSets; // 0x250(0x50)
	char pad_2A0[0x5d0]; // 0x2a0(0x5d0)
	struct UMeshEditingViewProperties* ViewProperties; // 0x870(0x08)
	struct UMaterialInstanceDynamic* ActiveOverrideMaterial; // 0x878(0x08)
	struct UBrushStampIndicator* BrushIndicator; // 0x880(0x08)
	struct UMaterialInstanceDynamic* BrushIndicatorMaterial; // 0x888(0x08)
	struct UPreviewMesh* BrushIndicatorMesh; // 0x890(0x08)
	struct UTransformGizmo* PlaneTransformGizmo; // 0x898(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0x8a0(0x08)
	char pad_8A8[0x138]; // 0x8a8(0x138)
};

// Class MeshModelingTools.MeshSelectionToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UMeshSelectionToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.MeshSelectionToolActionPropertySet
// Size: 0x68 (Inherited: 0x60)
struct UMeshSelectionToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class MeshModelingTools.MeshSelectionEditActions
// Size: 0x68 (Inherited: 0x68)
struct UMeshSelectionEditActions : UMeshSelectionToolActionPropertySet {

	void Shrink(); // Function MeshModelingTools.MeshSelectionEditActions.Shrink // (Final|Native|Public) // @ game+0x21eccb0
	void SelectLargestComponentByTriCount(); // Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount // (Final|Native|Public) // @ game+0x21ecc70
	void SelectLargestComponentByArea(); // Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea // (Final|Native|Public) // @ game+0x21ecc50
	void SelectAll(); // Function MeshModelingTools.MeshSelectionEditActions.SelectAll // (Final|Native|Public) // @ game+0x21ecc30
	void OptimizeSelection(); // Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection // (Final|Native|Public) // @ game+0x21ecc10
	void Invert(); // Function MeshModelingTools.MeshSelectionEditActions.Invert // (Final|Native|Public) // @ game+0x21ecbf0
	void Grow(); // Function MeshModelingTools.MeshSelectionEditActions.Grow // (Final|Native|Public) // @ game+0x21ecbd0
	void ExpandToConnected(); // Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected // (Final|Native|Public) // @ game+0x21ecb90
	void Clear(); // Function MeshModelingTools.MeshSelectionEditActions.Clear // (Final|Native|Public) // @ game+0x21ecb10
};

// Class MeshModelingTools.MeshSelectionMeshEditActions
// Size: 0x68 (Inherited: 0x68)
struct UMeshSelectionMeshEditActions : UMeshSelectionToolActionPropertySet {

	void SeparateTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles // (Final|Native|Public) // @ game+0x21ecc90
	void FlipNormals(); // Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals // (Final|Native|Public) // @ game+0x21ecbb0
	void DisconnectTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles // (Final|Native|Public) // @ game+0x21ecb70
	void DeleteTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles // (Final|Native|Public) // @ game+0x21ecb50
	void CreatePolygroup(); // Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup // (Final|Native|Public) // @ game+0x21ecb30
};

// Class MeshModelingTools.MeshSelectionToolProperties
// Size: 0x70 (Inherited: 0x60)
struct UMeshSelectionToolProperties : UInteractiveToolPropertySet {
	enum class EMeshSelectionToolPrimaryMode SelectionMode; // 0x60(0x04)
	float AngleTolerance; // 0x64(0x04)
	bool bHitBackFaces; // 0x68(0x01)
	bool bShowWireframe; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	enum class EMeshFacesColorMode FaceColorMode; // 0x6c(0x04)
};

// Class MeshModelingTools.MeshSelectionTool
// Size: 0x490 (Inherited: 0x1f8)
struct UMeshSelectionTool : UDynamicMeshBrushTool {
	struct UMeshSelectionToolProperties* SelectionProps; // 0x1f8(0x08)
	struct UMeshSelectionEditActions* SelectionActions; // 0x200(0x08)
	struct UMeshSelectionToolActionPropertySet* EditActions; // 0x208(0x08)
	struct UMeshSelectionSet* Selection; // 0x210(0x08)
	struct TArray<struct AActor*> SpawnedActors; // 0x218(0x10)
	char pad_228[0x268]; // 0x228(0x268)
};

// Class MeshModelingTools.BaseSmoothBrushOpProps
// Size: 0x60 (Inherited: 0x60)
struct UBaseSmoothBrushOpProps : UMeshSculptBrushOpProps {
};

// Class MeshModelingTools.SmoothBrushOpProps
// Size: 0x70 (Inherited: 0x60)
struct USmoothBrushOpProps : UBaseSmoothBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
	bool bPreserveUVFlow; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.SecondarySmoothBrushOpProps
// Size: 0x70 (Inherited: 0x60)
struct USecondarySmoothBrushOpProps : UBaseSmoothBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
	bool bPreserveUVFlow; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.SmoothFillBrushOpProps
// Size: 0x70 (Inherited: 0x60)
struct USmoothFillBrushOpProps : UBaseSmoothBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
	bool bPreserveUVFlow; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.FlattenBrushOpProps
// Size: 0x70 (Inherited: 0x60)
struct UFlattenBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
	float Depth; // 0x68(0x04)
	enum class EPlaneBrushSideMode WhichSide; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.EraseBrushOpProps
// Size: 0x68 (Inherited: 0x60)
struct UEraseBrushOpProps : UMeshSculptBrushOpProps {
	float Strength; // 0x60(0x04)
	float Falloff; // 0x64(0x04)
};

// Class MeshModelingTools.MeshSpaceDeformerToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UMeshSpaceDeformerToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.SpaceDeformerOperatorFactory
// Size: 0x38 (Inherited: 0x28)
struct USpaceDeformerOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UMeshSpaceDeformerTool* SpaceDeformerTool; // 0x30(0x08)
};

// Class MeshModelingTools.MeshSpaceDeformerTool
// Size: 0x1c0 (Inherited: 0xc0)
struct UMeshSpaceDeformerTool : UMeshSurfacePointTool {
	enum class ENonlinearOperationType SelectedOperationType; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float UpperBoundsInterval; // 0xc4(0x04)
	float LowerBoundsInterval; // 0xc8(0x04)
	float ModifierPercent; // 0xcc(0x04)
	bool bSnapToWorldGrid; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xe8(0x08)
	char pad_F0[0x20]; // 0xf0(0x20)
	struct FVector GizmoCenter; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FQuat GizmoOrientation; // 0x120(0x10)
	struct UIntervalGizmo* IntervalGizmo; // 0x130(0x08)
	struct UTransformGizmo* TransformGizmo; // 0x138(0x08)
	struct UTransformProxy* TransformProxy; // 0x140(0x08)
	struct UGizmoLocalFloatParameterSource* UpIntervalSource; // 0x148(0x08)
	struct UGizmoLocalFloatParameterSource* DownIntervalSource; // 0x150(0x08)
	struct UGizmoLocalFloatParameterSource* ForwardIntervalSource; // 0x158(0x08)
	char pad_160[0x60]; // 0x160(0x60)
};

// Class MeshModelingTools.MeshStatisticsProperties
// Size: 0x90 (Inherited: 0x60)
struct UMeshStatisticsProperties : UInteractiveToolPropertySet {
	struct FString Mesh; // 0x60(0x10)
	struct FString UV; // 0x70(0x10)
	struct FString Attributes; // 0x80(0x10)
};

// Class MeshModelingTools.MeshVertexSculptToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UMeshVertexSculptToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.VertexBrushSculptProperties
// Size: 0x68 (Inherited: 0x60)
struct UVertexBrushSculptProperties : UInteractiveToolPropertySet {
	enum class EMeshVertexSculptBrushType PrimaryBrushType; // 0x60(0x01)
	enum class EMeshSculptFalloffType PrimaryFalloffType; // 0x61(0x01)
	bool bFreezeTarget; // 0x62(0x01)
	bool bSmoothErases; // 0x63(0x01)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class MeshModelingTools.MeshVertexSculptTool
// Size: 0x1230 (Inherited: 0x9e0)
struct UMeshVertexSculptTool : UMeshSculptToolBase {
	struct UVertexBrushSculptProperties* SculptProperties; // 0x9d8(0x08)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0x9e0(0x08)
	char pad_9F0[0x840]; // 0x9f0(0x840)
};

// Class MeshModelingTools.MirrorToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UMirrorToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.MirrorToolProperties
// Size: 0x70 (Inherited: 0x60)
struct UMirrorToolProperties : UInteractiveToolPropertySet {
	enum class EMirrorOperationMode OperationMode; // 0x60(0x01)
	bool bCropAlongMirrorPlaneFirst; // 0x61(0x01)
	bool bWeldVerticesOnMirrorPlane; // 0x62(0x01)
	bool bAllowBowtieVertexCreation; // 0x63(0x01)
	bool bSnapToWorldGrid; // 0x64(0x01)
	enum class EMirrorCtrlClickBehavior CtrlClickBehavior; // 0x65(0x01)
	bool bButtonsOnlyChangeOrientation; // 0x66(0x01)
	bool bShowPreview; // 0x67(0x01)
	enum class EMirrorSaveMode SaveMode; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.MirrorOperatorFactory
// Size: 0x40 (Inherited: 0x28)
struct UMirrorOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UMirrorTool* MirrorTool; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.MirrorToolActionPropertySet
// Size: 0x68 (Inherited: 0x60)
struct UMirrorToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_60[0x8]; // 0x60(0x08)

	void Up(); // Function MeshModelingTools.MirrorToolActionPropertySet.Up // (Final|Native|Public) // @ game+0x21f1a70
	void ShiftToCenter(); // Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter // (Final|Native|Public) // @ game+0x21f1a50
	void Right(); // Function MeshModelingTools.MirrorToolActionPropertySet.Right // (Final|Native|Public) // @ game+0x21f1a30
	void Left(); // Function MeshModelingTools.MirrorToolActionPropertySet.Left // (Final|Native|Public) // @ game+0x21f1a10
	void Forward(); // Function MeshModelingTools.MirrorToolActionPropertySet.Forward // (Final|Native|Public) // @ game+0x21f19f0
	void Down(); // Function MeshModelingTools.MirrorToolActionPropertySet.Down // (Final|Native|Public) // @ game+0x21f19d0
	void Backward(); // Function MeshModelingTools.MirrorToolActionPropertySet.Backward // (Final|Native|Public) // @ game+0x21f1990
};

// Class MeshModelingTools.MirrorTool
// Size: 0x138 (Inherited: 0x90)
struct UMirrorTool : UMultiSelectionTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UMirrorToolProperties* Settings; // 0x98(0x08)
	struct UMirrorToolActionPropertySet* ToolActions; // 0xa0(0x08)
	struct TArray<struct UDynamicMeshReplacementChangeTarget*> MeshesToMirror; // 0xa8(0x10)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xb8(0x10)
	char pad_C8[0x48]; // 0xc8(0x48)
	struct UConstructionPlaneMechanic* PlaneMechanic; // 0x110(0x08)
	char pad_118[0x20]; // 0x118(0x20)
};

// Class MeshModelingTools.OffsetMeshToolProperties
// Size: 0x70 (Inherited: 0x60)
struct UOffsetMeshToolProperties : UInteractiveToolPropertySet {
	enum class EOffsetMeshToolOffsetType OffsetType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Distance; // 0x64(0x04)
	bool bCreateShell; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.OffsetWeightMapSetProperties
// Size: 0x88 (Inherited: 0x80)
struct UOffsetWeightMapSetProperties : UWeightMapSetProperties {
	float MinDistance; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class MeshModelingTools.IterativeOffsetProperties
// Size: 0x70 (Inherited: 0x60)
struct UIterativeOffsetProperties : UInteractiveToolPropertySet {
	int32_t Steps; // 0x60(0x04)
	bool bOffsetBoundaries; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float SmoothingPerStep; // 0x68(0x04)
	bool bReprojectSmooth; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.ImplicitOffsetProperties
// Size: 0x68 (Inherited: 0x60)
struct UImplicitOffsetProperties : UInteractiveToolPropertySet {
	float Smoothness; // 0x60(0x04)
	bool bPreserveUVs; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class MeshModelingTools.OffsetMeshTool
// Size: 0x420 (Inherited: 0x400)
struct UOffsetMeshTool : UBaseMeshProcessingTool {
	struct UOffsetMeshToolProperties* OffsetProperties; // 0x400(0x08)
	struct UIterativeOffsetProperties* IterativeProperties; // 0x408(0x08)
	struct UImplicitOffsetProperties* ImplicitProperties; // 0x410(0x08)
	struct UOffsetWeightMapSetProperties* WeightMapProperties; // 0x418(0x08)
};

// Class MeshModelingTools.OffsetMeshToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UOffsetMeshToolBuilder : UBaseMeshProcessingToolBuilder {
};

// Class MeshModelingTools.PhysicsInspectorToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UPhysicsInspectorToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.PhysicsInspectorTool
// Size: 0xd8 (Inherited: 0x90)
struct UPhysicsInspectorTool : UMultiSelectionTool {
	struct UCollisionGeometryVisualizationProperties* VizSettings; // 0x90(0x08)
	struct TArray<struct UPhysicsObjectToolPropertySet*> ObjectData; // 0x98(0x10)
	struct UMaterialInterface* LineMaterial; // 0xa8(0x08)
	struct TArray<struct UPreviewGeometry*> PreviewElements; // 0xb0(0x10)
	char pad_C0[0x18]; // 0xc0(0x18)
};

// Class MeshModelingTools.PlaneCutToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UPlaneCutToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.AcceptOutputProperties
// Size: 0x68 (Inherited: 0x60)
struct UAcceptOutputProperties : UInteractiveToolPropertySet {
	bool bExportSeparatedPiecesAsNewMeshAssets; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class MeshModelingTools.PlaneCutToolProperties
// Size: 0x70 (Inherited: 0x60)
struct UPlaneCutToolProperties : UInteractiveToolPropertySet {
	bool bSnapToWorldGrid; // 0x60(0x01)
	bool bKeepBothHalves; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float SpacingBetweenHalves; // 0x64(0x04)
	bool bFillCutHole; // 0x68(0x01)
	bool bShowPreview; // 0x69(0x01)
	bool bFillSpans; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};

// Class MeshModelingTools.PlaneCutOperatorFactory
// Size: 0x40 (Inherited: 0x28)
struct UPlaneCutOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UPlaneCutTool* CutTool; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.PlaneCutTool
// Size: 0x160 (Inherited: 0x90)
struct UPlaneCutTool : UMultiSelectionTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UPlaneCutToolProperties* BasicProperties; // 0x98(0x08)
	struct UAcceptOutputProperties* AcceptProperties; // 0xa0(0x08)
	struct FVector CutPlaneOrigin; // 0xa8(0x0c)
	char pad_B4[0xc]; // 0xb4(0x0c)
	struct FQuat CutPlaneOrientation; // 0xc0(0x10)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xd0(0x10)
	struct TArray<struct UDynamicMeshReplacementChangeTarget*> MeshesToCut; // 0xe0(0x10)
	char pad_F0[0x58]; // 0xf0(0x58)
	struct UTransformGizmo* PlaneTransformGizmo; // 0x148(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)

	void Cut(); // Function MeshModelingTools.PlaneCutTool.Cut // (Final|Native|Protected) // @ game+0x21f19b0
};

// Class MeshModelingTools.PositionPlaneGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UPositionPlaneGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class MeshModelingTools.PositionPlaneGizmo
// Size: 0x520 (Inherited: 0x38)
struct UPositionPlaneGizmo : UInteractiveGizmo {
	char pad_38[0x50]; // 0x38(0x50)
	struct UPreviewMesh* CenterBallShape; // 0x88(0x08)
	struct UMaterialInstance* CenterBallMaterial; // 0x90(0x08)
	char pad_98[0x488]; // 0x98(0x488)
};

// Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
// Size: 0xb0 (Inherited: 0x80)
struct UPositionPlaneOnSceneInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0x30]; // 0x80(0x30)
};

// Class MeshModelingTools.ProjectToTargetToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UProjectToTargetToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.RemeshMeshToolProperties
// Size: 0x90 (Inherited: 0x70)
struct URemeshMeshToolProperties : URemeshProperties {
	int32_t TargetTriangleCount; // 0x70(0x04)
	enum class ERemeshSmoothingType SmoothingType; // 0x74(0x01)
	bool bDiscardAttributes; // 0x75(0x01)
	bool bShowWireframe; // 0x76(0x01)
	bool bShowGroupColors; // 0x77(0x01)
	enum class ERemeshType RemeshType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32_t RemeshIterations; // 0x7c(0x04)
	bool bUseTargetEdgeLength; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float TargetEdgeLength; // 0x84(0x04)
	bool bReproject; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class MeshModelingTools.ProjectToTargetToolProperties
// Size: 0x90 (Inherited: 0x90)
struct UProjectToTargetToolProperties : URemeshMeshToolProperties {
};

// Class MeshModelingTools.RemeshMeshTool
// Size: 0xe8 (Inherited: 0x90)
struct URemeshMeshTool : UMultiSelectionTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct URemeshMeshToolProperties* BasicProperties; // 0x98(0x08)
	struct UMeshStatisticsProperties* MeshStatisticsProperties; // 0xa0(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xa8(0x08)
	char pad_B0[0x38]; // 0xb0(0x38)
};

// Class MeshModelingTools.ProjectToTargetTool
// Size: 0xf8 (Inherited: 0xe8)
struct UProjectToTargetTool : URemeshMeshTool {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class MeshModelingTools.RemeshMeshToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct URemeshMeshToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct URemoveOccludedTrianglesToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.RemoveOccludedTrianglesToolProperties
// Size: 0x80 (Inherited: 0x60)
struct URemoveOccludedTrianglesToolProperties : UInteractiveToolPropertySet {
	enum class EOcclusionCalculationUIMode OcclusionTestMethod; // 0x60(0x01)
	enum class EOcclusionTriangleSamplingUIMode TriangleSampling; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	double WindingIsoValue; // 0x68(0x08)
	int32_t AddRandomRays; // 0x70(0x04)
	int32_t AddTriangleSamples; // 0x74(0x04)
	bool bOnlySelfOcclude; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
// Size: 0x68 (Inherited: 0x60)
struct URemoveOccludedTrianglesAdvancedProperties : UInteractiveToolPropertySet {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
// Size: 0x40 (Inherited: 0x28)
struct URemoveOccludedTrianglesOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct URemoveOccludedTrianglesTool* Tool; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.RemoveOccludedTrianglesTool
// Size: 0x150 (Inherited: 0x90)
struct URemoveOccludedTrianglesTool : UMultiSelectionTool {
	struct URemoveOccludedTrianglesToolProperties* BasicProperties; // 0x90(0x08)
	struct URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties; // 0x98(0x08)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa0(0x10)
	struct TArray<struct UPreviewMesh*> PreviewCopies; // 0xb0(0x10)
	char pad_C0[0x90]; // 0xc0(0x90)
};

// Class MeshModelingTools.RevolveBoundaryToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct URevolveBoundaryToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.RevolveBoundaryOperatorFactory
// Size: 0x38 (Inherited: 0x28)
struct URevolveBoundaryOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct URevolveBoundaryTool* RevolveBoundaryTool; // 0x30(0x08)
};

// Class MeshModelingTools.RevolveBoundaryToolProperties
// Size: 0xd0 (Inherited: 0xb0)
struct URevolveBoundaryToolProperties : URevolveProperties {
	bool bDisplayOriginalMesh; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FVector AxisOrigin; // 0xb4(0x0c)
	float AxisYaw; // 0xc0(0x04)
	float AxisPitch; // 0xc4(0x04)
	bool bSnapToWorldGrid; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class MeshModelingTools.RevolveBoundaryTool
// Size: 0x1b0 (Inherited: 0x150)
struct URevolveBoundaryTool : UMeshBoundaryToolBase {
	char pad_150[0x10]; // 0x150(0x10)
	struct URevolveBoundaryToolProperties* Settings; // 0x160(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x168(0x08)
	struct UConstructionPlaneMechanic* PlaneMechanic; // 0x170(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0x178(0x08)
	char pad_180[0x30]; // 0x180(0x30)
};

// Class MeshModelingTools.SeamSculptToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct USeamSculptToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.SeamSculptToolProperties
// Size: 0x68 (Inherited: 0x60)
struct USeamSculptToolProperties : UInteractiveToolPropertySet {
	bool bShowWireframe; // 0x60(0x01)
	bool bHitBackFaces; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class MeshModelingTools.SeamSculptTool
// Size: 0x2d8 (Inherited: 0x1f8)
struct USeamSculptTool : UDynamicMeshBrushTool {
	struct USeamSculptToolProperties* Settings; // 0x1f8(0x08)
	struct UPreviewGeometry* PreviewGeom; // 0x200(0x08)
	char pad_208[0xd0]; // 0x208(0xd0)
};

// Class MeshModelingTools.SelfUnionMeshesToolProperties
// Size: 0x78 (Inherited: 0x60)
struct USelfUnionMeshesToolProperties : UInteractiveToolPropertySet {
	bool bAttemptFixHoles; // 0x60(0x01)
	bool bShowNewBoundaryEdges; // 0x61(0x01)
	bool bTrimFlaps; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	double WindingNumberThreshold; // 0x68(0x08)
	bool bOnlyUseFirstMeshMaterials; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class MeshModelingTools.SelfUnionMeshesTool
// Size: 0x120 (Inherited: 0xf0)
struct USelfUnionMeshesTool : UBaseCreateFromSelectedTool {
	struct USelfUnionMeshesToolProperties* Properties; // 0xf0(0x08)
	struct ULineSetComponent* DrawnLineSet; // 0xf8(0x08)
	char pad_100[0x20]; // 0x100(0x20)
};

// Class MeshModelingTools.SelfUnionMeshesToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct USelfUnionMeshesToolBuilder : UBaseCreateFromSelectedToolBuilder {
};

// Class MeshModelingTools.SetCollisionGeometryToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct USetCollisionGeometryToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.SetCollisionGeometryToolProperties
// Size: 0x90 (Inherited: 0x60)
struct USetCollisionGeometryToolProperties : UInteractiveToolPropertySet {
	enum class ECollisionGeometryType GeometryType; // 0x60(0x04)
	enum class ESetCollisionGeometryInputMode InputMode; // 0x64(0x04)
	bool bUseWorldSpace; // 0x68(0x01)
	bool bRemoveContained; // 0x69(0x01)
	bool bEnableMaxCount; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	int32_t MaxCount; // 0x6c(0x04)
	float MinThickness; // 0x70(0x04)
	bool bDetectBoxes; // 0x74(0x01)
	bool bDetectSpheres; // 0x75(0x01)
	bool bDetectCapsules; // 0x76(0x01)
	bool bSimplifyHulls; // 0x77(0x01)
	int32_t HullTargetFaceCount; // 0x78(0x04)
	bool bSimplifyPolygons; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float HullTolerance; // 0x80(0x04)
	enum class EProjectedHullAxis SweepAxis; // 0x84(0x04)
	bool bAppendToExisting; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	enum class ECollisionGeometryMode SetCollisionType; // 0x8c(0x04)
};

// Class MeshModelingTools.SetCollisionGeometryTool
// Size: 0x1c0 (Inherited: 0x90)
struct USetCollisionGeometryTool : UMultiSelectionTool {
	struct USetCollisionGeometryToolProperties* Settings; // 0x90(0x08)
	struct UCollisionGeometryVisualizationProperties* VizSettings; // 0x98(0x08)
	struct UPhysicsObjectToolPropertySet* CollisionProps; // 0xa0(0x08)
	struct UMaterialInterface* LineMaterial; // 0xa8(0x08)
	struct UPreviewGeometry* PreviewGeom; // 0xb0(0x08)
	char pad_B8[0x108]; // 0xb8(0x108)
};

// Class MeshModelingTools.SmoothMeshToolProperties
// Size: 0x68 (Inherited: 0x60)
struct USmoothMeshToolProperties : UInteractiveToolPropertySet {
	enum class ESmoothMeshToolSmoothType SmoothingType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class MeshModelingTools.IterativeSmoothProperties
// Size: 0x70 (Inherited: 0x60)
struct UIterativeSmoothProperties : UInteractiveToolPropertySet {
	float SmoothingPerStep; // 0x60(0x04)
	int32_t Steps; // 0x64(0x04)
	bool bSmoothBoundary; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.DiffusionSmoothProperties
// Size: 0x70 (Inherited: 0x60)
struct UDiffusionSmoothProperties : UInteractiveToolPropertySet {
	float SmoothingPerStep; // 0x60(0x04)
	int32_t Steps; // 0x64(0x04)
	bool bPreserveUVs; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.ImplicitSmoothProperties
// Size: 0x70 (Inherited: 0x60)
struct UImplicitSmoothProperties : UInteractiveToolPropertySet {
	float SmoothSpeed; // 0x60(0x04)
	float Smoothness; // 0x64(0x04)
	bool bPreserveUVs; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float VolumeCorrection; // 0x6c(0x04)
};

// Class MeshModelingTools.SmoothWeightMapSetProperties
// Size: 0x88 (Inherited: 0x80)
struct USmoothWeightMapSetProperties : UWeightMapSetProperties {
	float MinSmoothMultiplier; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class MeshModelingTools.SmoothMeshTool
// Size: 0x430 (Inherited: 0x400)
struct USmoothMeshTool : UBaseMeshProcessingTool {
	struct USmoothMeshToolProperties* SmoothProperties; // 0x400(0x08)
	struct UIterativeSmoothProperties* IterativeProperties; // 0x408(0x08)
	struct UDiffusionSmoothProperties* DiffusionProperties; // 0x410(0x08)
	struct UImplicitSmoothProperties* ImplicitProperties; // 0x418(0x08)
	struct USmoothWeightMapSetProperties* WeightMapProperties; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)
};

// Class MeshModelingTools.SmoothMeshToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct USmoothMeshToolBuilder : UBaseMeshProcessingToolBuilder {
};

// Class MeshModelingTools.TransformMeshesToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UTransformMeshesToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.TransformMeshesToolProperties
// Size: 0x68 (Inherited: 0x60)
struct UTransformMeshesToolProperties : UInteractiveToolPropertySet {
	enum class ETransformMeshesTransformMode TransformMode; // 0x60(0x01)
	bool bSetPivot; // 0x61(0x01)
	bool bEnableSnapDragging; // 0x62(0x01)
	enum class ETransformMeshesSnapDragSource SnapDragSource; // 0x63(0x01)
	enum class ETransformMeshesSnapDragRotationMode RotationMode; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class MeshModelingTools.TransformMeshesTool
// Size: 0x140 (Inherited: 0x90)
struct UTransformMeshesTool : UMultiSelectionTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UTransformMeshesToolProperties* TransformProps; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)
	struct TArray<struct FTransformMeshesTarget> ActiveGizmos; // 0xb0(0x10)
	char pad_C0[0x80]; // 0xc0(0x80)
};

// Class MeshModelingTools.UVProjectionToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UUVProjectionToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.UVProjectionToolProperties
// Size: 0x88 (Inherited: 0x60)
struct UUVProjectionToolProperties : UInteractiveToolPropertySet {
	enum class EUVProjectionMethod UVProjectionMethod; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FVector ProjectionPrimitiveScale; // 0x64(0x0c)
	float CylinderProjectToTopOrBottomAngleThreshold; // 0x70(0x04)
	struct FVector2D UVScale; // 0x74(0x08)
	struct FVector2D UVOffset; // 0x7c(0x08)
	bool bWorldSpaceUVScale; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// Class MeshModelingTools.UVProjectionAdvancedProperties
// Size: 0x60 (Inherited: 0x60)
struct UUVProjectionAdvancedProperties : UInteractiveToolPropertySet {
};

// Class MeshModelingTools.UVProjectionOperatorFactory
// Size: 0x40 (Inherited: 0x28)
struct UUVProjectionOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UUVProjectionTool* Tool; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.UVProjectionTool
// Size: 0x220 (Inherited: 0x90)
struct UUVProjectionTool : UMultiSelectionTool {
	struct UUVProjectionToolProperties* BasicProperties; // 0x90(0x08)
	struct UUVProjectionAdvancedProperties* AdvancedProperties; // 0x98(0x08)
	struct UExistingMeshMaterialProperties* MaterialSettings; // 0xa0(0x08)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa8(0x10)
	struct UMaterialInstanceDynamic* CheckerMaterial; // 0xb8(0x08)
	struct TArray<struct UTransformGizmo*> TransformGizmos; // 0xc0(0x10)
	struct TArray<struct UTransformProxy*> TransformProxies; // 0xd0(0x10)
	char pad_E0[0x140]; // 0xe0(0x140)
};

// Class MeshModelingTools.VoxelBlendMeshesToolProperties
// Size: 0x80 (Inherited: 0x60)
struct UVoxelBlendMeshesToolProperties : UInteractiveToolPropertySet {
	double BlendPower; // 0x60(0x08)
	double BlendFalloff; // 0x68(0x08)
	bool bSolidifyInput; // 0x70(0x01)
	bool bRemoveInternalsAfterSolidify; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	double OffsetSolidifySurface; // 0x78(0x08)
};

// Class MeshModelingTools.VoxelBlendMeshesTool
// Size: 0x110 (Inherited: 0x108)
struct UVoxelBlendMeshesTool : UBaseVoxelTool {
	struct UVoxelBlendMeshesToolProperties* BlendProperties; // 0x108(0x08)
};

// Class MeshModelingTools.VoxelBlendMeshesToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UVoxelBlendMeshesToolBuilder : UBaseCreateFromSelectedToolBuilder {
};

// Class MeshModelingTools.VoxelMorphologyMeshesToolProperties
// Size: 0x80 (Inherited: 0x60)
struct UVoxelMorphologyMeshesToolProperties : UInteractiveToolPropertySet {
	enum class EMorphologyOperation Operation; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	double Distance; // 0x68(0x08)
	bool bSolidifyInput; // 0x70(0x01)
	bool bRemoveInternalsAfterSolidify; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	double OffsetSolidifySurface; // 0x78(0x08)
};

// Class MeshModelingTools.VoxelMorphologyMeshesTool
// Size: 0x110 (Inherited: 0x108)
struct UVoxelMorphologyMeshesTool : UBaseVoxelTool {
	struct UVoxelMorphologyMeshesToolProperties* MorphologyProperties; // 0x108(0x08)
};

// Class MeshModelingTools.VoxelMorphologyMeshesToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UVoxelMorphologyMeshesToolBuilder : UBaseCreateFromSelectedToolBuilder {
};

// Class MeshModelingTools.VoxelSolidifyMeshesToolProperties
// Size: 0x80 (Inherited: 0x60)
struct UVoxelSolidifyMeshesToolProperties : UInteractiveToolPropertySet {
	double WindingThreshold; // 0x60(0x08)
	double ExtendBounds; // 0x68(0x08)
	int32_t SurfaceSearchSteps; // 0x70(0x04)
	bool bSolidAtBoundaries; // 0x74(0x01)
	bool bMakeOffsetSurfaces; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
	double OffsetThickness; // 0x78(0x08)
};

// Class MeshModelingTools.VoxelSolidifyMeshesTool
// Size: 0x110 (Inherited: 0x108)
struct UVoxelSolidifyMeshesTool : UBaseVoxelTool {
	struct UVoxelSolidifyMeshesToolProperties* SolidifyProperties; // 0x108(0x08)
};

// Class MeshModelingTools.VoxelSolidifyMeshesToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UVoxelSolidifyMeshesToolBuilder : UBaseCreateFromSelectedToolBuilder {
};

// Class MeshModelingTools.WeldMeshEdgesToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UWeldMeshEdgesToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.WeldMeshEdgesTool
// Size: 0x300 (Inherited: 0x88)
struct UWeldMeshEdgesTool : USingleSelectionTool {
	float Tolerance; // 0x88(0x04)
	bool bOnlyUnique; // 0x8c(0x01)
	char pad_8D[0x273]; // 0x8d(0x273)
};

