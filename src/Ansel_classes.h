// Class Ansel.AnselFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnselFunctionLibrary : UBlueprintFunctionLibrary {

	void StopSession(struct UObject* WorldContextObject); // Function Ansel.AnselFunctionLibrary.StopSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f38dc0
	void StartSession(struct UObject* WorldContextObject); // Function Ansel.AnselFunctionLibrary.StartSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f38d40
	void SetUIControlVisibility(struct UObject* WorldContextObject, enum class EUIControlEffectTarget UIControlTarget, bool bIsVisible); // Function Ansel.AnselFunctionLibrary.SetUIControlVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f38c40
	void SetSettleFrames(int32_t NumSettleFrames); // Function Ansel.AnselFunctionLibrary.SetSettleFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f38bc0
	void SetIsPhotographyAllowed(bool bIsPhotographyAllowed); // Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f38b40
	void SetCameraMovementSpeed(float TranslationSpeed); // Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f38ac0
	void SetCameraConstraintDistance(float MaxCameraDistance); // Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f38a40
	void SetCameraConstraintCameraSize(float CameraSize); // Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f389c0
	void SetAutoPostprocess(bool bShouldAutoPostprocess); // Function Ansel.AnselFunctionLibrary.SetAutoPostprocess // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f38940
	void SetAutoPause(bool bShouldAutoPause); // Function Ansel.AnselFunctionLibrary.SetAutoPause // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f388c0
	bool IsPhotographyAvailable(); // Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f38890
	bool IsPhotographyAllowed(); // Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f38860
	void ConstrainCameraByGeometry(struct UObject* WorldContextObject, struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector& OutCameraLocation); // Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1f386a0
	void ConstrainCameraByDistance(struct UObject* WorldContextObject, struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector& OutCameraLocation, float MaxDistance); // Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1f384a0
};

