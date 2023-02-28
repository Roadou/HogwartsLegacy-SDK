// BlueprintGeneratedClass DA_Lumos_BP.DA_Lumos_BP_C
// Size: 0x5a1 (Inherited: 0x350)
struct ADA_Lumos_BP_C : ALumosEmberActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct USpotLightComponent* CheapSpotLight1; // 0x358(0x08)
	struct USpotLightComponent* SpotLightBackfill; // 0x360(0x08)
	struct UPointAtActorTargetComponent* PointAtActorTargetBackfill; // 0x368(0x08)
	struct USpotLightComponent* SpotLightMain; // 0x370(0x08)
	struct UPointAtActorTargetComponent* PointAtActorTargetForward; // 0x378(0x08)
	struct USpotLightComponent* CheapSpotLight; // 0x380(0x08)
	struct UOrientToAbsoluteComponent* CheapSpotLightOrientToAbsolute; // 0x388(0x08)
	struct USceneComponent* SandersScenario; // 0x390(0x08)
	struct ULerpVolumesLocalEvaluationComponent* LerpVolumesLocalEvaluation; // 0x398(0x08)
	struct UFillDecalPointLightComponent* FillDecalPointLight; // 0x3a0(0x08)
	struct UPostProcessComponent* LumosPostProcessFX; // 0x3a8(0x08)
	struct UPostProcessComponent* LumosPostProcessExposureSpeed; // 0x3b0(0x08)
	struct UNiagaraComponent* N_LensFlare; // 0x3b8(0x08)
	struct UPointLightComponent* PointLight; // 0x3c0(0x08)
	struct USphereComponent* LightSphere; // 0x3c8(0x08)
	struct USphereComponent* NearbySphere; // 0x3d0(0x08)
	struct USceneComponent* TrickSceneComponent; // 0x3d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3e0(0x08)
	float Timeline_1_Intensity_A945C3874911EA125A6585B91130FFB0; // 0x3e8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_A945C3874911EA125A6585B91130FFB0; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	struct UTimelineComponent* Timeline_2; // 0x3f0(0x08)
	float Timeline_0_Intensity_DE9D388C4AF833C1084549ACDE135179; // 0x3f8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_DE9D388C4AF833C1084549ACDE135179; // 0x3fc(0x01)
	char pad_3FD[0x3]; // 0x3fd(0x03)
	struct UTimelineComponent* Timeline_1; // 0x400(0x08)
	struct TArray<struct AActor*> IgnoreActorList; // 0x408(0x10)
	struct TArray<struct AActor*> OverlappingActors; // 0x418(0x10)
	struct TArray<bool> OverlappingBools; // 0x428(0x10)
	struct TArray<bool> DisableTraceBools; // 0x438(0x10)
	float LightRadius; // 0x448(0x04)
	float LightMinDistance; // 0x44c(0x04)
	struct FDynamicLightAdaptationSettings Exposure Adaptation; // 0x450(0x60)
	float Lens Flare Alpha Factor; // 0x4b0(0x04)
	struct FCharacterLightingFeaturesSettings CharacterLightingFeatures; // 0x4b4(0x40)
	float LightIntensity; // 0x4f4(0x04)
	bool isFading; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float FadingLightIntensityMod; // 0x4fc(0x04)
	struct FLerpVolumesScalarName Lerp Volumes EV Adjust; // 0x500(0x08)
	float LerpVolumesLightIntensityMod; // 0x508(0x04)
	float VolumetricScatteringIntensity; // 0x50c(0x04)
	bool DebugLight; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	struct FLerpVolumesScalarName Lerp Volumes Volumetric Scattering; // 0x514(0x08)
	bool PlayerOwner; // 0x51c(0x01)
	enum class ELumosLightingScenario Lighting Scenario; // 0x51d(0x01)
	char pad_51E[0x2]; // 0x51e(0x02)
	struct FDynamicLightAdaptationSettings Exposure Adaptation Secondary; // 0x520(0x60)
	struct TArray<struct ULightAdaptationComponentChildOfLight*> AdaptationComponents; // 0x580(0x10)
	struct TArray<struct AActor*> StenciledActors; // 0x590(0x10)
	bool DoOverlapTick; // 0x5a0(0x01)

	void UpdateFXPP(float BlendWeight); // Function DA_Lumos_BP.DA_Lumos_BP_C.UpdateFXPP // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupFXPP(bool Reset Blend Weight); // Function DA_Lumos_BP.DA_Lumos_BP_C.SetupFXPP // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLightsVisibility(bool Visible); // Function DA_Lumos_BP.DA_Lumos_BP_C.SetLightsVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get Secondary Light(struct ULocalLightComponent*& Secondary Light, bool& Is Valid Light); // Function DA_Lumos_BP.DA_Lumos_BP_C.Get Secondary Light // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Deregister Adaptation(); // Function DA_Lumos_BP.DA_Lumos_BP_C.Deregister Adaptation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get Main Light(struct ULocalLightComponent*& Main Light); // Function DA_Lumos_BP.DA_Lumos_BP_C.Get Main Light // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SelectLightingScenario(enum class ELumosLightingScenario Scenario, struct ULocalLightComponent*& Main Light); // Function DA_Lumos_BP.DA_Lumos_BP_C.SelectLightingScenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScalabilityChanged(); // Function DA_Lumos_BP.DA_Lumos_BP_C.ScalabilityChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCaster(struct AActor*& Caster, bool& Caster Is Player); // Function DA_Lumos_BP.DA_Lumos_BP_C.GetCaster // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UpdatePlayerOwner(); // Function DA_Lumos_BP.DA_Lumos_BP_C.UpdatePlayerOwner // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ComputeLightRadii(struct FLumosScalabilitySettings Scalability Settings, float& LightAttenuationRadius, float& InnerCutoutRadius, float& OuterCutoutRadius, float& DecalFullRadius); // Function DA_Lumos_BP.DA_Lumos_BP_C.ComputeLightRadii // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void UpdateLightLerpVolumes(struct ULerpVolumesLocalEvaluationComponent* LocalLerpEvaluator); // Function DA_Lumos_BP.DA_Lumos_BP_C.UpdateLightLerpVolumes // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupExposurePP(); // Function DA_Lumos_BP.DA_Lumos_BP_C.SetupExposurePP // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DebugStuff(struct FString Title, int32_t DebugLevel); // Function DA_Lumos_BP.DA_Lumos_BP_C.DebugStuff // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupLightScenario(); // Function DA_Lumos_BP.DA_Lumos_BP_C.SetupLightScenario // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Apply Fading Intensity(float Fade Alpha); // Function DA_Lumos_BP.DA_Lumos_BP_C.Apply Fading Intensity // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildIgnoreActorList(); // Function DA_Lumos_BP.DA_Lumos_BP_C.BuildIgnoreActorList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Apply Light Intensity(); // Function DA_Lumos_BP.DA_Lumos_BP_C.Apply Light Intensity // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndCharacterOverrideShadows(); // Function DA_Lumos_BP.DA_Lumos_BP_C.EndCharacterOverrideShadows // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartOverrideCharacterShadows(); // Function DA_Lumos_BP.DA_Lumos_BP_C.StartOverrideCharacterShadows // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function DA_Lumos_BP.DA_Lumos_BP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function DA_Lumos_BP.DA_Lumos_BP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function DA_Lumos_BP.DA_Lumos_BP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function DA_Lumos_BP.DA_Lumos_BP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function DA_Lumos_BP.DA_Lumos_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__LightSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DA_Lumos_BP.DA_Lumos_BP_C.BndEvt__LightSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__LightSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DA_Lumos_BP.DA_Lumos_BP_C.BndEvt__LightSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__NearbySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DA_Lumos_BP.DA_Lumos_BP_C.BndEvt__NearbySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function DA_Lumos_BP.DA_Lumos_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__NearbySphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DA_Lumos_BP.DA_Lumos_BP_C.BndEvt__NearbySphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void LocalLerpEval(struct ULerpVolumesLocalEvaluationComponent* LerpVolumesLocalEvaluationComponent); // Function DA_Lumos_BP.DA_Lumos_BP_C.LocalLerpEval // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LumosScalabilitySettingsAssetChanged(struct UObject* Caller); // Function DA_Lumos_BP.DA_Lumos_BP_C.LumosScalabilitySettingsAssetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LumosFadeOut(struct UObject* Caller, int32_t int); // Function DA_Lumos_BP.DA_Lumos_BP_C.LumosFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_DA_Lumos_BP(int32_t EntryPoint); // Function DA_Lumos_BP.DA_Lumos_BP_C.ExecuteUbergraph_DA_Lumos_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

