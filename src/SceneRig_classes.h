// Class SceneRig.Actor_AmbientProxyActor
// Size: 0x68 (Inherited: 0x38)
struct UActor_AmbientProxyActor : UActorProvider {
	char pad_38[0x8]; // 0x38(0x08)
	struct FAmbientProxyActorReference AmbientProxy; // 0x40(0x28)
};

// Class SceneRig.Actor_GameplayCamera
// Size: 0x38 (Inherited: 0x38)
struct UActor_GameplayCamera : UActorProvider {
};

// Class SceneRig.Actor_Registered
// Size: 0x50 (Inherited: 0x38)
struct UActor_Registered : UActorProvider {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSceneRigRegisteredActorReference ActorReference; // 0x40(0x08)
	bool RequireRegistration; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class SceneRig.Actor_SceneRigActor
// Size: 0x38 (Inherited: 0x38)
struct UActor_SceneRigActor : UActorProvider {
};

// Class SceneRig.Actor_SceneRigActorMember
// Size: 0x48 (Inherited: 0x38)
struct UActor_SceneRigActorMember : UActorProvider {
	struct ASceneRigActor* ActorClass; // 0x38(0x08)
	struct FSceneRigActorMemberReference Member; // 0x40(0x08)
};

// Class SceneRig.Actor_SceneRigCamera
// Size: 0x98 (Inherited: 0x38)
struct UActor_SceneRigCamera : UActorProvider {
	struct FGameplayTagContainer Tags; // 0x38(0x20)
	struct TArray<struct FGameplayTagContainer> FallbackTags; // 0x58(0x10)
	struct TArray<struct UAnimationArchitectTagProvider*> TagProviders; // 0x68(0x10)
	struct TArray<struct UNameProvider*> EnabledRegisteredCameraNames; // 0x78(0x10)
	struct TArray<struct UNameProvider*> DisabledRegisteredCameraNames; // 0x88(0x10)
};

// Class SceneRig.Actor_SceneRigParameter
// Size: 0x40 (Inherited: 0x38)
struct UActor_SceneRigParameter : UActorProvider {
	struct FSceneRigParameterBinding_Object BoundParameter; // 0x38(0x08)
};

// Class SceneRig.Actor_SceneRigParentProxyActor
// Size: 0x38 (Inherited: 0x38)
struct UActor_SceneRigParentProxyActor : UActorProvider {
};

// Class SceneRig.Actor_SceneRigProxyActor
// Size: 0x40 (Inherited: 0x38)
struct UActor_SceneRigProxyActor : UActorProvider {
	struct USceneRigProxyActor* ProxyActor; // 0x38(0x08)
};

// Class SceneRig.Actor_SceneRigStageParameter
// Size: 0x50 (Inherited: 0x38)
struct UActor_SceneRigStageParameter : UActorProvider {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSceneRigStage_ActorReference Reference; // 0x40(0x10)
};

// Class SceneRig.Actor_StageRoot
// Size: 0x38 (Inherited: 0x38)
struct UActor_StageRoot : UActorProvider {
};

// Class SceneRig.Actor_WorldReference
// Size: 0x58 (Inherited: 0x38)
struct UActor_WorldReference : UActorProvider {
	struct FWorldActorReference ActorReference; // 0x38(0x20)
};

// Class SceneRig.Animation_FromPoseGroup
// Size: 0x70 (Inherited: 0x28)
struct UAnimation_FromPoseGroup : UAnimationProvider {
	char pad_28[0x8]; // 0x28(0x08)
	bool TransitionFromPreviousPose; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UPoseGroupProvider* TransitionFromPoseGroupOverride; // 0x38(0x08)
	struct FGameplayTagContainer Tags; // 0x40(0x20)
	struct TArray<struct UAnimationArchitectTagProvider*> TagProviders; // 0x60(0x10)
};

// Class SceneRig.AnimationAsset_SceneRigParameter
// Size: 0x30 (Inherited: 0x28)
struct UAnimationAsset_SceneRigParameter : UAnimationProvider {
	struct FSceneRigParameterBinding_Animation BoundParameter; // 0x28(0x08)
};

// Class SceneRig.Animation_SceneRigStageParameter
// Size: 0x38 (Inherited: 0x28)
struct UAnimation_SceneRigStageParameter : UAnimationProvider {
	struct FSceneRigStage_AnimationReference Reference; // 0x28(0x10)
};

// Class SceneRig.Animation_ScratchAnimation
// Size: 0x30 (Inherited: 0x28)
struct UAnimation_ScratchAnimation : UAnimationProvider {
	int32_t SelectedTake; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class SceneRig.AnimationClip_FromSceneRigAction
// Size: 0x30 (Inherited: 0x28)
struct UAnimationClip_FromSceneRigAction : UAnimationClipProvider {
	struct USceneRigProxyActor* Actor; // 0x28(0x08)
};

// Class SceneRig.AnimationProvider_Gender
// Size: 0x38 (Inherited: 0x28)
struct UAnimationProvider_Gender : UAnimationProvider {
	struct UAnimationProvider* MaleAnimation; // 0x28(0x08)
	struct UAnimationProvider* FemaleAnimation; // 0x30(0x08)
};

// Class SceneRig.AnimationTransform_SceneRigParameter
// Size: 0x40 (Inherited: 0x38)
struct UAnimationTransform_SceneRigParameter : UAnimationTransformProvider {
	struct FSceneRigParameterBinding_AnimationTransform BoundParameter; // 0x38(0x08)
};

// Class SceneRig.BlendSpaceInput_SceneRigStageParameter
// Size: 0x38 (Inherited: 0x28)
struct UBlendSpaceInput_SceneRigStageParameter : UBlendSpaceInputProvider {
	struct FSceneRigStage_FloatReference Reference; // 0x28(0x10)
};

// Class SceneRig.Bool_Curve
// Size: 0xb0 (Inherited: 0x28)
struct UBool_Curve : UBoolProvider {
	struct FRuntimeFloatCurve Curve; // 0x28(0x88)
};

// Class SceneRig.Bool_InSceneRigEditor
// Size: 0x28 (Inherited: 0x28)
struct UBool_InSceneRigEditor : UBoolProvider {
};

// Class SceneRig.Bool_IsFemaleCharacter
// Size: 0x30 (Inherited: 0x28)
struct UBool_IsFemaleCharacter : UBoolProvider {
	struct UActorProvider* Actor; // 0x28(0x08)
};

// Class SceneRig.Bool_IsMaleCharacter
// Size: 0x30 (Inherited: 0x28)
struct UBool_IsMaleCharacter : UBoolProvider {
	struct UActorProvider* Actor; // 0x28(0x08)
};

// Class SceneRig.Bool_SceneRigParameter
// Size: 0x30 (Inherited: 0x28)
struct UBool_SceneRigParameter : UBoolProvider {
	struct FSceneRigParameterBinding_Bool BoundParameter; // 0x28(0x08)
};

// Class SceneRig.Bool_SceneRigStageParameter
// Size: 0x38 (Inherited: 0x28)
struct UBool_SceneRigStageParameter : UBoolProvider {
	struct FSceneRigStage_BoolReference Reference; // 0x28(0x10)
};

// Class SceneRig.CameraStackBehaviorCore_SceneRig
// Size: 0x128 (Inherited: 0x50)
struct UCameraStackBehaviorCore_SceneRig : UCameraStackBehaviorCore {
	bool bCounteractAccumulatedRotation; // 0x50(0x01)
	bool bMaintainArmOrigin; // 0x51(0x01)
	bool bAlignArmWithAccumulatedRotation; // 0x52(0x01)
	char pad_53[0xd5]; // 0x53(0xd5)
};

// Class SceneRig.Color_Curve
// Size: 0x230 (Inherited: 0x28)
struct UColor_Curve : UColorProvider {
	struct FRuntimeCurveLinearColor Curve; // 0x28(0x208)
};

// Class SceneRig.ConversationAnimationManager
// Size: 0x28 (Inherited: 0x28)
struct UConversationAnimationManager : UInterface {
};

// Class SceneRig.ConversationAssetTracker
// Size: 0x28 (Inherited: 0x28)
struct UConversationAssetTracker : UInterface {
};

// Class SceneRig.ConversationCameraManager
// Size: 0x28 (Inherited: 0x28)
struct UConversationCameraManager : UInterface {
};

// Class SceneRig.DebugSceneRigManager
// Size: 0x40 (Inherited: 0x40)
struct UDebugSceneRigManager : UDebugWindow {
};

// Class SceneRig.DebugStoryGraphWindow
// Size: 0x40 (Inherited: 0x40)
struct UDebugStoryGraphWindow : UDebugWindow {
};

// Class SceneRig.DialogueScriptCommand
// Size: 0x30 (Inherited: 0x28)
struct UDialogueScriptCommand : UObject {
	bool Enabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class SceneRig.DialogueScriptEventCommand
// Size: 0x38 (Inherited: 0x30)
struct UDialogueScriptEventCommand : UDialogueScriptCommand {
	float LineFraction; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class SceneRig.DialogueScriptEventExplicitGestureCommand
// Size: 0x48 (Inherited: 0x38)
struct UDialogueScriptEventExplicitGestureCommand : UDialogueScriptEventCommand {
	struct UNameProvider* Gesture; // 0x38(0x08)
	enum class ECommandForType For; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class SceneRig.DialogueScriptBlockImplicitRulesCommand
// Size: 0x38 (Inherited: 0x30)
struct UDialogueScriptBlockImplicitRulesCommand : UDialogueScriptCommand {
	bool BlockLayeredAnimation; // 0x30(0x01)
	bool BlockCameraChanges; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// Class SceneRig.DialogueScriptEndTimeDelayCommand
// Size: 0x38 (Inherited: 0x30)
struct UDialogueScriptEndTimeDelayCommand : UDialogueScriptCommand {
	float DelayValue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class SceneRig.DialogueScriptEventExplicitCameraShotCommand
// Size: 0x48 (Inherited: 0x38)
struct UDialogueScriptEventExplicitCameraShotCommand : UDialogueScriptEventCommand {
	struct UNameProvider* CameraShot; // 0x38(0x08)
	enum class ECommandLookAtType LookAt; // 0x40(0x01)
	bool BlockLineImplicitCameraChanges; // 0x41(0x01)
	bool BlockEndingCameraChanges; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// Class SceneRig.DialogueScriptEventEmotionCommand
// Size: 0x50 (Inherited: 0x38)
struct UDialogueScriptEventEmotionCommand : UDialogueScriptEventCommand {
	enum class EFacialEmotion Emotion; // 0x38(0x01)
	enum class ECommandForType For; // 0x39(0x01)
	bool ForFacial; // 0x3a(0x01)
	bool ForFullBody; // 0x3b(0x01)
	float BlendInTime; // 0x3c(0x04)
	bool UseBeforeSpeaking; // 0x40(0x01)
	bool UseAfterSpeaking; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float PostLineActiveTime; // 0x44(0x04)
	bool OverrideHoldTime; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float HoldTime; // 0x4c(0x04)
};

// Class SceneRig.DialogueScriptEventExplicitPoseGroupCommand
// Size: 0x50 (Inherited: 0x38)
struct UDialogueScriptEventExplicitPoseGroupCommand : UDialogueScriptEventCommand {
	struct UNameProvider* PoseGroup; // 0x38(0x08)
	bool OverrideDuration; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float MinDurationSeconds; // 0x44(0x04)
	float MaxDurationSeconds; // 0x48(0x04)
	enum class ECommandForType For; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class SceneRig.Float_Curve
// Size: 0xb0 (Inherited: 0x28)
struct UFloat_Curve : UFloatProvider {
	struct FRuntimeFloatCurve Curve; // 0x28(0x88)
};

// Class SceneRig.Float_MultiChannelNoise
// Size: 0x40 (Inherited: 0x28)
struct UFloat_MultiChannelNoise : UFloatProvider {
	struct TArray<struct FFloatMultiChannelNoiseChannel> Channels; // 0x28(0x10)
	bool Enabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class SceneRig.Float_SceneRigParameter
// Size: 0x30 (Inherited: 0x28)
struct UFloat_SceneRigParameter : UFloatProvider {
	struct FSceneRigParameterBinding_Float BoundParameter; // 0x28(0x08)
};

// Class SceneRig.Float_SceneRigStageParameter
// Size: 0x38 (Inherited: 0x28)
struct UFloat_SceneRigStageParameter : UFloatProvider {
	struct FSceneRigStage_FloatReference Reference; // 0x28(0x10)
};

// Class SceneRig.Float_TimeRigCoordinate
// Size: 0x30 (Inherited: 0x28)
struct UFloat_TimeRigCoordinate : UFloatProvider {
	struct FTimeRigCoordinate Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class SceneRig.Float_TransformHeightDifferenceWithMultiplier
// Size: 0x48 (Inherited: 0x28)
struct UFloat_TransformHeightDifferenceWithMultiplier : UFloatProvider {
	struct UTransformProvider* TransformA; // 0x28(0x08)
	struct UTransformProvider* TransformB; // 0x30(0x08)
	struct UFloatProvider* UpMultiplier; // 0x38(0x08)
	struct UFloatProvider* DownMultiplier; // 0x40(0x08)
};

// Class SceneRig.InitializeSceneRigActor
// Size: 0x60 (Inherited: 0x30)
struct UInitializeSceneRigActor : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Initialized; // 0x30(0x10)
	struct FMulticastInlineDelegate Failed; // 0x40(0x10)
	struct ASceneRigActor* m_SceneRigActor; // 0x50(0x08)
	enum class ETimeRigInitializingBehavior m_InitializingBehaviorType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	struct UInitializeSceneRigActor* Initialize(struct ASceneRigActor* SceneRigActor, enum class ETimeRigInitializingBehavior InitializingBehaviorType); // Function SceneRig.InitializeSceneRigActor.Initialize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18dd7d0
};

// Class SceneRig.InitializeCustomActorSceneRigActor
// Size: 0x68 (Inherited: 0x60)
struct UInitializeCustomActorSceneRigActor : UInitializeSceneRigActor {
	struct AActor* m_CustomActor; // 0x60(0x08)

