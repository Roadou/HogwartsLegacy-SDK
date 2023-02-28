// Class LoadingScreen.LoadingScreenSettings
// Size: 0x210 (Inherited: 0x38)
struct ULoadingScreenSettings : UDeveloperSettings {
	struct FLoadingScreenDescription StartupScreen; // 0x38(0xa8)
	struct FLoadingScreenDescription DefaultScreen; // 0xe0(0xa8)
	struct FSlateFontInfo TipFont; // 0x188(0x58)
	float TipWrapAt; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct TArray<struct FText> Tips; // 0x1e8(0x10)
	struct UMaterialInstance* SimpleLoadingScreenMaterialFront; // 0x1f8(0x08)
	struct UMaterialInstance* SimpleLoadingScreenMaterialBack; // 0x200(0x08)
	struct UMaterialInstance* LoadingScreenSpinnerMaterial; // 0x208(0x08)
};

