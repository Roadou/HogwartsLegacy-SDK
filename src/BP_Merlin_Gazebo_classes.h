// BlueprintGeneratedClass BP_Merlin_Gazebo.BP_Merlin_Gazebo_C
// Size: 0x410 (Inherited: 0x268)
struct ABP_Merlin_Gazebo_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct ULocalStencilBoundsHintComponent* LocalStencilBoundsHint; // 0x270(0x08)
	struct USkeletalMeshComponent* Gazebo_ActivationBase; // 0x278(0x08)
	struct USkeletalMeshComponent* Gazebo_Base; // 0x280(0x08)
	struct USceneComponent* Gazebo_Root; // 0x288(0x08)
	struct USkeletalMeshComponent* Gazebo_Foliage; // 0x290(0x08)
	struct USkeletalMeshComponent* Gazebo_Pillars2; // 0x298(0x08)
	struct USkeletalMeshComponent* Gazebo_Roots; // 0x2a0(0x08)
	struct USkeletalMeshComponent* Gazebo_Pillars; // 0x2a8(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2b0(0x08)
	struct USphereComponent* SpellSphere; // 0x2b8(0x08)
	struct USphereComponent* PlayerSphere; // 0x2c0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c8(0x08)
	struct UBoxComponent* Box7; // 0x2d0(0x08)
	struct UBoxComponent* Box6; // 0x2d8(0x08)
	struct UBoxComponent* Box5; // 0x2e0(0x08)
	struct UBoxComponent* Box4; // 0x2e8(0x08)
	struct UBoxComponent* Box3; // 0x2f0(0x08)
	struct UBoxComponent* Box2; // 0x2f8(0x08)
	struct UBoxComponent* Box1; // 0x300(0x08)
	struct UBoxComponent* Box; // 0x308(0x08)
	struct UCapsuleComponent* Pillar_Collision4; // 0x310(0x08)
	struct UCapsuleComponent* Pillar_Collision3; // 0x318(0x08)
	struct UCapsuleComponent* Pillar_Collision2; // 0x320(0x08)
	struct UCapsuleComponent* Pillar_Collision1; // 0x328(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x330(0x08)
	float PillarPlayRate; // 0x338(0x04)
	float RandDelay; // 0x33c(0x04)
	int32_t Time1; // 0x340(0x04)
	int32_t Time2; // 0x344(0x04)
	bool bSolved; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FMulticastInlineDelegate Activated; // 0x350(0x10)
	bool bMissionLock; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FHermesBPDelegateHandle InteractHandle; // 0x368(0x10)
	struct USceneRig* ActivationSR; // 0x378(0x08)
	struct USceneRig_Interaction* GazeboSR; // 0x380(0x08)
	struct FRotator RotationalOffset; // 0x388(0x0c)
	struct FVector LocationOffset; // 0x394(0x0c)
	struct ASceneRigActor* ActivationSRActor; // 0x3a0(0x08)
	struct ASceneRigActor* GazeboSRActor; // 0x3a8(0x08)
	bool bCollected; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct UNiagaraComponent* CollectibleLoopSystem; // 0x3b8(0x08)
	struct FMulticastInlineDelegate MerlinGazeboStarted; // 0x3c0(0x10)
	struct UNiagaraComponent* FX_ActivationBaseGlowStone; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct FTransform StencilBounds_Large; // 0x3e0(0x30)

	void PlayFinishedScenerig(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.PlayFinishedScenerig // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayActivationSceneRig(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.PlayActivationSceneRig // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Start(float Delay, bool bSolved); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CollisionRise1(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.CollisionRise1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CollisionRise2(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.CollisionRise2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Inactive(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.Inactive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void MissionUnlock(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.MissionUnlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void GazeboSRFinished(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.GazeboSRFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GazeboRevealedAudio(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.GazeboRevealedAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivationSRFinished(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.ActivationSRFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateCollectibleLoop(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.CreateCollectibleLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCollected(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.SetCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateCollectible(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.CreateCollectible // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Deactivate(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.Deactivate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Merlin_Gazebo(int32_t EntryPoint); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.ExecuteUbergraph_BP_Merlin_Gazebo // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void MerlinGazeboStarted__DelegateSignature(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.MerlinGazeboStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Activated__DelegateSignature(); // Function BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.Activated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

