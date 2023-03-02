// BlueprintGeneratedClass BP_OL_TrainTracks_B.BP_OL_TrainTracks_B_C
// Size: 0x2c5 (Inherited: 0x248)
struct ABP_OL_TrainTracks_B_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNone* BP_SplineToolGenerator; // 0x250(0x08)
	struct USplineComponent* Spline; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float SectionLength; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct USplineMeshComponent* Train Track; // 0x270(0x08)
	struct USplineMeshComponent* Large Mesh; // 0x278(0x08)
	struct USplineMeshComponent* Medium Mesh; // 0x280(0x08)
	int32_t Last Index; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UStaticMesh* Track Mesh; // 0x290(0x08)
	bool Use HISM Tool Component; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float Spacing Offset; // 0x29c(0x04)
	struct FName In Collision Profile Name; // 0x2a0(0x08)
	bool Use Spline Mesh by Max Angle; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	float Max Angle Delta; // 0x2ac(0x04)
	bool Enable Debugging; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	int32_t Use HISMThreshold; // 0x2b4(0x04)
	int32_t Debug ISM Components Count; // 0x2b8(0x04)
	int32_t Debug Spline Mesh Components Count; // 0x2bc(0x04)
	int32_t Debug ISM Instances Count; // 0x2c0(0x04)
	bool Rotate Meshes at Origin; // 0x2c4(0x01)

	void RequestDestroyComponent(struct UInstancedStaticMeshComponent* ISM Component, bool& Success); // Function BP_OL_TrainTracks_B.BP_OL_TrainTracks_B_C.RequestDestroyComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_OL_TrainTracks_B.BP_OL_TrainTracks_B_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OL_TrainTracks_B.BP_OL_TrainTracks_B_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_TrainTracks_B(int32_t EntryPoint); // Function BP_OL_TrainTracks_B.BP_OL_TrainTracks_B_C.ExecuteUbergraph_BP_OL_TrainTracks_B // (Final|UbergraphFunction) // @ game+0x38a7480
};

