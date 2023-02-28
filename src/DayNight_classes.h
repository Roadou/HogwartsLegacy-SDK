// Class DayNight.DayNightCustomBlendDomainDayNightBase
// Size: 0x28 (Inherited: 0x28)
struct UDayNightCustomBlendDomainDayNightBase : URenderSettingsCustomBlendDomainBase {
};

// Class DayNight.DayNightCustomBlendDomainDayNightValid
// Size: 0x28 (Inherited: 0x28)
struct UDayNightCustomBlendDomainDayNightValid : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class DayNight.DayNightCustomBlendDomainDayNight
// Size: 0x28 (Inherited: 0x28)
struct UDayNightCustomBlendDomainDayNight : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class DayNight.DayNightCustomBlendDomainDay
// Size: 0x28 (Inherited: 0x28)
struct UDayNightCustomBlendDomainDay : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class DayNight.DayNightCustomBlendDomainNight
// Size: 0x28 (Inherited: 0x28)
struct UDayNightCustomBlendDomainNight : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class DayNight.DayNightCustomBlendDomainNormalizedTime
// Size: 0x28 (Inherited: 0x28)
struct UDayNightCustomBlendDomainNormalizedTime : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class DayNight.DayNightCustomBlendDomainDayNightNormalizedTimeCurve
// Size: 0x38 (Inherited: 0x28)
struct UDayNightCustomBlendDomainDayNightNormalizedTimeCurve : URenderSettingsCustomBlendDomainNoPreCompute {
	struct UCurveFloat* NormalizedTimeCurve; // 0x28(0x08)
	bool bMirrorAroundNoon; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DayNight.DayNightCustomBlendDomainDayNightComputeOnly
// Size: 0x28 (Inherited: 0x28)
struct UDayNightCustomBlendDomainDayNightComputeOnly : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class DayNight.DayNightCustomBlendDomainDayNightSunDiskVisibility
// Size: 0x28 (Inherited: 0x28)
struct UDayNightCustomBlendDomainDayNightSunDiskVisibility : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class DayNight.DayNightCustomBlendDomainDayNightMoonDiskVisibility
// Size: 0x28 (Inherited: 0x28)
struct UDayNightCustomBlendDomainDayNightMoonDiskVisibility : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class DayNight.DayNightCustomBlendDomainDayNightAltitudeRemap
// Size: 0x38 (Inherited: 0x28)
struct UDayNightCustomBlendDomainDayNightAltitudeRemap : URenderSettingsCustomBlendDomainNoPreCompute {
	float AltitudeMin; // 0x28(0x04)
	float AltitudeMax; // 0x2c(0x04)
	float OunputMin; // 0x30(0x04)
	float OutputMax; // 0x34(0x04)
};

// Class DayNight.DayNightCustomBlendDomainDayNightAltitudeCurveRemap
// Size: 0x30 (Inherited: 0x28)
struct UDayNightCustomBlendDomainDayNightAltitudeCurveRemap : URenderSettingsCustomBlendDomainNoPreCompute {
	struct UCurveFloat* AltitudeRemapCurve; // 0x28(0x08)
};

// Class DayNight.DayNightCustomBlendDomainDayNightSunAltitudeRemap
// Size: 0x38 (Inherited: 0x38)
struct UDayNightCustomBlendDomainDayNightSunAltitudeRemap : UDayNightCustomBlendDomainDayNightAltitudeRemap {
};

// Class DayNight.DayNightCustomBlendDomainDayNightSunAltitudeCurveRemap
// Size: 0x30 (Inherited: 0x30)
struct UDayNightCustomBlendDomainDayNightSunAltitudeCurveRemap : UDayNightCustomBlendDomainDayNightAltitudeCurveRemap {
};

// Class DayNight.DayNightCustomBlendDomainDayNightMoonAltitudeRemap
// Size: 0x38 (Inherited: 0x38)
struct UDayNightCustomBlendDomainDayNightMoonAltitudeRemap : UDayNightCustomBlendDomainDayNightAltitudeRemap {
};

// Class DayNight.DayNightCustomBlendDomainDayNightMoonAltitudeCurveRemap
// Size: 0x30 (Inherited: 0x30)
struct UDayNightCustomBlendDomainDayNightMoonAltitudeCurveRemap : UDayNightCustomBlendDomainDayNightAltitudeCurveRemap {
};

// Class DayNight.DayNightEVents
// Size: 0x28 (Inherited: 0x28)
struct UDayNightEVents : UBlueprintFunctionLibrary {

