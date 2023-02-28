// BlueprintGeneratedClass BP_Marker_Base.BP_Marker_Base_C
// Size: 0x304 (Inherited: 0x250)
struct ABP_Marker_Base_C : AMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct FString DB Name; // 0x260(0x10)
	struct FString BaseName; // 0x270(0x10)
	int32_t UniqueIdentity; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FString UniqueIdentityName; // 0x288(0x10)
	struct FString MarkerRootName; // 0x298(0x10)
	struct FString OverrideMarkerName; // 0x2a8(0x10)
	struct FString Arithmancy #; // 0x2b8(0x10)
	bool Tile Name Off; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FString Level Name; // 0x2d0(0x10)
	bool Text Display; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct FString TEMP Level Name; // 0x2e8(0x10)
	struct FRotator Text Rotation; // 0x2f8(0x0c)

	void AddTextMarker(struct FString Text, float Height, float Size, struct FColor Color); // Function BP_Marker_Base.BP_Marker_Base_C.AddTextMarker // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateBar(float Height, struct FColor Color); // Function BP_Marker_Base.BP_Marker_Base_C.CreateBar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckForTechLevel(bool& InTechLevel, bool& In Mission, bool& In Other, bool& Hogsmeade, bool& Feature, bool& VFX); // Function BP_Marker_Base.BP_Marker_Base_C.CheckForTechLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitMarker(float Height, float Size, struct FColor Color, struct FString MarkerRootName, int32_t SkipLeft, int32_t SkipRight, struct FString OverrideMarker Name, struct FString Arithmancy #, bool Bar Off, bool Tile Name Off, bool Text Off, bool Rotate Text 180, bool& Valid); // Function BP_Marker_Base.BP_Marker_Base_C.InitMarker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetUniqueIdentity(); // Function BP_Marker_Base.BP_Marker_Base_C.SetUniqueIdentity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBaseName(int32_t SkipLeft, int32_t SkipRight); // Function BP_Marker_Base.BP_Marker_Base_C.SetBaseName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Marker_Base.BP_Marker_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Marker_Base(int32_t EntryPoint); // Function BP_Marker_Base.BP_Marker_Base_C.ExecuteUbergraph_BP_Marker_Base // (Final|UbergraphFunction) // @ game+0x38a7480
};

