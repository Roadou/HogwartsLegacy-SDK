// Enum MeshModelingTools.EMakeMeshPolygroupMode
enum class EMakeMeshPolygroupMode : uint8 {
	Single = 0,
	PerFace = 1,
	PerQuad = 2,
	EMakeMeshPolygroupMode_MAX = 3
};

// Enum MeshModelingTools.EMakeMeshPivotLocation
enum class EMakeMeshPivotLocation : uint8 {
	Base = 0,
	Centered = 1,
	Top = 2,
	EMakeMeshPivotLocation_MAX = 3
};

// Enum MeshModelingTools.EMakeMeshPlacementType
enum class EMakeMeshPlacementType : uint8 {
	GroundPlane = 0,
	OnScene = 1,
	EMakeMeshPlacementType_MAX = 2
};

// Enum MeshModelingTools.EAlignObjectsBoxPoint
enum class EAlignObjectsBoxPoint : uint8 {
	Center = 0,
	Bottom = 1,
	Top = 2,
	Left = 3,
	Right = 4,
	Front = 5,
	Back = 6,
	Min = 7,
	Max = 8
};

// Enum MeshModelingTools.EAlignObjectsAlignToOptions
enum class EAlignObjectsAlignToOptions : uint8 {
	FirstSelected = 0,
	LastSelected = 1,
	Combined = 2,
	EAlignObjectsAlignToOptions_MAX = 3
};

// Enum MeshModelingTools.EAlignObjectsAlignTypes
enum class EAlignObjectsAlignTypes : uint8 {
	Pivots = 0,
	BoundingBoxes = 1,
	EAlignObjectsAlignTypes_MAX = 2
};

// Enum MeshModelingTools.EBakedCurvatureClampMode
enum class EBakedCurvatureClampMode : uint8 {
	None = 0,
	Positive = 1,
	Negative = 2,
	EBakedCurvatureClampMode_MAX = 3
};

// Enum MeshModelingTools.EBakedCurvatureColorMode
enum class EBakedCurvatureColorMode : uint8 {
	Grayscale = 0,
	RedBlue = 1,
	RedGreenBlue = 2,
	EBakedCurvatureColorMode_MAX = 3
};

// Enum MeshModelingTools.EBakedCurvatureTypeMode
enum class EBakedCurvatureTypeMode : uint8 {
	MeanAverage = 0,
	Max = 1,
	Min = 2,
	Gaussian = 3
};

// Enum MeshModelingTools.EOcclusionMapPreview
enum class EOcclusionMapPreview : uint8 {
	AmbientOcclusion = 0,
	BentNormal = 1,
	EOcclusionMapPreview_MAX = 2
};

// Enum MeshModelingTools.EOcclusionMapDistribution
enum class EOcclusionMapDistribution : uint8 {
	Uniform = 0,
	Cosine = 1,
	EOcclusionMapDistribution_MAX = 2
};

// Enum MeshModelingTools.ENormalMapSpace
enum class ENormalMapSpace : uint8 {
	Tangent = 0,
	Object = 1,
	ENormalMapSpace_MAX = 2
};

// Enum MeshModelingTools.EBakeTextureResolution
enum class EBakeTextureResolution : int32 {
	Resolution16 = 16,
	Resolution32 = 32,
	Resolution64 = 64,
	Resolution128 = 128,
	Resolution256 = 256,
	Resolution512 = 512,
	Resolution1024 = 1024,
	Resolution2048 = 2048,
	Resolution4096 = 4096,
	Resolution8192 = 8192,
	EBakeTextureResolution_MAX = 8193
};

// Enum MeshModelingTools.EBakeMapType
enum class EBakeMapType : uint8 {
	TangentSpaceNormalMap = 0,
	Occlusion = 1,
	Curvature = 2,
	Texture2DImage = 3,
	NormalImage = 4,
	FaceNormalImage = 5,
	PositionImage = 6,
	EBakeMapType_MAX = 7
};

