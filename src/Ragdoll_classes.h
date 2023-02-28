// Class Ragdoll.BakedRagdollPoseComponent
// Size: 0x490 (Inherited: 0x480)
struct UBakedRagdollPoseComponent : UPrimitiveComponent {
	struct UBodySetup* RagdollPoseBodySetup; // 0x480(0x08)
	char pad_488[0x8]; // 0x488(0x08)
};

// Class Ragdoll.BakedRagdollPoseActor
// Size: 0x270 (Inherited: 0x248)
struct ABakedRagdollPoseActor : AActor {
	struct UBakedRagdollPoseComponent* BakedPoseComponent; // 0x248(0x08)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SkelMeshComponent; // 0x250(0x08)
	char pad_258[0x10]; // 0x258(0x10)
	struct AActor* ActorConstrainedToUs; // 0x268(0x08)

	void HandleOnActorHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector ImpulseNormal, struct FHitResult& HitReslt); // Function Ragdoll.BakedRagdollPoseActor.HandleOnActorHit // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0x1a33910
};

// Class Ragdoll.RagdollBehaviorComponent
// Size: 0x1e0 (Inherited: 0xc8)
struct URagdollBehaviorComponent : UActorComponent {
	struct URagdollBehaviorConfigAsset* Config; // 0xc8(0x08)
	struct FMulticastInlineDelegate OnRagdollHitActor; // 0xd0(0x10)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0xe8(0x08)
	struct URagdollControlComponent* RagdollControlComponent; // 0xf0(0x08)
	struct URagdollBehavior* CurBehavior; // 0xf8(0x08)
	struct URagdollBehavior* PriorBehavior; // 0x100(0x08)
	char pad_108[0x60]; // 0x108(0x60)
	struct URagdollRecoveryAssistBehavior* CurRecoveryAssistBehavior; // 0x168(0x08)
	struct URagdollRecoveryAssistBehavior* PriorRecoveryAssistBehavior; // 0x170(0x08)
	char pad_178[0x68]; // 0x178(0x68)

	void SetSkeletalMeshComponent(struct USkeletalMeshComponent* InSkeletalMeshComponent); // Function Ragdoll.RagdollBehaviorComponent.SetSkeletalMeshComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1a341e0
	void OnActorHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Ragdoll.RagdollBehaviorComponent.OnActorHit // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a33ce0
	bool IsSensoryStateStatisfied(struct FName targetSensoryState); // Function Ragdoll.RagdollBehaviorComponent.IsSensoryStateStatisfied // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33c40
	bool IsPoseStateStatisfied(struct FName targetPose); // Function Ragdoll.RagdollBehaviorComponent.IsPoseStateStatisfied // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33ba0
	bool IsGetupAllowed(); // Function Ragdoll.RagdollBehaviorComponent.IsGetupAllowed // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33b70
	bool HasValidSetup(); // Function Ragdoll.RagdollBehaviorComponent.HasValidSetup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a33ab0
	void DoAudioBehaviorChangeEvent(struct FAudioLayerBehaviorState& rLayerState); // Function Ragdoll.RagdollBehaviorComponent.DoAudioBehaviorChangeEvent // (Native|Protected|HasOutParms) // @ game+0x1a33840
};

// Class Ragdoll.RagdollRecoveryAssistPlugin
// Size: 0x28 (Inherited: 0x28)
struct URagdollRecoveryAssistPlugin : UObject {
};

