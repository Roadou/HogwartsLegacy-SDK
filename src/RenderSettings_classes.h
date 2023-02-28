// Class RenderSettings.AdaptationOverrideInterface
// Size: 0x28 (Inherited: 0x28)
struct UAdaptationOverrideInterface : UInterface {
};

// Class RenderSettings.DistanceFogSettings
// Size: 0x50 (Inherited: 0x30)
struct UDistanceFogSettings : UDataAsset {
	struct UMaterialParameterCollection* DistanceFogMPC; // 0x30(0x08)
	struct UMaterialInterface* DistanceFogPPMaterial; // 0x38(0x08)
	struct TArray<struct FDistanceFog> Settings; // 0x40(0x10)
};

// Class RenderSettings.DynamicCharacterLightRig
// Size: 0x308 (Inherited: 0x248)
struct ADynamicCharacterLightRig : AActor {
	float DayTemperature; // 0x248(0x04)
	float NightTemperature; // 0x24c(0x04)
	struct TArray<struct FDynamicCharacterLightRigLight> Lights; // 0x250(0x10)
	enum class EDynamicCharacterLightRigChannel LightingChannel; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct FDynamicLightAdaptationSettings AdaptationSettings; // 0x268(0x60)
	struct FBlendDomain BlendDomain; // 0x2c8(0x38)
	bool bEnabled; // 0x300(0x01)
	bool bUseAdaptationSettings; // 0x301(0x01)
	bool bInitializedOwnerChannels; // 0x302(0x01)
	char pad_303[0x5]; // 0x303(0x05)

	void LightRigEnabled(bool& Enabled); // Function RenderSettings.DynamicCharacterLightRig.LightRigEnabled // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb38d0
	void GetDynamicLightRig(struct AActor* ToActor, struct ADynamicCharacterLightRig*& DynamicLightRig); // Function RenderSettings.DynamicCharacterLightRig.GetDynamicLightRig // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bb3130
	void Get(struct AActor* Actor, struct ADynamicCharacterLightRig*& DynamicLightRig); // Function RenderSettings.DynamicCharacterLightRig.Get // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb3130
	void EnableLightRig(bool Enable); // Function RenderSettings.DynamicCharacterLightRig.EnableLightRig // (Final|Native|Public|BlueprintCallable) // @ game+0x1bb3090
	void DynamicLightRigCinematicEnable(struct UObject* WorldContextObject); // Function RenderSettings.DynamicCharacterLightRig.DynamicLightRigCinematicEnable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bb3010
	void DynamicLightRigCinematicDisable(struct UObject* WorldContextObject, bool bDisable); // Function RenderSettings.DynamicCharacterLightRig.DynamicLightRigCinematicDisable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bb2f50
	void DynamicLightRigCinematicDiabled(struct UObject* WorldContextObject, bool& bDisabled); // Function RenderSettings.DynamicCharacterLightRig.DynamicLightRigCinematicDiabled // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bb2e80
	void DisableLightRig(); // Function RenderSettings.DynamicCharacterLightRig.DisableLightRig // (Final|Native|Public|BlueprintCallable) // @ game+0x1bb2e50
	void AttachDynamicLightRig(struct AActor* ToActor, struct ADynamicCharacterLightRig* DynamicLightRigClass, struct ADynamicCharacterLightRig*& DynamicLightRig, struct FName AttachSocket); // Function RenderSettings.DynamicCharacterLightRig.AttachDynamicLightRig // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bb2b20
};

// Class RenderSettings.CharacterLightRigAdjustmentsSettings
// Size: 0x40 (Inherited: 0x30)
struct UCharacterLightRigAdjustmentsSettings : UDataAsset {
	struct TArray<struct FCharacterLightRigAdjustments> Settings; // 0x30(0x10)
};

// Class RenderSettings.CharacterLightRigAdjustmentVolume
// Size: 0x2a8 (Inherited: 0x280)
struct ACharacterLightRigAdjustmentVolume : AVolume {
	struct FCharacterLightRigAdjustments Adjustments; // 0x280(0x18)
	int32_t Priority; // 0x298(0x04)
	bool bEnabled; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	float InterpolationDistance; // 0x2a0(0x04)
	bool bUnbounded; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
};

// Class RenderSettings.EmissiveAdaptationBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEmissiveAdaptationBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnrealToEV100(float UnrealExposure, float& EV100Exposure); // Function RenderSettings.EmissiveAdaptationBlueprintLibrary.UnrealToEV100 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb3960
	void GetEmissiveAdaptationState(struct UObject* WorldContextObject, struct FEmissiveAdaptationFinalState& State); // Function RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb37f0
	void GetEmissiveAdaptationOutdoorsDayTime(struct UObject* WorldContextObject, float& OutdoorsDayTime); // Function RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationOutdoorsDayTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb3720
	void GetEmissiveAdaptationMinMaxExposureEV100(struct UObject* WorldContextObject, float& MinExposureEV100, float& MaxExposureEV100, float& BiasPow2); // Function RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationMinMaxExposureEV100 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb35b0
	void GetEmissiveAdaptationMinMaxExposure(struct UObject* WorldContextObject, float& MinExposure, float& MaxExposure, float& Bias); // Function RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationMinMaxExposure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb3440
	void GetEmissiveAdaptationFinalMultiplierClamped(struct UObject* WorldContextObject, float& FinalMultiplierClamped); // Function RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationFinalMultiplierClamped // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb3370
	void GetEmissiveAdaptationFinalMultiplier(struct UObject* WorldContextObject, float& FinalMultiplier, float& FactorMin, float& FactorMax); // Function RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationFinalMultiplier // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb3200
	void EV100ToUnreal(float EV100Exposure, float& UnrealExposure); // Function RenderSettings.EmissiveAdaptationBlueprintLibrary.EV100ToUnreal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb2c80
	void BiasFactorToEV100(float Factor, float& EV00Bias); // Function RenderSettings.EmissiveAdaptationBlueprintLibrary.BiasFactorToEV100 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb2d70
	void BiasFactor(float EV00Bias, float& Factor); // Function RenderSettings.EmissiveAdaptationBlueprintLibrary.BiasFactor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb2c80
};

// Class RenderSettings.DynamicLightAdaptationModSettingsInterface
// Size: 0x28 (Inherited: 0x28)
struct UDynamicLightAdaptationModSettingsInterface : UObject {
};

// Class RenderSettings.LightAdaptationComponent
// Size: 0x2c0 (Inherited: 0x250)
struct ULightAdaptationComponent : UAnimatedLightClusterComponent {
	struct FDynamicLightAdaptationSettings Settings; // 0x250(0x60)
	float Adaptation; // 0x2b0(0x04)
	float LastExposure; // 0x2b4(0x04)
	uint32_t FirstUpdateFrame; // 0x2b8(0x04)
	bool bForceClusterUpdate; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
};

// Class RenderSettings.LightAdaptationComponentAuto
// Size: 0x2d0 (Inherited: 0x2c0)
struct ULightAdaptationComponentAuto : ULightAdaptationComponent {
	bool bDeepScanChildren; // 0x2c0(0x01)
	char pad_2C1[0xf]; // 0x2c1(0x0f)
};

// Class RenderSettings.LightAdaptationComponentChildOfLight
// Size: 0x2c0 (Inherited: 0x2c0)
struct ULightAdaptationComponentChildOfLight : ULightAdaptationComponent {
};

// Class RenderSettings.LightAdaptation
// Size: 0x28 (Inherited: 0x28)
struct ULightAdaptation : UBlueprintFunctionLibrary {

	void LightAdaptationSetIntensity(struct ULightComponent* LightComponent, float Intensity); // Function RenderSettings.LightAdaptation.LightAdaptationSetIntensity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bb8a00
	void LightAdaptationRegisterWithIntensity(struct ULightComponent* LightComponent, struct FDynamicLightAdaptationSettings Settings, float Intensity, struct ULightAdaptationComponentChildOfLight*& AdaptationComponent); // Function RenderSettings.LightAdaptation.LightAdaptationRegisterWithIntensity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bb87a0
	void LightAdaptationRegister(struct ULightComponent* LightComponent, struct FDynamicLightAdaptationSettings Settings, struct ULightAdaptationComponentChildOfLight*& AdaptationComponent); // Function RenderSettings.LightAdaptation.LightAdaptationRegister // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bb8540
	void LightAdaptationIntensityFactor(struct UObject* WorldContextObject, struct FDynamicLightAdaptationSettings Settings, float& IntensityFactor); // Function RenderSettings.LightAdaptation.LightAdaptationIntensityFactor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb8320
	void LightAdaptationGetIntensity(struct ULightComponent* LightComponent, float& Intensity); // Function RenderSettings.LightAdaptation.LightAdaptationGetIntensity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb8250
	void LightAdaptationDeregister(struct ULightAdaptationComponentChildOfLight* AdaptationComponent, bool bRestoreIntensity); // Function RenderSettings.LightAdaptation.LightAdaptationDeregister // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bb8190
	void GetLightAdaptationState(struct UObject* WorldContextObject, struct FEmissiveAdaptationFinalState& State); // Function RenderSettings.LightAdaptation.GetLightAdaptationState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bb37f0
};

