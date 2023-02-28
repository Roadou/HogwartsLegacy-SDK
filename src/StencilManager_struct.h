// Enum StencilManager.ELocalStencilMaterialMode
enum class ELocalStencilMaterialMode : uint8 {
	Default = 0,
	DefaultMID = 1,
	Custom = 2,
	CustomMID = 3,
	ELocalStencilMaterialMode_MAX = 4
};

// Enum StencilManager.ELocalStencilBoundsMethod
enum class ELocalStencilBoundsMethod : uint8 {
	Default = 0,
	Local = 1,
	World = 2,
	ELocalStencilBoundsMethod_MAX = 3
};

// Enum StencilManager.ELocalStencilBoundsHintMode
enum class ELocalStencilBoundsHintMode : uint8 {
	Override = 0,
	Maximum = 1,
	Minimum = 2,
	ELocalStencilBoundsHintMode_MAX = 3
};

// Enum StencilManager.EStencilValueRenderCustomDepthRule
enum class EStencilValueRenderCustomDepthRule : uint8 {
	DoNotStencil = 0,
	OnlyStencil = 1,
	EStencilValueRenderCustomDepthRule_MAX = 2
};

// Enum StencilManager.EStencilTagRule
enum class EStencilTagRule : uint8 {
	DoNotStencil = 0,
	StencilOnly = 1,
	ConditionalStencil = 2,
	ShowOnStencil = 3,
	HideOnStencil = 4,
	EStencilTagRule_MAX = 5
};

// Enum StencilManager.EStencilRulesTypeMode
enum class EStencilRulesTypeMode : uint8 {
	Default = 0,
	OnlySwap = 1,
	NeverSwap = 2,
	EStencilRulesTypeMode_MAX = 3
};

// Enum StencilManager.EStencilFilterPrimitiveMatchMode
enum class EStencilFilterPrimitiveMatchMode : uint8 {
	Exact = 0,
	SubStringCaseSensitve = 1,
	SubStringIgnoreCase = 2,
	EStencilFilterPrimitiveMatchMode_MAX = 3
};

// Enum StencilManager.EStencilRule
enum class EStencilRule : uint8 {
	DoNotStencil = 0,
	OnlyStencil = 1,
	EStencilRule_MAX = 2
};

// Enum StencilManager.EStencilManagerPreferredEffect
enum class EStencilManagerPreferredEffect : uint8 {
	LocalDepthFX = 0,
	SkinFX = 1,
	EStencilManagerPreferredEffect_MAX = 2
};

// Enum StencilManager.EStencilManagerEffectPriority
enum class EStencilManagerEffectPriority : uint8 {
	AlwaysInterrupt = 0,
	Low = 1,
	BelowNormal = 2,
	Normal = 3,
	AboveNormal = 4,
	High = 5,
	VeryHigh = 6,
	NeverInterrupt = 7,
	EStencilManagerEffectPriority_MAX = 8
};

// ScriptStruct StencilManager.LocalStencilEffect
// Size: 0x1d0 (Inherited: 0x00)
struct FLocalStencilEffect {
	int32_t StencilValue; // 0x00(0x04)
	struct FLocalStencilEffectRotatingStencilValue RotatingStencilValue; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FStencilRules StencilRules; // 0x10(0x98)
	struct ULocalStencilComponentBase* OverrideClass; // 0xa8(0x08)
	struct UMaterialInterface* OverrideMaterial; // 0xb0(0x08)
	float FadeInTime; // 0xb8(0x04)
	float FadeOutTime; // 0xbc(0x04)
	struct FLocalStencilEffectParams Params; // 0xc0(0xf0)
	float MeshScaleFactor; // 0x1b0(0x04)
	struct FVector MeshInflateBounds; // 0x1b4(0x0c)
	enum class ELocalStencilBoundsMethod BoundsMethod; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	struct FName AttachComponentTag; // 0x1c4(0x08)
	char bRenderCustomDepth : 1; // 0x1cc(0x01)
	char bForcePlayerCustomDepth : 1; // 0x1cc(0x01)
	char bUseRotatingStencilValue : 1; // 0x1cc(0x01)
	char pad_1CC_3 : 5; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
};

