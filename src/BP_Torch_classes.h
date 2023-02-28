// BlueprintGeneratedClass BP_Torch.BP_Torch_C
// Size: 0x839 (Inherited: 0x510)
struct ABP_Torch_C : ATorch {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct UAnimatedLightComponent* AnimatedLight; // 0x518(0x08)
	struct UAkComponent* Ak_BP_Torch; // 0x520(0x08)
	struct USphereComponent* PropagateTrigger; // 0x528(0x08)
	struct UPointLightComponent* IndirectLight; // 0x530(0x08)
	struct USpotLightComponent* SpotLight; // 0x538(0x08)
	struct UPointLightComponent* PointLight; // 0x540(0x08)
	struct UNiagaraComponent* FireParticle; // 0x548(0x08)
	struct UObjectStateComponent* ObjectState; // 0x550(0x08)
	float Lightswitch_Timeline_Intensity_Percent_656EDB6C49C67839276729BFD7783D32; // 0x558(0x04)
	enum class ETimelineDirection Lightswitch_Timeline__Direction_656EDB6C49C67839276729BFD7783D32; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct UTimelineComponent* Lightswitch_Timeline; // 0x560(0x08)
	float Timeline_1_NewTrack_0_EDCBDBEC444AB99094E6A19E1ACC4925; // 0x568(0x04)
	enum class ETimelineDirection Timeline_1__Direction_EDCBDBEC444AB99094E6A19E1ACC4925; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x570(0x08)
	enum class EEnvironment Environment; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	int32_t PropIndex; // 0x57c(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x580(0x50)
	int32_t EnvInt; // 0x5d0(0x04)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct FMulticastInlineDelegate OnLit; // 0x5d8(0x10)
	struct FMulticastInlineDelegate OnExtinguished; // 0x5e8(0x10)
	struct TArray<struct AActor*> Switch Target; // 0x5f8(0x10)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, enum class E_TorchFireSize> TorchMeshToTorchSize; // 0x608(0x50)
	char pad_658[0x8]; // 0x658(0x08)
	struct FTransform DPC_InitialTransform_1; // 0x660(0x30)
	struct FMulticastInlineDelegate ArrestoStart; // 0x690(0x10)
	struct FMulticastInlineDelegate TorchDamaged; // 0x6a0(0x10)
	struct ALightClippingPlanes* Light Clipping Planes Actor; // 0x6b0(0x08)
	bool Invert Clipping Planes; // 0x6b8(0x01)
	bool On During Day; // 0x6b9(0x01)
	bool Point Light On; // 0x6ba(0x01)
	bool Spot Light On; // 0x6bb(0x01)
	enum class E_LightFixture_Default OL Default Type; // 0x6bc(0x01)
	char pad_6BD[0x3]; // 0x6bd(0x03)
	struct TArray<struct FName> Light Type Input Names; // 0x6c0(0x10)
	struct TMap<int32_t, bool> Needs Texture Check; // 0x6d0(0x50)
	float Near Shadow Clipping Plane; // 0x720(0x04)
	bool Run Easy Set Up; // 0x724(0x01)
	char pad_725[0x3]; // 0x725(0x03)
	struct TArray<int32_t> OLESU_Castle; // 0x728(0x10)
	struct TArray<int32_t> OLESU_Cairn; // 0x738(0x10)
	struct TArray<int32_t> OLESU_Cavern; // 0x748(0x10)
	struct TArray<int32_t> OLESU_Overland; // 0x758(0x10)
	bool Default Type Override; // 0x768(0x01)
	bool Use Mesh To System; // 0x769(0x01)
	char pad_76A[0x6]; // 0x76a(0x06)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, struct TSoftObjectPtr<UNiagaraSystem>> MeshToFireSystem; // 0x770(0x50)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, struct TSoftObjectPtr<UNiagaraSystem>> MeshToPhysicsSystem; // 0x7c0(0x50)
	struct ALightClippingVolume* Light Clipping Volumes Actor; // 0x810(0x08)
	enum class ELightClippingProviderVolumeMode Volume Mode; // 0x818(0x01)
	char pad_819[0x3]; // 0x819(0x03)
	float Max Draw Distance; // 0x81c(0x04)
	float Draw Distance Fade Range; // 0x820(0x04)
	struct FRandomStream Random Seed; // 0x824(0x08)
	struct FVector Sound Offset; // 0x82c(0x0c)
	bool BlockCameraCol; // 0x838(0x01)

