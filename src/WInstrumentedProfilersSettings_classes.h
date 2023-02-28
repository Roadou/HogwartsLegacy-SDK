// Class WInstrumentedProfilersSettings.WExternalProfilersSettings
// Size: 0x40 (Inherited: 0x28)
struct UWExternalProfilersSettings : UObject {
	enum class EWInstrumentedProfilerAutomatedResumeSettings AutomatedResume; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FWInstrumentedProfilerCategoryAvailability> Categories; // 0x30(0x10)
};

// Class WInstrumentedProfilersSettings.WTelemetrySettings
// Size: 0x68 (Inherited: 0x28)
struct UWTelemetrySettings : UObject {
	enum class EWInstrumentedProfilerAutomatedResumeSettings AutomatedResume; // 0x28(0x04)
	bool bEnableTelemetry; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t TelemetrySizeInKB; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString ConnectionAddress; // 0x38(0x10)
	struct TArray<struct FWInstrumentedProfilerCategoryAvailability> Categories; // 0x48(0x10)
	bool bBreakOnMismatchedZone; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t TelemetryMaxThreadCount; // 0x5c(0x04)
	int32_t TelemetryMaxTimeSpanTrackCount; // 0x60(0x04)
	bool bEnableContextSwitches; // 0x64(0x01)
	bool bEnableMessages; // 0x65(0x01)
	bool bEnableOutputDebugInfo; // 0x66(0x01)
	bool bBreakOnWarning; // 0x67(0x01)
};