// ScriptStruct StencilManager.LocalStencilEffectParams
// Size: 0xf0 (Inherited: 0x00)
struct FLocalStencilEffectParams {
	struct FName StencilValueParameter; // 0x00(0x08)
	struct FName FadeAlphaParameter; // 0x08(0x08)
	struct FLocalStencilEffectScalar OutlineRadius; // 0x10(0x0c)
	struct FLocalStencilEffectColor OutlineColor; // 0x1c(0x18)
	struct FLocalStencilEffectScalar OutlineColorAlpha; // 0x34(0x0c)
	struct FLocalStencilEffectScalar OutlineColorAlphaPower; // 0x40(0x0c)
	struct FLocalStencilEffectColor FillColor; // 0x4c(0x18)
	struct FLocalStencilEffectScalar FillColorAlpha; // 0x64(0x0c)
	struct FLocalStencilEffectScalar FinalIntensityMod; // 0x70(0x0c)
	struct FLocalStencilEffectScalar ObjectBottomFadeStart; // 0x7c(0x0c)
	struct FLocalStencilEffectScalar ObjectBottomFadeFull; // 0x88(0x0c)
	struct FLocalStencilEffectScalar ObjectBottomFadePower; // 0x94(0x0c)
	struct FName ObjectMinMaxHeightParameter; // 0xa0(0x08)
	struct TArray<struct FLocalStencilEffectScalar> ExtraScalars; // 0xa8(0x10)
	struct TArray<struct FLocalStencilEffectColor> ExtraColors; // 0xb8(0x10)
	struct TArray<struct FLocalStencilEffectScalarCurve> ExtraScalarCurves; // 0xc8(0x10)
	struct TArray<struct FLocalStencilEffectColorCurve> ExtraColorCurves; // 0xd8(0x10)
	char bSetStencilValue : 1; // 0xe8(0x01)
	char bSetFadeAlphaParameter : 1; // 0xe8(0x01)
	char bSetOutlineRadius : 1; // 0xe8(0x01)
	char bSetOutlineColor : 1; // 0xe8(0x01)
	char bSetOutlineAlpha : 1; // 0xe8(0x01)
	char bSetOutlineAlphaPower : 1; // 0xe8(0x01)
	char bSetFillColor : 1; // 0xe8(0x01)
	char bSetFillAlpha : 1; // 0xe8(0x01)
	char bSetFinalIntensityMod : 1; // 0xe9(0x01)
	char bSetObjectBottomFadeStart : 1; // 0xe9(0x01)
	char bSetObjectBottomFadeFull : 1; // 0xe9(0x01)
	char bSetExtraScalars : 1; // 0xe9(0x01)
	char bSetExtraColors : 1; // 0xe9(0x01)
	char bSetExtraScalarCurves : 1; // 0xe9(0x01)
	char bSetExtraColorCurves : 1; // 0xe9(0x01)
	char bSetObjectBottomFadePower : 1; // 0xe9(0x01)
	char bSetObjectMinMaxHeightParameter : 1; // 0xea(0x01)
	char pad_EA_1 : 7; // 0xea(0x01)
	char pad_EB[0x5]; // 0xeb(0x05)
};

// ScriptStruct StencilManager.LocalStencilEffectMaterialParameter
// Size: 0x08 (Inherited: 0x00)
struct FLocalStencilEffectMaterialParameter {
	struct FName MaterialParameter; // 0x00(0x08)
};

// ScriptStruct StencilManager.LocalStencilEffectColorCurve
// Size: 0x10 (Inherited: 0x08)
struct FLocalStencilEffectColorCurve : FLocalStencilEffectMaterialParameter {
	struct UCurveLinearColor* Curve; // 0x08(0x08)
};

