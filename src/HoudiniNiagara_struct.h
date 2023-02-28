// Enum HoudiniNiagara.EHoudiniPointCacheFileType
enum class EHoudiniPointCacheFileType : uint8 {
	Invalid = 0,
	CSV = 1,
	JSON = 2,
	BJSON = 3,
	EHoudiniPointCacheFileType_MAX = 4
};

// Enum HoudiniNiagara.EHoudiniAttributes
enum class EHoudiniAttributes : uint8 {
	HOUDINI_ATTR_BEGIN = 0,
	Position = 0,
	Normal = 1,
	Time = 2,
	POINTID = 3,
	LIFE = 4,
	Color = 5,
	Alpha = 6,
	Velocity = 7,
	Type = 8,
	Impulse = 9,
	Age = 10,
	HOUDINI_ATTR_SIZE = 11,
	HOUDINI_ATTR_END = 10,
	EHoudiniAttributes_MAX = 12
};

// ScriptStruct HoudiniNiagara.PointIndexes
// Size: 0x10 (Inherited: 0x00)
struct FPointIndexes {
	struct TArray<int32_t> SampleIndexes; // 0x00(0x10)
};

// ScriptStruct HoudiniNiagara.HoudiniEvent
// Size: 0x48 (Inherited: 0x00)
struct FHoudiniEvent {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
	float Impulse; // 0x18(0x04)
	struct FVector Velocity; // 0x1c(0x0c)
	int32_t POINTID; // 0x28(0x04)
	float Time; // 0x2c(0x04)
	float LIFE; // 0x30(0x04)
	struct FLinearColor Color; // 0x34(0x10)
	int32_t Type; // 0x44(0x04)
};

