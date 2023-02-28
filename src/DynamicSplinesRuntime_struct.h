// Enum DynamicSplinesRuntime.EDynamicSplineUsageBits
enum class EDynamicSplineUsageBits : uint8 {
	None = 0,
	Positions = 1,
	Normals = 2,
	Tangents = 4,
	WorldSpace = 8,
	EDynamicSplineUsageBits_MAX = 9
};

// Enum DynamicSplinesRuntime.ESplineInterpMode
enum class ESplineInterpMode : uint8 {
	Auto = 0,
	AutoClamped = 1,
	User = 2,
	Linear = 3,
	Constant = 4,
	Unknown = 5,
	ESplineInterpMode_MAX = 6
};

// Enum DynamicSplinesRuntime.ESplineType
enum class ESplineType : uint8 {
	None = 0,
	StaticMesh = 1,
	Skeletal = 2,
	ESplineType_MAX = 3
};

// ScriptStruct DynamicSplinesRuntime.SkinnedAttachmentKey
// Size: 0x10 (Inherited: 0x00)
struct FSkinnedAttachmentKey {
	struct UDynamicSplineSet* ParentSplineSet; // 0x00(0x08)
	struct USkeletalMeshComponent* HostMesh; // 0x08(0x08)
};

// ScriptStruct DynamicSplinesRuntime.AttachmentKey
// Size: 0x10 (Inherited: 0x00)
struct FAttachmentKey {
	struct UDynamicSplineSet* ParentSplineSet; // 0x00(0x08)
	struct UStaticMeshComponent* HostMesh; // 0x08(0x08)
};

// ScriptStruct DynamicSplinesRuntime.DynamicSplineUsage
// Size: 0x08 (Inherited: 0x00)
struct FDynamicSplineUsage {
	int32_t Index; // 0x00(0x04)
	char UsageFlags; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct DynamicSplinesRuntime.DynamicSpline
// Size: 0x40 (Inherited: 0x00)
struct FDynamicSpline {
	struct TArray<struct FControlPoint> ControlPoints; // 0x00(0x10)
	struct TArray<struct FNamedBoneInfluences> ControlPointInfluences; // 0x10(0x10)
	struct TArray<float> Keys; // 0x20(0x10)
	struct TArray<enum class ESplineInterpMode> InterpModes; // 0x30(0x10)
};

// ScriptStruct DynamicSplinesRuntime.NamedBoneInfluences
// Size: 0x90 (Inherited: 0x00)
struct FNamedBoneInfluences {
	float Weights[0xc]; // 0x00(0x30)
	struct FName Names[0xc]; // 0x30(0x60)
};

// ScriptStruct DynamicSplinesRuntime.ControlPoint
// Size: 0x40 (Inherited: 0x00)
struct FControlPoint {
	struct FVector4 Position; // 0x00(0x10)
	struct FVector4 Normal; // 0x10(0x10)
	struct FVector4 ArriveTangent; // 0x20(0x10)
	struct FVector4 LeaveTangent; // 0x30(0x10)
};

