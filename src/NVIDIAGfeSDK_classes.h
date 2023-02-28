// Class NVIDIAGfeSDK.HighlightsFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHighlightsFunctionLibrary : UBlueprintFunctionLibrary {

	void Poll(); // Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x206a3a0
	void ChekIfHighlightsAvailable(struct FGfeSDKCreateResponse& InitProperties, bool& VideoGranted, bool& ScreenshotsGranted, enum class EGfeSDKPermission& Video, enum class EGfeSDKPermission& Screenshots); // Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2069450
};

// Class NVIDIAGfeSDK.InitHighlights
// Size: 0x100 (Inherited: 0x30)
struct UInitHighlights : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0xb0]; // 0x50(0xb0)

	struct UInitHighlights* InitHighlights(struct UObject* WorldContextObject, struct FString InGameName, bool Video, bool Screenshots); // Function NVIDIAGfeSDK.InitHighlights.InitHighlights // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x206a1f0
};

// Class NVIDIAGfeSDK.HighlightsConfigureAsync
// Size: 0x78 (Inherited: 0x30)
struct UHighlightsConfigureAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UHighlightsConfigureAsync* HighlightsConfigure(struct UObject* WorldContextObject, struct FGfeSDKHighlightConfigParams& ConfigParams); // Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2069980
};

// Class NVIDIAGfeSDK.HighlightsOpenGroupAsync
// Size: 0xb8 (Inherited: 0x30)
struct UHighlightsOpenGroupAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x68]; // 0x50(0x68)

	struct UHighlightsOpenGroupAsync* HighlightsOpenGroup(struct UObject* WorldContextObject, struct FGfeSDKHighlightOpenGroupParams& Params); // Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2069c80
};

// Class NVIDIAGfeSDK.HighlightsCloseGroupAsync
// Size: 0x70 (Inherited: 0x30)
struct UHighlightsCloseGroupAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UHighlightsCloseGroupAsync* HighlightsCloseGroup(struct UObject* WorldContextObject, struct FString GroupId, bool& DestroyHighlights); // Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2069850
};

// Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync
// Size: 0x78 (Inherited: 0x30)
struct UHighlightsSetScreenshotAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UHighlightsSetScreenshotAsync* HighlightsSetScreenshot(struct UObject* WorldContextObject, struct FString GroupId, struct FString HighlightId); // Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2069ef0
};

// Class NVIDIAGfeSDK.HighlightsSetVideoAsync
// Size: 0x80 (Inherited: 0x30)
struct UHighlightsSetVideoAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UHighlightsSetVideoAsync* HighlightsSetVideo(struct UObject* WorldContextObject, struct FString GroupId, struct FString HighlightId, int32_t& StartDelta, int32_t& EndDelta); // Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x206a030
};

// Class NVIDIAGfeSDK.HighlightsSummaryAsync
// Size: 0x68 (Inherited: 0x30)
struct UHighlightsSummaryAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UHighlightsSummaryAsync* HighlightsOpenSummary(struct UObject* WorldContextObject, struct FGfeSDKHighlightSummaryParams& Params); // Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2069de0
};

// Class NVIDIAGfeSDK.HighlightsGetNumberAsync
// Size: 0x70 (Inherited: 0x30)
struct UHighlightsGetNumberAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UHighlightsGetNumberAsync* HighlightsGetNumberOfHighlights(struct UObject* WorldContextObject, struct FString GroupId, enum class EGfeSDKHighlightType& TagFilter, enum class EGfeSDKHighlightSignificance& SignificanceFilter); // Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2069b00
};

// Class NVIDIAGfeSDK.RequestPermissionsAsync
// Size: 0x68 (Inherited: 0x30)
struct URequestPermissionsAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct URequestPermissionsAsync* GFERequestPermissions(struct UObject* WorldContextObject, bool Video, bool Screenshots); // Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2069730
};

