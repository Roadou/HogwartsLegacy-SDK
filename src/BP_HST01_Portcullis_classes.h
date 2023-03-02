// BlueprintGeneratedClass BP_HST01_Portcullis.BP_HST01_Portcullis_C
// Size: 0x460 (Inherited: 0x248)
struct ABP_HST01_Portcullis_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint_AccioRing; // 0x250(0x08)
	struct USceneComponent* AccioRingPlacement; // 0x258(0x08)
	struct UAkComponent* AkRoller; // 0x260(0x08)
	struct UChildActorComponent* GatePosition; // 0x268(0x08)
	struct UAkComponent* AkGear; // 0x270(0x08)
	struct UAkComponent* AkGate; // 0x278(0x08)
	struct UAkComponent* AkCounterWeight; // 0x280(0x08)
	struct UAkComponent* AkChain2; // 0x288(0x08)
	struct UAkComponent* AkChain1; // 0x290(0x08)
	struct UNiagaraComponent* VFX_NS_Portcullis_sparks3; // 0x298(0x08)
	struct UNiagaraComponent* VFX_NS_Portcullis_sparks2; // 0x2a0(0x08)
	struct UNiagaraComponent* VFX_NS_Portcullis_sparks1; // 0x2a8(0x08)
	struct UNiagaraComponent* VFX_NS_Portcullis_sparks; // 0x2b0(0x08)
	struct UAkComponent* Ak_SlamClose_Motion; // 0x2b8(0x08)
	struct USplineComponent* ChainSpline1; // 0x2c0(0x08)
	struct USplineComponent* ChainSpline2; // 0x2c8(0x08)
	struct UOdcObstacleComponent* OdcObstacle; // 0x2d0(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh1; // 0x2d8(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh; // 0x2e0(0x08)
	struct UBoxComponent* GateBox; // 0x2e8(0x08)
	struct USceneComponent* GateTransformOffset; // 0x2f0(0x08)
	struct UChainRenderComponent* ChainRender6; // 0x2f8(0x08)
	struct USplineComponent* ChainSpline6; // 0x300(0x08)
	struct UChainRenderComponent* ChainRender5; // 0x308(0x08)
	struct USplineComponent* ChainSpline5; // 0x310(0x08)
	struct UStaticMeshComponent* Gear_Sm_02; // 0x318(0x08)
	struct UStaticMeshComponent* Gear_Sm_04; // 0x320(0x08)
	struct UStaticMeshComponent* Gear_Sm_03; // 0x328(0x08)
	struct UStaticMeshComponent* Gear_Sm_01; // 0x330(0x08)
	struct UStaticMeshComponent* Gear_Lg_01; // 0x338(0x08)
	struct USceneComponent* IndependentWheels; // 0x340(0x08)
	struct UStaticMeshComponent* SM_GobMine_Lift_Gear_B4; // 0x348(0x08)
	struct UStaticMeshComponent* SM_GobMine_Lift_Gear_B3; // 0x350(0x08)
	struct UStaticMeshComponent* SM_GobMine_Lift_Gear_B2; // 0x358(0x08)
	struct UStaticMeshComponent* SM_GobMine_Lift_Gear_B1; // 0x360(0x08)
	struct UStaticMeshComponent* SM_GobMine_Lift_Gear_B; // 0x368(0x08)
	struct USceneComponent* Gate; // 0x370(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x378(0x08)
	struct UObjectStateComponent* ObjectState; // 0x380(0x08)
	struct UChainRenderComponent* ChainRender4; // 0x388(0x08)
	struct USplineComponent* ChainSpline4; // 0x390(0x08)
	struct UChainRenderComponent* ChainRender3; // 0x398(0x08)
	struct USplineComponent* ChainSpline3; // 0x3a0(0x08)
	struct UChainRenderComponent* ChainRender2; // 0x3a8(0x08)
	struct UChainRenderComponent* ChainRender1; // 0x3b0(0x08)
	struct UAkComponent* AkTopReached; // 0x3b8(0x08)
	struct UAkComponent* AkGateImpact; // 0x3c0(0x08)
	struct UChildActorComponent* AccioRing2; // 0x3c8(0x08)
	struct USceneComponent* GateOpenMinHeight; // 0x3d0(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint_CogClamp; // 0x3d8(0x08)
	struct USceneComponent* MaxGateHeight; // 0x3e0(0x08)
	struct UChildActorComponent* Spinner; // 0x3e8(0x08)
	struct UStaticMeshComponent* StaticFrame; // 0x3f0(0x08)
	struct UStaticMeshComponent* CogClamp; // 0x3f8(0x08)
	struct UStaticMeshComponent* CounterWeight; // 0x400(0x08)
	struct UStaticMeshComponent* MainRoller; // 0x408(0x08)
	float AccioRingForceTimeline_ForceAmount_9D3DF2F94034F0EFA116758E6C9EFC7B; // 0x410(0x04)
	enum class ETimelineDirection AccioRingForceTimeline__Direction_9D3DF2F94034F0EFA116758E6C9EFC7B; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	struct UTimelineComponent* AccioRingForceTimeline; // 0x418(0x08)
	float RollerSpeed; // 0x420(0x04)
	float GateSpeed; // 0x424(0x04)
	float CounterWeightSpeed; // 0x428(0x04)
	float Gravity; // 0x42c(0x04)
	float Friction; // 0x430(0x04)
	float Restitution; // 0x434(0x04)
	float ArrestoDuration; // 0x438(0x04)
	float ArrestoTimeDilation; // 0x43c(0x04)
	float ApexWaitTime; // 0x440(0x04)
	struct FName LockName; // 0x444(0x08)
	float Velocity; // 0x44c(0x04)
	float Projection; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct FTimerHandle ApexWaitTimerHandle; // 0x458(0x08)

	void GetChainRender(struct USplineComponent* ChainSpline, struct UChainRenderComponent*& Result); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.GetChainRender // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void RefreshChainRender(struct USplineComponent* ChainSpline); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.RefreshChainRender // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReleaseClamp(); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.ReleaseClamp // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateChainTopFixed(struct USplineComponent* ChainSpline, float HeightDelta); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.UpdateChainTopFixed // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Integrate(float DeltaTime, float Speed, float& Delta); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.Integrate // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetGateHeightFromRest(float& Height); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.GetGateHeightFromRest // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void IsClampDown(bool& Result); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.IsClampDown // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void IsGateResting(bool& Result); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.IsGateResting // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetNextGateHeight(float DeltaSeconds, float& Height); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.GetNextGateHeight // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetSpinner(struct ABP_HST01_Portcullis_Spinner_C*& Actor); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.GetSpinner // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetAccioRing(struct ABP_HST01_Portcullis_AccioRing_C*& Actor); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.GetAccioRing // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AccioRingForceTimeline__FinishedFunc(); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.AccioRingForceTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void AccioRingForceTimeline__UpdateFunc(); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.AccioRingForceTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnSpinnerHitBySpell(struct FName SpellType); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.OnSpinnerHitBySpell // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddImpulse(float Amount); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.AddImpulse // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FreezeTimerExpired(); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.FreezeTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAccioRingHitBySpell(struct FName SpellType); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.OnAccioRingHitBySpell // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ApexTimerFinished(); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.ApexTimerFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PuzzleSolved(); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.PuzzleSolved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnGateCollision(int32_t Position); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.OnGateCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IntegrateChainAndWheels(float DeltaTime, struct USplineComponent* ChainSpline, struct USceneComponent* ChainWheel, struct USceneComponent* SecondWheel); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.IntegrateChainAndWheels // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HST01_Portcullis(int32_t EntryPoint); // Function BP_HST01_Portcullis.BP_HST01_Portcullis_C.ExecuteUbergraph_BP_HST01_Portcullis // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

