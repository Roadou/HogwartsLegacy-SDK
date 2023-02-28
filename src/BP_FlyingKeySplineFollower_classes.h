// BlueprintGeneratedClass BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C
// Size: 0x370 (Inherited: 0x248)
struct ABP_FlyingKeySplineFollower_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_SplineFlutter; // 0x250(0x08)
	struct USphereComponent* RevelioSphere; // 0x258(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x260(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x268(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)
	struct USlaveToSplineComponent* SlaveToSpline; // 0x278(0x08)
	struct ASlaveToSplineActor* SlaveToSplineActor; // 0x280(0x08)
	float SpeedAlongSpline; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct ABP_HW_FlyingKey_Cabinet_C* Cabinet; // 0x290(0x08)
	bool KeyActive; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct TArray<struct ANamedPoint*> NamedPoints; // 0x2a0(0x10)
	float ActivationDistance; // 0x2b0(0x04)
	float TimeLastPositionChange; // 0x2b4(0x04)
	float TimeToNextPositon; // 0x2b8(0x04)
	int32_t CurrentPointIndex; // 0x2bc(0x04)
	float TargetRotation; // 0x2c0(0x04)
	float Delta Seconds; // 0x2c4(0x04)
	float RotationSpeed; // 0x2c8(0x04)
	float PointToPointSpeed; // 0x2cc(0x04)
	float InterpToReachSpeed; // 0x2d0(0x04)
	float SplineStartTime; // 0x2d4(0x04)
	float TimeToGetBackToSpline; // 0x2d8(0x04)
	struct FVector StartingLocOffSpline; // 0x2dc(0x0c)
	struct FRotator StartingRotOffSpline; // 0x2e8(0x0c)
	bool CloseEnoughToMove; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UNiagaraComponent* LightSparkleTrail; // 0x2f8(0x08)
	float JitterAmount; // 0x300(0x04)
	struct FVector JitterVec; // 0x304(0x0c)
	float LastJitterTime; // 0x310(0x04)
	float TimeBetweenJitters; // 0x314(0x04)
	struct FVector CurrentJitter; // 0x318(0x0c)
	float JitterSpeed; // 0x324(0x04)
	float TimeAlongSpline; // 0x328(0x04)
	float StartingSpeedOnSpline; // 0x32c(0x04)
	float SplineLegnth; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct UNiagaraComponent* HeavySparkleTrail; // 0x338(0x08)
	bool ReachedLocation; // 0x340(0x01)
	bool Use Stat Lock; // 0x341(0x01)
	char pad_342[0x2]; // 0x342(0x02)
	struct FName Stat Lock; // 0x344(0x08)
	bool KeyLocked; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct FMulticastInlineDelegate KeyDiscovered; // 0x350(0x10)
	struct FMulticastInlineDelegate KeyReachedCabinet; // 0x360(0x10)

	void ToggleLockKey(bool Lock); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.ToggleLockKey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckLockStatus(); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.CheckLockStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetLockStatus(bool& Lock Status); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.GetLockStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_FlyingKeySplineFollower_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.BndEvt__BP_FlyingKeySplineFollower_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FlyingKeySplineFollower(int32_t EntryPoint); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.ExecuteUbergraph_BP_FlyingKeySplineFollower // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void KeyReachedCabinet__DelegateSignature(); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.KeyReachedCabinet__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void KeyDiscovered__DelegateSignature(); // Function BP_FlyingKeySplineFollower.BP_FlyingKeySplineFollower_C.KeyDiscovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

