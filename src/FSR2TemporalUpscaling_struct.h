// Enum FSR2TemporalUpscaling.EFSR2LandscapeHISMMode
enum class EFSR2LandscapeHISMMode : uint8 {
	Off = 0,
	AllStatic = 1,
	StaticWPO = 2,
	EFSR2LandscapeHISMMode_MAX = 3
};

// Enum FSR2TemporalUpscaling.EFSR2DeDitherMode
enum class EFSR2DeDitherMode : uint8 {
	Off = 0,
	Full = 1,
	HairOnly = 2,
	EFSR2DeDitherMode_MAX = 3
};

// Enum FSR2TemporalUpscaling.EFSR2HistoryFormat
enum class EFSR2HistoryFormat : uint8 {
	FloatRGBA = 0,
	FloatR11G11B10 = 1,
	EFSR2HistoryFormat_MAX = 2
};

// Enum FSR2TemporalUpscaling.EFSR2QualityMode
enum class EFSR2QualityMode : uint8 {
	Unused = 0,
	Quality = 1,
	Balanced = 2,
	Performance = 3,
	UltraPerformance = 4,
	EFSR2QualityMode_MAX = 5
};

