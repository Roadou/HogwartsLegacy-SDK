// Class AvaAnimation.ActiveCameraActor
// Size: 0x28 (Inherited: 0x28)
struct UActiveCameraActor : UInterface {
};

// Class AvaAnimation.BaseProvider
// Size: 0x28 (Inherited: 0x28)
struct UBaseProvider : UObject {
};

// Class AvaAnimation.ObjectProvider
// Size: 0x28 (Inherited: 0x28)
struct UObjectProvider : UBaseProvider {
};

// Class AvaAnimation.ActorProvider
// Size: 0x38 (Inherited: 0x28)
struct UActorProvider : UObjectProvider {
	struct UActorSpawner* PreviewSpawner; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)

	struct AActor* GetActor(struct UObject* Caller); // Function AvaAnimation.ActorProvider.GetActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x146e740
};

// Class AvaAnimation.Actor_External
// Size: 0x40 (Inherited: 0x38)
struct UActor_External : UActorProvider {
	enum class EExternalActorRole Role; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t RoleIndex; // 0x3c(0x04)
};

// Class AvaAnimation.Actor_FromSpawner
// Size: 0x40 (Inherited: 0x38)
struct UActor_FromSpawner : UActorProvider {
	struct UActorSpawner* Spawner; // 0x38(0x08)
};

// Class AvaAnimation.ActorSpawner
// Size: 0x48 (Inherited: 0x28)
struct UActorSpawner : UBaseProvider {
	struct UTransformProvider* SpawnLocation; // 0x28(0x08)
	struct FName AlignmentSocket; // 0x30(0x08)
	struct TArray<struct FName> WarmUpTags; // 0x38(0x10)
};

// Class AvaAnimation.AimEyesData
// Size: 0x1b0 (Inherited: 0x30)
struct UAimEyesData : UDataAsset {
	float LookSmoothness; // 0x30(0x04)
	float MinTimeForInitialCentralFocus; // 0x34(0x04)
	float MaxTimeForInitialCentralFocus; // 0x38(0x04)
	float MinTimeBetweenLookDir; // 0x3c(0x04)
	float MaxTimeBetweenLookDir; // 0x40(0x04)
	float MinTimeBetweenBlinks; // 0x44(0x04)
	float MaxTimeBetweenBlinks; // 0x48(0x04)
	float DoubleBlinkProbability; // 0x4c(0x04)
	struct FRuntimeFloatCurve BlinkCurve; // 0x50(0x88)
	struct FRuntimeFloatCurve DoubleBlinkCurve; // 0xd8(0x88)
	float PupilAxisOffset; // 0x160(0x04)
	float MinTimeBetweenMicroLook; // 0x164(0x04)
	float MaxTimeBetweenMicroLook; // 0x168(0x04)
	bool bUseRandomTargetIfNoCurrentTarget; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	float MinRandomTargetTime; // 0x170(0x04)
	float MaxRandomTargetTime; // 0x174(0x04)
	float MaxYawRandomTarget; // 0x178(0x04)
	float MaxPitchRandomTarget; // 0x17c(0x04)
	float MinRandomTargetDistance; // 0x180(0x04)
	float MaxRandomTargetDistance; // 0x184(0x04)
	float CentralFocusWeight; // 0x188(0x04)
	float InternalMemoryWeight; // 0x18c(0x04)
	float AuditoryMemoryWeight; // 0x190(0x04)
	float EmotionalMemoryWeight; // 0x194(0x04)
	float VisualConstructionWeight; // 0x198(0x04)
	float AuditoryConstructionWeight; // 0x19c(0x04)
	float BodySensationRecallWeight; // 0x1a0(0x04)
	float SmellWeight; // 0x1a4(0x04)
	float TasteWeight; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
};

// Class AvaAnimation.AnimAsset_TickAssetPlayerProxy
// Size: 0xd0 (Inherited: 0x80)
struct UAnimAsset_TickAssetPlayerProxy : UAnimationAsset {
	struct TArray<struct FTickAssetPlayerProxy_WeightedNotify> WeightedNotifies; // 0x80(0x10)
	struct FTransform ActorMoveDelta; // 0x90(0x30)
	float ActorMoveDeltaWeight; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
};

// Class AvaAnimation.AnimationProvider
// Size: 0x28 (Inherited: 0x28)
struct UAnimationProvider : UObjectProvider {
};

// Class AvaAnimation.AnimationAsset_Direct
// Size: 0x30 (Inherited: 0x28)
struct UAnimationAsset_Direct : UAnimationProvider {
	struct UAnimationAsset* AnimationAsset; // 0x28(0x08)
};

// Class AvaAnimation.AnimationAsset_TagLookup
// Size: 0x60 (Inherited: 0x28)
struct UAnimationAsset_TagLookup : UAnimationProvider {
	struct UActorProvider* LookupOnActor; // 0x28(0x08)
	struct FGameplayTagContainer Tags; // 0x30(0x20)
	struct TArray<struct UAnimationArchitectTagProvider*> TagProviders; // 0x50(0x10)
};

// Class AvaAnimation.AnimationClipProvider
// Size: 0x28 (Inherited: 0x28)
struct UAnimationClipProvider : UAnimationProvider {
};

// Class AvaAnimation.AnimationClip_Direct
// Size: 0x30 (Inherited: 0x28)
struct UAnimationClip_Direct : UAnimationClipProvider {
	struct UAnimSequenceBase* AnimationClip; // 0x28(0x08)
};

// Class AvaAnimation.AnimationClip_Random
// Size: 0x48 (Inherited: 0x28)
struct UAnimationClip_Random : UAnimationClipProvider {
	bool AvoidPickingSameTwice; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FAnimationClip_RandomEntry> Entries; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class AvaAnimation.AnimationClip_Sequential
// Size: 0x40 (Inherited: 0x28)
struct UAnimationClip_Sequential : UAnimationClipProvider {
	struct TArray<struct UAnimationClipProvider*> Entries; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class AvaAnimation.AnimationClip_TagLookup
// Size: 0x70 (Inherited: 0x28)
struct UAnimationClip_TagLookup : UAnimationClipProvider {
	char pad_28[0x8]; // 0x28(0x08)
	struct UActorProvider* LookupOnActor; // 0x30(0x08)
	struct FGameplayTagContainer Tags; // 0x38(0x20)
	struct TArray<struct UAnimationArchitectTagProvider*> TagProviders; // 0x58(0x10)
	struct UBaseArchitectFilter* Filter; // 0x68(0x08)
};

// Class AvaAnimation.AnimationClip_TagLookupOnStationArchitect
// Size: 0x70 (Inherited: 0x28)
struct UAnimationClip_TagLookupOnStationArchitect : UAnimationClipProvider {
	char pad_28[0x8]; // 0x28(0x08)
	struct UActorProvider* LookupOnActor; // 0x30(0x08)
	struct FGameplayTagContainer Tags; // 0x38(0x20)
	struct TArray<struct UAnimationArchitectTagProvider*> TagProviders; // 0x58(0x10)
	struct UBaseArchitectFilter* Filter; // 0x68(0x08)
};

// Class AvaAnimation.AnimationClip_TagLookupOnAllArchitects
// Size: 0x70 (Inherited: 0x70)
struct UAnimationClip_TagLookupOnAllArchitects : UAnimationClip_TagLookupOnStationArchitect {
};

// Class AvaAnimation.AnimationClip_TagLookupOnAssets
// Size: 0x68 (Inherited: 0x28)
struct UAnimationClip_TagLookupOnAssets : UAnimationClipProvider {
	char pad_28[0x8]; // 0x28(0x08)
	struct FGameplayTagContainer Tags; // 0x30(0x20)
	struct TArray<struct UAnimationArchitectTagProvider*> TagProviders; // 0x50(0x10)
	struct UBaseArchitectFilter* Filter; // 0x60(0x08)
};

// Class AvaAnimation.AnimationComponent
// Size: 0x770 (Inherited: 0xc8)
struct UAnimationComponent : UActorComponent {
	char pad_C8[0x198]; // 0xc8(0x198)
	struct TArray<struct FAnimationRequestLayer> Layers; // 0x260(0x10)
	struct UAnimLayersAsset* LayersAsset; // 0x270(0x08)
	struct UControlRig* ControlRigClass; // 0x278(0x08)
	char pad_280[0x8]; // 0x280(0x08)
	struct UControlRig* ControlRig; // 0x288(0x08)
	struct TArray<struct UIKDriver*> IKDrivers; // 0x290(0x10)
	bool LadderContactEnabled; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	int32_t HighestLODLevelForIK; // 0x2a4(0x04)
	float LOD_IKBlendOutDuration; // 0x2a8(0x04)
	float LOD_IKBlendInDuration; // 0x2ac(0x04)
	float StrideWarpFactor; // 0x2b0(0x04)
	enum class EFootPlantEnum FootPlant; // 0x2b4(0x01)
	bool bHoldFootPositionWhenPlanted; // 0x2b5(0x01)
	char pad_2B6[0x2]; // 0x2b6(0x02)
	float CapsuleInterpSpeed; // 0x2b8(0x04)
	char pad_2BC[0xcc]; // 0x2bc(0xcc)
	struct TMap<enum class EAnimationDirections, struct FVector> DefaultDirectionInComponentSpace; // 0x388(0x50)
	struct TArray<bool> ResetDefaultDirection; // 0x3d8(0x10)
	float MaxLookAlpha; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UFloatProvider* TimeDelayProvider; // 0x3f0(0x08)
	struct UFloatProvider* BlendInTimeProvider; // 0x3f8(0x08)
	struct UAnimSequence* LastSequence; // 0x400(0x08)
	float LastSequenceTime; // 0x408(0x04)
	char pad_40C[0x14]; // 0x40c(0x14)
	struct UAnimAsset_TickAssetPlayerProxy* TickAssetPlayerProxy; // 0x420(0x08)
	char pad_428[0x2f0]; // 0x428(0x2f0)
	struct TMap<struct FGameplayTag, struct UTransformProvider*> TaggedTransformProviders; // 0x718(0x50)
	char pad_768[0x8]; // 0x768(0x08)

	void StartSettingPoseFixupEnabled(bool bInEnabled, enum class EStandardManagedPriority InPriority, struct UObject* Provider, float InBlendDuration); // Function AvaAnimation.AnimationComponent.StartSettingPoseFixupEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x146f8b0
	void StartSettingLookAtEnabled(bool bInEnabled, enum class EStandardManagedPriority InPriority, struct UObject* Provider, float InBlendDuration); // Function AvaAnimation.AnimationComponent.StartSettingLookAtEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x146f750
	void StartSettingIKEnabled(bool bInEnabled, enum class EStandardManagedPriority InPriority, struct UObject* Provider, float InBlendDuration); // Function AvaAnimation.AnimationComponent.StartSettingIKEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x146f5f0
	void StartSettingFloorContactEnabled(bool bInEnabled, enum class EStandardManagedPriority InPriority, struct UObject* Provider, float InBlendDuration); // Function AvaAnimation.AnimationComponent.StartSettingFloorContactEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x146f490
	void StartIKBlendOut(float Duration); // Function AvaAnimation.AnimationComponent.StartIKBlendOut // (Final|Native|Public|BlueprintCallable) // @ game+0x146f410
	void StartIKBlendIn(float Duration); // Function AvaAnimation.AnimationComponent.StartIKBlendIn // (Final|Native|Public|BlueprintCallable) // @ game+0x146f390
	void SetPlayerIKEnabled(bool State); // Function AvaAnimation.AnimationComponent.SetPlayerIKEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x146f310
	void SetLadderInfo(float BottomRungZ, float TopRungZ, float RungSpacing, struct FVector LadderWorldPos, struct FVector LadderFaceNormal); // Function AvaAnimation.AnimationComponent.SetLadderInfo // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x146f150
	void SetLadderIKEnabled(bool Enabled); // Function AvaAnimation.AnimationComponent.SetLadderIKEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x146f0c0
	void SetGlobalIKEnabled(bool State); // Function AvaAnimation.AnimationComponent.SetGlobalIKEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x146f040
	void SetDirectionWeight(enum class EAnimationDirections Direction, enum class EAnimationDirectionSource Source, float weight); // Function AvaAnimation.AnimationComponent.SetDirectionWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x146ef30
	void SetDirectionTargetAndWeightNoCap(enum class EAnimationDirections Direction, enum class EAnimationDirectionSource Source, struct FVector TargetInWorldSpace, float weight); // Function AvaAnimation.AnimationComponent.SetDirectionTargetAndWeightNoCap // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x146edb0
	void SetDirectionTargetAndWeight(enum class EAnimationDirections Direction, enum class EAnimationDirectionSource Source, struct FVector TargetInWorldSpace, float weight); // Function AvaAnimation.AnimationComponent.SetDirectionTargetAndWeight // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x146ec30
	void SetAnimLayersAsset(struct UAnimLayersAsset* InLayersAsset); // Function AvaAnimation.AnimationComponent.SetAnimLayersAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x146eba0
	void ResetDefaultDirectionNow(enum class EAnimationDirections Direction); // Function AvaAnimation.AnimationComponent.ResetDefaultDirectionNow // (Final|Native|Public|BlueprintCallable) // @ game+0x146eb20
	bool IsPlayerIKEnabled(); // Function AvaAnimation.AnimationComponent.IsPlayerIKEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x146eaf0
	bool IsGlobalIKEnabled(); // Function AvaAnimation.AnimationComponent.IsGlobalIKEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x146eac0
	struct UIKDriver* GetIKDriverFromClass(struct UIKDriver* IKDriverClass); // Function AvaAnimation.AnimationComponent.GetIKDriverFromClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x146ea20
	float GetIKBlendWeight(); // Function AvaAnimation.AnimationComponent.GetIKBlendWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x146e9f0
	bool GetDirectionTargetAndWeight(enum class EAnimationDirections Direction, struct FVector& OutTargetInWorldSpace, float& OutWeight); // Function AvaAnimation.AnimationComponent.GetDirectionTargetAndWeight // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x146e8c0
	bool GetDefaultDirection(enum class EAnimationDirections Direction, struct FVector& OutDefaultDirectionInComponentSpace); // Function AvaAnimation.AnimationComponent.GetDefaultDirection // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x146e7e0
	void FinishSettingPoseFixupEnabled(enum class EStandardManagedPriority InPriority, struct UObject* Provider, float InBlendDuration); // Function AvaAnimation.AnimationComponent.FinishSettingPoseFixupEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x146e620
	void FinishSettingLookAtEnabled(enum class EStandardManagedPriority InPriority, struct UObject* Provider, float InBlendDuration); // Function AvaAnimation.AnimationComponent.FinishSettingLookAtEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x146e500
	void FinishSettingIKEnabled(enum class EStandardManagedPriority InPriority, struct UObject* Provider, float InBlendDuration); // Function AvaAnimation.AnimationComponent.FinishSettingIKEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x146e3e0
	void FinishSettingFloorContactEnabled(enum class EStandardManagedPriority InPriority, struct UObject* Provider, float InBlendDuration); // Function AvaAnimation.AnimationComponent.FinishSettingFloorContactEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x146e2c0
};

// Class AvaAnimation.AnimDebugInfo
// Size: 0x28 (Inherited: 0x28)
struct UAnimDebugInfo : UInterface {
};

// Class AvaAnimation.AnimationIndexedClipProvider
// Size: 0x30 (Inherited: 0x28)
struct UAnimationIndexedClipProvider : UAnimationClipProvider {
	char pad_28[0x8]; // 0x28(0x08)