	bool DisallowArrestoMomentum(); // Function BP_Torch.BP_Torch_C.DisallowArrestoMomentum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_Torch.BP_Torch_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseWetness(struct AActor* Instigator, float increaseAmount, struct FVector Location); // Function BP_Torch.BP_Torch_C.IncreaseWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartWetness(struct AActor* Instigator, float Amount, struct FVector Location); // Function BP_Torch.BP_Torch_C.StartWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DecreaseFire(float decreaseAmount); // Function BP_Torch.BP_Torch_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_Torch.BP_Torch_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_Torch.BP_Torch_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_Torch.BP_Torch_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ShouldStartLit(); // Function BP_Torch.BP_Torch_C.ShouldStartLit // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	enum class E_LightFixture_Default Auto Easy Set Up(); // Function BP_Torch.BP_Torch_C.Auto Easy Set Up // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Point Light Texture(); // Function BP_Torch.BP_Torch_C.Set Point Light Texture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Run Construction(); // Function BP_Torch.BP_Torch_C.Run Construction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OL Easy Set Up(); // Function BP_Torch.BP_Torch_C.OL Easy Set Up // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ConstructTorch(); // Function BP_Torch.BP_Torch_C.ConstructTorch // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ParticleSetup(); // Function BP_Torch.BP_Torch_C.ParticleSetup // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float PropagationSetup(); // Function BP_Torch.BP_Torch_C.PropagationSetup // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	char ModFunctionSetup(); // Function BP_Torch.BP_Torch_C.ModFunctionSetup // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Torch.BP_Torch_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_Torch.BP_Torch_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_Torch.BP_Torch_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Lightswitch_Timeline__FinishedFunc(); // Function BP_Torch.BP_Torch_C.Lightswitch_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Lightswitch_Timeline__UpdateFunc(); // Function BP_Torch.BP_Torch_C.Lightswitch_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void DayNightMoonEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, enum class EMoonPhaseName Phase, bool bLate); // Function BP_Torch.BP_Torch_C.DayNightMoonEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_Torch.BP_Torch_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_Torch.BP_Torch_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDecreaseWetness(float decreaseAmount); // Function BP_Torch.BP_Torch_C.OnDecreaseWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDry(struct AActor* Instigator); // Function BP_Torch.BP_Torch_C.OnDry // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToWet(); // Function BP_Torch.BP_Torch_C.OnFailedToWet // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_Torch.BP_Torch_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_Torch.BP_Torch_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_Torch.BP_Torch_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_Torch.BP_Torch_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Torch.BP_Torch_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void EndLight(bool bLerp); // Function BP_Torch.BP_Torch_C.EndLight // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExtinguishLight(bool bSlow); // Function BP_Torch.BP_Torch_C.ExtinguishLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequentialLight(struct FVector LightLoc); // Function BP_Torch.BP_Torch_C.SequentialLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_Torch.BP_Torch_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_Torch.BP_Torch_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToApplyWetness(float Amount, struct FVector Location); // Function BP_Torch.BP_Torch_C.OnAttemptToApplyWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnEnterLightTickRange(struct ULightComponent* LightComponent); // Function BP_Torch.BP_Torch_C.OnEnterLightTickRange // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitLightTickRange(struct ULightComponent* LightComponent); // Function BP_Torch.BP_Torch_C.OnExitLightTickRange // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_Torch.BP_Torch_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Stop_Lerp(); // Function BP_Torch.BP_Torch_C.Stop_Lerp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumBegin(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation); // Function BP_Torch.BP_Torch_C.OnArrestoMomentumBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumEnd(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent); // Function BP_Torch.BP_Torch_C.OnArrestoMomentumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_Torch.BP_Torch_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Lightswitch_Lerp(bool bOn); // Function BP_Torch.BP_Torch_C.Lightswitch_Lerp // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DayNightSunEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate); // Function BP_Torch.BP_Torch_C.DayNightSunEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Torch(int32_t EntryPoint); // Function BP_Torch.BP_Torch_C.ExecuteUbergraph_BP_Torch // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void TorchDamaged__DelegateSignature(float Damage, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator); // Function BP_Torch.BP_Torch_C.TorchDamaged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ArrestoStart__DelegateSignature(bool bStart, struct UArrestoMomentumComponent* ArrestoComp, float TimeDilation); // Function BP_Torch.BP_Torch_C.ArrestoStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExtinguished__DelegateSignature(struct ABP_Torch_C* Torch); // Function BP_Torch.BP_Torch_C.OnExtinguished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLit__DelegateSignature(struct ABP_Torch_C* Torch); // Function BP_Torch.BP_Torch_C.OnLit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

