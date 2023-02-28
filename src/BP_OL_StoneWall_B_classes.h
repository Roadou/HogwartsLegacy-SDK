// BlueprintGeneratedClass BP_OL_StoneWall_B.BP_OL_StoneWall_B_C
// Size: 0x2bc (Inherited: 0x248)
struct ABP_OL_StoneWall_B_C : AActor {
	struct UBP_SplineToolGenerator_C* BP_SplineToolGenerator; // 0x248(0x08)
	struct USplineComponent* Spline; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float SectionLength; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct UStaticMesh* Static Mesh 01; // 0x268(0x08)
	struct UStaticMesh* Static Mesh 02; // 0x270(0x08)
	struct UStaticMesh* Static Mesh 03; // 0x278(0x08)
	struct UStaticMesh* Static Mesh 04; // 0x280(0x08)
	struct FRandomStream Random Seed; // 0x288(0x08)
	bool UseHISMToolComponent; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float Spacing Offset; // 0x294(0x04)
	bool Rotate Meshes at Origin; // 0x298(0x01)
	bool Use Spline Mesh by Max Angle; // 0x299(0x01)
	char pad_29A[0x2]; // 0x29a(0x02)
	float Max Angle Delta; // 0x29c(0x04)
	struct FName In Collision Profile Name; // 0x2a0(0x08)
	bool Random Meshes; // 0x2a8(0x01)
	bool Enable Debugging; // 0x2a9(0x01)
	char pad_2AA[0x2]; // 0x2aa(0x02)
	int32_t Debug ISM Components Count; // 0x2ac(0x04)
	int32_t Debug Spline Mesh Components Count; // 0x2b0(0x04)
	int32_t Debug ISM Instances Count; // 0x2b4(0x04)
	int32_t Use HISMThreshold; // 0x2b8(0x04)

	void RequestDestroyComponent(struct UInstancedStaticMeshComponent* ISM Component, bool& Success); // Function BP_OL_StoneWall_B.BP_OL_StoneWall_B_C.RequestDestroyComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_OL_StoneWall_B.BP_OL_StoneWall_B_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

