// Class LightCulling.ForceCapsuleShadowsComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UForceCapsuleShadowsComponent : UActorComponent {
	struct FForceCapsuleShadowsSettings Settings; // 0xc8(0x20)
	char bDisable : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	void UpdateSettings(struct FForceCapsuleShadowsSettings NewSettings); // Function LightCulling.ForceCapsuleShadowsComponent.UpdateSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x1bf1d60
	void Enabled(bool& bEnabled); // Function LightCulling.ForceCapsuleShadowsComponent.Enabled // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bf0070
	void Enable(bool bEnable); // Function LightCulling.ForceCapsuleShadowsComponent.Enable // (Final|Native|Public|BlueprintCallable) // @ game+0x1beffd0
	void DetachAndDestroyForceCapsuleShadows(struct AActor* Owner, struct UForceCapsuleShadowsComponent* ExistingForceCapsuleShadowsComponent); // Function LightCulling.ForceCapsuleShadowsComponent.DetachAndDestroyForceCapsuleShadows // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1befe10
	void DestroyForceCapsuleShadows(); // Function LightCulling.ForceCapsuleShadowsComponent.DestroyForceCapsuleShadows // (Final|Native|Public|BlueprintCallable) // @ game+0x1befdf0
	void CreateAndAttachForceCapsuleShadows(struct AActor* Owner, struct FForceCapsuleShadowsSettings NewSettings, struct UForceCapsuleShadowsComponent*& NewForceCapsuleShadowsComponent, bool bTransient); // Function LightCulling.ForceCapsuleShadowsComponent.CreateAndAttachForceCapsuleShadows // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1befc60
};

// Class LightCulling.PointLightComponentWithCullingSettings
// Size: 0x3f0 (Inherited: 0x3e0)
struct UPointLightComponentWithCullingSettings : UPointLightComponent {
	struct FLightCullingPerLightSettings LightCullingSettings; // 0x3e0(0x03)
	char pad_3E3[0xd]; // 0x3e3(0x0d)
};

// Class LightCulling.SpotLightComponentWithCullingSettings
// Size: 0x3f0 (Inherited: 0x3e0)
struct USpotLightComponentWithCullingSettings : USpotLightComponent {
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct FLightCullingPerLightSettings LightCullingSettings; // 0x3e8(0x03)
	char pad_3EB[0x5]; // 0x3eb(0x05)
};

// Class LightCulling.RectLightComponentWithCullingSettings
// Size: 0x3f0 (Inherited: 0x3e0)
struct URectLightComponentWithCullingSettings : URectLightComponent {
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct FLightCullingPerLightSettings LightCullingSettings; // 0x3e8(0x03)
	char pad_3EB[0x5]; // 0x3eb(0x05)
};

// Class LightCulling.PointLightWithCullingSettings
// Size: 0x260 (Inherited: 0x258)
struct APointLightWithCullingSettings : ALight {
	struct UPointLightComponentWithCullingSettings* PointLightComponent; // 0x258(0x08)

	void Copy(); // Function LightCulling.PointLightWithCullingSettings.Copy // (Final|Native|Public) // @ game+0x1074730
};

// Class LightCulling.SpotLightWithCullingSettings
// Size: 0x260 (Inherited: 0x258)
struct ASpotLightWithCullingSettings : ALight {
	struct USpotLightComponentWithCullingSettings* SpotLightComponent; // 0x258(0x08)

	void Copy(); // Function LightCulling.SpotLightWithCullingSettings.Copy // (Final|Native|Public) // @ game+0x1074730
};

// Class LightCulling.RectLightWithCullingSettings
// Size: 0x260 (Inherited: 0x258)
struct ARectLightWithCullingSettings : ALight {
	struct URectLightComponentWithCullingSettings* RectLightComponent; // 0x258(0x08)

	void Copy(); // Function LightCulling.RectLightWithCullingSettings.Copy // (Final|Native|Public) // @ game+0x1074730
};

// Class LightCulling.LightCullingPerLightInterface
// Size: 0x28 (Inherited: 0x28)
struct ULightCullingPerLightInterface : UInterface {
};

