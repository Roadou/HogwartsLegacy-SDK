// BlueprintGeneratedClass BP_MapPaperTransitionController.BP_MapPaperTransitionController_C
// Size: 0x328 (Inherited: 0x248)
struct ABP_MapPaperTransitionController_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Sphere; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float TransitionInTimeline_TransitionInTime_ADB1DBF246B82E4E0528CA99F769B3E7; // 0x260(0x04)
	enum class ETimelineDirection TransitionInTimeline__Direction_ADB1DBF246B82E4E0528CA99F769B3E7; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* TransitionInTimeline; // 0x268(0x08)
	float PreviewTransitionAlpha; // 0x270(0x04)
	float Radius; // 0x274(0x04)
	float PositionScale; // 0x278(0x04)
	float NoiseStrength; // 0x27c(0x04)
	float NoiseTilingSize; // 0x280(0x04)
	float MaskHardness; // 0x284(0x04)
	float MaskFalloff; // 0x288(0x04)
	float ErosionAlpha; // 0x28c(0x04)
	float ErosionSharpen; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FRuntimeFloatCurve TranstionCurveIn; // 0x298(0x88)
	struct FName MapName; // 0x320(0x08)

	void SetConstantParameters(); // Function BP_MapPaperTransitionController.BP_MapPaperTransitionController_C.SetConstantParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_MapPaperTransitionController.BP_MapPaperTransitionController_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TransitionInTimeline__FinishedFunc(); // Function BP_MapPaperTransitionController.BP_MapPaperTransitionController_C.TransitionInTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void TransitionInTimeline__UpdateFunc(); // Function BP_MapPaperTransitionController.BP_MapPaperTransitionController_C.TransitionInTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MapPaperTransitionController.BP_MapPaperTransitionController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnMapStartAtLocation(struct UObject* Caller, struct FVector& Vector); // Function BP_MapPaperTransitionController.BP_MapPaperTransitionController_C.OnMapStartAtLocation // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MapPaperTransitionController(int32_t EntryPoint); // Function BP_MapPaperTransitionController.BP_MapPaperTransitionController_C.ExecuteUbergraph_BP_MapPaperTransitionController // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