	void SetIndex(int32_t Value); // Function AvaAnimation.AnimationIndexedClipProvider.SetIndex // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1474b60
	int32_t GetIndex(); // Function AvaAnimation.AnimationIndexedClipProvider.GetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1474100
};

// Class AvaAnimation.AnimationInspectionFunctions
// Size: 0x28 (Inherited: 0x28)
struct UAnimationInspectionFunctions : UBlueprintFunctionLibrary {

	bool SetBlendSpaceFraction(struct UBlendSpaceBase* BlendSpace, float Fraction, struct TArray<struct FBlendSampleData>& OutSampleData); // Function AvaAnimation.AnimationInspectionFunctions.SetBlendSpaceFraction // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1474a00
	bool GetSocketsInAnimationSpaceFromClip(struct USkeletalMesh* SkeletalMesh, struct UAnimSequence* AnimationAsset, float EvaluationTime, struct TArray<struct FName>& SocketNameArray, struct TArray<struct FTransform>& TransformArray, int32_t LoopCount); // Function AvaAnimation.AnimationInspectionFunctions.GetSocketsInAnimationSpaceFromClip // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1474710
	bool GetSocketInAnimationSpaceFromClip(struct USkeletalMesh* SkeletalMesh, struct UAnimSequence* AnimationAsset, float EvaluationTime, struct FName SocketName, struct FTransform& Transform, int32_t LoopCount); // Function AvaAnimation.AnimationInspectionFunctions.GetSocketInAnimationSpaceFromClip // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14744e0
	bool GetRootInAnimationSpaceFromClip(struct UAnimSequenceBase* AnimationAsset, float EvaluationTime, struct FTransform& Transform, int32_t LoopCount); // Function AvaAnimation.AnimationInspectionFunctions.GetRootInAnimationSpaceFromClip // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1474330
	bool GetRootInAnimationSpaceFromBlendSpace(struct UBlendSpaceBase* BlendSpace, struct TArray<struct FBlendSampleData>& SampleData, struct FTransform& Transform, int32_t LoopCount); // Function AvaAnimation.AnimationInspectionFunctions.GetRootInAnimationSpaceFromBlendSpace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1474130
	bool GetComponentInWorldSpaceFromAlignedRoot(struct UAnimSequence* AnimationAsset, struct FTransform AnimationInWorldSpace, struct FTransform RootInAnimationSpace, struct FTransform& Transform, int32_t LoopCount, enum class EBoneEvaluationRootMode RootModeSetting); // Function AvaAnimation.AnimationInspectionFunctions.GetComponentInWorldSpaceFromAlignedRoot // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1473e40
	bool GetBonesInParentSpaceFromClip(struct UAnimSequenceBase* AnimationAsset, float EvaluationTime, struct TArray<struct FName>& BoneNameArray, struct TArray<struct FTransform>& TransformArray); // Function AvaAnimation.AnimationInspectionFunctions.GetBonesInParentSpaceFromClip // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1473ca0
	bool GetBonesInParentSpaceFromBlendSpace(struct UBlendSpaceBase* BlendSpaceAsset, float EvaluationTime, float ParameterX, float ParameterY, struct TArray<struct FName>& BoneNameArray, struct TArray<struct FTransform>& TransformArray); // Function AvaAnimation.AnimationInspectionFunctions.GetBonesInParentSpaceFromBlendSpace // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1473aa0
	bool GetBonesInAnimationSpaceFromClip(struct UAnimSequence* AnimationAsset, float EvaluationTime, struct TArray<struct FName>& BoneNameArray, struct TArray<struct FTransform>& TransformArray, int32_t LoopCount); // Function AvaAnimation.AnimationInspectionFunctions.GetBonesInAnimationSpaceFromClip // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x14738d0
	bool GetBoneInParentSpaceFromClip(struct UAnimSequenceBase* AnimationAsset, float EvaluationTime, struct FName BoneName, struct FTransform& Transform); // Function AvaAnimation.AnimationInspectionFunctions.GetBoneInParentSpaceFromClip // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1473720
	bool GetBoneInParentSpaceFromBlendSpace(struct UBlendSpaceBase* BlendSpaceAsset, float EvaluationTime, float ParameterX, float ParameterY, struct FName BoneName, struct FTransform& Transform); // Function AvaAnimation.AnimationInspectionFunctions.GetBoneInParentSpaceFromBlendSpace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1473500
	bool GetBoneInAnimationSpaceFromClip(struct UAnimSequence* AnimationAsset, float EvaluationTime, struct FName BoneName, struct FTransform& Transform, int32_t LoopCount, enum class EBoneEvaluationRootMode RootModeSetting); // Function AvaAnimation.AnimationInspectionFunctions.GetBoneInAnimationSpaceFromClip // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14732d0
	float GetBlendSpaceDuration(struct UBlendSpaceBase* BlendSpace, struct TArray<struct FBlendSampleData>& SampleData); // Function AvaAnimation.AnimationInspectionFunctions.GetBlendSpaceDuration // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x14731b0
};

// Class AvaAnimation.AnimationProvider_Conditional
// Size: 0x40 (Inherited: 0x28)
struct UAnimationProvider_Conditional : UAnimationProvider {
	struct UBoolProvider* Condition; // 0x28(0x08)
	struct UAnimationProvider* AnimationIfTrue; // 0x30(0x08)
	struct UAnimationProvider* AnimationIfFalse; // 0x38(0x08)
};

// Class AvaAnimation.AnimationRequestLayerHost
// Size: 0x28 (Inherited: 0x28)
struct UAnimationRequestLayerHost : UInterface {
};

// Class AvaAnimation.AnimationSetProvider
// Size: 0x28 (Inherited: 0x28)
struct UAnimationSetProvider : UBaseProvider {
};

// Class AvaAnimation.AnimationSet_TagLookup
// Size: 0x78 (Inherited: 0x28)
struct UAnimationSet_TagLookup : UAnimationSetProvider {
	char pad_28[0x8]; // 0x28(0x08)
	struct UActorProvider* LookupOnActor; // 0x30(0x08)
	struct FGameplayTagContainer Tags; // 0x38(0x20)
	struct TArray<struct UAnimationArchitectTagProvider*> TagProviders; // 0x58(0x10)
	struct UBaseArchitectFilter* Filter; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)
};

// Class AvaAnimation.TransformProvider
// Size: 0x28 (Inherited: 0x28)
struct UTransformProvider : UBaseProvider {

	struct FTransform GetTransformBP(struct UObject* Context, float TimeOffset); // Function AvaAnimation.TransformProvider.GetTransformBP // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x14a3ab0
};

// Class AvaAnimation.AnimationTransformProvider
// Size: 0x38 (Inherited: 0x28)
struct UAnimationTransformProvider : UTransformProvider {
	struct UAnimationClipProvider* AnimationProvider; // 0x28(0x08)
	bool bUseAnimationTime; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float PlaybackFraction; // 0x34(0x04)
};

// Class AvaAnimation.AnimInstance_ApplyActorTransform
// Size: 0x300 (Inherited: 0x2c0)
struct UAnimInstance_ApplyActorTransform : UAnimInstance {
	struct FTransform ActorInWorldSpace; // 0x2c0(0x30)
	bool ShouldSetActorInWorldSpace; // 0x2f0(0x01)
	char pad_2F1[0xf]; // 0x2f1(0x0f)
};

// Class AvaAnimation.AnimInstance_RetrieveActorTransform
// Size: 0x28 (Inherited: 0x28)
struct UAnimInstance_RetrieveActorTransform : UInterface {

	bool RetreiveComponentTransform(struct FTransform& TransformInWorldSpace); // Function AvaAnimation.AnimInstance_RetrieveActorTransform.RetreiveComponentTransform // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1474920
	void AssignComponentTransform(struct FTransform& TransformInWorldSpace); // Function AvaAnimation.AnimInstance_RetrieveActorTransform.AssignComponentTransform // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x14730d0
};

// Class AvaAnimation.AnimLayersAsset
// Size: 0x40 (Inherited: 0x30)
struct UAnimLayersAsset : UDataAsset {
	struct TArray<struct FAnimationRequestLayer> Layers; // 0x30(0x10)
};

// Class AvaAnimation.AnimLayersAssetUserData
// Size: 0x30 (Inherited: 0x28)
struct UAnimLayersAssetUserData : UAssetUserData {
	struct UAnimLayersAsset* AnimLayers; // 0x28(0x08)
};

// Class AvaAnimation.AnimMaskAsset
// Size: 0xe0 (Inherited: 0x28)
struct UAnimMaskAsset : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USkeleton* Skeleton; // 0x30(0x08)
	struct UAnimMaskAsset* ParentMask; // 0x38(0x08)
	struct TMap<struct FAnimMaskBoneReference, float> BoneMask; // 0x40(0x50)
	struct TMap<struct FAnimMaskCurveReference, float> CurveMask; // 0x90(0x50)
};

// Class AvaAnimation.AnimMask
// Size: 0x28 (Inherited: 0x28)
struct UAnimMask : UInterface {
};

// Class AvaAnimation.PoseSampler
// Size: 0x28 (Inherited: 0x28)
struct UPoseSampler : UObject {
};

// Class AvaAnimation.PoseSampler_BlinkEyes
// Size: 0x98 (Inherited: 0x28)
struct UPoseSampler_BlinkEyes : UPoseSampler {
	char pad_28[0x70]; // 0x28(0x70)
};

