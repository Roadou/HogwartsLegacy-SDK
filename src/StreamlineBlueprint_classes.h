// Class StreamlineBlueprint.StreamlineLibraryDLSSG
// Size: 0x28 (Inherited: 0x28)
struct UStreamlineLibraryDLSSG : UBlueprintFunctionLibrary {

	void SetDLSSGMode(enum class UStreamlineDLSSGMode DLSSGMode); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x244cf30
	void SetDLSSGFrames(int32_t Frames); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGFrames // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x244ceb0
	enum class UStreamlineDLSSGSupport QueryDLSSGSupport(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244ce50
	bool IsDLSSGSupported(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244cdf0
	bool IsDLSSGModeSupported(enum class UStreamlineDLSSGMode DLSSGMode); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244cd70
	struct TArray<enum class UStreamlineDLSSGMode> GetSupportedDLSSGModes(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244ccf0
	void GetDLSSGSupportedFramesRange(int32_t& MinFrames, int32_t& MaxFrames); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGSupportedFramesRange // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x244caf0
	enum class UStreamlineDLSSGMode GetDLSSGMode(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244cac0
	void GetDLSSGMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMinimumDriverVersion // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x244c9e0
	int32_t GetDLSSGFrames(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrames // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244c9b0
	enum class UStreamlineDLSSGMode GetDefaultDLSSGMode(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244cbd0
};

// Class StreamlineBlueprint.StreamlineLibraryReflex
// Size: 0x28 (Inherited: 0x28)
struct UStreamlineLibraryReflex : UBlueprintFunctionLibrary {

	void SetReflexMode(enum class UStreamlineReflexMode Mode); // Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x244cfa0
	enum class UStreamlineReflexSupport QueryReflexSupport(); // Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244ce80
	bool IsReflexSupported(); // Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244ce20
	float GetRenderLatencyInMs(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244ccc0
	enum class UStreamlineReflexMode GetReflexMode(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244cc90
	float GetGameToRenderLatencyInMs(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244cc60
	float GetGameLatencyInMs(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244cc30
	enum class UStreamlineReflexMode GetDefaultReflexMode(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x244cc00
};

