// BlueprintGeneratedClass BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C
// Size: 0x364 (Inherited: 0x248)
struct ABP_WorldTeleport_Swimming_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UEmissiveAdaptationFixedOverrideComponent* EmissiveAdaptationFixedOverride; // 0x250(0x08)
	struct UNiagaraComponent* WhirlpoolFX; // 0x258(0x08)
	struct UChildActorComponent* BP_TeleportSwimming_Marker; // 0x260(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268(0x08)
	struct UAkComponent* Ak_BP_WorldTeleport_Swimming; // 0x270(0x08)
	struct USphereComponent* Sphere; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct FVector Trigger Size; // 0x288(0x0c)
	float RiseDelay; // 0x294(0x04)
	struct AActor* Teleport Destination; // 0x298(0x08)
	struct FVector TeleportDestinationOffset; // 0x2a0(0x0c)
	bool InTheSameLevel; // 0x2ac(0x01)
	bool UnderwaterVault - IsEntrance; // 0x2ad(0x01)
	bool UnderwaterVault - IsUWVault; // 0x2ae(0x01)
	bool StartActivated; // 0x2af(0x01)
	bool UseFadeInOut; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float FadePreDelay; // 0x2b4(0x04)
	float Fade Duration; // 0x2b8(0x04)
	float FadeOutDuration; // 0x2bc(0x04)
	float FadeInDuration; // 0x2c0(0x04)
	bool bTraceOverride; // 0x2c4(0x01)
	bool Use FastTravel; // 0x2c5(0x01)
	char pad_2C6[0x2]; // 0x2c6(0x02)
	struct FString Location ID (Destination); // 0x2c8(0x10)
	bool TuneWhirlpoolFX; // 0x2d8(0x01)
	bool UseParticleFX; // 0x2d9(0x01)
	bool IsOnDynamicSurface; // 0x2da(0x01)
	char pad_2DB[0x1]; // 0x2db(0x01)
	float SurfaceOffset; // 0x2dc(0x04)
	struct FLinearColor Color; // 0x2e0(0x10)
	float EmissionRadius; // 0x2f0(0x04)
	float Emission Rate Scale; // 0x2f4(0x04)
	float RiseVelocityScale; // 0x2f8(0x04)
	float OpacitySpray; // 0x2fc(0x04)
	float System Intensity; // 0x300(0x04)
	float System Opacity; // 0x304(0x04)
	float System Scale; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct TSoftObjectPtr<UWorld> Level To Load; // 0x310(0x28)
	struct FString UnderwaterVault - LevelName; // 0x338(0x10)
	struct FString Player Start Tag; // 0x348(0x10)
	bool PlayerDisabledPushed; // 0x358(0x01)
	bool DivingContextSet; // 0x359(0x01)
	char pad_35A[0x2]; // 0x35a(0x02)
	struct FName BeaconableObjectID; // 0x35c(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RunFadeOut(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.RunFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RunFadeIn(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.RunFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartFX(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.StartFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StopFX(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.StopFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopStartBehavior(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.StopStartBehavior // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateBehavior(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.ActivateBehavior // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeactivateBehaviour(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.DeactivateBehaviour // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartAudioFX(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.StartAudioFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopAudioFX(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.StopAudioFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MovementModeChanged(struct UObject* Caller); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopDisable(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.PopDisable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RemoveDivingContext(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.RemoveDivingContext // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RenderSmoothTransitionStart(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.RenderSmoothTransitionStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTeleport(struct FVector PrevLocation, struct FRotator PrevRotation, bool bIsATest, bool bNoCheck, bool bSuccess); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.OnTeleport // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RenderSmoothTransitionEnd(); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.RenderSmoothTransitionEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WorldTeleport_Swimming(int32_t EntryPoint); // Function BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.ExecuteUbergraph_BP_WorldTeleport_Swimming // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