	struct UInitializeCustomActorSceneRigActor* InitializeWithCustomActor(struct ASceneRigActor* SceneRigActor, struct AActor* CustomActor, enum class ETimeRigInitializingBehavior InitializingBehaviorType); // Function SceneRig.InitializeCustomActorSceneRigActor.InitializeWithCustomActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18dd8a0
};

// Class SceneRig.Int_Curve
// Size: 0xb0 (Inherited: 0x28)
struct UInt_Curve : UIntProvider {
	struct FRuntimeFloatCurve Curve; // 0x28(0x88)
};

// Class SceneRig.Int_SceneRigParameter
// Size: 0x30 (Inherited: 0x28)
struct UInt_SceneRigParameter : UIntProvider {
	struct FSceneRigParameterBinding_Int BoundParameter; // 0x28(0x08)
};

// Class SceneRig.Int_SceneRigStageParameter
// Size: 0x38 (Inherited: 0x28)
struct UInt_SceneRigStageParameter : UIntProvider {
	struct FSceneRigStage_IntReference Reference; // 0x28(0x10)
};

// Class SceneRig.Name_SceneRigStageParameter
// Size: 0x38 (Inherited: 0x28)
struct UName_SceneRigStageParameter : UNameProvider {
	struct FSceneRigStage_NameReference Reference; // 0x28(0x10)
};

// Class SceneRig.Object_BoundToSequence
// Size: 0x50 (Inherited: 0x38)
struct UObject_BoundToSequence : UActorProvider {
	struct FName ActorName; // 0x38(0x08)
	struct TWeakObjectPtr<struct UObject> CachedCaller; // 0x40(0x08)
	struct TWeakObjectPtr<struct AActor> CachedActor; // 0x48(0x08)
};

// Class SceneRig.Object_GameplayCamera
// Size: 0x38 (Inherited: 0x38)
struct UObject_GameplayCamera : UActorProvider {
};

// Class SceneRig.Object_LocalPlayer
// Size: 0x38 (Inherited: 0x38)
struct UObject_LocalPlayer : UActorProvider {
};

// Class SceneRig.Object_SceneRigBoundActor
// Size: 0x40 (Inherited: 0x38)
struct UObject_SceneRigBoundActor : UActorProvider {
	struct FName BoundObjectName; // 0x38(0x08)
};

// Class SceneRig.Object_SceneRigParameter
// Size: 0x30 (Inherited: 0x28)
struct UObject_SceneRigParameter : UObjectProvider {
	struct FSceneRigParameterBinding_Object BoundParameter; // 0x28(0x08)
};

// Class SceneRig.Object_SceneRigStageParameter
// Size: 0x38 (Inherited: 0x28)
struct UObject_SceneRigStageParameter : UObjectProvider {
	struct FSceneRigStage_ObjectReference Reference; // 0x28(0x10)
};

// Class SceneRig.Placeholder
// Size: 0x250 (Inherited: 0x248)
struct APlaceholder : AActor {
	struct USceneComponent* SceneComponent; // 0x248(0x08)
};

// Class SceneRig.PlaySceneRigActor
// Size: 0x70 (Inherited: 0x30)
struct UPlaySceneRigActor : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate PlayerAssigned; // 0x30(0x10)
	struct FMulticastInlineDelegate PlaybackStarted; // 0x40(0x10)
	struct FMulticastInlineDelegate PlaybackComplete; // 0x50(0x10)
	struct ASceneRigActor* m_SceneRigActor; // 0x60(0x08)
	enum class ETimeRigInitializingBehavior m_InitializingBehaviorType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)

	struct UPlaySceneRigActor* PlaySceneRig(struct ASceneRigActor* SceneRigActor, enum class ETimeRigInitializingBehavior InitializingBehaviorType); // Function SceneRig.PlaySceneRigActor.PlaySceneRig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18e3770
};

// Class SceneRig.PlayCustomActorSceneRigActor
// Size: 0x78 (Inherited: 0x70)
struct UPlayCustomActorSceneRigActor : UPlaySceneRigActor {
	struct AActor* m_CustomActor; // 0x70(0x08)

	struct UPlayCustomActorSceneRigActor* PlaySceneRigWithCustomActor(struct ASceneRigActor* SceneRigActor, struct AActor* CustomActor, enum class ETimeRigInitializingBehavior InitializingBehaviorType); // Function SceneRig.PlayCustomActorSceneRigActor.PlaySceneRigWithCustomActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18e3840
};

// Class SceneRig.PoseGroup_TagLookupOnAssets
// Size: 0x68 (Inherited: 0x28)
struct UPoseGroup_TagLookupOnAssets : UPoseGroupProvider {
	char pad_28[0x8]; // 0x28(0x08)
	struct FGameplayTagContainer Tags; // 0x30(0x20)
	struct TArray<struct UAnimationArchitectTagProvider*> TagProviders; // 0x50(0x10)
	struct UBaseArchitectFilter* Filter; // 0x60(0x08)
};

// Class SceneRig.SceneRigActionBase
// Size: 0x88 (Inherited: 0x88)
struct USceneRigActionBase : UTimeRigInterval {
};

// Class SceneRig.SceneAction_AccessibilitySubtitle
// Size: 0x98 (Inherited: 0x88)
struct USceneAction_AccessibilitySubtitle : USceneRigActionBase {
	struct FString LocDirectKey; // 0x88(0x10)
};

// Class SceneRig.SceneRigActionState
// Size: 0x50 (Inherited: 0x50)
struct USceneRigActionState : UTimeRigIntervalState {
};

// Class SceneRig.SceneActionState_AccessibilitySubtitle
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_AccessibilitySubtitle : USceneRigActionState {
};

// Class SceneRig.SceneRigObjectActionBase
// Size: 0xa0 (Inherited: 0x88)
struct USceneRigObjectActionBase : USceneRigActionBase {
	char pad_88[0x8]; // 0x88(0x08)
	bool bHasProxyParent; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UActorProvider* ActorProvider; // 0x98(0x08)
};

// Class SceneRig.SceneAction_ActorFunction
// Size: 0xd0 (Inherited: 0xa0)
struct USceneAction_ActorFunction : USceneRigObjectActionBase {
	struct FSceneActionActorFunctionReference FunctionReference; // 0xa0(0x30)
};

// Class SceneRig.SceneRigObjectActionState
// Size: 0x70 (Inherited: 0x50)
struct USceneRigObjectActionState : USceneRigActionState {
	char pad_50[0x18]; // 0x50(0x18)
	struct TWeakObjectPtr<struct UObject> ActionObject; // 0x68(0x08)
};

// Class SceneRig.SceneActionState_ActorFunction
// Size: 0x70 (Inherited: 0x70)
struct USceneActionState_ActorFunction : USceneRigObjectActionState {
};

// Class SceneRig.SceneAction_ActorIntervalFunctions
// Size: 0x130 (Inherited: 0xa0)
struct USceneAction_ActorIntervalFunctions : USceneRigObjectActionBase {
	struct FSceneActionActorFunctionReference OnEnterFunction; // 0xa0(0x30)
	struct FSceneActionActorTickFunctionReference TickFunction; // 0xd0(0x30)
	struct FSceneActionActorFunctionReference OnExitFunction; // 0x100(0x30)
};

// Class SceneRig.SceneActionState_ActorIntervalFunctions
// Size: 0x70 (Inherited: 0x70)
struct USceneActionState_ActorIntervalFunctions : USceneRigObjectActionState {
};

// Class SceneRig.SceneAction_AimAt
// Size: 0xb0 (Inherited: 0xa0)
struct USceneAction_AimAt : USceneRigObjectActionBase {
	struct UTransformProvider* AimTarget; // 0xa0(0x08)
	enum class EAimAtAxisType AimAxis; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class SceneRig.SceneActionState_AimAt
// Size: 0x70 (Inherited: 0x70)
struct USceneActionState_AimAt : USceneRigObjectActionState {
};

// Class SceneRig.SceneAction_AnimateCurves
// Size: 0xa0 (Inherited: 0xa0)
struct USceneAction_AnimateCurves : USceneRigObjectActionBase {
};

// Class SceneRig.SceneActionState_AnimateCurves
// Size: 0x70 (Inherited: 0x70)
struct USceneActionState_AnimateCurves : USceneRigObjectActionState {
};

// Class SceneRig.SceneAction_AnimateProperty
// Size: 0xc0 (Inherited: 0xa0)
struct USceneAction_AnimateProperty : USceneAction_AnimateCurves {
	struct FSceneRigObjectActionBase_ComponentName ComponentName; // 0xa0(0x08)
	struct FAnimateProperty_PropertyName PropertyName; // 0xa8(0x08)
	enum class ESceneAction_AnimateCurves_BlendMode BlendMode; // 0xb0(0x01)
	enum class ESceneAction_AnimateCurves_FillMode FillMode; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	float LoopCount; // 0xb4(0x04)
	bool bKeepStateOnCompletion; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class SceneRig.SceneActionState_AnimateProperty
// Size: 0x88 (Inherited: 0x70)
struct USceneActionState_AnimateProperty : USceneActionState_AnimateCurves {
	char pad_70[0x18]; // 0x70(0x18)
};

// Class SceneRig.SceneAction_AnimateFloatProperty
// Size: 0x158 (Inherited: 0xc0)
struct USceneAction_AnimateFloatProperty : USceneAction_AnimateProperty {
	struct FRuntimeFloatCurve Curve; // 0xc0(0x88)
	float DefaultValue; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct UTransformProvider* CartLocation; // 0x150(0x08)
};

// Class SceneRig.SceneActionState_AnimateFloatProperty
// Size: 0x90 (Inherited: 0x88)
struct USceneActionState_AnimateFloatProperty : USceneActionState_AnimateProperty {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class SceneRig.SceneAction_AnimateVectorProperty
// Size: 0x258 (Inherited: 0xc0)
struct USceneAction_AnimateVectorProperty : USceneAction_AnimateProperty {
	struct FRuntimeCurveVector Curve; // 0xc0(0x188)
	struct FVector DefaultValue; // 0x248(0x0c)
	char pad_254[0x4]; // 0x254(0x04)
};

// Class SceneRig.SceneActionState_AnimateVectorProperty
// Size: 0x98 (Inherited: 0x88)
struct USceneActionState_AnimateVectorProperty : USceneActionState_AnimateProperty {
	char pad_88[0x10]; // 0x88(0x10)
};

// Class SceneRig.SceneAction_AnimateColorProperty
// Size: 0x2d8 (Inherited: 0xc0)
struct USceneAction_AnimateColorProperty : USceneAction_AnimateProperty {
	struct FRuntimeCurveLinearColor Curve; // 0xc0(0x208)
	struct FLinearColor DefaultValue; // 0x2c8(0x10)
};

// Class SceneRig.SceneActionState_AnimateColorProperty
// Size: 0x98 (Inherited: 0x88)
struct USceneActionState_AnimateColorProperty : USceneActionState_AnimateProperty {
	char pad_88[0x10]; // 0x88(0x10)
};

// Class SceneRig.SceneAction_Animation
// Size: 0x220 (Inherited: 0xa0)
struct USceneAction_Animation : USceneRigObjectActionBase {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct UAnimationProvider* Animation; // 0xa8(0x08)
	struct FName SpecificComponentNameFilter; // 0xb0(0x08)
	struct UBlendSpaceInputProvider* BlendSpaceInput; // 0xb8(0x08)
	struct FAnimationRequestLayerReference Layer; // 0xc0(0x08)
	struct UAnimMaskAsset* Mask; // 0xc8(0x08)
	bool RegisterWithConversation; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FSceneRigAnimationPlacementOptions PlacementOptions; // 0xd8(0x30)
	struct FSceneRigAnimationClipRange ClipSubRange; // 0x108(0x28)
	struct FSceneRigAnimationPlaybackSpeed PlaybackSpeed; // 0x130(0x10)
	struct UBoolProvider* ReselectOnLoopBoundaries; // 0x140(0x08)
	struct UFloatProvider* MaxWeight; // 0x148(0x08)
	struct UFloatProvider* BlendInTime; // 0x150(0x08)
	struct UFloatProvider* BlendOutTime; // 0x158(0x08)
	struct UFloatProvider* HoldTime; // 0x160(0x08)
	struct UFloatProvider* InertialBlendInTime; // 0x168(0x08)
	struct UFloatProvider* InertialBlendOutTime; // 0x170(0x08)
	bool bBlendOutOnDialogueSkip; // 0x178(0x01)
	bool bEnableInertializationIfBlendOutSkipped; // 0x179(0x01)
	bool bAllowLateBlendIn; // 0x17a(0x01)
	bool bSuppressCameraCut; // 0x17b(0x01)
	enum class ESceneAction_ClothingTeleportMode ClothTeleportMode; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct UBoolProvider* KeepStateOnCompletion; // 0x180(0x08)
	struct UBoolProvider* SetupAnimationOnEnter; // 0x188(0x08)
	bool ScaleRootMotion; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct UFloatProvider* FemaleShoulderFixupAlpha; // 0x198(0x08)
	struct TArray<struct UTimeRigElement*> ChildElements; // 0x1a0(0x10)
	struct FTimeRigInputSymbol BlendOutFinish; // 0x1b0(0x18)
	struct FTimeRigOutputSymbol BlendIn; // 0x1c8(0x18)
	struct FTimeRigOutputSymbol BlendOut; // 0x1e0(0x18)
	struct FTimeRigOutputSymbol NaturalFinish; // 0x1f8(0x18)
	struct TArray<struct FTimeRigScratchAnimation> ScratchAnimations; // 0x210(0x10)
};

// Class SceneRig.SceneActionState_Animation
// Size: 0x2b0 (Inherited: 0x70)
struct USceneActionState_Animation : USceneRigObjectActionState {
	char pad_70[0x40]; // 0x70(0x40)
	struct FAnimationTrack AnimationTrack; // 0xb0(0x1d0)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SkeletalMeshComponent; // 0x280(0x08)
	float MaxWeight; // 0x288(0x04)
	float BlendInTime; // 0x28c(0x04)
	float BlendOutTime; // 0x290(0x04)
	float CurrentBlendWeight; // 0x294(0x04)
	bool CurrentlyInBlendInTime; // 0x298(0x01)
	bool CurrentlyInBlendOutTime; // 0x299(0x01)
	bool ShouldBeRegistered; // 0x29a(0x01)
	char pad_29B[0x5]; // 0x29b(0x05)
	struct UAnimationComponent* AnimationComponent; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)
};

// Class SceneRig.PoseSampler_AnimCurves
// Size: 0x58 (Inherited: 0x28)
struct UPoseSampler_AnimCurves : UPoseSampler {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SkeletalMeshComponent; // 0x28(0x08)
	int32_t LODThreshold; // 0x30(0x04)
	char pad_34[0x24]; // 0x34(0x24)
};

// Class SceneRig.SceneAction_AnimCurves
// Size: 0xb8 (Inherited: 0xa0)
struct USceneAction_AnimCurves : USceneRigObjectActionBase {
	struct FAnimationRequestLayerReference Layer; // 0xa0(0x08)
	struct TArray<struct FSceneActionAnimCurve> Curves; // 0xa8(0x10)
};

// Class SceneRig.SceneActionState_AnimCurves
// Size: 0x98 (Inherited: 0x70)
struct USceneActionState_AnimCurves : USceneRigObjectActionState {
	char pad_70[0x20]; // 0x70(0x20)
	struct UPoseSampler_AnimCurves* PoseSampler; // 0x90(0x08)
};

// Class SceneRig.SceneAction_Attach
// Size: 0xb0 (Inherited: 0xa0)
struct USceneAction_Attach : USceneRigObjectActionBase {
	struct UBoolProvider* PlacementIsMoving; // 0xa0(0x08)
	struct UTransformProvider* Placement; // 0xa8(0x08)
};

// Class SceneRig.SceneActionState_Attach
// Size: 0xc0 (Inherited: 0x70)
struct USceneActionState_Attach : USceneRigObjectActionState {
	bool PlacementIsMoving; // 0x70(0x01)
	bool PlacementIsValid; // 0x71(0x01)
	char pad_72[0xe]; // 0x72(0x0e)
	struct FTransform InitialPlacementTransform; // 0x80(0x30)
	struct UTransformProvider* PlacementProvider; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class SceneRig.SceneAction_Blueprint
// Size: 0xa8 (Inherited: 0xa0)
struct USceneAction_Blueprint : USceneRigObjectActionBase {
	struct USceneActionState_Blueprint* State; // 0xa0(0x08)