// Class LightCulling.LightCullingSettings
// Size: 0xd0 (Inherited: 0x30)
struct ULightCullingSettings : UDataAsset {
	enum class ELightCullingDistanceOverride DistanceOverride; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MaxDrawDistanceMeters; // 0x34(0x04)
	float MaxDistanceFadeRangeMeters; // 0x38(0x04)
	float AutoMaxDistanceFadeRangePercentage; // 0x3c(0x04)
	float SuspiciouslyLargeMaxDrawDistanceMeters; // 0x40(0x04)
	float MovableShadowsStartDistanceMeters; // 0x44(0x04)
	int32_t LimitMovableShadowCastingLights; // 0x48(0x04)
	float NonMovableShadowsStartDistanceMeters; // 0x4c(0x04)
	int32_t LimitNonMovableShadowCastingLights; // 0x50(0x04)
	float AffectVolumetricLightingStartDistanceMeters; // 0x54(0x04)
	int32_t LimitAffectVolumetricLightingLights; // 0x58(0x04)
	float VolumetricScatteringDistanceMeters; // 0x5c(0x04)
	float VolumetricScatteringFadeRangeMeters; // 0x60(0x04)
	int32_t LimitVolumetricScatteringLights; // 0x64(0x04)
	float VolumetricShadowStartDistanceMeters; // 0x68(0x04)
	int32_t LimitVolumetricShadowingLights; // 0x6c(0x04)
	float AffectTranslucentLightingStartDistanceMeters; // 0x70(0x04)
	int32_t LimitAffectTranslucentLightingLights; // 0x74(0x04)
	float ContactShadowsStartDistanceMeters; // 0x78(0x04)
	int32_t LimitContactShadowingLights; // 0x7c(0x04)
	float MoveableLightStartDistanceMeters; // 0x80(0x04)
	int32_t LimitMoveableLights; // 0x84(0x04)
	float TickingLightStartDistanceMeters; // 0x88(0x04)
	float CharacterProjectedShadowsEndMeters; // 0x8c(0x04)
	int32_t MaxCharacterProjectedShadows; // 0x90(0x04)
	float CapsuleShadowsEndMeters; // 0x94(0x04)
	int32_t MaxCharacterCapsuleShadows; // 0x98(0x04)
	float CharacterContactShadowsStartMeters; // 0x9c(0x04)
	float CharacterContactShadowsEndMeters; // 0xa0(0x04)
	int32_t MaxCharacterContactShadows; // 0xa4(0x04)
	float BlobShadowsEndMeters; // 0xa8(0x04)
	int32_t MaxCharacterBlobShadows; // 0xac(0x04)
	float CharacterIndirectCapsuleShadowsEndMeters; // 0xb0(0x04)
	float CapsuleIndirectShadowMinVisibility; // 0xb4(0x04)
	int32_t MaxCharacterIndirectCapsuleShadows; // 0xb8(0x04)
	float CharacterLightChannelEndMeters; // 0xbc(0x04)
	int32_t MaxCharactersInLightChannel; // 0xc0(0x04)
	struct FLightCullingCameraSetup CameraSetup; // 0xc4(0x04)
	float DistanceCulledUpdateMarginMeters; // 0xc8(0x04)
	char bControlMovableShadowsStart : 1; // 0xcc(0x01)
	char bControlNonMovableShadowsStart : 1; // 0xcc(0x01)
	char bControlVolumetricIntensity : 1; // 0xcc(0x01)
	char bControlVolumetricShadow : 1; // 0xcc(0x01)
	char bControlAffectVolumetricLighting : 1; // 0xcc(0x01)
	char bControlAffectTranslucentLighting : 1; // 0xcc(0x01)
	char bControlContactShadows : 1; // 0xcc(0x01)
	char bControlMoveable : 1; // 0xcc(0x01)
	char bControlTicking : 1; // 0xcd(0x01)
	char bAutoMaxDistanceFadeRangePercentage : 1; // 0xcd(0x01)
	char bLimitMovableShadowCastingLights : 1; // 0xcd(0x01)
	char bLimitNonMovableShadowCastingLights : 1; // 0xcd(0x01)
	char bLimitVolumetricScatteringLights : 1; // 0xcd(0x01)
	char bLimitVolumetricShadowingLights : 1; // 0xcd(0x01)
	char bLimitAffectVolumetricLighting : 1; // 0xcd(0x01)
	char bLimitAffectTranslucentLighting : 1; // 0xcd(0x01)
	char bLimitContactShadowingLights : 1; // 0xce(0x01)
	char bLimitMoveableLights : 1; // 0xce(0x01)
	char bLimitCharacterProjectedShadows : 1; // 0xce(0x01)
	char bLimitCharacterCapsuleShadows : 1; // 0xce(0x01)
	char bLimitCharactersInLightChannel : 1; // 0xce(0x01)
	char bEnableCharacterIndirectCapsuleShadows : 1; // 0xce(0x01)
	char bLimitCharacterIndirectCapsuleShadows : 1; // 0xce(0x01)
	char bLimitCharacterContactShadows : 1; // 0xce(0x01)
	char bUseCharacterContactShadowsStart : 1; // 0xcf(0x01)
	char bUseCharacterContactShadowsEnd : 1; // 0xcf(0x01)
	char bDisablePlayerContactShadows : 1; // 0xcf(0x01)
	char bEnableCharacterBlobShadows : 1; // 0xcf(0x01)
	char bLimitCharacterBlobShadows : 1; // 0xcf(0x01)
	char bEnableCharacterFadeOut : 1; // 0xcf(0x01)
	char bUseTrueLightShapes : 1; // 0xcf(0x01)
	char pad_CF_7 : 1; // 0xcf(0x01)
};