// Class RenderSettings.DynamicLightAdaptationModSettingsAsset
// Size: 0x40 (Inherited: 0x30)
struct UDynamicLightAdaptationModSettingsAsset : UDataAsset {
	struct TArray<struct UDynamicLightAdaptationModSettingsInterface*> Mods; // 0x30(0x10)
};

// Class RenderSettings.DynamicLightAdaptationModSettingsInterfaceAsset
// Size: 0x30 (Inherited: 0x28)
struct UDynamicLightAdaptationModSettingsInterfaceAsset : UDynamicLightAdaptationModSettingsInterface {
	struct UDynamicLightAdaptationModSettingsAsset* ModAsset; // 0x28(0x08)
};

// Class RenderSettings.DynamicLightAdaptationModSettingsVariableBase
// Size: 0x30 (Inherited: 0x28)
struct UDynamicLightAdaptationModSettingsVariableBase : UDynamicLightAdaptationModSettingsInterface {
	enum class ELightAdapatationProperty ModProperty; // 0x28(0x01)
	enum class ELightAdapatationModOp ModOp; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// Class RenderSettings.DynamicLightAdaptationModSettingsVariableCurveBase
// Size: 0x38 (Inherited: 0x30)
struct UDynamicLightAdaptationModSettingsVariableCurveBase : UDynamicLightAdaptationModSettingsVariableBase {
	struct UCurveFloat* Curve; // 0x30(0x08)
};

// Class RenderSettings.DynamicLightAdaptationModSettingsVariableBlendDomainCurveBase
// Size: 0x40 (Inherited: 0x38)
struct UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase : UDynamicLightAdaptationModSettingsVariableCurveBase {
	float DefaultValueIfMissing; // 0x38(0x04)
	bool bUseCamera; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class RenderSettings.DynamicLightAdaptationModSettingsVariableRawBlendDomainCurve
// Size: 0x48 (Inherited: 0x40)
struct UDynamicLightAdaptationModSettingsVariableRawBlendDomainCurve : UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase {
	struct FName BlendDomain; // 0x40(0x08)
};

// Class RenderSettings.DynamicLightAdaptationModSettingsVariableCustomBlendDomainCurve
// Size: 0x48 (Inherited: 0x40)
struct UDynamicLightAdaptationModSettingsVariableCustomBlendDomainCurve : UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase {
	struct FRenderSettingsCustomBlendDomainName CustomBlendDomain; // 0x40(0x08)
};

// Class RenderSettings.DynamicLightAdaptationModSettingsVariableBlendDomainCurve
// Size: 0x50 (Inherited: 0x40)
struct UDynamicLightAdaptationModSettingsVariableBlendDomainCurve : UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase {
	struct FRenderSettingsPreComputedBlendDomainName BlendDomain; // 0x40(0x10)
};

// Class RenderSettings.DynamicLightAdaptationModSettingsEVExpression
// Size: 0x38 (Inherited: 0x28)
struct UDynamicLightAdaptationModSettingsEVExpression : UDynamicLightAdaptationModSettingsInterface {
	enum class ELightAdapatationEVProperty ModProperty; // 0x28(0x01)
	enum class ELightAdapatationEVModOp ModOp; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct UExposureExpressionsExposureValue* Expression; // 0x30(0x08)
};

// Class RenderSettings.InsideOutsideOverrideVolume
// Size: 0x298 (Inherited: 0x280)
struct AInsideOutsideOverrideVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	float Priority; // 0x288(0x04)
	float BlendRadius; // 0x28c(0x04)
	float BlendWeight; // 0x290(0x04)
	bool bEnabled; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)

	void SetPriority(float NewPriority); // Function RenderSettings.InsideOutsideOverrideVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1bb8ac0
};

// Class RenderSettings.OutsideOverrideVolume
// Size: 0x298 (Inherited: 0x298)
struct AOutsideOverrideVolume : AInsideOutsideOverrideVolume {
};

// Class RenderSettings.InsideOverrideVolume
// Size: 0x298 (Inherited: 0x298)
struct AInsideOverrideVolume : AInsideOutsideOverrideVolume {
};

// Class RenderSettings.PlayerCentricPostProcessingComponent
// Size: 0x6e0 (Inherited: 0xc8)
struct UPlayerCentricPostProcessingComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	float PlayerEyeDistanceSameThreshold; // 0xd0(0x04)
	bool bIncludeBlendables; // 0xd4(0x01)
	char pad_D5[0xb]; // 0xd5(0x0b)
	struct FPostProcessSettings PostProcessSettings; // 0xe0(0x5f0)
	float Priority; // 0x6d0(0x04)
	bool bInVolumeList; // 0x6d4(0x01)
	char pad_6D5[0xb]; // 0x6d5(0x0b)
};

// Class RenderSettings.RenderSettingsViewpointVolumeBase
// Size: 0x290 (Inherited: 0x280)
struct ARenderSettingsViewpointVolumeBase : AVolume {
	float Priority; // 0x280(0x04)
	float BlendRadius; // 0x284(0x04)
	float BlendWeight; // 0x288(0x04)
	bool bUnbounded; // 0x28c(0x01)
	bool bEnabled; // 0x28d(0x01)
	char pad_28E[0x2]; // 0x28e(0x02)
};

// Class RenderSettings.RenderSettingsViewpointVolume
// Size: 0x298 (Inherited: 0x290)
struct ARenderSettingsViewpointVolume : ARenderSettingsViewpointVolumeBase {
	float ViewpointLerp; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
};

// Class RenderSettings.RenderSettingsViewpointInsideOutsideVolume
// Size: 0x2a0 (Inherited: 0x290)
struct ARenderSettingsViewpointInsideOutsideVolume : ARenderSettingsViewpointVolumeBase {
	float TargetViewpointLerp; // 0x290(0x04)
	float InsideMaxDifference; // 0x294(0x04)
	float InsideMinDifference; // 0x298(0x04)
	float ViewpointLerp; // 0x29c(0x04)
};

// Class RenderSettings.PostProcessingVar
// Size: 0x28 (Inherited: 0x28)
struct UPostProcessingVar : UObject {
};

// Class RenderSettings.PostProcessingVarScalarBase
// Size: 0x30 (Inherited: 0x28)
struct UPostProcessingVarScalarBase : UPostProcessingVar {
	enum class EPostProcessingVarScalar Var; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class RenderSettings.PostProcessingVarColorBase
// Size: 0x30 (Inherited: 0x28)
struct UPostProcessingVarColorBase : UPostProcessingVar {
	enum class EPostProcessingVarColor Var; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class RenderSettings.PostProcessingVarScalarConstant
// Size: 0x38 (Inherited: 0x30)
struct UPostProcessingVarScalarConstant : UPostProcessingVarScalarBase {
	float Value; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class RenderSettings.PostProcessingVarColorConstant
// Size: 0x40 (Inherited: 0x30)
struct UPostProcessingVarColorConstant : UPostProcessingVarColorBase {
	struct FLinearColor Value; // 0x30(0x10)
};

// Class RenderSettings.PostProcessingVarScalarInlineCurve
// Size: 0xb8 (Inherited: 0x30)
struct UPostProcessingVarScalarInlineCurve : UPostProcessingVarScalarBase {
	struct FRuntimeFloatCurve Value; // 0x30(0x88)
};

// Class RenderSettings.PostProcessingVarColorInlineCurve
// Size: 0x238 (Inherited: 0x30)
struct UPostProcessingVarColorInlineCurve : UPostProcessingVarColorBase {
	struct FRuntimeCurveLinearColor Value; // 0x30(0x208)
};

// Class RenderSettings.PostProcessingVarScalarCurveAsset
// Size: 0x38 (Inherited: 0x30)
struct UPostProcessingVarScalarCurveAsset : UPostProcessingVarScalarBase {
	struct UCurveFloat* Curve; // 0x30(0x08)
};

// Class RenderSettings.PostProcessingVarColorCurveAsset
// Size: 0x38 (Inherited: 0x30)
struct UPostProcessingVarColorCurveAsset : UPostProcessingVarColorBase {
	struct UCurveLinearColor* Curve; // 0x30(0x08)
};

// Class RenderSettings.PostProcessingVarsDriver
// Size: 0x28 (Inherited: 0x28)
struct UPostProcessingVarsDriver : UObject {
};

// Class RenderSettings.PostProcessingVarsDriverConst
// Size: 0x30 (Inherited: 0x28)
struct UPostProcessingVarsDriverConst : UPostProcessingVarsDriver {
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class RenderSettings.PostProcessingVarsDriverEnvironmentalGlobalsExtra
// Size: 0x38 (Inherited: 0x28)
struct UPostProcessingVarsDriverEnvironmentalGlobalsExtra : UPostProcessingVarsDriver {
	struct FEnvironmentalGlobalsScalarName EnvironmentalGlobal; // 0x28(0x10)
};

// Class RenderSettings.PostProcessingVarsDriverEnvironmentalGlobalsValue
// Size: 0x30 (Inherited: 0x28)
struct UPostProcessingVarsDriverEnvironmentalGlobalsValue : UPostProcessingVarsDriver {
	enum class EEnvironmentalGlobalsValue EnvironmentalGlobal; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class RenderSettings.PostProcessingVarsComponentBase
// Size: 0x870 (Inherited: 0x220)
struct UPostProcessingVarsComponentBase : USceneComponent {
	struct UPostProcessingVarsDriver* Driver; // 0x220(0x08)
	float DriverValue; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FBlendDomain BlendDomain; // 0x230(0x38)
	float Priority; // 0x268(0x04)
	float BlendRadius; // 0x26c(0x04)
	float BlendWeight; // 0x270(0x04)
	char bEnabled : 1; // 0x274(0x01)
	char bUnbounded : 1; // 0x274(0x01)
	char bDriverValueValid : 1; // 0x274(0x01)
	char pad_274_3 : 5; // 0x274(0x01)
	char pad_275[0xb]; // 0x275(0x0b)
	struct FPostProcessSettings PostProcessSettings; // 0x280(0x5f0)

