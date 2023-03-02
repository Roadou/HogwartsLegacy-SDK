// BlueprintGeneratedClass BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C
// Size: 0x3b0 (Inherited: 0x318)
struct ABP_WE_ITITG_SplineMover_C : ABP_WE_SplineMover_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USphereComponent* DragonWingTipCollisionRight; // 0x320(0x08)
	struct USphereComponent* DragonWingTipCollisionLeft; // 0x328(0x08)
	struct USphereComponent* DragonHeadCollision; // 0x330(0x08)
	float DragonExitDrinkingBlend_ExitDrinkingBlend_BBDA03524E2C516D8B6B72B92AE53D8B; // 0x338(0x04)
	enum class ETimelineDirection DragonExitDrinkingBlend__Direction_BBDA03524E2C516D8B6B72B92AE53D8B; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct UTimelineComponent* DragonExitDrinkingBlend; // 0x340(0x08)
	float DragonPitch; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct ATriggerBox* WaterVFX_TriggerBox; // 0x350(0x08)
	struct TArray<struct FName> WaterSprayEmitters; // 0x358(0x10)
	float TargetVelocity; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct AWorldEventLocationActor* WorldEventLocator; // 0x370(0x08)
	float SplineLength; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct UNiagaraComponent* Water_VFX_Head; // 0x380(0x08)
	struct FTimerHandle IdleFlapTimer; // 0x388(0x08)
	float IdleWingFlapBoost; // 0x390(0x04)
	bool DragonAscend; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct UNiagaraComponent* Water_VFX_LeftWing; // 0x398(0x08)
	struct UNiagaraComponent* Water_VFX_RightWing; // 0x3a0(0x08)
	struct UABP_WE_DRAGON_DRINK_TO_GO_C* As ABP WE DRAGON DRINK TO GO; // 0x3a8(0x08)

	void StopWaterVFX(struct UObject* VFXCollider, struct UNiagaraComponent* VFX); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.StopWaterVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnWaterVFX(struct UNiagaraComponent* VFX, struct AActor* Actor, struct USphereComponent* VFXCollider, struct UNiagaraComponent*& WaterVFX); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.SpawnWaterVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonAscensionBoost(); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.DragonAscensionBoost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerEvent(struct UObject* Other Actor, struct FDelegate& Delegate); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.TriggerEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopEventTick(); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.StopEventTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonPitchShiftVelocity(); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.DragonPitchShiftVelocity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonWingFlapBlend(); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.DragonWingFlapBlend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonPredicitFlapBlend(); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.DragonPredicitFlapBlend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonExitDrinkingBlend__FinishedFunc(); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.DragonExitDrinkingBlend__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void DragonExitDrinkingBlend__UpdateFunc(); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.DragonExitDrinkingBlend__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerA(struct FVector Location); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.Event_WE_TriggerA // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerB(struct FVector Location); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.Event_WE_TriggerB // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DragonHeadCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.BndEvt__DragonHeadCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DragonHeadCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.BndEvt__DragonHeadCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerC(struct FVector Location); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.Event_WE_TriggerC // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Event_WE_TriggerD(struct FVector Location); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.Event_WE_TriggerD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SocketTriggerOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.SocketTriggerOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CameraShake(); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.CameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DragonWingTipCollisionLeft_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.BndEvt__DragonWingTipCollisionLeft_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DragonWingTipCollisionLeft_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.BndEvt__DragonWingTipCollisionLeft_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DragonWingTipCollisionRight_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.BndEvt__DragonWingTipCollisionRight_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DragonWingTipCollisionRight_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.BndEvt__DragonWingTipCollisionRight_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_ITITG_SplineMover(int32_t EntryPoint); // Function BP_WE_ITITG_SplineMover.BP_WE_ITITG_SplineMover_C.ExecuteUbergraph_BP_WE_ITITG_SplineMover // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