	void SetBranchID(struct FName BranchID); // Function SceneRig.SceneAction_Blueprint.SetBranchID // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x18e39c0
	void SetAutoDurationBP(float Duration); // Function SceneRig.SceneAction_Blueprint.SetAutoDurationBP // (Final|Native|Public|BlueprintCallable) // @ game+0x18e3940
	void OnSetTimeInsideIntervalPostActorTick(float Time, float LocalTime, bool IsScrubbing); // Function SceneRig.SceneAction_Blueprint.OnSetTimeInsideIntervalPostActorTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetTimeInsideInterval(float Time, float LocalTime, bool IsScrubbing); // Function SceneRig.SceneAction_Blueprint.OnSetTimeInsideInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnPauseInsideInterval(bool bPause); // Function SceneRig.SceneAction_Blueprint.OnPauseInsideInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnInstantPostActorTick(float Time, bool IsScrubbing); // Function SceneRig.SceneAction_Blueprint.OnInstantPostActorTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnInstant(float Time, bool IsScrubbing); // Function SceneRig.SceneAction_Blueprint.OnInstant // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function SceneRig.SceneAction_Blueprint.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function SceneRig.SceneAction_Blueprint.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDestroy(); // Function SceneRig.SceneAction_Blueprint.OnDestroy // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCreate(struct UObject* ActionState); // Function SceneRig.SceneAction_Blueprint.OnCreate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	bool IsProxyRequiredBP(); // Function SceneRig.SceneAction_Blueprint.IsProxyRequiredBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x18e3740
	bool IsInstant(); // Function SceneRig.SceneAction_Blueprint.IsInstant // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x18e3710
	bool IsInEditor(); // Function SceneRig.SceneAction_Blueprint.IsInEditor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18e36e0
	bool IsEnabledBP(); // Function SceneRig.SceneAction_Blueprint.IsEnabledBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18e36b0
	bool HasPostActorTick(); // Function SceneRig.SceneAction_Blueprint.HasPostActorTick // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x18e3680
	bool HasNormalTick(); // Function SceneRig.SceneAction_Blueprint.HasNormalTick // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x18e3650
	void GetValidBranchIDsBP(struct UObject* Caller, struct TSet<struct FName>& BranchIDs); // Function SceneRig.SceneAction_Blueprint.GetValidBranchIDsBP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	struct UTimeRig_StoryGraphNode* GetStoryGraphNode(struct UObject* Caller); // Function SceneRig.SceneAction_Blueprint.GetStoryGraphNode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18e35b0
	struct UTimeRig_StoryGraph* GetStoryGraph(struct UObject* Caller); // Function SceneRig.SceneAction_Blueprint.GetStoryGraph // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18e3510
	float GetStartTimeBP(); // Function SceneRig.SceneAction_Blueprint.GetStartTimeBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18e34e0
	float GetSortOrderPostActorTick(); // Function SceneRig.SceneAction_Blueprint.GetSortOrderPostActorTick // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x18e34a0
	float GetSortOrder(); // Function SceneRig.SceneAction_Blueprint.GetSortOrder // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x18e3460
	struct USceneRig* GetSceneRig(); // Function SceneRig.SceneAction_Blueprint.GetSceneRig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18e3430
	float GetIterationLength(); // Function SceneRig.SceneAction_Blueprint.GetIterationLength // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x18e33f0
	float GetDuration(); // Function SceneRig.SceneAction_Blueprint.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18e33c0
	struct FText GetDisplayName(); // Function SceneRig.SceneAction_Blueprint.GetDisplayName // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x18e3320
	struct UObject* GetContext(); // Function SceneRig.SceneAction_Blueprint.GetContext // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18e32f0
	float GetAutoDurationBP(); // Function SceneRig.SceneAction_Blueprint.GetAutoDurationBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x18e32b0
	struct UObject* GetActionObjectBP(); // Function SceneRig.SceneAction_Blueprint.GetActionObjectBP // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x18e3280
	struct FLinearColor GetActionColor(); // Function SceneRig.SceneAction_Blueprint.GetActionColor // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x18e3240
	void FinishNow(); // Function SceneRig.SceneAction_Blueprint.FinishNow // (Final|Native|Public|BlueprintCallable) // @ game+0x18e3220
	void FinishIn(float SecondsFromNow); // Function SceneRig.SceneAction_Blueprint.FinishIn // (Final|Native|Public|BlueprintCallable) // @ game+0x18e31a0
	bool DevOnly_IsHammerTime(); // Function SceneRig.SceneAction_Blueprint.DevOnly_IsHammerTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18e3170
};

// Class SceneRig.SceneActionState_Blueprint
// Size: 0x78 (Inherited: 0x70)
struct USceneActionState_Blueprint : USceneRigObjectActionState {
	struct USceneAction_Blueprint* BlueprintInstance; // 0x70(0x08)
};

// Class SceneRig.SceneAction_Camera
// Size: 0x130 (Inherited: 0x88)
struct USceneAction_Camera : USceneRigActionBase {
	enum class EManagedCameraPriority Priority; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UActorProvider* Camera; // 0x90(0x08)
	struct FCameraActionTransitionSettings TransitionInSettings; // 0x98(0x30)
	struct FCameraActionTransitionSettings TransitionOutSettings; // 0xc8(0x30)
	bool bCameraTransitionOutDelayed; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UActorProvider* InitialCamera; // 0x100(0x08)
	struct UActorProvider* FinalCamera; // 0x108(0x08)
	struct UFloatProvider* BlendTime; // 0x110(0x08)
	struct UFloatProvider* BlendTimeIntoGameCamera; // 0x118(0x08)
	bool bLazyBlendIntoGameCamera; // 0x120(0x01)
	enum class ESceneAction_CameraResetType GameCameraResetType; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
	struct UTransformProvider* GameCameraLookAtLocation; // 0x128(0x08)
};

// Class SceneRig.SceneActionState_Camera
// Size: 0x68 (Inherited: 0x50)
struct USceneActionState_Camera : USceneRigActionState {
	char pad_50[0x8]; // 0x50(0x08)
	struct AActor* CameraActor; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class SceneRig.SceneAction_CameraFixup
// Size: 0xb8 (Inherited: 0xa0)
struct USceneAction_CameraFixup : USceneRigObjectActionBase {
	enum class ECameraFixupLayer Layer; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct UCameraFixupOperation*> FixupOperations; // 0xa8(0x10)
};

// Class SceneRig.SceneActionState_CameraFixup
// Size: 0x90 (Inherited: 0x70)
struct USceneActionState_CameraFixup : USceneRigObjectActionState {
	enum class ECameraFixupLayer Layer; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct UCameraFixupOperationState*> FixupOperationStates; // 0x78(0x10)
	bool FirstFrameRefresh; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class SceneRig.SceneAction_CameraLookAtTarget
// Size: 0xa0 (Inherited: 0x88)
struct USceneAction_CameraLookAtTarget : USceneRigActionBase {
	struct UTransformProvider* LookAtLocation; // 0x88(0x08)
	enum class ECameraStackLookAtStrength LookAtStrength; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UActorProvider* TriggerVolume; // 0x98(0x08)
};

// Class SceneRig.SceneActionState_CameraLookAtTarget
// Size: 0x58 (Inherited: 0x50)
struct USceneActionState_CameraLookAtTarget : USceneRigActionState {
	struct ACameraStackLookAtTargetActor* LookAtTargetActor; // 0x50(0x08)
};

// Class SceneRig.SceneAction_CameraReset
// Size: 0xb0 (Inherited: 0x88)
struct USceneAction_CameraReset : USceneRigActionBase {
	enum class ECameraStackResetType ResetType; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UTransformProvider* ResetLookAtLocation; // 0x90(0x08)
	struct FRotator FixedArmRotationValue; // 0x98(0x0c)
	struct FVector2D RotationOffset; // 0xa4(0x08)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class SceneRig.SceneActionState_CameraReset
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_CameraReset : USceneRigActionState {
};

// Class SceneRig.SceneAction_CameraSetNamedTargetActor
// Size: 0xa0 (Inherited: 0x88)
struct USceneAction_CameraSetNamedTargetActor : USceneRigActionBase {
	struct FName TargetName; // 0x88(0x08)
	struct UActorProvider* TargetActor; // 0x90(0x08)
	bool bForceResetCamera; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class SceneRig.SceneActionState_CameraSetNamedTargetActor
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_CameraSetNamedTargetActor : USceneRigActionState {
};

// Class SceneRig.SceneAction_CameraStackModification
// Size: 0x100 (Inherited: 0xa0)
struct USceneAction_CameraStackModification : USceneRigObjectActionBase {
	struct UCameraStackModificationSettings* Operations; // 0xa0(0x08)
	struct TMap<struct FString, struct USceneRigParameter*> Parameters; // 0xa8(0x50)
	float BlendInDuration; // 0xf8(0x04)
	float BlendOutDuration; // 0xfc(0x04)
};

// Class SceneRig.SceneActionState_CameraStackModification
// Size: 0x80 (Inherited: 0x70)
struct USceneActionState_CameraStackModification : USceneRigObjectActionState {
	struct TArray<struct FCameraStackOperationState> OperationStates; // 0x70(0x10)
};

// Class SceneRig.SceneAction_CameraStackSetup
// Size: 0x110 (Inherited: 0xa0)
struct USceneAction_CameraStackSetup : USceneRigObjectActionBase {
	struct UTransformProvider* CameraTargetTransform; // 0xa0(0x08)
	struct UCameraStackSettings* CameraStack; // 0xa8(0x08)
	struct TMap<struct FString, struct USceneRigParameter*> Parameters; // 0xb0(0x50)
	float BlendInDuration; // 0x100(0x04)
	float BlendOutDuration; // 0x104(0x04)
	int32_t InputPriorityOverride; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// Class SceneRig.SceneActionState_CameraStackSetup
// Size: 0x78 (Inherited: 0x70)
struct USceneActionState_CameraStackSetup : USceneRigObjectActionState {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class SceneRig.SceneAction_ChangeOutfit
// Size: 0xa8 (Inherited: 0xa0)
struct USceneAction_ChangeOutfit : USceneRigObjectActionBase {
	struct FName Outfit; // 0xa0(0x08)
};

// Class SceneRig.SceneActionState_ChangeOutfit
// Size: 0x78 (Inherited: 0x70)
struct USceneActionState_ChangeOutfit : USceneRigObjectActionState {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class SceneRig.SceneAction_DisableClothSimulation
// Size: 0xc0 (Inherited: 0xa0)
struct USceneAction_DisableClothSimulation : USceneRigObjectActionBase {
	float BlendInTime; // 0xa0(0x04)
	float BlendOutTime; // 0xa4(0x04)
	bool bPiecesListIsInclusive; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FCharacterPieceType> PiecesList; // 0xb0(0x10)
};

// Class SceneRig.SceneActionState_DisableClothSimulation
// Size: 0x98 (Inherited: 0x70)
struct USceneActionState_DisableClothSimulation : USceneRigObjectActionState {
	struct USceneAction_DisableClothSimulation* DisableClothDefinition; // 0x70(0x08)
	char pad_78[0x20]; // 0x78(0x20)
};

// Class SceneRig.SceneAction_DisableConversationCamera
// Size: 0xa8 (Inherited: 0x88)
struct USceneAction_DisableConversationCamera : USceneRigActionBase {
	struct TArray<struct UNameProvider*> EnabledRegisteredCameraNames; // 0x88(0x10)
	struct TArray<struct UNameProvider*> DisabledRegisteredCameraNames; // 0x98(0x10)
};

// Class SceneRig.SceneActionState_DisableConversationCamera
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_DisableConversationCamera : USceneRigActionState {
};

// Class SceneRig.SceneAction_EmbeddedSceneRig
// Size: 0x90 (Inherited: 0x88)
struct USceneAction_EmbeddedSceneRig : USceneRigActionBase {
	struct USceneRigProvider* EmbeddedSceneRig; // 0x88(0x08)
};

// Class SceneRig.SceneActionState_EmbeddedSceneRig
// Size: 0x60 (Inherited: 0x50)
struct USceneActionState_EmbeddedSceneRig : USceneRigActionState {
	struct USceneRig* SceneRig; // 0x50(0x08)
	struct USceneRigInstanceContext* InstanceContext; // 0x58(0x08)

