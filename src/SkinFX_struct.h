// Enum SkinFX.ESkinFXDelegateEvent
enum class ESkinFXDelegateEvent : uint8 {
	Event_Start = 0,
	Event_Restart = 1,
	Event_Finish = 2,
	Envelope_StartAttack = 3,
	Envelope_FirstEnterSustain = 4,
	Envelope_LoopSustain = 5,
	Envelope_BeginRelease = 6,
	Envelope_EndRelease = 7,
	EndCalled_Immediately = 8,
	EndCalled_JumpToRelease = 9,
	EndCalled_EndSustainHold = 10,
	ESkinFXDelegateEvent_MAX = 11
};

// Enum SkinFX.ESkinFXAutoTriggerDelegateEvent
enum class ESkinFXAutoTriggerDelegateEvent : uint8 {
	Event_Start = 0,
	Event_Stop = 1,
	Event_MAX = 2
};

// Enum SkinFX.ENiagaraMaterialDriverParameterType
enum class ENiagaraMaterialDriverParameterType : uint8 {
	Scalar = 0,
	Vector2 = 1,
	Vector = 2,
	Vector4 = 3,
	LinearColor = 4,
	Quaternion = 5,
	QuaternionForward = 6,
	QuaternionUp = 7,
	QuaternionRight = 8,
	UniformScale = 9,
	RelativePosition = 10,
	DirectionTo = 11,
	ENiagaraMaterialDriverParameterType_MAX = 12
};

// Enum SkinFX.ESkinFXEffectTimeSource
enum class ESkinFXEffectTimeSource : uint8 {
	Actor = 0,
	World = 1,
	ESkinFXEffectTimeSource_MAX = 2
};

// Enum SkinFX.ESkinFXEffectPriority
enum class ESkinFXEffectPriority : uint8 {
	NeverInterrupt = 0,
	VeryHigh = 1,
	High = 2,
	Normal = 3,
	Low = 4,
	AlwaysInterrupt = 5,
	ESkinFXEffectPriority_MAX = 6
};

// Enum SkinFX.ESkinFXEffectSwapType
enum class ESkinFXEffectSwapType : uint8 {
	UsePermutedMaterials = 0,
	InPlaceMIDs = 1,
	MaterialOverride = 2,
	ESkinFXEffectSwapType_MAX = 3
};

// Enum SkinFX.ESkinFXComponentAutoStartState
enum class ESkinFXComponentAutoStartState : uint8 {
	WaitingToStart = 0,
	Running = 1,
	Done = 2,
	ESkinFXComponentAutoStartState_MAX = 3
};

// Enum SkinFX.ESkinFXEnvelopeState
enum class ESkinFXEnvelopeState : uint8 {
	Done = 0,
	Attack = 1,
	Sustain = 2,
	Release = 3,
	InfiniteSustain = 4,
	ESkinFXEnvelopeState_MAX = 5
};

// Enum SkinFX.ESkinFXSocketOutputAlphaPack
enum class ESkinFXSocketOutputAlphaPack : uint8 {
	SFXSAP_NONE = 0,
	SFXSAP_SPEED = 1,
	SFXSAP_SCALE = 2,
	SFXSAP_MAX = 3
};

// Enum SkinFX.ESkinFXSocketOutput
enum class ESkinFXSocketOutput : uint8 {
	SFXS_POSITION = 0,
	SFXS_VELOCITY = 1,
	SFXS_VELOCITYDIR = 2,
	SFXS_DIR = 3,
	SFXS_UP = 4,
	SFXS_RIGHT = 5,
	SFXS_SCALE3D = 6,
	SFXS_SCALARSPEED = 7,
	SFXS_SCALARSCALEU = 8,
	SFXS_MAX = 9
};

// Enum SkinFX.ESkinFXFunctionModOp
enum class ESkinFXFunctionModOp : uint8 {
	Add = 0,
	Subtract = 1,
	Multiply = 2,
	Divide = 3,
	Mod = 4,
	Power = 5,
	Min = 6,
	Max = 7
};

// Enum SkinFX.ESkinFXColorConvert
enum class ESkinFXColorConvert : uint8 {
	None = 0,
	CLAMP = 1,
	QUANTIZE = 2,
	FROMHSB = 3,
	XYZ = 4,
	XYZW = 5,
	XY = 6,
	XYZWPAIR = 7,
	PYRFORWARD = 8,
	PYRUP = 9,
	PYRRIGHT = 10,
	RANGLE = 11,
	RGANGLE = 12,
	ESkinFXColorConvert_MAX = 13
};

