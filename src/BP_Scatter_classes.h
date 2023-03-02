// BlueprintGeneratedClass BP_Scatter.BP_Scatter_C
// Size: 0x3b0 (Inherited: 0x248)
struct ABP_Scatter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBillboardComponent* Billboard; // 0x250(0x08)
	struct UBoxComponent* Box; // 0x258(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh4; // 0x260(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh3; // 0x268(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh2; // 0x270(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh1; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct UStaticMesh* Static_Mesh_01; // 0x288(0x08)
	struct UStaticMesh* Static_Mesh_02; // 0x290(0x08)
	struct UStaticMesh* Static_Mesh_03; // 0x298(0x08)
	struct UStaticMesh* Static_Mesh_04; // 0x2a0(0x08)
	struct TArray<struct UStaticMeshComponent*> Array1; // 0x2a8(0x10)
	struct TArray<struct UStaticMeshComponent*> Array2; // 0x2b8(0x10)
	struct TArray<struct UStaticMeshComponent*> Array3; // 0x2c8(0x10)
	struct TArray<struct UStaticMeshComponent*> Array4; // 0x2d8(0x10)
	struct TArray<struct UStaticMesh*> Meshes_Array; // 0x2e8(0x10)
	float Min_Scale; // 0x2f8(0x04)
	float Max_Scale; // 0x2fc(0x04)
	struct FRandomStream Stream; // 0x300(0x08)
	int32_t NewVar_1; // 0x308(0x04)
	struct FVector Location; // 0x30c(0x0c)
	struct FVector NewVar_2; // 0x318(0x0c)
	bool Spawn_Move; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	float Spawn_Move_Distance; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct UMaterialInstance* Material_01; // 0x330(0x08)
	struct UMaterialInstance* Material_02; // 0x338(0x08)
	struct UMaterialInstance* Material_03; // 0x340(0x08)
	struct UMaterialInstance* Material_04; // 0x348(0x08)
	float Mesh1_Max_Bound; // 0x350(0x04)
	float Mesh2_Max_Bound; // 0x354(0x04)
	float Mesh3_Max_Bound; // 0x358(0x04)
	float Mesh4_Max_Bound; // 0x35c(0x04)
	float Random_Scale; // 0x360(0x04)
	float Mesh1_Normalize; // 0x364(0x04)
	float Mesh2_Normalize; // 0x368(0x04)
	float Mesh3_Normalize; // 0x36c(0x04)
	float Mesh4_Normalize; // 0x370(0x04)
	float Final_Scale; // 0x374(0x04)
	char pad_378[0x8]; // 0x378(0x08)
	struct FTransform Final_Transform; // 0x380(0x30)

	void Normalize Mesh Scales_Off(); // Function BP_Scatter.BP_Scatter_C.Normalize Mesh Scales_Off // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Normalize Mesh Scales_On(); // Function BP_Scatter.BP_Scatter_C.Normalize Mesh Scales_On // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Change_Material(); // Function BP_Scatter.BP_Scatter_C.Change_Material // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void spawn single mesh(); // Function BP_Scatter.BP_Scatter_C.spawn single mesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Make_Static(); // Function BP_Scatter.BP_Scatter_C.Make_Static // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Scatter.BP_Scatter_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Scatter.BP_Scatter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Scatter.BP_Scatter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Scatter(int32_t EntryPoint); // Function BP_Scatter.BP_Scatter_C.ExecuteUbergraph_BP_Scatter // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

