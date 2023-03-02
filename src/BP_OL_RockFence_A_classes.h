// BlueprintGeneratedClass BP_OL_RockFence_A.BP_OL_RockFence_A_C
// Size: 0x340 (Inherited: 0x248)
struct ABP_OL_RockFence_A_C : AActor {
	struct USplineComponent* Spline; // 0x248(0x08)
	struct UBP_SplineToolGenerator_C* BP_SplineToolGenerator; // 0x250(0x08)
	float SectionLength; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct TSoftObjectPtr<UStaticMesh> Static Mesh 01; // 0x260(0x28)
	struct TSoftObjectPtr<UStaticMesh> Static Mesh 02; // 0x288(0x28)
	struct TSoftObjectPtr<UStaticMesh> Static Mesh 03; // 0x2b0(0x28)
	struct TSoftObjectPtr<UStaticMesh> Static Mesh 04; // 0x2d8(0x28)
	struct FRandomStream Random Seed; // 0x300(0x08)
	bool Random Meshes; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	struct FVector Mesh Scale; // 0x30c(0x0c)
	bool UseHISMToolComponent; // 0x318(0x01)
	bool RotateMeshAtOrigin; // 0x319(0x01)
	bool Start and End Mesh; // 0x31a(0x01)
	bool Use Spline Mesh by Max Angle; // 0x31b(0x01)
	float Max Angle Delta; // 0x31c(0x04)
	float Spacing Offset; // 0x320(0x04)
	struct FName In Collision Profile Name; // 0x324(0x08)
	bool Enable Debugging; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	int32_t Use HISMThreshold; // 0x330(0x04)
	int32_t Debug ISM Components Count; // 0x334(0x04)
	int32_t Debug Spline Mesh Components Count; // 0x338(0x04)
	int32_t Debug ISM Instances Count; // 0x33c(0x04)

	void RequestDestroyComponent(struct UInstancedStaticMeshComponent* ISM Component, bool& Success); // Function BP_OL_RockFence_A.BP_OL_RockFence_A_C.RequestDestroyComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetStaticMeshesUsedOnSpline(struct TArray<struct UStaticMesh*>& UsedMeshes, struct TArray<float>& MeshChance); // Function BP_OL_RockFence_A.BP_OL_RockFence_A_C.GetStaticMeshesUsedOnSpline // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_OL_RockFence_A.BP_OL_RockFence_A_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