// Enum MeshModelingTools.EBakeScaleMethod
enum class EBakeScaleMethod : uint8 {
	BakeFullScale = 0,
	BakeNonuniformScale = 1,
	DoNotBakeScale = 2,
	EBakeScaleMethod_MAX = 3
};

// Enum MeshModelingTools.ECollisionGeometryMode
enum class ECollisionGeometryMode : uint8 {
	Default = 0,
	SimpleAndComplex = 1,
	UseSimpleAsComplex = 2,
	UseComplexAsSimple = 3,
	ECollisionGeometryMode_MAX = 4
};

// Enum MeshModelingTools.ECombineTargetType
enum class ECombineTargetType : uint8 {
	NewAsset = 0,
	FirstInputAsset = 1,
	LastInputAsset = 2,
	ECombineTargetType_MAX = 3
};

// Enum MeshModelingTools.EConvertToPolygonsMode
enum class EConvertToPolygonsMode : uint8 {
	FaceNormalDeviation = 0,
	FromUVISlands = 1,
	EConvertToPolygonsMode_MAX = 2
};

// Enum MeshModelingTools.EQuickTransformerMode
enum class EQuickTransformerMode : uint8 {
	AxisTranslation = 0,
	AxisRotation = 1,
	EQuickTransformerMode_MAX = 2
};

// Enum MeshModelingTools.EWeightScheme
enum class EWeightScheme : uint8 {
	Uniform = 0,
	Umbrella = 1,
	Valence = 2,
	MeanValue = 3,
	Cotangent = 4,
	ClampedCotangent = 5,
	EWeightScheme_MAX = 6
};

// Enum MeshModelingTools.EGroupTopologyDeformationStrategy
enum class EGroupTopologyDeformationStrategy : uint8 {
	Linear = 0,
	Laplacian = 1,
	EGroupTopologyDeformationStrategy_MAX = 2
};

// Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
enum class EDisplaceMeshToolDisplaceType : uint8 {
	Constant = 0,
	RandomNoise = 1,
	PerlinNoise = 2,
	DisplacementMap = 3,
	SineWave = 4,
	EDisplaceMeshToolDisplaceType_MAX = 5
};

// Enum MeshModelingTools.EDrawPolygonOutputMode
enum class EDrawPolygonOutputMode : uint8 {
	MeshedPolygon = 0,
	ExtrudedConstant = 1,
	ExtrudedInteractive = 2,
	EDrawPolygonOutputMode_MAX = 3
};

// Enum MeshModelingTools.EDrawPolygonDrawMode
enum class EDrawPolygonDrawMode : uint8 {
	Freehand = 0,
	Circle = 1,
	Square = 2,
	Rectangle = 3,
	RoundedRectangle = 4,
	HoleyCircle = 5,
	EDrawPolygonDrawMode_MAX = 6
};

// Enum MeshModelingTools.EDrawPolyPathExtrudeDirection
enum class EDrawPolyPathExtrudeDirection : uint8 {
	SelectionNormal = 0,
	WorldX = 1,
	WorldY = 2,
	WorldZ = 3,
	LocalX = 4,
	LocalY = 5,
	LocalZ = 6,
	EDrawPolyPathExtrudeDirection_MAX = 7
};

// Enum MeshModelingTools.EDrawPolyPathHeightMode
enum class EDrawPolyPathHeightMode : uint8 {
	Interactive = 0,
	Constant = 1,
	EDrawPolyPathHeightMode_MAX = 2
};

// Enum MeshModelingTools.EDrawPolyPathWidthMode
enum class EDrawPolyPathWidthMode : uint8 {
	Interactive = 0,
	Constant = 1,
	EDrawPolyPathWidthMode_MAX = 2
};

// Enum MeshModelingTools.EDrawPolyPathOutputMode
enum class EDrawPolyPathOutputMode : uint8 {
	Ribbon = 0,
	Extrusion = 1,
	Ramp = 2,
	EDrawPolyPathOutputMode_MAX = 3
};