// ScriptStruct StencilManager.LocalStencilEffectScalarCurve
// Size: 0x10 (Inherited: 0x08)
struct FLocalStencilEffectScalarCurve : FLocalStencilEffectMaterialParameter {
	struct UCurveFloat* Curve; // 0x08(0x08)
};

// ScriptStruct StencilManager.LocalStencilEffectColor
// Size: 0x18 (Inherited: 0x08)
struct FLocalStencilEffectColor : FLocalStencilEffectMaterialParameter {
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct StencilManager.LocalStencilEffectScalar
// Size: 0x0c (Inherited: 0x08)
struct FLocalStencilEffectScalar : FLocalStencilEffectMaterialParameter {
	float Value; // 0x08(0x04)
};

// ScriptStruct StencilManager.StencilRules
// Size: 0x98 (Inherited: 0x00)
struct FStencilRules {
	struct FStencilPrimitiveTagRules TagFilter; // 0x00(0x50)
	struct FStencilPrimitiveTypeRules TypeFilter; // 0x50(0x09)
	char pad_59[0x7]; // 0x59(0x07)
	struct FStencilPrimitiveFilter PrimitiveFilter; // 0x60(0x18)
	struct FStencilPrimitiveClassFilter PrimitiveClassFilter; // 0x78(0x20)
};

// ScriptStruct StencilManager.StencilPrimitiveClassFilter
// Size: 0x20 (Inherited: 0x00)
struct FStencilPrimitiveClassFilter {
	struct TArray<struct TSoftClassPtr<UObject>> PrimitiveClasses; // 0x00(0x10)
	enum class EStencilRule Rule; // 0x10(0x01)
	bool bIncludeSubclasses; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FName IgnoreTag; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct StencilManager.StencilPrimitiveFilter
// Size: 0x18 (Inherited: 0x00)
struct FStencilPrimitiveFilter {
	struct TArray<struct FName> Primitives; // 0x00(0x10)
	enum class EStencilRule Rule; // 0x10(0x01)
	enum class EStencilFilterPrimitiveMatchMode MatchMode; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct StencilManager.StencilPrimitiveTypeRules
// Size: 0x09 (Inherited: 0x00)
struct FStencilPrimitiveTypeRules {
	enum class EStencilRulesTypeMode Static; // 0x00(0x01)
	enum class EStencilRulesTypeMode Skeletal; // 0x01(0x01)
	enum class EStencilRulesTypeMode Instanced; // 0x02(0x01)
	enum class EStencilRulesTypeMode Spline; // 0x03(0x01)
	enum class EStencilRulesTypeMode Moveable; // 0x04(0x01)
	enum class EStencilRulesTypeMode Stationary; // 0x05(0x01)
	enum class EStencilRulesTypeMode ReceivesDecals; // 0x06(0x01)
	enum class EStencilRulesTypeMode ReceivesWeatherDecals; // 0x07(0x01)
	enum class EStencilRulesTypeMode RenderCustomDepth; // 0x08(0x01)
};

// ScriptStruct StencilManager.StencilPrimitiveTagRules
// Size: 0x50 (Inherited: 0x00)
struct FStencilPrimitiveTagRules {
	struct TArray<struct FName> DoNotStencil; // 0x00(0x10)
	struct TArray<struct FName> StencilOnly; // 0x10(0x10)
	struct TArray<struct FName> ConditionalStencil; // 0x20(0x10)
	struct TArray<struct FName> ShowOnStencil; // 0x30(0x10)
	struct TArray<struct FName> HideOnStencil; // 0x40(0x10)
};

// ScriptStruct StencilManager.LocalStencilEffectRotatingStencilValue
// Size: 0x08 (Inherited: 0x00)
struct FLocalStencilEffectRotatingStencilValue {
	int32_t StencilValueMin; // 0x00(0x04)
	int32_t StencilValueMax; // 0x04(0x04)
};

// ScriptStruct StencilManager.LocalStencilEffectActorOverrideList
// Size: 0x18 (Inherited: 0x00)
struct FLocalStencilEffectActorOverrideList {
	struct FStencilManagerEffectName Effect; // 0x00(0x08)
	struct TArray<struct FLocalStencilEffectActorOverride> ActorOverrides; // 0x08(0x10)
};

// ScriptStruct StencilManager.LocalStencilEffectActorOverrideParameters
// Size: 0x1c8 (Inherited: 0xf0)
struct FLocalStencilEffectActorOverrideParameters : FLocalStencilEffectParams {
	struct ULocalStencilComponentBase* OverrideClass; // 0xf0(0x08)
	struct UMaterialInterface* OverrideMaterial; // 0xf8(0x08)
	float FadeInTime; // 0x100(0x04)
	float FadeOutTime; // 0x104(0x04)
	float MeshScaleFactor; // 0x108(0x04)
	struct FVector MeshInflateBounds; // 0x10c(0x0c)
	enum class ELocalStencilBoundsMethod BoundsMethod; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	struct FName AttachComponentTag; // 0x11c(0x08)
	char pad_124[0x4]; // 0x124(0x04)
	struct FStencilPrimitiveTagRules TagFilter; // 0x128(0x50)
	struct FStencilPrimitiveTypeRules TypeFilter; // 0x178(0x09)
	char pad_181[0x7]; // 0x181(0x07)
	struct FStencilPrimitiveFilter PrimitiveFilter; // 0x188(0x18)
	struct FStencilPrimitiveClassFilter PrimitiveClassFilter; // 0x1a0(0x20)
	char bForcePlayerCustomDepth : 1; // 0x1c0(0x01)
	char bOverride_FadeInTime : 1; // 0x1c0(0x01)
	char bOverride_FadeOutTime : 1; // 0x1c0(0x01)
	char bOverride_MeshScaleFactor : 1; // 0x1c0(0x01)
	char bOverride_TagFilter : 1; // 0x1c0(0x01)
	char bOverride_TypeFilter : 1; // 0x1c0(0x01)
	char bOverride_PrimitiveFilter : 1; // 0x1c0(0x01)
	char bOverride_PrimitiveClassFilter : 1; // 0x1c0(0x01)
	char bOverride_MeshInflateBounds : 1; // 0x1c1(0x01)
	char bOverride_BoundsMethod : 1; // 0x1c1(0x01)
	char bOverride_AttachComponentTag : 1; // 0x1c1(0x01)
	char bOverride_bForcePlayerCustomDepth : 1; // 0x1c1(0x01)
	char pad_1C1_4 : 4; // 0x1c1(0x01)
	char pad_1C2[0x6]; // 0x1c2(0x06)
};

// ScriptStruct StencilManager.LocalStencilEffectActorOverride
// Size: 0x1d0 (Inherited: 0x1c8)
struct FLocalStencilEffectActorOverride : FLocalStencilEffectActorOverrideParameters {
	struct UStencilManagerMatchActor* Expression; // 0x1c8(0x08)
};

// ScriptStruct StencilManager.StencilManagerEffectName
// Size: 0x08 (Inherited: 0x00)
struct FStencilManagerEffectName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct StencilManager.LocalStencilEffectMeshBase
// Size: 0x28 (Inherited: 0x00)
struct FLocalStencilEffectMeshBase {
	struct UStaticMeshComponent* MeshComponent; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0x08(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x18(0x10)
};

// ScriptStruct StencilManager.LocalStencilEffectMesh
// Size: 0x60 (Inherited: 0x28)
struct FLocalStencilEffectMesh : FLocalStencilEffectMeshBase {
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform LastTransform; // 0x30(0x30)
};

// ScriptStruct StencilManager.LocalStencilEffectMeshAttached
// Size: 0x30 (Inherited: 0x28)
struct FLocalStencilEffectMeshAttached : FLocalStencilEffectMeshBase {
	struct TWeakObjectPtr<struct USceneComponent> ParentComponent; // 0x28(0x08)
};

// ScriptStruct StencilManager.StencilManagerGroupName
// Size: 0x08 (Inherited: 0x00)
struct FStencilManagerGroupName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct StencilManager.StencilManagerEnableInterfaceList
// Size: 0x10 (Inherited: 0x00)
struct FStencilManagerEnableInterfaceList {
	struct TArray<struct TWeakObjectPtr<struct UObject>> Interfaces; // 0x00(0x10)
};

// ScriptStruct StencilManager.SavePrimitiveRenderCustomDepth
// Size: 0x08 (Inherited: 0x00)
struct FSavePrimitiveRenderCustomDepth {
	uint32_t StencilValue; // 0x00(0x04)
	char bRenderCustomDepth : 1; // 0x04(0x01)
	char bManageVisibility : 1; // 0x04(0x01)
	char bVisible : 1; // 0x04(0x01)
	char pad_4_3 : 5; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct StencilManager.SavePrimitiveRenderCustomDepthOwner
// Size: 0x10 (Inherited: 0x08)
struct FSavePrimitiveRenderCustomDepthOwner : FSavePrimitiveRenderCustomDepth {
	struct TWeakObjectPtr<struct UObject> Owner; // 0x08(0x08)
};

// ScriptStruct StencilManager.SaveAndOverridePrimitiveRenderCustomDepthOwner
// Size: 0x18 (Inherited: 0x10)
struct FSaveAndOverridePrimitiveRenderCustomDepthOwner : FSavePrimitiveRenderCustomDepthOwner {
	uint32_t StencilValueOverride; // 0x10(0x04)
	char bRenderCustomDepthOverride : 1; // 0x14(0x01)
	char bOverridestencilValue : 1; // 0x14(0x01)
	char bOverrideRenderCustomDepth : 1; // 0x14(0x01)
	char pad_14_3 : 5; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct StencilManager.StencilValueRenderCustomDepth
// Size: 0x08 (Inherited: 0x00)
struct FStencilValueRenderCustomDepth {
	int32_t StencilValue; // 0x00(0x04)
	bool bRenderCustomDepth; // 0x04(0x01)
	bool bOverridestencilValue; // 0x05(0x01)
	bool bOverrideRenderCustomDepth; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
};

// ScriptStruct StencilManager.StencilValueRenderCustomDepthFilter
// Size: 0x18 (Inherited: 0x00)
struct FStencilValueRenderCustomDepthFilter {
	struct TArray<struct FName> Tags; // 0x00(0x10)
	enum class EStencilValueRenderCustomDepthRule Rule; // 0x10(0x01)
	bool bExcludeFX; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct StencilManager.StencilManagerMPCGlobals
// Size: 0x0c (Inherited: 0x00)
struct FStencilManagerMPCGlobals {
	float GlobalBrightnessMod; // 0x00(0x04)
	float OutdoorsDaytimeBoost_DEPRICATED; // 0x04(0x04)
	bool bPlayerNearFadeDisable; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct StencilManager.StencilManagerEffectInfoOverride
// Size: 0x218 (Inherited: 0x00)
struct FStencilManagerEffectInfoOverride {
	struct FStencilManagerEffectName Effect; // 0x00(0x08)
	struct FStencilManagerGroupName GroupOverride; // 0x08(0x08)
	enum class EStencilManagerPreferredEffect PreferredEffect; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FLocalStencilEffect LocalDepthFX; // 0x18(0x1d0)
	struct FStencilManagerSkinFX SkinFX; // 0x1e8(0x28)
	bool bUseGroupOverride; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
};

// ScriptStruct StencilManager.StencilManagerSkinFX
// Size: 0x28 (Inherited: 0x00)
struct FStencilManagerSkinFX {
	struct ASkinFXDefinition* SkinFX; // 0x00(0x08)
	struct FStencilManagerSkinFXColor ForceEmissiveColor; // 0x08(0x18)
	bool bForceEmissive; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct StencilManager.StencilManagerSkinFXColor
// Size: 0x18 (Inherited: 0x00)
struct FStencilManagerSkinFXColor {
	struct FName MaterialParameter; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct StencilManager.StencilManagerEffectInfoAccessibilityOverride
// Size: 0x220 (Inherited: 0x218)
struct FStencilManagerEffectInfoAccessibilityOverride : FStencilManagerEffectInfoOverride {
	int32_t HighContrastMode; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
};

// ScriptStruct StencilManager.StencilManagerEffectInfoActorOverrides
// Size: 0x18 (Inherited: 0x00)
struct FStencilManagerEffectInfoActorOverrides {
	struct UStencilManagerMatchActor* Expression; // 0x00(0x08)
	struct TArray<struct FStencilManagerEffectInfoOverride> EffectOverrides; // 0x08(0x10)
};

// ScriptStruct StencilManager.StencilManagerEffectInfo
// Size: 0x218 (Inherited: 0x00)
struct FStencilManagerEffectInfo {
	struct FName Name; // 0x00(0x08)
	struct FStencilManagerGroupName Group; // 0x08(0x08)
	uint32_t LegacyStencilValue; // 0x10(0x04)
	enum class EStencilManagerEffectPriority Priority; // 0x14(0x01)
	enum class EStencilManagerPreferredEffect PreferredEffect; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FLocalStencilEffect LocalDepthFX; // 0x18(0x1d0)
	struct FStencilManagerSkinFX SkinFX; // 0x1e8(0x28)
	bool bDisableOverrides; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
};

// ScriptStruct StencilManager.StencilManagerCutsomDepthFX
// Size: 0xa8 (Inherited: 0x00)
struct FStencilManagerCutsomDepthFX {
	uint32_t StencilValue; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FStencilRules StencilRules; // 0x08(0x98)
	bool bRenderCustomDepth; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct StencilManager.StencilManagerTrackActor
// Size: 0x10 (Inherited: 0x00)
struct FStencilManagerTrackActor {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Effect; // 0x08(0x08)
};

// ScriptStruct StencilManager.StencilManagerTrackActorSkinFX
// Size: 0x40 (Inherited: 0x10)
struct FStencilManagerTrackActorSkinFX : FStencilManagerTrackActor {
	struct FStencilManagerSkinFX SkinFX; // 0x10(0x28)
	struct TWeakObjectPtr<struct USkinFXComponent> SkinFXComponent; // 0x38(0x08)
};

// ScriptStruct StencilManager.StencilManagerTrackActorStencilBase
// Size: 0x60 (Inherited: 0x10)
struct FStencilManagerTrackActorStencilBase : FStencilManagerTrackActor {
	struct TMap<struct TWeakObjectPtr<struct UPrimitiveComponent>, struct FSavePrimitiveRenderCustomDepth> OriginalValues; // 0x10(0x50)
};

// ScriptStruct StencilManager.StencilManagerTrackActorLocalStencil
// Size: 0x238 (Inherited: 0x60)
struct FStencilManagerTrackActorLocalStencil : FStencilManagerTrackActorStencilBase {
	struct FLocalStencilEffect DepthFX; // 0x60(0x1d0)
	struct ULocalStencilComponentBase* LocalStencilComponent; // 0x230(0x08)
};

// ScriptStruct StencilManager.StencilManagerTrackActorStencil
// Size: 0x108 (Inherited: 0x60)
struct FStencilManagerTrackActorStencil : FStencilManagerTrackActorStencilBase {
	struct FStencilManagerCutsomDepthFX DepthFX; // 0x60(0xa8)
};

