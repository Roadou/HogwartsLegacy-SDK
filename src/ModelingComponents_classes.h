// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UBaseCreateFromSelectedToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class ModelingComponents.OnAcceptHandleSourcesProperties
// Size: 0x68 (Inherited: 0x60)
struct UOnAcceptHandleSourcesProperties : UInteractiveToolPropertySet {
	enum class EHandleSourcesMethod OnToolAccept; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
// Size: 0x90 (Inherited: 0x68)
struct UBaseCreateFromSelectedHandleSourceProperties : UOnAcceptHandleSourcesProperties {
	enum class EBaseCreateFromSelectedTargetType WriteOutputTo; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString OutputName; // 0x70(0x10)
	struct FString OutputAsset; // 0x80(0x10)
};

// Class ModelingComponents.TransformInputsToolProperties
// Size: 0x68 (Inherited: 0x60)
struct UTransformInputsToolProperties : UInteractiveToolPropertySet {
	bool bShowTransformUI; // 0x60(0x01)
	bool bSnapToWorldGrid; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class ModelingComponents.BaseCreateFromSelectedTool
// Size: 0xf0 (Inherited: 0x90)
struct UBaseCreateFromSelectedTool : UMultiSelectionTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UTransformInputsToolProperties* TransformProperties; // 0x98(0x08)
	struct UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties; // 0xa0(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xa8(0x08)
	struct TArray<struct UTransformProxy*> TransformProxies; // 0xb0(0x10)
	struct TArray<struct UTransformGizmo*> TransformGizmos; // 0xc0(0x10)
	struct TArray<struct FVector> TransformInitialScales; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)
};

// Class ModelingComponents.BaseDynamicMeshComponent
// Size: 0x4f0 (Inherited: 0x4b0)
struct UBaseDynamicMeshComponent : UMeshComponent {
	char pad_4B0[0x40]; // 0x4b0(0x40)
};

// Class ModelingComponents.BaseMeshProcessingToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UBaseMeshProcessingToolBuilder : UInteractiveToolBuilder {
};

// Class ModelingComponents.BaseMeshProcessingTool
// Size: 0x400 (Inherited: 0x88)
struct UBaseMeshProcessingTool : USingleSelectionTool {
	char pad_88[0x28]; // 0x88(0x28)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xb0(0x08)
	char pad_B8[0x348]; // 0xb8(0x348)
};

// Class ModelingComponents.BaseVoxelTool
// Size: 0x108 (Inherited: 0xf0)
struct UBaseVoxelTool : UBaseCreateFromSelectedTool {
	struct UVoxelProperties* VoxProperties; // 0xf0(0x08)
	char pad_F8[0x10]; // 0xf8(0x10)
};

// Class ModelingComponents.CollectSurfacePathMechanic
// Size: 0x550 (Inherited: 0x30)
struct UCollectSurfacePathMechanic : UInteractionMechanic {
	char pad_30[0x520]; // 0x30(0x520)
};

// Class ModelingComponents.ConstructionPlaneMechanic
// Size: 0xf0 (Inherited: 0x30)
struct UConstructionPlaneMechanic : UInteractionMechanic {
	char pad_30[0x98]; // 0x30(0x98)
	struct UTransformGizmo* PlaneTransformGizmo; // 0xc8(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0xd0(0x08)
	char pad_D8[0x10]; // 0xd8(0x10)
	struct USingleClickInputBehavior* ClickToSetPlaneBehavior; // 0xe8(0x08)
};

// Class ModelingComponents.CurveControlPointsMechanic
// Size: 0x650 (Inherited: 0x30)
struct UCurveControlPointsMechanic : UInteractionMechanic {
	char pad_30[0x10]; // 0x30(0x10)
	struct USingleClickInputBehavior* ClickBehavior; // 0x40(0x08)
	struct UMouseHoverBehavior* HoverBehavior; // 0x48(0x08)
	char pad_50[0x498]; // 0x50(0x498)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x4e8(0x08)
	struct UPointSetComponent* DrawnControlPoints; // 0x4f0(0x08)
	struct ULineSetComponent* DrawnControlSegments; // 0x4f8(0x08)
	struct UPointSetComponent* PreviewPoint; // 0x500(0x08)
	struct ULineSetComponent* PreviewSegment; // 0x508(0x08)
	char pad_510[0x78]; // 0x510(0x78)
	struct UTransformProxy* PointTransformProxy; // 0x588(0x08)
	struct UTransformGizmo* PointTransformGizmo; // 0x590(0x08)
	char pad_598[0xb8]; // 0x598(0xb8)
};

// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// Size: 0x58 (Inherited: 0x28)
struct UDynamicMeshReplacementChangeTarget : UObject {
	char pad_28[0x30]; // 0x28(0x30)
};

// Class ModelingComponents.LineSetComponent
// Size: 0x510 (Inherited: 0x4b0)
struct ULineSetComponent : UMeshComponent {
	struct UMaterialInterface* LineMaterial; // 0x4a8(0x08)
	struct FBoxSphereBounds Bounds; // 0x4b0(0x1c)
	bool bBoundsDirty; // 0x4cc(0x01)
	char pad_4D5[0x3b]; // 0x4d5(0x3b)
};

// Class ModelingComponents.MeshCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct UMeshCommandChangeTarget : UInterface {
};

// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// Size: 0x90 (Inherited: 0x28)
struct UMeshOpPreviewWithBackgroundCompute : UObject {
	char pad_28[0x30]; // 0x28(0x30)
	struct UPreviewMesh* PreviewMesh; // 0x58(0x08)
	struct TArray<struct UMaterialInterface*> StandardMaterials; // 0x60(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x70(0x08)
	struct UMaterialInterface* WorkingMaterial; // 0x78(0x08)
	char pad_80[0x10]; // 0x80(0x10)
};

// Class ModelingComponents.MeshReplacementCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct UMeshReplacementCommandChangeTarget : UInterface {
};

// Class ModelingComponents.MeshVertexCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct UMeshVertexCommandChangeTarget : UInterface {
};

// Class ModelingComponents.MultiTransformer
// Size: 0x140 (Inherited: 0x28)
struct UMultiTransformer : UObject {
	char pad_28[0x48]; // 0x28(0x48)
	struct UInteractiveGizmoManager* GizmoManager; // 0x70(0x08)
	char pad_78[0x68]; // 0x78(0x68)
	struct UTransformGizmo* TransformGizmo; // 0xe0(0x08)
	struct UTransformProxy* TransformProxy; // 0xe8(0x08)
	char pad_F0[0x50]; // 0xf0(0x50)
};

// Class ModelingComponents.OctreeDynamicMeshComponent
// Size: 0x600 (Inherited: 0x4f0)
struct UOctreeDynamicMeshComponent : UBaseDynamicMeshComponent {
	char pad_4F0[0x18]; // 0x4f0(0x18)
	bool bExplicitShowWireframe; // 0x508(0x01)
	char pad_509[0xf7]; // 0x509(0xf7)
};

// Class ModelingComponents.PlaneDistanceFromHitMechanic
// Size: 0x4a0 (Inherited: 0x30)
struct UPlaneDistanceFromHitMechanic : UInteractionMechanic {
	char pad_30[0x470]; // 0x30(0x470)
};

// Class ModelingComponents.PointSetComponent
// Size: 0x510 (Inherited: 0x4b0)
struct UPointSetComponent : UMeshComponent {
	struct UMaterialInterface* PointMaterial; // 0x4a8(0x08)
	struct FBoxSphereBounds Bounds; // 0x4b0(0x1c)
	bool bBoundsDirty; // 0x4cc(0x01)
	char pad_4D5[0x3b]; // 0x4d5(0x3b)
};

// Class ModelingComponents.PreviewMesh
// Size: 0xe0 (Inherited: 0x28)
struct UPreviewMesh : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	bool bBuildSpatialDataStructure; // 0x40(0x01)
	bool bDrawOnTop; // 0x41(0x01)
	char pad_42[0xe]; // 0x42(0x0e)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0x50(0x08)
	char pad_58[0x88]; // 0x58(0x88)
};

// Class ModelingComponents.PolyEditPreviewMesh
// Size: 0x4d0 (Inherited: 0xe0)
struct UPolyEditPreviewMesh : UPreviewMesh {
	char pad_E0[0x3f0]; // 0xe0(0x3f0)
};