	void SetPriority(float NewPriority); // Function RenderSettings.PostProcessingVarsComponentBase.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1bb8b40
};

// Class RenderSettings.PostProcessingVarsComponent
// Size: 0x880 (Inherited: 0x870)
struct UPostProcessingVarsComponent : UPostProcessingVarsComponentBase {
	struct TArray<struct UPostProcessingVar*> Vars; // 0x870(0x10)
};

// Class RenderSettings.PostProcessingVarsActor
// Size: 0x250 (Inherited: 0x248)
struct APostProcessingVarsActor : AActor {
	struct UPostProcessingVarsComponent* Component; // 0x248(0x08)
};

// Class RenderSettings.PostProcessWithBlendDomainComponent
// Size: 0x860 (Inherited: 0x220)
struct UPostProcessWithBlendDomainComponent : USceneComponent {
	struct FBlendDomain BlendDomain; // 0x220(0x38)
	char pad_258[0x8]; // 0x258(0x08)
	struct FPostProcessSettings Settings; // 0x260(0x5f0)
	float Priority; // 0x850(0x04)
	float BlendRadius; // 0x854(0x04)
	float BlendWeight; // 0x858(0x04)
	char bEnabled : 1; // 0x85c(0x01)
	char bUnbound : 1; // 0x85c(0x01)
	char pad_85C_2 : 6; // 0x85c(0x01)
	char pad_85D[0x3]; // 0x85d(0x03)

	void AddOrUpdateBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight); // Function RenderSettings.PostProcessWithBlendDomainComponent.AddOrUpdateBlendable // (Final|Native|Public|BlueprintCallable) // @ game+0x1bbf460
};

// Class RenderSettings.PostProcessVolumeWithBlendDomain
// Size: 0x8d0 (Inherited: 0x890)
struct APostProcessVolumeWithBlendDomain : APostProcessVolume {
	struct FBlendDomain BlendDomain; // 0x890(0x38)
	char pad_8C8[0x8]; // 0x8c8(0x08)

	void CopySettings(); // Function RenderSettings.PostProcessVolumeWithBlendDomain.CopySettings // (Final|Native|Public) // @ game+0x1074730
};

// Class RenderSettings.RenderSettingsCustomBlendDomainBase
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainBase : UObject {
};

// Class RenderSettings.RenderSettingsCustomBlendDomain
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomain : URenderSettingsCustomBlendDomainBase {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainNoPreCompute
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainNoPreCompute : URenderSettingsCustomBlendDomain {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainIndoorsOutdoorsCurve
// Size: 0x38 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainIndoorsOutdoorsCurve : URenderSettingsCustomBlendDomainNoPreCompute {
	struct UCurveFloat* IndoorsOutdoorsCurve; // 0x28(0x08)
	enum class ERenderSettingsIndoorsType IndoorsType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainCurveRemap
// Size: 0x38 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainCurveRemap : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomain* domain; // 0x28(0x08)
	struct UCurveFloat* Curve; // 0x30(0x08)
};

// Class RenderSettings.RenderSettingsBlendDomainAsset
// Size: 0x30 (Inherited: 0x30)
struct URenderSettingsBlendDomainAsset : UDataAsset {
};

// Class RenderSettings.RenderSettingsBlendDomainFullAsset
// Size: 0x68 (Inherited: 0x30)
struct URenderSettingsBlendDomainFullAsset : URenderSettingsBlendDomainAsset {
	struct FBlendDomain BlendDomain; // 0x30(0x38)
};

// Class RenderSettings.RenderSettingsBlendDomainSimpleAsset
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsBlendDomainSimpleAsset : URenderSettingsBlendDomainAsset {
	struct FSimpleBlendDomain BlendDomain; // 0x30(0x10)
};

// Class RenderSettings.Interface_RenderSettingsCustomBlendDomain
// Size: 0x28 (Inherited: 0x28)
struct UInterface_RenderSettingsCustomBlendDomain : UInterface {
};

// Class RenderSettings.Interface_RenderSettingsCustomBlendDomainOverride
// Size: 0x28 (Inherited: 0x28)
struct UInterface_RenderSettingsCustomBlendDomainOverride : UInterface {
};

// Class RenderSettings.RenderSettingsNamedCustomBlendDomainBase
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsNamedCustomBlendDomainBase : URenderSettingsCustomBlendDomain {
};

// Class RenderSettings.RenderSettingsNamedCustomBlendDomainLibrary
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsNamedCustomBlendDomainLibrary : URenderSettingsNamedCustomBlendDomainBase {
};

// Class RenderSettings.RenderSettingsNamedCustomBlendDomainUserConsoleVariables
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsNamedCustomBlendDomainUserConsoleVariables : URenderSettingsNamedCustomBlendDomainLibrary {
};

// Class RenderSettings.RenderSettingsNamedCustomBlendDomainLibraryCustom
// Size: 0x30 (Inherited: 0x28)
struct URenderSettingsNamedCustomBlendDomainLibraryCustom : URenderSettingsCustomBlendDomainNoPreCompute {
	struct FRenderSettingsCustomBlendDomainName Name; // 0x28(0x08)
};

// Class RenderSettings.RenderSettingsNamedCustomBlendDomainLibraryCustomOneMinus
// Size: 0x30 (Inherited: 0x28)
struct URenderSettingsNamedCustomBlendDomainLibraryCustomOneMinus : URenderSettingsCustomBlendDomainNoPreCompute {
	struct FRenderSettingsCustomBlendDomainName Name; // 0x28(0x08)
};

// Class RenderSettings.RenderSettingsNamedCustomBlendDomain
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsNamedCustomBlendDomain : URenderSettingsNamedCustomBlendDomainBase {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainVolume
// Size: 0x2a8 (Inherited: 0x280)
struct ARenderSettingsCustomBlendDomainVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	struct TArray<struct FRenderSettingsCustomBlendDomainNameWithValue> Domains; // 0x288(0x10)
	float Priority; // 0x298(0x04)
	float BlendRadius; // 0x29c(0x04)
	float BlendWeight; // 0x2a0(0x04)
	bool bEnabled; // 0x2a4(0x01)
	bool bUnbounded; // 0x2a5(0x01)
	char pad_2A6[0x2]; // 0x2a6(0x02)

	void SetPriority(float NewPriority); // Function RenderSettings.RenderSettingsCustomBlendDomainVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1bbf670
};

// Class RenderSettings.RenderSettingsCustomBlendDomainVolumeAttached
// Size: 0x278 (Inherited: 0x248)
struct ARenderSettingsCustomBlendDomainVolumeAttached : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	struct AVolume* AttachTo; // 0x250(0x08)
	struct TArray<struct FRenderSettingsCustomBlendDomainNameWithValue> Domains; // 0x258(0x10)
	float Priority; // 0x268(0x04)
	float BlendRadius; // 0x26c(0x04)
	float BlendWeight; // 0x270(0x04)
	bool bEnabled; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)

