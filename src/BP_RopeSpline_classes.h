// BlueprintGeneratedClass BP_RopeSpline.BP_RopeSpline_C
// Size: 0x358 (Inherited: 0x248)
struct ABP_RopeSpline_C : AActor {
	struct USplineComponent* Spline; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	int32_t Number Of Spline Points; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct USplineMeshComponent* SplineMesh; // 0x260(0x08)
	struct UStaticMesh* SpanMesh; // 0x268(0x08)
	int32_t SpanSelection; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct UStaticMesh* SM_Rope; // 0x278(0x08)
	float RopeSegmentLength; // 0x280(0x04)
	float TangentScaleRope; // 0x284(0x04)
	bool NormalizeTangents; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UStaticMesh* SM_Chain; // 0x290(0x08)
	struct UStaticMesh* Fastner; // 0x298(0x08)
	struct UStaticMesh* Fastner_1; // 0x2a0(0x08)
	struct UStaticMesh* Fastner_2; // 0x2a8(0x08)
	struct UStaticMesh* Fastner_3; // 0x2b0(0x08)
	struct UStaticMesh* BM_Mesh; // 0x2b8(0x08)
	int32_t BeginningMeshSelection; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UStaticMesh* EndMesh; // 0x2c8(0x08)
	int32_t EndMeshSelection; // 0x2d0(0x04)
	float ChainSegmentLength; // 0x2d4(0x04)
	float TangentScaleChain; // 0x2d8(0x04)
	struct FVector BM_Offset; // 0x2dc(0x0c)
	struct FRotator BM_Rotation; // 0x2e8(0x0c)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct UStaticMesh* Fastner_4; // 0x2f8(0x08)
	struct UStaticMesh* Fastner_5; // 0x300(0x08)
	struct UStaticMesh* Fastner_6; // 0x308(0x08)
	struct UStaticMesh* Fastner_7; // 0x310(0x08)
	struct UStaticMesh* Fastner_8; // 0x318(0x08)
	struct FVector EM_Offset; // 0x320(0x0c)
	struct FRotator EM_Rotation; // 0x32c(0x0c)
	struct UStaticMesh* Fastner_9; // 0x338(0x08)
	struct UStaticMesh* Fastner_10; // 0x340(0x08)
	struct UStaticMesh* Fastner_11; // 0x348(0x08)
	struct UStaticMesh* Fastner_12; // 0x350(0x08)

	struct FVector MeshLocationAdjustment(struct FVector Spline Vector, int32_t Index, struct FVector Instance Adjustment); // Function BP_RopeSpline.BP_RopeSpline_C.MeshLocationAdjustment // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FRotator MeshRotationAdjustment(int32_t Index, struct FRotator Instance Adjustment); // Function BP_RopeSpline.BP_RopeSpline_C.MeshRotationAdjustment // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UStaticMesh* EndMeshSelect(); // Function BP_RopeSpline.BP_RopeSpline_C.EndMeshSelect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UStaticMesh* BeginningMeshSelect(); // Function BP_RopeSpline.BP_RopeSpline_C.BeginningMeshSelect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UStaticMesh* SpanMeshSelect(); // Function BP_RopeSpline.BP_RopeSpline_C.SpanMeshSelect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_RopeSpline.BP_RopeSpline_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

