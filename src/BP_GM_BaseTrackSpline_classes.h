// BlueprintGeneratedClass BP_GM_BaseTrackSpline.BP_GM_BaseTrackSpline_C
// Size: 0x272 (Inherited: 0x248)
struct ABP_GM_BaseTrackSpline_C : AActor {
	struct USphereComponent* StartSphere; // 0x248(0x08)
	struct USphereComponent* EndSphere; // 0x250(0x08)
	struct USplineComponent* Spline; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct ABP_GM_BaseTrackSpline_C* PreviousPiece; // 0x268(0x08)
	bool bIsConvergePoint; // 0x270(0x01)
	bool bIsJunctionPoint; // 0x271(0x01)

	void UserConstructionScript(); // Function BP_GM_BaseTrackSpline.BP_GM_BaseTrackSpline_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

