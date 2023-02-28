// Enum MovieRenderPipelineCore.EMoviePipelineEncodeQuality
enum class EMoviePipelineEncodeQuality : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	EMoviePipelineEncodeQuality_MAX = 4
};

// Enum MovieRenderPipelineCore.FCPXMLExportDataSource
enum class FCPXMLExportDataSource : uint8 {
	OutputMetadata = 0,
	SequenceData = 1,
	FCPXMLExportDataSource_MAX = 2
};

// Enum MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
enum class EMoviePipelineTextureStreamingMethod : uint8 {
	None = 0,
	Disabled = 1,
	FullyLoad = 2,
	EMoviePipelineTextureStreamingMethod_MAX = 3
};

// Enum MovieRenderPipelineCore.EMoviePipelineShutterTiming
enum class EMoviePipelineShutterTiming : uint8 {
	FrameOpen = 0,
	FrameCenter = 1,
	FrameClose = 2,
	EMoviePipelineShutterTiming_MAX = 3
};

// Enum MovieRenderPipelineCore.EMovieRenderShotState
enum class EMovieRenderShotState : uint8 {
	Uninitialized = 0,
	WarmingUp = 1,
	MotionBlur = 2,
	Rendering = 3,
	Finished = 4,
	EMovieRenderShotState_MAX = 5
};

// Enum MovieRenderPipelineCore.EMovieRenderPipelineState
enum class EMovieRenderPipelineState : uint8 {
	Uninitialized = 0,
	ProducingFrames = 1,
	Finalize = 2,
	Export = 3,
	Finished = 4,
	EMovieRenderPipelineState_MAX = 5
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineOutputData
// Size: 0x28 (Inherited: 0x00)
struct FMoviePipelineOutputData {
	struct UMoviePipeline* Pipeline; // 0x00(0x08)
	struct UMoviePipelineExecutorJob* Job; // 0x08(0x08)
	bool bSuccess; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FMoviePipelineShotOutputData> ShotData; // 0x18(0x10)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineShotOutputData
// Size: 0x58 (Inherited: 0x00)
struct FMoviePipelineShotOutputData {
	struct TWeakObjectPtr<struct UMoviePipelineExecutorShot> Shot; // 0x00(0x08)
	struct TMap<struct FMoviePipelinePassIdentifier, struct FMoviePipelineRenderPassOutputData> RenderPassData; // 0x08(0x50)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelinePassIdentifier
// Size: 0x10 (Inherited: 0x00)
struct FMoviePipelinePassIdentifier {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineRenderPassOutputData
// Size: 0x10 (Inherited: 0x00)
struct FMoviePipelineRenderPassOutputData {
	struct TArray<struct FString> FilePaths; // 0x00(0x10)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineFilenameResolveParams
// Size: 0x100 (Inherited: 0x00)
struct FMoviePipelineFilenameResolveParams {
	int32_t FrameNumber; // 0x00(0x04)
	int32_t FrameNumberShot; // 0x04(0x04)
	int32_t FrameNumberRel; // 0x08(0x04)
	int32_t FrameNumberShotRel; // 0x0c(0x04)
	struct FString CameraNameOverride; // 0x10(0x10)
	struct FString ShotNameOverride; // 0x20(0x10)
	int32_t ZeroPadFrameNumberCount; // 0x30(0x04)
	bool bForceRelativeFrameNumbers; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct TMap<struct FString, struct FString> FileNameFormatOverrides; // 0x38(0x50)
	struct TMap<struct FString, struct FString> FileMetadata; // 0x88(0x50)
	struct FDateTime InitializationTime; // 0xd8(0x08)
	int32_t InitializationVersion; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UMoviePipelineExecutorJob* Job; // 0xe8(0x08)
	struct UMoviePipelineExecutorShot* ShotOverride; // 0xf0(0x08)
	int32_t AdditionalFrameNumberOffset; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineFormatArgs
// Size: 0xa8 (Inherited: 0x00)
struct FMoviePipelineFormatArgs {
	struct TMap<struct FString, struct FString> FilenameArguments; // 0x00(0x50)
	struct TMap<struct FString, struct FString> FileMetadata; // 0x50(0x50)
	struct UMoviePipelineExecutorJob* InJob; // 0xa0(0x08)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineCameraCutInfo
// Size: 0x98 (Inherited: 0x00)
struct FMoviePipelineCameraCutInfo {
	char pad_0[0x98]; // 0x00(0x98)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
// Size: 0x28 (Inherited: 0x00)
struct FMoviePipelineSegmentWorkMetrics {
	struct FString SegmentName; // 0x00(0x10)
	int32_t OutputFrameIndex; // 0x10(0x04)
	int32_t TotalOutputFrameCount; // 0x14(0x04)
	int32_t OutputSubSampleIndex; // 0x18(0x04)
	int32_t TotalSubSampleCount; // 0x1c(0x04)
	int32_t EngineWarmUpFrameIndex; // 0x20(0x04)
	int32_t TotalEngineWarmUpFrameCount; // 0x24(0x04)
};

