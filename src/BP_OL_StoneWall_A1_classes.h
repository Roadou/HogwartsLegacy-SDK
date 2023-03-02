// BlueprintGeneratedClass BP_OL_StoneWall_A1.BP_OL_StoneWall_A1_C
// Size: 0x2d5 (Inherited: 0x248)
struct ABP_OL_StoneWall_A1_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNone* BP_SplineToolGenerator; // 0x250(0x08)
	struct USplineComponent* Spline; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float SectionLength; // 0x268(0x04)
	bool UseHISMToolComponent; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	float Spacing Offset; // 0x270(0x04)
	struct FName In Collision Profile Name; // 0x274(0x08)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct UStaticMesh* Static Mesh 01; // 0x280(0x08)
	struct UStaticMesh* Static Mesh 02; // 0x288(0x08)
	struct UStaticMesh* Static Mesh 03; // 0x290(0x08)
	struct UStaticMesh* Static Mesh 04; // 0x298(0x08)
	struct UStaticMesh* Static Mesh 05; // 0x2a0(0x08)
	struct UStaticMesh* Static Mesh 06; // 0x2a8(0x08)
	struct FRandomStream Random Seed; // 0x2b0(0x08)
	bool Random Meshes; // 0x2b8(0x01)
	bool RotateMeshAtOrigin; // 0x2b9(0x01)
	bool Use Spline Mesh by Max Angle; // 0x2ba(0x01)
	char pad_2BB[0x1]; // 0x2bb(0x01)
	float Max Angle Delta; // 0x2bc(0x04)
	bool Enable Debugging; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	int32_t ISM Component Count; // 0x2c4(0x04)
	int32_t Spline Mesh Component Count; // 0x2c8(0x04)
	int32_t ISM Instances Count; // 0x2cc(0x04)
	int32_t Use HISMThreshold; // 0x2d0(0x04)
	bool In Generate Overlap Events; // 0x2d4(0x01)

	void RequestDestroyComponent(struct UInstancedStaticMeshComponent* ISM Component, bool& Success); // Function BP_OL_StoneWall_A1.BP_OL_StoneWall_A1_C.RequestDestroyComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FlushDebugLines(); // Function BP_OL_StoneWall_A1.BP_OL_StoneWall_A1_C.FlushDebugLines // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DebugLogComponents(); // Function BP_OL_StoneWall_A1.BP_OL_StoneWall_A1_C.DebugLogComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_OL_StoneWall_A1.BP_OL_StoneWall_A1_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OL_StoneWall_A1.BP_OL_StoneWall_A1_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_1(struct FString TextValue, struct FVector TextLocation, struct FVector Line1Start, struct FVector Line1End, struct FVector Line2Start, struct FVector Line2End); // Function BP_OL_StoneWall_A1.BP_OL_StoneWall_A1_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_StoneWall_A1(int32_t EntryPoint); // Function BP_OL_StoneWall_A1.BP_OL_StoneWall_A1_C.ExecuteUbergraph_BP_OL_StoneWall_A1 // (Final|UbergraphFunction) // @ game+0x38a7480
};