	void OnNamedEventChanged(struct FTimeRigCoordinate PreviousValue, struct FTimeRigCoordinate CurrentValue, struct UTimeRigInstanceContext* InContext); // Function SceneRig.SceneActionState_EmbeddedSceneRig.OnNamedEventChanged // (Final|Native|Public) // @ game+0x18e9080
};

// Class SceneRig.SceneAction_FadeOutFadeIn
// Size: 0xe8 (Inherited: 0x88)
struct USceneAction_FadeOutFadeIn : USceneRigActionBase {
	enum class EStandardManagedPriority FadePriority; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UFloatProvider* BlendTime; // 0x90(0x08)
	struct FColor FadeColor; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FTimeRigInputSymbol StartBlendOut; // 0xa0(0x18)
	struct FTimeRigOutputSymbol BlendIn; // 0xb8(0x18)
	struct FTimeRigOutputSymbol BlendOut; // 0xd0(0x18)
};

// Class SceneRig.SceneActionState_FadeOutFadeIn
// Size: 0x50 (Inherited: 0x50)
struct USceneActionState_FadeOutFadeIn : USceneRigActionState {
};

// Class SceneRig.SceneAction_FunctionEvent
// Size: 0xa8 (Inherited: 0xa0)
struct USceneAction_FunctionEvent : USceneRigObjectActionBase {
	struct FSceneActionFunctionEventReference FunctionReference; // 0xa0(0x08)
};

// Class SceneRig.SceneActionState_FunctionEvent
// Size: 0x70 (Inherited: 0x70)
struct USceneActionState_FunctionEvent : USceneRigObjectActionState {
};

// Class SceneRig.SceneAction_HUDVisibility
// Size: 0x90 (Inherited: 0x88)
struct USceneAction_HUDVisibility : USceneRigActionBase {
	bool ShouldBeHidden; // 0x88(0x01)
	bool ShowLetterboxUI; // 0x89(0x01)
	bool bAnimateOnEnter; // 0x8a(0x01)
	bool bAnimateOnExit; // 0x8b(0x01)
	enum class EStandardManagedPriority Priority; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// Class SceneRig.SceneActionState_HUDVisibility
// Size: 0xa8 (Inherited: 0x50)
struct USceneActionState_HUDVisibility : USceneRigActionState {
	struct TSet<struct UTimeRigElementState*> ElementStatesNotReadyToPlay; // 0x50(0x50)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class SceneRig.SceneAction_LookAt
// Size: 0x168 (Inherited: 0xa0)
struct USceneAction_LookAt : USceneRigObjectActionBase {
	enum class ESceneAction_LookAtPriority Priority; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct UFloatProvider* BlendInTime; // 0xa8(0x08)
	struct UFloatProvider* BlendOutTime; // 0xb0(0x08)
	struct UFloatProvider* TimeDelay; // 0xb8(0x08)
	struct UBoolProvider* KeepStateOnCompletion; // 0xc0(0x08)
	struct UFloatProvider* HeadLookAtAlpha; // 0xc8(0x08)
	struct UTransformProvider* HeadLookAtPlacement; // 0xd0(0x08)
	struct UFloatProvider* HeadYawOffset; // 0xd8(0x08)
	struct UFloatProvider* HeadPitchOffset; // 0xe0(0x08)
	struct UFloatProvider* LoosenessMultiplier; // 0xe8(0x08)
	struct UFloatProvider* TrackingSpeedMultiplier; // 0xf0(0x08)
	struct UFloatProvider* SpineMobility; // 0xf8(0x08)
	struct UBoolProvider* ApplyConstraints; // 0x100(0x08)
	struct UFloatProvider* EyeLookAtAlpha; // 0x108(0x08)
	struct UBoolProvider* EyeLookAtAdditive; // 0x110(0x08)
	struct UTransformProvider* EyeLookAtPlacement; // 0x118(0x08)
	struct UFloatProvider* BlinkAlpha; // 0x120(0x08)
	struct UBoolProvider* BlinkNow; // 0x128(0x08)
	struct UFloatProvider* MicroDartsAlpha; // 0x130(0x08)
	enum class GazeStatesEnum GazeState; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct UFloatProvider* EyeYawOffset; // 0x140(0x08)
	struct UFloatProvider* EyePitchOffset; // 0x148(0x08)
	struct UAimEyesData* IdleAimEyes; // 0x150(0x08)
	struct UAimEyesData* ListeningAimEyes; // 0x158(0x08)
	struct UAimEyesData* SpeakingAimEyes; // 0x160(0x08)
};

// Class SceneRig.SceneActionState_LookAt
// Size: 0xa0 (Inherited: 0x70)
struct USceneActionState_LookAt : USceneRigObjectActionState {
	char pad_70[0x18]; // 0x70(0x18)
	struct UAimEyesData* PrevIdleAimEyes; // 0x88(0x08)
	struct UAimEyesData* PrevSpeakingAimEyes; // 0x90(0x08)
	struct UAimEyesData* PrevListeningAimEyes; // 0x98(0x08)
};

// Class SceneRig.SceneAction_MimicActor
// Size: 0xf0 (Inherited: 0xa0)
struct USceneAction_MimicActor : USceneRigObjectActionBase {
	struct UActorProvider* ActorToMimic; // 0xa0(0x08)
	bool bMimicVisibility; // 0xa8(0x01)
	bool bMimicAnimation; // 0xa9(0x01)
	bool bMimicTransform; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
	struct FTransform Offset; // 0xb0(0x30)
	bool bFlipAroundFloor; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float FloorZ; // 0xe4(0x04)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class SceneRig.SceneActionState_MimicActor
// Size: 0x80 (Inherited: 0x70)
struct USceneActionState_MimicActor : USceneRigObjectActionState {
	struct USkeletalMeshComponent* MeshToModify; // 0x70(0x08)
	struct USkeletalMeshComponent* MeshToMimic; // 0x78(0x08)
};

// Class SceneRig.SceneAction_ModifyMaterialParameterCollection
// Size: 0x188 (Inherited: 0x88)
struct USceneAction_ModifyMaterialParameterCollection : USceneRigActionBase {
	struct UMaterialParameterCollection* ParameterCollection; // 0x88(0x08)
	bool bKeyTimesArePercentages; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TMap<struct FName, struct FRuntimeFloatCurve> Scalars; // 0x98(0x50)
	struct TMap<struct FName, struct FRuntimeCurveVector> Vectors; // 0xe8(0x50)
	struct TMap<struct FName, struct UTransformProvider*> Locations; // 0x138(0x50)
};

// Class SceneRig.SceneActionState_ModifyMaterialParameterCollection
// Size: 0x58 (Inherited: 0x50)
struct USceneActionState_ModifyMaterialParameterCollection : USceneRigActionState {
	char pad_50[0x8]; // 0x50(0x08)
};

// Class SceneRig.SceneAction_ModifyMaterials
// Size: 0x2d8 (Inherited: 0xa0)
struct USceneAction_ModifyMaterials : USceneAction_AnimateCurves {
	struct TMap<struct FName, struct FSmartMaterial> MaterialSwapsBySlotName; // 0xa0(0x50)
	struct TMap<struct UMaterialInterface*, struct FSmartMaterial> MaterialSwaps; // 0xf0(0x50)
	bool bOnlyAnimateSwaps; // 0x140(0x01)
	bool bKeyTimesArePercentages; // 0x141(0x01)
	bool bHoldValues; // 0x142(0x01)
	char pad_143[0x5]; // 0x143(0x05)
	struct TMap<struct FName, struct FRuntimeFloatCurve> Scalars; // 0x148(0x50)
	struct TMap<struct FName, struct FRuntimeCurveVector> Vectors; // 0x198(0x50)
	struct TMap<struct FName, struct FRuntimeCurveLinearColor> Colors; // 0x1e8(0x50)
	struct TMap<struct FName, struct UTransformProvider*> Locations; // 0x238(0x50)
	struct TMap<struct FName, struct FSmartTexture> Textures; // 0x288(0x50)
};

// Class SceneRig.SceneActionState_ModifyMaterials
// Size: 0x1b0 (Inherited: 0x70)
struct USceneActionState_ModifyMaterials : USceneActionState_AnimateCurves {
	struct TMap<struct UMaterialInstanceDynamic*, struct UMaterialInterface*> InstanceToOriginalMaterialMap; // 0x70(0x50)
	char pad_C0[0xa0]; // 0xc0(0xa0)
	struct TMap<struct FName, struct UTexture*> OriginalTextures; // 0x160(0x50)
};

// Class SceneRig.SceneAction_ParticleSystemActivation
// Size: 0xa8 (Inherited: 0xa0)
struct USceneAction_ParticleSystemActivation : USceneRigObjectActionBase {
	enum class EParticleSystemActivation Activation; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class SceneRig.SceneActionState_ParticleSystemActivation
// Size: 0x70 (Inherited: 0x70)
struct USceneActionState_ParticleSystemActivation : USceneRigObjectActionState {
};

// Class SceneRig.SceneAction_ParticleSystemTrigger
// Size: 0xa0 (Inherited: 0xa0)
struct USceneAction_ParticleSystemTrigger : USceneRigObjectActionBase {
};

// Class SceneRig.SceneActionState_ParticleSystemTrigger
// Size: 0x70 (Inherited: 0x70)
struct USceneActionState_ParticleSystemTrigger : USceneRigObjectActionState {
};

// Class SceneRig.MoviePlayerInterface
// Size: 0x28 (Inherited: 0x28)
struct UMoviePlayerInterface : UInterface {

	void SetOpacity(float Opacity); // Function SceneRig.MoviePlayerInterface.SetOpacity // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void SetForegroundOpacity(float Opacity); // Function SceneRig.MoviePlayerInterface.SetForegroundOpacity // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
};

// Class SceneRig.SceneAction_PlayBinkMedia
// Size: 0xe0 (Inherited: 0x88)
struct USceneAction_PlayBinkMedia : USceneRigActionBase {
	struct UMediaSource* MediaSource; // 0x88(0x08)
	struct UDataTable* SubtitlesDataTable; // 0x90(0x08)
	bool bOverridesSceneRig; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float EffectVolumeFactor; // 0x9c(0x04)
	float VoiceVolumeFactor; // 0xa0(0x04)
	float FudgeFactor; // 0xa4(0x04)
	bool bDelayedOpen; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UObject* WidgetClass; // 0xb0(0x08)
	struct UFloatProvider* Opacity; // 0xb8(0x08)
	struct UFloatProvider* ForegroundOpacity; // 0xc0(0x08)
	struct UBinkMediaPlayer* BinkMediaPlayer; // 0xc8(0x08)
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class SceneRig.SceneActionState_PlayBinkMedia
// Size: 0x88 (Inherited: 0x50)
struct USceneActionState_PlayBinkMedia : USceneRigActionState {
	struct UUserWidget* Widget; // 0x50(0x08)
	struct UBinkMediaPlayer* BinkMediaPlayer; // 0x58(0x08)
	bool bHasValidEnter; // 0x60(0x01)
	char pad_61[0x27]; // 0x61(0x27)

	void OnMediaOpened(struct FString OpenedUrl); // Function SceneRig.SceneActionState_PlayBinkMedia.OnMediaOpened // (Final|Native|Private) // @ game+0x18eee30
	void OnMediaFailedToOpen(); // Function SceneRig.SceneActionState_PlayBinkMedia.OnMediaFailedToOpen // (Final|Native|Private) // @ game+0x18eee10
};

// Class SceneRig.SceneAction_PlayFMV
// Size: 0xa0 (Inherited: 0x88)
struct USceneAction_PlayFMV : USceneRigActionBase {
	struct UMediaSource* MediaSource; // 0x88(0x08)
	bool bOverridesSceneRig; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float FudgeFactor; // 0x94(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x98(0x08)
};

// Class SceneRig.SceneActionState_PlayFMV
// Size: 0x60 (Inherited: 0x50)
struct USceneActionState_PlayFMV : USceneRigActionState {
	struct UUserWidget* Widget; // 0x50(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x58(0x08)

	void OnMediaOpened(struct FString OpenedUrl); // Function SceneRig.SceneActionState_PlayFMV.OnMediaOpened // (Final|Native|Private) // @ game+0x18eef20
};

// Class SceneRig.SceneAction_PlaySceneRig
// Size: 0xb0 (Inherited: 0x88)
struct USceneAction_PlaySceneRig : USceneRigActionBase {
	struct USceneRigProvider* SceneRigProvider; // 0x88(0x08)
	enum class ESceneAction_PlaySceneRigInitializeType Initialize; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FTimeRigOutputSymbol Started; // 0x98(0x18)
};

// Class SceneRig.SceneActionState_PlaySceneRig
// Size: 0x60 (Inherited: 0x50)
struct USceneActionState_PlaySceneRig : USceneRigActionState {
	char pad_50[0x10]; // 0x50(0x10)
};

// Class SceneRig.SceneAction_PoseGroup
// Size: 0xb0 (Inherited: 0xa0)
struct USceneAction_PoseGroup : USceneRigObjectActionBase {
	struct UPoseGroupProvider* PoseGroupProvider; // 0xa0(0x08)
	bool RegisterWithConversation; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class SceneRig.SceneActionState_PoseGroup
// Size: 0x78 (Inherited: 0x70)
struct USceneActionState_PoseGroup : USceneRigObjectActionState {
	struct UPoseGroup* CurrentPoseGroup; // 0x70(0x08)
};

// Class SceneRig.SceneAction_RecordPoseMatch
// Size: 0xa0 (Inherited: 0xa0)
struct USceneAction_RecordPoseMatch : USceneRigObjectActionBase {
};

// Class SceneRig.SceneActionState_RecordPoseMatch
// Size: 0x70 (Inherited: 0x70)
struct USceneActionState_RecordPoseMatch : USceneRigObjectActionState {
};

// Class SceneRig.SceneAction_ScreenFade
// Size: 0xc0 (Inherited: 0x88)
struct USceneAction_ScreenFade : USceneRigActionBase {
	struct UFadeProvider* Fader; // 0x88(0x08)
	enum class EFadeType Type; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UFloatProvider* ManualFadeValue; // 0x98(0x08)
	struct UBoolProvider* KeepStateOnCompletion; // 0xa0(0x08)
	struct UBoolProvider* KeepFadeAfterSceneRigCompletion; // 0xa8(0x08)
	enum class ETimeRigFadeEventType FadeEventType; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct UBoolProvider* EnableFading; // 0xb8(0x08)
};

// Class SceneRig.SceneActionState_ScreenFade
// Size: 0x58 (Inherited: 0x50)
struct USceneActionState_ScreenFade : USceneRigActionState {
	char pad_50[0x8]; // 0x50(0x08)
};

// Class SceneRig.SceneAction_Sequence
// Size: 0xb0 (Inherited: 0x88)
struct USceneAction_Sequence : USceneRigActionBase {
	struct ULevelSequence* Sequence; // 0x88(0x08)
	bool Looping; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float SequenceStart; // 0x94(0x04)
	float SequenceFinish; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct FSceneActionSequence_ActorMapping> ActorMapping; // 0xa0(0x10)
};

// Class SceneRig.SceneActionState_Sequence
// Size: 0x80 (Inherited: 0x50)
struct USceneActionState_Sequence : USceneRigActionState {
	char pad_50[0x10]; // 0x50(0x10)
	struct ULevelSequencePlayer* SequencePlayer; // 0x60(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x68(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> PossessedActors; // 0x70(0x10)
};

// Class SceneRig.SceneAction_SetLightingChannels
// Size: 0xa8 (Inherited: 0xa0)
struct USceneAction_SetLightingChannels : USceneRigObjectActionBase {
	struct FLightingChannels LightingChannels; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class SceneRig.SceneActionState_SetLightingChannels
// Size: 0xc0 (Inherited: 0x70)
struct USceneActionState_SetLightingChannels : USceneRigObjectActionState {
	char pad_70[0x50]; // 0x70(0x50)
};

// Class SceneRig.SceneAction_SetProperty
// Size: 0xb8 (Inherited: 0xa0)
struct USceneAction_SetProperty : USceneRigObjectActionBase {
	bool bConstant; // 0xa0(0x01)
	bool bKeepStateOnCompletion; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	struct FSceneRigObjectActionBase_ComponentName ComponentName; // 0xa4(0x08)
	struct FSetProperty_PropertyName PropertyName; // 0xac(0x08)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class SceneRig.SceneActionState_SetProperty
// Size: 0x88 (Inherited: 0x70)
struct USceneActionState_SetProperty : USceneRigObjectActionState {
	char pad_70[0x18]; // 0x70(0x18)
};

// Class SceneRig.SceneAction_SetBoolProperty
// Size: 0xc0 (Inherited: 0xb8)
struct USceneAction_SetBoolProperty : USceneAction_SetProperty {
	struct UBoolProvider* InputValue; // 0xb8(0x08)
};

// Class SceneRig.SceneActionState_SetBoolProperty
// Size: 0x90 (Inherited: 0x88)
struct USceneActionState_SetBoolProperty : USceneActionState_SetProperty {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class SceneRig.SceneAction_SetIntProperty
// Size: 0xc0 (Inherited: 0xb8)
struct USceneAction_SetIntProperty : USceneAction_SetProperty {
	struct UIntProvider* InputValue; // 0xb8(0x08)
};

// Class SceneRig.SceneActionState_SetIntProperty
// Size: 0x90 (Inherited: 0x88)
struct USceneActionState_SetIntProperty : USceneActionState_SetProperty {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class SceneRig.SceneAction_SetFloatProperty
// Size: 0xc0 (Inherited: 0xb8)
struct USceneAction_SetFloatProperty : USceneAction_SetProperty {
	struct UFloatProvider* InputValue; // 0xb8(0x08)
};

// Class SceneRig.SceneActionState_SetFloatProperty
// Size: 0x90 (Inherited: 0x88)
struct USceneActionState_SetFloatProperty : USceneActionState_SetProperty {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class SceneRig.SceneAction_SetVectorProperty
// Size: 0xc0 (Inherited: 0xb8)
struct USceneAction_SetVectorProperty : USceneAction_SetProperty {
	struct UVectorProvider* InputValue; // 0xb8(0x08)
};

// Class SceneRig.SceneActionState_SetVectorProperty
// Size: 0x98 (Inherited: 0x88)
struct USceneActionState_SetVectorProperty : USceneActionState_SetProperty {
	char pad_88[0x10]; // 0x88(0x10)
};

// Class SceneRig.SceneAction_SlaveToSpline
// Size: 0xb0 (Inherited: 0xa0)
struct USceneAction_SlaveToSpline : USceneRigObjectActionBase {
	struct UActorProvider* SplineActor; // 0xa0(0x08)
	struct UFloatProvider* DistanceAlongSpline; // 0xa8(0x08)
};

// Class SceneRig.SceneActionState_SlaveToSpline
// Size: 0x78 (Inherited: 0x70)
struct USceneActionState_SlaveToSpline : USceneRigObjectActionState {
	struct USplineComponent* SplineComponent; // 0x70(0x08)
};

// Class SceneRig.SceneAction_SpawnActor
// Size: 0xa0 (Inherited: 0x88)
struct USceneAction_SpawnActor : USceneRigActionBase {
	struct UActorSpawner* Spawner; // 0x88(0x08)
	struct TArray<struct UTimeRigElement*> ChildElements; // 0x90(0x10)
};

// Class SceneRig.SceneActionState_SpawnActor
// Size: 0x70 (Inherited: 0x50)
struct USceneActionState_SpawnActor : USceneRigActionState {
	char pad_50[0x18]; // 0x50(0x18)
	struct AActor* Actor; // 0x68(0x08)
};

// Class SceneRig.SceneAction_SpawnActorAllowAsChild
// Size: 0xa0 (Inherited: 0xa0)
struct USceneAction_SpawnActorAllowAsChild : USceneRigObjectActionBase {
};

// Class SceneRig.FXRule
// Size: 0x28 (Inherited: 0x28)
struct UFXRule : UObject {

