// ScriptStruct OpenColorIO.OpenColorIODisplayConfiguration
// Size: 0x60 (Inherited: 0x00)
struct FOpenColorIODisplayConfiguration {
	bool bIsEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FOpenColorIOColorConversionSettings ColorConfiguration; // 0x08(0x58)
};

// ScriptStruct OpenColorIO.OpenColorIOColorConversionSettings
// Size: 0x58 (Inherited: 0x00)
struct FOpenColorIOColorConversionSettings {
	struct UOpenColorIOConfiguration* ConfigurationSource; // 0x00(0x08)
	struct FOpenColorIOColorSpace SourceColorSpace; // 0x08(0x28)
	struct FOpenColorIOColorSpace DestinationColorSpace; // 0x30(0x28)
};

// ScriptStruct OpenColorIO.OpenColorIOColorSpace
// Size: 0x28 (Inherited: 0x00)
struct FOpenColorIOColorSpace {
	struct FString ColorSpaceName; // 0x00(0x10)
	int32_t ColorSpaceIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString FamilyName; // 0x18(0x10)
};