// Class LightCulling.LightCullingLevelSettings
// Size: 0x78 (Inherited: 0x30)
struct ULightCullingLevelSettings : UDataAsset {
	struct ULightCullingSettings* LevelDefaultSettings; // 0x30(0x08)
	struct TArray<struct FLightCullingPerLevelSettings> LevelSettings; // 0x38(0x10)
	struct TArray<struct FLightCullingLevelName> DisableLevels; // 0x48(0x10)
	struct TArray<struct FName> DisableProceduralLevels; // 0x58(0x10)
	struct FSimpleBlobShadowDecalComponentMapper SimpleBlobShadowDecalComponentMapper; // 0x68(0x10)
};

// Class LightCulling.LightCullingSingleton
// Size: 0x3e8 (Inherited: 0x248)
struct ALightCullingSingleton : AActor {
	struct ULightCullingSettings* BaseSettings; // 0x248(0x08)
	struct TArray<struct TWeakObjectPtr<struct UObject>> ExternalDisable; // 0x250(0x10)
	bool bExternalConsoleDisable; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	struct FCharacterLightingFeaturesSettingsOverride CharacterLightingFeaturesOverride; // 0x264(0x4c)
	struct ULightCullingSettings* OverrideSettings; // 0x2b0(0x08)
	bool bEnabled; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct FLightCulling LightCulling; // 0x2c0(0x60)
	struct FCharacterLightingFeatures CharacterLightingFeatures; // 0x320(0xb8)
	struct ULightMobilityManager* MobilityManager; // 0x3d8(0x08)
	bool bFirstUpdate; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)

	void SetVolumetricScatteringIntensity(struct ULightComponent* Light, float VolumetricScatteringIntensity); // Function LightCulling.LightCullingSingleton.SetVolumetricScatteringIntensity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1ca0
	void SetOverrideCharacterLightingFeaturesLerp(struct UObject* WorldContextObject, struct UObject* OverrideOwner, float Lerp); // Function LightCulling.LightCullingSingleton.SetOverrideCharacterLightingFeaturesLerp // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1b90
	void SetMobility(struct ULightComponent* Light, enum class EComponentMobility Mobility); // Function LightCulling.LightCullingSingleton.SetMobility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1ad0
	void SetMaxDrawDistance(struct ULightComponent* Light, float MaxDrawDistance); // Function LightCulling.LightCullingSingleton.SetMaxDrawDistance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1a10
	void SetMaxDistanceFadeRange(struct ULightComponent* Light, float MaxDistanceFadeRange); // Function LightCulling.LightCullingSingleton.SetMaxDistanceFadeRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1950
	void SetLightShadowSlopeBias(struct ULocalLightComponent* Light, float ShadowSlopeBias); // Function LightCulling.LightCullingSingleton.SetLightShadowSlopeBias // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1890
	void SetLightShadowSharpen(struct ULocalLightComponent* Light, float ShadowSharpen); // Function LightCulling.LightCullingSingleton.SetLightShadowSharpen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf17d0
	void SetLightShadowResolutionScale(struct ULocalLightComponent* Light, float ShadowResolutionScale); // Function LightCulling.LightCullingSingleton.SetLightShadowResolutionScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1710
	void SetLightShadowBias(struct ULocalLightComponent* Light, float ShadowBias); // Function LightCulling.LightCullingSingleton.SetLightShadowBias // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1650
	void SetContactShadowLength(struct ULightComponent* Light, float ContactShadowLength); // Function LightCulling.LightCullingSingleton.SetContactShadowLength // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1590
	void SetCastVolumetricShadow(struct ULightComponent* Light, bool bCastVolumetricShadow); // Function LightCulling.LightCullingSingleton.SetCastVolumetricShadow // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf14d0
	void SetCastShadowsThreshold(struct ULightComponent* Light, enum class EShadowQualityLevels ShadowQualityLevel); // Function LightCulling.LightCullingSingleton.SetCastShadowsThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1410
	void SetCastDynamicShadows(struct ULightComponent* Light, bool bCastShadows); // Function LightCulling.LightCullingSingleton.SetCastDynamicShadows // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1350
	void PushSettings(struct UObject* WorldContextObject, struct ULightCullingSettings* Settings); // Function LightCulling.LightCullingSingleton.PushSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1290
	void PopSettings(struct UObject* WorldContextObject, struct ULightCullingSettings* Settings); // Function LightCulling.LightCullingSingleton.PopSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf11d0
	void OverrideCharacterLightingFeatures(struct UObject* WorldContextObject, struct UObject* OverrideOwner, struct FCharacterLightingFeaturesSettings TargetSettings, float Lerp); // Function LightCulling.LightCullingSingleton.OverrideCharacterLightingFeatures // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1050
	bool LightCullingUnmanageLightsMobility(struct AActor* Actor, bool bRestoreMobility); // Function LightCulling.LightCullingSingleton.LightCullingUnmanageLightsMobility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0e60
	bool LightCullingUnmanageLightMobility(struct ULocalLightComponent* Light, bool bRestoreMobility); // Function LightCulling.LightCullingSingleton.LightCullingUnmanageLightMobility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0d90
	void LightCullingRemoveIgnoreCharacter(struct ACharacter* Character, bool& bRemoved); // Function LightCulling.LightCullingSingleton.LightCullingRemoveIgnoreCharacter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf0ca0
	bool LightCullingManageLightsMobility(struct AActor* Actor); // Function LightCulling.LightCullingSingleton.LightCullingManageLightsMobility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0c10
	bool LightCullingManageLightMobility(struct ULocalLightComponent* Light); // Function LightCulling.LightCullingSingleton.LightCullingManageLightMobility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0b80
	bool LightCullingIsManagingLightMobility(struct ULocalLightComponent* Light); // Function LightCulling.LightCullingSingleton.LightCullingIsManagingLightMobility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0af0
	void LightCullingIsIgnoredLight(struct ULightComponent* Light, bool& bIsIgnoredLight); // Function LightCulling.LightCullingSingleton.LightCullingIsIgnoredLight // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bf09e0
	void LightCullingIsIgnoreCharacter(struct ACharacter* Character, bool& bIsIgnoredCharacter); // Function LightCulling.LightCullingSingleton.LightCullingIsIgnoreCharacter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bf08f0
	void LightCullingIgnoreLights(struct TArray<struct ULightComponent*> Lights, bool bIgnoreLight); // Function LightCulling.LightCullingSingleton.LightCullingIgnoreLights // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0780
	void LightCullingIgnoreLight(struct ULightComponent* Light, bool bIgnoreLight); // Function LightCulling.LightCullingSingleton.LightCullingIgnoreLight // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0690
	void LightCullingAddIgnoreCharacter(struct ACharacter* Character, bool& bAdded); // Function LightCulling.LightCullingSingleton.LightCullingAddIgnoreCharacter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf05a0
	void GetLightStatus(struct ULightComponent* Light, enum class ELightCullingLightStatus& Status); // Function LightCulling.LightCullingSingleton.GetLightStatus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bf04d0
	void GetEnabled(struct UObject* WorldContextObject, bool& Enabled); // Function LightCulling.LightCullingSingleton.GetEnabled // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf0400
	void GetCurrentSettings(struct UObject* WorldContextObject, struct ULightCullingSettings*& Settings); // Function LightCulling.LightCullingSingleton.GetCurrentSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf0330
	void GetCastShadowsThreshold(struct ULightComponent* Light, enum class EShadowQualityLevels& ShadowQualityLevel); // Function LightCulling.LightCullingSingleton.GetCastShadowsThreshold // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bf0260
	void GetBaseCharacterLightingFeatures(struct UObject* WorldContextObject, struct FCharacterLightingFeaturesSettings& CharacterLightingFeaturesSettings); // Function LightCulling.LightCullingSingleton.GetBaseCharacterLightingFeatures // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bf0190
	void Flush(struct ULightComponent* Light); // Function LightCulling.LightCullingSingleton.Flush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0110
	void DisableStart(struct UObject* WorldContextObject); // Function LightCulling.LightCullingSingleton.DisableStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1beff50
	void DisableEnd(struct UObject* WorldContextObject); // Function LightCulling.LightCullingSingleton.DisableEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1befed0
	void ClearOverrideCharacterLightingFeatures(struct UObject* WorldContextObject, struct UObject* OverrideOwner); // Function LightCulling.LightCullingSingleton.ClearOverrideCharacterLightingFeatures // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1befba0
};

