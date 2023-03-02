// BlueprintGeneratedClass BP_WE_ReinventingTheWheel.BP_WE_ReinventingTheWheel_C
// Size: 0x298 (Inherited: 0x280)
struct ABP_WE_ReinventingTheWheel_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USplineComponent* Spline; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)

	void GetWESpline(bool& Valid); // Function BP_WE_ReinventingTheWheel.BP_WE_ReinventingTheWheel_C.GetWESpline // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_ReinventingTheWheel.BP_WE_ReinventingTheWheel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_ReinventingTheWheel(int32_t EntryPoint); // Function BP_WE_ReinventingTheWheel.BP_WE_ReinventingTheWheel_C.ExecuteUbergraph_BP_WE_ReinventingTheWheel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