// Class ModelingComponents.PolygonSelectionMechanicProperties
// Size: 0x68 (Inherited: 0x60)
struct UPolygonSelectionMechanicProperties : UInteractiveToolPropertySet {
	bool bSelectFaces; // 0x60(0x01)
	bool bSelectEdges; // 0x61(0x01)
	bool bSelectVertices; // 0x62(0x01)
	bool bSelectEdgeLoops; // 0x63(0x01)
	bool bSelectEdgeRings; // 0x64(0x01)
	bool bPreferProjectedElement; // 0x65(0x01)
	bool bSelectDownRay; // 0x66(0x01)
	bool bIgnoreOcclusion; // 0x67(0x01)
};

// Class ModelingComponents.PolygonSelectionMechanic
// Size: 0x830 (Inherited: 0x30)
struct UPolygonSelectionMechanic : UInteractionMechanic {
	char pad_30[0x20]; // 0x30(0x20)
	struct UPolygonSelectionMechanicProperties* Properties; // 0x50(0x08)
	char pad_58[0x4c8]; // 0x58(0x4c8)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x520(0x08)
	struct UTriangleSetComponent* DrawnTriangleSetComponent; // 0x528(0x08)
	char pad_530[0x50]; // 0x530(0x50)
	struct UMaterialInterface* HighlightedFaceMaterial; // 0x580(0x08)
	char pad_588[0x2a8]; // 0x588(0x2a8)
};

// Class ModelingComponents.PreviewGeometryActor
// Size: 0x248 (Inherited: 0x248)
struct APreviewGeometryActor : AInternalToolFrameworkActor {
};

// Class ModelingComponents.PreviewGeometry
// Size: 0x80 (Inherited: 0x28)
struct UPreviewGeometry : UObject {
	struct APreviewGeometryActor* ParentActor; // 0x28(0x08)
	struct TMap<struct FString, struct ULineSetComponent*> LineSets; // 0x30(0x50)