// Enum MeshModelingTools.EDynamicMeshSculptBrushType
enum class EDynamicMeshSculptBrushType : uint8 {
	Move = 0,
	PullKelvin = 1,
	PullSharpKelvin = 2,
	Smooth = 3,
	Offset = 4,
	SculptView = 5,
	SculptMax = 6,
	Inflate = 7,
	ScaleKelvin = 8,
	Pinch = 9,
	TwistKelvin = 10,
	Flatten = 11,
	Plane = 12,
	PlaneViewAligned = 13,
	FixedPlane = 14,
	Resample = 15,
	LastValue = 16,
	EDynamicMeshSculptBrushType_MAX = 17
};

// Enum MeshModelingTools.EEdgeLoopInsertionMode
enum class EEdgeLoopInsertionMode : uint8 {
	Retriangulate = 0,
	PlaneCut = 1,
	EEdgeLoopInsertionMode_MAX = 2
};

// Enum MeshModelingTools.EEdgeLoopPositioningMode
enum class EEdgeLoopPositioningMode : uint8 {
	Even = 0,
	ProportionOffset = 1,
	DistanceOffset = 2,
	EEdgeLoopPositioningMode_MAX = 3
};

// Enum MeshModelingTools.EPolyEditCutPlaneOrientation
enum class EPolyEditCutPlaneOrientation : uint8 {
	FaceNormals = 0,
	ViewDirection = 1,
	EPolyEditCutPlaneOrientation_MAX = 2
};

// Enum MeshModelingTools.EPolyEditExtrudeDirection
enum class EPolyEditExtrudeDirection : uint8 {
	SelectionNormal = 0,
	WorldX = 1,
	WorldY = 2,
	WorldZ = 3,
	LocalX = 4,
	LocalY = 5,
	LocalZ = 6,
	EPolyEditExtrudeDirection_MAX = 7
};

// Enum MeshModelingTools.EEditMeshPolygonsToolActions
enum class EEditMeshPolygonsToolActions : uint8 {
	NoAction = 0,
	PlaneCut = 1,
	Extrude = 2,
	Offset = 3,
	Inset = 4,
	Outset = 5,
	Merge = 6,
	Delete = 7,
	CutFaces = 8,
	RecalculateNormals = 9,
	FlipNormals = 10,
	Retriangulate = 11,
	Decompose = 12,
	Disconnect = 13,
	CollapseEdge = 14,
	WeldEdges = 15,
	StraightenEdge = 16,
	FillHole = 17,
	PlanarProjectionUV = 18,
	PokeSingleFace = 19,
	SplitSingleEdge = 20,
	FlipSingleEdge = 21,
	CollapseSingleEdge = 22,
	EEditMeshPolygonsToolActions_MAX = 23
};

// Enum MeshModelingTools.ELocalFrameMode
enum class ELocalFrameMode : uint8 {
	FromObject = 0,
	FromGeometry = 1,
	ELocalFrameMode_MAX = 2
};

// Enum MeshModelingTools.EEditPivotToolActions
enum class EEditPivotToolActions : uint8 {
	NoAction = 0,
	Center = 1,
	Bottom = 2,
	Top = 3,
	Left = 4,
	Right = 5,
	Front = 6,
	Back = 7,
	EEditPivotToolActions_MAX = 8
};

// Enum MeshModelingTools.EEditPivotSnapDragRotationMode
enum class EEditPivotSnapDragRotationMode : uint8 {
	Ignore = 0,
	Align = 1,
	AlignFlipped = 2,
	LastValue = 3,
	EEditPivotSnapDragRotationMode_MAX = 4
};

// Enum MeshModelingTools.EGroupEdgeInsertionMode
enum class EGroupEdgeInsertionMode : uint8 {
	Retriangulate = 0,
	PlaneCut = 1,
	EGroupEdgeInsertionMode_MAX = 2
};

