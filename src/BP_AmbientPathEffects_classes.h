// BlueprintGeneratedClass BP_AmbientPathEffects.BP_AmbientPathEffects_C
// Size: 0x368 (Inherited: 0x248)
struct ABP_AmbientPathEffects_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAnimatedLightComponent* AnimatedLight; // 0x250(0x08)
	struct UAkComponent* AkComponent; // 0x258(0x08)
	struct UPointLightComponent* PointLight1; // 0x260(0x08)
	struct UBillboardComponent* Billboard; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float Timeline_1_NewTrack_0_398D182D492E4648424A52A1A4117CF4; // 0x278(0x04)
	enum class ETimelineDirection Timeline_1__Direction_398D182D492E4648424A52A1A4117CF4; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x280(0x08)
	float DistanceLoadInArea; // 0x288(0x04)
	float PlayRate; // 0x28c(0x04)
	float EffectScale; // 0x290(0x04)
	float MinTimerDelay; // 0x294(0x04)
	float MaxTimerDelay; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<int32_t> StopPointsOnSpline; // 0x2a0(0x10)
	bool CanPlay; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float AccumulatedTime; // 0x2b4(0x04)
	float RandomTimer; // 0x2b8(0x04)
	enum class E_InputSelection ETypeSelection; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UNiagaraComponent* selectedNiagara; // 0x2c0(0x08)
	struct UParticleSystemComponent* selectedCascade; // 0x2c8(0x08)
	struct UStaticMeshComponent* selectedMesh; // 0x2d0(0x08)
	struct UNiagaraSystem* NiagaraSystem; // 0x2d8(0x08)
	struct UParticleSystem* ParticleSystem; // 0x2e0(0x08)
	struct UStaticMesh* StaticMesh; // 0x2e8(0x08)
	bool AutoPlay; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct ATriggerVolume* TriggerVolume; // 0x2f8(0x08)
	struct TArray<struct USplineComponent*> SplineArray; // 0x300(0x10)
	int32_t number of paths; // 0x310(0x04)
	int32_t ChosenPath; // 0x314(0x04)
	bool overwritten splines; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float OriginalPlayrate; // 0x31c(0x04)
	bool PointLightTurnedOn; // 0x320(0x01)
	bool PlayOnlyOnce; // 0x321(0x01)
	bool LoopFinished; // 0x322(0x01)
	char pad_323[0x1]; // 0x323(0x01)
	float LightIntensity; // 0x324(0x04)
	bool MoveBasedOnPlayerVicinity; // 0x328(0x01)
	bool PlayerInteraction; // 0x329(0x01)
	char pad_32A[0x2]; // 0x32a(0x02)
	float StopPointProximity; // 0x32c(0x04)
	struct UAkAudioEvent* AkEvent; // 0x330(0x08)
	float Distance; // 0x338(0x04)
	float TriggerDistance; // 0x33c(0x04)
	struct FVector AkComponentLocation; // 0x340(0x0c)
	struct FVector OldAkComponentLocation; // 0x34c(0x0c)
	float TriggerSpeed; // 0x358(0x04)
	bool AudioOnlyOnce; // 0x35c(0x01)
	bool IsEventPlaying; // 0x35d(0x01)
	bool initialTrigger; // 0x35e(0x01)
	bool Set Niagara SpawnAmount; // 0x35f(0x01)
	int32_t SpawnAmount; // 0x360(0x04)
	float TickDistance; // 0x364(0x04)

	void UserConstructionScript(); // Function BP_AmbientPathEffects.BP_AmbientPathEffects_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_AmbientPathEffects.BP_AmbientPathEffects_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_AmbientPathEffects.BP_AmbientPathEffects_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AmbientPathEffects.BP_AmbientPathEffects_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SpawnParticles(); // Function BP_AmbientPathEffects.BP_AmbientPathEffects_C.SpawnParticles // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_AmbientPathEffects.BP_AmbientPathEffects_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_AmbientPathEffects.BP_AmbientPathEffects_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CheckIfParticlesCanBePlayed(); // Function BP_AmbientPathEffects.BP_AmbientPathEffects_C.CheckIfParticlesCanBePlayed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckIfSFXCanBePlayed(); // Function BP_AmbientPathEffects.BP_AmbientPathEffects_C.CheckIfSFXCanBePlayed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AmbientPathEffects.BP_AmbientPathEffects_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AmbientPathEffects(int32_t EntryPoint); // Function BP_AmbientPathEffects.BP_AmbientPathEffects_C.ExecuteUbergraph_BP_AmbientPathEffects // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