// Class AvaAnimation.AnimNotify_BlinkEyes
// Size: 0x70 (Inherited: 0x38)
struct UAnimNotify_BlinkEyes : UAnimNotify {
	char pad_38[0x8]; // 0x38(0x08)
	bool bDoubleBlink; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float BlinkSpeed; // 0x44(0x04)
	char pad_48[0x10]; // 0x48(0x10)
	struct UPoseSampler_BlinkEyes* PoseSampler; // 0x58(0x08)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class AvaAnimation.AnimNotify_BlueprintSpawn
// Size: 0x88 (Inherited: 0x30)
struct UAnimNotify_BlueprintSpawn : UAnimNotifyState {
	struct AActor* BlueprintActor; // 0x30(0x08)
	struct FName ParentSocketName; // 0x38(0x08)
	struct FName ChildSocketName; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	char pad_60[0x28]; // 0x60(0x28)
};

// Class AvaAnimation.AnimNotify_ResetActorClothingSimulation
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_ResetActorClothingSimulation : UAnimNotify {
};

// Class AvaAnimation.AnimNotify_StaticMeshProp
// Size: 0xc8 (Inherited: 0x30)
struct UAnimNotify_StaticMeshProp : UAnimNotifyState {
	struct UActorSpawner* ActorSpawner; // 0x30(0x08)
	struct UStaticMesh* StaticMesh; // 0x38(0x08)
	struct FName ParentSocketName; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	bool bUseScaleMultiplier; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FVector ScaleMultiplier; // 0x64(0x0c)
	char pad_70[0x58]; // 0x70(0x58)
};

// Class AvaAnimation.AnimNotifyStaticMeshPropComponent
// Size: 0xc8 (Inherited: 0xc8)
struct UAnimNotifyStaticMeshPropComponent : UActorComponent {
};

// Class AvaAnimation.PoseSampler_CloseEyes
// Size: 0x88 (Inherited: 0x28)
struct UPoseSampler_CloseEyes : UPoseSampler {
	char pad_28[0x60]; // 0x28(0x60)
};

// Class AvaAnimation.AnimNotify_CloseEyes
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotify_CloseEyes : UAnimNotifyState {
	char pad_30[0x8]; // 0x30(0x08)
	struct UPoseSampler_CloseEyes* PoseSampler; // 0x38(0x08)
};

// Class AvaAnimation.AnimNotifyState_ClothOptions
// Size: 0x1a0 (Inherited: 0x30)
struct UAnimNotifyState_ClothOptions : UAnimNotifyState {
	bool bPiecesListIsInclusive; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FCharacterPieceType> PiecesList; // 0x38(0x10)
	struct TSet<struct FClothingAssetName> ClothingAssetList; // 0x48(0x50)
	struct UIntProvider* IterationCount; // 0x98(0x08)
	struct UIntProvider* MaxIterationCount; // 0xa0(0x08)
	struct UIntProvider* SubdivisionCount; // 0xa8(0x08)
	struct UFloatProvider* TeleportDistanceThreshold; // 0xb0(0x08)
	struct UFloatProvider* TeleportRotationThreshold; // 0xb8(0x08)
	struct UFloatProvider* ClothBlendWeight; // 0xc0(0x08)
	struct UFloatProvider* ClothMaxDistanceScale; // 0xc8(0x08)
	struct UFloatProvider* EdgeStiffness; // 0xd0(0x08)
	struct UFloatProvider* BendingStiffness; // 0xd8(0x08)
	struct UFloatProvider* AreaStiffness; // 0xe0(0x08)
	struct UVector2DProvider* TetherStiffness; // 0xe8(0x08)
	struct UFloatProvider* DampingCoefficient; // 0xf0(0x08)
	struct UFloatProvider* DragCoefficient; // 0xf8(0x08)
	struct UFloatProvider* LiftCoefficient; // 0x100(0x08)
	struct UVectorProvider* AdditionalWindVelocity; // 0x108(0x08)
	struct UFloatProvider* GravityScale; // 0x110(0x08)
	struct UVectorProvider* GravityOverride; // 0x118(0x08)
	struct UVector2DProvider* AnimDriveStiffness; // 0x120(0x08)
	struct UVector2DProvider* AnimDriveDamping; // 0x128(0x08)
	struct UFloatProvider* WindVelocityScale; // 0x130(0x08)
	struct UFloatProvider* LinearVelocityScale; // 0x138(0x08)
	struct UFloatProvider* AngularVelocityScale; // 0x140(0x08)
	struct UFloatProvider* FictitiousAngularScale; // 0x148(0x08)
	char pad_150[0x50]; // 0x150(0x50)
};

// Class AvaAnimation.PoseSampler_AmbientEyes
// Size: 0x1c0 (Inherited: 0x28)
struct UPoseSampler_AmbientEyes : UPoseSampler {
	char pad_28[0x20]; // 0x28(0x20)
	int32_t LODThreshold; // 0x48(0x04)
	char pad_4C[0x174]; // 0x4c(0x174)

	void OnDialogueLineAnimStarted(struct FName DialogueID, float WorldTime); // Function AvaAnimation.PoseSampler_AmbientEyes.OnDialogueLineAnimStarted // (Final|Native|Private) // @ game+0x147cae0
	void OnDialogueLineAnimFinished(bool bCancelled); // Function AvaAnimation.PoseSampler_AmbientEyes.OnDialogueLineAnimFinished // (Final|Native|Private) // @ game+0x147ca50
};

// Class AvaAnimation.AnimRequest_AmbientEyes
// Size: 0x38 (Inherited: 0x28)
struct UAnimRequest_AmbientEyes : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UPoseSampler_AmbientEyes* PoseSampler; // 0x30(0x08)
};

// Class AvaAnimation.AnimRequest_Dialogue
// Size: 0x5f0 (Inherited: 0x28)
struct UAnimRequest_Dialogue : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct FAnimationTrack FacialDialogueMouthOnlyTrack; // 0x40(0x1d0)
	struct FAnimationTrack FacialDialogueFaceOnlyTrack; // 0x210(0x1d0)
	struct FAnimationTrack FacialDialogueHeadOnlyTrack; // 0x3e0(0x1d0)
	char pad_5B0[0x40]; // 0x5b0(0x40)
};

// Class AvaAnimation.AnimRequest_FacialAnimation
// Size: 0x410 (Inherited: 0x28)
struct UAnimRequest_FacialAnimation : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct FAnimationTrack FacialEmotionTrackA; // 0x40(0x1d0)
	struct FAnimationTrack FacialEmotionTrackB; // 0x210(0x1d0)
	char pad_3E0[0x30]; // 0x3e0(0x30)
};

// Class AvaAnimation.AnimRequest_FacialEmotion
// Size: 0x420 (Inherited: 0x28)
struct UAnimRequest_FacialEmotion : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct FAnimationTrack FacialEmotionTrackA; // 0x40(0x1d0)
	char pad_210[0x10]; // 0x210(0x10)
	struct FAnimationTrack FacialEmotionTrackB; // 0x220(0x1d0)
	char pad_3F0[0x30]; // 0x3f0(0x30)
};

// Class AvaAnimation.AnimRequestProvider
// Size: 0x28 (Inherited: 0x28)
struct UAnimRequestProvider : UInterface {
};

// Class AvaAnimation.AnimTag_Conditional
// Size: 0x38 (Inherited: 0x28)
struct UAnimTag_Conditional : UAnimationArchitectTagProvider {
	struct UBoolProvider* Condition; // 0x28(0x08)
	struct UAnimationArchitectTagProvider* TagProvider; // 0x30(0x08)
};

// Class AvaAnimation.AnimTag_FallbackChain
// Size: 0x38 (Inherited: 0x28)
struct UAnimTag_FallbackChain : UAnimationArchitectTagProvider {
	struct TArray<struct UAnimationArchitectTagProvider*> Entries; // 0x28(0x10)
};

// Class AvaAnimation.AvaAnimationMovementInterface
// Size: 0x28 (Inherited: 0x28)
struct UAvaAnimationMovementInterface : UInterface {
};

// Class AvaAnimation.BlendSpaceInputProvider
// Size: 0x28 (Inherited: 0x28)
struct UBlendSpaceInputProvider : UBaseProvider {

	bool GetBlendSpaceInput(struct UObject* Caller, struct FVector& BlendSpaceInput); // Function AvaAnimation.BlendSpaceInputProvider.GetBlendSpaceInput // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1480c90
};

// Class AvaAnimation.BlendSpaceInput_Direct
// Size: 0x38 (Inherited: 0x28)
struct UBlendSpaceInput_Direct : UBlendSpaceInputProvider {
	struct FVector Parameters; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AvaAnimation.BlendSpaceInput_GForce
// Size: 0x48 (Inherited: 0x28)
struct UBlendSpaceInput_GForce : UBlendSpaceInputProvider {
	struct UActorProvider* ActorToGetAccelerationFrom; // 0x28(0x08)
	struct UFloatProvider* Alpha; // 0x30(0x08)
	enum class EAxisMapping HorizontalAxis; // 0x38(0x01)
	enum class EAxisMapping VerticalAxis; // 0x39(0x01)
	char pad_3A[0xe]; // 0x3a(0x0e)
};

// Class AvaAnimation.BoneMaskBase
// Size: 0x30 (Inherited: 0x28)
struct UBoneMaskBase : UAnimMetaData {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class AvaAnimation.BoneMask_BranchFilter
// Size: 0x40 (Inherited: 0x30)
struct UBoneMask_BranchFilter : UBoneMaskBase {
	struct TArray<struct FBranchFilter> BranchFilters; // 0x30(0x10)
};

// Class AvaAnimation.BoneMask_FilterStaticTracks
// Size: 0x30 (Inherited: 0x30)
struct UBoneMask_FilterStaticTracks : UBoneMaskBase {
};

// Class AvaAnimation.BoolProvider
// Size: 0x28 (Inherited: 0x28)
struct UBoolProvider : UBaseProvider {

	bool GetBoolBP(struct UObject* Context); // Function AvaAnimation.BoolProvider.GetBoolBP // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1480d80
};

// Class AvaAnimation.Bool_AND
// Size: 0x38 (Inherited: 0x28)
struct UBool_AND : UBoolProvider {
	struct TArray<struct UBoolProvider*> Children; // 0x28(0x10)
};

// Class AvaAnimation.Bool_FallbackChain
// Size: 0x38 (Inherited: 0x28)
struct UBool_FallbackChain : UBoolProvider {
	struct TArray<struct UBoolProvider*> Entries; // 0x28(0x10)
};

// Class AvaAnimation.Bool_NOT
// Size: 0x30 (Inherited: 0x28)
struct UBool_NOT : UBoolProvider {
	struct UBoolProvider* Child; // 0x28(0x08)
};

// Class AvaAnimation.Bool_OR
// Size: 0x38 (Inherited: 0x28)
struct UBool_OR : UBoolProvider {
	struct TArray<struct UBoolProvider*> Children; // 0x28(0x10)
};

// Class AvaAnimation.Bool_XOR
// Size: 0x38 (Inherited: 0x28)
struct UBool_XOR : UBoolProvider {
	struct TArray<struct UBoolProvider*> Children; // 0x28(0x10)
};

// Class AvaAnimation.Bool_Direct
// Size: 0x30 (Inherited: 0x28)
struct UBool_Direct : UBoolProvider {
	bool Value; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AvaAnimation.BPAnimationClipProvider
// Size: 0x28 (Inherited: 0x28)
struct UBPAnimationClipProvider : UAnimationClipProvider {

	bool GetAnimationClipBP(struct UObject* Caller, struct UAnimSequenceBase*& OutAnimClip); // Function AvaAnimation.BPAnimationClipProvider.GetAnimationClipBP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
};

// Class AvaAnimation.CameraFixupOperation
// Size: 0x30 (Inherited: 0x28)
struct UCameraFixupOperation : UObject {
	bool Enabled; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float IgnorePreviousStateTime; // 0x2c(0x04)
};

// Class AvaAnimation.CameraFixupAdjustHeightOperation
// Size: 0x70 (Inherited: 0x30)
struct UCameraFixupAdjustHeightOperation : UCameraFixupOperation {
	struct UTransformProvider* HeightTarget; // 0x30(0x08)
	float HeightOffset; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UFloatProvider* HeightOffsetProvider; // 0x40(0x08)
	char DrawDebug : 1; // 0x48(0x01)
	char EnableTargetLag : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float TargetLagSpeed; // 0x4c(0x04)
	struct UFloatProvider* TargetLagSpeedProvider; // 0x50(0x08)
	float TargetLagMaxDistance; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UFloatProvider* TargetLagMaxDistanceProvider; // 0x60(0x08)
	char DrawDebugLagMarkers : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class AvaAnimation.CameraFixupOperationState
// Size: 0x40 (Inherited: 0x28)
struct UCameraFixupOperationState : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct UObject* Context; // 0x38(0x08)
};

// Class AvaAnimation.CameraFixupAdjustHeightOperationState
// Size: 0x78 (Inherited: 0x40)
struct UCameraFixupAdjustHeightOperationState : UCameraFixupOperationState {
	char pad_40[0x18]; // 0x40(0x18)
	struct UTransformProvider* HeightTarget; // 0x58(0x08)
	char pad_60[0x18]; // 0x60(0x18)
};

// Class AvaAnimation.CameraFixupAimAtOperation
// Size: 0xe8 (Inherited: 0x30)
struct UCameraFixupAimAtOperation : UCameraFixupOperation {
	struct UTransformProvider* AimTarget; // 0x30(0x08)
	char DrawDebug : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float HorizontalDamping; // 0x3c(0x04)
	struct UFloatProvider* HorizontalDampingProvider; // 0x40(0x08)
	float VerticalDamping; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UFloatProvider* VerticalDampingProvider; // 0x50(0x08)
	float ScreenX; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UFloatProvider* ScreenXProvider; // 0x60(0x08)
	float ScreenY; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UFloatProvider* ScreenYProvider; // 0x70(0x08)
	float DeadZoneWidth; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UFloatProvider* DeadZoneWidthProvider; // 0x80(0x08)
	float DeadZoneHeight; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UFloatProvider* DeadZoneHeightProvider; // 0x90(0x08)
	float SoftZoneWidth; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UFloatProvider* SoftZoneWidthProvider; // 0xa0(0x08)
	float SoftZoneHeight; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UFloatProvider* SoftZoneHeightProvider; // 0xb0(0x08)
	float BiasX; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UFloatProvider* BiasXProvider; // 0xc0(0x08)
	float BiasY; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct UFloatProvider* BiasYProvider; // 0xd0(0x08)
	struct UFloatProvider* CameraPositionMaxFrameDeltaProvider; // 0xd8(0x08)
	struct UFloatProvider* AimTargetMaxFrameDeltaProvider; // 0xe0(0x08)
};

// Class AvaAnimation.CameraFixupAimAtOperationState
// Size: 0x130 (Inherited: 0x40)
struct UCameraFixupAimAtOperationState : UCameraFixupOperationState {
	char pad_40[0x90]; // 0x40(0x90)
	struct UTransformProvider* AimTarget; // 0xd0(0x08)
	char pad_D8[0x58]; // 0xd8(0x58)
};

// Class AvaAnimation.CameraFixupAimWithPivotOperation
// Size: 0x60 (Inherited: 0x30)
struct UCameraFixupAimWithPivotOperation : UCameraFixupOperation {
	struct UTransformProvider* AimTarget; // 0x30(0x08)
	char DrawDebug : 1; // 0x38(0x01)
	char EnableTargetLag : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float TargetLagSpeed; // 0x3c(0x04)
	struct UFloatProvider* TargetLagSpeedProvider; // 0x40(0x08)
	float TargetLagMaxDistance; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UFloatProvider* TargetLagMaxDistanceProvider; // 0x50(0x08)
	char DrawDebugLagMarkers : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class AvaAnimation.CameraFixupAimWithPivotOperationState
// Size: 0x70 (Inherited: 0x40)
struct UCameraFixupAimWithPivotOperationState : UCameraFixupOperationState {
	char pad_40[0x10]; // 0x40(0x10)
	struct UTransformProvider* AimTarget; // 0x50(0x08)
	char pad_58[0x18]; // 0x58(0x18)
};

// Class AvaAnimation.CameraFixupComponent
// Size: 0x198 (Inherited: 0xc8)
struct UCameraFixupComponent : UActorComponent {
	char pad_C8[0xc8]; // 0xc8(0xc8)
	struct UObject* LastCameraFixupOperations; // 0x190(0x08)

