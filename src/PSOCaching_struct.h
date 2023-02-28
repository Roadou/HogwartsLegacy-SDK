// Enum PSOCaching.EPSOCachingLevelMode
enum class EPSOCachingLevelMode : uint8 {
	Regular = 0,
	DebugFast = 1,
	PredefinedAssets = 2,
	EPSOCachingLevelMode_MAX = 3
};

// Enum PSOCaching.EPSOCachePreviewMode
enum class EPSOCachePreviewMode : uint8 {
	FrameCount = 0,
	Time = 1,
	EPSOCachePreviewMode_MAX = 2
};

// ScriptStruct PSOCaching.PreviewAssetTypeData
// Size: 0x20 (Inherited: 0x00)
struct FPreviewAssetTypeData {
	struct FDelegate ActivateDelegate; // 0x00(0x10)
	struct FDelegate ResetDelegate; // 0x10(0x10)
};

