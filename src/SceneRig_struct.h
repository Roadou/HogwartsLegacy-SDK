// Enum SceneRig.ELipsyncFlags
enum class ELipsyncFlags : uint8 {
	NoLipsync = 0,
	Lipsync = 1,
	MouthOnlyLipsyncLocalizedLanguages = 2,
	MouthOnlyLipsync = 3,
	ELipsyncFlags_MAX = 4
};

// Enum SceneRig.ECommandLookAtType
enum class ECommandLookAtType : uint8 {
	Speaker = 0,
	Listener = 1,
	ECommandLookAtType_MAX = 2
};

// Enum SceneRig.ECommandForType
enum class ECommandForType : uint8 {
	Speaker = 0,
	Listener = 1,
	Both = 2,
	ECommandForType_MAX = 3
};

// Enum SceneRig.EFloatMultiChannelNoiseWaveform
enum class EFloatMultiChannelNoiseWaveform : uint8 {
	CosineWave = 0,
	SineWave = 1,
	PerlinNoise = 2,
	EFloatMultiChannelNoiseWaveform_MAX = 3
};

// Enum SceneRig.EAimAtAxisType
enum class EAimAtAxisType : uint8 {
	Up = 0,
	Down = 1,
	Forward = 2,
	Backward = 3,
	Right = 4,
	Left = 5,
	EAimAtAxisType_MAX = 6
};

// Enum SceneRig.ESceneAction_AnimateCurves_FillMode
enum class ESceneAction_AnimateCurves_FillMode : uint8 {
	Stretch = 0,
	Hold = 1,
	Repeat = 2,
	ESceneAction_AnimateCurves_MAX = 3
};

// Enum SceneRig.ESceneAction_AnimateCurves_BlendMode
enum class ESceneAction_AnimateCurves_BlendMode : uint8 {
	Replace = 0,
	Multiply = 1,
	Additive = 2,
	ESceneAction_AnimateCurves_MAX = 3
};

// Enum SceneRig.ESceneRigAnimationRootBlendMode
enum class ESceneRigAnimationRootBlendMode : uint8 {
	BlendRootWithAnimation = 0,
	DoNotBlendRoot = 1,
	ESceneRigAnimationRootBlendMode_MAX = 2
};

// Enum SceneRig.ESceneRigAnimationPlaybackSpeed
enum class ESceneRigAnimationPlaybackSpeed : uint8 {
	NaturalSpeed = 0,
	FillActionDuration = 1,
	UseSpeedMultiplier = 2,
	ESceneRigAnimationPlaybackSpeed_MAX = 3
};

// Enum SceneRig.ESceneRigAnimationPlaybackRange
enum class ESceneRigAnimationPlaybackRange : uint8 {
	FullClipRange = 0,
	StartEndOffsets = 1,
	StartEndFractions = 2,
	StartOffsetWithDuration = 3,
	ESceneRigAnimationPlaybackRange_MAX = 4
};

// Enum SceneRig.ESceneAction_CameraResetType
enum class ESceneAction_CameraResetType : uint8 {
	NoReset = 0,
	BehindAvatar = 1,
	CurrentCameraDirection = 2,
	CurrentCameraYawAndDefaultPitch = 3,
	LookAtLocation = 4,
	ESceneAction_MAX = 5
};

// Enum SceneRig.ESceneAction_ClothingTeleportMode
enum class ESceneAction_ClothingTeleportMode : uint8 {
	None = 0,
	Teleport = 1,
	TeleportAndReset = 2,
	ESceneAction_MAX = 3
};

// Enum SceneRig.ESceneAction_LookAtPriority
enum class ESceneAction_LookAtPriority : uint8 {
	Lowest = 0,
	Passive = 1,
	Active = 2,
	Highest = 3,
	ESceneAction_MAX = 4
};

// Enum SceneRig.EParticleSystemActivation
enum class EParticleSystemActivation : uint8 {
	Activate = 0,
	Deactivate = 1,
	ActivateAndDeactivate = 2,
	EParticleSystemActivation_MAX = 3
};

// Enum SceneRig.ESceneAction_PlaySceneRigInitializeType
enum class ESceneAction_PlaySceneRigInitializeType : uint8 {
	OnStartOfSceneRig = 0,
	OnStartOfAction = 1,
	ESceneAction_MAX = 2
};

// Enum SceneRig.ERestoreFade
enum class ERestoreFade : uint8 {
	Never = 0,
	EndOfAction = 1,
	EndOfSceneRig = 2,
	ERestoreFade_MAX = 3
};

// Enum SceneRig.EFadeType
enum class EFadeType : uint8 {
	FadeIn = 0,
	FadeOut = 1,
	HoldFade = 2,
	Manual = 3,
	EFadeType_MAX = 4
};

// Enum SceneRig.ESceneRigAnimationTrackConstraintMode
enum class ESceneRigAnimationTrackConstraintMode : uint8 {
	ConstrainComponent = 0,
	ConstrainActor = 1,
	ESceneRigAnimationTrackConstraintMode_MAX = 2
};