// Enum MeshModelingTools.EHoleFillToolActions
enum class EHoleFillToolActions : uint8 {
	NoAction = 0,
	SelectAll = 1,
	ClearSelection = 2,
	EHoleFillToolActions_MAX = 3
};

// Enum MeshModelingTools.EMeshAttributePaintToolActions
enum class EMeshAttributePaintToolActions : uint8 {
	NoAction = 0,
	EMeshAttributePaintToolActions_MAX = 1
};

// Enum MeshModelingTools.EPlaneBrushSideMode
enum class EPlaneBrushSideMode : uint8 {
	BothSides = 0,
	PushDown = 1,
	PullTowards = 2,
	EPlaneBrushSideMode_MAX = 3
};

// Enum MeshModelingTools.EMeshEditingMaterialModes
enum class EMeshEditingMaterialModes : uint8 {
	ExistingMaterial = 0,
	Diffuse = 1,
	Grey = 2,
	Soft = 3,
	TangentNormal = 4,
	Custom = 5,
	EMeshEditingMaterialModes_MAX = 6
};

// Enum MeshModelingTools.ESetMeshMaterialMode
enum class ESetMeshMaterialMode : uint8 {
	KeepOriginal = 0,
	Checkerboard = 1,
	Override = 2,
	ESetMeshMaterialMode_MAX = 3
};

// Enum MeshModelingTools.EMeshSculptFalloffType
enum class EMeshSculptFalloffType : uint8 {
	Smooth = 0,
	Linear = 1,
	Inverse = 2,
	Round = 3,
	BoxSmooth = 4,
	BoxLinear = 5,
	BoxInverse = 6,
	BoxRound = 7,
	LastValue = 8,
	EMeshSculptFalloffType_MAX = 9
};

// Enum MeshModelingTools.EMeshFacesColorMode
enum class EMeshFacesColorMode : uint8 {
	None = 0,
	ByGroup = 1,
	ByMaterialID = 2,
	ByUVIsland = 3,
	EMeshFacesColorMode_MAX = 4
};

// Enum MeshModelingTools.EMeshSelectionToolPrimaryMode
enum class EMeshSelectionToolPrimaryMode : uint8 {
	Brush = 0,
	VolumetricBrush = 1,
	AngleFiltered = 2,
	Visible = 3,
	AllConnected = 4,
	AllInGroup = 5,
	ByMaterial = 6,
	ByUVIsland = 7,
	AllWithinAngle = 8,
	EMeshSelectionToolPrimaryMode_MAX = 9
};

// Enum MeshModelingTools.EMeshSelectionToolActions
enum class EMeshSelectionToolActions : uint8 {
	NoAction = 0,
	SelectAll = 1,
	ClearSelection = 2,
	InvertSelection = 3,
	GrowSelection = 4,
	ShrinkSelection = 5,
	ExpandToConnected = 6,
	SelectLargestComponentByTriCount = 7,
	SelectLargestComponentByArea = 8,
	OptimizeSelection = 9,
	DeleteSelected = 10,
	DisconnectSelected = 11,
	SeparateSelected = 12,
	FlipSelected = 13,
	CreateGroup = 14,
	CycleSelectionMode = 15,
	CycleViewMode = 16,
	EMeshSelectionToolActions_MAX = 17
};

// Enum MeshModelingTools.ENonlinearOperationType
enum class ENonlinearOperationType : uint8 {
	Bend = 0,
	Flare = 1,
	Twist = 2,
	ENonlinearOperationType_MAX = 3
};

// Enum MeshModelingTools.EMeshVertexSculptBrushType
enum class EMeshVertexSculptBrushType : uint8 {
	Move = 0,
	PullKelvin = 1,
	PullSharpKelvin = 2,
	Smooth = 3,
	SmoothFill = 4,
	Offset = 5,
	SculptView = 6,
	SculptMax = 7,
	Inflate = 8,
	ScaleKelvin = 9,
	Pinch = 10,
	TwistKelvin = 11,
	Flatten = 12,
	Plane = 13,
	PlaneViewAligned = 14,
	FixedPlane = 15,
	LastValue = 16,
	EMeshVertexSculptBrushType_MAX = 17
};

