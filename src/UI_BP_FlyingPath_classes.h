// BlueprintGeneratedClass UI_BP_FlyingPath.UI_BP_FlyingPath_C
// Size: 0x2a8 (Inherited: 0x248)
struct AUI_BP_FlyingPath_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Sphere; // 0x250(0x08)
	struct USkeletalMeshComponent* FlyingMesh; // 0x258(0x08)
	struct USplineComponent* Spline; // 0x260(0x08)
	float FlightLoop_Alpha_5F22226141463AF70F968498B705AA0F; // 0x268(0x04)
	enum class ETimelineDirection FlightLoop__Direction_5F22226141463AF70F968498B705AA0F; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* FlightLoop; // 0x270(0x08)
	float LoopDuration; // 0x278(0x04)
	float StartOffset; // 0x27c(0x04)
	bool StartOnBeginPlay; // 0x280(0x01)
	bool InProgress; // 0x281(0x01)
	bool Loops; // 0x282(0x01)
	char pad_283[0x1]; // 0x283(0x01)
	float LoopDelay; // 0x284(0x04)
	bool StartOnMouseHover; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FSingleAnimationPlayData FlyAnimation; // 0x290(0x18)

	void SetFlyingAnimation(); // Function UI_BP_FlyingPath.UI_BP_FlyingPath_C.SetFlyingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function UI_BP_FlyingPath.UI_BP_FlyingPath_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FlightLoop__FinishedFunc(); // Function UI_BP_FlyingPath.UI_BP_FlyingPath_C.FlightLoop__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void FlightLoop__UpdateFunc(); // Function UI_BP_FlyingPath.UI_BP_FlyingPath_C.FlightLoop__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void StartFlight(); // Function UI_BP_FlyingPath.UI_BP_FlyingPath_C.StartFlight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function UI_BP_FlyingPath.UI_BP_FlyingPath_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function UI_BP_FlyingPath.UI_BP_FlyingPath_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FlyingPath(int32_t EntryPoint); // Function UI_BP_FlyingPath.UI_BP_FlyingPath_C.ExecuteUbergraph_UI_BP_FlyingPath // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

