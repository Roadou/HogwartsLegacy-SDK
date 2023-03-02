// BlueprintGeneratedClass BP_Dragons_Base.BP_Dragons_Base_C
// Size: 0x2580 (Inherited: 0x24c4)
struct ABP_Dragons_Base_C : ANone {
	char pad_24C4[0x4]; // 0x24c4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x24c8(0x08)
	struct USphereComponent* NeckCollision2; // 0x24d0(0x08)
	struct USphereComponent* NeckCollision; // 0x24d8(0x08)
	struct UQuadrupedSpineComponent* QuadrupedSpine; // 0x24e0(0x08)
	struct UAnimationComponent* Animation; // 0x24e8(0x08)
	struct UVegetationInteractionComponentBiped* VegetationInteractionComponentBiped; // 0x24f0(0x08)
	struct UBoxComponent* DragonBodyCollision; // 0x24f8(0x08)
	struct UBoxComponent* RightElbowCollision; // 0x2500(0x08)
	struct UBoxComponent* LeftElbowCollision; // 0x2508(0x08)
	struct USphereComponent* MouthAttackCollision; // 0x2510(0x08)
	float Timeline_1_NewTrack_0_2B6D13AB442BEB567C5653A8B5228DAA; // 0x2518(0x04)
	enum class ETimelineDirection Timeline_1__Direction_2B6D13AB442BEB567C5653A8B5228DAA; // 0x251c(0x01)
	char pad_251D[0x3]; // 0x251d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2520(0x08)
	float Timeline_0_SpawnMult_720BE27B456892B07B2B6A9AD28E3887; // 0x2528(0x04)
	enum class ETimelineDirection Timeline_0__Direction_720BE27B456892B07B2B6A9AD28E3887; // 0x252c(0x01)
	char pad_252D[0x3]; // 0x252d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2530(0x08)
	struct FTimerHandle TimerHandle; // 0x2538(0x08)
	struct UNiagaraComponent* NiagaraDragonFireEffect; // 0x2540(0x08)
	struct FVector FireDirection; // 0x2548(0x0c)
	int32_t DragonFireLoop; // 0x2554(0x04)
	float DragonFirePuffDelay; // 0x2558(0x04)
	float FirePuffTickTime; // 0x255c(0x04)
	struct UEnemyAIAttackData* FireSwipeAttackData; // 0x2560(0x08)
	struct FTimerHandle PuffTimerHandle; // 0x2568(0x08)
	struct ABP_DragonFireActor_C* DragonFireActor; // 0x2570(0x08)
	struct UAkComponent* Ak_dragon_fire_motion; // 0x2578(0x08)

	void SendMuntionHitOnOverlap(struct FHitResult& Hit); // Function BP_Dragons_Base.BP_Dragons_Base_C.SendMuntionHitOnOverlap // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Dragons_Base.BP_Dragons_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_Dragons_Base.BP_Dragons_Base_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_Dragons_Base.BP_Dragons_Base_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_Dragons_Base.BP_Dragons_Base_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_Dragons_Base.BP_Dragons_Base_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void EnableMouthCollision(struct UObject* Caller); // Function BP_Dragons_Base.BP_Dragons_Base_C.EnableMouthCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableMouthCollision(struct UObject* Caller); // Function BP_Dragons_Base.BP_Dragons_Base_C.DisableMouthCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FirePuffTick(); // Function BP_Dragons_Base.BP_Dragons_Base_C.FirePuffTick // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__LeftElbowCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Dragons_Base.BP_Dragons_Base_C.BndEvt__LeftElbowCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__RightElbowCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Dragons_Base.BP_Dragons_Base_C.BndEvt__RightElbowCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DragonBodyCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Dragons_Base.BP_Dragons_Base_C.BndEvt__DragonBodyCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void DragonFireStart(struct UObject* Caller); // Function BP_Dragons_Base.BP_Dragons_Base_C.DragonFireStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRagdollEnd(); // Function BP_Dragons_Base.BP_Dragons_Base_C.OnRagdollEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAboutToDie(); // Function BP_Dragons_Base.BP_Dragons_Base_C.OnAboutToDie // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRagdollStart(); // Function BP_Dragons_Base.BP_Dragons_Base_C.OnRagdollStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__MouthAttackCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Dragons_Base.BP_Dragons_Base_C.BndEvt__MouthAttackCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Dragons_Base.BP_Dragons_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnImpact(struct AMunitionType_Base* MunitionInstance, struct FMunitionImpactData& MunitionImpactData); // Function BP_Dragons_Base.BP_Dragons_Base_C.OnImpact // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetDragonStartGate(); // Function BP_Dragons_Base.BP_Dragons_Base_C.ResetDragonStartGate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReactionQueuedEvent(struct UAblReactionData* ReactionData, struct UAblReactionComponent* ReactionComponent); // Function BP_Dragons_Base.BP_Dragons_Base_C.ReactionQueuedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableBeaconTimer(); // Function BP_Dragons_Base.BP_Dragons_Base_C.DisableBeaconTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyFireActor(); // Function BP_Dragons_Base.BP_Dragons_Base_C.DestroyFireActor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FireMunition(); // Function BP_Dragons_Base.BP_Dragons_Base_C.FireMunition // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonFireStop(struct UObject* Caller); // Function BP_Dragons_Base.BP_Dragons_Base_C.DragonFireStop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Dragons_Base(int32_t EntryPoint); // Function BP_Dragons_Base.BP_Dragons_Base_C.ExecuteUbergraph_BP_Dragons_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

