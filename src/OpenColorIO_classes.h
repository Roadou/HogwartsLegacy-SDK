// Class OpenColorIO.OpenColorIOBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOpenColorIOBlueprintLibrary : UBlueprintFunctionLibrary {

	bool ApplyColorSpaceTransform(struct UObject* WorldContextObject, struct FOpenColorIOColorConversionSettings& ConversionSettings, struct UTexture* InputTexture, struct UTextureRenderTarget2D* OutputRenderTarget); // Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x238b450
};

// Class OpenColorIO.OpenColorIOColorTransform
// Size: 0x98 (Inherited: 0x28)
struct UOpenColorIOColorTransform : UObject {
	struct UOpenColorIOConfiguration* ConfigurationOwner; // 0x28(0x08)
	struct FString SourceColorSpace; // 0x30(0x10)
	struct FString DestinationColorSpace; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)
};

// Class OpenColorIO.OpenColorIOConfiguration
// Size: 0x80 (Inherited: 0x28)
struct UOpenColorIOConfiguration : UObject {
	struct FFilePath ConfigurationFile; // 0x28(0x10)
	struct TArray<struct FOpenColorIOColorSpace> DesiredColorSpaces; // 0x38(0x10)
	struct TArray<struct UOpenColorIOColorTransform*> ColorTransforms; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)
};

// Class OpenColorIO.OpenColorIODisplayExtensionWrapper
// Size: 0x38 (Inherited: 0x28)
struct UOpenColorIODisplayExtensionWrapper : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void SetSceneExtensionIsActiveFunctions(struct TArray<struct FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x238ba20
	void SetSceneExtensionIsActiveFunction(struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x238b930
	void SetOpenColorIOConfiguration(struct FOpenColorIODisplayConfiguration InDisplayConfiguration); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration // (Final|Native|Public|BlueprintCallable) // @ game+0x238b810
	void RemoveSceneExtension(); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension // (Final|Native|Public|BlueprintCallable) // @ game+0x238b7f0
	struct UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(struct FOpenColorIODisplayConfiguration InDisplayConfiguration, struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x238b620
};

