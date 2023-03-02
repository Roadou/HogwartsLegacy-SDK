// BlueprintGeneratedClass BP_OL_StoneWall_A.BP_OL_StoneWall_A_C
// Size: 0x2cc (Inherited: 0x248)
struct ABP_OL_StoneWall_A_C : AActor {
	struct UNone* BP_SplineToolGenerator; // 0x248(0x08)
	struct USplineComponent* Spline; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float SectionLength; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct UStaticMesh* Static Mesh 01; // 0x268(0x08)
	struct UStaticMesh* Static Mesh 02; // 0x270(0x08)
	struct UStaticMesh* Static Mesh 03; // 0x278(0x08)
	struct UStaticMesh* Static Mesh 04; // 0x280(0x08)
	struct UStaticMesh* Static Mesh 05; // 0x288(0x08)
	struct UStaticMesh* Static Mesh 06; // 0x290(0x08)
	struct FRandomStream Random Seed; // 0x298(0x08)
	bool Random Meshes; // 0x2a0(0x01)
	bool UseHISMToolComponent; // 0x2a1(0x01)
	bool RotateMeshesAtOrigin; // 0x2a2(0x01)
	char pad_2A3[0x1]; // 0x2a3(0x01)
	float Spacing Offset; // 0x2a4(0x04)
	bool UseSplineMeshByMaxAngle; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	float MaxAngleDelta; // 0x2ac(0x04)
	struct FName In Collision Profile Name; // 0x2b0(0x08)
	bool Enable Debugging; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	int32_t Debug ISM Components Count; // 0x2bc(0x04)
	int32_t Debug Spline Mesh Components Count; // 0x2c0(0x04)
	int32_t Debug ISM Instances Count; // 0x2c4(0x04)
	int32_t Use HISMThreshold; // 0x2c8(0x04)

	void RequestDestroyComponent(struct UInstancedStaticMeshComponent* ISM Component, bool& Success); // Function BP_OL_StoneWall_A.BP_OL_StoneWall_A_C.RequestDestroyComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_OL_StoneWall_A.BP_OL_StoneWall_A_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