// Enum SkinFX.ESkinFXEnvelopeColorMod
enum class ESkinFXEnvelopeColorMod : uint8 {
	RGBONLY = 0,
	ALPHAONLY = 1,
	ALL = 2,
	ESkinFXEnvelopeColorMod_MAX = 3
};

// Enum SkinFX.ESkinFXEffectEndStyle
enum class ESkinFXEffectEndStyle : uint8 {
	Immediately = 0,
	JumpToRelease = 1,
	EndSustainHold = 2,
	ESkinFXEffectEndStyle_MAX = 3
};

// Enum SkinFX.ESkinFXLocatorListPositionalSourceType
enum class ESkinFXLocatorListPositionalSourceType : uint8 {
	Bone = 0,
	Socket = 1,
	Impact = 2,
	ESkinFXLocatorListPositionalSourceType_MAX = 3
};

// Enum SkinFX.ESkinFXPreviewComponentSwapType
enum class ESkinFXPreviewComponentSwapType : uint8 {
	Regular = 0,
	AnimateDirectly = 1,
	ESkinFXPreviewComponentSwapType_MAX = 2
};

// Enum SkinFX.ESkinFXPreviewType
enum class ESkinFXPreviewType : uint8 {
	StaticMesh = 0,
	SkeletalMesh = 1,
	ESkinFXPreviewType_MAX = 2
};

// Enum SkinFX.ESkinFXMaterialOverrideType
enum class ESkinFXMaterialOverrideType : uint8 {
	UseMeshMaterials = 0,
	UseSingleOverride = 1,
	MatchedIndexOverride = 2,
	ESkinFXMaterialOverrideType_MAX = 3
};