	bool IsMatch(); // Function SceneRig.FXRule.IsMatch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
};

// Class SceneRig.FXOverrideFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFXOverrideFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsMatch(struct FFXOverride& FXOverride); // Function SceneRig.FXOverrideFunctionLibrary.IsMatch // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x18eed60
};

// Class SceneRig.SceneAction_StitchTester
// Size: 0xb8 (Inherited: 0xa0)
struct USceneAction_StitchTester : USceneRigObjectActionBase {
	struct FAnimationRequestLayerReference Layer; // 0xa0(0x08)
	float FrontBackDistance; // 0xa8(0x04)
	float LeftRightDistance; // 0xac(0x04)
	int32_t MoveCount; // 0xb0(0x04)
	int32_t WaitCount; // 0xb4(0x04)
};

// Class SceneRig.SceneActionState_StitchTester
// Size: 0x100 (Inherited: 0x70)
struct USceneActionState_StitchTester : USceneRigObjectActionState {
	char pad_70[0x10]; // 0x70(0x10)
	struct FTransform CurrentTransform; // 0x80(0x30)
	char pad_B0[0x40]; // 0xb0(0x40)
	struct AActor* Actor; // 0xf0(0x08)
	struct USceneActionState_Transform* TransformActionState; // 0xf8(0x08)
};

// Class SceneRig.SceneAction_Transform
// Size: 0x590 (Inherited: 0xa0)
struct USceneAction_Transform : USceneAction_AnimateCurves {
	struct FAnimationRequestLayerReference Layer; // 0xa0(0x08)
	struct UTransformProvider* ParentTransform; // 0xa8(0x08)
	bool bConstant; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FRuntimeCurveVector TranslateCurve; // 0xb8(0x188)
	struct FRuntimeCurveVector RotateCurve; // 0x240(0x188)
	struct FRuntimeCurveVector ScaleCurve; // 0x3c8(0x188)
	struct FTransform DefaultValue; // 0x550(0x30)
	bool bHoldTransform; // 0x580(0x01)
	bool bApplyCharacterFixup; // 0x581(0x01)
	bool bForceTransform; // 0x582(0x01)
	bool bParentTransformIsStatic; // 0x583(0x01)
	enum class ESceneAction_ClothingTeleportMode ClothTeleportMode; // 0x584(0x01)
	char pad_585[0xb]; // 0x585(0x0b)
};

// Class SceneRig.SceneActionState_Transform
// Size: 0x100 (Inherited: 0x70)
struct USceneActionState_Transform : USceneActionState_AnimateCurves {
	char pad_70[0x10]; // 0x70(0x10)
	bool IsPossiblyRegistered; // 0x80(0x01)
	bool IsRegistered; // 0x81(0x01)
	char pad_82[0xe]; // 0x82(0x0e)
	struct FTransform CurrentTransform; // 0x90(0x30)
	char pad_C0[0x40]; // 0xc0(0x40)
};

// Class SceneRig.SceneAction_Unskippable
// Size: 0x88 (Inherited: 0x88)
struct USceneAction_Unskippable : USceneRigActionBase {
};

// Class SceneRig.SceneActionState_Unskippable
// Size: 0x70 (Inherited: 0x50)
struct USceneActionState_Unskippable : USceneRigActionState {
	char pad_50[0x20]; // 0x50(0x20)
};

// Class SceneRig.SceneAction_Visibility
// Size: 0xa8 (Inherited: 0xa0)
struct USceneAction_Visibility : USceneRigObjectActionBase {
	enum class EManagedVisibilityPriority Priority; // 0xa0(0x01)
	bool ShouldBeHidden; // 0xa1(0x01)
	bool IncludeChildActors; // 0xa2(0x01)
	char pad_A3[0x5]; // 0xa3(0x05)
};

// Class SceneRig.SceneActionState_Visibility
// Size: 0x80 (Inherited: 0x70)
struct USceneActionState_Visibility : USceneRigObjectActionState {
	char pad_70[0x8]; // 0x70(0x08)
	bool PreviouslyHidden; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class SceneRig.SceneRigParameter
// Size: 0x38 (Inherited: 0x28)
struct USceneRigParameter : UObject {
	struct FString Name; // 0x28(0x10)
};

// Class SceneRig.SceneRigParameter_Animation
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameter_Animation : USceneRigParameter {
	struct UAnimationProvider* Value; // 0x38(0x08)
};

// Class SceneRig.SceneRigParameterDefinition
// Size: 0x38 (Inherited: 0x28)
struct USceneRigParameterDefinition : UObject {
	struct FString Name; // 0x28(0x10)
};

// Class SceneRig.SceneRigParameterDefinition_Animation
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameterDefinition_Animation : USceneRigParameterDefinition {
	struct UAnimationProvider* DefaultValue; // 0x38(0x08)
};

// Class SceneRig.SceneRigParameter_Bool
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameter_Bool : USceneRigParameter {
	bool Value; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class SceneRig.SceneRigParameterDefinition_Bool
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameterDefinition_Bool : USceneRigParameterDefinition {
	bool DefaultValue; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class SceneRig.SceneRigParameter_DialogueEvent
// Size: 0xa0 (Inherited: 0x38)
struct USceneRigParameter_DialogueEvent : USceneRigParameter {
	struct FSceneRigDialogTrackSectionData Value; // 0x38(0x68)
};

// Class SceneRig.SceneRigParameterDefinition_DialogueEvent
// Size: 0xa0 (Inherited: 0x38)
struct USceneRigParameterDefinition_DialogueEvent : USceneRigParameterDefinition {
	struct FSceneRigDialogTrackSectionData DefaultEvent; // 0x38(0x68)
};

// Class SceneRig.SceneRigParameter_Float
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameter_Float : USceneRigParameter {
	float Value; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class SceneRig.SceneRigParameterDefinition_Float
// Size: 0x48 (Inherited: 0x38)
struct USceneRigParameterDefinition_Float : USceneRigParameterDefinition {
	float DefaultValue; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UFloatProvider* DefaultValueProvider; // 0x40(0x08)
};

// Class SceneRig.SceneRigParameter_FString
// Size: 0x48 (Inherited: 0x38)
struct USceneRigParameter_FString : USceneRigParameter {
	struct FString Value; // 0x38(0x10)
};

// Class SceneRig.SceneRigParameterDefinition_FString
// Size: 0x48 (Inherited: 0x38)
struct USceneRigParameterDefinition_FString : USceneRigParameterDefinition {
	struct FString DefaultValue; // 0x38(0x10)
};

// Class SceneRig.SceneRigParameter_Int
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameter_Int : USceneRigParameter {
	int32_t Value; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class SceneRig.SceneRigParameterDefinition_Int
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameterDefinition_Int : USceneRigParameterDefinition {
	int32_t DefaultValue; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class SceneRig.SceneRigParameter_Object
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameter_Object : USceneRigParameter {
	struct UObjectProvider* Value; // 0x38(0x08)
};

// Class SceneRig.SceneRigParameterDefinition_Object
// Size: 0x48 (Inherited: 0x38)
struct USceneRigParameterDefinition_Object : USceneRigParameterDefinition {
	struct UObjectProvider* DefaultObject; // 0x38(0x08)
	bool EvaluateOnce; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class SceneRig.SceneRigParameter_Transform
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameter_Transform : USceneRigParameter {
	struct UTransformProvider* Value; // 0x38(0x08)
};

// Class SceneRig.SceneRigParameterDefinition_Transform
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameterDefinition_Transform : USceneRigParameterDefinition {
	struct UTransformProvider* DefaultValue; // 0x38(0x08)
};

// Class SceneRig.SceneRigParameter_AnimationTransform
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameter_AnimationTransform : USceneRigParameter {
	struct UAnimationTransformProvider* Value; // 0x38(0x08)
};

// Class SceneRig.SceneRigParameterDefinition_AnimationTransform
// Size: 0x40 (Inherited: 0x38)
struct USceneRigParameterDefinition_AnimationTransform : USceneRigParameterDefinition {
	struct UAnimationTransformProvider* DefaultValue; // 0x38(0x08)
};

// Class SceneRig.SceneRigParameter_Vector
// Size: 0x48 (Inherited: 0x38)
struct USceneRigParameter_Vector : USceneRigParameter {
	struct FVector Value; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class SceneRig.SceneRigParameterDefinition_Vector
// Size: 0x48 (Inherited: 0x38)
struct USceneRigParameterDefinition_Vector : USceneRigParameterDefinition {
	struct FVector DefaultValue; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class SceneRig.SceneParameterInterface
// Size: 0x28 (Inherited: 0x28)
struct USceneParameterInterface : UInterface {

	struct USceneRigStageParameterBlock* CreateParameterBlock(struct UObject* OuterObject); // Function SceneRig.SceneParameterInterface.CreateParameterBlock // (Native|Public|BlueprintCallable) // @ game+0x18f3650
};

// Class SceneRig.SceneRig
// Size: 0x238 (Inherited: 0x168)
struct USceneRig : UTimeRig {
	char pad_168[0x18]; // 0x168(0x18)
	bool BakeSequenceDebug; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct USceneRigInterfaceDefinition* Interface; // 0x188(0x08)
	struct TArray<struct FSceneRigBoundObject> BoundObjects; // 0x190(0x10)
	struct TArray<struct UAnimationArchitectTagProvider*> TagProviders; // 0x1a0(0x10)
	struct USceneRigStage* DefaultStage; // 0x1b0(0x08)
	bool PreviewStageDriver; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct TArray<struct UBaseArchitectAsset*> LookupAssets; // 0x1c0(0x10)
	bool DebugInEditor; // 0x1d0(0x01)
	bool StartDebuggingPaused; // 0x1d1(0x01)
	bool bShouldSimulatePhysics; // 0x1d2(0x01)
	bool bInstantlySkippable; // 0x1d3(0x01)
	float PlayerSortOrder; // 0x1d4(0x04)
	struct FSceneRigStage_Transform SceneRoot; // 0x1d8(0x18)
	struct TArray<struct USceneRigStage_NamedParameter*> NamedParameters; // 0x1f0(0x10)
	struct TSoftObjectPtr<UWorld> CinematicPreviewLevel; // 0x200(0x28)
	struct TArray<struct TSoftObjectPtr<UWorld>> PreviewLevels; // 0x228(0x10)

	void StartPrecaching(struct UObject* WorldContextObject, struct FDelegate& PrecacheComplete); // Function SceneRig.SceneRig.StartPrecaching // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x18f4600
	struct USceneRigPlayer* PlayWithDefaultParameters(struct UObject* WorldContextObject, struct UObject* PlayerParent, enum class ETimeRigInitializingBehavior InitializingBehaviorType); // Function SceneRig.SceneRig.PlayWithDefaultParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x18f4390
	struct USceneRigPlayer* Play(struct FSceneRigParameters& Parameters, struct UObject* PlayerParent, enum class ETimeRigInitializingBehavior InitializingBehaviorType); // Function SceneRig.SceneRig.Play // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18f41a0
	struct USceneRigPlayer* InitializePlayerWithDefaultParameters(struct UObject* WorldContext, struct UObject* PlayerParent, enum class ETimeRigInitializingBehavior InitializingBehaviorType); // Function SceneRig.SceneRig.InitializePlayerWithDefaultParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x18f3ad0
	struct USceneRigPlayer* InitializePlayer(struct FSceneRigParameters& Parameters, struct UObject* PlayerParent, enum class ETimeRigInitializingBehavior InitializingBehaviorType); // Function SceneRig.SceneRig.InitializePlayer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18f3910
	struct USceneRigPlayer* FindPlayer(struct UObject* WorldContextObject); // Function SceneRig.SceneRig.FindPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18f3720
	void CreateDefaultParameters(struct FSceneRigParameters& Parameters, struct UObject* WorldContextObject); // Function SceneRig.SceneRig.CreateDefaultParameters // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x18f34d0
};

// Class SceneRig.SceneRigState
// Size: 0x98 (Inherited: 0x78)
struct USceneRigState : UTimeRigState {
	char pad_78[0x18]; // 0x78(0x18)
	struct ULevelSequencePlayer* SequencePlayer; // 0x90(0x08)
};

// Class SceneRig.SceneRig_CustomActor
// Size: 0x250 (Inherited: 0x238)
struct USceneRig_CustomActor : USceneRig {
	struct FSceneRigStage_Actor CustomActor; // 0x238(0x18)
};

// Class SceneRig.SceneRigProvider
// Size: 0x28 (Inherited: 0x28)
struct USceneRigProvider : UObjectProvider {
};

// Class SceneRig.SceneRig_Direct
// Size: 0x30 (Inherited: 0x28)
struct USceneRig_Direct : USceneRigProvider {
	struct USceneRig* SceneRig; // 0x28(0x08)
};

// Class SceneRig.SceneRig_Fallback
// Size: 0x38 (Inherited: 0x28)
struct USceneRig_Fallback : USceneRigProvider {
	struct TArray<struct USceneRigProvider*> Providers; // 0x28(0x10)
};

// Class SceneRig.SceneRig_FromVariants
// Size: 0x30 (Inherited: 0x28)
struct USceneRig_FromVariants : USceneRigProvider {
	struct USceneRigVariants* Variants; // 0x28(0x08)
};

// Class SceneRig.SceneRig_StoryGraph
// Size: 0x90 (Inherited: 0x80)
struct USceneRig_StoryGraph : UTimeRig_StoryGraph {
	char pad_80[0x8]; // 0x80(0x08)
	struct USceneRigProvider* AmbientSceneRig; // 0x88(0x08)
};

// Class SceneRig.SceneRig_TagLookup
// Size: 0x60 (Inherited: 0x28)
struct USceneRig_TagLookup : USceneRigProvider {
	struct UActorProvider* LookupOnActor; // 0x28(0x08)
	struct FGameplayTagContainer Tags; // 0x30(0x20)
	struct TArray<struct UAnimationArchitectTagProvider*> TagProviders; // 0x50(0x10)
};

// Class SceneRig.SceneRig_TagLookupWithAssets
// Size: 0x68 (Inherited: 0x28)
struct USceneRig_TagLookupWithAssets : USceneRigProvider {
	char pad_28[0x8]; // 0x28(0x08)
	struct UBaseArchitectAsset* LookupAsset; // 0x30(0x08)
	struct FGameplayTagContainer Tags; // 0x38(0x20)
	struct TArray<struct UAnimationArchitectTagProvider*> TagProviders; // 0x58(0x10)
};

// Class SceneRig.SceneRigBakeSequence
// Size: 0x28 (Inherited: 0x28)
struct USceneRigBakeSequence : UInterface {
};

// Class SceneRig.SceneRigActor
// Size: 0x4b0 (Inherited: 0x248)
struct ASceneRigActor : AActor {
	char pad_248[0x58]; // 0x248(0x58)
	bool bAutoInitialize; // 0x2a0(0x01)
	bool bAutoPlay; // 0x2a1(0x01)
	char pad_2A2[0x2]; // 0x2a2(0x02)
	float StartTime; // 0x2a4(0x04)
	char pad_2A8[0x1]; // 0x2a8(0x01)
	bool LoadStage; // 0x2a9(0x01)
	bool bCreatePreviewActors; // 0x2aa(0x01)
	char pad_2AB[0x5]; // 0x2ab(0x05)
	struct FKey DebugTriggerSceneRig; // 0x2b0(0x18)
	bool LoopIndefinitely; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct USceneComponent* SceneComponent; // 0x2d0(0x08)
	struct TArray<struct TWeakObjectPtr<struct ATriggerBase>> TriggerVolumes; // 0x2d8(0x10)
	char pad_2E8[0x58]; // 0x2e8(0x58)
	struct USceneRig* SceneRig; // 0x340(0x08)
	struct USceneRigProvider* SceneRigProvider; // 0x348(0x08)
	struct TArray<struct FName> LookupAlias; // 0x350(0x10)
	struct TWeakObjectPtr<struct USceneRigPlayer> SceneRigPlayer; // 0x360(0x08)
	struct FSceneRigParameters SceneInterface; // 0x368(0x88)
	struct FMulticastInlineDelegate OnSetPlaying; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnPlaybackAlmostComplete; // 0x400(0x10)
	struct USceneRigStageContainer* StageContainer; // 0x410(0x08)
	char pad_418[0x60]; // 0x418(0x60)
	struct TArray<struct ULevelStreaming*> StreamedStages; // 0x478(0x10)
	char pad_488[0x28]; // 0x488(0x28)

	void TriggerEvent(struct FName EventName); // Function SceneRig.SceneRigActor.TriggerEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x18f48d0
	void StopRepeatedPlay(bool StopCurrentlyPlaying); // Function SceneRig.SceneRigActor.StopRepeatedPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x18f4840
	void StopImmediate(); // Function SceneRig.SceneRigActor.StopImmediate // (Final|Native|Public|BlueprintCallable) // @ game+0x18f4820
	void Stop(); // Function SceneRig.SceneRigActor.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x18f4800
	struct USceneRigPlayer* StartRepeatedPlay(float MinRepeatDelay, float MaxRepeatDelay, enum class ETimeRigInitializingBehavior InitializingBehaviorType); // Function SceneRig.SceneRigActor.StartRepeatedPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x18f46f0
	void ShowSkipUI(bool bShow); // Function SceneRig.SceneRigActor.ShowSkipUI // (Final|Native|Public|BlueprintCallable) // @ game+0x18f4570
	void SetPlaybackScale(float Scale); // Function SceneRig.SceneRigActor.SetPlaybackScale // (Final|Native|Public|BlueprintCallable) // @ game+0x18f44f0
	void Resume(); // Function SceneRig.SceneRigActor.Resume // (Final|Native|Public|BlueprintCallable) // @ game+0x18f44d0
	bool PlayingOnRepeat(); // Function SceneRig.SceneRigActor.PlayingOnRepeat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18f44a0
	struct USceneRigPlayer* PlayImmediate(); // Function SceneRig.SceneRigActor.PlayImmediate // (Final|Native|Public|BlueprintCallable) // @ game+0x18f4360
	struct USceneRigPlayer* Play(enum class ETimeRigInitializingBehavior InitializingBehaviorType); // Function SceneRig.SceneRigActor.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x18f4110
	void Pause(); // Function SceneRig.SceneRigActor.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x18f40f0
	void OnSetPlaying__DelegateSignature(bool bPlaying); // DelegateFunction SceneRig.SceneRigActor.OnSetPlaying__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	void OnPlaybackAlmostComplete__DelegateSignature(); // DelegateFunction SceneRig.SceneRigActor.OnPlaybackAlmostComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	void OnEndOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function SceneRig.SceneRigActor.OnEndOverlap // (Final|Native|Protected) // @ game+0x18f3f90
	void OnCurtainRaised(); // Function SceneRig.SceneRigActor.OnCurtainRaised // (Final|Native|Protected) // @ game+0x18f3f70
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function SceneRig.SceneRigActor.OnBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x18f3d50
	bool IsSceneRigBeingSkipped(struct TSoftObjectPtr<USceneRig> SceneRig); // Function SceneRig.SceneRigActor.IsSceneRigBeingSkipped // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x18f3c40
	bool IsPlaying(); // Function SceneRig.SceneRigActor.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18f3c10
	bool IsActive(); // Function SceneRig.SceneRigActor.IsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18f3be0
	struct USceneRigPlayer* Initialize(enum class ETimeRigInitializingBehavior InitializingBehaviorType); // Function SceneRig.SceneRigActor.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x18f3880
	float GetTimeRemaining(); // Function SceneRig.SceneRigActor.GetTimeRemaining // (Final|Native|Public|BlueprintCallable) // @ game+0x18f3850
	struct USceneRigPlayer* GetSceneRigPlayer(); // Function SceneRig.SceneRigActor.GetSceneRigPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18f3820
	struct USceneRig* GetSceneRig(); // Function SceneRig.SceneRigActor.GetSceneRig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18f37f0
	float GetPlaybackScale(); // Function SceneRig.SceneRigActor.GetPlaybackScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18f37c0
	struct USceneRigPlayer* DebugTriggerPlay(); // Function SceneRig.SceneRigActor.DebugTriggerPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x18f36f0
	void AssignSceneRig(struct USceneRig* InSceneRig); // Function SceneRig.SceneRigActor.AssignSceneRig // (Final|Native|Public|BlueprintCallable) // @ game+0x18f3440
	void AddStartHandler(struct FDelegate& Handler); // Function SceneRig.SceneRigActor.AddStartHandler // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18f3390
	void AddOnCleanupHandler(struct FDelegate& Handler); // Function SceneRig.SceneRigActor.AddOnCleanupHandler // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18f32e0
	void AddFinishHandler(struct FDelegate& Handler); // Function SceneRig.SceneRigActor.AddFinishHandler // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18f3230
	void AddEventHandlerWithActor(struct FName EventName, struct FDelegate Delegate); // Function SceneRig.SceneRigActor.AddEventHandlerWithActor // (Final|Native|Public|BlueprintCallable) // @ game+0x18f3150
	void AddEventHandler(struct FName EventName, struct FDelegate Delegate); // Function SceneRig.SceneRigActor.AddEventHandler // (Final|Native|Public|BlueprintCallable) // @ game+0x18f3070
};

// Class SceneRig.SceneRigAnimationRegistry
// Size: 0x50 (Inherited: 0x30)
struct USceneRigAnimationRegistry : UDataAsset {
	struct TArray<struct FSceneRigAnimationRegsitryInheritRegistry> InheritFromRegistries; // 0x30(0x10)
	struct TArray<struct FSceneRigAnimationRegsitryAnim> Animations; // 0x40(0x10)
};

// Class SceneRig.SceneRigAnimationTrack
// Size: 0xa0 (Inherited: 0x90)
struct USceneRigAnimationTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x90(0x10)
};

// Class SceneRig.SceneRigAnimationSection
// Size: 0x628 (Inherited: 0xe8)
struct USceneRigAnimationSection : UMovieSceneSection {
	struct FSceneRigAnimationParams Params; // 0xe8(0x540)
};

// Class SceneRig.SceneRigAnimTrackRequestProvider
// Size: 0x120 (Inherited: 0x28)
struct USceneRigAnimTrackRequestProvider : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct FName LayerName; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
	struct FAnimRequest AnimationRequest; // 0x50(0x80)
	struct TWeakObjectPtr<struct UObject> AnimationObject; // 0xd0(0x08)
	bool ConstrainedToPlacement; // 0xd8(0x01)
	bool bUnscaleHipsBone; // 0xd9(0x01)
	bool PlacementHandledByRequest; // 0xda(0x01)
	char pad_DB[0x5]; // 0xdb(0x05)
	struct FTransform TransformInWorldSpace; // 0xe0(0x30)
	char pad_110[0x10]; // 0x110(0x10)
};

// Class SceneRig.SceneRigAnimInstance
// Size: 0x480 (Inherited: 0x2c0)
struct USceneRigAnimInstance : UAnimSequencerInstance {
	char pad_2C0[0x1b0]; // 0x2c0(0x1b0)
	struct UAnimAsset_TickAssetPlayerProxy* TickAssetPlayerProxy; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)
};

// Class SceneRig.SceneRigBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USceneRigBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetWorldContext(struct FSceneRigParameters& InParameter, struct UObject* WorldContext); // Function SceneRig.SceneRigBlueprintLibrary.SetWorldContext // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18fae50
	void SetStageParameters(struct FSceneRigParameters& InParameter, struct USceneRigStageParameterBlock* StageParameterBlock); // Function SceneRig.SceneRigBlueprintLibrary.SetStageParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18facf0
	void RebindSequencePossessableReferences(struct UObject* WorldContextObject, struct ULevelSequence* Sequence); // Function SceneRig.SceneRigBlueprintLibrary.RebindSequencePossessableReferences // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18fac30
	bool PlayCinematicFromPath(struct UObject* WorldContextObject, struct FString InSceneRigPath, struct FName LevelNameToReturnToWhenFinished, struct FName DefaultLevelName); // Function SceneRig.SceneRigBlueprintLibrary.PlayCinematicFromPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18faad0
	bool PlayCinematic(struct UObject* InWorldContextObject, struct TSoftObjectPtr<USceneRig> InSceneRig, struct FName InLevelNameToReturnToWhenFinished, struct FName DefaultLevelName); // Function SceneRig.SceneRigBlueprintLibrary.PlayCinematic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18fa910
	void AssignTransformParameter(struct FSceneRigParameters& InParameter, struct FString ParameterName, struct FTransform& InValue); // Function SceneRig.SceneRigBlueprintLibrary.AssignTransformParameter // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x18fa650
	void AssignStringParameter(struct FSceneRigParameters& InParameter, struct FString ParameterName, struct FString InValue); // Function SceneRig.SceneRigBlueprintLibrary.AssignStringParameter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18fa420
	void AssignObjectParameter(struct FSceneRigParameters& InParameter, struct FString ParameterName, struct UObject* InValue); // Function SceneRig.SceneRigBlueprintLibrary.AssignObjectParameter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18fa240
	void AssignIntParameter(struct FSceneRigParameters& InParameter, struct FString ParameterName, int32_t InValue); // Function SceneRig.SceneRigBlueprintLibrary.AssignIntParameter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18fa060
	void AssignFloatParameter(struct FSceneRigParameters& InParameter, struct FString ParameterName, float InValue); // Function SceneRig.SceneRigBlueprintLibrary.AssignFloatParameter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18f9e70
	void AssignBoolParameter(struct FSceneRigParameters& InParameter, struct FString ParameterName, bool InValue); // Function SceneRig.SceneRigBlueprintLibrary.AssignBoolParameter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18f9c70
};

// Class SceneRig.SceneRigBPUtilities
// Size: 0x28 (Inherited: 0x28)
struct USceneRigBPUtilities : UBlueprintFunctionLibrary {

	void AddRegisteredActor(struct AActor* Actor, struct FName RegisteredActorName); // Function SceneRig.SceneRigBPUtilities.AddRegisteredActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18f9bb0
};

// Class SceneRig.SceneRigCamera
// Size: 0x1310 (Inherited: 0x870)
struct ASceneRigCamera : ACameraActor {
	char pad_870[0x8]; // 0x870(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x878(0x08)
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x880(0x50)
	struct FName CameraSocket; // 0x8d0(0x08)
	struct FSRCameraFocusSettings FocusSettings; // 0x8d8(0x138)
	struct FSRCameraPostProcessSettings RenderFeatures; // 0xa10(0x860)
	struct FAnimatedIntegerPropertyDriver LODDetailMode; // 0x1270(0x28)
	struct FAnimatedFloatPropertyDriver CurrentFocalLength; // 0x1298(0x28)
	struct FAnimatedFloatPropertyDriver CurrentAperture; // 0x12c0(0x28)
	struct FAnimatedFloatPropertyDriver CurrentFocusDistance; // 0x12e8(0x28)
};

// Class SceneRig.SceneRigCameraManager
// Size: 0x4b8 (Inherited: 0x248)
struct ASceneRigCameraManager : AActor {
	char pad_248[0x270]; // 0x248(0x270)

	struct AActor* GetActiveSceneRigCamera(struct UObject* WorldContextObject); // Function SceneRig.SceneRigCameraManager.GetActiveSceneRigCamera // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x18fa880
};

// Class SceneRig.SceneRigCameraMetadata
// Size: 0x30 (Inherited: 0x28)
struct USceneRigCameraMetadata : UAnimMetaData {
	enum class ESceneRigCameraAttachment Attachment; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class SceneRig.SceneRigCameraParametersComponent
// Size: 0x120 (Inherited: 0xc8)
struct USceneRigCameraParametersComponent : UActorComponent {
	struct TWeakObjectPtr<struct USceneRigInstanceContext> SceneRigInstanceContext; // 0xc8(0x08)
	struct TMap<struct FString, struct TWeakObjectPtr<struct USceneRigParameter>> Parameters; // 0xd0(0x50)
};

// Class SceneRig.SceneRigProxyActor
// Size: 0x80 (Inherited: 0x50)
struct USceneRigProxyActor : UTimeRigElement {
	struct FSceneRigStageRole Role; // 0x50(0x08)
	struct UActorProvider* Actor; // 0x58(0x08)
	bool bInterestPoint; // 0x60(0x01)
	bool ShouldHoldDuringInitialization; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct TArray<struct UTimeRigElement*> ChildElements; // 0x68(0x10)
	enum class ESceneRigProxyActor_PlatformHide HideOnPlatforms; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class SceneRig.SceneRigCameraProxyActor
// Size: 0xb8 (Inherited: 0x80)
struct USceneRigCameraProxyActor : USceneRigProxyActor {
	struct UNameProvider* RegisteredCameraName; // 0x80(0x08)
	bool RegisterCamera; // 0x88(0x01)
	bool CheckObstructions; // 0x89(0x01)
	bool CheckTransitions; // 0x8a(0x01)
	char pad_8B[0x5]; // 0x8b(0x05)
	struct FGameplayTagContainer RegisteredTags; // 0x90(0x20)
	enum class ESceneRigCameraProxyActor_ValidCameraType ValidCameraType; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class SceneRig.SceneRigProxyActorState
// Size: 0xa0 (Inherited: 0x48)
struct USceneRigProxyActorState : UTimeRigElementState {
	char pad_48[0x20]; // 0x48(0x20)
	struct TWeakObjectPtr<struct UObject> ActionObject; // 0x68(0x08)
	bool FloorContactPreviouslyEnabled; // 0x70(0x01)
	char pad_71[0x2f]; // 0x71(0x2f)
};

// Class SceneRig.SceneRigCameraProxyActorState
// Size: 0xa0 (Inherited: 0xa0)
struct USceneRigCameraProxyActorState : USceneRigProxyActorState {
};

// Class SceneRig.SceneRigCameraStackActor
// Size: 0xe50 (Inherited: 0x408)
struct ASceneRigCameraStackActor : ACameraStackActor {
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x408(0x08)
	struct FName EyeSocketName; // 0x410(0x08)
	struct FSRCameraFocusSettings FocusSettings; // 0x418(0x138)
	struct FSRCameraPostProcessSettings RenderFeatures; // 0x550(0x860)
	struct FAnimatedIntegerPropertyDriver LODDetailMode; // 0xdb0(0x28)
	struct FAnimatedFloatPropertyDriver CurrentFocalLength; // 0xdd8(0x28)
	struct FAnimatedFloatPropertyDriver CurrentAperture; // 0xe00(0x28)
	struct FAnimatedFloatPropertyDriver CurrentFocusDistance; // 0xe28(0x28)
};

// Class SceneRig.CameraStackSceneRigParameterTargetGetter
// Size: 0xd0 (Inherited: 0xb0)
struct UCameraStackSceneRigParameterTargetGetter : UCameraStackSecondaryTargetGetterBlend {
	struct FString ParameterName; // 0xa8(0x10)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class SceneRig.SceneRigCameraStackTarget
// Size: 0xb0 (Inherited: 0xa0)
struct USceneRigCameraStackTarget : UCameraStackTarget {
	struct TWeakObjectPtr<struct UTransformProvider> TransformProvider; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class SceneRig.SceneRigCameraTrack
// Size: 0xa0 (Inherited: 0x90)
struct USceneRigCameraTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
};

// Class SceneRig.SceneRigCameraSection
// Size: 0x100 (Inherited: 0xe8)
struct USceneRigCameraSection : UMovieSceneSection {
	struct FSceneRigCameraParams Params; // 0xe8(0x18)
};

// Class SceneRig.SceneRigDialogTrack
// Size: 0xb0 (Inherited: 0x90)
struct USceneRigDialogTrack : UMovieSceneNameableTrack {
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x90(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
};

// Class SceneRig.SceneRigDialogTrackSection
// Size: 0x150 (Inherited: 0xe8)
struct USceneRigDialogTrackSection : UMovieSceneSection {
	struct FSceneRigDialogTrackSectionData SectionData; // 0xe8(0x68)
};

// Class SceneRig.SceneRigFastTravelModule
// Size: 0x28 (Inherited: 0x28)
struct USceneRigFastTravelModule : UObject {

	void SetFastTravelTriggerName(struct FString TriggerName, enum class EFT_TriggerType TriggerType); // Function SceneRig.SceneRigFastTravelModule.SetFastTravelTriggerName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1903f30
	struct FString GetFastTravelTriggerName(enum class EFT_TriggerType TriggerType); // Function SceneRig.SceneRigFastTravelModule.GetFastTravelTriggerName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1903e60
	void ClearFastTravelTriggerName(enum class EFT_TriggerType TriggerType); // Function SceneRig.SceneRigFastTravelModule.ClearFastTravelTriggerName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1903df0
};

// Class SceneRig.SceneRigInstanceContext
// Size: 0xb18 (Inherited: 0x6b0)
struct USceneRigInstanceContext : UTimeRigInstanceContext {
	char pad_6B0[0x80]; // 0x6b0(0x80)
	struct TMap<struct UObject*, struct UObject*> ProviderStateMap; // 0x730(0x50)
	char pad_780[0x1a0]; // 0x780(0x1a0)
	struct TArray<struct ULevelStreaming*> StreamingLevels; // 0x920(0x10)
	char pad_930[0x60]; // 0x930(0x60)
	struct FSceneRigParameters Parameters; // 0x990(0x88)
	struct TArray<struct FSceneParameterChangeRequest> ParameterChangeRequests; // 0xa18(0x10)
	char pad_A28[0x50]; // 0xa28(0x50)
	struct TMap<struct FName, struct UObject*> BoundObjects; // 0xa78(0x50)
	char pad_AC8[0x50]; // 0xac8(0x50)
};

// Class SceneRig.SceneRigInterfaceDefinition
// Size: 0x58 (Inherited: 0x28)
struct USceneRigInterfaceDefinition : UObject {
	struct TArray<struct USceneRigInterfaceDefinition*> InheritedParents; // 0x28(0x10)
	struct TArray<struct USceneRigParameterDefinition*> ParameterDefinitions; // 0x38(0x10)
	struct FString ExportPath; // 0x48(0x10)
};

// Class SceneRig.SceneRigMayaExportOrigin
// Size: 0x248 (Inherited: 0x248)
struct ASceneRigMayaExportOrigin : AActor {
};

// Class SceneRig.SceneRigMayaExportSphere
// Size: 0x250 (Inherited: 0x248)
struct ASceneRigMayaExportSphere : AActor {
	struct USphereComponent* SphereComponent; // 0x248(0x08)
};

// Class SceneRig.SceneRigParticipant
// Size: 0x28 (Inherited: 0x28)
struct USceneRigParticipant : UInterface {
};

// Class SceneRig.SceneRigPlayer
// Size: 0x2e0 (Inherited: 0x288)
struct USceneRigPlayer : UTimeRigPlayer {
	char pad_288[0x28]; // 0x288(0x28)
	struct FMulticastInlineDelegate OnSceneRigPlayerInitialized; // 0x2b0(0x10)
	struct USceneActionState_PlayFMV* OverridingFMV; // 0x2c0(0x08)
	struct USceneActionState_PlayBinkMedia* OverridingBinkMedia; // 0x2c8(0x08)
	struct UUserWidget* SkipWidget; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)

	bool UpdateTransformParameter(struct FString ParameterName, struct FTransform& InValue); // Function SceneRig.SceneRigPlayer.UpdateTransformParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1904730
	bool UpdateStringParameter(struct FString ParameterName, struct FString InValue); // Function SceneRig.SceneRigPlayer.UpdateStringParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x19045b0
	bool UpdateObjectParameter(struct FString ParameterName, struct UObject* Object); // Function SceneRig.SceneRigPlayer.UpdateObjectParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1904480
	bool UpdateIntParameter(struct FString ParameterName, int32_t InValue); // Function SceneRig.SceneRigPlayer.UpdateIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1904350
	bool UpdateFloatParameter(struct FString ParameterName, float InValue); // Function SceneRig.SceneRigPlayer.UpdateFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1904220
	bool UpdateBoolParameter(struct FString ParameterName, bool InValue); // Function SceneRig.SceneRigPlayer.UpdateBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x19040e0
	void ShowSkipUI(bool bShow); // Function SceneRig.SceneRigPlayer.ShowSkipUI // (Final|Native|Public|BlueprintCallable) // @ game+0x1904050
	void ApplyParameterUpdatesImmediately(); // Function SceneRig.SceneRigPlayer.ApplyParameterUpdatesImmediately // (Final|Native|Public|BlueprintCallable) // @ game+0x1903dd0
};

// Class SceneRig.SceneRigPlayerManager
// Size: 0x290 (Inherited: 0x248)
struct ASceneRigPlayerManager : AActor {
	struct TArray<struct FSceneRigPlayerReference> Players; // 0x248(0x10)
	struct TArray<struct USceneRigPlayer*> NewPlayersFromThisTick; // 0x258(0x10)
	struct TArray<struct USceneRigPlayer*> ActivePlayersWantingToPlayThisTick; // 0x268(0x10)
	char pad_278[0x18]; // 0x278(0x18)
};

// Class SceneRig.SceneRigProxyMocapStage
// Size: 0x88 (Inherited: 0x80)
struct USceneRigProxyMocapStage : USceneRigProxyActor {
	bool Visible; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class SceneRig.SceneRigProxyMocapStageState
// Size: 0xa0 (Inherited: 0xa0)
struct USceneRigProxyMocapStageState : USceneRigProxyActorState {
};

// Class SceneRig.SceneRigRegisteredActorComponent
// Size: 0xd8 (Inherited: 0xc8)
struct USceneRigRegisteredActorComponent : UActorComponent {
	struct TArray<struct FName> RegisteredNames; // 0xc8(0x10)
};

// Class SceneRig.SceneRigRule
// Size: 0xa0 (Inherited: 0xa0)
struct USceneRigRule : UTimeRigRule {
};

// Class SceneRig.SceneRigRuleState
// Size: 0x78 (Inherited: 0x78)
struct USceneRigRuleState : UTimeRigRuleState {
};

// Class SceneRig.SceneRigScriptNode
// Size: 0x40 (Inherited: 0x28)
struct USceneRigScriptNode : UObject {
	struct TArray<struct USceneRigScriptNode*> PreviousNodes; // 0x28(0x10)
	struct USceneRigScriptNode* NextNode; // 0x38(0x08)
};

// Class SceneRig.SceneRigScriptNode_Scene
// Size: 0x58 (Inherited: 0x40)
struct USceneRigScriptNode_Scene : USceneRigScriptNode {
	struct FString SceneText; // 0x40(0x10)
	struct USceneRigScriptNode* SceneScript; // 0x50(0x08)
};

// Class SceneRig.SceneRigScriptNode_Branch
// Size: 0x58 (Inherited: 0x40)
struct USceneRigScriptNode_Branch : USceneRigScriptNode {
	struct TArray<struct FSceneRigScriptBranch> Branches; // 0x40(0x10)
	int32_t CurrentBranch; // 0x50(0x04)
	bool HasMissmatchingInternalBranches; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class SceneRig.SceneRigScriptNode_Choices
// Size: 0x58 (Inherited: 0x40)
struct USceneRigScriptNode_Choices : USceneRigScriptNode {
	struct TArray<struct FSceneRigScriptChoice> Choices; // 0x40(0x10)
	int32_t CurrentChoice; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class SceneRig.SceneRigScriptNode_End
// Size: 0x40 (Inherited: 0x40)
struct USceneRigScriptNode_End : USceneRigScriptNode {
};

// Class SceneRig.SceneRigScriptNode_Dialogue
// Size: 0x68 (Inherited: 0x40)
struct USceneRigScriptNode_Dialogue : USceneRigScriptNode {
	struct FName DialogueID; // 0x40(0x08)
	struct FName CharacterID; // 0x48(0x08)
	float TimeDelay; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct UDialogueScriptCommand*> Commands; // 0x58(0x10)
};

// Class SceneRig.SceneRigScriptNode_ChoicePreview
// Size: 0x60 (Inherited: 0x40)
struct USceneRigScriptNode_ChoicePreview : USceneRigScriptNode {
	struct FName DialogueID; // 0x40(0x08)
	struct FName CharacterID; // 0x48(0x08)
	struct FString EnglishScriptText; // 0x50(0x10)
};

// Class SceneRig.SceneRigScript
// Size: 0x30 (Inherited: 0x28)
struct USceneRigScript : UObject {
	struct USceneRigScriptNode* RootNode; // 0x28(0x08)
};

// Class SceneRig.SceneRigSettings
// Size: 0x30 (Inherited: 0x28)
struct USceneRigSettings : UObject {
	float TestValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class SceneRig.SceneRigStageInterface
// Size: 0x50 (Inherited: 0x28)
struct USceneRigStageInterface : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct FSceneRigStageActorPlacement> ActorPlacements; // 0x30(0x10)
	struct TArray<struct USceneRigStage_NamedParameter*> Parameters; // 0x40(0x10)
};

// Class SceneRig.SceneRigStage
// Size: 0x180 (Inherited: 0x50)
struct USceneRigStage : USceneRigStageInterface {
	char pad_50[0x8]; // 0x50(0x08)
	struct TArray<struct TSoftObjectPtr<UWorld>> StageLevels; // 0x58(0x10)
	struct FSceneRigStage_Actor StageRoot; // 0x68(0x18)
	struct FTransform StageRootFallback; // 0x80(0x30)
	struct TArray<struct UBaseArchitectAsset*> LookupAssets; // 0xb0(0x10)
	struct TArray<struct UAnimationArchitectTagProvider*> LookupTagProviders; // 0xc0(0x10)
	bool bEnableDefaultLighting; // 0xd0(0x01)
	bool bShouldSimulatePhysics; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct TArray<struct ULevelStreaming*> StreamedStages; // 0xd8(0x10)
	struct TArray<struct FVector> InterestPoints; // 0xe8(0x10)
	struct FString ExportFilename; // 0xf8(0x10)
	bool OverrideEnvironmentPath; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FString ExportEnvironmentPath; // 0x110(0x10)
	bool UseExportRadius; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float ExportRadius; // 0x124(0x04)
	char pad_128[0x58]; // 0x128(0x58)
};

// Class SceneRig.SceneRigStageContainer
// Size: 0x48 (Inherited: 0x28)
struct USceneRigStageContainer : UObject {
	struct TScriptInterface<ISceneParameterInterface> SceneParameterInterface; // 0x28(0x10)
	struct USceneRigStageParameterBlock* StageParameters; // 0x38(0x08)
	struct UWorld* StageWorld; // 0x40(0x08)
};

// Class SceneRig.SceneRigStageClassHost
// Size: 0x28 (Inherited: 0x28)
struct USceneRigStageClassHost : UInterface {
};

// Class SceneRig.SceneRigStage_ParameterValue
// Size: 0x28 (Inherited: 0x28)
struct USceneRigStage_ParameterValue : UObject {
};

// Class SceneRig.SceneRigStage_NamedParameter
// Size: 0x30 (Inherited: 0x28)
struct USceneRigStage_NamedParameter : UObject {
	struct FName ParameterName; // 0x28(0x08)
};

// Class SceneRig.SceneRigStageParameterBlock
// Size: 0x88 (Inherited: 0x28)
struct USceneRigStageParameterBlock : UObject {
	struct TMap<struct FSceneRigStage_ParameterReference, struct USceneRigStage_ParameterValue*> ParameterMap; // 0x28(0x50)
	char pad_78[0x10]; // 0x78(0x10)
};

// Class SceneRig.SceneRigStage_BoolValue
// Size: 0x30 (Inherited: 0x28)
struct USceneRigStage_BoolValue : USceneRigStage_ParameterValue {
	struct UBoolProvider* Provider; // 0x28(0x08)
};

// Class SceneRig.SceneRigStage_NamedBool
// Size: 0x48 (Inherited: 0x30)
struct USceneRigStage_NamedBool : USceneRigStage_NamedParameter {
	struct FSceneRigStage_Bool Parameter; // 0x30(0x18)
};

// Class SceneRig.SceneRigStage_IntValue
// Size: 0x30 (Inherited: 0x28)
struct USceneRigStage_IntValue : USceneRigStage_ParameterValue {
	struct UIntProvider* Provider; // 0x28(0x08)
};

// Class SceneRig.SceneRigStage_NamedInt
// Size: 0x48 (Inherited: 0x30)
struct USceneRigStage_NamedInt : USceneRigStage_NamedParameter {
	struct FSceneRigStage_Int Parameter; // 0x30(0x18)
};

// Class SceneRig.SceneRigStage_FloatValue
// Size: 0x30 (Inherited: 0x28)
struct USceneRigStage_FloatValue : USceneRigStage_ParameterValue {
	struct UFloatProvider* Provider; // 0x28(0x08)
};

// Class SceneRig.SceneRigStage_NamedFloat
// Size: 0x48 (Inherited: 0x30)
struct USceneRigStage_NamedFloat : USceneRigStage_NamedParameter {
	struct FSceneRigStage_Float Parameter; // 0x30(0x18)
};

// Class SceneRig.SceneRigStage_VectorValue
// Size: 0x30 (Inherited: 0x28)
struct USceneRigStage_VectorValue : USceneRigStage_ParameterValue {
	struct UVectorProvider* Provider; // 0x28(0x08)
};

// Class SceneRig.SceneRigStage_NamedVector
// Size: 0x48 (Inherited: 0x30)
struct USceneRigStage_NamedVector : USceneRigStage_NamedParameter {
	struct FSceneRigStage_Vector Parameter; // 0x30(0x18)
};

// Class SceneRig.SceneRigStage_NameValue
// Size: 0x30 (Inherited: 0x28)
struct USceneRigStage_NameValue : USceneRigStage_ParameterValue {
	struct UNameProvider* Provider; // 0x28(0x08)
};

// Class SceneRig.SceneRigStage_NamedName
// Size: 0x48 (Inherited: 0x30)
struct USceneRigStage_NamedName : USceneRigStage_NamedParameter {
	struct FSceneRigStage_Name Parameter; // 0x30(0x18)
};

// Class SceneRig.SceneRigStage_StringValue
// Size: 0x30 (Inherited: 0x28)
struct USceneRigStage_StringValue : USceneRigStage_ParameterValue {
	struct UStringProvider* Provider; // 0x28(0x08)
};

// Class SceneRig.SceneRigStage_NamedString
// Size: 0x48 (Inherited: 0x30)
struct USceneRigStage_NamedString : USceneRigStage_NamedParameter {
	struct FSceneRigStage_String Parameter; // 0x30(0x18)
};

// Class SceneRig.SceneRigStage_TransformValue
// Size: 0x30 (Inherited: 0x28)
struct USceneRigStage_TransformValue : USceneRigStage_ParameterValue {
	struct UTransformProvider* Provider; // 0x28(0x08)
};

// Class SceneRig.SceneRigStage_NamedTransform
// Size: 0x48 (Inherited: 0x30)
struct USceneRigStage_NamedTransform : USceneRigStage_NamedParameter {
	struct FSceneRigStage_Transform Parameter; // 0x30(0x18)
};

// Class SceneRig.SceneRigStage_ObjectValue
// Size: 0x30 (Inherited: 0x28)
struct USceneRigStage_ObjectValue : USceneRigStage_ParameterValue {
	struct UObjectProvider* Provider; // 0x28(0x08)
};

// Class SceneRig.SceneRigStage_NamedObject
// Size: 0x48 (Inherited: 0x30)
struct USceneRigStage_NamedObject : USceneRigStage_NamedParameter {
	struct FSceneRigStage_Object Parameter; // 0x30(0x18)
};

// Class SceneRig.SceneRigStage_AnimationValue
// Size: 0x30 (Inherited: 0x28)
struct USceneRigStage_AnimationValue : USceneRigStage_ParameterValue {
	struct UAnimationProvider* Provider; // 0x28(0x08)
};

// Class SceneRig.SceneRigStage_NamedAnimation
// Size: 0x48 (Inherited: 0x30)
struct USceneRigStage_NamedAnimation : USceneRigStage_NamedParameter {
	struct FSceneRigStage_Animation Parameter; // 0x30(0x18)
};

// Class SceneRig.SceneRigStage_ActorValue
// Size: 0x30 (Inherited: 0x28)
struct USceneRigStage_ActorValue : USceneRigStage_ParameterValue {
	struct UActorProvider* Provider; // 0x28(0x08)
};

// Class SceneRig.SceneRigStage_NamedActor
// Size: 0x48 (Inherited: 0x30)
struct USceneRigStage_NamedActor : USceneRigStage_NamedParameter {
	struct FSceneRigStage_Actor Parameter; // 0x30(0x18)
};

// Class SceneRig.SceneRigVariants
// Size: 0x38 (Inherited: 0x28)
struct USceneRigVariants : UObject {
	struct TArray<struct FSceneRigVariant> Variants; // 0x28(0x10)
};

// Class SceneRig.ScriptConditionProvider
// Size: 0x28 (Inherited: 0x28)
struct UScriptConditionProvider : UBaseProvider {
};

// Class SceneRig.SequencePlayerProxy
// Size: 0x30 (Inherited: 0x28)
struct USequencePlayerProxy : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class SceneRig.StagePreviewDriver
// Size: 0x28 (Inherited: 0x28)
struct UStagePreviewDriver : UBaseProvider {
};

// Class SceneRig.StagePreviewDriver_PlaySceneRig
// Size: 0x38 (Inherited: 0x28)
struct UStagePreviewDriver_PlaySceneRig : UStagePreviewDriver {
	struct USceneRig* SceneRig; // 0x28(0x08)
	struct USceneRigPlayer* SceneRigPlayer; // 0x30(0x08)
};

// Class SceneRig.StoryGraphActor
// Size: 0x528 (Inherited: 0x248)
struct AStoryGraphActor : AActor {
	char pad_248[0x10]; // 0x248(0x10)
	struct USceneComponent* SceneComponent; // 0x258(0x08)
	struct FKey DebugTriggerKey; // 0x260(0x18)
	struct FName DebugTriggerEventName; // 0x278(0x08)
	struct TArray<struct TWeakObjectPtr<struct ATriggerBase>> TriggerVolumes; // 0x280(0x10)
	char pad_290[0x58]; // 0x290(0x58)
	struct UTimeRig_StoryGraph* StoryGraph; // 0x2e8(0x08)
	bool bHoldCurtainUntilPlay; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct TArray<struct FName> LookupAlias; // 0x2f8(0x10)
	struct USceneRigStageParameterBlock* ParameterBlock; // 0x308(0x08)
	bool bAllowTimeRigsToBeSkipped; // 0x310(0x01)
	char pad_311[0xf]; // 0x311(0x0f)
	struct TMap<struct UStoryNode_Custom*, struct UStoryNodeState_Custom*> CustomNodeStates; // 0x320(0x50)
	char pad_370[0x188]; // 0x370(0x188)
	struct USceneRigPlayer* AmbientPlayer; // 0x4f8(0x08)
	char pad_500[0x28]; // 0x500(0x28)

	bool TriggerEventOnActiveSceneRigs(struct FName Event); // Function SceneRig.StoryGraphActor.TriggerEventOnActiveSceneRigs // (Final|Native|Public|BlueprintCallable) // @ game+0x1907dc0
	bool TriggerEvent(struct FName Event, struct FName EventSource); // Function SceneRig.StoryGraphActor.TriggerEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x1907cf0
	bool TriggerAnyEvent(struct FName& OutEventTriggered, struct FName EventSource); // Function SceneRig.StoryGraphActor.TriggerAnyEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1907c00
	bool SetBoolParameter(struct FName ParameterName, bool bBoolToSet); // Function SceneRig.StoryGraphActor.SetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1907b30
	void SetAllowTimeRigsToBeSkipped(); // Function SceneRig.StoryGraphActor.SetAllowTimeRigsToBeSkipped // (Final|Native|Public|BlueprintCallable) // @ game+0x1907b10
	bool SetActorParameter(struct FName ParameterName, struct AActor* ActorToSet); // Function SceneRig.StoryGraphActor.SetActorParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1907a40
	void OnEndOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function SceneRig.StoryGraphActor.OnEndOverlap // (Final|Native|Protected) // @ game+0x19078e0
	void OnCurtainRaised(); // Function SceneRig.StoryGraphActor.OnCurtainRaised // (Final|Native|Protected) // @ game+0x19078c0
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function SceneRig.StoryGraphActor.OnBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x19076a0
	bool HandleEvent(struct FName Event, struct FDelegate Handler); // Function SceneRig.StoryGraphActor.HandleEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x19075b0
};

// Class SceneRig.StoryNode_Custom
// Size: 0x98 (Inherited: 0x98)
struct UStoryNode_Custom : UTimeRig_StoryGraphNode {
};

// Class SceneRig.StoryNodeState_Custom
// Size: 0x38 (Inherited: 0x28)
struct UStoryNodeState_Custom : UObject {
	struct AStoryGraphActor* OwningActor; // 0x28(0x08)
	struct UStoryNode_Custom* Definition; // 0x30(0x08)
};

// Class SceneRig.StoryNode_InputEvent
// Size: 0xa8 (Inherited: 0x98)
struct UStoryNode_InputEvent : UTimeRig_StoryGraphNode {
	struct FName EventName; // 0x98(0x08)
	bool bEventCanTriggerMultipleTimes; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class SceneRig.StoryNode_OutputEvent
// Size: 0xa8 (Inherited: 0x98)
struct UStoryNode_OutputEvent : UTimeRig_StoryGraphNode {
	struct FName EventName; // 0x98(0x08)
	bool RepresentsCompletion; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class SceneRig.StoryNode_Script
// Size: 0xc0 (Inherited: 0x98)
struct UStoryNode_Script : UTimeRig_StoryGraphNode {
	struct FSceneRigScriptContainer Script; // 0x98(0x08)
	bool RegisteredAvailableNextLineIDs; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct FName> AvailableNextLineIDs; // 0xa8(0x10)
	struct FName RegisteredLastLineID; // 0xb8(0x08)
};

// Class SceneRig.StoryNode_SceneRig
// Size: 0xd0 (Inherited: 0xc0)
struct UStoryNode_SceneRig : UStoryNode_Script {
	struct USceneRigProvider* StorySR; // 0xc0(0x08)
	enum class ETimeRigInitializingBehavior InitializingBehavior; // 0xc8(0x01)
	bool bSkippable; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)

	struct USceneRig* GetSceneRigBP(struct UObject* Caller); // Function SceneRig.StoryNode_SceneRig.GetSceneRigBP // (Final|Native|Public|BlueprintCallable) // @ game+0x1907510
};

// Class SceneRig.String_SceneRigParameter
// Size: 0x30 (Inherited: 0x28)
struct UString_SceneRigParameter : UStringProvider {
	struct FSceneRigParameterBinding_FString BoundParameter; // 0x28(0x08)
};

// Class SceneRig.String_SceneRigStageParameter
// Size: 0x38 (Inherited: 0x28)
struct UString_SceneRigStageParameter : UStringProvider {
	struct FSceneRigStage_StringReference Reference; // 0x28(0x10)
};

// Class SceneRig.Transform_Curve
// Size: 0x4f0 (Inherited: 0x28)
struct UTransform_Curve : UTransformProvider {
	struct FRuntimeCurveVector TranslateCurve; // 0x28(0x188)
	struct FRuntimeCurveVector RotateCurve; // 0x1b0(0x188)
	struct FRuntimeCurveVector ScaleCurve; // 0x338(0x188)
	struct FTransform DefaultValue; // 0x4c0(0x30)
};

// Class SceneRig.Transform_SceneRigActor
// Size: 0x28 (Inherited: 0x28)
struct UTransform_SceneRigActor : UTransformProvider {
};

// Class SceneRig.Transform_SceneRigParameter
// Size: 0x30 (Inherited: 0x28)
struct UTransform_SceneRigParameter : UTransformProvider {
	struct FSceneRigParameterBinding_Transform BoundParameter; // 0x28(0x08)
};

// Class SceneRig.Transform_SceneRigStageParameter
// Size: 0x38 (Inherited: 0x28)
struct UTransform_SceneRigStageParameter : UTransformProvider {
	struct FSceneRigStage_TransformReference Reference; // 0x28(0x10)
};

// Class SceneRig.Transform_SceneRigTranform
// Size: 0x30 (Inherited: 0x28)
struct UTransform_SceneRigTranform : UTransformProvider {
	struct USceneAction_Transform* TransformAction; // 0x28(0x08)
};

// Class SceneRig.Transform_StageRoot
// Size: 0x28 (Inherited: 0x28)
struct UTransform_StageRoot : UTransformProvider {
};

// Class SceneRig.Vector_Curve
// Size: 0x1b0 (Inherited: 0x28)
struct UVector_Curve : UVectorProvider {
	struct FRuntimeCurveVector Curve; // 0x28(0x188)
};

// Class SceneRig.Vector_SceneRigParameter
// Size: 0x30 (Inherited: 0x28)
struct UVector_SceneRigParameter : UVectorProvider {
	struct FSceneRigParameterBinding_Vector BoundParameter; // 0x28(0x08)
};

// Class SceneRig.Vector_SceneRigStageParameter
// Size: 0x38 (Inherited: 0x28)
struct UVector_SceneRigStageParameter : UVectorProvider {
	struct FSceneRigStage_VectorReference Reference; // 0x28(0x10)
};

// Class SceneRig.Vector2D_Curve
// Size: 0x130 (Inherited: 0x28)
struct UVector2D_Curve : UVector2DProvider {
	struct FRuntimeCurveVector2D Curve; // 0x28(0x108)
};

