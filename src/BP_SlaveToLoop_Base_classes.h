// BlueprintGeneratedClass BP_SlaveToLoop_Base.BP_SlaveToLoop_Base_C
// Size: 0x2ac (Inherited: 0x268)
struct ABP_SlaveToLoop_Base_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USlaveToSplineComponent* SlaveToSpline; // 0x270(0x08)
	struct USplineComponent* Spline; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	float Speed; // 0x288(0x04)
	float MinRandomSpeed; // 0x28c(0x04)
	float MaxRandomSpeed; // 0x290(0x04)
	bool RandomizeDirectionOnSpawn; // 0x294(0x01)
	bool RandomizeStartPositionOnSpawn; // 0x295(0x01)
	bool RandomizeSpeedOnSpawn; // 0x296(0x01)
	char pad_297[0x1]; // 0x297(0x01)
	float Radius; // 0x298(0x04)
	int32_t NumPoints; // 0x29c(0x04)
	float Roll; // 0x2a0(0x04)
	float Eccentricity; // 0x2a4(0x04)
	float HeightChange; // 0x2a8(0x04)

	void RegenerateSpline(); // Function BP_SlaveToLoop_Base.BP_SlaveToLoop_Base_C.RegenerateSpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_SlaveToLoop_Base.BP_SlaveToLoop_Base_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SlaveToLoop_Base.BP_SlaveToLoop_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SlaveToLoop_Base(int32_t EntryPoint); // Function BP_SlaveToLoop_Base.BP_SlaveToLoop_Base_C.ExecuteUbergraph_BP_SlaveToLoop_Base // (Final|UbergraphFunction) // @ game+0x38a7480
};

