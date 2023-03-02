// BlueprintGeneratedClass BP_OL_MineTracks_A.BP_OL_MineTracks_A_C
// Size: 0x2dc (Inherited: 0x248)
struct ABP_OL_MineTracks_A_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBP_SplineToolGenerator_C* BP_SplineToolGenerator; // 0x250(0x08)
	struct USplineComponent* Spline; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float SectionLength; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct USplineMeshComponent* Train Track; // 0x270(0x08)
	struct USplineMeshComponent* Large Mesh; // 0x278(0x08)
	struct USplineMeshComponent* Medium Mesh; // 0x280(0x08)
	struct UTextRenderComponent* Text; // 0x288(0x08)
	int32_t Last Index; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct UStaticMesh* Track Mesh; // 0x298(0x08)
	bool Use HISM Tool Component; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float Spacing Offset; // 0x2a4(0x04)
	bool Start and End Mesh; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UStaticMesh* Start Mesh; // 0x2b0(0x08)
	struct UStaticMesh* End Mesh; // 0x2b8(0x08)
	bool Use Spline Mesh by Max Angle; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float Max Angle Delta; // 0x2c4(0x04)
	bool Enable Debugging; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	int32_t Use HISMThreshold; // 0x2cc(0x04)
	int32_t Debug ISM Components Count; // 0x2d0(0x04)
	int32_t Debug Spline Mesh Components Count; // 0x2d4(0x04)
	int32_t Debug ISM Instances Count; // 0x2d8(0x04)

	void RequestDestroyComponent(struct UInstancedStaticMeshComponent* ISM Component, bool& Success); // Function BP_OL_MineTracks_A.BP_OL_MineTracks_A_C.RequestDestroyComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_OL_MineTracks_A.BP_OL_MineTracks_A_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OL_MineTracks_A.BP_OL_MineTracks_A_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_MineTracks_A(int32_t EntryPoint); // Function BP_OL_MineTracks_A.BP_OL_MineTracks_A_C.ExecuteUbergraph_BP_OL_MineTracks_A // (Final|UbergraphFunction) // @ game+0x38a7480
};

