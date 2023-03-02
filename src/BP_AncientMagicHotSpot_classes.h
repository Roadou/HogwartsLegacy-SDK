// BlueprintGeneratedClass BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C
// Size: 0x88c (Inherited: 0x328)
struct ABP_AncientMagicHotSpot_C : AAncientMagicHotSpot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UAkComponent* Ak_BP_AncientMagicHotSpot; // 0x330(0x08)
	struct UNiagaraComponent* VFX_NS_AncMag_Hotspot_Hint; // 0x338(0x08)
	struct UChildActorComponent* MarkerComponent; // 0x340(0x08)
	struct USceneComponent* Scene; // 0x348(0x08)
	struct USceneComponent* CallOutAttach; // 0x350(0x08)
	struct UNiagaraComponent* N_Dissipate; // 0x358(0x08)
	struct UNiagaraComponent* N_Hint_Bubbles; // 0x360(0x08)
	struct UDecalComponent* Decal_Hint; // 0x368(0x08)
	struct UNiagaraComponent* N_Bubbles2; // 0x370(0x08)
	struct UNiagaraComponent* N_Bubbles1; // 0x378(0x08)
	struct UNiagaraComponent* N_Bubbles; // 0x380(0x08)
	struct UNiagaraComponent* N_BubbleSpawn; // 0x388(0x08)
	struct UDecalComponent* Decal_Ground; // 0x390(0x08)
	struct UArrowComponent* LOC_Decal; // 0x398(0x08)
	struct UPointLightComponent* PointLight; // 0x3a0(0x08)
	struct UArrowComponent* LOC_Center; // 0x3a8(0x08)
	struct UNiagaraComponent* N_ActiveBurst; // 0x3b0(0x08)
	struct UNiagaraComponent* N_ActiveLoop; // 0x3b8(0x08)
	struct USceneComponent* VFX; // 0x3c0(0x08)
	struct USphereComponent* Sphere; // 0x3c8(0x08)
	struct UAncientMagicEffect_Nova* AncientMagicEffect_Nova; // 0x3d0(0x08)
	float LightAnim_Burst_RadiusLerp_DE83D95A405A075FE893F7846C90CDBF; // 0x3d8(0x04)
	float LightAnim_Burst_LightBurstScale_DE83D95A405A075FE893F7846C90CDBF; // 0x3dc(0x04)
	enum class ETimelineDirection LightAnim_Burst__Direction_DE83D95A405A075FE893F7846C90CDBF; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct UTimelineComponent* LightAnim_Burst; // 0x3e8(0x08)
	float LightAnim_01_RadiusLerp_3408598B4E210385D36C3B8AF4D8A3E8; // 0x3f0(0x04)
	float LightAnim_01_LightBurstScale_3408598B4E210385D36C3B8AF4D8A3E8; // 0x3f4(0x04)
	enum class ETimelineDirection LightAnim_01__Direction_3408598B4E210385D36C3B8AF4D8A3E8; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct UTimelineComponent* LightAnim_01; // 0x400(0x08)
	float HintDecal_Timeline_Alpha_BED51BA2437EF50CAF8875B057573C59; // 0x408(0x04)
	enum class ETimelineDirection HintDecal_Timeline__Direction_BED51BA2437EF50CAF8875B057573C59; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	struct UTimelineComponent* HintDecal_Timeline; // 0x410(0x08)
	float Timeline_0_Light_Offset_Lerp_FE6106F746DDBD432157769C08101B1D; // 0x418(0x04)
	float Timeline_0_Opacity_Normal_FE6106F746DDBD432157769C08101B1D; // 0x41c(0x04)
	float Timeline_0_Radius_FE6106F746DDBD432157769C08101B1D; // 0x420(0x04)
	float Timeline_0_Alpha_FE6106F746DDBD432157769C08101B1D; // 0x424(0x04)
	float Timeline_0_Emissive_FE6106F746DDBD432157769C08101B1D; // 0x428(0x04)
	enum class ETimelineDirection Timeline_0__Direction_FE6106F746DDBD432157769C08101B1D; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x430(0x08)
	enum class EEnvironment Environment; // 0x438(0x01)
	enum class EEnvironment EnvironmentOverride; // 0x439(0x01)
	char pad_43A[0x6]; // 0x43a(0x06)
	struct TArray<struct AActor*> OBJRevealList; // 0x440(0x10)
	struct TArray<struct AActor*> OBJHideList; // 0x450(0x10)
	struct TArray<struct AActor*> SwitchTarget; // 0x460(0x10)
	bool OverrideRevealandHide; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct TArray<struct AActor*> ActorsToReset; // 0x478(0x10)
	struct AActor* LookAtObject; // 0x488(0x08)
	float LookAtTimer; // 0x490(0x04)
	bool ParticleActive; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	struct TArray<struct FTransform> ActorResetLOCS; // 0x498(0x10)
	struct AActor* NullActor; // 0x4a8(0x08)
	bool FirstTimeDetection; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	float OriginalInnerRadius; // 0x4b4(0x04)
	bool bOverland; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct TArray<struct FSTR_AncientMagicPickups> PickupArray; // 0x4c0(0x10)
	struct TArray<struct ABP_AncientMagic_Pickup_C*> Pickups; // 0x4d0(0x10)
	int32_t PickupNum; // 0x4e0(0x04)
	int32_t PickupsAbsorbed; // 0x4e4(0x04)
	struct TMap<struct AActor*, struct FName> ResetTag; // 0x4e8(0x50)
	struct AAncientGate* Gate; // 0x538(0x08)
	bool IsActivated; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	float OuterDistanceRatio; // 0x544(0x04)
	struct UMaterialInstanceDynamic* MAT_Decal; // 0x548(0x08)
	float LightIntensity; // 0x550(0x04)
	bool FadeInStarted; // 0x554(0x01)
	bool UpperBodyAbilityInPlay; // 0x555(0x01)
	bool UpperBodyAbilityDisabled; // 0x556(0x01)
	char pad_557[0x1]; // 0x557(0x01)
	struct FString IncrementStat; // 0x558(0x10)
	bool FakeHotSpot; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct FMulticastInlineDelegate HotSpotTriggered; // 0x570(0x10)
	struct USkinFXComponent* SkinFX; // 0x580(0x08)
	struct TArray<struct FMaterialSwapVectorParameter> MatSwapParams_Vector_Hotspot; // 0x588(0x10)
	struct FString PickupStat; // 0x598(0x10)
	struct TArray<struct UNiagaraComponent*> VFX_AvatarMeshSystems; // 0x5a8(0x10)
	struct UNiagaraComponent* N_WandTip; // 0x5b8(0x08)
	struct UNiagaraComponent* WandBeam; // 0x5c0(0x08)
	float VFX_HideFootDecalRadius; // 0x5c8(0x04)
	float VFX_BurstDelay; // 0x5cc(0x04)
	struct TArray<struct UNiagaraComponent*> VFX_FootfallSystems; // 0x5d0(0x10)
	struct TArray<struct FName> VFX_AvMeshSys_Filters; // 0x5e0(0x10)
	struct UNiagaraComponent* N_DebrisSwirl; // 0x5f0(0x08)
	struct UMaterialInstanceDynamic* MAT_GlowSphere; // 0x5f8(0x08)
	struct TArray<struct TSoftObjectPtr<UNiagaraSystem>> VFXsToLoad; // 0x600(0x10)
	struct TMap<struct FString, struct UNiagaraSystem*> LoadedVFXs; // 0x610(0x50)
	bool UseActivatedCam; // 0x660(0x01)
	bool AllowGlobal; // 0x661(0x01)
	char pad_662[0x6]; // 0x662(0x06)
	struct ABP_AncientMagicENV_Marker_C* Marker; // 0x668(0x08)
	bool UsePostProcess; // 0x670(0x01)
	bool UpdateAudioRTPC; // 0x671(0x01)
	char pad_672[0x6]; // 0x672(0x06)
	struct UAkComponent* Ak_ancient_magic_hot_spot; // 0x678(0x08)
	struct UMaterialInstanceDynamic* MAT_Decal_Hint; // 0x680(0x08)
	struct FMulticastInlineDelegate GateActivated; // 0x688(0x10)
	bool Condition; // 0x698(0x01)
	bool Multi FX; // 0x699(0x01)
	bool Multi Plus; // 0x69a(0x01)
	char pad_69B[0x5]; // 0x69b(0x05)
	struct TArray<struct FMultiFX2Var> FX_; // 0x6a0(0x10)
	struct USceneRig* SceneRig; // 0x6b0(0x08)
	struct USceneRig* SceneRig2; // 0x6b8(0x08)
	struct USceneRig* SceneRig3; // 0x6c0(0x08)
	struct FRotator CutsceneRotationalOffset; // 0x6c8(0x0c)
	char pad_6D4[0x4]; // 0x6d4(0x04)
	struct UAkComponent* Ak_Ancient_magic_hot_spot_ambience_motion; // 0x6d8(0x08)
	bool VFX_UseCinematicFootfall; // 0x6e0(0x01)
	bool VFX_UseBeacon; // 0x6e1(0x01)
	enum class EAncientMagicHotSpotCameraType CameraType; // 0x6e2(0x01)
	bool Turn OFF Marker; // 0x6e3(0x01)
	bool VFX_UseFootfallVFX; // 0x6e4(0x01)
	bool allowInteract; // 0x6e5(0x01)
	bool WantsToBeInteractable; // 0x6e6(0x01)
	char pad_6E7[0x1]; // 0x6e7(0x01)
	struct FName BeaconID; // 0x6e8(0x08)
	struct FTimerHandle PickupCooldownTimerHandle; // 0x6f0(0x08)
	struct FVector MaterialSwapDistortionDirection; // 0x6f8(0x0c)
	char pad_704[0x4]; // 0x704(0x04)
	struct FMaterialSwapKeyUI Material Swap Info; // 0x708(0x110)
	struct FMaterialSwapParameters Parameters In; // 0x818(0x50)
	struct FMaterialSwapScalarParameter Scalar; // 0x868(0x0c)
	float LightBoost; // 0x874(0x04)
	struct ABP_AncientMagic_Burst_VFX_C* VFX_PPActor; // 0x878(0x08)
	float Light_NewTime; // 0x880(0x04)
	float Fade Duration; // 0x884(0x04)
	float Burst Duration; // 0x888(0x04)

	struct FName GetUniqueBeaconId(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DecrementNumberOfUses(bool AllowDecOfNumberOfUses); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.DecrementNumberOfUses // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableUpperBodyMotion(struct AAble_Character* BipedPlayer); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.DisableUpperBodyMotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LegacyMaterialSwap(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.LegacyMaterialSwap // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MakeMaterialSwapTargets(struct TArray<struct AActor*>& Hide Actors, struct TArray<struct AActor*>& RevealActors, struct TArray<struct FMaterialPermuterLoadingBundleAndSwapTarget>& MaterialSwapTargets); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.MakeMaterialSwapTargets // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void CreateMaterialSwapParameters(bool bHidden, struct FMaterialSwapParameters& Parameters); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.CreateMaterialSwapParameters // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void CreateDynamicMaterial(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.CreateDynamicMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckAllCollected(bool& ActorWasDestroyed); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.CheckAllCollected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetAllowInteract(bool Allow); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.SetAllowInteract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RequestUnregisterFromInteract(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.RequestUnregisterFromInteract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RequestRegisterForInteract(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.RequestRegisterForInteract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Clear_Activated(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Clear_Activated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_Activated(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Set_Activated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Beacon Completed(bool FireWandEvent, bool& Flag); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Beacon Completed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopHeadTracking(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.StopHeadTracking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HeadTrackTo(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.HeadTrackTo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Play SceneRig(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Play SceneRig // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndLookAt(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.EndLookAt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartLookAt(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.StartLookAt // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Test(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Test // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopUpperBodyAbility(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.StopUpperBodyAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartUpperBodyAbility(struct UAblAbility* Ability); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.StartUpperBodyAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateUpperBodyAbility(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.UpdateUpperBodyAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartInteractEffects(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.StartInteractEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StoreOriginalLocationsOfResetList(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.StoreOriginalLocationsOfResetList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideObjectsInHideList(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.HideObjectsInHideList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevealObjectsInRevealList(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.RevealObjectsInRevealList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevealObjectsInHideList(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.RevealObjectsInHideList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetResetListToOriginalLocations(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.SetResetListToOriginalLocations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideObjectsInRevealList(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.HideObjectsInRevealList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckPlayerOverlap(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.CheckPlayerOverlap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ParticleFinished(struct UParticleSystemComponent* ParticleSystemComponent); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ParticleFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void HintDecal_Timeline__FinishedFunc(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.HintDecal_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void HintDecal_Timeline__UpdateFunc(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.HintDecal_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void LightAnim_01__FinishedFunc(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.LightAnim_01__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void LightAnim_01__UpdateFunc(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.LightAnim_01__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void LightAnim_Burst__FinishedFunc(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.LightAnim_Burst__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void LightAnim_Burst__UpdateFunc(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.LightAnim_Burst__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_4B05FAD641DF04113B93129C9F272BFB(struct UObject* Loaded); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.OnLoaded_4B05FAD641DF04113B93129C9F272BFB // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void EnteredHotSpotRadius(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.EnteredHotSpotRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExitedHotSpotRadius(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ExitedHotSpotRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EnteredInnerRadius(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.EnteredInnerRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExitedInnerRadius(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ExitedInnerRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UpdateInnerRadius(float AngleRatio, float Ratio); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.UpdateInnerRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EnteredOuterRadius(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.EnteredOuterRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExitedOuterRadius(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ExitedOuterRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UpdateOuterRadius(float AngleRatio, float DistanceRatio); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.UpdateOuterRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void RevealTimerExpired(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.RevealTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateHotSpot(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ActivateHotSpot // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DeactivateHotSpot(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.DeactivateHotSpot // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NovaComplete(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.NovaComplete // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PickupAbsorbed(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.PickupAbsorbed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FootPlantOccurred(struct FVector FootLocation, struct FRotator FootRotator); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.FootPlantOccurred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Decal_FadeOut(float Delay); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Decal_FadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Decal_FadeIn(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Decal_FadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FakeHotSpotTrigger(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.FakeHotSpotTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct FVector FootLocation, struct FRotator FootRotator); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Particles_Start(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Particles_Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Particles_Stop(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Particles_Stop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Particles_Outer_Start(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Particles_Outer_Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Particles_Outer_Stop(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Particles_Outer_Stop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Particles_HotspotLoop_Start(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Particles_HotspotLoop_Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Particles_HotspotLoop_Stop(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Particles_HotspotLoop_Stop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableInteract(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.EnableInteract // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnHide(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.UnHide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideHideOBJ(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.HideHideOBJ // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideRevealOBJ(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.HideRevealOBJ // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reactivate(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.Reactivate // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FireWand(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.FireWand // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceSwap(struct UStaticMeshComponent* NewParam); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ForceSwap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOnHotspot(struct UObject* Caller); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.TurnOnHotspot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOffHotspot(struct UObject* Caller); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.TurnOffHotspot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HotSpotWasForcedActive(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.HotSpotWasForcedActive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HotSpotWasForcedInactive(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.HotSpotWasForcedInactive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ForceActivate(struct AActor* PlayerActor); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ForceActivate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceDeactivate(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ForceDeactivate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Hint_Start(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.VFX_Hint_Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Hint_Stop(bool Burst); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.VFX_Hint_Stop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_DissipateFinal(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.VFX_DissipateFinal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Hint_HideDecal(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.VFX_Hint_HideDecal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Hint_ShowDecal(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.VFX_Hint_ShowDecal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_BurstLight(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.VFX_BurstLight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_BrightenLight(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.VFX_BrightenLight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_DimLight(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.VFX_DimLight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_LightSetup(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.VFX_LightSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VFX_Hint_Kill(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.VFX_Hint_Kill // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AncientMagicHotSpot(int32_t EntryPoint); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.ExecuteUbergraph_BP_AncientMagicHotSpot // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void GateActivated__DelegateSignature(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.GateActivated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HotSpotTriggered__DelegateSignature(); // Function BP_AncientMagicHotSpot.BP_AncientMagicHotSpot_C.HotSpotTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