	void LightRigBlueprintShowDebug(struct AActor* LightRigActor); // Function AvaAnimation.CameraFixupComponent.LightRigBlueprintShowDebug // (Final|Native|Public|BlueprintCallable) // @ game+0x1480ed0
	struct FVector GetTarget(bool& bOutHasValidTarget); // Function AvaAnimation.CameraFixupComponent.GetTarget // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1480e20
};

// Class AvaAnimation.CameraFixupNoiseOperations
// Size: 0x60 (Inherited: 0x30)
struct UCameraFixupNoiseOperations : UDataAsset {
	struct UFloatProvider* XPositionProvider; // 0x30(0x08)
	struct UFloatProvider* YPositionProvider; // 0x38(0x08)
	struct UFloatProvider* ZPositionProvider; // 0x40(0x08)
	struct UFloatProvider* PitchAngleProvider; // 0x48(0x08)
	struct UFloatProvider* YawAngleProvider; // 0x50(0x08)
	struct UFloatProvider* RollAngleProvider; // 0x58(0x08)
};

// Class AvaAnimation.CameraFixupNoiseOperation
// Size: 0x90 (Inherited: 0x30)
struct UCameraFixupNoiseOperation : UCameraFixupOperation {
	char DrawDebug : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FGameplayTagContainer AssetTags; // 0x38(0x20)
	struct UCameraFixupNoiseOperations* ExplicitAsset; // 0x58(0x08)
	struct UFloatProvider* XPositionProvider; // 0x60(0x08)
	struct UFloatProvider* YPositionProvider; // 0x68(0x08)
	struct UFloatProvider* ZPositionProvider; // 0x70(0x08)
	struct UFloatProvider* PitchAngleProvider; // 0x78(0x08)
	struct UFloatProvider* YawAngleProvider; // 0x80(0x08)
	struct UFloatProvider* RollAngleProvider; // 0x88(0x08)
};

// Class AvaAnimation.CameraFixupNoiseOperationState
// Size: 0x68 (Inherited: 0x40)
struct UCameraFixupNoiseOperationState : UCameraFixupOperationState {
	struct UCameraFixupNoiseOperations* CameraFixupNoiseOperations; // 0x40(0x08)
	char pad_48[0x20]; // 0x48(0x20)
};

// Class AvaAnimation.CameraFixupSetAnglesOperation
// Size: 0x60 (Inherited: 0x30)
struct UCameraFixupSetAnglesOperation : UCameraFixupOperation {
	char DrawDebug : 1; // 0x30(0x01)
	char Relative : 1; // 0x30(0x01)
	char SetPitch : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float PitchAngle; // 0x34(0x04)
	struct UFloatProvider* PitchAngleProvider; // 0x38(0x08)
	char SetYaw : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float YawAngle; // 0x44(0x04)
	struct UFloatProvider* YawAngleProvider; // 0x48(0x08)
	char SetRoll : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float RollAngle; // 0x54(0x04)
	struct UFloatProvider* RollAngleProvider; // 0x58(0x08)
};

// Class AvaAnimation.CameraFixupSetAnglesOperationState
// Size: 0x50 (Inherited: 0x40)
struct UCameraFixupSetAnglesOperationState : UCameraFixupOperationState {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class AvaAnimation.CameraFixupSetFocusDistanceOperation
// Size: 0x48 (Inherited: 0x30)
struct UCameraFixupSetFocusDistanceOperation : UCameraFixupOperation {
	struct UTransformProvider* DistanceTarget; // 0x30(0x08)
	struct UFloatProvider* DistanceOffsetProvider; // 0x38(0x08)
	float DistanceOffset; // 0x40(0x04)
	char DrawDebug : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class AvaAnimation.CameraFixupSetFocusDistanceOperationState
// Size: 0x60 (Inherited: 0x40)
struct UCameraFixupSetFocusDistanceOperationState : UCameraFixupOperationState {
	char pad_40[0x8]; // 0x40(0x08)
	struct UTransformProvider* DistanceTarget; // 0x48(0x08)
	char pad_50[0x10]; // 0x50(0x10)
};

// Class AvaAnimation.CameraFixupSetPositionMethod
// Size: 0x28 (Inherited: 0x28)
struct UCameraFixupSetPositionMethod : UObject {
};

// Class AvaAnimation.CameraFixupSetPositionMethodState
// Size: 0x40 (Inherited: 0x28)
struct UCameraFixupSetPositionMethodState : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct UObject* Context; // 0x38(0x08)
};

// Class AvaAnimation.CameraFixupSetPositionOperation
// Size: 0x38 (Inherited: 0x30)
struct UCameraFixupSetPositionOperation : UCameraFixupOperation {
	struct UCameraFixupSetPositionMethod* Method; // 0x30(0x08)
};

// Class AvaAnimation.CameraFixupSetPositionOperationState
// Size: 0x48 (Inherited: 0x40)
struct UCameraFixupSetPositionOperationState : UCameraFixupOperationState {
	struct UCameraFixupSetPositionMethodState* MethodState; // 0x40(0x08)
};

// Class AvaAnimation.CameraFixupSetPositionTumbleMethod
// Size: 0x60 (Inherited: 0x28)
struct UCameraFixupSetPositionTumbleMethod : UCameraFixupSetPositionMethod {
	struct UTransformProvider* Target; // 0x28(0x08)
	char DrawDebug : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Distance; // 0x34(0x04)
	struct UFloatProvider* DistanceProvider; // 0x38(0x08)
	float PitchAngle; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UFloatProvider* PitchAngleProvider; // 0x48(0x08)
	float YawAngle; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UFloatProvider* YawAngleProvider; // 0x58(0x08)
};

// Class AvaAnimation.CameraFixupSetPositionTumbleMethodState
// Size: 0x90 (Inherited: 0x40)
struct UCameraFixupSetPositionTumbleMethodState : UCameraFixupSetPositionMethodState {
	char pad_40[0x10]; // 0x40(0x10)
	struct UTransformProvider* Target; // 0x50(0x08)
	char pad_58[0x38]; // 0x58(0x38)
};

// Class AvaAnimation.CameraFixupSetPositionXYZMethod
// Size: 0x48 (Inherited: 0x28)
struct UCameraFixupSetPositionXYZMethod : UCameraFixupSetPositionMethod {
	struct UTransformProvider* Target; // 0x28(0x08)
	char DrawDebug : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector Position; // 0x34(0x0c)
	struct UVectorProvider* PositionProvider; // 0x40(0x08)
};

// Class AvaAnimation.CameraFixupSetPositionXYZMethodState
// Size: 0x90 (Inherited: 0x40)
struct UCameraFixupSetPositionXYZMethodState : UCameraFixupSetPositionMethodState {
	char pad_40[0x10]; // 0x40(0x10)
	struct UTransformProvider* Target; // 0x50(0x08)
	char pad_58[0x38]; // 0x58(0x38)
};

// Class AvaAnimation.CameraFixupSetPropertiesOperation
// Size: 0x68 (Inherited: 0x30)
struct UCameraFixupSetPropertiesOperation : UCameraFixupOperation {
	char SetFocusDistance : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float FocusDistance; // 0x34(0x04)
	struct UFloatProvider* FocusDistanceProvider; // 0x38(0x08)
	char SetAperture : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Aperture; // 0x44(0x04)
	struct UFloatProvider* ApertureProvider; // 0x48(0x08)
	char SetFocalLength : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FocalLength; // 0x54(0x04)
	struct UFloatProvider* FocalLengthProvider; // 0x58(0x08)
	char EnableAnimatedFocusDistance : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class AvaAnimation.CameraFixupSetPropertiesOperationState
// Size: 0x50 (Inherited: 0x40)
struct UCameraFixupSetPropertiesOperationState : UCameraFixupOperationState {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class AvaAnimation.CameraFixupSetTargetOperation
// Size: 0x40 (Inherited: 0x30)
struct UCameraFixupSetTargetOperation : UCameraFixupOperation {
	struct UTransformProvider* Target; // 0x30(0x08)
	char DrawDebug : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class AvaAnimation.CameraFixupSetTargetOperationState
// Size: 0x60 (Inherited: 0x40)
struct UCameraFixupSetTargetOperationState : UCameraFixupOperationState {
	char pad_40[0x8]; // 0x40(0x08)
	struct UTransformProvider* Target; // 0x48(0x08)
	char pad_50[0x10]; // 0x50(0x10)
};

// Class AvaAnimation.ColorProvider
// Size: 0x28 (Inherited: 0x28)
struct UColorProvider : UBaseProvider {