	struct FTimespan TimeInputAsTimespan(struct FTimeInput TimeInput); // Function DayNight.DayNightEVents.TimeInputAsTimespan // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c97900
	float TimeInputAsFloat(struct FTimeInput TimeInput); // Function DayNight.DayNightEVents.TimeInputAsFloat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1c97780
	struct FTimespan NormalizedTimeAsTimespan(struct FSolarNormalizedTime& NormalizedTime); // Function DayNight.DayNightEVents.NormalizedTimeAsTimespan // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c97690
	struct FString NormalizedTimeAsString(struct FSolarNormalizedTime& NormalizedTime); // Function DayNight.DayNightEVents.NormalizedTimeAsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c97540
	float NormalizedTimeAsFloat(struct FSolarNormalizedTime& NormalizedTime); // Function DayNight.DayNightEVents.NormalizedTimeAsFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c974b0
	struct FString MoonPhaseAsString(enum class EMoonPhaseName& MoonPhase); // Function DayNight.DayNightEVents.MoonPhaseAsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c97330
	struct FName MoonPhaseAsName(enum class EMoonPhaseName& MoonPhase); // Function DayNight.DayNightEVents.MoonPhaseAsName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c97210
	bool DayNightRemoveGlobalEvents(struct UObject* WorldContextObject, struct FName GlobalEventGroup, struct FName EventName); // Function DayNight.DayNightEVents.DayNightRemoveGlobalEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c97110
	bool DayNightRemoveComponentEvents(struct UActorComponent* Component, struct FName EventName); // Function DayNight.DayNightEVents.DayNightRemoveComponentEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96ee0
	bool DayNightRemoveAllGlobalEvents(struct UObject* WorldContextObject, struct FName GlobalEventGroup); // Function DayNight.DayNightEVents.DayNightRemoveAllGlobalEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c97040
	bool DayNightRemoveAllComponentEvents(struct UActorComponent* Component); // Function DayNight.DayNightEVents.DayNightRemoveAllComponentEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96fb0
	bool DayNightRemoveAllActorEvents(struct AActor* Actor); // Function DayNight.DayNightEVents.DayNightRemoveAllActorEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96fb0
	bool DayNightRemoveActorEvents(struct AActor* Actor, struct FName EventName); // Function DayNight.DayNightEVents.DayNightRemoveActorEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96ee0
	bool DayNightGlobalRemoveComponentReceiver(struct UActorComponent* Component, struct FName GlobalEventGroup); // Function DayNight.DayNightEVents.DayNightGlobalRemoveComponentReceiver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96e10
	bool DayNightGlobalRemoveAllReceivers(struct UObject* WorldContextObject, struct FName GlobalEventGroup); // Function DayNight.DayNightEVents.DayNightGlobalRemoveAllReceivers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96d40
	bool DayNightGlobalRemoveActorReceiver(struct AActor* Actor, struct FName GlobalEventGroup); // Function DayNight.DayNightEVents.DayNightGlobalRemoveActorReceiver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96c70
	bool DayNightGlobalAddComponentReceiver(struct UActorComponent* Component, struct FName GlobalEventGroup); // Function DayNight.DayNightEVents.DayNightGlobalAddComponentReceiver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96ba0
	bool DayNightGlobalAddActorReceiver(struct AActor* Actor, struct FName GlobalEventGroup); // Function DayNight.DayNightEVents.DayNightGlobalAddActorReceiver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96ba0
	void DayNightGetGlobalSunsetEvent(struct FName& Event); // Function DayNight.DayNightEVents.DayNightGetGlobalSunsetEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c96b10
	void DayNightGetGlobalSunriseSunsetEventGroup(struct FName& EventGroup); // Function DayNight.DayNightEVents.DayNightGetGlobalSunriseSunsetEventGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c96a80
	void DayNightGetGlobalSunriseEvent(struct FName& Event); // Function DayNight.DayNightEVents.DayNightGetGlobalSunriseEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c969f0
	void DayNightEventsLightsCanStartOn(struct UObject* WorldContextObject, bool& bLightsCanStartOn); // Function DayNight.DayNightEVents.DayNightEventsLightsCanStartOn // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c96920
	void DayNightEventsIsEditorWorld(struct UObject* WorldContextObject, bool& bIsEditorWorld); // Function DayNight.DayNightEVents.DayNightEventsIsEditorWorld // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c96850
	void DayNightEventsCurrentState(struct UObject* WorldContextObject, struct FDayNightEventsCurrentState& CurrentState); // Function DayNight.DayNightEVents.DayNightEventsCurrentState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c96750
	bool DayNightBeginPlayComponentEvents(struct UActorComponent* Component); // Function DayNight.DayNightEVents.DayNightBeginPlayComponentEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c966c0
	bool DayNightBeginPlayActorEvents(struct AActor* Actor); // Function DayNight.DayNightEVents.DayNightBeginPlayActorEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c966c0
	bool DayNightAddGlobalTimeEvent(struct UObject* WorldContextObject, struct FName GlobalEventGroup, struct FName EventName, struct FDayNightNormalizedTimeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddGlobalTimeEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96560
	bool DayNightAddGlobalSunEvent(struct UObject* WorldContextObject, struct FName GlobalEventGroup, struct FName EventName, struct FDayNightSunAltitudeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddGlobalSunEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96400
	bool DayNightAddGlobalSunChangeEvent(struct UObject* WorldContextObject, struct FName GlobalEventGroup, struct FName EventName, struct FDayNightSunAltitudeChangeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddGlobalSunChangeEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96280
	bool DayNightAddGlobalMoonEvent(struct UObject* WorldContextObject, struct FName GlobalEventGroup, struct FName EventName, struct FDayNightMoonAltitudeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddGlobalMoonEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96110
	bool DayNightAddGlobalGameTimeEvent(struct UObject* WorldContextObject, struct FName GlobalEventGroup, struct FName EventName, struct FDayNightGameTimeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddGlobalGameTimeEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c95fb0
	bool DayNightAddComponentTimeEvent(struct UActorComponent* Component, struct FName EventName, struct FDayNightNormalizedTimeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddComponentTimeEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c95e80
	bool DayNightAddComponentSunEvent(struct UActorComponent* Component, struct FName EventName, struct FDayNightSunAltitudeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddComponentSunEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c95d70
	bool DayNightAddComponentSunChangeEvent(struct UActorComponent* Component, struct FName EventName, struct FDayNightSunAltitudeChangeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddComponentSunChangeEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c95c10
	bool DayNightAddComponentMoonEvent(struct UActorComponent* Component, struct FName EventName, struct FDayNightMoonAltitudeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddComponentMoonEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c95ae0
	bool DayNightAddComponentGameTimeEvent(struct UActorComponent* Component, struct FName EventName, struct FDayNightGameTimeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddComponentGameTimeEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c959b0
	bool DayNightAddActorTimeEvent(struct AActor* Actor, struct FName EventName, struct FDayNightNormalizedTimeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddActorTimeEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c95e80
	bool DayNightAddActorSunEvent(struct AActor* Actor, struct FName EventName, struct FDayNightSunAltitudeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddActorSunEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c95d70
	bool DayNightAddActorSunChangeEvent(struct AActor* Actor, struct FName EventName, struct FDayNightSunAltitudeChangeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddActorSunChangeEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c95c10
	bool DayNightAddActorMoonEvent(struct AActor* Actor, struct FName EventName, struct FDayNightMoonAltitudeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddActorMoonEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c95ae0
	bool DayNightAddActorGameTimeEvent(struct AActor* Actor, struct FName EventName, struct FDayNightGameTimeEvent DayNightEvent); // Function DayNight.DayNightEVents.DayNightAddActorGameTimeEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c959b0
	struct FDateTime DateTimeInputAsDateTime(struct FDateTimeInput DateTimeInput, bool& Valid); // Function DayNight.DayNightEVents.DateTimeInputAsDateTime // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c95880
};

// Class DayNight.DayNightEventInterface
// Size: 0x28 (Inherited: 0x28)
struct UDayNightEventInterface : UInterface {

	void DayNightSunEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate); // Function DayNight.DayNightEventInterface.DayNightSunEvent // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x38a7480
	void DayNightMoonEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, enum class EMoonPhaseName Phase, bool bLate); // Function DayNight.DayNightEventInterface.DayNightMoonEvent // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x38a7480
};

// Class DayNight.DayNightExpHeightFogAdjustments
// Size: 0x50 (Inherited: 0x30)
struct UDayNightExpHeightFogAdjustments : UDataAsset {
	struct TArray<struct ULightSettingsModCurve*> AltitudeMods; // 0x30(0x10)
	struct TArray<struct ULightSettingsModCurve*> NormalizedTimeMods; // 0x40(0x10)
};

// Class DayNight.ExpHeightFogDayNightTransmuter
// Size: 0x38 (Inherited: 0x28)
struct UExpHeightFogDayNightTransmuter : UExpHeightFogTransmuter {
	struct UDayNightExpHeightFogAdjustments* OverrideAdjustments; // 0x28(0x08)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DayNight.DayNightLightControllerComponent
// Size: 0x280 (Inherited: 0x250)
struct UDayNightLightControllerComponent : UAnimatedLightClusterComponentAuto {
	float UpdateThresholdDegrees; // 0x250(0x04)
	bool bEnabled; // 0x254(0x01)
	bool bDeepScanChildren; // 0x255(0x01)
	char pad_256[0x2]; // 0x256(0x02)
	float LastSunAngleUpdate; // 0x258(0x04)
	char pad_25C[0x24]; // 0x25c(0x24)

	void IsLightControllerEnabled(bool& bIsControllerEnabled); // Function DayNight.DayNightLightControllerComponent.IsLightControllerEnabled // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c99da0
	void EnableLightController(bool bEnableController); // Function DayNight.DayNightLightControllerComponent.EnableLightController // (Native|Public|BlueprintCallable) // @ game+0x1c99d10
};

// Class DayNight.DayNightBasicLightControllerComponent
// Size: 0x2d0 (Inherited: 0x280)
struct UDayNightBasicLightControllerComponent : UDayNightLightControllerComponent {
	struct FLinearColor DayColorMod; // 0x278(0x10)
	struct FLinearColor NightColorMod; // 0x288(0x10)
	struct UCurveLinearColor* Night0Day1ColorMod; // 0x298(0x08)
	float SunLightDesaturation; // 0x2a0(0x04)
	float DayIntensityMod; // 0x2a4(0x04)
	float NightIntensityMod; // 0x2a8(0x04)
	struct FVector2D SunLightMinMaxInensityFactor; // 0x2ac(0x08)
	struct FDayNightLightControllerDirectionalBoost SunDirectionalBoost; // 0x2b4(0x0c)
	float StartNightSunAngle; // 0x2c0(0x04)
	float FullNightSunAngle; // 0x2c4(0x04)
	char bModulateColor : 1; // 0x2c8(0x01)
	char bModulateIntensity : 1; // 0x2c8(0x01)
	char bUseSunDirectionalBoost : 1; // 0x2c8(0x01)
	char bUseSunLightColor : 1; // 0x2c8(0x01)
	char bAttenuateDayIntensityWithSunIntensity : 1; // 0x2c8(0x01)
	char bUseModColorCurve : 1; // 0x2c8(0x01)
};

// Class DayNight.DayNightLocalLightControllerComponent
// Size: 0x2c0 (Inherited: 0x280)
struct UDayNightLocalLightControllerComponent : UDayNightLightControllerComponent {
	struct FLinearColor DayColorMod; // 0x278(0x10)
	struct FLinearColor NightColorMod; // 0x288(0x10)
	struct UCurveLinearColor* Night0Day1ColorMod; // 0x298(0x08)
	float DayIntensityMod; // 0x2a0(0x04)
	float NightIntensityMod; // 0x2a4(0x04)
	float StartNightSunAngle; // 0x2a8(0x04)
	float FullNightSunAngle; // 0x2ac(0x04)
	char bModulateColor : 1; // 0x2b0(0x01)
	char bModulateIntensity : 1; // 0x2b0(0x01)
	char bUseModColorCurve : 1; // 0x2b0(0x01)
	char pad_2B8_3 : 5; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
};

// Class DayNight.DayNightCurveLightControllerComponent
// Size: 0x2a0 (Inherited: 0x280)
struct UDayNightCurveLightControllerComponent : UDayNightLightControllerComponent {
	struct UCurveLinearColor* Color; // 0x278(0x08)
	float Desaturation; // 0x280(0x04)
	struct UCurveFloat* Intensity; // 0x288(0x08)
	struct FDayNightLightControllerDirectionalBoost DirectionalBoost; // 0x290(0x0c)
	bool bUseDirectionalBoost; // 0x29c(0x01)
	enum class EDayNightLightControllerOp ColorOp; // 0x29d(0x01)
	enum class EDayNightLightControllerOp IntensityOp; // 0x29e(0x01)
};

// Class DayNight.DayNightTemperatureCurveLightControllerComponent
// Size: 0x2a0 (Inherited: 0x280)
struct UDayNightTemperatureCurveLightControllerComponent : UDayNightLightControllerComponent {
	struct UCurveFloat* ColorTemp; // 0x278(0x08)
	float Desaturation; // 0x280(0x04)
	struct UCurveFloat* Intensity; // 0x288(0x08)
	struct FDayNightLightControllerDirectionalBoost DirectionalBoost; // 0x290(0x0c)
	bool bUseDirectionalBoost; // 0x29c(0x01)
	enum class EDayNightLightControllerOp ColorOp; // 0x29d(0x01)
	enum class EDayNightLightControllerOp IntensityOp; // 0x29e(0x01)
	bool bAccurateColorTemp; // 0x29f(0x01)
};

// Class DayNight.DayNightAtmosphereLightControllerComponent
// Size: 0x350 (Inherited: 0x280)
struct UDayNightAtmosphereLightControllerComponent : UDayNightLightControllerComponent {
	struct FDayNightLightSkyAtmosphereComputeParams SkyParams; // 0x278(0x78)
	struct UCurveFloat* Intensity; // 0x2f0(0x08)
	float BaseIntensityFactor; // 0x2f8(0x04)
	struct UCurveFloat* Desaturation; // 0x300(0x08)
	enum class EDayNightLightControllerOp ColorOp; // 0x308(0x01)
	enum class EDayNightLightControllerOp IntensityOp; // 0x309(0x01)
	char pad_30E[0x1a]; // 0x30e(0x1a)
	struct FLinearColor CachedZenithTransmission; // 0x328(0x10)
	struct FVector AllLightsDirection; // 0x338(0x0c)
	bool bCheckedLightsSameDirection; // 0x344(0x01)
	char pad_345[0xb]; // 0x345(0x0b)
};

// Class DayNight.SkyAtmosphereColorationCompute
// Size: 0x28 (Inherited: 0x28)
struct USkyAtmosphereColorationCompute : UBlueprintFunctionLibrary {

	void SkySunInfo(struct UObject* WorldContextObject, struct FDayNightLightSkyAtmosphereComputeParams Params, struct FDayNightLightSkyAtmosphereComputeDirLight& SunInfo); // Function DayNight.SkyAtmosphereColorationCompute.SkySunInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c9b5d0
	void SkyMoonInfo(struct UObject* WorldContextObject, struct FDayNightLightSkyAtmosphereComputeParams Params, struct FDayNightLightSkyAtmosphereComputeDirLight& MoonInfo); // Function DayNight.SkyAtmosphereColorationCompute.SkyMoonInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c9b3e0
	void SkyDirectionalInfo(struct UObject* WorldContextObject, struct FDayNightLightSkyAtmosphereComputeParams Params, struct FDayNightLightSkyAtmosphereComputeDirLight& DirectionalLightInfo); // Function DayNight.SkyAtmosphereColorationCompute.SkyDirectionalInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c9b1f0
	void SkyColorsLitPacked(struct UObject* WorldContextObject, struct FDayNightLightSkyAtmosphereComputeParams Params, struct TArray<struct FVector>& Directions, struct TArray<struct FLinearColor>& SkyColorsRGBIntensityAs); // Function DayNight.SkyAtmosphereColorationCompute.SkyColorsLitPacked // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c9afb0
	void SkyColorsLitCompute(struct UObject* WorldContextObject, struct FDayNightLightSkyAtmosphereComputeParams Params, struct TArray<struct FVector>& Directions, struct TArray<struct FLinearColor>& SkyColors, enum class ESkyAtmosphereColorationComputeType ComputeType, enum class ESkyAtmosphereColorationComputeOutput OutputType); // Function DayNight.SkyAtmosphereColorationCompute.SkyColorsLitCompute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c9acd0
	void SkyColorsLitComposited(struct UObject* WorldContextObject, struct FDayNightLightSkyAtmosphereComputeParams Params, struct TArray<struct FVector>& Directions, struct TArray<struct FLinearColor>& SkyColors); // Function DayNight.SkyAtmosphereColorationCompute.SkyColorsLitComposited // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c9aa90
	void SkyColorsLit(struct UObject* WorldContextObject, struct FDayNightLightSkyAtmosphereComputeParams Params, struct TArray<struct FVector>& Directions, struct TArray<struct FLinearColor>& SkyColors, struct TArray<float>& SkyIntensites); // Function DayNight.SkyAtmosphereColorationCompute.SkyColorsLit // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c9a7e0
	void SkyColorSamplingDirection(struct FDayNightLightSkyAtmosphereComputeSampleDirectionParams DirectionParams, struct FVector Direction, struct FVector& SamplingDirection); // Function DayNight.SkyAtmosphereColorationCompute.SkyColorSamplingDirection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c9a640
	void SkyColorLitCompute(struct UObject* WorldContextObject, struct FDayNightLightSkyAtmosphereComputeParams Params, struct FVector Direction, struct FLinearColor& SkyColor, enum class ESkyAtmosphereColorationComputeType ComputeType, enum class ESkyAtmosphereColorationComputeOutput OutputType); // Function DayNight.SkyAtmosphereColorationCompute.SkyColorLitCompute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c9a3a0
	void SkyColorLit(struct UObject* WorldContextObject, struct FDayNightLightSkyAtmosphereComputeParams Params, struct FVector Direction, struct FLinearColor& SkyColor, float& SkyIntensity); // Function DayNight.SkyAtmosphereColorationCompute.SkyColorLit // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c9a140
	void SkyColorBase(struct UObject* WorldContextObject, struct FDayNightLightSkyAtmosphereComputeParams Params, struct FVector Direction, struct FLinearColor& SkyColor); // Function DayNight.SkyAtmosphereColorationCompute.SkyColorBase // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c99f40
	void SetupDebugPrimitive(struct UPrimitiveComponent* Component, bool bIsSelectable, bool bShowInReflections); // Function DayNight.SkyAtmosphereColorationCompute.SetupDebugPrimitive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c99e30
};

// Class DayNight.DayLightRig
// Size: 0x308 (Inherited: 0x30)
struct UDayLightRig : UDataAsset {
	struct FDayNightLightRigSetup Sun; // 0x30(0x2b8)
	struct TArray<struct ULightSettingsModCurve*> AltitudeMods; // 0x2e8(0x10)
	struct TArray<struct ULightSettingsModCurve*> TimeMods; // 0x2f8(0x10)
};

// Class DayNight.NightLightRig
// Size: 0x650 (Inherited: 0x30)
struct UNightLightRig : UDataAsset {
	struct FDayNightLightRigOverride NewMoon; // 0x30(0x2f0)
	struct FDayNightLightRigOverride FullMoon; // 0x320(0x2f0)
	struct TArray<struct ULightSettingsLerpControl*> PhaseLerp; // 0x610(0x10)
	struct TArray<struct ULightSettingsModCurve*> AltitudeMods; // 0x620(0x10)
	struct TArray<struct ULightSettingsModCurve*> SunAltitudeMods; // 0x630(0x10)
	struct TArray<struct ULightSettingsModCurve*> SunTimeMods; // 0x640(0x10)
};

// Class DayNight.ProbeNightLightRig
// Size: 0x380 (Inherited: 0x30)
struct UProbeNightLightRig : UDataAsset {
	enum class EProbeNightLightMoonDirection DirectionMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FRotator FixedDirection; // 0x34(0x0c)
	struct FManualMoonSetup MoonSetup; // 0x40(0x18)
	struct FDayNightLightRigOverride ProbeNight; // 0x58(0x2f0)
	struct TArray<struct ULightSettingsModCurve*> AltitudeMods; // 0x348(0x10)
	struct TArray<struct ULightSettingsModCurve*> SunAltitudeMods; // 0x358(0x10)
	struct TArray<struct ULightSettingsModCurve*> SunTimeMods; // 0x368(0x10)
	bool bUseMoonSetup; // 0x378(0x01)
	bool bUseLightRig; // 0x379(0x01)
	char pad_37A[0x6]; // 0x37a(0x06)
};

// Class DayNight.DayNightLightRig
// Size: 0xc0 (Inherited: 0x30)
struct UDayNightLightRig : UDataAsset {
	struct UDayLightRig* Day; // 0x30(0x08)
	struct UNightLightRig* Night; // 0x38(0x08)
	float MinimumDirectionalLightIntensity; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UCurveFloat* SunAltitudeInfluenceCurve; // 0x48(0x08)
	struct UCurveFloat* MoonAltitudeInfluenceCurve; // 0x50(0x08)
	struct TArray<struct ULightSettingsLerpControl*> DayNightLerp; // 0x58(0x10)
	struct ULightDirectionLerpControl* DayNightLerpDirection; // 0x68(0x08)
	int32_t BlendOps; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct ULightSettingsModCurve*> SunAltitudeMods; // 0x78(0x10)
	struct TArray<struct ULightSettingsModCurve*> NormalizedTimeMods; // 0x88(0x10)
	struct FLightParameterSmoothingDiscontinuitySettings DiscontinuitySettings; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct ULightParameterSmoothing*> SmoothingMods; // 0xa8(0x10)
	struct UDayNightExpHeightFogAdjustments* ExpHeightFogAdjustments; // 0xb8(0x08)
};

// Class DayNight.GlobalLightingBlendableDayNightBase
// Size: 0x30 (Inherited: 0x28)
struct UGlobalLightingBlendableDayNightBase : UGlobalLightingBlendable {
	bool bDisable; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class DayNight.GlobalLightingBlendableDayNight
// Size: 0x30 (Inherited: 0x30)
struct UGlobalLightingBlendableDayNight : UGlobalLightingBlendableDayNightBase {
};

// Class DayNight.GlobalLightingBlendableDayNightInheritSun
// Size: 0x38 (Inherited: 0x30)
struct UGlobalLightingBlendableDayNightInheritSun : UGlobalLightingBlendableDayNightBase {
	enum class EDayNightInheritSunMode Mode; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DayNight.GlobalLightingBlendableDayNightInheritMoon
// Size: 0x50 (Inherited: 0x30)
struct UGlobalLightingBlendableDayNightInheritMoon : UGlobalLightingBlendableDayNightBase {
	struct FManualMoonSetup Moon; // 0x30(0x18)
	bool bForceTimeToMidnight; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class DayNight.GlobalLightingBlendableDayNightOverrideMoon
// Size: 0x50 (Inherited: 0x30)
struct UGlobalLightingBlendableDayNightOverrideMoon : UGlobalLightingBlendableDayNightBase {
	struct FManualMoonSetup Moon; // 0x30(0x18)
	bool bMoonIsSecondaryDirectionalLight; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class DayNight.GlobalLightingBlendableTweakDirectionalLight
// Size: 0xb0 (Inherited: 0x30)
struct UGlobalLightingBlendableTweakDirectionalLight : UGlobalLightingBlendableDayNightBase {
	enum class EDayNightTweakDirectionalLightMode Mode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float TweakAltitude; // 0x34(0x04)
	float TweakAzimuth; // 0x38(0x04)
	struct FDirectionalLightBasicParametersOverride LightParams; // 0x3c(0x28)
	struct FDirectionalLightShaftsOverride LightShafts; // 0x64(0x28)
	struct FDirectionalLightShadowsOverride Shadows; // 0x8c(0x20)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class DayNight.LightSettingsLerpControl
// Size: 0x30 (Inherited: 0x28)
struct ULightSettingsLerpControl : UObject {
	enum class EGlobalLightRigModParam ModParam; // 0x28(0x01)
	enum class ELightRigCurveParam Param; // 0x29(0x01)
	bool bEnabled; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class DayNight.LightSettingsLerpCurve
// Size: 0x38 (Inherited: 0x30)
struct ULightSettingsLerpCurve : ULightSettingsLerpControl {
	struct UCurveFloat* Curve; // 0x30(0x08)
};

// Class DayNight.LightSettingsLerpBinary
// Size: 0x38 (Inherited: 0x30)
struct ULightSettingsLerpBinary : ULightSettingsLerpControl {
	bool bInvert; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DayNight.LightSettingsLerpOnOff
// Size: 0x40 (Inherited: 0x38)
struct ULightSettingsLerpOnOff : ULightSettingsLerpBinary {
	float Cutoff; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class DayNight.LightSettingsLerpIfNotZero
// Size: 0x40 (Inherited: 0x38)
struct ULightSettingsLerpIfNotZero : ULightSettingsLerpBinary {
	float Tolerance; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class DayNight.LightSettingsLerpIfOne
// Size: 0x40 (Inherited: 0x38)
struct ULightSettingsLerpIfOne : ULightSettingsLerpBinary {
	float Tolerance; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class DayNight.LightSettingsEase
// Size: 0x38 (Inherited: 0x30)
struct ULightSettingsEase : ULightSettingsLerpControl {
	enum class ELerpEasingType Easing; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float BlendExp; // 0x34(0x04)
};

// Class DayNight.LightSettingsModCurve
// Size: 0x30 (Inherited: 0x28)
struct ULightSettingsModCurve : UObject {
	enum class EGlobalLightRigModParam ModParam; // 0x28(0x01)
	enum class ELightRigCurveParam Param; // 0x29(0x01)
	enum class ELightRigMode Mode; // 0x2a(0x01)
	enum class ELightRigCurveType Type; // 0x2b(0x01)
	bool bEnabled; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class DayNight.LightSettingsModFloatBase
// Size: 0x38 (Inherited: 0x30)
struct ULightSettingsModFloatBase : ULightSettingsModCurve {
	enum class ELightRigCurveColorConversionType ColorConversion; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DayNight.LightSettingsModFloatCurve
// Size: 0x40 (Inherited: 0x38)
struct ULightSettingsModFloatCurve : ULightSettingsModFloatBase {
	struct UCurveFloat* Curve; // 0x38(0x08)
};

// Class DayNight.LightSettingsModFloatConstant
// Size: 0x40 (Inherited: 0x38)
struct ULightSettingsModFloatConstant : ULightSettingsModFloatBase {
	float Value; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class DayNight.LightSettingsModThreshold
// Size: 0x28 (Inherited: 0x28)
struct ULightSettingsModThreshold : UObject {
};

// Class DayNight.LightSettingsModThresholdConstantAltitude
// Size: 0x30 (Inherited: 0x28)
struct ULightSettingsModThresholdConstantAltitude : ULightSettingsModThreshold {
	float AltitudeThreshold; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class DayNight.LightSettingsModThresholdBlendable
// Size: 0x38 (Inherited: 0x28)
struct ULightSettingsModThresholdBlendable : ULightSettingsModThreshold {
	struct FGlobalLightingCustomBlendableNameScalar Blendable; // 0x28(0x10)
};

// Class DayNight.LightSettingsModThresholdConsoleVariableBase
// Size: 0x38 (Inherited: 0x28)
struct ULightSettingsModThresholdConsoleVariableBase : ULightSettingsModThreshold {
	struct FName ConsoleVariableName; // 0x28(0x08)
	float ConsoleVariableDefaultValue; // 0x30(0x04)
	bool bCreateConsoleVariableIfMissing; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class DayNight.LightSettingsModThresholdConsoleVariableAltitude
// Size: 0x38 (Inherited: 0x38)
struct ULightSettingsModThresholdConsoleVariableAltitude : ULightSettingsModThresholdConsoleVariableBase {
};

// Class DayNight.LightSettingsModFloatThreshold
// Size: 0x48 (Inherited: 0x38)
struct ULightSettingsModFloatThreshold : ULightSettingsModFloatBase {
	struct ULightSettingsModThreshold* Threshold; // 0x38(0x08)
	float ValueAbove; // 0x40(0x04)
	float ValueBelow; // 0x44(0x04)
};

// Class DayNight.LightSettingsModColorBase
// Size: 0x30 (Inherited: 0x30)
struct ULightSettingsModColorBase : ULightSettingsModCurve {
};

// Class DayNight.LightSettingsModColorCurve
// Size: 0x40 (Inherited: 0x30)
struct ULightSettingsModColorCurve : ULightSettingsModColorBase {
	struct UCurveLinearColor* Curve; // 0x30(0x08)
	enum class ELightRigCurveLinearColorType ColorType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class DayNight.LightSettingsModColorConstant
// Size: 0x48 (Inherited: 0x30)
struct ULightSettingsModColorConstant : ULightSettingsModColorBase {
	struct FLinearColor Color; // 0x30(0x10)
	enum class ELightRigCurveLinearColorType ColorType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class DayNight.LightSettingsModColorThreshold
// Size: 0x60 (Inherited: 0x30)
struct ULightSettingsModColorThreshold : ULightSettingsModColorBase {
	struct ULightSettingsModThreshold* Threshold; // 0x30(0x08)
	struct FLinearColor ColorAbove; // 0x38(0x10)
	struct FLinearColor ColorBelow; // 0x48(0x10)
	enum class ELightRigCurveLinearColorType ColorType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class DayNight.LightDirectionLerpControl
// Size: 0x30 (Inherited: 0x28)
struct ULightDirectionLerpControl : UObject {
	bool bEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class DayNight.LightDirectionLerpCurve
// Size: 0x38 (Inherited: 0x30)
struct ULightDirectionLerpCurve : ULightDirectionLerpControl {
	struct UCurveFloat* Curve; // 0x30(0x08)
};

// Class DayNight.LightDirectionLerpBinary
// Size: 0x38 (Inherited: 0x30)
struct ULightDirectionLerpBinary : ULightDirectionLerpControl {
	bool bInvert; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DayNight.LightDirectionLerpOnOff
// Size: 0x40 (Inherited: 0x38)
struct ULightDirectionLerpOnOff : ULightDirectionLerpBinary {
	float Cutoff; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class DayNight.LightDirectionLerpIfNotZero
// Size: 0x40 (Inherited: 0x38)
struct ULightDirectionLerpIfNotZero : ULightDirectionLerpBinary {
	float Tolerance; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class DayNight.LightDirectionLerpIfOne
// Size: 0x40 (Inherited: 0x38)
struct ULightDirectionLerpIfOne : ULightDirectionLerpBinary {
	float Tolerance; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class DayNight.LightDirectionEase
// Size: 0x38 (Inherited: 0x30)
struct ULightDirectionEase : ULightDirectionLerpControl {
	enum class ELerpEasingType Easing; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float BlendExp; // 0x34(0x04)
};

// Class DayNight.LightParameterSmoothing
// Size: 0x50 (Inherited: 0x28)
struct ULightParameterSmoothing : UObject {
	struct TArray<enum class EGlobalLightRigModParam> ModParamSet; // 0x28(0x10)
	enum class ELightParameterSmoothingTimeSource TimeSource; // 0x38(0x01)
	enum class ELightParameterSmoothingTimeBase TimeBase; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct UCurveFloat* TimeBlendCurve; // 0x40(0x08)
	enum class ELightParameterTimeBlendInput TimeBlendCurveInput; // 0x48(0x01)
	bool bEnabled; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class DayNight.LightParameterSmoothingLinear
// Size: 0x58 (Inherited: 0x50)
struct ULightParameterSmoothingLinear : ULightParameterSmoothing {
	float Rate; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class DayNight.LightParameterSmoothingFilter
// Size: 0x58 (Inherited: 0x50)
struct ULightParameterSmoothingFilter : ULightParameterSmoothing {
	float TimeConstant; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class DayNight.LightSettingsModSunColor
// Size: 0x58 (Inherited: 0x30)
struct ULightSettingsModSunColor : ULightSettingsModColorBase {
	struct FGlobalLightingSunColorParams Params; // 0x30(0x24)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class DayNight.LightSettingsModSunLuminance
// Size: 0x60 (Inherited: 0x38)
struct ULightSettingsModSunLuminance : ULightSettingsModFloatBase {
	struct FGlobalLightingSunColorParams Params; // 0x38(0x24)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class DayNight.DayNightMasterComponent
// Size: 0xd40 (Inherited: 0xc8)
struct UDayNightMasterComponent : UActorComponent {
	struct UEphemerisBasis* ForceWorldBasis; // 0xc8(0x08)
	struct FTimeDateSourceStack TimeSourceStack; // 0xd0(0x10)
	struct FTimeController TimeController; // 0xe0(0xb0)
	struct TArray<struct UEphemerisSubroutine*> EphemerisProgram; // 0x190(0x10)
	struct FEphemerisComputer EphemerisComputer; // 0x1a0(0x148)
	struct UDayNightLightRig* DayNightLightRig; // 0x2e8(0x08)
	struct FEphemeralSkyState SkyState; // 0x2f0(0x190)
	struct FDayNightLightRigResults DayNightLightRigResults; // 0x480(0x8a8)
	struct ADayNightSky* SkyActorOverride; // 0xd28(0x08)
	struct UGeocentricOrbitsComponent* DebugOrbits; // 0xd30(0x08)
	float LastNormalizedTime; // 0xd38(0x04)
	char pad_D3C[0x4]; // 0xd3c(0x04)

	bool GetPointOfInterest(struct UObject* WorldContextObject, struct FName Name, struct FCelestialPointOfInterest& poi); // Function DayNight.DayNightMasterComponent.GetPointOfInterest // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1ca32e0
	void GetNightZeroToOne(struct UObject* WorldContextObject, float& DayNightValue); // Function DayNight.DayNightMasterComponent.GetNightZeroToOne // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1ca31d0
	void GetNightZeroDayOne(struct UObject* WorldContextObject, float& DayNightValue); // Function DayNight.DayNightMasterComponent.GetNightZeroDayOne // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1ca30d0
	void GetNightNegOneDayOne(struct UObject* WorldContextObject, float& DayNightValue); // Function DayNight.DayNightMasterComponent.GetNightNegOneDayOne // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1ca2fd0
	void GetDayZeroToOne(struct UObject* WorldContextObject, float& DayNightValue); // Function DayNight.DayNightMasterComponent.GetDayZeroToOne // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1ca2ed0
	void GetDayNightMaster(struct UObject* WorldContextObject, struct UDayNightMasterComponent*& DayNightMaster); // Function DayNight.DayNightMasterComponent.GetDayNightMaster // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1ca2cf0
	void DayNightGetNormalizedTime(struct UObject* WorldContextObject, struct FSolarNormalizedTime& CurrentTime, bool& Valid); // Function DayNight.DayNightMasterComponent.DayNightGetNormalizedTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1ca2bb0
	void DayNightGetNightZeroToOne(struct UObject* WorldContextObject, float& DayNightValue); // Function DayNight.DayNightMasterComponent.DayNightGetNightZeroToOne // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1ca2a80
	void DayNightGetNightZeroDayOne(struct UObject* WorldContextObject, float& DayNightValue); // Function DayNight.DayNightMasterComponent.DayNightGetNightZeroDayOne // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1ca2950
	void DayNightGetNightNegOneDayOne(struct UObject* WorldContextObject, float& DayNightValue); // Function DayNight.DayNightMasterComponent.DayNightGetNightNegOneDayOne // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1ca2820
	void DayNightGetDayZeroToOne(struct UObject* WorldContextObject, float& DayNightValue); // Function DayNight.DayNightMasterComponent.DayNightGetDayZeroToOne // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1ca26f0
};

// Class DayNight.DayNightMaster
// Size: 0x258 (Inherited: 0x248)
struct ADayNightMaster : AActor {
	struct UDayNightMasterComponent* DayNightMaster; // 0x248(0x08)
	bool bAutoFindSkyActor; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
};

// Class DayNight.DayNightMasterComputeOnly
// Size: 0x250 (Inherited: 0x248)
struct ADayNightMasterComputeOnly : AActor {
	struct UDayNightMasterComponent* DayNightMaster; // 0x248(0x08)
};

// Class DayNight.DayNightMasterComputeOnlyLibrary
// Size: 0x48 (Inherited: 0x30)
struct UDayNightMasterComputeOnlyLibrary : UDataAsset {
	struct ADayNightMasterComputeOnly* ComputeDefault; // 0x30(0x08)
	struct TArray<struct FDayNightMasterComputeOnlyPerLevel> LevelOverrides; // 0x38(0x10)
};

// Class DayNight.DayNightOverrideInterface
// Size: 0x28 (Inherited: 0x28)
struct UDayNightOverrideInterface : UInterface {
};

// Class DayNight.DayNightOverrideBasisInterface
// Size: 0x28 (Inherited: 0x28)
struct UDayNightOverrideBasisInterface : UInterface {
};

// Class DayNight.DayNightSky
// Size: 0x690 (Inherited: 0x248)
struct ADayNightSky : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	struct UDayNightMasterComponent* DayNightMaster; // 0x250(0x08)
	struct USceneComponent* TrackEyeXYRoot; // 0x258(0x08)
	struct UGlobalLightingBlendableDayNightSky* GlobalLightingBlendable; // 0x260(0x08)
	float GlobalLightingBlendablePriority; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FSunDisk SunDisk; // 0x270(0x118)
	struct FMoonDisk MoonDisk; // 0x388(0xd0)
	struct FPlanetParams Planets; // 0x458(0x08)
	struct FPlanet Venus; // 0x460(0x38)
	struct FPlanet Mars; // 0x498(0x38)
	struct FPlanet Jupiter; // 0x4d0(0x38)
	struct FPlanet Saturn; // 0x508(0x38)
	struct FMilkyWay MilkyWay; // 0x540(0x80)
	struct TSoftObjectPtr<UNiagaraSystem> StarFieldSystem; // 0x5c0(0x28)
	struct TSoftObjectPtr<UNiagaraSystem> HighlightStarFieldSystem; // 0x5e8(0x28)
	struct UNiagaraStarrySkySwitchableHighlightComponent* StarField; // 0x610(0x08)
	struct FStarrySkyCurveParameters MoonParameters; // 0x618(0x38)
	struct FStarrySkyParameters CurrentMoonParameters; // 0x650(0x20)
	struct FVector2D HideStarsNormalizedTime; // 0x670(0x08)
	struct URenderSettingsBlendDomainAsset* NightSkyVisibilityBlendDomain; // 0x678(0x08)
	float NightSkyVisibilityBlendDomainThreshold; // 0x680(0x04)
	bool bEnableSunDisk; // 0x684(0x01)
	bool bUseActorZForWorldOrigin; // 0x685(0x01)
	bool bUseHideStarsNormalizedTime; // 0x686(0x01)
	char pad_687[0x1]; // 0x687(0x01)
	struct UDayNightCompass* Compass; // 0x688(0x08)

	void GetDayNightSky(struct UObject* WorldContextObject, struct ADayNightSky*& DayNightSkyActor); // Function DayNight.DayNightSky.GetDayNightSky // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1ca2de0
	void EditLightRig(); // Function DayNight.DayNightSky.EditLightRig // (Final|Native|Public|Const) // @ game+0x1074730
	void EditBasis(); // Function DayNight.DayNightSky.EditBasis // (Final|Native|Public|Const) // @ game+0x1074730
};

// Class DayNight.GlobalLightingBlendableDayNightSky
// Size: 0x30 (Inherited: 0x28)
struct UGlobalLightingBlendableDayNightSky : UGlobalLightingBlendableBase {
	bool bDisableSkySunDisk; // 0x28(0x01)
	bool bDisableSkyMoonDisk; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// Class DayNight.DayNightCompass
// Size: 0x250 (Inherited: 0x220)
struct UDayNightCompass : USceneComponent {
	struct UMaterialInterface* TextMaterial; // 0x218(0x08)
	struct UTextRenderComponent* North; // 0x220(0x08)
	struct UTextRenderComponent* South; // 0x228(0x08)
	struct UTextRenderComponent* East; // 0x230(0x08)
	struct UTextRenderComponent* West; // 0x238(0x08)
	struct FDayNightCompassParams Params; // 0x240(0x10)
};

// Class DayNight.UberExposureDriver
// Size: 0x28 (Inherited: 0x28)
struct UUberExposureDriver : UPostProcessingVarsDriver {
};

// Class DayNight.UberExposureDriverBlueprintBase
// Size: 0x28 (Inherited: 0x28)
struct UUberExposureDriverBlueprintBase : UUberExposureDriver {

	float UberExposureDriverGetValue(struct UWorld* World, struct AActor* Owner); // Function DayNight.UberExposureDriverBlueprintBase.UberExposureDriverGetValue // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x1ca3420
};

// Class DayNight.UberExposureDriverSunAltitudeDegrees
// Size: 0x28 (Inherited: 0x28)
struct UUberExposureDriverSunAltitudeDegrees : UUberExposureDriver {
};

// Class DayNight.UberExposureDriverIndoors
// Size: 0x28 (Inherited: 0x28)
struct UUberExposureDriverIndoors : UUberExposureDriver {
};

// Class DayNight.UberExposureDriverRainStormIntensity
// Size: 0x28 (Inherited: 0x28)
struct UUberExposureDriverRainStormIntensity : UUberExposureDriver {
};

// Class DayNight.UberExposureDriverNormalizedTime
// Size: 0x38 (Inherited: 0x28)
struct UUberExposureDriverNormalizedTime : UUberExposureDriver {
	struct FDateInput DefaultDay; // 0x28(0x0c)
	bool bAssumeNoonIfNoDayNight; // 0x34(0x01)
	bool bUseDefaultDay; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// Class DayNight.UberExposureDriverRenderSettingsCustomBlendDomain
// Size: 0x30 (Inherited: 0x28)
struct UUberExposureDriverRenderSettingsCustomBlendDomain : UUberExposureDriver {
	struct URenderSettingsCustomBlendDomain* domain; // 0x28(0x08)
};

// Class DayNight.UberExposureDriverExposureExpression
// Size: 0x30 (Inherited: 0x28)
struct UUberExposureDriverExposureExpression : UUberExposureDriver {
	struct UExposureExpressionsExposureValue* Expression; // 0x28(0x08)
};

// Class DayNight.UberExposureComponent
// Size: 0xa60 (Inherited: 0x880)
struct UUberExposureComponent : UPostProcessingVarsComponent {
	enum class EAutoExposureMethod ExposureMethod; // 0x880(0x01)
	char pad_881[0x7]; // 0x881(0x07)
	struct UTexture* AutoExposureMeterMask; // 0x888(0x08)
	struct UCurveFloat* ExposureCompensationCurve; // 0x890(0x08)
	struct UCurveFloat* BaseExposureCompensationCurve; // 0x898(0x08)
	float BaseExposureCompensationValue; // 0x8a0(0x04)
	char pad_8A4[0x4]; // 0x8a4(0x04)
	struct UCurveFloat* MinExposureCurve; // 0x8a8(0x08)
	struct UCurveFloat* MaxExposureCurve; // 0x8b0(0x08)
	struct UCurveFloat* SpeedUpCurve; // 0x8b8(0x08)
	struct UCurveFloat* SpeedDownCurve; // 0x8c0(0x08)
	struct UCurveFloat* LowPercentCurve; // 0x8c8(0x08)
	struct UCurveFloat* HighPercentCurve; // 0x8d0(0x08)
	struct UCurveFloat* HistogramMinCurve; // 0x8d8(0x08)
	struct UCurveFloat* HistogramMaxCurve; // 0x8e0(0x08)
	struct UCurveFloat* ExposureBiasCurve; // 0x8e8(0x08)
	struct UCurveFloat* WhiteBalanceTempCurve; // 0x8f0(0x08)
	struct UCurveFloat* WhiteBalanceTintCurve; // 0x8f8(0x08)
	struct FUberExposureColorGradingGlobal Global; // 0x900(0x30)
	struct FUberExposureColorGradingShadows Shadows; // 0x930(0x40)
	struct FUberExposureColorGradingMidtones Midtones; // 0x970(0x30)
	struct FUberExposureColorGradingHighlights Highlights; // 0x9a0(0x40)
	struct UCurveFloat* BlueCorrectionCurve; // 0x9e0(0x08)
	struct UCurveFloat* ExpandGamutCurve; // 0x9e8(0x08)
	struct UCurveLinearColor* SceneColorTintCurve; // 0x9f0(0x08)
	struct UCurveFloat* ProbeToneMapAmountCurve; // 0x9f8(0x08)
	struct UCurveFloat* ProbeToneMapMinIntensityCurve; // 0xa00(0x08)
	struct UCurveFloat* ProbeToneMapMaxEVCurve; // 0xa08(0x08)
	struct UCurveFloat* ProbeOutsideIntensityCurve; // 0xa10(0x08)
	struct UCurveFloat* ProbeInsideIntensityCurve; // 0xa18(0x08)
	struct UCurveFloat* ProbeOutsideSaturationCurve; // 0xa20(0x08)
	struct UCurveFloat* ProbeInsideSaturationCurve; // 0xa28(0x08)
	struct UCurveFloat* ProbeContactShadowsMinValueCurve; // 0xa30(0x08)
	struct UCurveFloat* ProbeContactShadowsLengthCurve; // 0xa38(0x08)
	struct UCurveFloat* ProbeContactShadowsConeAngleCurve; // 0xa40(0x08)
	struct UCurveFloat* ProbeContactShadowsFalloffExponentCurve; // 0xa48(0x08)
	struct UCurveFloat* ProbeContactShadowsDepthToleranceCurve; // 0xa50(0x08)
	char bSetExposureMethod : 1; // 0xa58(0x01)
	char bUseExposureCompensationCurve : 1; // 0xa58(0x01)
	char bUseMinExposureCurve : 1; // 0xa58(0x01)
	char bUseMaxExposureCurve : 1; // 0xa58(0x01)
	char bUseSpeedUpCurve : 1; // 0xa58(0x01)
	char bUseSpeedDownCurve : 1; // 0xa58(0x01)
	char bUseLowPercentCurve : 1; // 0xa58(0x01)
	char bUseHighPercentCurve : 1; // 0xa58(0x01)
	char bUseHistogramMinCurve : 1; // 0xa59(0x01)
	char bUseHistogramMaxCurve : 1; // 0xa59(0x01)
	char bSetExposureBiasCurve : 1; // 0xa59(0x01)
	char bUseWhiteBalanceTempCurve : 1; // 0xa59(0x01)
	char bUseWhiteBalanceTintCurve : 1; // 0xa59(0x01)
	char bUseBlueCorrectionCurve : 1; // 0xa59(0x01)
	char bUseExpandGamutCurve : 1; // 0xa59(0x01)
	char bUseColorGradingShadows : 1; // 0xa59(0x01)
	char bUseColorGradingMidtones : 1; // 0xa5a(0x01)
	char bUseColorGradingHighlights : 1; // 0xa5a(0x01)
	char bUseProbeToneMapAmount : 1; // 0xa5a(0x01)
	char bUseProbeToneMapMinIntensity : 1; // 0xa5a(0x01)
	char bUseProbeToneMapMaxEV : 1; // 0xa5a(0x01)
	char bUseProbeOutsideIntensity : 1; // 0xa5a(0x01)
	char bUseProbeInsideIntensity : 1; // 0xa5a(0x01)
	char bUseProbeOutsideSaturation : 1; // 0xa5a(0x01)
	char bUseProbeInsideSaturation : 1; // 0xa5b(0x01)
	char bUseProbeContactShadowsMinValue : 1; // 0xa5b(0x01)
	char bUseProbeContactShadowsLength : 1; // 0xa5b(0x01)
	char bUseProbeContactShadowsConeAngle : 1; // 0xa5b(0x01)
	char bUseProbeContactShadowsFalloffExponent : 1; // 0xa5b(0x01)
	char bUseProbeContactShadowsDepthTolerance : 1; // 0xa5b(0x01)
	char bUseAutoExposureMeterMask : 1; // 0xa5b(0x01)
	char bUseColorGradingGlobal : 1; // 0xa5b(0x01)
	char bUseSceneColorTintCurve : 1; // 0xa5c(0x01)
	char pad_A5C_1 : 7; // 0xa5c(0x01)
	char pad_A5D[0x3]; // 0xa5d(0x03)
};

// Class DayNight.UberExposureActor
// Size: 0x250 (Inherited: 0x248)
struct AUberExposureActor : AActor {
	struct UUberExposureComponent* Component; // 0x248(0x08)
};

// Class DayNight.UberExposureComponentConstDriver
// Size: 0xa60 (Inherited: 0xa60)
struct UUberExposureComponentConstDriver : UUberExposureComponent {
};

// Class DayNight.UberExposureComponentSunAltitude
// Size: 0xa60 (Inherited: 0xa60)
struct UUberExposureComponentSunAltitude : UUberExposureComponentConstDriver {
};

// Class DayNight.UberExposureComponentSunAltitudeReference
// Size: 0xa60 (Inherited: 0xa60)
struct UUberExposureComponentSunAltitudeReference : UUberExposureComponentSunAltitude {
};

// Class DayNight.UberExposureComponentNormalizedTime
// Size: 0xa60 (Inherited: 0xa60)
struct UUberExposureComponentNormalizedTime : UUberExposureComponentConstDriver {
};

// Class DayNight.UberExposureComponentRenderSettingsCustomBlendDomain
// Size: 0xa60 (Inherited: 0xa60)
struct UUberExposureComponentRenderSettingsCustomBlendDomain : UUberExposureComponentConstDriver {
};

// Class DayNight.UberExposureComponentExposureExpression
// Size: 0xa60 (Inherited: 0xa60)
struct UUberExposureComponentExposureExpression : UUberExposureComponent {
};

// Class DayNight.DayNightOverrideComponent
// Size: 0x470 (Inherited: 0x220)
struct UDayNightOverrideComponent : USceneComponent {
	struct UEphemerisBasis* OverrideBasis; // 0x220(0x08)
	struct FTimeDateSourceStackVolume TimeSourceStack; // 0x228(0x10)
	struct FTimeController TimeController; // 0x238(0xb0)
	struct TArray<struct UEphemerisSubroutine*> EphemerisProgram; // 0x2e8(0x10)
	struct FEphemerisComputer EphemerisComputer; // 0x2f8(0x148)
	float Priority; // 0x440(0x04)
	float BlendRadius; // 0x444(0x04)
	float BlendWeight; // 0x448(0x04)
	char bEnabled : 1; // 0x44c(0x01)
	char bUnbounded : 1; // 0x44c(0x01)
	char bAppendToMasterEphemerisProgram : 1; // 0x44c(0x01)
	char pad_44C_3 : 5; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	float LastUpdate; // 0x450(0x04)
	int32_t InitializedComputer; // 0x454(0x04)
	struct TArray<struct UEphemerisSubroutine*> AppendedEphemerisProgram; // 0x458(0x10)
	char pad_468[0x8]; // 0x468(0x08)

	void SetPriority(float NewPriority); // Function DayNight.DayNightOverrideComponent.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1ca6c30
};

// Class DayNight.DayNightVolume
// Size: 0x4d0 (Inherited: 0x280)
struct ADayNightVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	struct UEphemerisBasis* OverrideBasis; // 0x288(0x08)
	struct FTimeDateSourceStackVolume TimeSourceStack; // 0x290(0x10)
	struct FTimeController TimeController; // 0x2a0(0xb0)
	struct TArray<struct UEphemerisSubroutine*> EphemerisProgram; // 0x350(0x10)
	struct FEphemerisComputer EphemerisComputer; // 0x360(0x148)
	float Priority; // 0x4a8(0x04)
	float BlendRadius; // 0x4ac(0x04)
	float BlendWeight; // 0x4b0(0x04)
	bool bUnbounded; // 0x4b4(0x01)
	bool bEnabled; // 0x4b5(0x01)
	bool bAppendToMasterEphemerisProgram; // 0x4b6(0x01)
	char pad_4B7[0x1]; // 0x4b7(0x01)
	float LastUpdate; // 0x4b8(0x04)
	int32_t InitializedComputer; // 0x4bc(0x04)
	struct TArray<struct UEphemerisSubroutine*> AppendedEphemerisProgram; // 0x4c0(0x10)

	void SetPriority(float NewPriority); // Function DayNight.DayNightVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1ca6bb0
};

// Class DayNight.DayNightBasisVolume
// Size: 0x298 (Inherited: 0x280)
struct ADayNightBasisVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	struct UEphemerisBasis* BasisOverride; // 0x288(0x08)
	float Priority; // 0x290(0x04)
	bool bUnbounded; // 0x294(0x01)
	bool bEnabled; // 0x295(0x01)
	char pad_296[0x2]; // 0x296(0x02)

	void SetPriority(float NewPriority); // Function DayNight.DayNightBasisVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1ca6b30
};

// Class DayNight.EphemerisSubroutine
// Size: 0x28 (Inherited: 0x28)
struct UEphemerisSubroutine : UObject {
};

// Class DayNight.EphemerisBasis
// Size: 0x80 (Inherited: 0x30)
struct UEphemerisBasis : UDataAsset {
	struct FTopographicObserver TopographicObserver; // 0x30(0x14)
	char pad_44[0x4]; // 0x44(0x04)
	struct UCurveFloat* SunAltitudeNightDayCurve; // 0x48(0x08)
	struct UCurveFloat* NightSkyStrengthCurve; // 0x50(0x08)
	struct UCurveFloat* SunIllusionCurve; // 0x58(0x08)
	struct UCurveFloat* MoonIllusionCurve; // 0x60(0x08)
	struct UDataTable* CelestialPointsOfInterest; // 0x68(0x08)
	struct UStarCatalog* StarCatalog; // 0x70(0x08)
	bool bSunIllusionCurve; // 0x78(0x01)
	bool bMoonIllusionCurve; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// Class DayNight.EphemerisBasisLibrary
// Size: 0x48 (Inherited: 0x30)
struct UEphemerisBasisLibrary : UDataAsset {
	struct UEphemerisBasis* DefaultBasis; // 0x30(0x08)
	struct TArray<struct FEphemerisBasisPerLevel> LevelBasis; // 0x38(0x10)
};

// Class DayNight.EphemerisSubroutineAstronomical
// Size: 0x30 (Inherited: 0x28)
struct UEphemerisSubroutineAstronomical : UEphemerisSubroutine {
	float MoonPeriodDays; // 0x28(0x04)
	bool bOverride_MoonPeriodDays; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class DayNight.EphemerisSubroutineFauxMoonData
// Size: 0xa0 (Inherited: 0x28)
struct UEphemerisSubroutineFauxMoonData : UObject {
	struct FEphemerisDayInfo IdealDayInfo; // 0x28(0x78)
};

// Class DayNight.EphemerisSubroutineFauxMoon
// Size: 0x48 (Inherited: 0x28)
struct UEphemerisSubroutineFauxMoon : UEphemerisSubroutine {
	struct FDateInput IdealDate; // 0x28(0x0c)
	float BaseOffsetDegrees; // 0x34(0x04)
	float OffsetVarianceDegrees; // 0x38(0x04)
	float OffsetPeriodDays; // 0x3c(0x04)
	float PhasePeriodDays; // 0x40(0x04)
	bool bEnabled; // 0x44(0x01)
	bool bOverride_PhasePeriodDays; // 0x45(0x01)
	bool bUseIdealDate; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
};

// Class DayNight.EphemerisSubroutineMoonOpposesSun
// Size: 0x30 (Inherited: 0x28)
struct UEphemerisSubroutineMoonOpposesSun : UEphemerisSubroutine {
	float OffsetDegrees; // 0x28(0x04)
	bool bEnabled; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class DayNight.EphemerisSubroutineForceMoonPhase
// Size: 0x48 (Inherited: 0x28)
struct UEphemerisSubroutineForceMoonPhase : UEphemerisSubroutine {
	struct FManualMoonSetup Moon; // 0x28(0x18)
	bool bEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class DayNight.EphemerisSubroutineNoNewMoon
// Size: 0x30 (Inherited: 0x28)
struct UEphemerisSubroutineNoNewMoon : UEphemerisSubroutine {
	float MinimalPhasePercent; // 0x28(0x04)
	bool bUpdateVisualPhaseOnly; // 0x2c(0x01)
	bool bEnabled; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// Class DayNight.EphemerisSubroutineSunPosition
// Size: 0x38 (Inherited: 0x28)
struct UEphemerisSubroutineSunPosition : UEphemerisSubroutine {
	struct FRotator Direction; // 0x28(0x0c)
	bool bOverride_Direction; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class DayNight.EphemerisSubroutineMoonPosition
// Size: 0x38 (Inherited: 0x28)
struct UEphemerisSubroutineMoonPosition : UEphemerisSubroutine {
	struct FRotator Direction; // 0x28(0x0c)
	bool bOverride_Direction; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class DayNight.EphemerisSubroutineTweakDirection
// Size: 0x38 (Inherited: 0x28)
struct UEphemerisSubroutineTweakDirection : UEphemerisSubroutine {
	float TweakAltitude; // 0x28(0x04)
	float TweakAzimuth; // 0x2c(0x04)
	struct UCurveFloat* NormalizedTimeBlend; // 0x30(0x08)
};

// Class DayNight.EphemerisSubroutineTweakMoonPosition
// Size: 0x40 (Inherited: 0x38)
struct UEphemerisSubroutineTweakMoonPosition : UEphemerisSubroutineTweakDirection {
	bool bOnlyLightDirection; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class DayNight.EphemerisSubroutineTweakSunPosition
// Size: 0x40 (Inherited: 0x38)
struct UEphemerisSubroutineTweakSunPosition : UEphemerisSubroutineTweakDirection {
	bool bFullSun; // 0x38(0x01)
	bool bSunDisk; // 0x39(0x01)
	bool bSunLight; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// Class DayNight.FixedSunPositionsData
// Size: 0xc0 (Inherited: 0x28)
struct UFixedSunPositionsData : UObject {
	struct FEphemerisDayInfo DayInfo; // 0x28(0x78)
	struct TArray<struct FFixedSunPosition> Positions; // 0xa0(0x10)
	struct FTimespan TransitionTime; // 0xb0(0x08)
	float TransitionEaseInOutPower; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class DayNight.FixedSunPositions
// Size: 0x60 (Inherited: 0x30)
struct UFixedSunPositions : UDataAsset {
	float TransitionTime; // 0x30(0x04)
	float TransitionEaseInOutPower; // 0x34(0x04)
	struct TArray<struct FFixedSunPositionInput> SunAltitudes; // 0x38(0x10)
	float SunriseDurationMinutes; // 0x48(0x04)
	float NoonDurationHours; // 0x4c(0x04)
	float SunsetDurationMinutes; // 0x50(0x04)
	float MidnightDurationHours; // 0x54(0x04)
	bool bNoonDuration; // 0x58(0x01)
	bool bSunriseDuration; // 0x59(0x01)
	bool bMidnightDuration; // 0x5a(0x01)
	bool bSunsetDuration; // 0x5b(0x01)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class DayNight.EphemerisSubroutineFixedSunPositions
// Size: 0x38 (Inherited: 0x28)
struct UEphemerisSubroutineFixedSunPositions : UEphemerisSubroutine {
	struct UFixedSunPositions* FixedPositions; // 0x28(0x08)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DayNight.FixedIdealMoonPathData
// Size: 0x558 (Inherited: 0x30)
struct UFixedIdealMoonPathData : UDataAsset {
	struct FMoonPath MoonPath; // 0x30(0x528)

	void ForceRecompute(); // Function DayNight.FixedIdealMoonPathData.ForceRecompute // (Final|Native|Public) // @ game+0x1074730
};

// Class DayNight.EphemerisSubroutineFixedIdealMoonPath
// Size: 0x40 (Inherited: 0x28)
struct UEphemerisSubroutineFixedIdealMoonPath : UEphemerisSubroutine {
	struct UFixedIdealMoonPathData* MoonPath; // 0x28(0x08)
	enum class EMoonPathMode AzimuthMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float AzimuthOffsetDegrees; // 0x34(0x04)
	bool bEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class DayNight.EphemerisSubroutineDynamicIdealMoonPathData
// Size: 0x550 (Inherited: 0x28)
struct UEphemerisSubroutineDynamicIdealMoonPathData : UObject {
	struct FMoonPath MoonPath; // 0x28(0x528)
};

// Class DayNight.EphemerisSubroutineDynamicIdealMoonPath
// Size: 0x40 (Inherited: 0x28)
struct UEphemerisSubroutineDynamicIdealMoonPath : UEphemerisSubroutine {
	enum class EMoonPathMode AzimuthMode; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float AzimuthOffsetDegrees; // 0x2c(0x04)
	struct FMoonPathSettings PathSettings; // 0x30(0x0c)
	bool bEnabled; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class DayNight.EphemerisSubroutineIdealSunPathData
// Size: 0x1a0 (Inherited: 0x28)
struct UEphemerisSubroutineIdealSunPathData : UObject {
	struct FSolarDay SolarDay; // 0x28(0x178)
};

// Class DayNight.EphemerisSubroutineGamifyTime
// Size: 0x28 (Inherited: 0x28)
struct UEphemerisSubroutineGamifyTime : UObject {
};

// Class DayNight.EphemerisSubroutineGamifyTimeCurveBase
// Size: 0xb0 (Inherited: 0x28)
struct UEphemerisSubroutineGamifyTimeCurveBase : UEphemerisSubroutineGamifyTime {
	struct FRuntimeFloatCurve ToNormalizedTime; // 0x28(0x88)
};

// Class DayNight.EphemerisSubroutineGamifyTimeSunriseSunset
// Size: 0xc8 (Inherited: 0xb0)
struct UEphemerisSubroutineGamifyTimeSunriseSunset : UEphemerisSubroutineGamifyTimeCurveBase {
	struct FTimeInput SunRise; // 0xb0(0x0c)
	struct FTimeInput SunSet; // 0xbc(0x0c)
};

// Class DayNight.EphemerisSubroutineGamifyTimeDayNightRatio
// Size: 0xb8 (Inherited: 0xb0)
struct UEphemerisSubroutineGamifyTimeDayNightRatio : UEphemerisSubroutineGamifyTimeCurveBase {
	float DayToNightRatio; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class DayNight.EphemerisSubroutineIdealSunPath
// Size: 0x50 (Inherited: 0x28)
struct UEphemerisSubroutineIdealSunPath : UEphemerisSubroutine {
	struct FDateInput IdealDate; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct UEphemerisSubroutineGamifyTime* GamifyTime; // 0x38(0x08)
	struct UCurveFloat* RemapNormalizedTime; // 0x40(0x08)
	bool bEnabled; // 0x48(0x01)
	bool bUseRemapNormalizedTime; // 0x49(0x01)
	bool bRemapNormalizedTimeIs12Hour; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// Class DayNight.GeocentricOrbitsComponent
// Size: 0x550 (Inherited: 0x220)
struct UGeocentricOrbitsComponent : USceneComponent {
	struct FGeocentricOrbitsShow Show; // 0x218(0x08)
	struct FGeocentricOrbitsAdvanced Advanced; // 0x220(0x34)
	struct FDateTime ComputedForDate; // 0x258(0x08)
	struct FTopographicObserver ComputedForTopographicObserver; // 0x260(0x14)
	struct UStaticMesh* SplineMesh; // 0x278(0x08)
	struct UMaterialInterface* SunSplineMeshMaterial; // 0x280(0x08)
	struct UMaterialInterface* MoonSplineMeshMaterial; // 0x288(0x08)
	struct UMaterialInterface* VenusSplineMeshMaterial; // 0x290(0x08)
	struct UMaterialInterface* MarsSplineMeshMaterial; // 0x298(0x08)
	struct UMaterialInterface* JupiterSplineMeshMaterial; // 0x2a0(0x08)
	struct UMaterialInterface* SaturnSplineMeshMaterial; // 0x2a8(0x08)
	struct FGeocentricOrbit SunPath; // 0x2b0(0x68)
	struct FGeocentricOrbit MoonPath; // 0x318(0x68)
	struct FGeocentricOrbit VenusPath; // 0x380(0x68)
	struct FGeocentricOrbit MarsPath; // 0x3e8(0x68)
	struct FGeocentricOrbit JupiterPath; // 0x450(0x68)
	struct FGeocentricOrbit SaturnPath; // 0x4b8(0x68)
	struct FGeocentricOrbitResources OrbitResources; // 0x520(0x28)
	char pad_548[0x8]; // 0x548(0x08)
};

// Class DayNight.GlobalSubsurfaceModComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UGlobalSubsurfaceModComponent : UActorComponent {
	struct UMaterialParameterCollection* GlobalSubsurfaceMPC; // 0xc8(0x08)
	struct UCurveFloat* GlobalSubsurfaceCurve; // 0xd0(0x08)
	float CurrentModValue; // 0xd8(0x04)
	bool bOutdoorsOnly; // 0xdc(0x01)
	bool bDisable; // 0xdd(0x01)
	char pad_DE[0x2]; // 0xde(0x02)
};

// Class DayNight.NiagaraStarrySkyComponent
// Size: 0xe8 (Inherited: 0xc8)
struct UNiagaraStarrySkyComponent : UActorComponent {
	struct UNiagaraSystem* StarrySkySystem; // 0xc8(0x08)
	bool bDestroySystemWhenHidden; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct UNiagaraComponent* StarrySkyComponent; // 0xd8(0x08)
	struct UMaterialParameterCollection* StarrySkyMPC; // 0xe0(0x08)

	void SetSystem(struct UNiagaraSystem* NiagaraSystem); // Function DayNight.NiagaraStarrySkyComponent.SetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x1cabeb0
	void LoadSystem(struct TSoftObjectPtr<UNiagaraSystem> NiagaraSystem); // Function DayNight.NiagaraStarrySkyComponent.LoadSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x1cab1b0
	bool IsLoadedSystem(struct TSoftObjectPtr<UNiagaraSystem> NiagaraSystem); // Function DayNight.NiagaraStarrySkyComponent.IsLoadedSystem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1caaf80
};

// Class DayNight.NiagaraStarrySkyHighlightComponent
// Size: 0x130 (Inherited: 0xe8)
struct UNiagaraStarrySkyHighlightComponent : UNiagaraStarrySkyComponent {
	struct UStarCatalog* StarCatalog; // 0xe8(0x08)
	struct FStarrySkyHighlights Highlights; // 0xf0(0x20)
	float HighlightModulate; // 0x110(0x04)
	struct FStarrySkyHighlightParameters HighlightParameters; // 0x114(0x18)
	char pad_12C[0x4]; // 0x12c(0x04)

	void SupportedHighlightConstellations(int32_t& Constellations); // Function DayNight.NiagaraStarrySkyHighlightComponent.SupportedHighlightConstellations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1cac650
	void SetHighlightStar(struct FName StarName); // Function DayNight.NiagaraStarrySkyHighlightComponent.SetHighlightStar // (Final|Native|Public|BlueprintCallable) // @ game+0x1cab8a0
	void SetHighlights(struct TArray<struct FName> ConstellationNames, struct FName StarName); // Function DayNight.NiagaraStarrySkyHighlightComponent.SetHighlights // (Final|Native|Public|BlueprintCallable) // @ game+0x1cabb00
	void SetHighlightConstellations(struct TArray<struct FName> ConstellationNames); // Function DayNight.NiagaraStarrySkyHighlightComponent.SetHighlightConstellations // (Final|Native|Public|BlueprintCallable) // @ game+0x1cab670
	void SetHighlightConstellation(struct FName ConstellationName); // Function DayNight.NiagaraStarrySkyHighlightComponent.SetHighlightConstellation // (Final|Native|Public|BlueprintCallable) // @ game+0x1cab520
	void SetHighlight(struct FName ConstellationName, struct FName StarName); // Function DayNight.NiagaraStarrySkyHighlightComponent.SetHighlight // (Final|Native|Public|BlueprintCallable) // @ game+0x1cab2c0
	void ClearHighlights(); // Function DayNight.NiagaraStarrySkyHighlightComponent.ClearHighlights // (Final|Native|Public|BlueprintCallable) // @ game+0x1caacd0
	void ClearHighlightConstellations(); // Function DayNight.NiagaraStarrySkyHighlightComponent.ClearHighlightConstellations // (Final|Native|Public|BlueprintCallable) // @ game+0x1caac10
};

// Class DayNight.NiagaraStarrySkySwitchableHighlightComponent
// Size: 0x140 (Inherited: 0xe8)
struct UNiagaraStarrySkySwitchableHighlightComponent : UNiagaraStarrySkyComponent {
	struct UStarCatalog* StarCatalog; // 0xe8(0x08)
	struct FStarrySkyHighlights CurrentHighlights; // 0xf0(0x20)
	float HighlightModulate; // 0x110(0x04)
	struct FStarrySkyHighlightParameters CurrentHighlightParameters; // 0x114(0x18)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct UNiagaraSystem* HighlightStarrySkySystem; // 0x130(0x08)
	bool bUseCameraAsOriginForHighlighting; // 0x138(0x01)
	enum class ESwitchableStarrySkyMode CurrentMode; // 0x139(0x01)
	bool bHighlightForDefocus; // 0x13a(0x01)
	char pad_13B[0x5]; // 0x13b(0x05)

	void SupportedHighlightConstellations(int32_t& Constellations); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.SupportedHighlightConstellations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1cac650
	bool StarrySkyStartHighlightings(struct UObject* WorldContextObject, struct TArray<struct FName> HighlightConstellationNames, struct FName HighlightStarName, float InitialModulate); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.StarrySkyStartHighlightings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cac3f0
	bool StarrySkyStartHighlighting(struct UObject* WorldContextObject, struct FName HighlightConstellationName, struct FName HighlightStarName, float InitialModulate); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.StarrySkyStartHighlighting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cac1f0
	bool StarrySkySetHighlightParameters(struct UObject* WorldContextObject, struct FStarrySkyHighlightParameters Parameters); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.StarrySkySetHighlightParameters // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cac0d0
	bool StarrySkySetHighlightModulate(struct UObject* WorldContextObject, float Modulate); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.StarrySkySetHighlightModulate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cabfe0
	bool StarrySkyEndHighlighting(struct UObject* WorldContextObject); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.StarrySkyEndHighlighting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cabf40
	void SetMode(enum class ESwitchableStarrySkyMode Mode); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1cabe30
	void SetHighlightSystem(struct UNiagaraSystem* NiagaraSystem); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlightSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x1caba70
	void SetHighlightStar(struct FName StarName); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlightStar // (Final|Native|Public|BlueprintCallable) // @ game+0x1cab970
	void SetHighlights(struct TArray<struct FName> ConstellationNames, struct FName StarName); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlights // (Final|Native|Public|BlueprintCallable) // @ game+0x1cabc80
	void SetHighlightConstellations(struct TArray<struct FName> ConstellationNames); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlightConstellations // (Final|Native|Public|BlueprintCallable) // @ game+0x1cab770
	void SetHighlightConstellation(struct FName ConstellationName); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlightConstellation // (Final|Native|Public|BlueprintCallable) // @ game+0x1cab5b0
	void SetHighlight(struct FName ConstellationName, struct FName StarName); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlight // (Final|Native|Public|BlueprintCallable) // @ game+0x1cab3e0
	void LoadHighlightSystem(struct TSoftObjectPtr<UNiagaraSystem> NiagaraSystem); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.LoadHighlightSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x1cab0a0
	bool IsHighlightLoadedSystem(struct TSoftObjectPtr<UNiagaraSystem> NiagaraSystem); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.IsHighlightLoadedSystem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1caae60
	void GetMode(enum class ESwitchableStarrySkyMode& Mode); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.GetMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1caadd0
	void ClearHighlights(); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.ClearHighlights // (Final|Native|Public|BlueprintCallable) // @ game+0x1caad30
	void ClearHighlightConstellations(); // Function DayNight.NiagaraStarrySkySwitchableHighlightComponent.ClearHighlightConstellations // (Final|Native|Public|BlueprintCallable) // @ game+0x1caac50
};

// Class DayNight.SkyStateOverride
// Size: 0x30 (Inherited: 0x28)
struct USkyStateOverride : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class DayNight.SkyStateOverrideCelestialSphereRotator
// Size: 0x48 (Inherited: 0x30)
struct USkyStateOverrideCelestialSphereRotator : USkyStateOverride {
	struct FRotator Rotator; // 0x30(0x0c)
	float Priority; // 0x3c(0x04)
	bool bEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class DayNight.SkyStateOverrideCelestialPointOfInterestAlignTo
// Size: 0x50 (Inherited: 0x30)
struct USkyStateOverrideCelestialPointOfInterestAlignTo : USkyStateOverride {
	struct FCelestialPointOfInterestName PointOfInterest; // 0x30(0x08)
	struct FVector SlerpUp; // 0x38(0x0c)
	float Priority; // 0x44(0x04)
	bool bUseSlerp; // 0x48(0x01)
	bool bEnabled; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)

	void SetPointOfInterestName(struct FName NewPointOfInterest); // Function DayNight.SkyStateOverrideCelestialPointOfInterestAlignTo.SetPointOfInterestName // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1cb1410
	void SetPointOfInterest(struct FCelestialPointOfInterestName NewPointOfInterest); // Function DayNight.SkyStateOverrideCelestialPointOfInterestAlignTo.SetPointOfInterest // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1cb1380
	void GetPointOfInterestName(struct FName& CurrentPointOfInterest); // Function DayNight.SkyStateOverrideCelestialPointOfInterestAlignTo.GetPointOfInterestName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb0b30
	void GetPointOfInterest(struct FCelestialPointOfInterestName& CurrentPointOfInterest); // Function DayNight.SkyStateOverrideCelestialPointOfInterestAlignTo.GetPointOfInterest // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb0b30
};

// Class DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator
// Size: 0x70 (Inherited: 0x50)
struct USkyStateOverrideCelestialPointOfInterestAlignToRotator : USkyStateOverrideCelestialPointOfInterestAlignTo {
	struct FRotator OrientTo; // 0x50(0x0c)
	struct FRotator Extra; // 0x5c(0x0c)
	bool bExtraRotation; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)

	void SetOrientTo(struct FRotator NewOrientTo); // Function DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator.SetOrientTo // (Final|Native|Public|HasDefaults|BlueprintCallable|Const) // @ game+0x1cb1300
	void SetExtraRotation(struct FRotator NewExtra); // Function DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator.SetExtraRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|Const) // @ game+0x1cb11c0
	void GetOrientTo(struct FRotator& CurrentOrientTo); // Function DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator.GetOrientTo // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb0a90
	void GetExtraRotation(struct FRotator& CurrentExtra, bool& bHasExtra); // Function DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator.GetExtraRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb0840
	void ClearExtraRotation(); // Function DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator.ClearExtraRotation // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1cb0670
};

// Class DayNight.SkyStateOverrideHideMoon
// Size: 0x38 (Inherited: 0x30)
struct USkyStateOverrideHideMoon : USkyStateOverride {
	float Priority; // 0x30(0x04)
	bool bEnabled; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class DayNight.SkyStateOverrideComponent
// Size: 0xe0 (Inherited: 0xc8)
struct USkyStateOverrideComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct USkyStateOverride* SkyStateOverride; // 0xd0(0x08)
	bool bEnabled; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float ComponentLerpAlpha; // 0xdc(0x04)

	void Valid(bool& bValid); // Function DayNight.SkyStateOverrideComponent.Valid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb2520
	void SetLerpAlpha(float LerpAlpha); // Function DayNight.SkyStateOverrideComponent.SetLerpAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x1cb1240
	void SetEnabled(bool bEnable); // Function DayNight.SkyStateOverrideComponent.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1cb1130
	void IsEnabled(bool& bEnable); // Function DayNight.SkyStateOverrideComponent.IsEnabled // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb0c60
	void HasLerpAlpha(bool& bHasLerpAlpha); // Function DayNight.SkyStateOverrideComponent.HasLerpAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb0bc0
	void GetLerpAlpha(float& LerpAlpha); // Function DayNight.SkyStateOverrideComponent.GetLerpAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb0940
	void DisableLerpAlpha(); // Function DayNight.SkyStateOverrideComponent.DisableLerpAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x1cb0820
	void CanUseLerpAlpha(bool& bUseLerpAlpha); // Function DayNight.SkyStateOverrideComponent.CanUseLerpAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb05c0
};

// Class DayNight.SkyStateOverrideBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USkyStateOverrideBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterSkyStateOverride(struct UObject* WorldContextObject, struct USkyStateOverride* SkyStateOverride, bool& bSuccess); // Function DayNight.SkyStateOverrideBlueprintLibrary.RegisterSkyStateOverride // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1cb0f10
	void IsSkyStateOverrideRegistered(struct UObject* WorldContextObject, struct USkyStateOverride* SkyStateOverride, bool& bRegistered); // Function DayNight.SkyStateOverrideBlueprintLibrary.IsSkyStateOverrideRegistered // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1cb0cf0
	void DeregisterSkyStateOverride(struct UObject* WorldContextObject, struct USkyStateOverride* SkyStateOverride); // Function DayNight.SkyStateOverrideBlueprintLibrary.DeregisterSkyStateOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb06a0
};

// Class DayNight.DayNightSkyStateOverrideInterface
// Size: 0x28 (Inherited: 0x28)
struct UDayNightSkyStateOverrideInterface : UInterface {
};

// Class DayNight.TimeOverrideBase
// Size: 0x30 (Inherited: 0x28)
struct UTimeOverrideBase : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void TimeOverrideSetTime(struct FTimespan Time, bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideSetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x1cb2210
	void TimeOverrideSetNormalizedTime(float Time, bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideSetNormalizedTime // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x1cb2130
	void TimeOverrideSetEnable(bool bEnable, bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideSetEnable // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x1cb2040
	void TimeOverrideSetDateTime(struct FDateTime DateTime, bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideSetDateTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x1cb1f60
	void TimeOverrideIsEnabled(bool& bEnabled); // Function DayNight.TimeOverrideBase.TimeOverrideIsEnabled // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb1ec0
	void TimeOverrideHasTime(bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideHasTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb1e20
	void TimeOverrideHasNormalizedTime(bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideHasNormalizedTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb1d80
	void TimeOverrideHasDateTime(bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideHasDateTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb1ce0
	void TimeOverrideGetTime(struct FTimespan& CurrentTime, bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideGetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb1bf0
	void TimeOverrideGetPriority(float& Priority); // Function DayNight.TimeOverrideBase.TimeOverrideGetPriority // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb1b40
	void TimeOverrideGetNormalizedTime(float& CurrentNormalizedTime, bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideGetNormalizedTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb1a50
	void TimeOverrideGetDateTime(struct FDateTime& CurrentDateTime, bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideGetDateTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb1960
	void TimeOverrideCanSetTime(bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideCanSetTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb16b0
	void TimeOverrideCanSetNormalizedTime(bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideCanSetNormalizedTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb1600
	void TimeOverrideCanSetEnable(bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideCanSetEnable // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb1550
	void TimeOverrideCanSetDateTime(bool& bSupported); // Function DayNight.TimeOverrideBase.TimeOverrideCanSetDateTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb14a0
};

// Class DayNight.TimeOverrideDateTime
// Size: 0x30 (Inherited: 0x30)
struct UTimeOverrideDateTime : UTimeOverrideBase {
};

// Class DayNight.TimeOverrideDateTimeRaw
// Size: 0x40 (Inherited: 0x30)
struct UTimeOverrideDateTimeRaw : UTimeOverrideDateTime {
	struct FDateTime DateTime; // 0x30(0x08)
	float Priority; // 0x38(0x04)
	bool bEnabled; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	void TimeOverrideDateTimeCreate(struct UObject* Owner, struct UTimeOverrideDateTimeRaw*& TimeOverride, struct FDateTime CreateDateTime, float CreatePriority, bool bCreateEnabled, bool bIsTransient); // Function DayNight.TimeOverrideDateTimeRaw.TimeOverrideDateTimeCreate // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x1cb1760
};

// Class DayNight.TimeOverrideDateTimeInput
// Size: 0x50 (Inherited: 0x30)
struct UTimeOverrideDateTimeInput : UTimeOverrideDateTime {
	struct FDateTimeInput DateTime; // 0x30(0x18)
	float Priority; // 0x48(0x04)
	bool bEnabled; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class DayNight.TimeOverrideTimeOnly
// Size: 0x30 (Inherited: 0x30)
struct UTimeOverrideTimeOnly : UTimeOverrideBase {
};

// Class DayNight.TimeOverrideTimeHours
// Size: 0x40 (Inherited: 0x30)
struct UTimeOverrideTimeHours : UTimeOverrideTimeOnly {
	float Time; // 0x30(0x04)
	enum class ETimeOverrideType Type; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float Priority; // 0x38(0x04)
	bool bEnabled; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	void TimeOverrideTimeHoursCreate(struct UObject* Owner, struct UTimeOverrideTimeHours*& TimeOverride, float CreateTime, enum class ETimeOverrideType CreateType, float CreatePriority, bool bCreateEnabled, bool bIsTransient); // Function DayNight.TimeOverrideTimeHours.TimeOverrideTimeHoursCreate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x1cb22f0
};

// Class DayNight.TimeOverrideTimeInput
// Size: 0x48 (Inherited: 0x30)
struct UTimeOverrideTimeInput : UTimeOverrideTimeOnly {
	struct FTimeInput Time; // 0x30(0x0c)
	enum class ETimeOverrideType Type; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float Priority; // 0x40(0x04)
	bool bEnabled; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class DayNight.TimeOverrideComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UTimeOverrideComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct UTimeOverrideBase* TimeOverride; // 0xd0(0x08)
	bool bEnabled; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float ComponentLerpAlpha; // 0xdc(0x04)

	void Valid(bool& bValid); // Function DayNight.TimeOverrideComponent.Valid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb2520
	void SetLerpAlpha(float LerpAlpha); // Function DayNight.TimeOverrideComponent.SetLerpAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x1cb1240
	void SetEnabled(bool bEnable); // Function DayNight.TimeOverrideComponent.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1cb1130
	void IsEnabled(bool& bEnable); // Function DayNight.TimeOverrideComponent.IsEnabled // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb0c60
	void HasLerpAlpha(bool& bHasLerpAlpha); // Function DayNight.TimeOverrideComponent.HasLerpAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb0bc0
	void GetLerpAlpha(float& LerpAlpha); // Function DayNight.TimeOverrideComponent.GetLerpAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb09e0
	void DisableLerpAlpha(); // Function DayNight.TimeOverrideComponent.DisableLerpAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x1cb0820
	void CanUseLerpAlpha(bool& bUseLerpAlpha); // Function DayNight.TimeOverrideComponent.CanUseLerpAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb05c0
};

// Class DayNight.TimeOverrideBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTimeOverrideBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterTimeOverride(struct UObject* WorldContextObject, struct UTimeOverrideBase* TimeOverride, bool& bSuccess); // Function DayNight.TimeOverrideBlueprintLibrary.RegisterTimeOverride // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1cb1020
	void IsTimeOverrideRegistered(struct UObject* WorldContextObject, struct UTimeOverrideBase* TimeOverride, bool& bRegistered); // Function DayNight.TimeOverrideBlueprintLibrary.IsTimeOverrideRegistered // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1cb0e00
	void DeregisterTimeOverride(struct UObject* WorldContextObject, struct UTimeOverrideBase* TimeOverride); // Function DayNight.TimeOverrideBlueprintLibrary.DeregisterTimeOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb0760
};

// Class DayNight.DayNightTimeOverrideInterface
// Size: 0x28 (Inherited: 0x28)
struct UDayNightTimeOverrideInterface : UInterface {
};

// Class DayNight.TimeSource
// Size: 0x28 (Inherited: 0x28)
struct UTimeSource : UObject {
};

// Class DayNight.TimeSourceVolume
// Size: 0x28 (Inherited: 0x28)
struct UTimeSourceVolume : UTimeSource {
};

// Class DayNight.TimeSourceLocal
// Size: 0x38 (Inherited: 0x28)
struct UTimeSourceLocal : UTimeSourceVolume {
	struct FDateTime CurrentTime; // 0x28(0x08)
	float CurrentRate; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class DayNight.TimeSourceFromDateTime
// Size: 0x58 (Inherited: 0x38)
struct UTimeSourceFromDateTime : UTimeSourceLocal {
	struct FDateTimeInput DateTime; // 0x38(0x18)
	float Rate; // 0x50(0x04)
	bool bUseRate; // 0x54(0x01)
	bool bEnabled; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)

	void EditorForceUpdate(); // Function DayNight.TimeSourceFromDateTime.EditorForceUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x13244f0
};

// Class DayNight.TimeSourceFromScenario
// Size: 0x50 (Inherited: 0x38)
struct UTimeSourceFromScenario : UTimeSourceLocal {
	struct FDataTableRowHandle Scenario; // 0x38(0x10)
	float Rate; // 0x48(0x04)
	bool bUseRate; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)

	void EditorForceUpdate(); // Function DayNight.TimeSourceFromScenario.EditorForceUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x13244f0
};

// Class DayNight.TimeSourceNow
// Size: 0x38 (Inherited: 0x38)
struct UTimeSourceNow : UTimeSourceLocal {
};

// Class DayNight.TimeSourceCharacterCreator
// Size: 0x38 (Inherited: 0x28)
struct UTimeSourceCharacterCreator : UTimeSourceVolume {
	struct FDateInput BaseDate; // 0x28(0x0c)
	float Time; // 0x34(0x04)

	void SetPreviewTime(float globalTime); // Function DayNight.TimeSourceCharacterCreator.SetPreviewTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb5200
	void PreviewDisabled(bool& Disabled); // Function DayNight.TimeSourceCharacterCreator.PreviewDisabled // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1cb5170
	void GetPreviewTime(float& globalTime); // Function DayNight.TimeSourceCharacterCreator.GetPreviewTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1cb50e0
	void EditorForceUpdate(); // Function DayNight.TimeSourceCharacterCreator.EditorForceUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x13244f0
	void DisablePreview(); // Function DayNight.TimeSourceCharacterCreator.DisablePreview // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb50b0
};

// Class DayNight.TimeSourceScrubbableControlBase
// Size: 0x30 (Inherited: 0x30)
struct UTimeSourceScrubbableControlBase : UDataAsset {
};

// Class DayNight.TimeSourceScrubbableControl
// Size: 0x48 (Inherited: 0x30)
struct UTimeSourceScrubbableControl : UTimeSourceScrubbableControlBase {
	float DaysOffset; // 0x30(0x04)
	float HoursOffset; // 0x34(0x04)
	float MinutesOffset; // 0x38(0x04)
	int32_t SecondsOffset; // 0x3c(0x04)
	bool bWholeDays; // 0x40(0x01)
	bool bWholeHours; // 0x41(0x01)
	bool bWholeMinutes; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// Class DayNight.TimeSourceScrubbable
// Size: 0x50 (Inherited: 0x28)
struct UTimeSourceScrubbable : UTimeSourceVolume {
	struct FDateInput BaseDate; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct UTimeSourceScrubbableControlBase* Control; // 0x38(0x08)
	struct UTimeSourceScrubbableControlBase* ControlClass; // 0x40(0x08)
	bool bEnabled; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class DayNight.TimeSourceCSVDump
// Size: 0x98 (Inherited: 0x38)
struct UTimeSourceCSVDump : UTimeSourceLocal {
	bool bEnabled; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FDateTimeInput DateTime; // 0x3c(0x18)
	float DurationHours; // 0x54(0x04)
	float IntervalMinutes; // 0x58(0x04)
	struct FDayNightCSVReportOptions Show; // 0x5c(0x24)
	struct FString OverrideFilename; // 0x80(0x10)
	float Rate; // 0x90(0x04)
	bool bCapture; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
};

// Class DayNight.LightProbeCaptureSetup
// Size: 0xb8 (Inherited: 0x30)
struct ULightProbeCaptureSetup : UDataAsset {
	struct FLightProbeCaptureSetupComputer Computer; // 0x30(0x88)
};

// Class DayNight.TimeSourceLightProbeCapture
// Size: 0x30 (Inherited: 0x28)
struct UTimeSourceLightProbeCapture : UTimeSource {
	struct ULightProbeCaptureSetup* CaptureSetup; // 0x28(0x08)
};

// Class DayNight.LightProbeCaptureLocalSetup
// Size: 0x30 (Inherited: 0x28)
struct ULightProbeCaptureLocalSetup : UWLightProbesVolumeCaptureSetup {
	struct ULightProbeCaptureSetup* CaptureSetup; // 0x28(0x08)
};

// Class DayNight.LightProbeCaptureLocalFixedSetup
// Size: 0xb0 (Inherited: 0x28)
struct ULightProbeCaptureLocalFixedSetup : UWLightProbesVolumeCaptureSetup {
	struct FLightProbeCaptureSetupComputer Computer; // 0x28(0x88)
};

// Class DayNight.TimeSourceSlotSetup
// Size: 0xd8 (Inherited: 0x30)
struct UTimeSourceSlotSetup : UDataAsset {
	struct FDateInput SlotDate; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FTimeSourceSlotSetupTime> SlotTimes; // 0x40(0x10)
	struct FEphemerisDayInfo DayInfo; // 0x50(0x78)
	struct TArray<struct FTimeSourceSlotValidTime> SortedDateTimes; // 0xc8(0x10)
};

// Class DayNight.TimeSourceSlot
// Size: 0x68 (Inherited: 0x38)
struct UTimeSourceSlot : UTimeSourceLocal {
	struct UTimeSourceSlotSetup* Setup; // 0x38(0x08)
	struct FTimeSourceSlotSetupName Slot; // 0x40(0x08)
	enum class EDateTimeDayOfWeek DayOfWeek; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float Rate; // 0x4c(0x04)
	bool bUseRate; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FDateTime QuantizedTime; // 0x58(0x08)
	float SlotRate; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	void EditorForceUpdate(); // Function DayNight.TimeSourceSlot.EditorForceUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x13244f0
};

// Class DayNight.TimeOverrideTimeSlot
// Size: 0x48 (Inherited: 0x30)
struct UTimeOverrideTimeSlot : UTimeOverrideTimeOnly {
	struct UTimeSourceSlotSetup* Setup; // 0x30(0x08)
	struct FTimeSourceSlotSetupName Slot; // 0x38(0x08)
	float Priority; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

