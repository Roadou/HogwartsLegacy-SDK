// Class XeSSBlueprint.XeSSBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXeSSBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetXeSSQualityMode(enum class EXeSSQualityMode QualityMode); // Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x2327130
	bool IsXeSSSupported(); // Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2327100
	enum class EXeSSQualityMode GetXeSSQualityMode(); // Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x23270d0
	struct TArray<enum class EXeSSQualityMode> GetSupportedXeSSQualityModes(); // Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2327050
	enum class EXeSSQualityMode GetDefaultXeSSQualityMode(struct FIntPoint ScreenResolution); // Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2326fd0
};

