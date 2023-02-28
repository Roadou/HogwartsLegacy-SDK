// BlueprintGeneratedClass BP_Mesh_Spline_Single_Mesh.BP_Mesh_Spline_Single_Mesh_C
// Size: 0x291 (Inherited: 0x248)
struct ABP_Mesh_Spline_Single_Mesh_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USplineComponent* Spline; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct UStaticMesh* StaticMesh; // 0x260(0x08)
	enum class ESplineMeshAxis Forward Axis; // 0x268(0x01)
	bool Override Material; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct UMaterialInterface* Material; // 0x270(0x08)
	bool Override Spacing; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float spacing; // 0x27c(0x04)
	float tangentScale; // 0x280(0x04)
	enum class ECollisionEnabled CollisionType; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct FName CollisionProfile; // 0x288(0x08)
	bool Set Mesh to Static; // 0x290(0x01)

	void UserConstructionScript(); // Function BP_Mesh_Spline_Single_Mesh.BP_Mesh_Spline_Single_Mesh_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Mesh_Spline_Single_Mesh.BP_Mesh_Spline_Single_Mesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Mesh_Spline_Single_Mesh(int32_t EntryPoint); // Function BP_Mesh_Spline_Single_Mesh.BP_Mesh_Spline_Single_Mesh_C.ExecuteUbergraph_BP_Mesh_Spline_Single_Mesh // (Final|UbergraphFunction) // @ game+0x38a7480
};

