// Enum ModelingComponents.EBaseCreateFromSelectedTargetType
enum class EBaseCreateFromSelectedTargetType : uint8 {
	NewAsset = 0,
	FirstInputAsset = 1,
	LastInputAsset = 2,
	EBaseCreateFromSelectedTargetType_MAX = 3
};

// Enum ModelingComponents.EDynamicMeshTangentCalcType
enum class EDynamicMeshTangentCalcType : uint8 {
	NoTangents = 0,
	AutoCalculated = 1,
	ExternallyCalculated = 2,
	EDynamicMeshTangentCalcType_MAX = 3
};

// Enum ModelingComponents.EMultiTransformerMode
enum class EMultiTransformerMode : uint8 {
	DefaultGizmo = 1,
	QuickAxisTranslation = 2,
	EMultiTransformerMode_MAX = 3
};

// Enum ModelingComponents.EHandleSourcesMethod
enum class EHandleSourcesMethod : uint8 {
	DeleteSources = 0,
	HideSources = 1,
	KeepSources = 2,
	EHandleSourcesMethod_MAX = 3
};

// Enum ModelingComponents.ESpaceCurveControlPointFalloffType
enum class ESpaceCurveControlPointFalloffType : uint8 {
	Linear = 0,
	Smooth = 1,
	ESpaceCurveControlPointFalloffType_MAX = 2
};

// Enum ModelingComponents.ESpaceCurveControlPointOriginMode
enum class ESpaceCurveControlPointOriginMode : uint8 {
	Shared = 0,
	First = 1,
	Last = 2,
	ESpaceCurveControlPointOriginMode_MAX = 3
};

// Enum ModelingComponents.ESpaceCurveControlPointTransformMode
enum class ESpaceCurveControlPointTransformMode : uint8 {
	Shared = 0,
	PerVertex = 1,
	ESpaceCurveControlPointTransformMode_MAX = 2
};

// Enum ModelingComponents.EUVLayoutPreviewSide
enum class EUVLayoutPreviewSide : uint8 {
	Left = 0,
	Right = 1,
	EUVLayoutPreviewSide_MAX = 2
};

// ScriptStruct ModelingComponents.RenderableTriangle
// Size: 0x78 (Inherited: 0x00)
struct FRenderableTriangle {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FRenderableTriangleVertex Vertex0; // 0x08(0x24)
	struct FRenderableTriangleVertex Vertex1; // 0x2c(0x24)
	struct FRenderableTriangleVertex Vertex2; // 0x50(0x24)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ModelingComponents.RenderableTriangleVertex
// Size: 0x24 (Inherited: 0x00)
struct FRenderableTriangleVertex {
	struct FVector Position; // 0x00(0x0c)
	struct FVector2D UV; // 0x0c(0x08)
	struct FVector Normal; // 0x14(0x0c)
	struct FColor Color; // 0x20(0x04)
};

