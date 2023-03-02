// BlueprintGeneratedClass BP_GM_TrainTrackSpline.BP_GM_TrainTrackSpline_C
// Size: 0x290 (Inherited: 0x248)
struct ABP_GM_TrainTrackSpline_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USplineComponent* Spline; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	int32_t NbrSplinePoints; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct ABP_GM_TrainCartStation_C* StartPlatform; // 0x268(0x08)
	struct ABP_GM_TrainCartStation_C* EndPlatform; // 0x270(0x08)
	bool bRebuildSpline; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct TArray<struct FVector> SplineRebuilderLoc; // 0x280(0x10)

	void ComputeSplineMeshUpVector(struct FVector Tan A, struct FVector Tan B, struct FVector& UpVector); // Function BP_GM_TrainTrackSpline.BP_GM_TrainTrackSpline_C.ComputeSplineMeshUpVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_GM_TrainTrackSpline.BP_GM_TrainTrackSpline_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_GM_TrainTrackSpline.BP_GM_TrainTrackSpline_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_TrainTrackSpline(int32_t EntryPoint); // Function BP_GM_TrainTrackSpline.BP_GM_TrainTrackSpline_C.ExecuteUbergraph_BP_GM_TrainTrackSpline // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