	struct FLinearColor GetColorBP(struct UObject* Context, float TimeOffset); // Function AvaAnimation.ColorProvider.GetColorBP // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14855a0
};

// Class AvaAnimation.Color_Direct
// Size: 0x38 (Inherited: 0x28)
struct UColor_Direct : UColorProvider {
	struct FLinearColor Value; // 0x28(0x10)
};

// Class AvaAnimation.ConversationCameraRegistrations
// Size: 0x40 (Inherited: 0x30)
struct UConversationCameraRegistrations : UDataAsset {
	struct TArray<struct FConversationCameraRegistration> Registrations; // 0x30(0x10)
};

// Class AvaAnimation.ConversationEmotions
// Size: 0x40 (Inherited: 0x30)
struct UConversationEmotions : UDataAsset {
	struct TArray<struct FConversationEmotion> Emotions; // 0x30(0x10)
};

// Class AvaAnimation.ConversationExplicitCameraShots
// Size: 0x40 (Inherited: 0x30)
struct UConversationExplicitCameraShots : UDataAsset {
	struct TArray<struct FConversationExplicitCameraShot> CameraShots; // 0x30(0x10)
};

// Class AvaAnimation.ConversationExplicitLayeredAnimations
// Size: 0x40 (Inherited: 0x30)
struct UConversationExplicitLayeredAnimations : UDataAsset {
	struct TArray<struct FConversationExplicitLayeredAnimationCategory> Categories; // 0x30(0x10)
};

// Class AvaAnimation.ConversationExplicitPoseGroups
// Size: 0x40 (Inherited: 0x30)
struct UConversationExplicitPoseGroups : UDataAsset {
	struct TArray<struct FConversationExplicitPoseGroup> PoseGroups; // 0x30(0x10)
};

// Class AvaAnimation.ConversationLayeredAnimationWeights
// Size: 0x40 (Inherited: 0x30)
struct UConversationLayeredAnimationWeights : UDataAsset {
	struct TArray<struct FConversationLayeredAnimationWeightEntry> WeightEntries; // 0x30(0x10)
};

// Class AvaAnimation.ConversationPreset_DistanceProvider
// Size: 0x30 (Inherited: 0x28)
struct UConversationPreset_DistanceProvider : UObject {
	bool Enabled; // 0x28(0x01)
	enum class EConversationPreset_ProximityType Proximity; // 0x29(0x01)
	bool Force; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class AvaAnimation.ConversationPreset_DistanceProvider_Single
// Size: 0x38 (Inherited: 0x30)
struct UConversationPreset_DistanceProvider_Single : UConversationPreset_DistanceProvider {
	float Distance; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AvaAnimation.ConversationPreset_DistanceProvider_AlongLine
// Size: 0x40 (Inherited: 0x30)
struct UConversationPreset_DistanceProvider_AlongLine : UConversationPreset_DistanceProvider {
	float StartDistance; // 0x30(0x04)
	float StepDistance; // 0x34(0x04)
	int32_t MaxSteps; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class AvaAnimation.ConversationPreset_RelativeInteractionActorTest
// Size: 0x30 (Inherited: 0x28)
struct UConversationPreset_RelativeInteractionActorTest : UObject {
	bool Enabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AvaAnimation.ConversationPreset_RelativeInteractionActorTest_RotateInteractionActorToAvatarPosition
// Size: 0x30 (Inherited: 0x30)
struct UConversationPreset_RelativeInteractionActorTest_RotateInteractionActorToAvatarPosition : UConversationPreset_RelativeInteractionActorTest {
};

// Class AvaAnimation.ConversationPreset_RelativeInteractionActorTest_KeepInteractionActorRotation
// Size: 0x30 (Inherited: 0x30)
struct UConversationPreset_RelativeInteractionActorTest_KeepInteractionActorRotation : UConversationPreset_RelativeInteractionActorTest {
};

// Class AvaAnimation.ConversationPreset_RelativeInteractionActorTest_RotateAboutInteractionActor
// Size: 0x38 (Inherited: 0x30)
struct UConversationPreset_RelativeInteractionActorTest_RotateAboutInteractionActor : UConversationPreset_RelativeInteractionActorTest {
	float CheckAngleStep; // 0x30(0x04)
	bool StartRotationToAvatar; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class AvaAnimation.ConversationPreset_CheckBetweenTest
// Size: 0x30 (Inherited: 0x28)
struct UConversationPreset_CheckBetweenTest : UObject {
	bool Enabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AvaAnimation.ConversationPreset_CheckBetweenTest_BoneCylinderTest
// Size: 0x40 (Inherited: 0x30)
struct UConversationPreset_CheckBetweenTest_BoneCylinderTest : UConversationPreset_CheckBetweenTest {
	struct FName BoneName; // 0x30(0x08)
	float Radius; // 0x38(0x04)
	float TuckInMultipler; // 0x3c(0x04)
};

// Class AvaAnimation.ConversationPreset_InitialTransform
// Size: 0x28 (Inherited: 0x28)
struct UConversationPreset_InitialTransform : UObject {
};

// Class AvaAnimation.ConversationPreset_InitialTransform_Preexisting
// Size: 0x28 (Inherited: 0x28)
struct UConversationPreset_InitialTransform_Preexisting : UConversationPreset_InitialTransform {
};

// Class AvaAnimation.ConversationPreset_InitialTransform_MoveRelative
// Size: 0x40 (Inherited: 0x28)
struct UConversationPreset_InitialTransform_MoveRelative : UConversationPreset_InitialTransform {
	float PositionDirectionAngle; // 0x28(0x04)
	float MinDistance; // 0x2c(0x04)
	float StepDistance; // 0x30(0x04)
	int32_t MaxSteps; // 0x34(0x04)
	float RotationOffset; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class AvaAnimation.ConversationPreset_InitialTransform_MoveRelative_Preexisting
// Size: 0x40 (Inherited: 0x40)
struct UConversationPreset_InitialTransform_MoveRelative_Preexisting : UConversationPreset_InitialTransform_MoveRelative {
};

// Class AvaAnimation.ConversationPreset_AvatarPlacement
// Size: 0x28 (Inherited: 0x28)
struct UConversationPreset_AvatarPlacement : UObject {
};

// Class AvaAnimation.ConversationPreset_AvatarPlacement_RelativeInteractionActor
// Size: 0x78 (Inherited: 0x28)
struct UConversationPreset_AvatarPlacement_RelativeInteractionActor : UConversationPreset_AvatarPlacement {
	struct TArray<struct UConversationPreset_DistanceProvider*> DistanceProviders; // 0x28(0x10)
	struct TArray<struct UConversationPreset_RelativeInteractionActorTest*> TestsToPerform; // 0x38(0x10)
	float AvatarPositionDirectionFromInteractionActor; // 0x48(0x04)
	float AvatarRotationFromInteractionActor; // 0x4c(0x04)
	bool CheckGroundCollision; // 0x50(0x01)
	bool CheckNavMesh; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct UConversationPreset_CheckBetweenTest*> CheckBetweenTests; // 0x58(0x10)
	bool UseMaxHeightAngleThreshold; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float MaxHeightAngleThreshold; // 0x6c(0x04)
	enum class EConversationPreset_ProximityType FailProximity; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class AvaAnimation.ConversationPreset_AvatarPlacement_Preexisting
// Size: 0x38 (Inherited: 0x28)
struct UConversationPreset_AvatarPlacement_Preexisting : UConversationPreset_AvatarPlacement {
	enum class EConversationPreset_ProximityType Proximity; // 0x28(0x01)
	bool RotateInteractionActorToAvatar; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float InteractionActorRotationOffset; // 0x2c(0x04)
	bool RotateActorToInteractionActor; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float AvatarRotationOffset; // 0x34(0x04)
};

// Class AvaAnimation.ConversationPreset_PreInitInvoke_Placement
// Size: 0x28 (Inherited: 0x28)
struct UConversationPreset_PreInitInvoke_Placement : UObject {
};

// Class AvaAnimation.ConversationPreset_PreInitInvoke_Placement_RelativeInteractionActor
// Size: 0x38 (Inherited: 0x28)
struct UConversationPreset_PreInitInvoke_Placement_RelativeInteractionActor : UConversationPreset_PreInitInvoke_Placement {
	float IdealDistance; // 0x28(0x04)
	float NearDistance; // 0x2c(0x04)
	float AvatarPositionDirectionFromInteractionActor; // 0x30(0x04)
	float AvatarRotationFromInteractionActor; // 0x34(0x04)
};

// Class AvaAnimation.ConversationPreset_PreInitInvoke_Placement_Preexisting
// Size: 0x38 (Inherited: 0x28)
struct UConversationPreset_PreInitInvoke_Placement_Preexisting : UConversationPreset_PreInitInvoke_Placement {
	bool RotateInteractionActorToAvatar; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float InteractionActorRotationOffset; // 0x2c(0x04)
	bool RotateActorToInteractionActor; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float AvatarRotationOffset; // 0x34(0x04)
};

// Class AvaAnimation.ConversationPreset_FinalTransform
// Size: 0x28 (Inherited: 0x28)
struct UConversationPreset_FinalTransform : UObject {
};

// Class AvaAnimation.ConversationPreset_FinalTransform_UseInitial
// Size: 0x28 (Inherited: 0x28)
struct UConversationPreset_FinalTransform_UseInitial : UConversationPreset_FinalTransform {
};

// Class AvaAnimation.ConversationPreset_FinalTransform_Preexisting
// Size: 0x28 (Inherited: 0x28)
struct UConversationPreset_FinalTransform_Preexisting : UConversationPreset_FinalTransform {
};

// Class AvaAnimation.ConversationPreset_FinalTransform_MoveRelative
// Size: 0x40 (Inherited: 0x28)
struct UConversationPreset_FinalTransform_MoveRelative : UConversationPreset_FinalTransform {
	float PositionDirectionAngle; // 0x28(0x04)
	float MinDistance; // 0x2c(0x04)
	float StepDistance; // 0x30(0x04)
	int32_t MaxSteps; // 0x34(0x04)
	float RotationOffset; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class AvaAnimation.ConversationPreset_FinalTransform_MoveRelative_Initial
// Size: 0x40 (Inherited: 0x40)
struct UConversationPreset_FinalTransform_MoveRelative_Initial : UConversationPreset_FinalTransform_MoveRelative {
};

// Class AvaAnimation.ConversationPreset_FinalTransform_MoveRelative_Preexisting
// Size: 0x40 (Inherited: 0x40)
struct UConversationPreset_FinalTransform_MoveRelative_Preexisting : UConversationPreset_FinalTransform_MoveRelative {
};

// Class AvaAnimation.ConversationPresets
// Size: 0x40 (Inherited: 0x30)
struct UConversationPresets : UDataAsset {
	struct TArray<struct FConversationPreset> Presets; // 0x30(0x10)
};

// Class AvaAnimation.DebugWindow
// Size: 0x40 (Inherited: 0x28)
struct UDebugWindow : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class AvaAnimation.DebugAnimationTargets
// Size: 0xc8 (Inherited: 0x40)
struct UDebugAnimationTargets : UDebugWindow {
	struct AActor* DebugActor; // 0x40(0x08)
	char pad_48[0x80]; // 0x48(0x80)
};

// Class AvaAnimation.DebugLayeredBlend
// Size: 0xc8 (Inherited: 0x40)
struct UDebugLayeredBlend : UDebugWindow {
	struct AActor* DebugActor; // 0x40(0x08)
	char pad_48[0x80]; // 0x48(0x80)
};

// Class AvaAnimation.FacialComponent
// Size: 0x7b8 (Inherited: 0xc8)
struct UFacialComponent : UActorComponent {
	struct UAnimRequest_Dialogue* DialogueAnimRequest; // 0xc8(0x08)
	struct FMulticastInlineDelegate OnDialogueLineAnimTablesFinishedLoading; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnDialogueLineAnimStartedDelegate; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnDialogueLineAnimFinishedDelegate; // 0xf0(0x10)
	char pad_100[0x3d0]; // 0x100(0x3d0)
	struct UAimEyesData* IdleAimEyes; // 0x4d0(0x08)
	struct UAimEyesData* ListeningAimEyes; // 0x4d8(0x08)
	struct UAimEyesData* SpeakingAimEyes; // 0x4e0(0x08)
	char pad_4E8[0x40]; // 0x4e8(0x40)
	struct FMulticastInlineDelegate DialogueLineEmotionChangedDelegate; // 0x528(0x10)
	struct UAnimRequest_FacialEmotion* FacialEmotionAnimRequest; // 0x538(0x08)
	char pad_540[0x140]; // 0x540(0x140)
	struct UAnimRequest_FacialAnimation* FacialAnimationAnimRequest; // 0x680(0x08)
	char pad_688[0x70]; // 0x688(0x70)
	struct UAnimRequest_AmbientEyes* AmbientEyesAnimRequest; // 0x6f8(0x08)
	struct TArray<struct UDataTable*> DialogueLineDataTables; // 0x700(0x10)
	char pad_710[0x8]; // 0x710(0x08)
	struct UAnimSequence* CurrentDialogueLineAnim; // 0x718(0x08)
	char pad_720[0x98]; // 0x720(0x98)

	void StartSettingGazeState(enum class GazeStatesEnum InGazeState, enum class EManagedEyeStatePriority InPriority); // Function AvaAnimation.FacialComponent.StartSettingGazeState // (Final|Native|Public|BlueprintCallable) // @ game+0x148a760
	void SetAmbientEyesDefaultValue(bool bValue); // Function AvaAnimation.FacialComponent.SetAmbientEyesDefaultValue // (Final|Native|Public|BlueprintCallable) // @ game+0x148a6d0
	void SetAdditiveEyeTargetDefaultValue(bool bValue); // Function AvaAnimation.FacialComponent.SetAdditiveEyeTargetDefaultValue // (Final|Native|Public|BlueprintCallable) // @ game+0x148a640
	void ReloadAnimDataTables(); // Function AvaAnimation.FacialComponent.ReloadAnimDataTables // (Final|Native|Public|BlueprintCallable) // @ game+0x148a620
	void OnHealthChanged(struct AActor* Actor, float Delta, bool bIndicateHUD); // Function AvaAnimation.FacialComponent.OnHealthChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x148a500
	void OnCharacterLoadComplete(struct AActor* Actor); // Function AvaAnimation.FacialComponent.OnCharacterLoadComplete // (Final|Native|Private) // @ game+0x148a470
	bool IsPlayingDialogueLine(); // Function AvaAnimation.FacialComponent.IsPlayingDialogueLine // (Final|Native|Public|BlueprintCallable) // @ game+0x148a440
	bool IsLoadingDialogueLineAnimDataTables(); // Function AvaAnimation.FacialComponent.IsLoadingDialogueLineAnimDataTables // (Final|Native|Public|BlueprintCallable) // @ game+0x148a410
	struct UAnimSequence* GetFacialEmotionAnim(struct FName Emotion, struct FGameplayTagContainer AnimTags); // Function AvaAnimation.FacialComponent.GetFacialEmotionAnim // (Final|Native|Public|BlueprintCallable) // @ game+0x148a220
	struct UAnimSequence* GetFacialAnimByTags(struct FGameplayTagContainer AnimTags); // Function AvaAnimation.FacialComponent.GetFacialAnimByTags // (Final|Native|Public|BlueprintCallable) // @ game+0x148a130
	struct TSoftObjectPtr<UAnimSequence> GetDialogueLineAnim(struct FName DialogueLine); // Function AvaAnimation.FacialComponent.GetDialogueLineAnim // (Final|Native|Public|BlueprintCallable) // @ game+0x148a060
	enum class EFacialEmotion GetActiveFacialEmotion(); // Function AvaAnimation.FacialComponent.GetActiveFacialEmotion // (Final|Native|Public|BlueprintCallable) // @ game+0x148a030
	void FinishSettingGazeState(enum class EManagedEyeStatePriority InPriority); // Function AvaAnimation.FacialComponent.FinishSettingGazeState // (Final|Native|Public|BlueprintCallable) // @ game+0x1489fb0
	bool EditorPlayDialogueLine(struct FName DialogueLine, struct FName OverrideDialogueLineEmotion); // Function AvaAnimation.FacialComponent.EditorPlayDialogueLine // (Final|Native|Public|BlueprintCallable) // @ game+0x1489ee0
	bool EditorLoadLanguage(struct FString Lang); // Function AvaAnimation.FacialComponent.EditorLoadLanguage // (Final|Native|Public|BlueprintCallable) // @ game+0x1489de0
	struct TArray<struct FName> EditorGetDialogueLineIds(); // Function AvaAnimation.FacialComponent.EditorGetDialogueLineIds // (Final|Native|Public|BlueprintCallable) // @ game+0x1489d60
	bool EditorCancelPlayingCurrentDialogueLine(); // Function AvaAnimation.FacialComponent.EditorCancelPlayingCurrentDialogueLine // (Final|Native|Public|BlueprintCallable) // @ game+0x1489d30
	void DoubleBlinkNow(); // Function AvaAnimation.FacialComponent.DoubleBlinkNow // (Final|Native|Public|BlueprintCallable) // @ game+0x1489d10
	void BlinkNow(); // Function AvaAnimation.FacialComponent.BlinkNow // (Final|Native|Public|BlueprintCallable) // @ game+0x1489cf0
};

// Class AvaAnimation.FadeProvider
// Size: 0x28 (Inherited: 0x28)
struct UFadeProvider : UBaseProvider {
};

// Class AvaAnimation.FadeProvider_CameraOnly
// Size: 0x58 (Inherited: 0x28)
struct UFadeProvider_CameraOnly : UFadeProvider {
	struct APlayerCameraManager* PlayerCameraManager; // 0x28(0x08)
	char pad_30[0x28]; // 0x30(0x28)
};

// Class AvaAnimation.FloatProvider
// Size: 0x28 (Inherited: 0x28)
struct UFloatProvider : UBaseProvider {

