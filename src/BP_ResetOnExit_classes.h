// BlueprintGeneratedClass BP_ResetOnExit.BP_ResetOnExit_C
// Size: 0x2d0 (Inherited: 0x248)
struct ABP_ResetOnExit_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Sphere; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float TriggerScale; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TArray<struct AActor*> ResetActors; // 0x268(0x10)
	struct TArray<struct FTransform> Locations; // 0x278(0x10)
	float CompleteResetCueDelay; // 0x288(0x04)
	bool PlayerTriggers; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct TArray<struct ATargetPoint*> StatUpdatedTargetPoints; // 0x290(0x10)
	struct FName Stat; // 0x2a0(0x08)
	int32_t StatValue; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TArray<struct FTransform> StatLocations; // 0x2b0(0x10)
	struct TArray<struct FTransform> LocationsTemp; // 0x2c0(0x10)

	bool StatCheck(bool AssignLocations); // Function BP_ResetOnExit.BP_ResetOnExit_C.StatCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_ResetOnExit.BP_ResetOnExit_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_ResetOnExit.BP_ResetOnExit_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ResetOnExit.BP_ResetOnExit_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_ResetOnExit.BP_ResetOnExit_C.BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ResetAll(); // Function BP_ResetOnExit.BP_ResetOnExit_C.ResetAll // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_ResetOnExit.BP_ResetOnExit_C.BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_ResetOnExit.BP_ResetOnExit_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ResetOnExit(int32_t EntryPoint); // Function BP_ResetOnExit.BP_ResetOnExit_C.ExecuteUbergraph_BP_ResetOnExit // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