// Class Ragdoll.RagdollRecoveryAssistPlugin_GuideToSafeRecovery
// Size: 0x38 (Inherited: 0x28)
struct URagdollRecoveryAssistPlugin_GuideToSafeRecovery : URagdollRecoveryAssistPlugin {
	struct UCurveFloat* PushStrengthToTime; // 0x28(0x08)
	float PushCutoffDistance; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Ragdoll.RagdollRecoveryAssistPlugin_ForceKill
// Size: 0x28 (Inherited: 0x28)
struct URagdollRecoveryAssistPlugin_ForceKill : URagdollRecoveryAssistPlugin {
};

// Class Ragdoll.RagdollBehaviorConfigAsset
// Size: 0xa8 (Inherited: 0x30)
struct URagdollBehaviorConfigAsset : UDataAsset {
	struct URagdollBehaviorProfile* BehaviorProfile; // 0x30(0x08)
	struct URagdollAudioBehaviorProfile* AudioBehaviorProfile; // 0x38(0x08)
	struct URagdollRecoveryAssistBehaviorProfile* RecoveryAssistBehaviorProfile; // 0x40(0x08)
	struct TArray<struct FRagdollGetupOptions> GetupAnimationTagStateFilter; // 0x48(0x10)
	struct FName RagdollShoulderLeftName; // 0x58(0x08)
	struct FName RagdollShoulderRightName; // 0x60(0x08)
	struct FName RagdollHipsLeftName; // 0x68(0x08)
	struct FName RagdollHipsRightName; // 0x70(0x08)
	struct FName RagdollSpineLowerBoneName; // 0x78(0x08)
	struct FName RagdollSpineUpperBoneName; // 0x80(0x08)
	struct TArray<struct FRagdollPoseState> IdentifiablePoseStates; // 0x88(0x10)
	uint32_t NavigationLayer; // 0x98(0x04)
	float MinMoveDist2DRetestNavPosition; // 0x9c(0x04)
	float MaxGroundTestDistance; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Ragdoll.RagdollSensoryState
// Size: 0xa0 (Inherited: 0x30)
struct URagdollSensoryState : UDataAsset {
	struct TArray<struct FRagdollSensoryRange> SensoryRangeMatches; // 0x30(0x10)
	struct TArray<struct FRagdollSensoryStatus> SensoryStatusMatches; // 0x40(0x10)
	struct TArray<struct FRagdollSensoryBehavior> SensoryBehaviorsMatches; // 0x50(0x10)
	struct TArray<struct FRagdollSensoryCollision> SensoryCollisionMatches; // 0x60(0x10)
	struct FRagdollState AndRequire; // 0x70(0x30)
};

// Class Ragdoll.RagdollBehaviorBase
// Size: 0xc0 (Inherited: 0x30)
struct URagdollBehaviorBase : UDataAsset {
	struct FRagdollState RequireStatesAlways; // 0x30(0x30)
	struct FRagdollState RequireStatesToEnter; // 0x60(0x30)
	struct FRagdollState RequireStatesToMantain; // 0x90(0x30)
};

// Class Ragdoll.RagdollBehavior
// Size: 0x118 (Inherited: 0xc0)
struct URagdollBehavior : URagdollBehaviorBase {
	struct TArray<struct URagdollBehavior*> ExitToBehaviors; // 0xc0(0x10)
	bool AllowGetup; // 0xd0(0x01)
	enum class ERagdollCOMLocationDrivingMode COMLocationDriveMode; // 0xd1(0x01)
	enum class ERagdollCOMRotationDrivingMode COMRotationDriveMode; // 0xd2(0x01)
	enum class ERagdollDriveAnimEnum DriveAnimationMode; // 0xd3(0x01)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FGameplayTagContainer DriveToAnimationTags; // 0xd8(0x20)
	bool ForceAnimResetIfPriorAnimDrivesToSameTags; // 0xf8(0x01)
	enum class ERagdollPoseDrivingMode PoseDriveMode; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	float PoseDriveBlendTime; // 0xfc(0x04)
	struct UCurveFloat* StrengthOverTime; // 0x100(0x08)
	float StrengthBlendInTime; // 0x108(0x04)
	bool CommitToGetupPose; // 0x10c(0x01)
	bool EndBehavior; // 0x10d(0x01)
	bool AllowRemoval; // 0x10e(0x01)
	bool AllowHibrnate; // 0x10f(0x01)
	bool ForceFreezeInPlace; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// Class Ragdoll.RagdollBehaviorProfile
// Size: 0x40 (Inherited: 0x30)
struct URagdollBehaviorProfile : UDataAsset {
	struct TArray<struct URagdollBehavior*> Behaviors; // 0x30(0x10)
};

// Class Ragdoll.RagdollAudioBehavior
// Size: 0xe0 (Inherited: 0xc0)
struct URagdollAudioBehavior : URagdollBehaviorBase {
	struct UAvaAudioDialogueEvent* Event; // 0xc0(0x08)
	bool StopOnExit; // 0xc8(0x01)
	bool AlwaysInterrupt; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct TArray<struct URagdollAudioBehavior*> CanInterruptAudioBehaviors; // 0xd0(0x10)
};

// Class Ragdoll.RagdollAudioBehaviorProfile
// Size: 0x40 (Inherited: 0x30)
struct URagdollAudioBehaviorProfile : UDataAsset {
	struct TArray<struct FRagdollAudioBehaviorLayer> BehaviorLayers; // 0x30(0x10)
};

// Class Ragdoll.RagdollRecoveryAssistBehavior
// Size: 0xc8 (Inherited: 0xc0)
struct URagdollRecoveryAssistBehavior : URagdollBehaviorBase {
	struct URagdollRecoveryAssistPlugin* RunAssistPlugin; // 0xc0(0x08)
};

// Class Ragdoll.RagdollRecoveryAssistBehaviorProfile
// Size: 0x40 (Inherited: 0x30)
struct URagdollRecoveryAssistBehaviorProfile : UDataAsset {
	struct TArray<struct URagdollRecoveryAssistBehavior*> Behaviors; // 0x30(0x10)
};

// Class Ragdoll.RagdollControlConfig
// Size: 0x288 (Inherited: 0x30)
struct URagdollControlConfig : UDataAsset {
	struct FName RagdollMeshCollisionProfile; // 0x30(0x08)
	struct FName RagdollMeshCollisionProfileAlive; // 0x38(0x08)
	struct FName RagdollCapsuleCollisionProfile; // 0x40(0x08)
	struct FName NonRagdollMeshCollisionProfile; // 0x48(0x08)
	struct FName NonRagdollCapsuleCollisionProfile; // 0x50(0x08)
	struct FName BakedRagdollCollisionProfile; // 0x58(0x08)
	struct FName BakedMeshCollisionProfile; // 0x60(0x08)
	struct TMap<enum class ERagdollPoseDrivingMode, struct FPhysicsPoseDrivingConfig> PoseDrivingProfiles; // 0x68(0x50)
	float TargetPoseInterpSpeed; // 0xb8(0x04)
	bool bCcdAlwaysOn; // 0xbc(0x01)
	bool bSweepCapsule; // 0xbd(0x01)
	bool bAdjustConstraintsToTargetPose; // 0xbe(0x01)
	char pad_BF[0x1]; // 0xbf(0x01)
	struct TMap<struct FName, struct FRagdollBodyConstraintsConfig> ContextualBodyConstraints; // 0xc0(0x50)
	float ArtificialGravityScale; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct FAuthoredImpact> AuthoredImpacts; // 0x118(0x10)
	struct TArray<struct FName> BodiesForPoseMatching; // 0x128(0x10)
	float GetupBlendDuration; // 0x138(0x04)
	float GetupBlendDelay; // 0x13c(0x04)
	float InWaterRecoveryDelay; // 0x140(0x04)
	bool bCanGetupFromGround; // 0x144(0x01)
	bool bCanRecoverInAir; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	float MinGetupBlendVelocity; // 0x148(0x04)
	float MinGetupBlendAngularVelocity; // 0x14c(0x04)
	float GroundDetectionRaycastDistance; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct TArray<struct FGetupAnimationProfile> GetupAnimationProfiles; // 0x158(0x10)
	struct TArray<struct FGameplayTagContainer> GetupAnimationTags; // 0x168(0x10)
	bool bPhysicsHovering; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	struct FPhysicsForceAndTorquePD HoverForces; // 0x17c(0x24)
	float HoverGravityCompensation; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TMap<struct FName, float> HoverBodyForceAmount; // 0x1a8(0x50)
	struct TMap<struct FName, struct FRagdollBodyAttachment> BodyAttachments; // 0x1f8(0x50)
	bool bMonitorCenterOfMassForImpacts; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	struct FFloatRange ImpactImpulseRange; // 0x24c(0x10)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UCameraShakeBase* ImpactCameraShake; // 0x260(0x08)
	float ImpactCameraShakeScale; // 0x268(0x04)
	struct FFloatRange ImpactCameraShakeRadiusRange; // 0x26c(0x10)
	bool bBlendToKinematic; // 0x27c(0x01)
	bool bSyncCapsule; // 0x27d(0x01)
	bool bDebugDrawImpacts; // 0x27e(0x01)
	bool bDebugDrawTargetPose; // 0x27f(0x01)
	bool bDebugDrawPoseMatching; // 0x280(0x01)
	bool bDebugDrawBlends; // 0x281(0x01)
	char pad_282[0x6]; // 0x282(0x06)
};

// Class Ragdoll.RagdollControlComponent
// Size: 0x570 (Inherited: 0xc8)
struct URagdollControlComponent : UActorComponent {
	struct URagdollControlConfig* Config; // 0xc8(0x08)
	struct URagdollBehaviorComponent* RagdollBehaviorClass; // 0xd0(0x08)
	struct URagdollBehaviorConfigAsset* RagdollBehaviorConfig; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnBakedRigidBodyAttachedEvent; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnBakedRigidbodyRemovedEvent; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnFullRagdollStartEvent; // 0x100(0x10)
	struct FMulticastInlineDelegate OnFullRagdollEndEvent; // 0x110(0x10)
	char pad_120[0x20]; // 0x120(0x20)
	struct FRagdollControlPostAnimationTickFunction PostAnimationTickFunction; // 0x140(0x48)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x188(0x08)
	struct URagdollBehaviorComponent* RagdollBehaviorComponent; // 0x190(0x08)
	char pad_198[0x3d8]; // 0x198(0x3d8)