	float GetFloatBP(struct UObject* Context, float TimeOffset); // Function AvaAnimation.FloatProvider.GetFloatBP // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x148a340
};

// Class AvaAnimation.Float_Conditional
// Size: 0x38 (Inherited: 0x28)
struct UFloat_Conditional : UFloatProvider {
	struct UBoolProvider* Condition; // 0x28(0x08)
	struct UFloatProvider* Value; // 0x30(0x08)
};

// Class AvaAnimation.Float_ConversationLayeredAnimationWeight
// Size: 0x30 (Inherited: 0x28)
struct UFloat_ConversationLayeredAnimationWeight : UFloatProvider {
	struct FConversationLayeredAnimationWeight WeightEntryName; // 0x28(0x08)
};

// Class AvaAnimation.Float_FallbackChain
// Size: 0x38 (Inherited: 0x28)
struct UFloat_FallbackChain : UFloatProvider {
	struct TArray<struct UFloatProvider*> Entries; // 0x28(0x10)
};

// Class AvaAnimation.Float_ProjectedTimeAnimationValue
// Size: 0x38 (Inherited: 0x28)
struct UFloat_ProjectedTimeAnimationValue : UFloatProvider {
	float OriginalTime; // 0x28(0x04)
	float OriginalTimeAnimationValue; // 0x2c(0x04)
	float animationLength; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AvaAnimation.Float_RemapValue
// Size: 0x50 (Inherited: 0x28)
struct UFloat_RemapValue : UFloatProvider {
	struct UFloatProvider* Input; // 0x28(0x08)
	struct UFloatProvider* MinInput; // 0x30(0x08)
	struct UFloatProvider* MaxInput; // 0x38(0x08)
	struct UFloatProvider* MinOutput; // 0x40(0x08)
	struct UFloatProvider* MaxOutput; // 0x48(0x08)
};

// Class AvaAnimation.Float_TransformDistance
// Size: 0x38 (Inherited: 0x28)
struct UFloat_TransformDistance : UFloatProvider {
	struct UTransformProvider* TransformA; // 0x28(0x08)
	struct UTransformProvider* TransformB; // 0x30(0x08)
};

// Class AvaAnimation.Float_Direct
// Size: 0x30 (Inherited: 0x28)
struct UFloat_Direct : UFloatProvider {
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AvaAnimation.Float_RandomInRange
// Size: 0x30 (Inherited: 0x28)
struct UFloat_RandomInRange : UFloatProvider {
	float Min; // 0x28(0x04)
	float Max; // 0x2c(0x04)
};

// Class AvaAnimation.IKDriver
// Size: 0x28 (Inherited: 0x28)
struct UIKDriver : UObject {
};

// Class AvaAnimation.IKDriver_AimAt
// Size: 0x38 (Inherited: 0x28)
struct UIKDriver_AimAt : UIKDriver {
	struct TArray<struct FIKDriver_AimAtControl> AimControls; // 0x28(0x10)
};

// Class AvaAnimation.IKDriver_AimAtConeOnly
// Size: 0x88 (Inherited: 0x28)
struct UIKDriver_AimAtConeOnly : UIKDriver {
	struct TArray<struct FIKDriver_AimAtConeOnlyControl> AimControls; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
};

// Class AvaAnimation.IKDriver_AimAtConstrained
// Size: 0x388 (Inherited: 0x28)
struct UIKDriver_AimAtConstrained : UIKDriver {
	struct TArray<struct FIKDriver_AimAtConstrainedControl> AimControls; // 0x28(0x10)
	char pad_38[0x350]; // 0x38(0x350)
};

// Class AvaAnimation.IKDriver_AimHead
// Size: 0xb8 (Inherited: 0x28)
struct UIKDriver_AimHead : UIKDriver {
	struct FBoneReferenceEx HeadBone; // 0x28(0x10)
	struct TArray<struct FBoneReferenceEx> NeckBones; // 0x38(0x10)
	struct TArray<struct FBoneReferenceEx> SpineBones; // 0x48(0x10)
	float YawLimit; // 0x58(0x04)
	float PitchLimit; // 0x5c(0x04)
	float BackDeadZoneAngle; // 0x60(0x04)
	struct FRotator ConeRotationOffset; // 0x64(0x0c)
	struct FRotator TaskRotationOffset; // 0x70(0x0c)
	float BlendSpeed; // 0x7c(0x04)
	float TimeDelay; // 0x80(0x04)
	float DelayStartTime; // 0x84(0x04)
	struct FVector PrevTargetDirection; // 0x88(0x0c)
	char pad_94[0x24]; // 0x94(0x24)
};

// Class AvaAnimation.IKDriver_AnimationDriven
// Size: 0x38 (Inherited: 0x28)
struct UIKDriver_AnimationDriven : UIKDriver {
	struct TArray<struct FIKDriver_AnimationDrivenData> EffectorDefinitions; // 0x28(0x10)
};

// Class AvaAnimation.IKDriver_DisableControls
// Size: 0x48 (Inherited: 0x28)
struct UIKDriver_DisableControls : UIKDriver {
	struct TArray<struct FName> AlphaControlsToDisable; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class AvaAnimation.IKDriver_FloorContact
// Size: 0x1e0 (Inherited: 0x28)
struct UIKDriver_FloorContact : UIKDriver {
	struct TArray<struct FIKDriver_FloorContactControl> Controls; // 0x28(0x10)
	struct FBoneReferenceEx HipBone; // 0x38(0x10)
	struct FName HipAlphaVariableName; // 0x48(0x08)
	struct FName HipTransformVariableName; // 0x50(0x08)
	enum class ECollisionChannel CollisionChannel; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float HipMultiplier; // 0x5c(0x04)
	float GlobalRayTraceStartScale; // 0x60(0x04)
	float GlobalRayTraceFinishScale; // 0x64(0x04)
	struct FVector UpperBodyOffset; // 0x68(0x0c)
	bool bAddHipsAverageToHands; // 0x74(0x01)
	bool bTraceComplex; // 0x75(0x01)
	bool LimitLegExtenstion; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
	float MaxLegExtension; // 0x78(0x04)
	bool bUseFK; // 0x7c(0x01)
	bool bReverseFootSetup; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	float ReverseFootFactor; // 0x80(0x04)
	float ReverseFootInterpSpeed; // 0x84(0x04)
	float RollLimit; // 0x88(0x04)
	float PitchLimit; // 0x8c(0x04)
	float PTransitionSpeed; // 0x90(0x04)
	float RTransitionSpeed; // 0x94(0x04)
	float PTransitionMaxDistance; // 0x98(0x04)
	bool bFloorContact; // 0x9c(0x01)
	bool DrawDebug; // 0x9d(0x01)
	bool bFootStabilization; // 0x9e(0x01)
	char pad_9F[0x1]; // 0x9f(0x01)
	float StabilizationThreshold; // 0xa0(0x04)
	float InterpTimeHipsUp; // 0xa4(0x04)
	float InterpTimeHipsDown; // 0xa8(0x04)
	float UseMinToMaxHipAdjust; // 0xac(0x04)
	float InterpTimeHipsUpFromCapsule; // 0xb0(0x04)
	float InterpTimeHipsDownFromCapsule; // 0xb4(0x04)
	float PlantRestoreSpeed; // 0xb8(0x04)
	float GlobalDebugScale; // 0xbc(0x04)
	char pad_C0[0x50]; // 0xc0(0x50)
	struct TArray<struct FIKDriver_FloorContactProfile> OverrideProfiles; // 0x110(0x10)
	char pad_120[0xc0]; // 0x120(0xc0)
};

// Class AvaAnimation.IKDriver_GhostHips
// Size: 0xc8 (Inherited: 0x28)
struct UIKDriver_GhostHips : UIKDriver {
	struct FBoneReferenceEx HipsBone; // 0x28(0x10)
	struct FName AlphaVariableName; // 0x38(0x08)
	struct FName TransformVariableName; // 0x40(0x08)
	float InterpSpeed; // 0x48(0x04)
	float InterpDampingFactor; // 0x4c(0x04)
	char pad_50[0x78]; // 0x50(0x78)
};

// Class AvaAnimation.IKDriver_GroundAdjustment
// Size: 0x390 (Inherited: 0x28)
struct UIKDriver_GroundAdjustment : UIKDriver {
	struct TArray<struct FIKDriver_GroundAdjustment_Control> Controls; // 0x28(0x10)
	enum class ECollisionChannel TraceChannel; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float TranslationInterpSpeed; // 0x3c(0x04)
	float RotationInterpSpeed; // 0x40(0x04)
	float MaxTranslationAdjustmentSpeed; // 0x44(0x04)
	bool bEnableRetargeting; // 0x48(0x01)
	bool bEnableAnticipation; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct FRuntimeFloatCurve SwingAnticipationCurve; // 0x50(0x88)
	struct FRuntimeFloatCurve AnticipationInterpSpeedFactor; // 0xd8(0x88)
	struct FRuntimeFloatCurve RotationAmountInSwing; // 0x160(0x88)
	struct TArray<struct FIKDriver_GroundAdjustment_ReachControl> ReachControls; // 0x1e8(0x10)
	float MaxReachAdjustmentAngle; // 0x1f8(0x04)
	float ReachAdjustToLowestOrHighest; // 0x1fc(0x04)
	struct TArray<struct FInt32Range> TraceDelayRangePerLOD; // 0x200(0x10)
	struct FCurveIndexProperty DisableCurve; // 0x210(0x02)
	char pad_212[0x2]; // 0x212(0x02)
	struct FCurveNameProperty DisableCurveName; // 0x214(0x0c)
	struct FCurveNameProperty RaiseReachControlsCurveName; // 0x220(0x0c)
	struct FCurveNameProperty StretchToMaxExtensionCurveName; // 0x22c(0x0c)
	float StrideWarpSpringHalflife; // 0x238(0x04)
	float GroundNormalSpringHalflife; // 0x23c(0x04)
	char pad_240[0x150]; // 0x240(0x150)
};

// Class AvaAnimation.IKDriver_LadderContact
// Size: 0x1d0 (Inherited: 0x28)
struct UIKDriver_LadderContact : UIKDriver {
	struct FIKDriver_LadderContactControl LeftHand; // 0x28(0x60)
	struct FIKDriver_LadderContactControl RightHand; // 0x88(0x60)
	struct FIKDriver_LadderContactControl LeftFoot; // 0xe8(0x60)
	struct FIKDriver_LadderContactControl RightFoot; // 0x148(0x60)
	char pad_1A8[0x28]; // 0x1a8(0x28)
};

// Class AvaAnimation.IKDriver_LedgeContact
// Size: 0x590 (Inherited: 0x28)
struct UIKDriver_LedgeContact : UIKDriver {
	struct UAnimSequence* LedgePoseAnimSequence; // 0x28(0x08)
	float LedgePoseTime; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FIKDriver_LedgeContactHandControl LeftHand; // 0x40(0xd0)
	struct FIKDriver_LedgeContactHandControl RightHand; // 0x110(0xd0)
	struct FIKDriver_LedgeContactFootControl LeftFoot; // 0x1e0(0x130)
	struct FIKDriver_LedgeContactFootControl RightFoot; // 0x310(0x130)
	struct FIKDriver_LedgeContactHipsControl Hips; // 0x440(0xb0)
	enum class ECollisionChannel TraceChannel; // 0x4f0(0x01)
	char pad_4F1[0x9f]; // 0x4f1(0x9f)
};

// Class AvaAnimation.IKDriver_PoseFixup
// Size: 0x38 (Inherited: 0x28)
struct UIKDriver_PoseFixup : UIKDriver {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class AvaAnimation.IKDriverFunctions
// Size: 0x28 (Inherited: 0x28)
struct UIKDriverFunctions : UBlueprintFunctionLibrary {
};

// Class AvaAnimation.IntProvider
// Size: 0x28 (Inherited: 0x28)
struct UIntProvider : UBaseProvider {

	int32_t GetIntBP(struct UObject* Context); // Function AvaAnimation.IntProvider.GetIntBP // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1492b70
};

// Class AvaAnimation.Int_Conditional
// Size: 0x38 (Inherited: 0x28)
struct UInt_Conditional : UIntProvider {
	struct UBoolProvider* Condition; // 0x28(0x08)
	struct UIntProvider* Value; // 0x30(0x08)
};

// Class AvaAnimation.Int_FallbackChain
// Size: 0x38 (Inherited: 0x28)
struct UInt_FallbackChain : UIntProvider {
	struct TArray<struct UIntProvider*> Entries; // 0x28(0x10)
};

// Class AvaAnimation.InterpolationFunctions
// Size: 0x28 (Inherited: 0x28)
struct UInterpolationFunctions : UBlueprintFunctionLibrary {