	bool SetLineSetVisibility(struct FString LineSetIdentifier, bool bVisible); // Function ModelingComponents.PreviewGeometry.SetLineSetVisibility // (Final|Native|Public) // @ game+0x20e8e30
	bool SetLineSetMaterial(struct FString LineSetIdentifier, struct UMaterialInterface* NewMaterial); // Function ModelingComponents.PreviewGeometry.SetLineSetMaterial // (Final|Native|Public) // @ game+0x20e8d40
	void SetAllLineSetsMaterial(struct UMaterialInterface* Material); // Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial // (Final|Native|Public) // @ game+0x20e8cb0
	bool RemoveLineSet(struct FString LineSetIdentifier, bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveLineSet // (Final|Native|Public) // @ game+0x20e8bc0
	void RemoveAllLineSets(bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveAllLineSets // (Final|Native|Public) // @ game+0x20e8b30
	struct APreviewGeometryActor* GetActor(); // Function ModelingComponents.PreviewGeometry.GetActor // (Final|Native|Public|Const) // @ game+0x19fc470
	struct ULineSetComponent* FindLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.FindLineSet // (Final|Native|Public) // @ game+0x20e89a0
	void Disconnect(); // Function ModelingComponents.PreviewGeometry.Disconnect // (Final|Native|Public) // @ game+0x20e8980
	void CreateInWorld(struct UWorld* World, struct FTransform& WithTransform); // Function ModelingComponents.PreviewGeometry.CreateInWorld // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x20e8860
	struct ULineSetComponent* AddLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.AddLineSet // (Final|Native|Public) // @ game+0x20e87b0
};

// Class ModelingComponents.PreviewMeshActor
// Size: 0x248 (Inherited: 0x248)
struct APreviewMeshActor : AInternalToolFrameworkActor {
};

// Class ModelingComponents.SimpleDynamicMeshComponent
// Size: 0x640 (Inherited: 0x4f0)
struct USimpleDynamicMeshComponent : UBaseDynamicMeshComponent {
	enum class EDynamicMeshTangentCalcType TangentsType; // 0x4f0(0x01)
	bool bInvalidateProxyOnChange; // 0x4f1(0x01)
	char pad_4F2[0x36]; // 0x4f2(0x36)
	bool bExplicitShowWireframe; // 0x528(0x01)
	char pad_529[0x47]; // 0x529(0x47)
	bool bDrawOnTop; // 0x570(0x01)
	char pad_571[0xcf]; // 0x571(0xcf)
};

// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
// Size: 0x70 (Inherited: 0x60)
struct USpaceCurveDeformationMechanicPropertySet : UInteractiveToolPropertySet {
	enum class ESpaceCurveControlPointTransformMode TransformMode; // 0x60(0x04)
	enum class ESpaceCurveControlPointOriginMode TransformOrigin; // 0x64(0x04)
	float Softness; // 0x68(0x04)
	enum class ESpaceCurveControlPointFalloffType SoftFalloff; // 0x6c(0x04)
};

// Class ModelingComponents.SpaceCurveDeformationMechanic
// Size: 0x2b0 (Inherited: 0x30)
struct USpaceCurveDeformationMechanic : UInteractionMechanic {
	char pad_30[0x10]; // 0x30(0x10)
	struct USingleClickInputBehavior* ClickBehavior; // 0x40(0x08)
	struct UMouseHoverBehavior* HoverBehavior; // 0x48(0x08)
	char pad_50[0x18]; // 0x50(0x18)
	struct USpaceCurveDeformationMechanicPropertySet* TransformProperties; // 0x68(0x08)
	char pad_70[0xf8]; // 0x70(0xf8)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x168(0x08)
	struct UPointSetComponent* RenderPoints; // 0x170(0x08)
	struct ULineSetComponent* RenderSegments; // 0x178(0x08)
	char pad_180[0x38]; // 0x180(0x38)
	struct UTransformProxy* PointTransformProxy; // 0x1b8(0x08)
	struct UTransformGizmo* PointTransformGizmo; // 0x1c0(0x08)
	char pad_1C8[0xe8]; // 0x1c8(0xe8)
};

// Class ModelingComponents.SpatialCurveDistanceMechanic
// Size: 0x3f0 (Inherited: 0x30)
struct USpatialCurveDistanceMechanic : UInteractionMechanic {
	char pad_30[0x3c0]; // 0x30(0x3c0)
};

// Class ModelingComponents.TriangleSetComponent
// Size: 0x590 (Inherited: 0x4b0)
struct UTriangleSetComponent : UMeshComponent {
	struct FBoxSphereBounds Bounds; // 0x4a8(0x1c)
	bool bBoundsDirty; // 0x4c4(0x01)
	char pad_4CD[0xc3]; // 0x4cd(0xc3)
};

// Class ModelingComponents.UVLayoutPreviewProperties
// Size: 0x78 (Inherited: 0x60)
struct UUVLayoutPreviewProperties : UInteractiveToolPropertySet {
	bool bVisible; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float ScaleFactor; // 0x64(0x04)
	enum class EUVLayoutPreviewSide WhichSide; // 0x68(0x04)
	bool bShowWireframe; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FVector2D Shift; // 0x70(0x08)
};

// Class ModelingComponents.UVLayoutPreview
// Size: 0x140 (Inherited: 0x28)
struct UUVLayoutPreview : UObject {
	struct UUVLayoutPreviewProperties* Settings; // 0x28(0x08)
	struct UPreviewMesh* PreviewMesh; // 0x30(0x08)
	struct UTriangleSetComponent* TriangleComponent; // 0x38(0x08)
	bool bShowBackingRectangle; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UMaterialInterface* BackingRectangleMaterial; // 0x48(0x08)
	char pad_50[0xf0]; // 0x50(0xf0)
};

// Class ModelingComponents.VoxelProperties
// Size: 0x78 (Inherited: 0x60)
struct UVoxelProperties : UInteractiveToolPropertySet {
	int32_t VoxelCount; // 0x60(0x04)
	bool bAutoSimplify; // 0x64(0x01)
	bool bRemoveInternalSurfaces; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	double SimplifyMaxErrorFactor; // 0x68(0x08)
	double CubeRootMinComponentVolume; // 0x70(0x08)
};

// Class ModelingComponents.WeightMapSetProperties
// Size: 0x80 (Inherited: 0x60)
struct UWeightMapSetProperties : UInteractiveToolPropertySet {
	struct FName WeightMap; // 0x60(0x08)
	struct TArray<struct FString> WeightMapsList; // 0x68(0x10)
	bool bInvertWeightMap; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	struct TArray<struct FString> GetWeightMapsFunc(); // Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc // (Final|Native|Public) // @ game+0x20e8a50
};

