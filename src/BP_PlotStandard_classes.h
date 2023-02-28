// BlueprintGeneratedClass BP_PlotStandard.BP_PlotStandard_C
// Size: 0x532 (Inherited: 0x310)
struct ABP_PlotStandard_C : AHerbPlot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UCameraStackComponent* CameraStack; // 0x318(0x08)
	struct UChildActorComponent* ChildActor; // 0x320(0x08)
	struct UWidgetComponent* Widget; // 0x328(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x330(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x338(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x340(0x08)
	float Shake_ShakeFloat_F9AA081844015AEA45520FA644AC5B41; // 0x348(0x04)
	enum class ETimelineDirection Shake__Direction_F9AA081844015AEA45520FA644AC5B41; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct UTimelineComponent* Shake; // 0x350(0x08)
	struct AHerb* PlantedPlant; // 0x358(0x08)
	struct UMaterialInstanceDynamic* DirtMaterial; // 0x360(0x08)
	struct FLinearColor DirtColorParamWet; // 0x368(0x10)
	struct FLinearColor DirtColorParamDry; // 0x378(0x10)
	float DirtMetallicScalarWet; // 0x388(0x04)
	float DirtMetallicScalarDry; // 0x38c(0x04)
	int32_t DirtIndex; // 0x390(0x04)
	float ShakeMagnitude; // 0x394(0x04)
	struct TMap<struct FName, struct AActor*> PotionsMap; // 0x398(0x50)
	struct AActor* CurrentPotionFX; // 0x3e8(0x08)
	struct FName CurrentPotionID; // 0x3f0(0x08)
	bool bIsWet; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct TMap<struct FName, struct UAkAudioEvent*> PotionsMapAudioPlay; // 0x400(0x50)
	struct TMap<struct FName, struct UAkAudioEvent*> PotionsMapAudioStop; // 0x450(0x50)
	struct TMap<struct FName, struct UParticleSystem*> PotionMapFizzle; // 0x4a0(0x50)
	struct ABP_LightRig_NurturingStationBase_C* LightRig; // 0x4f0(0x08)
	struct ABP_LightRig_NurturingStationBase_C* LightRigClass; // 0x4f8(0x08)
	int32_t WaterThresholdCounter; // 0x500(0x04)
	int32_t WaterThresholdCounter_LastFrame; // 0x504(0x04)
	struct TArray<float> WaterThresholds; // 0x508(0x10)
	struct UUI_BP_HerbPlot_HUD_C* HUDWidget; // 0x518(0x08)
	bool bShouldShowHUD; // 0x520(0x01)
	bool bIsCreatingHUDPending; // 0x521(0x01)
	char pad_522[0x6]; // 0x522(0x06)
	struct UParticleSystemComponent* RainCloudParticle; // 0x528(0x08)
	bool bHasCalledEndPlay; // 0x530(0x01)
	bool IsClassroomSite; // 0x531(0x01)

	bool IncreaseWetness(struct AActor* Instigator, float increaseAmount, struct FVector Location); // Function BP_PlotStandard.BP_PlotStandard_C.IncreaseWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartWetness(struct AActor* Instigator, float Amount, struct FVector Location); // Function BP_PlotStandard.BP_PlotStandard_C.StartWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideHUD(); // Function BP_PlotStandard.BP_PlotStandard_C.HideHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowHUD(); // Function BP_PlotStandard.BP_PlotStandard_C.ShowHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateWidgetVisibility(); // Function BP_PlotStandard.BP_PlotStandard_C.UpdateWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Water Plot(); // Function BP_PlotStandard.BP_PlotStandard_C.Water Plot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCanHighlight(); // Function BP_PlotStandard.BP_PlotStandard_C.UpdateCanHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Shake__FinishedFunc(); // Function BP_PlotStandard.BP_PlotStandard_C.Shake__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Shake__UpdateFunc(); // Function BP_PlotStandard.BP_PlotStandard_C.Shake__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToApplyWetness(float Amount, struct FVector Location); // Function BP_PlotStandard.BP_PlotStandard_C.OnAttemptToApplyWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDecreaseWetness(float decreaseAmount); // Function BP_PlotStandard.BP_PlotStandard_C.OnDecreaseWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDry(struct AActor* Instigator); // Function BP_PlotStandard.BP_PlotStandard_C.OnDry // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToWet(); // Function BP_PlotStandard.BP_PlotStandard_C.OnFailedToWet // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_PlotStandard.BP_PlotStandard_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ShakePlant(); // Function BP_PlotStandard.BP_PlotStandard_C.ShakePlant // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NotifyFertilized(bool IsFertilized, struct FName FertilizerID, bool IsInitialState); // Function BP_PlotStandard.BP_PlotStandard_C.NotifyFertilized // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OpenPlotUI(); // Function BP_PlotStandard.BP_PlotStandard_C.OpenPlotUI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnEnableCamera(); // Function BP_PlotStandard.BP_PlotStandard_C.OnEnableCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDisableCamera(bool ReturnToPlayer); // Function BP_PlotStandard.BP_PlotStandard_C.OnDisableCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NotifyHerbPlanted(); // Function BP_PlotStandard.BP_PlotStandard_C.NotifyHerbPlanted // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void NotifyBeginGrowth(); // Function BP_PlotStandard.BP_PlotStandard_C.NotifyBeginGrowth // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void NotifyCompleteGrowth(); // Function BP_PlotStandard.BP_PlotStandard_C.NotifyCompleteGrowth // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void NotifyHarvested(bool bIsMultiHarvest); // Function BP_PlotStandard.BP_PlotStandard_C.NotifyHarvested // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void NotifyHerbDestroyed(); // Function BP_PlotStandard.BP_PlotStandard_C.NotifyHerbDestroyed // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_PlotStandard.BP_PlotStandard_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NotifyInitialize(); // Function BP_PlotStandard.BP_PlotStandard_C.NotifyInitialize // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void RefreshHerbPlotHUD(); // Function BP_PlotStandard.BP_PlotStandard_C.RefreshHerbPlotHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NotifyGrowAfterInitialize(); // Function BP_PlotStandard.BP_PlotStandard_C.NotifyGrowAfterInitialize // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CreatePlotHUD(); // Function BP_PlotStandard.BP_PlotStandard_C.CreatePlotHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlotStandard.BP_PlotStandard_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PlotStandard(int32_t EntryPoint); // Function BP_PlotStandard.BP_PlotStandard_C.ExecuteUbergraph_BP_PlotStandard // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