	void SetPriority(float NewPriority); // Function RenderSettings.RenderSettingsCustomBlendDomainVolumeAttached.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1bbf6f0
};

// Class RenderSettings.RenderSettingsCustomBlendDomainComponent
// Size: 0x240 (Inherited: 0x220)
struct URenderSettingsCustomBlendDomainComponent : USceneComponent {
	struct TArray<struct FRenderSettingsCustomBlendDomainNameWithValue> Domains; // 0x220(0x10)
	float Priority; // 0x230(0x04)
	float BlendRadius; // 0x234(0x04)
	float BlendWeight; // 0x238(0x04)
	bool bEnabled; // 0x23c(0x01)
	bool bUnbounded; // 0x23d(0x01)
	char pad_23E[0x2]; // 0x23e(0x02)

	void SetPriority(float NewPriority); // Function RenderSettings.RenderSettingsCustomBlendDomainComponent.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1bbf770
};

// Class RenderSettings.RenderSettingsCustomBlendDomainOverrideComponentBase
// Size: 0xd8 (Inherited: 0xc8)
struct URenderSettingsCustomBlendDomainOverrideComponentBase : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	bool bEnabled; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	void SetEnabled(bool bEnable); // Function RenderSettings.RenderSettingsCustomBlendDomainOverrideComponentBase.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1bbf5e0
	void IsEnabled(bool& bEnable); // Function RenderSettings.RenderSettingsCustomBlendDomainOverrideComponentBase.IsEnabled // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bbf550
};

// Class RenderSettings.RenderSettingsCustomBlendDomainOverrideNamedComponent
// Size: 0xe8 (Inherited: 0xd8)
struct URenderSettingsCustomBlendDomainOverrideNamedComponent : URenderSettingsCustomBlendDomainOverrideComponentBase {
	struct FRenderSettingsCustomBlendDomainName Name; // 0xd8(0x08)
	float Value; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainOverrideRawComponent
// Size: 0xe8 (Inherited: 0xd8)
struct URenderSettingsCustomBlendDomainOverrideRawComponent : URenderSettingsCustomBlendDomainOverrideComponentBase {
	struct FName Name; // 0xd8(0x08)
	float Value; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainOneMinus
// Size: 0x30 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainOneMinus : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomain* domain; // 0x28(0x08)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainStep
// Size: 0x38 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainStep : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomain* domain; // 0x28(0x08)
	float Threshold; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainConstant
// Size: 0x30 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainConstant : URenderSettingsCustomBlendDomainNoPreCompute {
	float Constant; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainZero
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainZero : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainOne
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainOne : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainNotZero
// Size: 0x30 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainNotZero : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomain* domain; // 0x28(0x08)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainIsZero
// Size: 0x30 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainIsZero : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomain* domain; // 0x28(0x08)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainIsOne
// Size: 0x30 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainIsOne : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomain* domain; // 0x28(0x08)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainNotOne
// Size: 0x30 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainNotOne : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomain* domain; // 0x28(0x08)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainAnd
// Size: 0x38 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainAnd : URenderSettingsCustomBlendDomainNoPreCompute {
	struct TArray<struct URenderSettingsCustomBlendDomain*> Domains; // 0x28(0x10)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainMax
// Size: 0x38 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainMax : URenderSettingsCustomBlendDomainNoPreCompute {
	struct TArray<struct URenderSettingsCustomBlendDomain*> Domains; // 0x28(0x10)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainMin
// Size: 0x38 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainMin : URenderSettingsCustomBlendDomainNoPreCompute {
	struct TArray<struct URenderSettingsCustomBlendDomain*> Domains; // 0x28(0x10)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainRemap
// Size: 0x40 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainRemap : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomain* domain; // 0x28(0x08)
	float InputMin; // 0x30(0x04)
	float InputMax; // 0x34(0x04)
	float OunputMin; // 0x38(0x04)
	float OutputMax; // 0x3c(0x04)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainConsantBiasScale
// Size: 0x38 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainConsantBiasScale : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomain* domain; // 0x28(0x08)
	float Bias; // 0x30(0x04)
	float Scale; // 0x34(0x04)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainIf
// Size: 0x50 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainIf : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomain* A; // 0x28(0x08)
	struct URenderSettingsCustomBlendDomain* B; // 0x30(0x08)
	struct URenderSettingsCustomBlendDomain* ALessThanB; // 0x38(0x08)
	struct URenderSettingsCustomBlendDomain* AEqualsB; // 0x40(0x08)
	struct URenderSettingsCustomBlendDomain* AGreaterThanB; // 0x48(0x08)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainWithOverrides
// Size: 0x40 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainWithOverrides : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomain* Default; // 0x28(0x08)
	struct URenderSettingsCustomBlendDomain* OverrideOn; // 0x30(0x08)
	struct URenderSettingsCustomBlendDomain* OverrideOff; // 0x38(0x08)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainPresetAsset
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsCustomBlendDomainPresetAsset : UDataAsset {
	struct TArray<struct URenderSettingsCustomBlendDomain*> Domains; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainPreset
// Size: 0x30 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainPreset : URenderSettingsCustomBlendDomainNoPreCompute {
	struct URenderSettingsCustomBlendDomainPresetAsset* Preset; // 0x28(0x08)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainHasBegunPlay
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainHasBegunPlay : URenderSettingsCustomBlendDomain {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainFixedExposure
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainFixedExposure : URenderSettingsCustomBlendDomain {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainPaused
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainPaused : URenderSettingsCustomBlendDomain {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainPausedSmoothed
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainPausedSmoothed : URenderSettingsCustomBlendDomainPaused {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainInEditor
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainInEditor : URenderSettingsCustomBlendDomain {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainSeason
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainSeason : URenderSettingsCustomBlendDomainBase {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainSeasonSummer
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainSeasonSummer : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainSeasonFall
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainSeasonFall : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainSeasonWinter
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainSeasonWinter : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainSeasonSpring
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainSeasonSpring : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainLastFrameExposure
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainLastFrameExposure : URenderSettingsCustomBlendDomainBase {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainLastFrameExposureRange
// Size: 0x38 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainLastFrameExposureRange : URenderSettingsCustomBlendDomainNoPreCompute {
	float LowExposure; // 0x28(0x04)
	float HighExposure; // 0x2c(0x04)
	enum class ELastFrameExposureValue ExposureValue; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainHDRBase
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainHDRBase : URenderSettingsCustomBlendDomainBase {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainHDR
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainHDR : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainNotHDR
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainNotHDR : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainHDRLinearGamma
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainHDRLinearGamma : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainNotHDRLinearGamma
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainNotHDRLinearGamma : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsPreComputeBlendDomain
// Size: 0x38 (Inherited: 0x28)
struct URenderSettingsPreComputeBlendDomain : URenderSettingsCustomBlendDomainNoPreCompute {
	struct FRenderSettingsPreComputedBlendDomainName Name; // 0x28(0x10)
};

// Class RenderSettings.RenderSettingsPreComputeBlendDomainOneMinus
// Size: 0x38 (Inherited: 0x28)
struct URenderSettingsPreComputeBlendDomainOneMinus : URenderSettingsCustomBlendDomainNoPreCompute {
	struct FRenderSettingsPreComputedBlendDomainName Name; // 0x28(0x10)
};

// Class RenderSettings.EnvironmentalGlobalsCustomScalarBlendDomain
// Size: 0x40 (Inherited: 0x38)
struct UEnvironmentalGlobalsCustomScalarBlendDomain : UEnvironmentalGlobalsCustomScalarModsBase {
	struct URenderSettingsCustomBlendDomain* BlendDomain; // 0x38(0x08)
};

// Class RenderSettings.RenderSettingsCustomBlendDomainProbeIndoorsBase
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainProbeIndoorsBase : URenderSettingsCustomBlendDomainBase {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainProbeIndoors
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainProbeIndoors : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainProbeOutdoors
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainProbeOutdoors : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainFilteredProbeIndoors
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainFilteredProbeIndoors : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainFilteredProbeOutdoors
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainFilteredProbeOutdoors : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainIndoorsBase
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainIndoorsBase : URenderSettingsNamedCustomBlendDomain {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainIndoors
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainIndoors : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainOutdoors
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainOutdoors : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainFilteredIndoors
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainFilteredIndoors : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainFilteredOutdoors
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainFilteredOutdoors : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainAudioIndoors
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainAudioIndoors : URenderSettingsNamedCustomBlendDomain {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainStreamingIndoors
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainStreamingIndoors : URenderSettingsNamedCustomBlendDomain {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainProbeCaptureBase
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainProbeCaptureBase : URenderSettingsCustomBlendDomainBase {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainProbeCapture
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainProbeCapture : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.RenderSettingsCustomBlendDomainNotProbeCapture
// Size: 0x28 (Inherited: 0x28)
struct URenderSettingsCustomBlendDomainNotProbeCapture : URenderSettingsCustomBlendDomainNoPreCompute {
};

// Class RenderSettings.BlendDomainVisibilityComponentBase
// Size: 0x230 (Inherited: 0x220)
struct UBlendDomainVisibilityComponentBase : USceneComponent {
	float Threshold; // 0x218(0x04)
	bool bEnabled; // 0x21c(0x01)
	float LastBlend; // 0x220(0x04)
	char pad_229[0x7]; // 0x229(0x07)

	void SetEnabled(bool bNewEnabled); // Function RenderSettings.BlendDomainVisibilityComponentBase.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1bc41b0
	void ForceUpdate(); // Function RenderSettings.BlendDomainVisibilityComponentBase.ForceUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x1bc4180
};

// Class RenderSettings.BlendDomainVisibilityComponent
// Size: 0x260 (Inherited: 0x230)
struct UBlendDomainVisibilityComponent : UBlendDomainVisibilityComponentBase {
	struct FBlendDomain BlendDomain; // 0x228(0x38)
};

// Class RenderSettings.BlendDomainComponentVisibilityComponent
// Size: 0x270 (Inherited: 0x260)
struct UBlendDomainComponentVisibilityComponent : UBlendDomainVisibilityComponent {
	bool bSetDitheredAlpha; // 0x260(0x01)
	char pad_261[0xf]; // 0x261(0x0f)
};

// Class RenderSettings.BlendDomainParentVisibilityComponent
// Size: 0x270 (Inherited: 0x270)
struct UBlendDomainParentVisibilityComponent : UBlendDomainComponentVisibilityComponent {
	bool bPropagateToChildren; // 0x268(0x01)

	struct UBlendDomainParentVisibilityComponent* CreateForParentComponent(struct USceneComponent* Parent, bool bTransient, bool bStartEnabled); // Function RenderSettings.BlendDomainParentVisibilityComponent.CreateForParentComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bc4060
};

// Class RenderSettings.BlendDomainChildVisibilityComponent
// Size: 0x270 (Inherited: 0x270)
struct UBlendDomainChildVisibilityComponent : UBlendDomainComponentVisibilityComponent {
	bool bChildrenOfChildren; // 0x268(0x01)

	struct UBlendDomainChildVisibilityComponent* CreateForChildComponents(struct USceneComponent* Parent, bool bTransient, bool bStartEnabled); // Function RenderSettings.BlendDomainChildVisibilityComponent.CreateForChildComponents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bc3f40
};

// Class RenderSettings.BlendDomainActorVisibilityComponent
// Size: 0x270 (Inherited: 0x270)
struct UBlendDomainActorVisibilityComponent : UBlendDomainComponentVisibilityComponent {

	struct UBlendDomainActorVisibilityComponent* CreateForActor(struct AActor* Actor, bool bTransient, bool bStartEnabled); // Function RenderSettings.BlendDomainActorVisibilityComponent.CreateForActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bc3e20
};

// Class RenderSettings.BlendDomainDelegateVisibilityComponent
// Size: 0x270 (Inherited: 0x260)
struct UBlendDomainDelegateVisibilityComponent : UBlendDomainVisibilityComponent {
	struct FMulticastInlineDelegate VisibilityDelegate; // 0x260(0x10)
};

// Class RenderSettings.AssetBlendDomainVisibilityComponent
// Size: 0x230 (Inherited: 0x230)
struct UAssetBlendDomainVisibilityComponent : UBlendDomainVisibilityComponentBase {
	struct URenderSettingsBlendDomainAsset* BlendDomain; // 0x228(0x08)
};

// Class RenderSettings.AssetBlendDomainComponentVisibilityComponent
// Size: 0x240 (Inherited: 0x230)
struct UAssetBlendDomainComponentVisibilityComponent : UAssetBlendDomainVisibilityComponent {
	bool bSetDitheredAlpha; // 0x230(0x01)
	char pad_231[0xf]; // 0x231(0x0f)
};

// Class RenderSettings.AssetBlendDomainParentVisibilityComponent
// Size: 0x240 (Inherited: 0x240)
struct UAssetBlendDomainParentVisibilityComponent : UAssetBlendDomainComponentVisibilityComponent {
	bool bPropagateToChildren; // 0x238(0x01)
};

// Class RenderSettings.AssetBlendDomainChildVisibilityComponent
// Size: 0x240 (Inherited: 0x240)
struct UAssetBlendDomainChildVisibilityComponent : UAssetBlendDomainComponentVisibilityComponent {
	bool bChildrenOfChildren; // 0x238(0x01)
};

// Class RenderSettings.AssetBlendDomainActorVisibilityComponent
// Size: 0x240 (Inherited: 0x240)
struct UAssetBlendDomainActorVisibilityComponent : UAssetBlendDomainComponentVisibilityComponent {
};

// Class RenderSettings.AssetBlendDomainDelegateVisibilityComponent
// Size: 0x240 (Inherited: 0x230)
struct UAssetBlendDomainDelegateVisibilityComponent : UAssetBlendDomainVisibilityComponent {
	struct FMulticastInlineDelegate VisibilityDelegate; // 0x230(0x10)
};

// Class RenderSettings.RenderSettingsBlendDomainConsoleLiens
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsBlendDomainConsoleLiens : UDataAsset {
	struct TArray<struct FRenderSettingsBlendDomainConsoleLien> Liens; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsEmissiveAdaptationSettings
// Size: 0x280 (Inherited: 0x30)
struct URenderSettingsEmissiveAdaptationSettings : UDataAsset {
	char pad_30[0x8]; // 0x30(0x08)
	struct FRuntimeFloatCurve NightDayLerp; // 0x38(0x88)
	struct FRuntimeFloatCurve OutdoorsIndoorsLerp; // 0xc0(0x88)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x148(0x08)
	struct UNiagaraParameterCollection* NiagaraParameterCollection; // 0x150(0x08)
	struct FExposureExpressions GlobalExpressions; // 0x158(0xc0)
	struct FExposureExpressionsExtrasDefaults Extras; // 0x218(0x40)
	struct UExposureExpressionsExposureValue* AutoExposureBaseExpression; // 0x258(0x08)
	struct UExposureExpressionsExposureValue* AverageLuminanceBaseExpression; // 0x260(0x08)
	struct UExposureExpressionsExposureValue* FilteredAverageLuminanceBaseExpression; // 0x268(0x08)
	struct TArray<struct FRenderSettingsEmissiveAdaptation> Settings; // 0x270(0x10)
};

// Class RenderSettings.Interface_RenderSettingsEmissiveAdaptation
// Size: 0x28 (Inherited: 0x28)
struct UInterface_RenderSettingsEmissiveAdaptation : UInterface {
};

// Class RenderSettings.RenderSettingsLibrary
// Size: 0x100 (Inherited: 0x30)
struct URenderSettingsLibrary : UDataAsset {
	float PostProcessingPriorityBoost; // 0x30(0x04)
	float InsideTransitionDepth; // 0x34(0x04)
	float AudioInsideTransitionDepth; // 0x38(0x04)
	float IndoorsOutdoorsFiltering; // 0x3c(0x04)
	float IndoorsOutdoorsTeleportDistance; // 0x40(0x04)
	struct FLastRenderedExposureFilterTimeConstants ExposureTimeConstants; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct URenderSettingsPostProcessingGroupSettings* PostProcessingGroupSettings; // 0x50(0x08)
	struct URenderSettingsPPExposureSettings* ExposureSettings; // 0x58(0x08)
	struct URenderSettingsPPColorGradingSettings* ColorGradingSettings; // 0x60(0x08)
	struct URenderSettingsPPFilmSettings* FilmSettings; // 0x68(0x08)
	struct URenderSettingsPPLensFXSettings* LensFXSettings; // 0x70(0x08)
	struct URenderSettingsPPBloomSettings* BloomSettings; // 0x78(0x08)
	struct URenderSettingsPPMotionBlurSettings* MotionBlurSettings; // 0x80(0x08)
	struct URenderSettingsPPDepthOfFieldSettings* DepthOfFieldSettings; // 0x88(0x08)
	struct URenderSettingsPPAmbientSettings* AmbientSettings; // 0x90(0x08)
	struct URenderSettingsPPScreenSpaceReflectionsSettings* ScreenSpaceReflectionsSettings; // 0x98(0x08)
	struct URenderSettingsPPProbesSettings* ProbeSettings; // 0xa0(0x08)
	struct URenderSettingsEmissiveAdaptationSettings* EmissiveAdaptationSettings; // 0xa8(0x08)
	struct UDistanceFogSettings* DistanceFogSettings; // 0xb0(0x08)
	struct UCharacterLightRigAdjustmentsSettings* CharacterLightRigAdjustmentsSettings; // 0xb8(0x08)
	struct TArray<struct FRenderSettingsCustomBlendDomainEntry> CustomBlendDomains; // 0xc0(0x10)
	struct TArray<struct FRenderSettingsCustomBlendDomainConsoleEntry> ConsoleCustomBlendDomains; // 0xd0(0x10)
	struct URenderSettingsBlendDomainConsoleLiens* GlobalBlendDomainConsoleVars; // 0xe0(0x08)
	struct TArray<struct FName> AutoDisableWorldNames; // 0xe8(0x10)
	bool bGlobalDisableLevelDefaults; // 0xf8(0x01)
	bool bPostProcessingPriorityBoost; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
};

// Class RenderSettings.RenderSettingsPostProcessingGroupSettings
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsPostProcessingGroupSettings : UDataAsset {
	struct TArray<struct FRenderSettingsPostProcessingGroup> Settings; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsPPAmbientSettings
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsPPAmbientSettings : UDataAsset {
	struct TArray<struct FRenderSettingsPPAmbient> Settings; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsPPBloomSettings
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsPPBloomSettings : UDataAsset {
	struct TArray<struct FRenderSettingsPPBloom> Settings; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsPPColorGradingSettings
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsPPColorGradingSettings : UDataAsset {
	struct TArray<struct FRenderSettingsPPColorGrading> Settings; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsPPDepthOfFieldSettings
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsPPDepthOfFieldSettings : UDataAsset {
	struct TArray<struct FRenderSettingsPPDepthOfField> Settings; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsPPExposureSettings
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsPPExposureSettings : UDataAsset {
	struct TArray<struct FRenderSettingsPPExposure> Settings; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsPPFilmSettings
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsPPFilmSettings : UDataAsset {
	struct TArray<struct FRenderSettingsPPFilm> Settings; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsPPLensFXSettings
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsPPLensFXSettings : UDataAsset {
	struct TArray<struct FRenderSettingsPPLensFX> Settings; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsPPMotionBlurSettings
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsPPMotionBlurSettings : UDataAsset {
	struct TArray<struct FRenderSettingsPPMotionBlur> Settings; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsPPProbesSettings
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsPPProbesSettings : UDataAsset {
	struct TArray<struct FRenderSettingsPPProbes> Settings; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsPPScreenSpaceReflectionsSettings
// Size: 0x40 (Inherited: 0x30)
struct URenderSettingsPPScreenSpaceReflectionsSettings : UDataAsset {
	struct TArray<struct FRenderSettingsPPScreenSpaceReflections> Settings; // 0x30(0x10)
};

// Class RenderSettings.RenderSettingsSingleton
// Size: 0x1030 (Inherited: 0x248)
struct ARenderSettingsSingleton : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	struct FRenderSettingsPostProcessingGroup DefaultPostProcessing; // 0x250(0x5c)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FLightAdaptationTracker LightAdaptation; // 0x2b0(0x98)
	bool bCreatedInInactiveWorld; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FPostProcessSettings EnginePostProcessSettings; // 0x350(0x5f0)
	struct FDistanceFog DefaultDistanceFog; // 0x940(0x1c0)
	struct FDistanceFogCompute DistanceFog; // 0xb00(0x10)
	struct FRenderSettingsEmissiveAdaptation DefaultEmissiveAdaptation; // 0xb10(0x90)
	struct FEmissiveAdaptationStateCompute EmissiveAdaptation; // 0xba0(0xe0)
	struct FPlayerCentricPostProcessingOverrides PlayerCentricViewpointOverrides; // 0xc80(0x10)
	struct UPlayerCentricPostProcessingComponent* PlayerCentricPostProcessing; // 0xc90(0x08)
	struct FBlendDomainState ViewpointState; // 0xc98(0xf8)
	struct FBlendDomainState CameraState; // 0xd90(0xf8)
	struct FBlendDomainState PlayerState; // 0xe88(0xf8)
	struct FLastRenderedExposurePair LastFrameExposure; // 0xf80(0x68)
	struct FLastRenderedExposure LastValidExposure; // 0xfe8(0x20)
	float ViewpointEye0Player1Lerp; // 0x1008(0x04)
	int32_t ActiveEditorViewport; // 0x100c(0x04)
	uint32_t LastCameraCutFrame; // 0x1010(0x04)
	uint32_t LastExposureRenderCutFrame; // 0x1014(0x04)
	bool bInExposureRenderingCut; // 0x1018(0x01)
	bool bIsFixedExposure; // 0x1019(0x01)
	char pad_101A[0x6]; // 0x101a(0x06)
	struct UPostProcessComponent* DebugPostProcessComponent; // 0x1020(0x08)
	char pad_1028[0x8]; // 0x1028(0x08)

	float RenderSettingsGetOvercast(struct UObject* WorldContextObject); // Function RenderSettings.RenderSettingsSingleton.RenderSettingsGetOvercast // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1bca970
	float RenderSettingsGetIndoors(struct UObject* WorldContextObject, enum class ERenderSettingsIndoorsType IndoorsType); // Function RenderSettings.RenderSettingsSingleton.RenderSettingsGetIndoors // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1bcb7f0
	float RenderSettingsGetDayNight(struct UObject* WorldContextObject); // Function RenderSettings.RenderSettingsSingleton.RenderSettingsGetDayNight // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1bca790
	void PushPlayerViewpointOverride(struct UObject* WorldContextObject, struct UObject* ViewpointOverrideOwner, float PostProcessingViewpointOverride, float LerpAlpha); // Function RenderSettings.RenderSettingsSingleton.PushPlayerViewpointOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bcb6a0
	void PopPlayerViewpointOverride(struct UObject* WorldContextObject, struct UObject* ViewpointOverrideOwner); // Function RenderSettings.RenderSettingsSingleton.PopPlayerViewpointOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bcb5e0
	void IsPlayerIndoors(struct UObject* WorldContextObject, float& Indoors0To1, bool& bIsIndoors); // Function RenderSettings.RenderSettingsSingleton.IsPlayerIndoors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bcb4b0
	void IsCameraIndoors(struct UObject* WorldContextObject, float& Indoors0To1, bool& bIsIndoors); // Function RenderSettings.RenderSettingsSingleton.IsCameraIndoors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bcb380
	void HasPlayerViewpointOverride(struct UObject* WorldContextObject, struct UObject* ViewpointOverrideOwner, bool& bExists); // Function RenderSettings.RenderSettingsSingleton.HasPlayerViewpointOverride // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bcb270
	void GetViewpointIsInside(struct UObject* WorldContextObject, float& Indoors, enum class ERenderSettingsIndoorsType IndoorsType); // Function RenderSettings.RenderSettingsSingleton.GetViewpointIsInside // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bcb130
	void GetViewpointBlendDomain(struct UObject* WorldContextObject, struct FBlendDomainState& BlendDomainState); // Function RenderSettings.RenderSettingsSingleton.GetViewpointBlendDomain // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bcae40
	void GetPlayerIsInside(struct UObject* WorldContextObject, float& Indoors, enum class ERenderSettingsIndoorsType IndoorsType); // Function RenderSettings.RenderSettingsSingleton.GetPlayerIsInside // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bcad00
	void GetPlayerBlendDomain(struct UObject* WorldContextObject, struct FBlendDomainState& BlendDomainState); // Function RenderSettings.RenderSettingsSingleton.GetPlayerBlendDomain // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bcaa10
	float GetOvercast(struct UObject* WorldContextObject); // Function RenderSettings.RenderSettingsSingleton.GetOvercast // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bca970
	float GetIndoors(struct UObject* WorldContextObject); // Function RenderSettings.RenderSettingsSingleton.GetIndoors // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bca8d0
	float GetFilteredIndoors(struct UObject* WorldContextObject); // Function RenderSettings.RenderSettingsSingleton.GetFilteredIndoors // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bca830
	float GetDayNight(struct UObject* WorldContextObject); // Function RenderSettings.RenderSettingsSingleton.GetDayNight // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bca790
	void GetCameraIsInside(struct UObject* WorldContextObject, float& Indoors, enum class ERenderSettingsIndoorsType IndoorsType); // Function RenderSettings.RenderSettingsSingleton.GetCameraIsInside // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bca650
	void GetCameraBlendDomain(struct UObject* WorldContextObject, struct FBlendDomainState& BlendDomainState); // Function RenderSettings.RenderSettingsSingleton.GetCameraBlendDomain // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bca360
	void GetBlendDomainValueBool(struct FBlendDomainState& BlendDomainState, struct FName BlendDomain, bool& bValue); // Function RenderSettings.RenderSettingsSingleton.GetBlendDomainValueBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bc9fb0
	void GetBlendDomainValue(struct FBlendDomainState& BlendDomainState, struct FName BlendDomain, float& Value); // Function RenderSettings.RenderSettingsSingleton.GetBlendDomainValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bc9c00
	void GetBlendDomainIndoors(struct FBlendDomainState& BlendDomainState, float& Indoors, enum class ERenderSettingsIndoorsType IndoorsType); // Function RenderSettings.RenderSettingsSingleton.GetBlendDomainIndoors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bc98d0
	struct UDirectionalLightComponent* GetBestDirectionalLight(struct UObject* WorldContextObject); // Function RenderSettings.RenderSettingsSingleton.GetBestDirectionalLight // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bc9830
	void CustomBlendDomainSetOverride(struct UObject* WorldContextObject, struct FName CustomBlendDomainName, float Value); // Function RenderSettings.RenderSettingsSingleton.CustomBlendDomainSetOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bc9720
	void CustomBlendDomainHasOverride(struct UObject* WorldContextObject, struct FName CustomBlendDomainName, bool& bExists); // Function RenderSettings.RenderSettingsSingleton.CustomBlendDomainHasOverride // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bc9610
	void CustomBlendDomainGetOverride(struct UObject* WorldContextObject, struct FName CustomBlendDomainName, float& Value, bool& bExists); // Function RenderSettings.RenderSettingsSingleton.CustomBlendDomainGetOverride // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bc94a0
	void CustomBlendDomainGetBool(struct UObject* WorldContextObject, struct FName CustomBlendDomainName, bool& bValue, bool bDefaultValue); // Function RenderSettings.RenderSettingsSingleton.CustomBlendDomainGetBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bc9340
	void CustomBlendDomainGet(struct UObject* WorldContextObject, struct FName CustomBlendDomainName, float& Value, bool& bExists); // Function RenderSettings.RenderSettingsSingleton.CustomBlendDomainGet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bc91d0
	void CustomBlendDomainExists(struct UObject* WorldContextObject, struct FName CustomBlendDomainName, bool& bExists); // Function RenderSettings.RenderSettingsSingleton.CustomBlendDomainExists // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bc90c0
	void CustomBlendDomainClearOverride(struct UObject* WorldContextObject, struct FName CustomBlendDomainName); // Function RenderSettings.RenderSettingsSingleton.CustomBlendDomainClearOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bc9000
	float CurrentPlayerViewpointOverride(struct UObject* WorldContextObject); // Function RenderSettings.RenderSettingsSingleton.CurrentPlayerViewpointOverride // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1bc8f70
	void ComputeIsInside(struct UObject* WorldContextObject, struct FVector Position, float& Indoors, enum class ERenderSettingsIndoorsType IndoorsType, bool bHighQuality); // Function RenderSettings.RenderSettingsSingleton.ComputeIsInside // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1bc8d00
	void ComputeBlendDomain(struct UObject* WorldContextObject, struct FVector Position, struct FBlendDomainState& BlendDomainState, bool bHighQuality); // Function RenderSettings.RenderSettingsSingleton.ComputeBlendDomain // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1bc89a0
};

// Class RenderSettings.RenderSettingsComponent
// Size: 0xae0 (Inherited: 0x220)
struct URenderSettingsComponent : USceneComponent {
	char pad_220[0x8]; // 0x220(0x08)
	struct FRenderSettingsPostProcessing PostProcessing; // 0x228(0x5c)
	char pad_284[0xc]; // 0x284(0x0c)
	struct FPostProcessSettings EnginePostProcessSettings; // 0x290(0x5f0)
	float ExposureTweak; // 0x880(0x04)
	struct FDistanceFogName DistanceFog; // 0x884(0x08)
	struct FDistanceFogOverrides DistanceFogOverrides; // 0x88c(0x20)
	struct FCharacterLightRigAdjustmentsName CharacterLightRigAdjustments; // 0x8ac(0x08)
	struct FRenderSettingsEmissiveAdaptationName EmissiveAdaptation; // 0x8b4(0x08)
	enum class ERenderSettingsVolumeIndoorsOutdoorsType IndoorsOutdoors; // 0x8bc(0x01)
	enum class ERenderSettingsIndoorsType IndoorsType; // 0x8bd(0x01)
	enum class ERenderSettingsVolumeDayNightType DayNight; // 0x8be(0x01)
	enum class ERenderSettingsVolumeOvercastType Overcast; // 0x8bf(0x01)
	enum class EBlendDomainLightingMode LightingMode; // 0x8c0(0x01)
	char pad_8C1[0x7]; // 0x8c1(0x07)
	struct FBlendDomainNormalizedTimeCurve NormalizedTimeBlend; // 0x8c8(0x10)
	struct FBlendDomainIndoorsOutdoorsCurve IndoorsOutdoorsBlendCurve; // 0x8d8(0x08)
	struct TArray<struct URenderSettingsCustomBlendDomain*> CustomBlends; // 0x8e0(0x10)
	float Priority; // 0x8f0(0x04)
	float BlendRadius; // 0x8f4(0x04)
	float BlendWeight; // 0x8f8(0x04)
	char bEnabled : 1; // 0x8fc(0x01)
	char bUnbounded : 1; // 0x8fc(0x01)
	char bExposureTweak : 1; // 0x8fc(0x01)
	char bDistanceFog : 1; // 0x8fc(0x01)
	char bCharacterLightRigAdjustments : 1; // 0x8fc(0x01)
	char bEmissiveAdaptation : 1; // 0x8fc(0x01)
	char pad_8FC_6 : 2; // 0x8fc(0x01)
	char pad_8FD[0x3]; // 0x8fd(0x03)
	struct FDistanceFog DistanceFogData; // 0x900(0x1c0)
	struct FCharacterLightRigAdjustments CharacterLightRigAdjustmentsData; // 0xac0(0x18)
	char pad_AD8[0x8]; // 0xad8(0x08)

	void UpdateEnginePostProcessing(); // Function RenderSettings.RenderSettingsComponent.UpdateEnginePostProcessing // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcc2d0
	void UpdateEmissiveAdaptation(struct URenderSettingsLibrary* Library); // Function RenderSettings.RenderSettingsComponent.UpdateEmissiveAdaptation // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcc240
	void UpdateDistanceFog(struct URenderSettingsLibrary* Library); // Function RenderSettings.RenderSettingsComponent.UpdateDistanceFog // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcc1b0
	void UpdateCharacterLightRigAdjustments(struct URenderSettingsLibrary* Library); // Function RenderSettings.RenderSettingsComponent.UpdateCharacterLightRigAdjustments // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcc090
	void UpdateAll(); // Function RenderSettings.RenderSettingsComponent.UpdateAll // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcbfe0
	void SetPriority(float NewPriority); // Function RenderSettings.RenderSettingsComponent.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcbf20
	void SetPostProcessing(struct FRenderSettingsPostProcessing NewPostProcessing); // Function RenderSettings.RenderSettingsComponent.SetPostProcessing // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcbc90
	void SetExposureTweak(float NewExposureTweak, bool bEnable); // Function RenderSettings.RenderSettingsComponent.SetExposureTweak // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcbba0
	void SetEmissiveAdaptation(struct FRenderSettingsEmissiveAdaptationName NewEmissiveAdaptation, bool bEnable); // Function RenderSettings.RenderSettingsComponent.SetEmissiveAdaptation // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcbac0
	void SetDistanceFog(struct FDistanceFogName NewDistanceFog, bool bEnable); // Function RenderSettings.RenderSettingsComponent.SetDistanceFog // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcb9d0
	void SetCharacterLightRigAdjustments(struct FCharacterLightRigAdjustmentsName NewCharacterLightRigAdjustments, bool bEnable); // Function RenderSettings.RenderSettingsComponent.SetCharacterLightRigAdjustments // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcb8e0
	void ClearExposureTweak(); // Function RenderSettings.RenderSettingsComponent.ClearExposureTweak // (Final|Native|Public|BlueprintCallable) // @ game+0x1bc8970
	void ClearEmissiveAdaptation(); // Function RenderSettings.RenderSettingsComponent.ClearEmissiveAdaptation // (Final|Native|Public|BlueprintCallable) // @ game+0x1bc8950
	void ClearDistanceFog(); // Function RenderSettings.RenderSettingsComponent.ClearDistanceFog // (Final|Native|Public|BlueprintCallable) // @ game+0x1bc8920
	void ClearCharacterLightRigAdjustments(); // Function RenderSettings.RenderSettingsComponent.ClearCharacterLightRigAdjustments // (Final|Native|Public|BlueprintCallable) // @ game+0x1bc88f0
};

// Class RenderSettings.RenderSettingsVolume
// Size: 0xb40 (Inherited: 0x280)
struct ARenderSettingsVolume : AVolume {
	char pad_280[0x10]; // 0x280(0x10)
	struct FRenderSettingsPostProcessing PostProcessing; // 0x290(0x5c)
	struct FDistanceFogName DistanceFog; // 0x2ec(0x08)
	struct FDistanceFogOverrides DistanceFogOverrides; // 0x2f4(0x20)
	struct FCharacterLightRigAdjustmentsName CharacterLightRigAdjustments; // 0x314(0x08)
	struct FRenderSettingsEmissiveAdaptationName EmissiveAdaptation; // 0x31c(0x08)
	float ExposureTweak; // 0x324(0x04)
	enum class ERenderSettingsVolumeIndoorsOutdoorsType IndoorsOutdoors; // 0x328(0x01)
	enum class ERenderSettingsIndoorsType IndoorsType; // 0x329(0x01)
	enum class ERenderSettingsVolumeDayNightType DayNight; // 0x32a(0x01)
	enum class ERenderSettingsVolumeOvercastType Overcast; // 0x32b(0x01)
	enum class EBlendDomainLightingMode LightingMode; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct FBlendDomainNormalizedTimeCurve NormalizedTimeBlend; // 0x330(0x10)
	struct FBlendDomainIndoorsOutdoorsCurve IndoorsOutdoorsBlendCurve; // 0x340(0x08)
	struct TArray<struct URenderSettingsCustomBlendDomain*> CustomBlends; // 0x348(0x10)
	float Priority; // 0x358(0x04)
	float BlendRadius; // 0x35c(0x04)
	float BlendWeight; // 0x360(0x04)
	char bUnbounded : 1; // 0x364(0x01)
	char bEnabled : 1; // 0x364(0x01)
	char bExposureTweak : 1; // 0x364(0x01)
	char bDistanceFog : 1; // 0x364(0x01)
	char bCharacterLightRigAdjustments : 1; // 0x364(0x01)
	char bEmissiveAdaptation : 1; // 0x364(0x01)
	char pad_364_6 : 2; // 0x364(0x01)
	char pad_365[0xb]; // 0x365(0x0b)
	struct FPostProcessSettings EnginePostProcessSettings; // 0x370(0x5f0)
	struct FDistanceFog DistanceFogData; // 0x960(0x1c0)
	struct FCharacterLightRigAdjustments CharacterLightRigAdjustmentsData; // 0xb20(0x18)
	char pad_B38[0x8]; // 0xb38(0x08)

	void UpdateEnginePostProcessing(); // Function RenderSettings.RenderSettingsVolume.UpdateEnginePostProcessing // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcc2b0
	void UpdateEmissiveAdaptation(struct URenderSettingsLibrary* Library); // Function RenderSettings.RenderSettingsVolume.UpdateEmissiveAdaptation // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcc240
	void UpdateDistanceFog(struct URenderSettingsLibrary* Library); // Function RenderSettings.RenderSettingsVolume.UpdateDistanceFog // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcc120
	void UpdateCharacterLightRigAdjustments(struct URenderSettingsLibrary* Library); // Function RenderSettings.RenderSettingsVolume.UpdateCharacterLightRigAdjustments // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcc000
	void UpdateAll(); // Function RenderSettings.RenderSettingsVolume.UpdateAll // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcbfc0
	void SetPriority(float NewPriority); // Function RenderSettings.RenderSettingsVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcbea0
	void EditProbes(); // Function RenderSettings.RenderSettingsVolume.EditProbes // (Final|Native|Public) // @ game+0x13244f0
	void EditGroups(); // Function RenderSettings.RenderSettingsVolume.EditGroups // (Final|Native|Public) // @ game+0x13244f0
	void EditExposure(); // Function RenderSettings.RenderSettingsVolume.EditExposure // (Final|Native|Public) // @ game+0x13244f0
	void EditDistanceFog(); // Function RenderSettings.RenderSettingsVolume.EditDistanceFog // (Final|Native|Public) // @ game+0x13244f0
	void EditColorGrading(); // Function RenderSettings.RenderSettingsVolume.EditColorGrading // (Final|Native|Public) // @ game+0x13244f0
	void EditAll(); // Function RenderSettings.RenderSettingsVolume.EditAll // (Final|Native|Public) // @ game+0x13244f0
};

// Class RenderSettings.RenderSettingsPostProcessingVolume
// Size: 0x8c0 (Inherited: 0x280)
struct ARenderSettingsPostProcessingVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	struct FBlendDomain BlendDomain; // 0x288(0x38)
	float Priority; // 0x2c0(0x04)
	float BlendRadius; // 0x2c4(0x04)
	float BlendWeight; // 0x2c8(0x04)
	char bUnbounded : 1; // 0x2cc(0x01)
	char bEnabled : 1; // 0x2cc(0x01)
	char pad_2CC_2 : 6; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct FPostProcessSettings EnginePostProcessSettings; // 0x2d0(0x5f0)

	void Update(); // Function RenderSettings.RenderSettingsPostProcessingVolume.Update // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcbfa0
	void SetPriority(float NewPriority); // Function RenderSettings.RenderSettingsPostProcessingVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcbe20
};

// Class RenderSettings.RenderSettingsExposureVolume
// Size: 0x8d0 (Inherited: 0x8c0)
struct ARenderSettingsExposureVolume : ARenderSettingsPostProcessingVolume {
	struct FRenderSettingsPPExposureName Exposure; // 0x8c0(0x08)
	float ExposureTweak; // 0x8c8(0x04)
	bool bExposureTweak; // 0x8cc(0x01)
	char pad_8CD[0x3]; // 0x8cd(0x03)

	void EditExposure(); // Function RenderSettings.RenderSettingsExposureVolume.EditExposure // (Final|Native|Public) // @ game+0x13244f0
};

// Class RenderSettings.RenderSettingsProbeVolume
// Size: 0x8e0 (Inherited: 0x8c0)
struct ARenderSettingsProbeVolume : ARenderSettingsPostProcessingVolume {
	struct FRenderSettingsPPProbesName Probes; // 0x8c0(0x08)
	struct FRenderSettingsPPProbesToneMapping ToneMappingOverride; // 0x8c8(0x10)
	char pad_8D8[0x8]; // 0x8d8(0x08)

	void EditProbes(); // Function RenderSettings.RenderSettingsProbeVolume.EditProbes // (Final|Native|Public) // @ game+0x13244f0
};

// Class RenderSettings.RenderSettingsExposureSpeedTransitionVolume
// Size: 0x8e0 (Inherited: 0x8c0)
struct ARenderSettingsExposureSpeedTransitionVolume : ARenderSettingsPostProcessingVolume {
	struct UCurveFloat* BlendCurve; // 0x8c0(0x08)
	float SpeedUp; // 0x8c8(0x04)
	float SpeedDown; // 0x8cc(0x04)
	char bUseFilteredIndoors : 1; // 0x8d0(0x01)
	char bOverride_SpeedUp : 1; // 0x8d0(0x01)
	char bOverride_SpeedDown : 1; // 0x8d0(0x01)
	char pad_8D0_3 : 5; // 0x8d0(0x01)
	char pad_8D1[0xf]; // 0x8d1(0x0f)
};

// Class RenderSettings.RenderSettingsEmissiveAdapatationVolumeBase
// Size: 0x2d8 (Inherited: 0x280)
struct ARenderSettingsEmissiveAdapatationVolumeBase : AVolume {
	char pad_280[0x10]; // 0x280(0x10)
	struct FBlendDomain BlendDomain; // 0x290(0x38)
	float Priority; // 0x2c8(0x04)
	float BlendRadius; // 0x2cc(0x04)
	float BlendWeight; // 0x2d0(0x04)
	char bUnbounded : 1; // 0x2d4(0x01)
	char bEnabled : 1; // 0x2d4(0x01)
	char pad_2D4_2 : 6; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)

	void SetPriority(float NewPriority); // Function RenderSettings.RenderSettingsEmissiveAdapatationVolumeBase.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1bcbda0
};

// Class RenderSettings.RenderSettingsEmissiveAdapatationVolume
// Size: 0x368 (Inherited: 0x2d8)
struct ARenderSettingsEmissiveAdapatationVolume : ARenderSettingsEmissiveAdapatationVolumeBase {
	struct FRenderSettingsEmissiveAdaptation EmissiveAdaptation; // 0x2d8(0x90)
};

// Class RenderSettings.RenderSettingsEmissiveAdapatationExtrasVolume
// Size: 0x318 (Inherited: 0x2d8)
struct ARenderSettingsEmissiveAdapatationExtrasVolume : ARenderSettingsEmissiveAdapatationVolumeBase {
	struct FExposureExpressionsExtras EmissiveAdaptationExtras; // 0x2d8(0x40)
};

// Class RenderSettings.SimpleUpdatePumpComponent
// Size: 0xe0 (Inherited: 0xc8)
struct USimpleUpdatePumpComponent : UActorComponent {
	enum class ESimpleUpdatePumpComponentMode SimpleUpdatePumpMode; // 0xc8(0x01)
	bool bSuspend; // 0xc9(0x01)
	char pad_CA[0x16]; // 0xca(0x16)
};

