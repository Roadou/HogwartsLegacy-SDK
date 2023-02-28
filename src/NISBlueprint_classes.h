// Class NISBlueprint.NISLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNISLibrary : UBlueprintFunctionLibrary {

	void SetNISSharpness(float Sharpness); // Function NISBlueprint.NISLibrary.SetNISSharpness // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x2391c50
	void SetNISMode(enum class UNISMode NISMode); // Function NISBlueprint.NISLibrary.SetNISMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x2391be0
	void SetNISCustomScreenPercentage(float CustomScreenPercentage); // Function NISBlueprint.NISLibrary.SetNISCustomScreenPercentage // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x2391b60
	bool IsNISSupported(); // Function NISBlueprint.NISLibrary.IsNISSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x23918d0
	bool IsNISModeSupported(enum class UNISMode NISMode); // Function NISBlueprint.NISLibrary.IsNISModeSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2391ae0
	struct TArray<enum class UNISMode> GetSupportedNISModes(); // Function NISBlueprint.NISLibrary.GetSupportedNISModes // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2391a60
	void GetNISScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage); // Function NISBlueprint.NISLibrary.GetNISScreenPercentageRange // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2391980
	float GetNISRecommendedScreenPercentage(enum class UNISMode NISMode); // Function NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2391900
	enum class UNISMode GetDefaultNISMode(); // Function NISBlueprint.NISLibrary.GetDefaultNISMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x23918d0
};