// Enum MeshModelingTools.EMirrorToolAction
enum class EMirrorToolAction : uint8 {
	NoAction = 0,
	ShiftToCenter = 1,
	Left = 2,
	Right = 3,
	Up = 4,
	Down = 5,
	Forward = 6,
	Backward = 7,
	EMirrorToolAction_MAX = 8
};

// Enum MeshModelingTools.EMirrorCtrlClickBehavior
enum class EMirrorCtrlClickBehavior : uint8 {
	Reposition = 0,
	RepositionAndReorient = 1,
	EMirrorCtrlClickBehavior_MAX = 2
};

// Enum MeshModelingTools.EMirrorOperationMode
enum class EMirrorOperationMode : uint8 {
	MirrorAndAppend = 0,
	MirrorExisting = 1,
	EMirrorOperationMode_MAX = 2
};

// Enum MeshModelingTools.EMirrorSaveMode
enum class EMirrorSaveMode : uint8 {
	UpdateAssets = 0,
	CreateNewAssets = 1,
	EMirrorSaveMode_MAX = 2
};

// Enum MeshModelingTools.EOffsetMeshToolOffsetType
enum class EOffsetMeshToolOffsetType : uint8 {
	Iterative = 0,
	Implicit = 1,
	EOffsetMeshToolOffsetType_MAX = 2
};

// Enum MeshModelingTools.EMaterialBoundaryConstraint
enum class EMaterialBoundaryConstraint : uint8 {
	Fixed = 7,
	Refine = 5,
	Free = 1,
	Ignore = 0,
	EMaterialBoundaryConstraint_MAX = 8
};

// Enum MeshModelingTools.EGroupBoundaryConstraint
enum class EGroupBoundaryConstraint : uint8 {
	Fixed = 7,
	Refine = 5,
	Free = 1,
	Ignore = 0,
	EGroupBoundaryConstraint_MAX = 8
};

// Enum MeshModelingTools.EMeshBoundaryConstraint
enum class EMeshBoundaryConstraint : uint8 {
	Fixed = 7,
	Refine = 5,
	Free = 1,
	EMeshBoundaryConstraint_MAX = 8
};

// Enum MeshModelingTools.EOcclusionCalculationUIMode
enum class EOcclusionCalculationUIMode : uint8 {
	GeneralizedWindingNumber = 0,
	RaycastOcclusionSamples = 1,
	EOcclusionCalculationUIMode_MAX = 2
};

// Enum MeshModelingTools.EOcclusionTriangleSamplingUIMode
enum class EOcclusionTriangleSamplingUIMode : uint8 {
	Vertices = 0,
	VerticesAndCentroids = 1,
	EOcclusionTriangleSamplingUIMode_MAX = 2
};

// Enum MeshModelingTools.ERevolvePropertiesQuadSplit
enum class ERevolvePropertiesQuadSplit : uint8 {
	Uniform = 0,
	ShortestDiagonal = 1,
	ERevolvePropertiesQuadSplit_MAX = 2
};

// Enum MeshModelingTools.ERevolvePropertiesPolygroupMode
enum class ERevolvePropertiesPolygroupMode : uint8 {
	Single = 0,
	PerFace = 1,
	PerStep = 2,
	AccordingToProfileCurve = 3,
	ERevolvePropertiesPolygroupMode_MAX = 4
};

// Enum MeshModelingTools.ERevolvePropertiesCapFillMode
enum class ERevolvePropertiesCapFillMode : uint8 {
	None = 0,
	Delaunay = 1,
	EarClipping = 2,
	CenterFan = 3,
	ERevolvePropertiesCapFillMode_MAX = 4
};

// Enum MeshModelingTools.EProjectedHullAxis
enum class EProjectedHullAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	SmallestBoxDimension = 3,
	SmallestVolume = 4,
	EProjectedHullAxis_MAX = 5
};

