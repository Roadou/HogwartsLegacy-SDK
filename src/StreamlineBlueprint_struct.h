// Enum StreamlineBlueprint.UStreamlineDLSSGMode
enum class UStreamlineDLSSGMode : uint8 {
	Off = 0,
	On = 1,
	UStreamlineDLSSGMode_MAX = 2
};

// Enum StreamlineBlueprint.UStreamlineDLSSGSupport
enum class UStreamlineDLSSGSupport : uint8 {
	Supported = 0,
	NotSupported = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedByPlatformAtBuildTime = 5,
	NotSupportedIncompatibleAPICaptureToolActive = 6,
	UStreamlineDLSSGSupport_MAX = 7
};

// Enum StreamlineBlueprint.UStreamlineReflexSupport
enum class UStreamlineReflexSupport : uint8 {
	Supported = 0,
	NotSupported = 1,
	UStreamlineReflexSupport_MAX = 2
};

// Enum StreamlineBlueprint.UStreamlineReflexMode
enum class UStreamlineReflexMode : uint8 {
	Disabled = 0,
	Enabled = 1,
	EnabledPlusBoost = 3,
	UStreamlineReflexMode_MAX = 4
};