// ScriptStruct SkinFX.LocatorTracker
// Size: 0x08 (Inherited: 0x00)
struct FLocatorTracker {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SkinFX.RefPoseTracker
// Size: 0x50 (Inherited: 0x08)
struct FRefPoseTracker : FLocatorTracker {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform ReferenceTransform; // 0x10(0x30)
	struct FName BoneName; // 0x40(0x08)
	int32_t BoneIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct SkinFX.ActorTracker
// Size: 0x10 (Inherited: 0x08)
struct FActorTracker : FLocatorTracker {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x08(0x08)
};

// ScriptStruct SkinFX.BoneTracker
// Size: 0x28 (Inherited: 0x10)
struct FBoneTracker : FActorTracker {
	struct TWeakObjectPtr<struct USkinnedMeshComponent> BoneComponent; // 0x10(0x08)
	struct FName BoneName; // 0x18(0x08)
	int32_t BoneIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct SkinFX.SocketTracker
// Size: 0x20 (Inherited: 0x10)
struct FSocketTracker : FActorTracker {
	struct TWeakObjectPtr<struct USceneComponent> SocketComponent; // 0x10(0x08)
	struct FName SocketName; // 0x18(0x08)
};

// ScriptStruct SkinFX.ComponentTracker
// Size: 0x18 (Inherited: 0x10)
struct FComponentTracker : FActorTracker {
	struct TWeakObjectPtr<struct USceneComponent> SceneComponent; // 0x10(0x08)
};

// ScriptStruct SkinFX.AbsoluteTracker
// Size: 0x50 (Inherited: 0x08)
struct FAbsoluteTracker : FLocatorTracker {
	char pad_8[0x48]; // 0x08(0x48)
};

// ScriptStruct SkinFX.NiagaraMaterialDriverState
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraMaterialDriverState {
	struct UNiagaraComponent* NiagaraComponent; // 0x00(0x08)
	struct FName EmitterName; // 0x08(0x08)
	float Age; // 0x10(0x04)
	bool bOwnsComponent; // 0x14(0x01)
	bool bSystemFinished; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct SkinFX.NiagaraMaterialDriverSetup
// Size: 0x78 (Inherited: 0x00)
struct FNiagaraMaterialDriverSetup {
	struct UNiagaraSystem* NiagaraSystem; // 0x00(0x08)
	struct TSoftObjectPtr<UNiagaraSystem> NiagaraSystemAsset; // 0x08(0x28)
	struct FName UseSpecificEmitter; // 0x30(0x08)
	struct TArray<struct FNiagaraMaterialDriverParameter> Parameters; // 0x38(0x10)
	int32_t MaxParameterParticles; // 0x48(0x04)
	struct FNiagaraMaterialDriverAttachSetup Attach; // 0x4c(0x20)
	bool bAutoDestroy; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float InitialDelay; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct SkinFX.NiagaraMaterialDriverAttachSetup
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraMaterialDriverAttachSetup {
	struct FName Point; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
};

// ScriptStruct SkinFX.NiagaraMaterialDriverParameter
// Size: 0x1c (Inherited: 0x00)
struct FNiagaraMaterialDriverParameter {
	struct FName NiagaraVariableName; // 0x00(0x08)
	enum class ENiagaraMaterialDriverParameterType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName MaterialParameter; // 0x0c(0x08)
	float Scale; // 0x14(0x04)
	bool bEnabled; // 0x18(0x01)
	bool bScale; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct SkinFX.SkinFXAutoTriggerDriverTracker
// Size: 0x60 (Inherited: 0x00)
struct FSkinFXAutoTriggerDriverTracker {
	struct USkinFXAutoTriggerDriver* Driver; // 0x00(0x08)
	struct FSkinFXAutoTriggerEffectInfo EffectInfo; // 0x08(0x40)
	float Priority; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UNiagaraComponent* NiagaraComponent; // 0x50(0x08)
	char bSignalledActive : 1; // 0x58(0x01)
	char bSignalledInactive : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct SkinFX.SkinFXAutoTriggerEffectInfo
// Size: 0x40 (Inherited: 0x00)
struct FSkinFXAutoTriggerEffectInfo {
	struct FSkinFXAutoTriggeSkinFXInfo SkinFX; // 0x00(0x08)
	struct FSkinFXAutoTriggeNiagaraInfo NiagaraFX; // 0x08(0x38)
};

// ScriptStruct SkinFX.SkinFXAutoTriggeNiagaraInfo
// Size: 0x38 (Inherited: 0x00)
struct FSkinFXAutoTriggeNiagaraInfo {
	struct UNiagaraSystem* NiagaraSystem; // 0x00(0x08)
	struct FName AttachPointName; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct FVector Scale; // 0x28(0x0c)
	enum class EAttachLocation LocationType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct SkinFX.SkinFXAutoTriggeSkinFXInfo
// Size: 0x08 (Inherited: 0x00)
struct FSkinFXAutoTriggeSkinFXInfo {
	struct ASkinFXDefinition* SkinFX; // 0x00(0x08)
};

// ScriptStruct SkinFX.SkinFXAutoTriggerDriverEffectInfo
// Size: 0x98 (Inherited: 0x40)
struct FSkinFXAutoTriggerDriverEffectInfo : FSkinFXAutoTriggerEffectInfo {
	float Priority; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FMaterialSwapParameters Parameters; // 0x48(0x50)
};

// ScriptStruct SkinFX.SkinFXRunningEffect
// Size: 0x20 (Inherited: 0x00)
struct FSkinFXRunningEffect {
	struct FSkinFXEffectDefinition EffectDefinition; // 0x00(0x18)
	struct ASkinFXDefinitionGraph* BlueprintGraph; // 0x18(0x08)
};

// ScriptStruct SkinFX.SkinFXEffectDefinition
// Size: 0x18 (Inherited: 0x00)
struct FSkinFXEffectDefinition {
	struct FName Name; // 0x00(0x08)
	struct UObject* Blueprint; // 0x08(0x08)
	struct ASkinFXDefinition* Effect; // 0x10(0x08)
};

// ScriptStruct SkinFX.SkinFXStandardParamsInitial
// Size: 0x60 (Inherited: 0x00)
struct FSkinFXStandardParamsInitial {
	struct FName StartTime; // 0x00(0x08)
	struct FName RandomSeed; // 0x08(0x08)
	struct FName RandomUnitVector; // 0x10(0x08)
	struct FSkinFXStandardParamsBounds Bounds; // 0x18(0x44)
	char bStartTime : 1; // 0x5c(0x01)
	char bRandomSeed : 1; // 0x5c(0x01)
	char bRandomUnitVector : 1; // 0x5c(0x01)
	char pad_5C_3 : 5; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct SkinFX.SkinFXStandardParamsBounds
// Size: 0x44 (Inherited: 0x00)
struct FSkinFXStandardParamsBounds {
	struct FName Sphere; // 0x00(0x08)
	struct FName BoxMin; // 0x08(0x08)
	struct FName BoxMax; // 0x10(0x08)
	struct FName BoxCenter; // 0x18(0x08)
	struct FName BoxExtent; // 0x20(0x08)
	struct FName ScreenSpaceBoxMinMax; // 0x28(0x08)
	struct FName ScreenSpaceBoxCenterExtent; // 0x30(0x08)
	struct FName ScreenSpaceBoundingCircle; // 0x38(0x08)
	char bSphere : 1; // 0x40(0x01)
	char bBoxMin : 1; // 0x40(0x01)
	char bBoxMax : 1; // 0x40(0x01)
	char bBoxCenter : 1; // 0x40(0x01)
	char bBoxExtent : 1; // 0x40(0x01)
	char bScreenSpaceBoxMinMax : 1; // 0x40(0x01)
	char bScreenSpaceBoxCenterExtent : 1; // 0x40(0x01)
	char bScreenSpaceBoundingCircle : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct SkinFX.SkinFXStandardParams
// Size: 0x78 (Inherited: 0x00)
struct FSkinFXStandardParams {
	struct FName Age; // 0x00(0x08)
	struct FName EnvelopeValue; // 0x08(0x08)
	struct FName EnvelopePhase; // 0x10(0x08)
	struct FName EnvelopeAttackPhase; // 0x18(0x08)
	struct FName EnvelopeSustainPhase; // 0x20(0x08)
	struct FName EnvelopeReleasePhase; // 0x28(0x08)
	struct FSkinFXStandardParamsBounds Bounds; // 0x30(0x44)
	char bAge : 1; // 0x74(0x01)
	char bEnvelopeValue : 1; // 0x74(0x01)
	char bEnvelopePhase : 1; // 0x74(0x01)
	char bEnvelopeAttackPhase : 1; // 0x74(0x01)
	char bEnvelopeSustainPhase : 1; // 0x74(0x01)
	char bEnvelopeReleasePhase : 1; // 0x74(0x01)
	char pad_74_6 : 2; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct SkinFX.SkinFXRunningEffectInstance
// Size: 0xab0 (Inherited: 0x00)
struct FSkinFXRunningEffectInstance {
	struct FSkinFXRunningEffect Effect; // 0x00(0x20)
	struct FSkinFXASREnvelopeState Envelope; // 0x20(0x44)
	char pad_64[0xc]; // 0x64(0x0c)
	struct FSkinFXParameterDriverContext DriverContext; // 0x70(0x850)
	struct UNiagaraMaterialSwapDriver* NiagaraDriver; // 0x8c0(0x08)
	struct UMaterialSwap* MaterialSwap; // 0x8c8(0x08)
	struct FMaterialSwapRules MaterialSwapRules; // 0x8d0(0xe0)
	struct FMaterialSwapParameters HistoryParameters; // 0x9b0(0x50)
	struct FMaterialSwapParameters CommitBlueprintParameters; // 0xa00(0x50)
	struct FMaterialSwapParameters StagedBlueprintParameters; // 0xa50(0x50)
	int32_t EventBroadcastMask; // 0xaa0(0x04)
	enum class ESkinFXEnvelopeState EnvelopeState; // 0xaa4(0x01)
	bool bEnvelopeStateValid; // 0xaa5(0x01)
	bool bHaveAppliedInitialParameters; // 0xaa6(0x01)
	char pad_AA7[0x9]; // 0xaa7(0x09)
};

// ScriptStruct SkinFX.SkinFXParameterDriverContext
// Size: 0x850 (Inherited: 0x00)
struct FSkinFXParameterDriverContext {
	struct UWorld* World; // 0x00(0x08)
	struct ASkinFXDefinition* Effect; // 0x08(0x08)
	struct USkinFXComponent* Component; // 0x10(0x08)
	struct AActor* Owner; // 0x18(0x08)
	char pad_20[0x820]; // 0x20(0x820)
	struct FSkinFXEffectEnd ForceEnd; // 0x840(0x02)
	bool bSignalledEnd; // 0x842(0x01)
	char pad_843[0xd]; // 0x843(0x0d)
};

// ScriptStruct SkinFX.SkinFXEffectEnd
// Size: 0x02 (Inherited: 0x00)
struct FSkinFXEffectEnd {
	enum class ESkinFXEffectEndStyle EndStyle; // 0x00(0x01)
	bool bEnd; // 0x01(0x01)
};

// ScriptStruct SkinFX.SkinFXASREnvelopeState
// Size: 0x44 (Inherited: 0x00)
struct FSkinFXASREnvelopeState {
	struct FSkinFXASREnvelope Envelope; // 0x00(0x2c)
	float Age; // 0x2c(0x04)
	float StateTime; // 0x30(0x04)
	enum class ESkinFXEnvelopeState State; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float CurveValue; // 0x38(0x04)
	float LinearValue; // 0x3c(0x04)
	bool bBreakHold; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct SkinFX.SkinFXASREnvelope
// Size: 0x2c (Inherited: 0x00)
struct FSkinFXASREnvelope {
	float AttackDuration; // 0x00(0x04)
	struct FSkinFXEnvelopeEase AttackEase; // 0x04(0x0c)
	float SustainDuration; // 0x10(0x04)
	bool bSustainHold; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float ReleaseDuration; // 0x18(0x04)
	struct FSkinFXEnvelopeEase ReleaseEase; // 0x1c(0x0c)
	bool bInfiniteSustain; // 0x28(0x01)
	bool bInferLifetime; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
};

// ScriptStruct SkinFX.SkinFXEnvelopeEase
// Size: 0x0c (Inherited: 0x00)
struct FSkinFXEnvelopeEase {
	enum class EEasingFunc Easing; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendExp; // 0x04(0x04)
	int32_t Steps; // 0x08(0x04)
};

// ScriptStruct SkinFX.SkinFXExternalContext
// Size: 0x88 (Inherited: 0x00)
struct FSkinFXExternalContext {
	struct FName FXName; // 0x00(0x08)
	float TimeFactor; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMaterialSwapParameters Values; // 0x10(0x50)
	struct TArray<struct UMaterialSwapMeshState*> MeshStates; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
	bool bMeshStatesSet; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct SkinFX.SkinFXEffectTypeOverrideEntry
// Size: 0x38 (Inherited: 0x00)
struct FSkinFXEffectTypeOverrideEntry {
	struct TSoftClassPtr<UObject> ActorClassPtr; // 0x00(0x28)
	struct FName TypeOverride; // 0x28(0x08)
	bool bAllowSubclasses; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SkinFX.SkinFXEffectLibraryEntry
// Size: 0x18 (Inherited: 0x00)
struct FSkinFXEffectLibraryEntry {
	struct ASkinFXDefinition* Effect; // 0x00(0x08)
	struct FName FXName; // 0x08(0x08)
	struct FName TypeOverride; // 0x10(0x08)
};

// ScriptStruct SkinFX.SkinFXTexture
// Size: 0x38 (Inherited: 0x00)
struct FSkinFXTexture {
	struct FSkinFXMaterialTextureProperty MaterialParameter; // 0x00(0x08)
	struct TSoftObjectPtr<UTexture> Texture; // 0x08(0x28)
	struct FSkinFXTextureAdvanced Advanced; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SkinFX.SkinFXTextureAdvanced
// Size: 0x01 (Inherited: 0x00)
struct FSkinFXTextureAdvanced {
	bool bPreviewOnly; // 0x00(0x01)
};

// ScriptStruct SkinFX.SkinFXMaterialTextureProperty
// Size: 0x08 (Inherited: 0x00)
struct FSkinFXMaterialTextureProperty {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct SkinFX.SkinFXSocketLerp
// Size: 0xc8 (Inherited: 0x00)
struct FSkinFXSocketLerp {
	struct FSkinFXMaterialParamProperty MaterialParameter; // 0x00(0x08)
	struct FSkinFXSocketProperty SocketOne; // 0x08(0x08)
	struct FSkinFXBoneProperty BoneOne; // 0x10(0x08)
	struct FSkinFXSocketProperty SocketTwo; // 0x18(0x08)
	struct FSkinFXBoneProperty BoneTwo; // 0x20(0x08)
	bool bUseBoneOne; // 0x28(0x01)
	bool bUseBoneTwo; // 0x29(0x01)
	enum class ESkinFXSocketOutput SocketOutput; // 0x2a(0x01)
	enum class ESkinFXSocketOutputAlphaPack SocketOutputAlpha; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FRuntimeFloatCurve LerpCurve; // 0x30(0x88)
	bool bStretchToEnvelope; // 0xb8(0x01)
	bool bLoop; // 0xb9(0x01)
	bool bMultiplyByASREnvelope; // 0xba(0x01)
	char pad_BB[0x1]; // 0xbb(0x01)
	struct FSkinFXSocketLerpAdvanced Advanced; // 0xbc(0x0c)
};

// ScriptStruct SkinFX.SkinFXSocketLerpAdvanced
// Size: 0x0c (Inherited: 0x00)
struct FSkinFXSocketLerpAdvanced {
	struct FName UseSpecificComponent; // 0x00(0x08)
	bool bEvaluateOnlyAtStart; // 0x08(0x01)
	bool bPreviewOnly; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct SkinFX.SkinFXBoneProperty
// Size: 0x08 (Inherited: 0x00)
struct FSkinFXBoneProperty {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct SkinFX.SkinFXSocketProperty
// Size: 0x08 (Inherited: 0x00)
struct FSkinFXSocketProperty {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct SkinFX.SkinFXMaterialParamProperty
// Size: 0x08 (Inherited: 0x00)
struct FSkinFXMaterialParamProperty {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct SkinFX.SkinFXSocket
// Size: 0x30 (Inherited: 0x00)
struct FSkinFXSocket {
	struct FSkinFXMaterialParamProperty MaterialParameter; // 0x00(0x08)
	struct FSkinFXSocketProperty Socket; // 0x08(0x08)
	struct FSkinFXBoneProperty Bone; // 0x10(0x08)
	enum class ESkinFXSocketOutput SocketOutput; // 0x18(0x01)
	enum class ESkinFXSocketOutputAlphaPack SocketOutputAlpha; // 0x19(0x01)
	bool bMultiplyColorByEnvelope; // 0x1a(0x01)
	enum class ESkinFXEnvelopeColorMod EnvelopeColorMod; // 0x1b(0x01)
	bool bMultiplyScalarByEnvelope; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FSkinFXSocketAdvanced Advanced; // 0x20(0x0c)
	bool bUseBone; // 0x2c(0x01)
	bool bUseReferencePose; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct SkinFX.SkinFXSocketAdvanced
// Size: 0x0c (Inherited: 0x00)
struct FSkinFXSocketAdvanced {
	struct FName UseSpecificComponent; // 0x00(0x08)
	bool bEvaluateOnlyAtStart; // 0x08(0x01)
	bool bPreviewOnly; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct SkinFX.SkinFXColorCurve
// Size: 0x238 (Inherited: 0x00)
struct FSkinFXColorCurve {
	struct FSkinFXMaterialVectorProperty MaterialParameter; // 0x00(0x08)
	struct FRuntimeCurveLinearColor ColorCurve; // 0x08(0x208)
	bool bStretchToEnvelope; // 0x210(0x01)
	bool bLoop; // 0x211(0x01)
	enum class ESkinFXEnvelopeColorMod EnvelopeColorMod; // 0x212(0x01)
	bool bMultiplyByASREnvelope; // 0x213(0x01)
	struct FSkinFXColorAdvanced Advanced; // 0x214(0x20)
	char pad_234[0x4]; // 0x234(0x04)
};

// ScriptStruct SkinFX.SkinFXColorAdvanced
// Size: 0x20 (Inherited: 0x00)
struct FSkinFXColorAdvanced {
	struct FSkinFXApplyFunctionModColor FunctionMod; // 0x00(0x1c)
	enum class ESkinFXColorConvert Convert; // 0x1c(0x01)
	bool bPreviewOnly; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct SkinFX.SkinFXApplyFunctionModColor
// Size: 0x1c (Inherited: 0x00)
struct FSkinFXApplyFunctionModColor {
	struct FSkinFXFunctionProperty Function; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	enum class ESkinFXFunctionModOp Op; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float ClampMin; // 0x10(0x04)
	float ClampMax; // 0x14(0x04)
	bool bClampMin; // 0x18(0x01)
	bool bClampMax; // 0x19(0x01)
	enum class ESkinFXEnvelopeColorMod ColorMod; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct SkinFX.SkinFXFunctionProperty
// Size: 0x08 (Inherited: 0x00)
struct FSkinFXFunctionProperty {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct SkinFX.SkinFXMaterialVectorProperty
// Size: 0x08 (Inherited: 0x00)
struct FSkinFXMaterialVectorProperty {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct SkinFX.SkinFXScalarCurve
// Size: 0xb8 (Inherited: 0x00)
struct FSkinFXScalarCurve {
	struct FSkinFXMaterialScalarProperty MaterialParameter; // 0x00(0x08)
	struct FRuntimeFloatCurve ScalarCurve; // 0x08(0x88)
	float OutputScale; // 0x90(0x04)
	bool bStretchToEnvelope; // 0x94(0x01)
	bool bLoop; // 0x95(0x01)
	bool bMultiplyByASREnvelope; // 0x96(0x01)
	char pad_97[0x1]; // 0x97(0x01)
	struct FSkinFXScalarAdvanced Advanced; // 0x98(0x20)
};

// ScriptStruct SkinFX.SkinFXScalarAdvanced
// Size: 0x20 (Inherited: 0x00)
struct FSkinFXScalarAdvanced {
	struct FSkinFXApplyFunctionMod FunctionMod; // 0x00(0x1c)
	bool bPreviewOnly; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct SkinFX.SkinFXApplyFunctionMod
// Size: 0x1c (Inherited: 0x00)
struct FSkinFXApplyFunctionMod {
	struct FSkinFXFunctionProperty Function; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	enum class ESkinFXFunctionModOp Op; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float ClampMin; // 0x10(0x04)
	float ClampMax; // 0x14(0x04)
	bool bClampMin; // 0x18(0x01)
	bool bClampMax; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct SkinFX.SkinFXMaterialScalarProperty
// Size: 0x08 (Inherited: 0x00)
struct FSkinFXMaterialScalarProperty {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct SkinFX.SkinFXColor
// Size: 0x3c (Inherited: 0x00)
struct FSkinFXColor {
	struct FSkinFXMaterialVectorProperty MaterialParameter; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
	enum class ESkinFXEnvelopeColorMod EnvelopeColorMod; // 0x18(0x01)
	bool bMultiplyByASREnvelope; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FSkinFXColorAdvanced Advanced; // 0x1c(0x20)
};

// ScriptStruct SkinFX.SkinFXScalar
// Size: 0x30 (Inherited: 0x00)
struct FSkinFXScalar {
	struct FSkinFXMaterialScalarProperty MaterialParameter; // 0x00(0x08)
	float Scalar; // 0x08(0x04)
	bool bMultiplyByASREnvelope; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FSkinFXScalarAdvanced Advanced; // 0x10(0x20)
};

// ScriptStruct SkinFX.SkinFXNoiseFunctionMod
// Size: 0x2c (Inherited: 0x00)
struct FSkinFXNoiseFunctionMod {
	struct FName FunctionName; // 0x00(0x08)
	float TimeBase; // 0x08(0x04)
	float Lumpiness; // 0x0c(0x04)
	float Amplitude; // 0x10(0x04)
	float Offset; // 0x14(0x04)
	bool bStretchToEnvelope; // 0x18(0x01)
	bool bLoop; // 0x19(0x01)
	bool bMultiplyByASREnvelope; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	struct FSkinFXNoiseFunctionModAdvanced Advanced; // 0x1c(0x10)
};

// ScriptStruct SkinFX.SkinFXNoiseFunctionModAdvanced
// Size: 0x10 (Inherited: 0x00)
struct FSkinFXNoiseFunctionModAdvanced {
	struct FSkinFXEnvelopeReshaper ReshapeASREnvelope; // 0x00(0x10)
};

// ScriptStruct SkinFX.SkinFXEnvelopeReshaper
// Size: 0x10 (Inherited: 0x00)
struct FSkinFXEnvelopeReshaper {
	struct FSkinFXEnvelopeEase Shaping; // 0x00(0x0c)
	bool bReshape; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct SkinFX.SkinFXFunctionMod
// Size: 0xa8 (Inherited: 0x00)
struct FSkinFXFunctionMod {
	struct FName FunctionName; // 0x00(0x08)
	struct FRuntimeFloatCurve Curve; // 0x08(0x88)
	bool bStretchToEnvelope; // 0x90(0x01)
	bool bLoop; // 0x91(0x01)
	bool bMultiplyByASREnvelope; // 0x92(0x01)
	char pad_93[0x1]; // 0x93(0x01)
	struct FSkinFXFunctionModAdvanced Advanced; // 0x94(0x10)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct SkinFX.SkinFXFunctionModAdvanced
// Size: 0x10 (Inherited: 0x00)
struct FSkinFXFunctionModAdvanced {
	struct FSkinFXEnvelopeReshaper ReshapeASREnvelope; // 0x00(0x10)
};

// ScriptStruct SkinFX.SkinFXColorPreview
// Size: 0x208 (Inherited: 0x00)
struct FSkinFXColorPreview {
	struct FRuntimeCurveLinearColor PreviewCurve; // 0x00(0x208)
};

// ScriptStruct SkinFX.SkinFXScalarPreview
// Size: 0x88 (Inherited: 0x00)
struct FSkinFXScalarPreview {
	struct FRuntimeFloatCurve PreviewCurve; // 0x00(0x88)
};

// ScriptStruct SkinFX.SkinFXLerpIndex
// Size: 0x0c (Inherited: 0x00)
struct FSkinFXLerpIndex {
	int32_t Index0; // 0x00(0x04)
	int32_t Index1; // 0x04(0x04)
	float Alpha; // 0x08(0x04)
};

// ScriptStruct SkinFX.SkinFXLocatorListPositionalSource
// Size: 0x38 (Inherited: 0x00)
struct FSkinFXLocatorListPositionalSource {
	struct FSkinFXBoneProperty Bone; // 0x00(0x08)
	struct FSkinFXSocketProperty Socket; // 0x08(0x08)
	enum class ESkinFXLocatorListPositionalSourceType Source; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FSkinFXUIParameters ExtraParameters; // 0x18(0x20)
};

// ScriptStruct SkinFX.SkinFXUIParameters
// Size: 0x20 (Inherited: 0x00)
struct FSkinFXUIParameters {
	struct TArray<struct FSkinFXUIScalarParameter> Scalars; // 0x00(0x10)
	struct TArray<struct FSkinFXUIVectorParameter> Vectors; // 0x10(0x10)
};

// ScriptStruct SkinFX.SkinFXUIVectorParameter
// Size: 0x18 (Inherited: 0x00)
struct FSkinFXUIVectorParameter {
	struct FSkinFXMaterialVectorProperty Parameter; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct SkinFX.SkinFXUIScalarParameter
// Size: 0x0c (Inherited: 0x00)
struct FSkinFXUIScalarParameter {
	struct FSkinFXMaterialScalarProperty Parameter; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct SkinFX.SkinFXSubTypeProperty
// Size: 0x08 (Inherited: 0x00)
struct FSkinFXSubTypeProperty {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct SkinFX.SkinFXPreviewSetup
// Size: 0xa8 (Inherited: 0x00)
struct FSkinFXPreviewSetup {
	enum class ESkinFXPreviewType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UStaticMesh> StaticMeshAsset; // 0x08(0x28)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMeshAsset; // 0x30(0x28)
	struct FSkinFXPreviewAnimationSetup Animation; // 0x58(0x38)
	struct FSkinFXMaterialOverride MaterialOverrides; // 0x90(0x18)
};

// ScriptStruct SkinFX.SkinFXMaterialOverride
// Size: 0x18 (Inherited: 0x00)
struct FSkinFXMaterialOverride {
	enum class ESkinFXMaterialOverrideType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> Materials; // 0x08(0x10)
};

// ScriptStruct SkinFX.SkinFXPreviewAnimationSetup
// Size: 0x38 (Inherited: 0x00)
struct FSkinFXPreviewAnimationSetup {
	struct TSoftObjectPtr<UAnimationAsset> AnimToPlay; // 0x00(0x28)
	float Position; // 0x28(0x04)
	float PlayRate; // 0x2c(0x04)
	bool bIsLooping; // 0x30(0x01)
	bool bIsPlaying; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct SkinFX.SkinFXMaterialSaver
// Size: 0x18 (Inherited: 0x00)
struct FSkinFXMaterialSaver {
	struct UMeshComponent* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0x08(0x10)
};

