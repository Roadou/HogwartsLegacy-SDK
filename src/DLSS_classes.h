// Class DLSS.DLSSOverrideSettings
// Size: 0x30 (Inherited: 0x28)
struct UDLSSOverrideSettings : UObject {
	enum class EDLSSSettingOverride EnableDLSSInEditorViewportsOverride; // 0x28(0x01)
	enum class EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x29(0x01)
	enum class EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride; // 0x2a(0x01)
	bool bShowDLSSIncompatiblePluginsToolsWarnings; // 0x2b(0x01)
	enum class EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class DLSS.DLSSSettings
// Size: 0x60 (Inherited: 0x28)
struct UDLSSSettings : UObject {
	bool bEnableDLSSD3D12; // 0x28(0x01)
	bool bEnableDLSSD3D11; // 0x29(0x01)
	bool bEnableDLSSVulkan; // 0x2a(0x01)
	bool bEnableDLSSInEditorViewports; // 0x2b(0x01)
	bool bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x2c(0x01)
	bool bEnableDLSSInPlayInEditorViewports; // 0x2d(0x01)
	bool bShowDLSSSDebugOnScreenMessages; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
	struct FString GenericDLSSBinaryPath; // 0x30(0x10)
	bool bGenericDLSSBinaryExists; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	uint32_t NVIDIANGXApplicationId; // 0x44(0x04)
	struct FString CustomDLSSBinaryPath; // 0x48(0x10)
	bool bCustomDLSSBinaryExists; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

