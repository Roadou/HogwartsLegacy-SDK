// BlueprintGeneratedClass BP_Hogwarts_Express_Navigation_Spline.BP_Hogwarts_Express_Navigation_Spline_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_Hogwarts_Express_Navigation_Spline_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* EndOfTrackTrigger; // 0x250(0x08)
	struct UTrainNavigationSplineComponent* TrainNavigationSpline; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)

	void ReverseSplinePoints(); // Function BP_Hogwarts_Express_Navigation_Spline.BP_Hogwarts_Express_Navigation_Spline_C.ReverseSplinePoints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Hogwarts_Express_Navigation_Spline.BP_Hogwarts_Express_Navigation_Spline_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Hogwarts_Express_Navigation_Spline.BP_Hogwarts_Express_Navigation_Spline_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Hogwarts_Express_Navigation_Spline(int32_t EntryPoint); // Function BP_Hogwarts_Express_Navigation_Spline.BP_Hogwarts_Express_Navigation_Spline_C.ExecuteUbergraph_BP_Hogwarts_Express_Navigation_Spline // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