// Class LightCulling.LightStatsSingleton
// Size: 0x248 (Inherited: 0x248)
struct ALightStatsSingleton : AActor {
};

// Class LightCulling.LightMobilityManager
// Size: 0x88 (Inherited: 0x28)
struct ULightMobilityManager : UObject {
	char pad_28[0x50]; // 0x28(0x50)
	struct UWorld* World; // 0x78(0x08)
	bool bAutoManageMobility; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class LightCulling.LightTickInterface
// Size: 0x28 (Inherited: 0x28)
struct ULightTickInterface : UInterface {

	void OnExitLightTickRange(struct ULightComponent* LightComponent); // Function LightCulling.LightTickInterface.OnExitLightTickRange // (Native|Event|Public|BlueprintEvent) // @ game+0x1bf0fc0
	void OnEnterLightTickRange(struct ULightComponent* LightComponent); // Function LightCulling.LightTickInterface.OnEnterLightTickRange // (Native|Event|Public|BlueprintEvent) // @ game+0x1bf0f30
};

// Class LightCulling.SimpleBlobShadowDecalComponent
// Size: 0x350 (Inherited: 0x310)
struct USimpleBlobShadowDecalComponent : UDecalComponent {
	float Scale; // 0x308(0x04)
	float ZTweak; // 0x30c(0x04)
	float MaxDrawDistance; // 0x310(0x04)
	float InAirFadeDistanceStart; // 0x314(0x04)
	float InAirFadeDistance; // 0x318(0x04)
	float MinOpacityDistance; // 0x31c(0x04)
	float MinOpacity; // 0x320(0x04)
	float MaxOpacityDistance; // 0x324(0x04)
	float MaxOpacity; // 0x328(0x04)
	bool bUseBoundsCenter; // 0x32c(0x01)
	struct UMaterialInterface* DefaultDecalMaterial; // 0x330(0x08)
	struct UMaterialInstanceDynamic* DecalMID; // 0x338(0x08)
	bool bEnabled; // 0x340(0x01)
	char pad_346[0xa]; // 0x346(0x0a)
};

// Class LightCulling.SimpleBlobShadowDecalCharacterComponent
// Size: 0x350 (Inherited: 0x350)
struct USimpleBlobShadowDecalCharacterComponent : USimpleBlobShadowDecalComponent {
};

// Class LightCulling.SimpleBlobShadowDecalNoDrawComponent
// Size: 0x350 (Inherited: 0x350)
struct USimpleBlobShadowDecalNoDrawComponent : USimpleBlobShadowDecalComponent {
};