	float SmoothStep(float Value); // Function AvaAnimation.InterpolationFunctions.SmoothStep // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1493830
	struct FVector SmoothBlendVectors(struct FVector A, struct FVector B, float Blend); // Function AvaAnimation.InterpolationFunctions.SmoothBlendVectors // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14933e0
	struct FTransform SmoothBlendTransforms(struct FTransform A, struct FTransform B, float Blend); // Function AvaAnimation.InterpolationFunctions.SmoothBlendTransforms // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1493650
	float SmoothBlendScalars(float A, float B, float Blend); // Function AvaAnimation.InterpolationFunctions.SmoothBlendScalars // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1493530
	struct FRotator SmoothBlendRotators(struct FRotator A, struct FRotator B, float Blend); // Function AvaAnimation.InterpolationFunctions.SmoothBlendRotators // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14933e0
	struct FQuat SmoothBlendQuaternions(struct FQuat A, struct FQuat B, float Blend); // Function AvaAnimation.InterpolationFunctions.SmoothBlendQuaternions // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14932b0
	float LinearStep(float Value); // Function AvaAnimation.InterpolationFunctions.LinearStep // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1493220
	struct FVector LinearBlendVectors(struct FVector A, struct FVector B, float Blend); // Function AvaAnimation.InterpolationFunctions.LinearBlendVectors // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1492dd0
	struct FTransform LinearBlendTransforms(struct FTransform A, struct FTransform B, float Blend); // Function AvaAnimation.InterpolationFunctions.LinearBlendTransforms // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1493040
	float LinearBlendScalars(float A, float B, float Blend); // Function AvaAnimation.InterpolationFunctions.LinearBlendScalars // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1492f20
	struct FRotator LinearBlendRotators(struct FRotator A, struct FRotator B, float Blend); // Function AvaAnimation.InterpolationFunctions.LinearBlendRotators // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1492dd0
	struct FQuat LinearBlendQuaternions(struct FQuat A, struct FQuat B, float Blend); // Function AvaAnimation.InterpolationFunctions.LinearBlendQuaternions // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1492ca0
	float EaseOutStep(float Value); // Function AvaAnimation.InterpolationFunctions.EaseOutStep // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1492ae0
	float EaseInStep(float Value); // Function AvaAnimation.InterpolationFunctions.EaseInStep // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1492a50
	float BoundedSmoothStep(float step_min, float step_max, float Value); // Function AvaAnimation.InterpolationFunctions.BoundedSmoothStep // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1492930
	float BoundedLinearStep(float step_min, float step_max, float Value); // Function AvaAnimation.InterpolationFunctions.BoundedLinearStep // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1492810
	float BoundedEaseOutStep(float step_min, float step_max, float Value); // Function AvaAnimation.InterpolationFunctions.BoundedEaseOutStep // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14926f0
	float BoundedEaseInStep(float step_min, float step_max, float Value); // Function AvaAnimation.InterpolationFunctions.BoundedEaseInStep // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14925d0
	struct FVector AssymetricallyApproachVectorWithClampedVelocity(struct FVector current_value, struct FVector desired_value, float max_positive_delta, float max_negative_delta); // Function AvaAnimation.InterpolationFunctions.AssymetricallyApproachVectorWithClampedVelocity // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1492420
	struct FVector AssymetricallyApproachVector(struct FVector current_value, struct FVector desired_value, float positive_approach_rate, float negative_approach_rate); // Function AvaAnimation.InterpolationFunctions.AssymetricallyApproachVector // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1492270
	float AssymetricallyApproachScalarWithClampedVelocity(float current_value, float desired_value, float max_positive_delta, float max_negative_delta); // Function AvaAnimation.InterpolationFunctions.AssymetricallyApproachScalarWithClampedVelocity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1492110
	float AssymetricallyApproachScalar(float current_value, float desired_value, float negative_approach_rate, float positive_approach_rate); // Function AvaAnimation.InterpolationFunctions.AssymetricallyApproachScalar // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1491fb0
	struct FVector ApproachVectorWithClampedVelocity(struct FVector current_value, struct FVector desired_value, float max_delta); // Function AvaAnimation.InterpolationFunctions.ApproachVectorWithClampedVelocity // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1491e60
	struct FVector ApproachVector(struct FVector current_value, struct FVector desired_value, float approach_rate); // Function AvaAnimation.InterpolationFunctions.ApproachVector // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14914a0
	struct FTransform ApproachTransformWithClampedVelocity(struct FTransform current_value, struct FTransform desired_value, float max_rotation_delta, float max_translation_delta, float max_scale_delta); // Function AvaAnimation.InterpolationFunctions.ApproachTransformWithClampedVelocity // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1491bf0
	struct FTransform ApproachTransform(struct FTransform current_value, struct FTransform desired_value, float rotation_approach_rate, float translation_approach_rate, float scale_approach_rate); // Function AvaAnimation.InterpolationFunctions.ApproachTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1491980
	float ApproachScalarWithClampedVelocity(float current_value, float desired_value, float max_delta); // Function AvaAnimation.InterpolationFunctions.ApproachScalarWithClampedVelocity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1491860
	float ApproachScalar(float current_value, float desired_value, float approach_rate); // Function AvaAnimation.InterpolationFunctions.ApproachScalar // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1491740
	struct FRotator ApproachRotatorWithClampedVelocity(struct FRotator current_value, struct FRotator desired_value, float max_delta); // Function AvaAnimation.InterpolationFunctions.ApproachRotatorWithClampedVelocity // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14915f0
	struct FRotator ApproachRotator(struct FRotator current_value, struct FRotator desired_value, float approach_rate); // Function AvaAnimation.InterpolationFunctions.ApproachRotator // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14914a0
	struct FQuat ApproachQuaternionWithClampedVelocity(struct FQuat current_value, struct FQuat desired_value, float max_delta); // Function AvaAnimation.InterpolationFunctions.ApproachQuaternionWithClampedVelocity // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1491370
	struct FQuat ApproachQuaternion(struct FQuat current_value, struct FQuat desired_value, float approach_rate); // Function AvaAnimation.InterpolationFunctions.ApproachQuaternion // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1491240
};

// Class AvaAnimation.Int_Direct
// Size: 0x30 (Inherited: 0x28)
struct UInt_Direct : UIntProvider {
	int32_t Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AvaAnimation.MotionMatcherBPInterface
// Size: 0x28 (Inherited: 0x28)
struct UMotionMatcherBPInterface : UInterface {

	struct UObject* GetGoalDelegate(); // Function AvaAnimation.MotionMatcherBPInterface.GetGoalDelegate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
};

// Class AvaAnimation.MotionMatcherGoalInterface
// Size: 0x28 (Inherited: 0x28)
struct UMotionMatcherGoalInterface : UInterface {

	bool UpdateGoal(struct ACharacter* Character, struct FFeatureVector& Goal); // Function AvaAnimation.MotionMatcherGoalInterface.UpdateGoal // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	bool InitializeGoal(struct FFeatureVector& Goal); // Function AvaAnimation.MotionMatcherGoalInterface.InitializeGoal // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
};

// Class AvaAnimation.MoveRequestProvider
// Size: 0x28 (Inherited: 0x28)
struct UMoveRequestProvider : UInterface {
};

// Class AvaAnimation.NameProvider
// Size: 0x28 (Inherited: 0x28)
struct UNameProvider : UBaseProvider {

	struct FName GetNameBP(struct UObject* Caller); // Function AvaAnimation.NameProvider.GetNameBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1492c10
};

// Class AvaAnimation.Name_Conditional
// Size: 0x38 (Inherited: 0x28)
struct UName_Conditional : UNameProvider {
	struct UBoolProvider* Condition; // 0x28(0x08)
	struct UNameProvider* Value; // 0x30(0x08)
};

// Class AvaAnimation.Name_ConversationCameraRegistration
// Size: 0x30 (Inherited: 0x28)
struct UName_ConversationCameraRegistration : UNameProvider {
	struct FConversationCameraRegistrationReference Camera; // 0x28(0x08)
};

// Class AvaAnimation.Name_ConversationExplicitCameraShot
// Size: 0x30 (Inherited: 0x28)
struct UName_ConversationExplicitCameraShot : UNameProvider {
	struct FConversationExplicitCameraShotReference Reference; // 0x28(0x08)
};

// Class AvaAnimation.Name_ConversationExplicitLayeredAnimation
// Size: 0x38 (Inherited: 0x28)
struct UName_ConversationExplicitLayeredAnimation : UNameProvider {
	struct FConversationExplicitLayeredAnimationReference Reference; // 0x28(0x10)
};

// Class AvaAnimation.Name_ConversationExplicitPoseGroup
// Size: 0x30 (Inherited: 0x28)
struct UName_ConversationExplicitPoseGroup : UNameProvider {
	struct FConversationExplicitPoseGroupReference Reference; // 0x28(0x08)
};

// Class AvaAnimation.Name_ConversationPreset
// Size: 0x30 (Inherited: 0x28)
struct UName_ConversationPreset : UNameProvider {
	struct FConversationPresetReference Reference; // 0x28(0x08)
};

// Class AvaAnimation.Name_FallbackChain
// Size: 0x38 (Inherited: 0x28)
struct UName_FallbackChain : UNameProvider {
	struct TArray<struct UNameProvider*> Entries; // 0x28(0x10)
};

// Class AvaAnimation.Name_Direct
// Size: 0x30 (Inherited: 0x28)
struct UName_Direct : UNameProvider {
	struct FName Value; // 0x28(0x08)
};

// Class AvaAnimation.Object_ActorComponent
// Size: 0x38 (Inherited: 0x28)
struct UObject_ActorComponent : UObjectProvider {
	struct UActorProvider* ActorProvider; // 0x28(0x08)
	struct UActorComponent* ComponentType; // 0x30(0x08)
};

// Class AvaAnimation.Object_Direct
// Size: 0x30 (Inherited: 0x28)
struct UObject_Direct : UObjectProvider {
	struct TWeakObjectPtr<struct UObject> Object; // 0x28(0x08)
};

// Class AvaAnimation.Object_DirectActor
// Size: 0x40 (Inherited: 0x38)
struct UObject_DirectActor : UActorProvider {
	struct AActor* Actor; // 0x38(0x08)
};

// Class AvaAnimation.Object_IsCaller
// Size: 0x28 (Inherited: 0x28)
struct UObject_IsCaller : UObjectProvider {
};

// Class AvaAnimation.Object_NamedActor
// Size: 0x48 (Inherited: 0x38)
struct UObject_NamedActor : UActorProvider {
	struct FName ActorName; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class AvaAnimation.Object_Spawn
// Size: 0x40 (Inherited: 0x28)
struct UObject_Spawn : UObjectProvider {
	struct UObject* ParentObject; // 0x28(0x08)
	struct UObject* ObjectClass; // 0x30(0x08)
	struct FName ObjectName; // 0x38(0x08)
};

// Class AvaAnimation.Object_SpawnActor
// Size: 0x50 (Inherited: 0x38)
struct UObject_SpawnActor : UActorProvider {
	struct AActor* ActorClass; // 0x38(0x08)
	struct FName ActorName; // 0x40(0x08)
	struct FName AlignmentSocket; // 0x48(0x08)
};

// Class AvaAnimation.PerClipLayerGroup
// Size: 0x38 (Inherited: 0x28)
struct UPerClipLayerGroup : UAnimMetaData {
	struct TArray<struct FPerClipLayerGroupLayer> LayerContent; // 0x28(0x10)
};

// Class AvaAnimation.PoseGroupProvider
// Size: 0x28 (Inherited: 0x28)
struct UPoseGroupProvider : UObjectProvider {
};

// Class AvaAnimation.PoseGroup_Direct
// Size: 0x30 (Inherited: 0x28)
struct UPoseGroup_Direct : UPoseGroupProvider {
	struct UPoseGroup* PoseGroup; // 0x28(0x08)
};

// Class AvaAnimation.PoseGroup
// Size: 0x50 (Inherited: 0x28)
struct UPoseGroup : UObject {
	struct UBaseArchitectAsset* LookUp; // 0x28(0x08)
	struct TArray<struct FPoseGroupTransition> TransitionsTo; // 0x30(0x10)
	float MinDurationSeconds; // 0x40(0x04)
	float MaxDurationSeconds; // 0x44(0x04)
	struct FConversationExplicitPoseGroupReference ExplicitPoseGroupName; // 0x48(0x08)
};

// Class AvaAnimation.PoseUtilities
// Size: 0x28 (Inherited: 0x28)
struct UPoseUtilities : UBlueprintFunctionLibrary {
};

// Class AvaAnimation.PreviewVariableRequest
// Size: 0x28 (Inherited: 0x28)
struct UPreviewVariableRequest : UInterface {
};

// Class AvaAnimation.ProviderOwner
// Size: 0x28 (Inherited: 0x28)
struct UProviderOwner : UInterface {
};

// Class AvaAnimation.ProviderStateHost
// Size: 0x28 (Inherited: 0x28)
struct UProviderStateHost : UInterface {
};

// Class AvaAnimation.RootControlFunctions
// Size: 0x28 (Inherited: 0x28)
struct URootControlFunctions : UBlueprintFunctionLibrary {

