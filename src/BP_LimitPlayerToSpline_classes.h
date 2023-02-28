// BlueprintGeneratedClass BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C
// Size: 0x2e9 (Inherited: 0x248)
struct ABP_LimitPlayerToSpline_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* DisableDodge; // 0x250(0x08)
	struct UBoxComponent* Box; // 0x258(0x08)
	struct UBillboardComponent* Billboard; // 0x260(0x08)
	struct AActor* SplineActor; // 0x268(0x08)
	struct USplineComponent* SplineComponent; // 0x270(0x08)
	float AttachDistance; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct URootMotionModifierProperties_SplineLock* SplineLockProperty; // 0x280(0x08)
	float PlayerCapsuleRadiusMultiplier; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct URootMotionModifierProperties_SplineLock* InstancedSplineLockProperties; // 0x290(0x08)
	bool InSimulation; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct URootMotionModifierProperties_SplineLock* SplineLockRootMotionModProperties; // 0x2a0(0x08)
	struct FHermesBPDelegateHandle HermesEventHandle; // 0x2a8(0x10)
	struct USplineComponent* NewVar_1; // 0x2b8(0x08)
	float DistanceAlongSpline; // 0x2c0(0x04)
	enum class ETargetSpeedMode Speed; // 0x2c4(0x01)
	enum class ETargetSpeedMode SpeedModifier; // 0x2c5(0x01)
	bool noJump; // 0x2c6(0x01)
	bool noDodge; // 0x2c7(0x01)
	bool NoSprint; // 0x2c8(0x01)
	bool CasualMode; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct UCameraStackVolumePreset* CameraPreset; // 0x2d0(0x08)
	float RestorePlayerCapsuleRadius; // 0x2d8(0x04)
	bool InBox; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct UCameraStackInfluenceHandle* CameraInfluenceHandle; // 0x2e0(0x08)
	bool PlayerStackDisabled; // 0x2e8(0x01)

	void PopDisableStack(); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.PopDisableStack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PushDisableStack(); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.PushDisableStack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpeedMode(bool Flag); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.SetSpeedMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector GetPlayerCapsuleBottom(); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.GetPlayerCapsuleBottom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartSimulation(); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.StartSimulation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndSimulation(); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.EndSimulation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndTick(); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.EndTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckToStartTick(); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.CheckToStartTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PlayerHasMovedOffEndOfSpline(struct UObject* Caller); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.PlayerHasMovedOffEndOfSpline // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_LimitPlayerToSpline_Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.BndEvt__BP_LimitPlayerToSpline_Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_LimitPlayerToSpline_Box1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.BndEvt__BP_LimitPlayerToSpline_Box1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_LimitPlayerToSpline(int32_t EntryPoint); // Function BP_LimitPlayerToSpline.BP_LimitPlayerToSpline_C.ExecuteUbergraph_BP_LimitPlayerToSpline // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

