// BlueprintGeneratedClass BP_OL_Spline_Parent.BP_OL_Spline_Parent_C
// Size: 0x3c0 (Inherited: 0x248)
struct ABP_OL_Spline_Parent_C : AActor {
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	bool ReOrderMesh; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TMap<struct USplineMeshComponent*, int32_t> Mesh_Loc; // 0x258(0x50)
	struct TArray<int32_t> Set to A; // 0x2a8(0x10)
	struct TArray<int32_t> Set to B; // 0x2b8(0x10)
	struct TArray<int32_t> Set to C; // 0x2c8(0x10)
	struct TArray<int32_t> Set to D; // 0x2d8(0x10)
	bool Tag Visibility; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	int32_t Last Index; // 0x2ec(0x04)
	struct FString String; // 0x2f0(0x10)
	struct FString String_3; // 0x300(0x10)
	struct FString String_4; // 0x310(0x10)
	struct TArray<int32_t> Index Of Duplicate; // 0x320(0x10)
	struct TSoftObjectPtr<UStaticMesh> ErrorMesh; // 0x330(0x28)
	bool You Did Something Wrong; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct TMap<int32_t, int32_t> ReOrder Map; // 0x360(0x50)
	struct TArray<int32_t> NewVar_1; // 0x3b0(0x10)

	void ReOrder_II(struct UStaticMesh* A, struct UStaticMesh* B, struct UStaticMesh* C, struct UStaticMesh* D); // Function BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.ReOrder_II // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelfCompare(struct TArray<int32_t>& ArrayInput, bool& containsDuplicate, int32_t& indexOfDuplicate); // Function BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.SelfCompare // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Array Compare(); // Function BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.Array Compare // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Fix Array Limit(); // Function BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.Fix Array Limit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Check Array Limit(); // Function BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.Check Array Limit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Show Location Tags(struct USplineComponent* Spline, int32_t Last Index, float Section Length); // Function BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.Show Location Tags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Relocate Spline(struct USplineComponent* Spline); // Function BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.Relocate Spline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Re Order Meshes(struct TMap<struct USplineMeshComponent*, int32_t> Mesh_Loc Map, struct UStaticMesh* Mesh A, struct UStaticMesh* Mesh B, struct UStaticMesh* Mesh C, struct UStaticMesh* Mesh D); // Function BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.Re Order Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

