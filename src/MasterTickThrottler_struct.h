// ScriptStruct MasterTickThrottler.MasterTickThrottlerTracker
// Size: 0x38 (Inherited: 0x00)
struct FMasterTickThrottlerTracker {
	struct FMasterTickThrottlerSettings Settings; // 0x00(0x28)
	struct FDateTime LastKeepAlive; // 0x28(0x08)
	char bDisableThrottling : 1; // 0x30(0x01)
	char bHasKeepAliveInterface : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct MasterTickThrottler.MasterTickThrottlerSettings
// Size: 0x28 (Inherited: 0x00)
struct FMasterTickThrottlerSettings {
	float FullTickRadiusMeters; // 0x00(0x04)
	float FullTickInterval; // 0x04(0x04)
	float NoTickRadiusMeters; // 0x08(0x04)
	float NoTickInterval; // 0x0c(0x04)
	float KeepAliveInterval; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USceneComponent* ComparisonComponent; // 0x18(0x08)
	struct FMasterTickThrottlerSettingsAdvanced Advanced; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct MasterTickThrottler.MasterTickThrottlerSettingsAdvanced
// Size: 0x01 (Inherited: 0x00)
struct FMasterTickThrottlerSettingsAdvanced {
	char bUseXYDistance : 1; // 0x00(0x01)
	char bResponsiveIntervalChanges : 1; // 0x00(0x01)
	char bThrottleInEditor : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
};