// Enum SceneRig.EManagedCameraPriority
enum class EManagedCameraPriority : uint8 {
	Lowest = 0,
	PassiveCinematic = 1,
	ActiveCinematic = 2,
	Highest = 3,
	EManagedCameraPriority_MAX = 4
};

// Enum SceneRig.ESceneRigCameraAttachment
enum class ESceneRigCameraAttachment : uint8 {
	Stage_Root = 0,
	Avatar_Head = 1,
	A1_Head = 2,
	A2_Head = 3,
	B1_Head = 4,
	B2_Head = 5,
	ESceneRigCameraAttachment_MAX = 6
};

// Enum SceneRig.ESceneRigCameraProxyActor_ValidCameraType
enum class ESceneRigCameraProxyActor_ValidCameraType : uint8 {
	CheckObstructions = 0,
	AlwaysValid = 1,
	AlwaysInValid = 2,
	ESceneRigCameraProxyActor_MAX = 3
};

// Enum SceneRig.EFT_TriggerType
enum class EFT_TriggerType : uint8 {
	All = 0,
	SceneRig = 1,
	StoryGraph = 2,
	EFT_MAX = 3
};

// Enum SceneRig.ESceneParameterChangeRequestType
enum class ESceneParameterChangeRequestType : uint8 {
	String = 0,
	Bool = 1,
	Float = 2,
	Object = 3,
	Int = 4,
	Transform = 5,
	ESceneParameterChangeRequestType_MAX = 6
};

// Enum SceneRig.ESceneRigPreparingToInitializePhase
enum class ESceneRigPreparingToInitializePhase : uint8 {
	Uninitialized = 0,
	WorldTransitioning = 1,
	RequestingRequiredLevels = 2,
	LoadingRequiredLevels = 3,
	WaitingToCompleteStreaming = 4,
	PreparedToInitialize = 5,
	ESceneRigPreparingToInitializePhase_MAX = 6
};

// Enum SceneRig.ESceneRigProxyActor_PlatformHide
enum class ESceneRigProxyActor_PlatformHide : uint8 {
	None = 0,
	SwitchOnly = 1,
	LastGenAndSwitch = 2,
	ESceneRigProxyActor_MAX = 3
};

// Enum SceneRig.ESceneRigStageRoleType
enum class ESceneRigStageRoleType : uint8 {
	NONE = 0,
	Foreground = 1,
	Background = 2,
	Extra = 3,
	Prop = 4,
	ESceneRigStageRoleType_MAX = 5
};

// Enum SceneRig.EStoryGraphActorDependencies
enum class EStoryGraphActorDependencies : uint8 {
	WaitingForCurtain = 1,
	WaitingForAmbient = 2,
	EStoryGraphActorDependencies_MAX = 3
};

// Enum SceneRig.EStoryGraphActorState
enum class EStoryGraphActorState : uint8 {
	StoryNotStarted = 0,
	StoryReadyToStart = 1,
	StoryPlaying = 2,
	StoryFinished = 3,
	EStoryGraphActorState_MAX = 4
};

// ScriptStruct SceneRig.SceneRigParameters
// Size: 0x88 (Inherited: 0x00)
struct FSceneRigParameters {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FString, struct USceneRigParameter*> Parameters; // 0x08(0x50)
	struct USceneRigStageParameterBlock* StageParameters; // 0x58(0x08)
	struct UObject* WorldContext; // 0x60(0x08)
	struct UTimeRig_StoryGraph* StoryGraph; // 0x68(0x08)
	struct UTimeRig_StoryGraphNode* StoryNode; // 0x70(0x08)
	char pad_78[0x10]; // 0x78(0x10)
};

// ScriptStruct SceneRig.AmbientProxyActorReference
// Size: 0x28 (Inherited: 0x00)
struct FAmbientProxyActorReference {
	struct TSoftObjectPtr<USceneRigProxyActor> ProxyActor; // 0x00(0x28)
};

// ScriptStruct SceneRig.SceneRigActorMemberReference
// Size: 0x08 (Inherited: 0x00)
struct FSceneRigActorMemberReference {
	struct FName MemberName; // 0x00(0x08)
};

// ScriptStruct SceneRig.AnimNode_SceneRigCameraDriver
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_SceneRigCameraDriver : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct SceneRig.AudioDialogueFlags
// Size: 0x07 (Inherited: 0x00)
struct FAudioDialogueFlags {
	char pad_0[0x1]; // 0x00(0x01)
	bool StartPausedUMETA; // 0x01(0x01)
	bool NoQueuingLimits; // 0x02(0x01)
	bool SuppressSubtitles; // 0x03(0x01)
	bool NonSpatialized; // 0x04(0x01)
	bool UseCinematicPolyphony; // 0x05(0x01)
	enum class ELipsyncFlags LipsyncFlags; // 0x06(0x01)
};