	void AdjustWorldSpaceTransform(struct AActor* Actor, struct FVector& TranslationOffset, struct FRotator& RotationOffset); // Function AvaAnimation.RootControlFunctions.AdjustWorldSpaceTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14a1c90
};

// Class AvaAnimation.SkeletalMeshDriver
// Size: 0x28 (Inherited: 0x28)
struct USkeletalMeshDriver : UInterface {
};

// Class AvaAnimation.Spawn_ByClass
// Size: 0x58 (Inherited: 0x48)
struct USpawn_ByClass : UActorSpawner {
	struct AActor* ActorClass; // 0x48(0x08)
	struct AActor* ActorTemplate; // 0x50(0x08)
};

// Class AvaAnimation.SpawnByPrimitiveOptions
// Size: 0x28 (Inherited: 0x28)
struct USpawnByPrimitiveOptions : UObject {
};

// Class AvaAnimation.SpawnByPrimitiveOptionsShadows
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsShadows : USpawnByPrimitiveOptions {
	int32_t ShadowMinLOD; // 0x28(0x04)
	char bCastShadow : 1; // 0x2c(0x01)
	char bCastDynamicShadow : 1; // 0x2c(0x01)
	char bCastStaticShadow : 1; // 0x2c(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x2c(0x01)
	char bCastContactShadow : 1; // 0x2c(0x01)
	char bSelfShadowOnly : 1; // 0x2c(0x01)
	char bCastFarShadow : 1; // 0x2c(0x01)
	char bCastInsetShadow : 1; // 0x2c(0x01)
	char bCastCinematicShadow : 1; // 0x2d(0x01)
	char bCastHiddenShadow : 1; // 0x2d(0x01)
	char bCastShadowAsTwoSided : 1; // 0x2d(0x01)
	char pad_2D_3 : 5; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsCustomDepth
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsCustomDepth : USpawnByPrimitiveOptions {
	bool bRenderCustomDepth; // 0x28(0x01)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t CustomDepthStencilValue; // 0x2c(0x04)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsTranslucency
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsTranslucency : USpawnByPrimitiveOptions {
	int32_t TranslucencySortPriority; // 0x28(0x04)
	float TranslucencySortDistanceOffset; // 0x2c(0x04)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsLightingChannels
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsLightingChannels : USpawnByPrimitiveOptions {
	struct FLightingChannels LightingChannels; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsOccluder
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsOccluder : USpawnByPrimitiveOptions {
	bool bUseAsOccluder; // 0x28(0x01)
	bool bTreatAsBackgroundForOcclusion; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsReceivesDecals
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsReceivesDecals : USpawnByPrimitiveOptions {
	bool bReceivesDecals; // 0x28(0x01)
	bool bReceivesWeatherDecals; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsDisableCollisions
// Size: 0x28 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsDisableCollisions : USpawnByPrimitiveOptions {
};

// Class AvaAnimation.SpawnByPrimitiveOptionsVisibility
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsVisibility : USpawnByPrimitiveOptions {
	bool bVisible; // 0x28(0x01)
	bool bIncludeChildren; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsTick
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsTick : USpawnByPrimitiveOptions {
	bool bTickEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsSimulatePhysics
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsSimulatePhysics : USpawnByPrimitiveOptions {
	bool bSimulatePhysics; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsGenerateOverlaps
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsGenerateOverlaps : USpawnByPrimitiveOptions {
	bool bGenerateOverlaps; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsBoundsScale
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsBoundsScale : USpawnByPrimitiveOptions {
	float BoundsScale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsDrawDistance
// Size: 0x38 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsDrawDistance : USpawnByPrimitiveOptions {
	float MinDrawDistance; // 0x28(0x04)
	float CullDistance; // 0x2c(0x04)
	bool bNeverDistanceCull; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsRenderPasses
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsRenderPasses : USpawnByPrimitiveOptions {
	bool bRenderInMainPass; // 0x28(0x01)
	bool bRenderInDepthPass; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// Class AvaAnimation.SpawnByPrimitiveOptionsDepthPriorityGroup
// Size: 0x30 (Inherited: 0x28)
struct USpawnByPrimitiveOptionsDepthPriorityGroup : USpawnByPrimitiveOptions {
	enum class ESceneDepthPriorityGroup DepthPriorityGroup; // 0x28(0x01)
	enum class ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x29(0x01)
	bool bUseViewOwnerDepthPriorityGroup; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class AvaAnimation.Spawn_BySkeletalMesh
// Size: 0x68 (Inherited: 0x48)
struct USpawn_BySkeletalMesh : UActorSpawner {
	struct USkeletalMesh* SkeletalMesh; // 0x48(0x08)
	int32_t LODOverride; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct USpawnByPrimitiveOptions*> PrimitiveOptions; // 0x58(0x10)
};

// Class AvaAnimation.Spawn_ByStaticMesh
// Size: 0x68 (Inherited: 0x48)
struct USpawn_ByStaticMesh : UActorSpawner {
	struct UStaticMesh* StaticMesh; // 0x48(0x08)
	int32_t LODOverride; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct USpawnByPrimitiveOptions*> PrimitiveOptions; // 0x58(0x10)
};

// Class AvaAnimation.SpawnedActorHost
// Size: 0x28 (Inherited: 0x28)
struct USpawnedActorHost : UInterface {
};

// Class AvaAnimation.StaticMeshPoolBaseData
// Size: 0x40 (Inherited: 0x30)
struct UStaticMeshPoolBaseData : UDataAsset {
	struct TArray<struct FConditionalStaticMeshPool> ConditionalStaticMeshPoolGroup; // 0x30(0x10)
};

// Class AvaAnimation.StringProvider
// Size: 0x28 (Inherited: 0x28)
struct UStringProvider : UBaseProvider {
};

// Class AvaAnimation.String_Direct
// Size: 0x38 (Inherited: 0x28)
struct UString_Direct : UStringProvider {
	struct FString Value; // 0x28(0x10)
};

// Class AvaAnimation.Transform_AnimationActor
// Size: 0x48 (Inherited: 0x38)
struct UTransform_AnimationActor : UAnimationTransformProvider {
	struct UActorProvider* Actor; // 0x38(0x08)
	struct FName BoneName; // 0x40(0x08)
};

// Class AvaAnimation.Transform_AnimationBone
// Size: 0x40 (Inherited: 0x38)
struct UTransform_AnimationBone : UAnimationTransformProvider {
	struct FName BoneName; // 0x38(0x08)
};

// Class AvaAnimation.Transform_AnimationRoot
// Size: 0x38 (Inherited: 0x38)
struct UTransform_AnimationRoot : UAnimationTransformProvider {
};

// Class AvaAnimation.Transform_AnimationSocket
// Size: 0x48 (Inherited: 0x38)
struct UTransform_AnimationSocket : UAnimationTransformProvider {
	struct UActorProvider* Actor; // 0x38(0x08)
	struct FName SocketName; // 0x40(0x08)
};

// Class AvaAnimation.Transform_Blend
// Size: 0x40 (Inherited: 0x28)
struct UTransform_Blend : UTransformProvider {
	struct UTransformProvider* InitialTransform; // 0x28(0x08)
	struct UTransformProvider* FinalTransform; // 0x30(0x08)
	float Blend; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class AvaAnimation.Transform_BoneUnscaled
// Size: 0x30 (Inherited: 0x28)
struct UTransform_BoneUnscaled : UTransformProvider {
	struct FName BoneName; // 0x28(0x08)
};

// Class AvaAnimation.Transform_CastRay
// Size: 0x58 (Inherited: 0x28)
struct UTransform_CastRay : UTransformProvider {
	struct UTransformProvider* RaycastStart; // 0x28(0x08)
	struct UTransformProvider* ComponentTransform; // 0x30(0x08)
	struct UVectorProvider* Direction; // 0x38(0x08)
	struct FVector ForwardDirection; // 0x40(0x0c)
	float SearchDistance; // 0x4c(0x04)
	float OffsetDistance; // 0x50(0x04)
	enum class ETraceTypeQuery TraceType; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class AvaAnimation.Transform_CharacterHeight
// Size: 0x38 (Inherited: 0x28)
struct UTransform_CharacterHeight : UTransformProvider {
	struct UActorProvider* Actor; // 0x28(0x08)
	struct FName BoneName; // 0x30(0x08)
};

// Class AvaAnimation.Transform_Conditional
// Size: 0x38 (Inherited: 0x28)
struct UTransform_Conditional : UTransformProvider {
	struct UBoolProvider* Condition; // 0x28(0x08)
	struct UTransformProvider* Transform; // 0x30(0x08)
};

// Class AvaAnimation.Transform_CurrentCamera
// Size: 0x28 (Inherited: 0x28)
struct UTransform_CurrentCamera : UTransformProvider {
};

// Class AvaAnimation.Transform_Direct
// Size: 0x60 (Inherited: 0x28)
struct UTransform_Direct : UTransformProvider {
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform Transform; // 0x30(0x30)
};

// Class AvaAnimation.Transform_FallbackChain
// Size: 0x38 (Inherited: 0x28)
struct UTransform_FallbackChain : UTransformProvider {
	struct TArray<struct UTransformProvider*> Entries; // 0x28(0x10)
};

// Class AvaAnimation.Transform_FindLedgeFromAbove
// Size: 0x48 (Inherited: 0x28)
struct UTransform_FindLedgeFromAbove : UTransformProvider {
	float horizontalOffset; // 0x28(0x04)
	float InitialHeight; // 0x2c(0x04)
	float SearchDistance; // 0x30(0x04)
	float SphereRadius; // 0x34(0x04)
	struct UTransformProvider* RaycastStart; // 0x38(0x08)
	enum class ETraceTypeQuery TraceType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class AvaAnimation.Transform_FindWallInForwardDirection
// Size: 0x48 (Inherited: 0x28)
struct UTransform_FindWallInForwardDirection : UTransformProvider {
	float verticalOffset; // 0x28(0x04)
	float SearchDistance; // 0x2c(0x04)
	float SphereRadius; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UTransformProvider* RaycastStart; // 0x38(0x08)
	enum class ETraceTypeQuery TraceType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class AvaAnimation.Transform_FromActor
// Size: 0x48 (Inherited: 0x28)
struct UTransform_FromActor : UTransformProvider {
	struct UActorProvider* Actor; // 0x28(0x08)
	enum class EComponentToUse ComponentToUse; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName SocketName; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UTransformProvider* FallbackTransform; // 0x40(0x08)

	void SetupFallback(); // Function AvaAnimation.Transform_FromActor.SetupFallback // (Final|Native|Public|Const) // @ game+0x14a3d30
};

// Class AvaAnimation.Transform_FromAttachParentActor
// Size: 0x38 (Inherited: 0x28)
struct UTransform_FromAttachParentActor : UTransformProvider {
	struct UActorProvider* Actor; // 0x28(0x08)
	struct FName SocketName; // 0x30(0x08)
};

// Class AvaAnimation.Transform_ParentConstraint
// Size: 0x38 (Inherited: 0x28)
struct UTransform_ParentConstraint : UTransformProvider {
	struct UTransformProvider* ParentTransform; // 0x28(0x08)
	struct UTransformProvider* TransformInParentSpace; // 0x30(0x08)
};

// Class AvaAnimation.Transform_PointAndOrientConstraint
// Size: 0x58 (Inherited: 0x28)
struct UTransform_PointAndOrientConstraint : UTransformProvider {
	struct UTransformProvider* TranslationParent; // 0x28(0x08)
	struct FVector TranslationInParentSpace; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UTransformProvider* RotationParent; // 0x40(0x08)
	struct FRotator RotationInParentSpace; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class AvaAnimation.Transform_Tagged
// Size: 0x38 (Inherited: 0x28)
struct UTransform_Tagged : UTransformProvider {
	struct UActorProvider* Actor; // 0x28(0x08)
	struct FGameplayTag Tag; // 0x30(0x08)
};

// Class AvaAnimation.UprightAttachSceneComponent
// Size: 0x260 (Inherited: 0x220)
struct UUprightAttachSceneComponent : USceneComponent {
	struct FTransform AttachmentLocalOffset; // 0x220(0x30)
	bool bUseActorForward; // 0x250(0x01)
	char pad_251[0xf]; // 0x251(0x0f)
};

// Class AvaAnimation.Vector2DProvider
// Size: 0x28 (Inherited: 0x28)
struct UVector2DProvider : UBaseProvider {

	struct FVector2D GetVector2DBP(struct UObject* Context); // Function AvaAnimation.Vector2DProvider.GetVector2DBP // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14a3bc0
};

// Class AvaAnimation.Vector2D_Direct
// Size: 0x30 (Inherited: 0x28)
struct UVector2D_Direct : UVector2DProvider {
	struct FVector2D Value; // 0x28(0x08)
};

// Class AvaAnimation.VectorProvider
// Size: 0x28 (Inherited: 0x28)
struct UVectorProvider : UBaseProvider {

	struct FVector GetVectorBP(struct UObject* Context, float TimeOffset); // Function AvaAnimation.VectorProvider.GetVectorBP // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x14a3c50
};

// Class AvaAnimation.Vector_Direct
// Size: 0x38 (Inherited: 0x28)
struct UVector_Direct : UVectorProvider {
	struct FVector Value; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AvaAnimation.WarmUpComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UWarmUpComponent : UActorComponent {
	struct TArray<struct FName> Tags; // 0xc8(0x10)
};

