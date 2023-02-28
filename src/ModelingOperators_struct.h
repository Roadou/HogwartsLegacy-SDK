// Enum ModelingOperators.ECSGOperation
enum class ECSGOperation : uint8 {
	DifferenceAB = 0,
	DifferenceBA = 1,
	Intersect = 2,
	Union = 3,
	TrimA = 4,
	TrimB = 5,
	ECSGOperation_MAX = 6
};

// Enum ModelingOperators.ESplitNormalMethod
enum class ESplitNormalMethod : uint8 {
	UseExistingTopology = 0,
	FaceNormalThreshold = 1,
	FaceGroupID = 2,
	PerTriangle = 3,
	PerVertex = 4,
	ESplitNormalMethod_MAX = 5
};

// Enum ModelingOperators.ENormalCalculationMethod
enum class ENormalCalculationMethod : uint8 {
	AreaWeighted = 0,
	AngleWeighted = 1,
	AreaAngleWeighting = 2,
	ENormalCalculationMethod_MAX = 3
};

// Enum ModelingOperators.EHoleFillOpFillType
enum class EHoleFillOpFillType : uint8 {
	TriangleFan = 0,
	PolygonEarClipping = 1,
	Planar = 2,
	Minimal = 3,
	Smooth = 4,
	EHoleFillOpFillType_MAX = 5
};

// Enum ModelingOperators.ERemeshSmoothingType
enum class ERemeshSmoothingType : uint8 {
	Uniform = 0,
	Cotangent = 1,
	MeanValue = 2,
	ERemeshSmoothingType_MAX = 3
};

// Enum ModelingOperators.ERemeshType
enum class ERemeshType : uint8 {
	Standard = 0,
	FullPass = 1,
	NormalFlow = 2,
	ERemeshType_MAX = 3
};

// Enum ModelingOperators.EUVProjectionMethod
enum class EUVProjectionMethod : uint8 {
	Cube = 0,
	Cylinder = 1,
	Plane = 2,
	EUVProjectionMethod_MAX = 3
};

// Enum ModelingOperators.EMorphologyOperation
enum class EMorphologyOperation : uint8 {
	Dilate = 0,
	Contract = 1,
	Close = 2,
	Open = 3,
	EMorphologyOperation_MAX = 4
};

