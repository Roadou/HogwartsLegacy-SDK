// BlueprintGeneratedClass BP_OL_Coast_VirtualTexturePaths_01.BP_OL_Coast_VirtualTexturePaths_01_C
// Size: 0x2da (Inherited: 0x248)
struct ABP_OL_Coast_VirtualTexturePaths_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USplineComponent* Spline; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float Mesh_Length; // 0x260(0x04)
	int32_t Mesh_Pieces; // 0x264(0x04)
	float Mesh_Length_3; // 0x268(0x04)
	float Mesh_Width; // 0x26c(0x04)
	struct UMaterialInterface* Path_Material; // 0x270(0x08)
	struct UStaticMesh* Path_Mesh; // 0x278(0x08)
	struct TArray<struct USplineMeshComponent*> Virtual_Textures; // 0x280(0x10)
	struct TArray<struct URuntimeVirtualTexture*> VirtualTexture; // 0x290(0x10)
	bool Virtual_Texturing; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TArray<enum class EObjectTypeQuery> Object Types; // 0x2a8(0x10)
	struct TArray<struct AActor*> Ignore; // 0x2b8(0x10)
	struct FVector Last Block Impact; // 0x2c8(0x0c)
	int32_t Snapping Point Index; // 0x2d4(0x04)
	bool Landscape Hit; // 0x2d8(0x01)
	bool Continue Snapping Itteration Loop; // 0x2d9(0x01)

	void Clear_Array(); // Function BP_OL_Coast_VirtualTexturePaths_01.BP_OL_Coast_VirtualTexturePaths_01_C.Clear_Array // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Trace_To_Landscape(); // Function BP_OL_Coast_VirtualTexturePaths_01.BP_OL_Coast_VirtualTexturePaths_01_C.Trace_To_Landscape // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Snap_To_Landscape(); // Function BP_OL_Coast_VirtualTexturePaths_01.BP_OL_Coast_VirtualTexturePaths_01_C.Snap_To_Landscape // (Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_OL_Coast_VirtualTexturePaths_01.BP_OL_Coast_VirtualTexturePaths_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OL_Coast_VirtualTexturePaths_01.BP_OL_Coast_VirtualTexturePaths_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_Coast_VirtualTexturePaths_01(int32_t EntryPoint); // Function BP_OL_Coast_VirtualTexturePaths_01.BP_OL_Coast_VirtualTexturePaths_01_C.ExecuteUbergraph_BP_OL_Coast_VirtualTexturePaths_01 // (Final|UbergraphFunction) // @ game+0x38a7480
};

