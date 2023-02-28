// ScriptStruct PathRuntime.LinearizedSpline
// Size: 0x38 (Inherited: 0x00)
struct FLinearizedSpline {
	bool IsLooped; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FLinearizedSplinePoint> SplinePoints; // 0x08(0x10)
	float Length; // 0x18(0x04)
	struct FBox Bounds; // 0x1c(0x1c)
};

// ScriptStruct PathRuntime.LinearizedSplinePoint
// Size: 0x14 (Inherited: 0x00)
struct FLinearizedSplinePoint {
	struct FVector Position; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
	float TangentOffset; // 0x10(0x04)
};

// ScriptStruct PathRuntime.LinearizedPath
// Size: 0x68 (Inherited: 0x38)
struct FLinearizedPath : FLinearizedSpline {
	struct TArray<struct FLinearizedPathSplineAux> PathPointAux; // 0x38(0x10)
	struct TArray<struct FLinearizedPathBorderPoint> NegBorderPoints; // 0x48(0x10)
	struct TArray<struct FLinearizedPathBorderPoint> PosBorderPoints; // 0x58(0x10)
};

// ScriptStruct PathRuntime.LinearizedPathBorderPoint
// Size: 0x10 (Inherited: 0x00)
struct FLinearizedPathBorderPoint {
	struct FVector2D Position; // 0x00(0x08)
	int32_t FirstSplineIndex; // 0x08(0x04)
	int32_t LastSplineIndex; // 0x0c(0x04)
};

// ScriptStruct PathRuntime.LinearizedPathSplineAux
// Size: 0x10 (Inherited: 0x00)
struct FLinearizedPathSplineAux {
	int32_t BorderIndex[0x2]; // 0x00(0x08)
	float BorderExtent[0x2]; // 0x08(0x08)
};

// ScriptStruct PathRuntime.PathEditControl
// Size: 0x01 (Inherited: 0x00)
struct FPathEditControl {
	bool bMirrorExtent; // 0x00(0x01)
};

// ScriptStruct PathRuntime.PathExtent
// Size: 0x08 (Inherited: 0x00)
struct FPathExtent {
	float Neg; // 0x00(0x04)
	float Pos; // 0x04(0x04)
};