// ScriptStruct SceneRig.FloatMultiChannelNoiseChannel
// Size: 0x10 (Inherited: 0x00)
struct FFloatMultiChannelNoiseChannel {
	float Frequency; // 0x00(0x04)
	float Amplitude; // 0x04(0x04)
	float TimeOffset; // 0x08(0x04)
	enum class EFloatMultiChannelNoiseWaveform Waveform; // 0x0c(0x01)
	bool Enabled; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct SceneRig.SceneActionActorFunctionReference
// Size: 0x30 (Inherited: 0x00)
struct FSceneActionActorFunctionReference {
	char pad_0[0x8]; // 0x00(0x08)
	struct TSoftObjectPtr<UFunction> Function; // 0x08(0x28)
};

// ScriptStruct SceneRig.SceneActionActorTickFunctionReference
// Size: 0x30 (Inherited: 0x30)
struct FSceneActionActorTickFunctionReference : FSceneActionActorFunctionReference {
};

// ScriptStruct SceneRig.AnimateProperty_PropertyName
// Size: 0x08 (Inherited: 0x00)
struct FAnimateProperty_PropertyName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigAnimationPlacementOptions
// Size: 0x30 (Inherited: 0x00)
struct FSceneRigAnimationPlacementOptions {
	enum class EAnimTrackRootMode RootEvaluationMode; // 0x00(0x01)
	enum class ESceneRigAnimationRootBlendMode RootBlendMode; // 0x01(0x01)
	enum class ESceneRigAnimationRootBlendMode BlendInRootBlendMode; // 0x02(0x01)
	enum class ESceneRigAnimationRootBlendMode BlendOutRootBlendMode; // 0x03(0x01)
	bool AccumulateRootMotion; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UBoolProvider* ConstrainedToPlacement; // 0x08(0x08)
	struct UBoolProvider* PlacementRespectsBlends; // 0x10(0x08)
	struct UBoolProvider* PlacementIsMoving; // 0x18(0x08)
	struct UTransformProvider* Placement; // 0x20(0x08)
	struct UAnimationTransformProvider* PlacementOffset; // 0x28(0x08)
};

// ScriptStruct SceneRig.SceneRigAnimationPlaybackSpeed
// Size: 0x10 (Inherited: 0x00)
struct FSceneRigAnimationPlaybackSpeed {
	enum class ESceneRigAnimationPlaybackSpeed PlaybackType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UFloatProvider* SpeedMultiplier; // 0x08(0x08)
};

// ScriptStruct SceneRig.SceneRigAnimationClipRange
// Size: 0x28 (Inherited: 0x00)
struct FSceneRigAnimationClipRange {
	enum class ESceneRigAnimationPlaybackRange RangeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UFloatProvider* TimingOffset; // 0x08(0x08)
	struct UFloatProvider* StartOffset; // 0x10(0x08)
	struct UFloatProvider* EndOffset; // 0x18(0x08)
	struct UFloatProvider* Duration; // 0x20(0x08)
};

// ScriptStruct SceneRig.SceneActionAnimCurve
// Size: 0x10 (Inherited: 0x00)
struct FSceneActionAnimCurve {
	struct FSkeletonCurveReference CurveName; // 0x00(0x08)
	struct UFloatProvider* Value; // 0x08(0x08)
};

// ScriptStruct SceneRig.SkeletonCurveReference
// Size: 0x08 (Inherited: 0x00)
struct FSkeletonCurveReference {
	struct FName CurveName; // 0x00(0x08)
};

// ScriptStruct SceneRig.CameraActionTransitionSettings
// Size: 0x30 (Inherited: 0x00)
struct FCameraActionTransitionSettings {
	struct UFloatProvider* BlendTime; // 0x00(0x08)
	enum class ECameraStackResetType ResetType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTransformProvider* ResetLookAtLocation; // 0x10(0x08)
	struct FRotator FixedArmRotationValue; // 0x18(0x0c)
	struct FVector2D RotationOffset; // 0x24(0x08)
	bool bLazyBlend; // 0x2c(0x01)
	bool bOldCameraStaysValid; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct SceneRig.CameraStackOperationState
// Size: 0x10 (Inherited: 0x00)
struct FCameraStackOperationState {
	struct UCameraStackOperationBase* Operation; // 0x00(0x08)
	struct UCameraStackOperationScratchData* ScratchData; // 0x08(0x08)
};

// ScriptStruct SceneRig.SceneActionFunctionEventReference
// Size: 0x08 (Inherited: 0x00)
struct FSceneActionFunctionEventReference {
	struct UFunction* Function; // 0x00(0x08)
};

// ScriptStruct SceneRig.SmartTexture
// Size: 0x18 (Inherited: 0x00)
struct FSmartTexture {
	struct UTexture2D* DefaultTexture; // 0x00(0x08)
	struct TArray<struct FModifyMaterials_TextureOverride> TextureOverrides; // 0x08(0x10)
};

// ScriptStruct SceneRig.ModifyMaterials_TextureOverride
// Size: 0x18 (Inherited: 0x00)
struct FModifyMaterials_TextureOverride {
	struct TArray<struct UFXRule*> Rules; // 0x00(0x10)
	struct UTexture2D* Texture; // 0x10(0x08)
};

// ScriptStruct SceneRig.SmartMaterial
// Size: 0x18 (Inherited: 0x00)
struct FSmartMaterial {
	struct UMaterialInterface* DefaultMaterial; // 0x00(0x08)
	struct TArray<struct FModifyMaterials_MaterialOverride> MaterialOverrides; // 0x08(0x10)
};

// ScriptStruct SceneRig.ModifyMaterials_MaterialOverride
// Size: 0x18 (Inherited: 0x00)
struct FModifyMaterials_MaterialOverride {
	struct TArray<struct UFXRule*> Rules; // 0x00(0x10)
	struct UMaterialInterface* Material; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneAction_PlayBinkMedia_SubtitleLine
// Size: 0x20 (Inherited: 0x08)
struct FSceneAction_PlayBinkMedia_SubtitleLine : FTableRowBase {
	struct FString Key; // 0x08(0x10)
	float StartTime; // 0x18(0x04)
	float EndTime; // 0x1c(0x04)
};

// ScriptStruct SceneRig.SceneActionSequence_ActorMapping
// Size: 0x10 (Inherited: 0x00)
struct FSceneActionSequence_ActorMapping {
	struct FSceneActionSequence_SequenceActorName ActorName; // 0x00(0x08)
	struct UActorProvider* AssignedActor; // 0x08(0x08)
};

// ScriptStruct SceneRig.SceneActionSequence_SequenceActorName
// Size: 0x08 (Inherited: 0x00)
struct FSceneActionSequence_SequenceActorName {
	struct FName SequenceActorName; // 0x00(0x08)
};

// ScriptStruct SceneRig.SetProperty_PropertyName
// Size: 0x08 (Inherited: 0x00)
struct FSetProperty_PropertyName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct SceneRig.FXOverride
// Size: 0x18 (Inherited: 0x00)
struct FFXOverride {
	struct TArray<struct UFXRule*> Rules; // 0x00(0x10)
	struct UFXSystemAsset* ParticleSystem; // 0x10(0x08)
};

// ScriptStruct SceneRig.TransformKeyValue
// Size: 0x30 (Inherited: 0x00)
struct FTransformKeyValue {
	struct FTransform Transform; // 0x00(0x30)
};

// ScriptStruct SceneRig.SceneRigBoundParameterDefinition
// Size: 0x01 (Inherited: 0x00)
struct FSceneRigBoundParameterDefinition {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SceneRig.SceneRigParameterBinding_Animation
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_Animation : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_Animation* Reference; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigParameterBinding_Bool
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_Bool : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_Bool* Reference; // 0x00(0x08)
};

// ScriptStruct SceneRig.ActionParameter_DialogueEvent
// Size: 0x70 (Inherited: 0x00)
struct FActionParameter_DialogueEvent {
	struct FSceneRigParameterBinding_DialogueEvent BoundParameter; // 0x00(0x08)
	struct FSceneRigDialogTrackSectionData DefaultEvent; // 0x08(0x68)
};

// ScriptStruct SceneRig.SceneRigDialogTrackSectionData
// Size: 0x68 (Inherited: 0x00)
struct FSceneRigDialogTrackSectionData {
	struct FString EventName; // 0x00(0x10)
	struct TMap<struct FString, struct FString> RequiredParameters; // 0x10(0x50)
	bool StopWhenAttachedToDestroyed; // 0x60(0x01)
	struct FAudioDialogueFlags AudioDialogueFlags; // 0x61(0x07)
};

// ScriptStruct SceneRig.SceneRigParameterBinding_DialogueEvent
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_DialogueEvent : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_DialogueEvent* Reference; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigParameterBinding_Float
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_Float : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_Float* Reference; // 0x00(0x08)
};

// ScriptStruct SceneRig.ActionParameter_FString
// Size: 0x18 (Inherited: 0x00)
struct FActionParameter_FString {
	struct FSceneRigParameterBinding_FString BoundParameter; // 0x00(0x08)
	struct FString DefaultValue; // 0x08(0x10)
};

// ScriptStruct SceneRig.SceneRigParameterBinding_FString
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_FString : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_FString* Reference; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigParameterBinding_Int
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_Int : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_Int* Reference; // 0x00(0x08)
};

// ScriptStruct SceneRig.ActionParameter_Object
// Size: 0x10 (Inherited: 0x00)
struct FActionParameter_Object {
	struct FSceneRigParameterBinding_Object BoundParameter; // 0x00(0x08)
	struct UObjectProvider* DefaultObject; // 0x08(0x08)
};

// ScriptStruct SceneRig.SceneRigParameterBinding_Object
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_Object : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_Object* Reference; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigParameterBinding_AnimationTransform
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_AnimationTransform : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_AnimationTransform* Reference; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigParameterBinding_Transform
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_Transform : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_Transform* Reference; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigParameterBinding_Vector
// Size: 0x08 (Inherited: 0x01)
struct FSceneRigParameterBinding_Vector : FSceneRigBoundParameterDefinition {
	struct USceneRigParameterDefinition_Vector* Reference; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigParameterDefinitions
// Size: 0x50 (Inherited: 0x00)
struct FSceneRigParameterDefinitions {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct SceneRig.SceneRigAnimationRegsitryInheritRegistry
// Size: 0x18 (Inherited: 0x00)
struct FSceneRigAnimationRegsitryInheritRegistry {
	struct FString LookupKey; // 0x00(0x10)
	struct USceneRigAnimationRegistry* InheritFromRegistry; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigAnimationRegsitryAnim
// Size: 0x20 (Inherited: 0x00)
struct FSceneRigAnimationRegsitryAnim {
	struct FString LookupKey; // 0x00(0x10)
	float SelectionWeight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UAnimationAsset* UnrealAnimationAsset; // 0x18(0x08)
};

// ScriptStruct SceneRig.SceneRigAnimationSectionTemplate
// Size: 0x568 (Inherited: 0x20)
struct FSceneRigAnimationSectionTemplate : FMovieSceneEvalTemplate {
	struct FSceneRigAnimationSectionTemplateParameters Params; // 0x20(0x548)
};

// ScriptStruct SceneRig.SceneRigAnimationParams
// Size: 0x540 (Inherited: 0x00)
struct FSceneRigAnimationParams {
	struct FSceneRigAnimationTrackPlacementOptions PlacementOptions; // 0x00(0x4a0)
	struct UAnimSequence* Animation; // 0x4a0(0x08)
	struct FName LayerName; // 0x4a8(0x08)
	float StartOffset; // 0x4b0(0x04)
	float EndOffset; // 0x4b4(0x04)
	float PlayRate; // 0x4b8(0x04)
	char bReverse : 1; // 0x4bc(0x01)
	char pad_4BC_1 : 7; // 0x4bc(0x01)
	char pad_4BD[0x3]; // 0x4bd(0x03)
	struct FRichCurve weight; // 0x4c0(0x80)
};

// ScriptStruct SceneRig.SceneRigAnimationTrackPlacementOptions
// Size: 0x4a0 (Inherited: 0x00)
struct FSceneRigAnimationTrackPlacementOptions {
	bool ConstrainedToPlacement; // 0x00(0x01)
	bool bUnscaleHipsBone; // 0x01(0x01)
	enum class ESceneRigAnimationTrackConstraintMode ConstraintMode; // 0x02(0x01)
	bool PlacementRespectsBlends; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTransformProvider* Placement; // 0x08(0x08)
	struct UAnimationTransformProvider* PlacementOffset; // 0x10(0x08)
	struct FMovieSceneTransformMask TransformMask; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FRichCurve Translation[0x3]; // 0x20(0x180)
	struct FRichCurve Rotation[0x3]; // 0x1a0(0x180)
	struct FRichCurve Scale[0x3]; // 0x320(0x180)
};

// ScriptStruct SceneRig.SceneRigAnimationSectionTemplateParameters
// Size: 0x548 (Inherited: 0x540)
struct FSceneRigAnimationSectionTemplateParameters : FSceneRigAnimationParams {
	struct FFrameNumber SectionStartTime; // 0x540(0x04)
	struct FFrameNumber SectionEndTime; // 0x544(0x04)
};

// ScriptStruct SceneRig.SceneRigAnimInstanceProxy
// Size: 0xa50 (Inherited: 0x770)
struct FSceneRigAnimInstanceProxy : FAnimInstanceProxy_RetrieveActorTransform {
	char pad_770[0x2e0]; // 0x770(0x2e0)
};

// ScriptStruct SceneRig.CinematicInfo
// Size: 0x40 (Inherited: 0x08)
struct FCinematicInfo : FTableRowBase {
	struct FString SceneRig; // 0x08(0x10)
	struct FString Tier; // 0x18(0x10)
	bool Cooked; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString Status; // 0x30(0x10)
};

// ScriptStruct SceneRig.SceneRigBoundObject
// Size: 0x10 (Inherited: 0x00)
struct FSceneRigBoundObject {
	struct FName BoundObjectName; // 0x00(0x08)
	struct UObjectProvider* ObjectProvider; // 0x08(0x08)
};

// ScriptStruct SceneRig.SRCameraPostProcessSettings
// Size: 0x860 (Inherited: 0x00)
struct FSRCameraPostProcessSettings {
	struct FAnimatedFloatPropertyDriver SceneFringeIntensity; // 0x00(0x28)
	struct FAnimatedFloatPropertyDriver VignetteIntensity; // 0x28(0x28)
	struct FAnimatedFloatPropertyDriver GrainJitter; // 0x50(0x28)
	struct FAnimatedFloatPropertyDriver GrainIntensity; // 0x78(0x28)
	struct FAnimatedIntegerPropertyDriver BloomMethod; // 0xa0(0x28)
	struct FAnimatedFloatPropertyDriver BloomIntensity; // 0xc8(0x28)
	struct FAnimatedFloatPropertyDriver BloomThreshold; // 0xf0(0x28)
	struct FAnimatedFloatPropertyDriver BloomCross; // 0x118(0x28)
	struct FAnimatedFloatPropertyDriver BloomDirtMaskIntensity; // 0x140(0x28)
	struct FAnimatedVectorPropertyDriver BloomDirtMaskTint; // 0x168(0x48)
	struct FAnimatedIntegerPropertyDriver AutoExposureMethod; // 0x1b0(0x28)
	struct FAnimatedFloatPropertyDriver AutoExposureLowPercent; // 0x1d8(0x28)
	struct FAnimatedFloatPropertyDriver AutoExposureHighPercent; // 0x200(0x28)
	struct FAnimatedFloatPropertyDriver AutoExposureMinBrightness; // 0x228(0x28)
	struct FAnimatedFloatPropertyDriver AutoExposureMaxBrightness; // 0x250(0x28)
	struct FAnimatedFloatPropertyDriver AutoExposureSpeedUp; // 0x278(0x28)
	struct FAnimatedFloatPropertyDriver AutoExposureSpeedDown; // 0x2a0(0x28)
	struct FAnimatedFloatPropertyDriver AutoExposureBias; // 0x2c8(0x28)
	struct FAnimatedFloatPropertyDriver HistogramLogMax; // 0x2f0(0x28)
	struct FAnimatedFloatPropertyDriver HistogramLogMin; // 0x318(0x28)
	struct FAnimatedIntegerPropertyDriver DepthOfFieldMethod; // 0x340(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldFstop; // 0x368(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldSensorWidth; // 0x390(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldFocalDistance; // 0x3b8(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldDepthBlurAmount; // 0x3e0(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldDepthBlurRadius; // 0x408(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldFocalRegion; // 0x430(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldNearTransitionRegion; // 0x458(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldFarTransitionRegion; // 0x480(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldScale; // 0x4a8(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldMaxBokehSize; // 0x4d0(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldNearBlurSize; // 0x4f8(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldFarBlurSize; // 0x520(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldOcclusion; // 0x548(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldColorThreshold; // 0x570(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldSizeThreshold; // 0x598(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldSkyFocusDistance; // 0x5c0(0x28)
	struct FAnimatedFloatPropertyDriver DepthOfFieldVignetteSize; // 0x5e8(0x28)
	struct FAnimatedFloatPropertyDriver AmbientOcclusionIntensity; // 0x610(0x28)
	struct FAnimatedFloatPropertyDriver AmbientOcclusionRadius; // 0x638(0x28)
	struct FAnimatedFloatPropertyDriver AmbientOcclusionStaticFraction; // 0x660(0x28)
	struct FAnimatedBoolPropertyDriver AmbientOcclusionRadiusInWS; // 0x688(0x28)
	struct FAnimatedFloatPropertyDriver AmbientOcclusionFadeDistance; // 0x6b0(0x28)
	struct FAnimatedFloatPropertyDriver AmbientOcclusionFadeRadius; // 0x6d8(0x28)
	struct FAnimatedFloatPropertyDriver AmbientOcclusionPower; // 0x700(0x28)
	struct FAnimatedFloatPropertyDriver AmbientOcclusionBias; // 0x728(0x28)
	struct FAnimatedFloatPropertyDriver AmbientOcclusionQuality; // 0x750(0x28)
	struct FAnimatedVectorPropertyDriver IndirectLightingColor; // 0x778(0x48)
	struct FAnimatedFloatPropertyDriver IndirectLightingIntensity; // 0x7c0(0x28)
	struct FAnimatedFloatPropertyDriver MotionBlurAmount; // 0x7e8(0x28)
	struct FAnimatedFloatPropertyDriver MotionBlurMax; // 0x810(0x28)
	struct FAnimatedFloatPropertyDriver MotionBlurPerObjectSize; // 0x838(0x28)
};

// ScriptStruct SceneRig.SRCameraFocusSettings
// Size: 0x138 (Inherited: 0x00)
struct FSRCameraFocusSettings {
	struct FAnimatedIntegerPropertyDriver FocusMethod; // 0x00(0x28)
	struct FAnimatedFloatPropertyDriver ManualFocusDistance; // 0x28(0x28)
	struct FAnimatedBoolPropertyDriver bDrawDebugFocusPlane; // 0x50(0x28)
	struct FAnimatedBoolPropertyDriver bSmoothFocusChanges; // 0x78(0x28)
	struct FAnimatedFloatPropertyDriver FocusSmoothingInterpSpeed; // 0xa0(0x28)
	struct FAnimatedFloatPropertyDriver FocusOffset; // 0xc8(0x28)
	struct FSRCameraTrackingFocusSettings TrackingFocusSettings; // 0xf0(0x48)
};

// ScriptStruct SceneRig.SRCameraTrackingFocusSettings
// Size: 0x48 (Inherited: 0x00)
struct FSRCameraTrackingFocusSettings {
	struct FAnimatedVectorPropertyDriver RelativeOffset; // 0x00(0x48)
};

// ScriptStruct SceneRig.SceneRigCameraSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FSceneRigCameraSectionTemplate : FMovieSceneEvalTemplate {
	struct FSceneRigCameraParams Params; // 0x20(0x18)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct SceneRig.SceneRigCameraParams
// Size: 0x18 (Inherited: 0x00)
struct FSceneRigCameraParams {
	struct UObjectProvider* InitialCamera; // 0x00(0x08)
	struct UObjectProvider* FinalCamera; // 0x08(0x08)
	struct UObjectProvider* Camera; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigDialogTrackTemplate
// Size: 0x88 (Inherited: 0x20)
struct FSceneRigDialogTrackTemplate : FMovieSceneEvalTemplate {
	struct FSceneRigDialogTrackTemplateData TemplateData; // 0x20(0x68)
};

// ScriptStruct SceneRig.SceneRigDialogTrackTemplateData
// Size: 0x68 (Inherited: 0x68)
struct FSceneRigDialogTrackTemplateData : FSceneRigDialogTrackSectionData {
};

// ScriptStruct SceneRig.SceneParameterChangeRequest
// Size: 0x70 (Inherited: 0x00)
struct FSceneParameterChangeRequest {
	struct FName ParameterName; // 0x00(0x08)
	enum class ESceneParameterChangeRequestType ChangeType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString String; // 0x10(0x10)
	bool Bool; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float float; // 0x24(0x04)
	struct UObject* Object; // 0x28(0x08)
	int32_t int; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FTransform Transform; // 0x40(0x30)
};

// ScriptStruct SceneRig.SceneRigObjectActionBase_ComponentName
// Size: 0x08 (Inherited: 0x00)
struct FSceneRigObjectActionBase_ComponentName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigPlayerReference
// Size: 0x10 (Inherited: 0x00)
struct FSceneRigPlayerReference {
	struct USceneRigPlayer* Player; // 0x00(0x08)
	struct TWeakObjectPtr<struct USceneRigPlayer> WeakPlayer; // 0x08(0x08)
};

// ScriptStruct SceneRig.SceneRigRegisteredActorReference
// Size: 0x08 (Inherited: 0x00)
struct FSceneRigRegisteredActorReference {
	struct FName RegisteredName; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigScriptContainer
// Size: 0x08 (Inherited: 0x00)
struct FSceneRigScriptContainer {
	struct USceneRigScript* ScriptObject; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigScriptChoice
// Size: 0x08 (Inherited: 0x00)
struct FSceneRigScriptChoice {
	struct USceneRigScriptNode* Script; // 0x00(0x08)
};

// ScriptStruct SceneRig.SceneRigScriptBranch
// Size: 0x10 (Inherited: 0x00)
struct FSceneRigScriptBranch {
	struct UScriptConditionProvider* Condition; // 0x00(0x08)
	struct USceneRigScriptNode* Script; // 0x08(0x08)
};

// ScriptStruct SceneRig.SubLevelOffset
// Size: 0x28 (Inherited: 0x08)
struct FSubLevelOffset : FTableRowBase {
	struct FVector Position; // 0x08(0x0c)
	float Yaw; // 0x14(0x04)
	bool HasCentroid; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector LevelCentroid; // 0x1c(0x0c)
};

// ScriptStruct SceneRig.SceneRigStageActorPlacement
// Size: 0x20 (Inherited: 0x00)
struct FSceneRigStageActorPlacement {
	struct FSceneRigStage_ActorReference Actor; // 0x00(0x10)
	struct FSceneRigStage_TransformReference Placement; // 0x10(0x10)
};

// ScriptStruct SceneRig.SceneRigStage_ParameterReference
// Size: 0x10 (Inherited: 0x00)
struct FSceneRigStage_ParameterReference {
	struct UStruct* ParameterType; // 0x00(0x08)
	struct FName ReferenceName; // 0x08(0x08)
};

// ScriptStruct SceneRig.SceneRigStage_TransformReference
// Size: 0x10 (Inherited: 0x10)
struct FSceneRigStage_TransformReference : FSceneRigStage_ParameterReference {
};

// ScriptStruct SceneRig.SceneRigStage_ActorReference
// Size: 0x10 (Inherited: 0x10)
struct FSceneRigStage_ActorReference : FSceneRigStage_ParameterReference {
};

// ScriptStruct SceneRig.SceneRigStage_ParameterDefinition
// Size: 0x10 (Inherited: 0x00)
struct FSceneRigStage_ParameterDefinition {
	char pad_0[0x8]; // 0x00(0x08)
	bool AlwaysUseDefault; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct SceneRig.SceneRigStage_Actor
// Size: 0x18 (Inherited: 0x10)
struct FSceneRigStage_Actor : FSceneRigStage_ParameterDefinition {
	struct UActorProvider* DefaultProvider; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigStage_AnimationReference
// Size: 0x10 (Inherited: 0x10)
struct FSceneRigStage_AnimationReference : FSceneRigStage_ParameterReference {
};

// ScriptStruct SceneRig.SceneRigStage_Animation
// Size: 0x18 (Inherited: 0x10)
struct FSceneRigStage_Animation : FSceneRigStage_ParameterDefinition {
	struct UAnimationProvider* DefaultProvider; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigStage_ObjectReference
// Size: 0x10 (Inherited: 0x10)
struct FSceneRigStage_ObjectReference : FSceneRigStage_ParameterReference {
};

// ScriptStruct SceneRig.SceneRigStage_Object
// Size: 0x18 (Inherited: 0x10)
struct FSceneRigStage_Object : FSceneRigStage_ParameterDefinition {
	struct UObjectProvider* DefaultProvider; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigStage_Transform
// Size: 0x18 (Inherited: 0x10)
struct FSceneRigStage_Transform : FSceneRigStage_ParameterDefinition {
	struct UTransformProvider* DefaultProvider; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigStage_StringReference
// Size: 0x10 (Inherited: 0x10)
struct FSceneRigStage_StringReference : FSceneRigStage_ParameterReference {
};

// ScriptStruct SceneRig.SceneRigStage_String
// Size: 0x18 (Inherited: 0x10)
struct FSceneRigStage_String : FSceneRigStage_ParameterDefinition {
	struct UStringProvider* DefaultProvider; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigStage_NameReference
// Size: 0x10 (Inherited: 0x10)
struct FSceneRigStage_NameReference : FSceneRigStage_ParameterReference {
};

// ScriptStruct SceneRig.SceneRigStage_Name
// Size: 0x18 (Inherited: 0x10)
struct FSceneRigStage_Name : FSceneRigStage_ParameterDefinition {
	struct UNameProvider* DefaultProvider; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigStage_VectorReference
// Size: 0x10 (Inherited: 0x10)
struct FSceneRigStage_VectorReference : FSceneRigStage_ParameterReference {
};

// ScriptStruct SceneRig.SceneRigStage_Vector
// Size: 0x18 (Inherited: 0x10)
struct FSceneRigStage_Vector : FSceneRigStage_ParameterDefinition {
	struct UVectorProvider* DefaultProvider; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigStage_FloatReference
// Size: 0x10 (Inherited: 0x10)
struct FSceneRigStage_FloatReference : FSceneRigStage_ParameterReference {
};

// ScriptStruct SceneRig.SceneRigStage_Float
// Size: 0x18 (Inherited: 0x10)
struct FSceneRigStage_Float : FSceneRigStage_ParameterDefinition {
	struct UFloatProvider* DefaultProvider; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigStage_IntReference
// Size: 0x10 (Inherited: 0x10)
struct FSceneRigStage_IntReference : FSceneRigStage_ParameterReference {
};

// ScriptStruct SceneRig.SceneRigStage_Int
// Size: 0x18 (Inherited: 0x10)
struct FSceneRigStage_Int : FSceneRigStage_ParameterDefinition {
	struct UIntProvider* DefaultProvider; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigStage_BoolReference
// Size: 0x10 (Inherited: 0x10)
struct FSceneRigStage_BoolReference : FSceneRigStage_ParameterReference {
};

// ScriptStruct SceneRig.SceneRigStage_Bool
// Size: 0x18 (Inherited: 0x10)
struct FSceneRigStage_Bool : FSceneRigStage_ParameterDefinition {
	struct UBoolProvider* DefaultProvider; // 0x10(0x08)
};

// ScriptStruct SceneRig.SceneRigStageCast
// Size: 0x10 (Inherited: 0x00)
struct FSceneRigStageCast {
	struct TArray<struct FSceneRigStageRole> CastMembers; // 0x00(0x10)
};

// ScriptStruct SceneRig.SceneRigStageRole
// Size: 0x08 (Inherited: 0x00)
struct FSceneRigStageRole {
	enum class ESceneRigStageRoleType RoleType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t RoleIndex; // 0x04(0x04)
};

// ScriptStruct SceneRig.SceneRigVariant
// Size: 0x30 (Inherited: 0x00)
struct FSceneRigVariant {
	struct TArray<struct UBoolProvider*> Conditions; // 0x00(0x10)
	bool AvoidTwiceInARow; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t MinRepeatLimitCount; // 0x14(0x04)
	int32_t MaxRepeatLimitCount; // 0x18(0x04)
	float MinRepeatDelayLimitSeconds; // 0x1c(0x04)
	float MaxRepeatDelayLimitSeconds; // 0x20(0x04)
	float RelativeWeight; // 0x24(0x04)
	struct USceneRigProvider* SceneRig; // 0x28(0x08)
};

// ScriptStruct SceneRig.StagePreviewDriverContext
// Size: 0x08 (Inherited: 0x00)
struct FStagePreviewDriverContext {
	struct USceneRigStageParameterBlock* StageParameters; // 0x00(0x08)
};

// ScriptStruct SceneRig.TemplateSceneRigRow
// Size: 0x18 (Inherited: 0x08)
struct FTemplateSceneRigRow : FTableRowBase {
	struct USceneRig* SceneRigClass; // 0x08(0x08)
	struct USceneRig* TemplateSceneRig; // 0x10(0x08)
};

// ScriptStruct SceneRig.Transform_SceneRigActor_PreviewReference
// Size: 0x20 (Inherited: 0x00)
struct FTransform_SceneRigActor_PreviewReference {
	struct FWorldActorReference Reference; // 0x00(0x20)
};

