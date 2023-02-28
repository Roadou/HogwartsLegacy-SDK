// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x78 (Inherited: 0x28)
struct UMaterialShaderQualitySettings : UObject {
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28(0x50)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x60 (Inherited: 0x28)
struct UShaderPlatformQualitySettings : UObject {
	struct FMaterialQualityOverrides QualityOverrides[0x4]; // 0x28(0x24)
	char pad_4C[0x14]; // 0x4c(0x14)
};