	void StartReaction(); // Function Ragdoll.RagdollControlComponent.StartReaction // (Final|Native|Public|BlueprintCallable) // @ game+0x1a34490
	void StartImpactReaction(enum class EImpactReactionStrength InReactionStrength, struct FVector& InWorldLocation, struct FVector& InWorldDirection, float InWorldImpactStrength); // Function Ragdoll.RagdollControlComponent.StartImpactReaction // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a34300
	void ShowImpactReaction(enum class EImpactReactionStrength InReactionStrength, struct FVector& InWorldLocation, struct FVector& InWorldDirection, float InWorldImpactStrength); // Function Ragdoll.RagdollControlComponent.ShowImpactReaction // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a34300
	void SetSkeletalMeshComponent(struct USkeletalMeshComponent* InSkeletalMeshComponent); // Function Ragdoll.RagdollControlComponent.SetSkeletalMeshComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1a34270
	void SetPoseDrivingMode(enum class ERagdollPoseDrivingMode InPoseDrivingMode, float InBlendDuration); // Function Ragdoll.RagdollControlComponent.SetPoseDrivingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1a34110
	void SetOwnerResurrected(); // Function Ragdoll.RagdollControlComponent.SetOwnerResurrected // (Final|Native|Public|BlueprintCallable) // @ game+0x1a340f0
	void SetOwnerIsDead(); // Function Ragdoll.RagdollControlComponent.SetOwnerIsDead // (Final|Native|Public|BlueprintCallable) // @ game+0x1a340d0
	void SetInWater(bool bInWater); // Function Ragdoll.RagdollControlComponent.SetInWater // (Final|Native|Public|BlueprintCallable) // @ game+0x1a34040
	void SetCOMDrivingModes(enum class ERagdollCOMLocationDrivingMode InLocationDrivingMode, enum class ERagdollCOMRotationDrivingMode InRotationDrivingMode); // Function Ragdoll.RagdollControlComponent.SetCOMDrivingModes // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33f70
	void SetBodyConstraintContext(struct FName InContextName, bool bInEnable); // Function Ragdoll.RagdollControlComponent.SetBodyConstraintContext // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33ea0
	void RemoveBakedRigidbody(); // Function Ragdoll.RagdollControlComponent.RemoveBakedRigidbody // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33e80
	bool IsFullRagdoll(); // Function Ragdoll.RagdollControlComponent.IsFullRagdoll // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a33b40
	bool IsBakedToRigidbody(); // Function Ragdoll.RagdollControlComponent.IsBakedToRigidbody // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a33b10
	bool HasValidSetup(); // Function Ragdoll.RagdollControlComponent.HasValidSetup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a33ae0
	void ForcePopOutOfRagdollImmediately(); // Function Ragdoll.RagdollControlComponent.ForcePopOutOfRagdollImmediately // (Final|Native|Public|BlueprintCallable) // @ game+0x1a338f0
	void DisallowBlendingOutOfRagdollUntilForced(); // Function Ragdoll.RagdollControlComponent.DisallowBlendingOutOfRagdollUntilForced // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33820
	void DisableCcd(); // Function Ragdoll.RagdollControlComponent.DisableCcd // (Final|Native|Public) // @ game+0x1a33800
	void DeepFreezeWithActor(struct AActor* InActor, struct FName InCollisionProfile); // Function Ragdoll.RagdollControlComponent.DeepFreezeWithActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33730
	bool CanGetup(); // Function Ragdoll.RagdollControlComponent.CanGetup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a33700
	void BlendBack(bool bInStationaryCapsuleWhileBlending, float InBlendDurationOverride); // Function Ragdoll.RagdollControlComponent.BlendBack // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33630
	void AttachBakedRigidbody(); // Function Ragdoll.RagdollControlComponent.AttachBakedRigidbody // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33610
};

