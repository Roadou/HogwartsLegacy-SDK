// ScriptStruct LoadingScreen.LoadingScreenDescription
// Size: 0xa8 (Inherited: 0x00)
struct FLoadingScreenDescription {
	float MinimumLoadingScreenDisplayTime; // 0x00(0x04)
	bool bAutoCompleteWhenLoadingCompletes; // 0x04(0x01)
	bool bMoviesAreSkippable; // 0x05(0x01)
	bool bWaitForManualStop; // 0x06(0x01)
	enum class EMoviePlaybackType PlaybackType; // 0x07(0x01)
	bool bShowUIOverlay; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText LoadingText; // 0x10(0x18)
	struct FSlateFontInfo LoadingFont; // 0x28(0x58)
	struct TArray<struct FString> MoviePaths; // 0x80(0x10)
	struct TArray<struct FSoftObjectPath> Images; // 0x90(0x10)
	enum class EStretch ImageStretch; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

