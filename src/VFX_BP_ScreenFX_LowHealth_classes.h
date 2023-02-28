// BlueprintGeneratedClass VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C
// Size: 0x368 (Inherited: 0x248)
struct AVFX_BP_ScreenFX_LowHealth_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPostProcessComponent* Saturation_PostProcess; // 0x250(0x08)
	struct UPostProcessComponent* Chromatic_PostProcess; // 0x258(0x08)
	struct UPostProcessComponent* RedCreep_PostProcess; // 0x260(0x08)
	struct UPostProcessComponent* Distortion_PostProcess; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float FadeIn_FadeIn_1384DEA44E954807017759AF0C091E0E; // 0x278(0x04)
	enum class ETimelineDirection FadeIn__Direction_1384DEA44E954807017759AF0C091E0E; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* FadeIn; // 0x280(0x08)
	float Timeline_0_Creep_7511BDBF440AFDE0C8B7D9A3235227BA; // 0x288(0x04)
	enum class ETimelineDirection Timeline_0__Direction_7511BDBF440AFDE0C8B7D9A3235227BA; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x290(0x08)
	float Timeline_FadeOut_OverallOpacity_E25413C6490F071CB63A2EA794AFAA75; // 0x298(0x04)
	float Timeline_FadeOut_Creep_E25413C6490F071CB63A2EA794AFAA75; // 0x29c(0x04)
	enum class ETimelineDirection Timeline_FadeOut__Direction_E25413C6490F071CB63A2EA794AFAA75; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UTimelineComponent* Timeline_FadeOut; // 0x2a8(0x08)
	float Timeline_Pulse_OverallOpacity_E33E5EEF457E3762F1A991ACC9272183; // 0x2b0(0x04)
	float Timeline_Pulse_Intensity_E33E5EEF457E3762F1A991ACC9272183; // 0x2b4(0x04)
	float Timeline_Pulse_Distortion_Power_E33E5EEF457E3762F1A991ACC9272183; // 0x2b8(0x04)
	float Timeline_Pulse_Creep_E33E5EEF457E3762F1A991ACC9272183; // 0x2bc(0x04)
	enum class ETimelineDirection Timeline_Pulse__Direction_E33E5EEF457E3762F1A991ACC9272183; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UTimelineComponent* Timeline_Pulse; // 0x2c8(0x08)
	float Timeline_Health_CreepWiggle_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2d0(0x04)
	float Timeline_Health_Time_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2d4(0x04)
	float Timeline_Health_OverallOpacity_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2d8(0x04)
	float Timeline_Health_Intensity_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2dc(0x04)
	float Timeline_Health_Distortion_Power_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2e0(0x04)
	float Timeline_Health_Creep_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2e4(0x04)
	enum class ETimelineDirection Timeline_Health__Direction_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct UTimelineComponent* Timeline_Health; // 0x2f0(0x08)
	struct UVFX_BP_Detected_HUD_FlashColor_C* Flash; // 0x2f8(0x08)
	struct FMulticastInlineDelegate Flash_UI; // 0x300(0x10)
	float Intensity; // 0x310(0x04)
	float Blend Weight; // 0x314(0x04)
	float Distortion_Power; // 0x318(0x04)
	float Creep; // 0x31c(0x04)
	float OverallOpacity; // 0x320(0x04)
	float Chromatic_Intensity; // 0x324(0x04)
	float Saruration_Intensity; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct UObjectStateInfo* ObjectStateInfo; // 0x330(0x08)
	float DesiredPercent; // 0x338(0x04)
	enum class ETimelineDirection Direction; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	float TimelineLength; // 0x340(0x04)
	bool FirstTime; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	float Pulse_Intensity; // 0x348(0x04)
	float Pulse_Distortion_Power; // 0x34c(0x04)
	float Pulse_Creep; // 0x350(0x04)
	float Pulse_OverallOpacity; // 0x354(0x04)
	float Damage_Creep; // 0x358(0x04)
	float Creep Wiggle; // 0x35c(0x04)
	float Fade_CreepPercent; // 0x360(0x04)
	float Fade_OverallOpacityPercent; // 0x364(0x04)

	void Apply Effect(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Apply Effect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReachedTarget(enum class ETimelineDirection NewParam, float CurrentPercent, bool& TargetReached); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.ReachedTarget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Calculate Desired Percent(float& Percent); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Calculate Desired Percent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Timeline_Pulse__FinishedFunc(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_Pulse__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_Pulse__UpdateFunc(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_Pulse__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_Health__FinishedFunc(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_Health__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_Health__UpdateFunc(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_Health__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_FadeOut__FinishedFunc(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_FadeOut__UpdateFunc(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void FadeIn__FinishedFunc(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void FadeIn__UpdateFunc(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnActorDamaged(struct AActor* Target, struct AActor* Instigator, float Damage, struct FHitResult& Hit); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.OnActorDamaged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHealthChanged(struct AActor* Target, float InHealthChange, bool bIndicateHUD); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.OnHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CriticalHealthPulse(struct UObject* Caller); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.CriticalHealthPulse // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveDestroyed(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Damaged(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Damaged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateFadeOut(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.UpdateFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_ScreenFX_LowHealth(int32_t EntryPoint); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.ExecuteUbergraph_VFX_BP_ScreenFX_LowHealth // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Flash_UI__DelegateSignature(); // Function VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Flash_UI__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