// Enum MeshModelingTools.ECollisionGeometryType
enum class ECollisionGeometryType : uint8 {
	KeepExisting = 0,
	AlignedBoxes = 1,
	OrientedBoxes = 2,
	MinimalSpheres = 3,
	Capsules = 4,
	ConvexHulls = 5,
	SweptHulls = 6,
	MinVolume = 10,
	None = 11,
	ECollisionGeometryType_MAX = 12
};

// Enum MeshModelingTools.ESetCollisionGeometryInputMode
enum class ESetCollisionGeometryInputMode : uint8 {
	CombineAll = 0,
	PerInputObject = 1,
	PerMeshComponent = 2,
	PerMeshGroup = 3,
	ESetCollisionGeometryInputMode_MAX = 4
};

// Enum MeshModelingTools.ESmoothMeshToolSmoothType
enum class ESmoothMeshToolSmoothType : uint8 {
	Iterative = 0,
	Implicit = 1,
	Diffusion = 2,
	ESmoothMeshToolSmoothType_MAX = 3
};

// Enum MeshModelingTools.ETransformMeshesSnapDragRotationMode
enum class ETransformMeshesSnapDragRotationMode : uint8 {
	Ignore = 0,
	Align = 1,
	AlignFlipped = 2,
	LastValue = 3,
	ETransformMeshesSnapDragRotationMode_MAX = 4
};

// Enum MeshModelingTools.ETransformMeshesSnapDragSource
enum class ETransformMeshesSnapDragSource : uint8 {
	ClickPoint = 0,
	Pivot = 1,
	LastValue = 2,
	ETransformMeshesSnapDragSource_MAX = 3
};

// Enum MeshModelingTools.ETransformMeshesTransformMode
enum class ETransformMeshesTransformMode : uint8 {
	SharedGizmo = 0,
	SharedGizmoLocal = 1,
	PerObjectGizmo = 2,
	LastValue = 3,
	ETransformMeshesTransformMode_MAX = 4
};

// ScriptStruct MeshModelingTools.PhysicsConvexData
// Size: 0x38 (Inherited: 0x00)
struct FPhysicsConvexData {
	int32_t NumVertices; // 0x00(0x04)
	int32_t NumFaces; // 0x04(0x04)
	struct FKShapeElem Element; // 0x08(0x30)
};

// ScriptStruct MeshModelingTools.PhysicsCapsuleData
// Size: 0x70 (Inherited: 0x00)
struct FPhysicsCapsuleData {
	float Radius; // 0x00(0x04)
	float Length; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FKShapeElem Element; // 0x40(0x30)
};

// ScriptStruct MeshModelingTools.PhysicsBoxData
// Size: 0x70 (Inherited: 0x00)
struct FPhysicsBoxData {
	struct FVector Dimensions; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x30)
	struct FKShapeElem Element; // 0x40(0x30)
};

// ScriptStruct MeshModelingTools.PhysicsSphereData
// Size: 0x70 (Inherited: 0x00)
struct FPhysicsSphereData {
	float Radius; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)
	struct FKShapeElem Element; // 0x40(0x30)
};

// ScriptStruct MeshModelingTools.PerlinLayerProperties
// Size: 0x08 (Inherited: 0x00)
struct FPerlinLayerProperties {
	float Frequency; // 0x00(0x04)
	float Intensity; // 0x04(0x04)
};

// ScriptStruct MeshModelingTools.EditPivotTarget
// Size: 0x10 (Inherited: 0x00)
struct FEditPivotTarget {
	struct UTransformProxy* TransformProxy; // 0x00(0x08)
	struct UTransformGizmo* TransformGizmo; // 0x08(0x08)
};

// ScriptStruct MeshModelingTools.TransformMeshesTarget
// Size: 0x10 (Inherited: 0x00)
struct FTransformMeshesTarget {
	struct UTransformProxy* TransformProxy; // 0x00(0x08)
	struct UTransformGizmo* TransformGizmo; // 0x08(0x08)
};

