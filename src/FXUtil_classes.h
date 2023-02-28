// Class FXUtil.AttachCameraComponent
// Size: 0x250 (Inherited: 0x220)
struct UAttachCameraComponent : USceneComponent {
	enum class EAttachCameraType AttachType; // 0x218(0x01)
	enum class EAttachCameraBillBoardType BillBoardType; // 0x219(0x01)
	struct FVector LocalOffset; // 0x21c(0x0c)
	struct FRotator LocalRotator; // 0x228(0x0c)
	bool bCopyToRootComponent; // 0x234(0x01)
	bool bEnable; // 0x235(0x01)
	bool bEnableInEditor; // 0x236(0x01)
	char pad_23D[0x13]; // 0x23d(0x13)

	void SetupCopyToRootComponent(bool copyToRootComponent); // Function FXUtil.AttachCameraComponent.SetupCopyToRootComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x181fa70
	void ResetChildRotations(); // Function FXUtil.AttachCameraComponent.ResetChildRotations // (Final|Native|Public) // @ game+0x181fa50
	void ResetChildLocations(); // Function FXUtil.AttachCameraComponent.ResetChildLocations // (Final|Native|Public) // @ game+0x181fa30
	void ResetAllChildren(); // Function FXUtil.AttachCameraComponent.ResetAllChildren // (Final|Native|Public) // @ game+0x181fa10
	bool GetCameraRotation(struct FRotator& Rotation); // Function FXUtil.AttachCameraComponent.GetCameraRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x181f2a0
	bool GetCameraLocation(struct FVector& Eye); // Function FXUtil.AttachCameraComponent.GetCameraLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x181f1d0
	bool GetCamera(struct FVector& Eye, struct FRotator& Orientation); // Function FXUtil.AttachCameraComponent.GetCamera // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x181f0a0
};

// Class FXUtil.AttachCameraActor
// Size: 0x250 (Inherited: 0x248)
struct AAttachCameraActor : AActor {
	struct UAttachCameraComponent* AttachCamera; // 0x248(0x08)
};

// Class FXUtil.CurveHelpersUnitTest
// Size: 0xd8 (Inherited: 0x30)
struct UCurveHelpersUnitTest : UDataAsset {
	struct FRuntimeFloatCurve Curve; // 0x30(0x88)
	float MinValue; // 0xb8(0x04)
	float MaxValue; // 0xbc(0x04)
	struct FCurveBuildingParams Params; // 0xc0(0x18)

	void Update(); // Function FXUtil.CurveHelpersUnitTest.Update // (Final|Native|Public) // @ game+0x1074730
};

// Class FXUtil.CurveHelpersSimpleUnitTest
// Size: 0xe0 (Inherited: 0xd8)
struct UCurveHelpersSimpleUnitTest : UCurveHelpersUnitTest {
	float Start; // 0xd8(0x04)
	float Duration; // 0xdc(0x04)
};

// Class FXUtil.CurveHelpersEaseUnitTest
// Size: 0xf0 (Inherited: 0xe0)
struct UCurveHelpersEaseUnitTest : UCurveHelpersSimpleUnitTest {
	struct FEasingFunction Easing; // 0xe0(0x0c)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class FXUtil.CurveHelpersFilterUnitTest
// Size: 0xe8 (Inherited: 0xd8)
struct UCurveHelpersFilterUnitTest : UCurveHelpersUnitTest {
	float TimeConstant; // 0xd8(0x04)
	float Speed; // 0xdc(0x04)
	float SolveTolerance; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// Class FXUtil.ObjectFadeMaster
// Size: 0x298 (Inherited: 0x248)
struct AObjectFadeMaster : AActor {
	struct TMap<struct TWeakObjectPtr<struct UObject>, struct FObjectfade> FadeMap; // 0x248(0x50)

	bool MeshStartFadeEaseFunction(struct UMeshComponent* Mesh, struct FObjectFadeParamsEaseFunction& Setup, enum class EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride); // Function FXUtil.ObjectFadeMaster.MeshStartFadeEaseFunction // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181f7e0
	bool MeshStartFadeDirectCurve(struct UMeshComponent* Mesh, struct FObjectFadeParamsCurve& Setup, enum class EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride); // Function FXUtil.ObjectFadeMaster.MeshStartFadeDirectCurve // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181f590
	bool MeshStartFade(struct UMeshComponent* Mesh, struct FObjectFadeParamsSpeedDuration& Setup, enum class EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride); // Function FXUtil.ObjectFadeMaster.MeshStartFade // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181f370
	void MeshRemoveFade(struct UMeshComponent* Mesh, bool& wasFading); // Function FXUtil.ObjectFadeMaster.MeshRemoveFade // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181e6e0
	void MeshIsFadingOut(struct UMeshComponent* Mesh, bool& isFading, bool& isDone); // Function FXUtil.ObjectFadeMaster.MeshIsFadingOut // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181e440
	void MeshIsFadingIn(struct UMeshComponent* Mesh, bool& isFading, bool& isDone); // Function FXUtil.ObjectFadeMaster.MeshIsFadingIn // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181e310
	bool ActorStartFadeEaseFunction(struct AActor* Actor, struct FObjectFadeParamsEaseFunction& Setup, enum class EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride); // Function FXUtil.ObjectFadeMaster.ActorStartFadeEaseFunction // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181ee50
	bool ActorStartFadeDirectCurve(struct AActor* Actor, struct FObjectFadeParamsCurve& Setup, enum class EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride); // Function FXUtil.ObjectFadeMaster.ActorStartFadeDirectCurve // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181ec00
	bool ActorStartFade(struct AActor* Actor, struct FObjectFadeParamsSpeedDuration& Setup, enum class EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride); // Function FXUtil.ObjectFadeMaster.ActorStartFade // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181e9d0
	void ActorSetFadeInOut(struct AActor* Actor, enum class EObjectFadeDirection Direction, enum class EObjectFadeMasterState& FadeState, float Duration, enum class EObjectFadeCompletedAction FadeInCompletedAction, enum class EObjectFadeCompletedAction FadeOutCompletedAction, bool bFadeInIfNotInSystem); // Function FXUtil.ObjectFadeMaster.ActorSetFadeInOut // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181e7b0
	void ActorRemoveFade(struct AActor* Actor, bool& wasFading); // Function FXUtil.ObjectFadeMaster.ActorRemoveFade // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181e6e0
	void ActorPingPongFade(struct AActor* Actor, enum class EObjectFadeDirection Direction, enum class EObjectFadeMasterState& FadeState, float Duration); // Function FXUtil.ObjectFadeMaster.ActorPingPongFade // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181e570
	void ActorIsFadingOut(struct AActor* Actor, bool& isFading, bool& isDone); // Function FXUtil.ObjectFadeMaster.ActorIsFadingOut // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181e440
	void ActorIsFadingIn(struct AActor* Actor, bool& isFading, bool& isDone); // Function FXUtil.ObjectFadeMaster.ActorIsFadingIn // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x181e310
};

// Class FXUtil.FollowCameraComponent
// Size: 0x108 (Inherited: 0xc8)
struct UFollowCameraComponent : UActorComponent {
	enum class EFollowCameraType FollowType; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float ZValue; // 0xcc(0x04)
	char pad_D0[0x38]; // 0xd0(0x38)
};

// Class FXUtil.FXAutoTriggerConditionBase
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerConditionBase : UObject {
};

// Class FXUtil.FXAutoTriggerCondition
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerCondition : UFXAutoTriggerConditionBase {
	enum class EFXAutoTriggerConditionType Type; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class FXUtil.FXAutoTriggerConditionList
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerConditionList : UFXAutoTriggerConditionBase {
	struct TArray<struct UFXAutoTriggerConditionBase*> Conditions; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerConditionBool
// Size: 0x68 (Inherited: 0x30)
struct UFXAutoTriggerConditionBool : UFXAutoTriggerCondition {
	struct UFXAutoTriggerBool* Condition; // 0x30(0x08)
	struct FFXAutoTriggerFXSpawnInfo SpawnInfo; // 0x38(0x28)
	bool bUseSpawnInfo; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class FXUtil.FXAutoTriggerConditionIsSwappable
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerConditionIsSwappable : UFXAutoTriggerConditionBase {
	struct FMaterialPermuterKeyProperty Key; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerValue
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerValue : UObject {
};

// Class FXUtil.FXAutoTriggerBool
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerBool : UFXAutoTriggerValue {
};

// Class FXUtil.FXAutoTriggerCustomActorConditionBool
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerCustomActorConditionBool : UFXAutoTriggerBool {
	struct FName CustomCondition; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerCustomWorldConditionBool
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerCustomWorldConditionBool : UFXAutoTriggerBool {
	struct FName CustomCondition; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerDefinitionAsset
// Size: 0xa0 (Inherited: 0x30)
struct UFXAutoTriggerDefinitionAsset : UDataAsset {
	struct FName Name; // 0x30(0x08)
	struct UFXAutoTriggerPrerequisiteBase* Prerequisite; // 0x38(0x08)
	struct UFXAutoTriggerRequiredActorsBase* RequiredActors; // 0x40(0x08)
	struct UFXAutoTriggerConditionBase* TriggerCondition; // 0x48(0x08)
	struct TArray<struct UFXAutoTriggerUpdateBase*> Updates; // 0x50(0x10)
	struct TArray<struct FMultiFX2Var> FX; // 0x60(0x10)
	struct FFXAutoTriggerFXSpawnInfo DefaultSpawnInfo; // 0x70(0x28)
	int32_t SleepWhenFinishingImmediately; // 0x98(0x04)
	int32_t SleepWhenStartFails; // 0x9c(0x04)
};

// Class FXUtil.FXAutoTriggerGroupDefinitionAsset
// Size: 0xb0 (Inherited: 0x30)
struct UFXAutoTriggerGroupDefinitionAsset : UDataAsset {
	struct FName Group; // 0x30(0x08)
	struct TArray<struct UFXAutoTriggerPrerequisiteBase*> GroupPrerequisites; // 0x38(0x10)
	struct TArray<struct UFXAutoTriggerDefinitionAsset*> Definitions; // 0x48(0x10)
	bool bRunWithGlobalActors; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TMap<struct FName, struct UFXAutoTriggerDefinitionAsset*> GroupNames; // 0x60(0x50)
};

// Class FXUtil.FXAutoTriggerGlobalDefinitionAsset
// Size: 0xb0 (Inherited: 0x30)
struct UFXAutoTriggerGlobalDefinitionAsset : UDataAsset {
	struct TArray<struct UFXAutoTriggerDefinitionAsset*> GlobalDefinitions; // 0x30(0x10)
	struct TArray<struct UFXAutoTriggerGroupDefinitionAsset*> GroupDefinitions; // 0x40(0x10)
	struct TArray<struct UFXAutoTriggerPrerequisiteBase*> GlobalPrerequisites; // 0x50(0x10)
	struct TMap<struct FName, struct UFXAutoTriggerDefinitionAsset*> GlobalNames; // 0x60(0x50)
};

// Class FXUtil.FXAutoTriggerDefinitionBatchAsset
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerDefinitionBatchAsset : UDataAsset {
};

// Class FXUtil.FXAutoTriggerPrerequisiteBase
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerPrerequisiteBase : UObject {
};

// Class FXUtil.FXAutoTriggerPrerequisiteAnd
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerPrerequisiteAnd : UFXAutoTriggerPrerequisiteBase {
	struct TArray<struct UFXAutoTriggerPrerequisiteBase*> Conditions; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerPrerequisiteOr
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerPrerequisiteOr : UFXAutoTriggerPrerequisiteBase {
	struct TArray<struct UFXAutoTriggerPrerequisiteBase*> Conditions; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerPrerequisiteNot
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerPrerequisiteNot : UFXAutoTriggerPrerequisiteBase {
	struct UFXAutoTriggerPrerequisiteBase* Condition; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerPrerequisiteDisabled
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerPrerequisiteDisabled : UFXAutoTriggerPrerequisiteBase {
};

// Class FXUtil.FXAutoTriggerPrerequisiteDevelopmentOnly
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerPrerequisiteDevelopmentOnly : UFXAutoTriggerPrerequisiteBase {
};

// Class FXUtil.FXAutoTriggerPrerequisitePIEOnly
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerPrerequisitePIEOnly : UFXAutoTriggerPrerequisiteBase {
};

// Class FXUtil.FXAutoTriggerPrerequisiteBool
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerPrerequisiteBool : UFXAutoTriggerPrerequisiteBase {
	struct UFXAutoTriggerBool* Condition; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerPrerequisiteIsBundleLoaded
// Size: 0x40 (Inherited: 0x28)
struct UFXAutoTriggerPrerequisiteIsBundleLoaded : UFXAutoTriggerPrerequisiteBase {
	struct FMaterialPermuterKeyProperty Key; // 0x28(0x10)
	enum class EMaterialPermuterLoadingPriority Priority; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class FXUtil.FXAutoTriggerRequiredActorsBase
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsBase : UObject {
};

// Class FXUtil.FXAutoTriggerRequiredActorsSimple
// Size: 0x50 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsSimple : UFXAutoTriggerRequiredActorsBase {
	struct TSoftClassPtr<UObject> ActorType; // 0x28(0x28)
};

// Class FXUtil.FXAutoTriggerRequiredActorsPlayer
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsPlayer : UFXAutoTriggerRequiredActorsBase {
};

// Class FXUtil.FXAutoTriggerRequiredActorsCharacters
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsCharacters : UFXAutoTriggerRequiredActorsBase {
};

// Class FXUtil.FXAutoTriggerRequiredActorsCharacterSubClass
// Size: 0x50 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsCharacterSubClass : UFXAutoTriggerRequiredActorsCharacters {
	struct TSoftClassPtr<UObject> CharacterType; // 0x28(0x28)
};

// Class FXUtil.FXAutoTriggerRequiredActorsCustomBucket
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsCustomBucket : UFXAutoTriggerRequiredActorsBase {
	struct FName CustomBucket; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerRequiredActorsList
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsList : UFXAutoTriggerRequiredActorsBase {
	struct TArray<struct UFXAutoTriggerRequiredActorsBase*> RequiredActors; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchBase
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatchBase : UObject {
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatch
// Size: 0x58 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatch : UFXAutoTriggerRequiredActorsBase {
	struct TSoftClassPtr<UObject> ActorType; // 0x28(0x28)
	struct UFXAutoTriggerRequiredActorsMatchBase* Condition; // 0x50(0x08)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchChildOf
// Size: 0x50 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatchChildOf : UFXAutoTriggerRequiredActorsMatchBase {
	struct TSoftClassPtr<UObject> ParentActorType; // 0x28(0x28)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchAnd
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatchAnd : UFXAutoTriggerRequiredActorsMatchBase {
	struct TArray<struct UFXAutoTriggerRequiredActorsMatchBase*> Conditions; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchOr
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatchOr : UFXAutoTriggerRequiredActorsMatchBase {
	struct TArray<struct UFXAutoTriggerRequiredActorsMatchBase*> Conditions; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchNot
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatchNot : UFXAutoTriggerRequiredActorsMatchBase {
	struct UFXAutoTriggerRequiredActorsMatchBase* Condition; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchTypes
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatchTypes : UFXAutoTriggerRequiredActorsMatchBase {
	struct TArray<struct TSoftClassPtr<UObject>> ActorTypes; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchNotOfTypes
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatchNotOfTypes : UFXAutoTriggerRequiredActorsMatchBase {
	struct TArray<struct TSoftClassPtr<UObject>> NotOfActorTypes; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchName
// Size: 0x40 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatchName : UFXAutoTriggerRequiredActorsMatchBase {
	struct FString STARTSWITH; // 0x28(0x10)
	bool bIgnoreCase; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchNameContains
// Size: 0x40 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatchNameContains : UFXAutoTriggerRequiredActorsMatchBase {
	struct FString CONTAINS; // 0x28(0x10)
	bool bIgnoreCase; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchTag
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatchTag : UFXAutoTriggerRequiredActorsMatchBase {
	struct FName ActorTag; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchTags
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsMatchTags : UFXAutoTriggerRequiredActorsMatchBase {
	struct TArray<struct FName> ActorTags; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchTagsAny
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerRequiredActorsMatchTagsAny : UFXAutoTriggerRequiredActorsMatchTags {
};

// Class FXUtil.FXAutoTriggerRequiredActorsMatchTagsNotAny
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerRequiredActorsMatchTagsNotAny : UFXAutoTriggerRequiredActorsMatchTags {
};

// Class FXUtil.FXAutoTriggerRequiredActorMatchHasComponent
// Size: 0x50 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorMatchHasComponent : UFXAutoTriggerRequiredActorsMatchBase {
	struct TSoftClassPtr<UObject> HasComponentType; // 0x28(0x28)
};

// Class FXUtil.FXAutoTriggerRequiredActorMatchHasSocket
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorMatchHasSocket : UFXAutoTriggerRequiredActorsMatchBase {
	struct FName SocketName; // 0x28(0x08)
	bool bSearchAllChildComponents; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class FXUtil.FXAutoTriggerRequiredActorMatchCustomBucket
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorMatchCustomBucket : UFXAutoTriggerRequiredActorsMatchBase {
	struct FName CustomBucket; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerRequiredActorMatchIsPlayer
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorMatchIsPlayer : UFXAutoTriggerRequiredActorsMatchBase {
};

// Class FXUtil.FXAutoTriggerRequiredActorMatchIsNotPlayer
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorMatchIsNotPlayer : UFXAutoTriggerRequiredActorsMatchBase {
};

// Class FXUtil.FXAutoTriggerRequiredActorsExternalBucketFilter
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsExternalBucketFilter : UObject {
};

// Class FXUtil.FXAutoTriggerRequiredActorsExternalBucket
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerRequiredActorsExternalBucket : UFXAutoTriggerRequiredActorsBase {
	struct FName ExternalBucket; // 0x28(0x08)
	struct UFXAutoTriggerRequiredActorsMatchBase* Condition; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerSingleton
// Size: 0x2c8 (Inherited: 0x248)
struct AFXAutoTriggerSingleton : AActor {
	struct UFXAutoTriggerGlobalDefinitionAsset* Globals; // 0x248(0x08)
	struct FFXAutoTriggerRunningFXCollection FX; // 0x250(0x28)
	struct TMap<struct FName, struct UMaterialPermuterLoadingBundle*> KeyMaterialBundles; // 0x278(0x50)

	void SetWorldCustomCondition(struct UObject* WorldContextObject, struct FName WorldConditionName, bool bEnabled); // Function FXUtil.FXAutoTriggerSingleton.SetWorldCustomCondition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1825c90
	void SetActorCustomCondition(struct AActor* Actor, struct FName ActorConditionName, bool bEnabled); // Function FXUtil.FXAutoTriggerSingleton.SetActorCustomCondition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1825b90
	void RemoveManualActors(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, struct TArray<struct AActor*> Actors, bool& bResult); // Function FXUtil.FXAutoTriggerSingleton.RemoveManualActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1824610
	void RemoveManualActor(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, struct AActor* Actor, bool& bResult); // Function FXUtil.FXAutoTriggerSingleton.RemoveManualActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18244d0
	void RemoveCustomBucketActor(struct AActor* Actor, struct FName CustomBucket); // Function FXUtil.FXAutoTriggerSingleton.RemoveCustomBucketActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1825ad0
	void RemoveActorByClass(struct AActor* Actor, struct UObject* ActorClass); // Function FXUtil.FXAutoTriggerSingleton.RemoveActorByClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1825a10
	void ManuallyTriggerPrerequisite(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, bool& bResult, bool bTrigger); // Function FXUtil.FXAutoTriggerSingleton.ManuallyTriggerPrerequisite // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18258c0
	void KillAutoTriggerFX(struct UObject* WorldContextObject, struct UObject* FXOwner, struct UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition, bool& bResult); // Function FXUtil.FXAutoTriggerSingleton.KillAutoTriggerFX // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1825770
	void IsManualPrerequisiteTriggered(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, bool& bResult); // Function FXUtil.FXAutoTriggerSingleton.IsManualPrerequisiteTriggered // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1825670
	void HasManualActor(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, struct AActor* Actor, bool& bResult); // Function FXUtil.FXAutoTriggerSingleton.HasManualActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x18244d0
	void HasAutoTriggerFX(struct UObject* WorldContextObject, struct UObject* FXOwner, struct UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition, bool& bResult); // Function FXUtil.FXAutoTriggerSingleton.HasAutoTriggerFX // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1825520
	void GetWorldCustomCondition(struct UObject* WorldContextObject, struct FName WorldConditionName, bool& bEnabled); // Function FXUtil.FXAutoTriggerSingleton.GetWorldCustomCondition // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1825410
	void GetEffectIsActive(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, struct AActor* Actor, bool& bIsActive); // Function FXUtil.FXAutoTriggerSingleton.GetEffectIsActive // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x18252a0
	void GetEffectHandle(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, struct AActor* Actor, struct FMultiFX2Handle& FXHandle); // Function FXUtil.FXAutoTriggerSingleton.GetEffectHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1825120
	void GetAnyEffectIsActive(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, bool& bAnyIsActive); // Function FXUtil.FXAutoTriggerSingleton.GetAnyEffectIsActive // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1824ff0
	void GetActorCustomCondition(struct AActor* Actor, struct FName ActorConditionName, bool& bEnabled); // Function FXUtil.FXAutoTriggerSingleton.GetActorCustomCondition // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1824ee0
	void EffectUpdatesDisabled(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, struct AActor* Actor, bool& bIsDisabled); // Function FXUtil.FXAutoTriggerSingleton.EffectUpdatesDisabled // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1824d70
	void EffectParameterUpdatesDisabled(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, struct AActor* Actor, struct FName Parameter, bool& bIsDisabled); // Function FXUtil.FXAutoTriggerSingleton.EffectParameterUpdatesDisabled // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1824ba0
	void DisableEffectUpdates(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, struct AActor* Actor, bool bDisableUpdates, bool& bResult); // Function FXUtil.FXAutoTriggerSingleton.DisableEffectUpdates // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18249d0
	void DisableEffectParameterUpdates(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, struct AActor* Actor, struct FName Parameter, bool bDisableUpdates, bool& bResult); // Function FXUtil.FXAutoTriggerSingleton.DisableEffectParameterUpdates // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18247c0
	void AddManualActors(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, struct TArray<struct AActor*> Actors, bool& bResult); // Function FXUtil.FXAutoTriggerSingleton.AddManualActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1824610
	void AddManualActor(struct UObject* WorldContextObject, struct FFXAutoTriggerAnyName FXName, struct AActor* Actor, bool& bResult); // Function FXUtil.FXAutoTriggerSingleton.AddManualActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18244d0
	void AddCustomBucketActor(struct AActor* Actor, struct FName CustomBucket); // Function FXUtil.FXAutoTriggerSingleton.AddCustomBucketActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1824410
	void AddAutoTriggerFX(struct UObject* WorldContextObject, struct UObject* FXOwner, struct UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition, bool& bResult); // Function FXUtil.FXAutoTriggerSingleton.AddAutoTriggerFX // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18242c0
	void AddActorByClass(struct AActor* Actor, struct UObject* ActorClass, struct FName ClassTag); // Function FXUtil.FXAutoTriggerSingleton.AddActorByClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18241c0
	void ActorIsInCustomBucket(struct AActor* Actor, struct FName CustomBucket, bool& bIsIn); // Function FXUtil.FXAutoTriggerSingleton.ActorIsInCustomBucket // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x18240b0
};

// Class FXUtil.FXAutoTriggerUpdateBase
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerUpdateBase : UObject {
};

// Class FXUtil.FXAutoTriggerUpdateLocalVar
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerUpdateLocalVar : UObject {
};

// Class FXUtil.FXAutoTriggerUpdateNiagaraBatchVar
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerUpdateNiagaraBatchVar : UFXAutoTriggerUpdateLocalVar {
};

// Class FXUtil.FXAutoTriggerUpdateNiagaraBatchFloat
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerUpdateNiagaraBatchFloat : UFXAutoTriggerUpdateNiagaraBatchVar {
	struct FName Var; // 0x28(0x08)
	struct UFXAutoTriggerScalar* Scalar; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerUpdateNiagaraBatchBool
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerUpdateNiagaraBatchBool : UFXAutoTriggerUpdateNiagaraBatchVar {
	struct FName Var; // 0x28(0x08)
	struct UFXAutoTriggerBool* Bool; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerUpdateNiagaraBatchLinearColor
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerUpdateNiagaraBatchLinearColor : UFXAutoTriggerUpdateNiagaraBatchVar {
	struct FName Var; // 0x28(0x08)
	struct UFXAutoTriggerLinearColor* Color; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerUpdateNiagaraBatch
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerUpdateNiagaraBatch : UFXAutoTriggerUpdateBase {
	struct TArray<struct UFXAutoTriggerUpdateNiagaraBatchVar*> Vars; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerUpdateNiagaraScalar
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerUpdateNiagaraScalar : UFXAutoTriggerUpdateBase {
	struct FName NiagaraVar; // 0x28(0x08)
	struct UFXAutoTriggerScalar* Scalar; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerUpdateLocalSkinFXVar
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerUpdateLocalSkinFXVar : UFXAutoTriggerUpdateLocalVar {
};

// Class FXUtil.FXAutoTriggerUpdateLocalSkinFXVarFloat
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerUpdateLocalSkinFXVarFloat : UFXAutoTriggerUpdateLocalSkinFXVar {
	struct FName Var; // 0x28(0x08)
	struct UFXAutoTriggerScalar* Scalar; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerUpdateLocalSkinFXVarLinearColor
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerUpdateLocalSkinFXVarLinearColor : UFXAutoTriggerUpdateLocalSkinFXVar {
	struct FName Var; // 0x28(0x08)
	struct UFXAutoTriggerLinearColor* Color; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerUpdateSkinFXParameters
// Size: 0x40 (Inherited: 0x28)
struct UFXAutoTriggerUpdateSkinFXParameters : UFXAutoTriggerUpdateBase {
	struct ASkinFXDefinition* SkinFX; // 0x28(0x08)
	struct TArray<struct UFXAutoTriggerUpdateLocalSkinFXVar*> Vars; // 0x30(0x10)
};

// Class FXUtil.FXAutoTriggerScalar
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerScalar : UFXAutoTriggerValue {
};

// Class FXUtil.FXAutoTriggerScalarConstantZero
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerScalarConstantZero : UFXAutoTriggerScalar {
};

// Class FXUtil.FXAutoTriggerScalarConstantOne
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerScalarConstantOne : UFXAutoTriggerScalar {
};

// Class FXUtil.FXAutoTriggerScalarConstantValue
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerScalarConstantValue : UFXAutoTriggerScalar {
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class FXUtil.FXAutoTriggerScalarConstantValueSquared
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerScalarConstantValueSquared : UFXAutoTriggerScalar {
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class FXUtil.FXAutoTriggerScalarConstantValuePercent
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerScalarConstantValuePercent : UFXAutoTriggerScalar {
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class FXUtil.FXAutoTriggerScalarSingleParam
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerScalarSingleParam : UFXAutoTriggerScalar {
	struct UFXAutoTriggerScalar* Value; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerScalarOneMinus
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerScalarOneMinus : UFXAutoTriggerScalarSingleParam {
};

// Class FXUtil.FXAutoTriggerScalarSaturate
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerScalarSaturate : UFXAutoTriggerScalarSingleParam {
};

// Class FXUtil.FXAutoTriggerScalarAbs
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerScalarAbs : UFXAutoTriggerScalarSingleParam {
};

// Class FXUtil.FXAutoTriggerScalarNegate
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerScalarNegate : UFXAutoTriggerScalarSingleParam {
};

// Class FXUtil.FXAutoTriggerScalarInvert
// Size: 0x38 (Inherited: 0x30)
struct UFXAutoTriggerScalarInvert : UFXAutoTriggerScalarSingleParam {
	float DivideByZero; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class FXUtil.FXAutoTriggerScalarSqrRoot
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerScalarSqrRoot : UFXAutoTriggerScalarSingleParam {
};

// Class FXUtil.FXAutoTriggerScalarSquare
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerScalarSquare : UFXAutoTriggerScalarSingleParam {
};

// Class FXUtil.FXAutoTriggerScalarPower
// Size: 0x38 (Inherited: 0x30)
struct UFXAutoTriggerScalarPower : UFXAutoTriggerScalarSingleParam {
	float Power; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class FXUtil.FXAutoTriggerScalarRemapClamped
// Size: 0x40 (Inherited: 0x30)
struct UFXAutoTriggerScalarRemapClamped : UFXAutoTriggerScalarSingleParam {
	struct FVector2D InputRange; // 0x30(0x08)
	struct FVector2D OutputRange; // 0x38(0x08)
};

// Class FXUtil.FXAutoTriggerScalarRemapUnclamped
// Size: 0x40 (Inherited: 0x30)
struct UFXAutoTriggerScalarRemapUnclamped : UFXAutoTriggerScalarSingleParam {
	struct FVector2D InputRange; // 0x30(0x08)
	struct FVector2D OutputRange; // 0x38(0x08)
};

// Class FXUtil.FXAutoTriggerScalarMinConstant
// Size: 0x38 (Inherited: 0x30)
struct UFXAutoTriggerScalarMinConstant : UFXAutoTriggerScalarSingleParam {
	float Minimum; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class FXUtil.FXAutoTriggerScalarMaximumConstant
// Size: 0x38 (Inherited: 0x30)
struct UFXAutoTriggerScalarMaximumConstant : UFXAutoTriggerScalarSingleParam {
	float Maximum; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class FXUtil.FXAutoTriggerScalarClampConstant
// Size: 0x38 (Inherited: 0x30)
struct UFXAutoTriggerScalarClampConstant : UFXAutoTriggerScalarSingleParam {
	float Minimum; // 0x30(0x04)
	float Maximum; // 0x34(0x04)
};

// Class FXUtil.FXAutoTriggerScalarLerpConstant
// Size: 0x38 (Inherited: 0x30)
struct UFXAutoTriggerScalarLerpConstant : UFXAutoTriggerScalarSingleParam {
	float A; // 0x30(0x04)
	float B; // 0x34(0x04)
};

// Class FXUtil.FXAutoTriggerScalarCurve
// Size: 0x38 (Inherited: 0x30)
struct UFXAutoTriggerScalarCurve : UFXAutoTriggerScalarSingleParam {
	struct UCurveFloat* Curve; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerScalarTwoParams
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerScalarTwoParams : UFXAutoTriggerScalar {
	struct UFXAutoTriggerScalar* A; // 0x28(0x08)
	struct UFXAutoTriggerScalar* B; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerScalarMultiply
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerScalarMultiply : UFXAutoTriggerScalarTwoParams {
};

// Class FXUtil.FXAutoTriggerScalarDivide
// Size: 0x40 (Inherited: 0x38)
struct UFXAutoTriggerScalarDivide : UFXAutoTriggerScalarTwoParams {
	float DivideByZero; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class FXUtil.FXAutoTriggerScalarAdd
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerScalarAdd : UFXAutoTriggerScalarTwoParams {
};

// Class FXUtil.FXAutoTriggerScalarSubract
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerScalarSubract : UFXAutoTriggerScalarTwoParams {
};

// Class FXUtil.FXAutoTriggerScalarMin
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerScalarMin : UFXAutoTriggerScalarTwoParams {
};

// Class FXUtil.FXAutoTriggerScalarMax
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerScalarMax : UFXAutoTriggerScalarTwoParams {
};

// Class FXUtil.FXAutoTriggerScalarClamp
// Size: 0x40 (Inherited: 0x28)
struct UFXAutoTriggerScalarClamp : UFXAutoTriggerScalar {
	struct UFXAutoTriggerScalar* Value; // 0x28(0x08)
	struct UFXAutoTriggerScalar* Minimum; // 0x30(0x08)
	struct UFXAutoTriggerScalar* Maximum; // 0x38(0x08)
};

// Class FXUtil.FXAutoTriggerScalarLerp
// Size: 0x40 (Inherited: 0x28)
struct UFXAutoTriggerScalarLerp : UFXAutoTriggerScalar {
	struct UFXAutoTriggerScalar* A; // 0x28(0x08)
	struct UFXAutoTriggerScalar* B; // 0x30(0x08)
	struct UFXAutoTriggerScalar* Alpha; // 0x38(0x08)
};

// Class FXUtil.FXAutoTriggerScalarThreeParams
// Size: 0x40 (Inherited: 0x28)
struct UFXAutoTriggerScalarThreeParams : UFXAutoTriggerScalar {
	struct UFXAutoTriggerScalar* A; // 0x28(0x08)
	struct UFXAutoTriggerScalar* B; // 0x30(0x08)
	struct UFXAutoTriggerScalar* C; // 0x38(0x08)
};

// Class FXUtil.FXAutoTriggerScalarAddThreeParams
// Size: 0x40 (Inherited: 0x40)
struct UFXAutoTriggerScalarAddThreeParams : UFXAutoTriggerScalarThreeParams {
};

// Class FXUtil.FXAutoTriggerScalarMultiplyThreeParams
// Size: 0x40 (Inherited: 0x40)
struct UFXAutoTriggerScalarMultiplyThreeParams : UFXAutoTriggerScalarThreeParams {
};

// Class FXUtil.FXAutoTriggerScalarConstantFalse
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerScalarConstantFalse : UFXAutoTriggerBool {
};

// Class FXUtil.FXAutoTriggerScalarConstantTrue
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerScalarConstantTrue : UFXAutoTriggerBool {
};

// Class FXUtil.FXAutoTriggerBoolSingleParam
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerBoolSingleParam : UFXAutoTriggerBool {
	struct UFXAutoTriggerBool* Value; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerBoolNot
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerBoolNot : UFXAutoTriggerBoolSingleParam {
};

// Class FXUtil.FXAutoTriggerBoolTwoParams
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerBoolTwoParams : UFXAutoTriggerBool {
	struct UFXAutoTriggerBool* A; // 0x28(0x08)
	struct UFXAutoTriggerBool* B; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerBoolAnd
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerBoolAnd : UFXAutoTriggerBoolTwoParams {
};

// Class FXUtil.FXAutoTriggerBoolOr
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerBoolOr : UFXAutoTriggerBoolTwoParams {
};

// Class FXUtil.FXAutoTriggerBoolXor
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerBoolXor : UFXAutoTriggerBoolTwoParams {
};

// Class FXUtil.FXAutoTriggerBoolParamList
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerBoolParamList : UFXAutoTriggerBool {
	struct TArray<struct UFXAutoTriggerBool*> Conditions; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerBoolAndList
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerBoolAndList : UFXAutoTriggerBoolParamList {
};

// Class FXUtil.FXAutoTriggerBoolOrList
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerBoolOrList : UFXAutoTriggerBoolParamList {
};

// Class FXUtil.FXAutoTriggerBoolXorList
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerBoolXorList : UFXAutoTriggerBoolParamList {
};

// Class FXUtil.FXAutoTriggerBoolScalarParam
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerBoolScalarParam : UFXAutoTriggerBool {
	struct UFXAutoTriggerScalar* Scalar; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerBoolIsZero
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerBoolIsZero : UFXAutoTriggerBoolScalarParam {
};

// Class FXUtil.FXAutoTriggerBoolNotZero
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerBoolNotZero : UFXAutoTriggerBoolScalarParam {
};

// Class FXUtil.FXAutoTriggerBoolIsOne
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerBoolIsOne : UFXAutoTriggerBoolScalarParam {
};

// Class FXUtil.FXAutoTriggerBoolNotOne
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerBoolNotOne : UFXAutoTriggerBoolScalarParam {
};

// Class FXUtil.FXAutoTriggerBoolGreaterThanZero
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerBoolGreaterThanZero : UFXAutoTriggerBoolScalarParam {
};

// Class FXUtil.FXAutoTriggerBoolLessThanZero
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerBoolLessThanZero : UFXAutoTriggerBoolScalarParam {
};

// Class FXUtil.FXAutoTriggerBoolLessThanHalf
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerBoolLessThanHalf : UFXAutoTriggerBoolScalarParam {
};

// Class FXUtil.FXAutoTriggerBoolGreaterThanOrEqualHalf
// Size: 0x30 (Inherited: 0x30)
struct UFXAutoTriggerBoolGreaterThanOrEqualHalf : UFXAutoTriggerBoolScalarParam {
};

// Class FXUtil.FXAutoTriggerBoolTwoScalarParams
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerBoolTwoScalarParams : UFXAutoTriggerBool {
	struct UFXAutoTriggerScalar* A; // 0x28(0x08)
	struct UFXAutoTriggerScalar* B; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerBoolEqual
// Size: 0x40 (Inherited: 0x38)
struct UFXAutoTriggerBoolEqual : UFXAutoTriggerBoolTwoScalarParams {
	float Threshold; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class FXUtil.FXAutoTriggerBoolNotEqual
// Size: 0x40 (Inherited: 0x38)
struct UFXAutoTriggerBoolNotEqual : UFXAutoTriggerBoolTwoScalarParams {
	float Threshold; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class FXUtil.FXAutoTriggerBoolLessThan
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerBoolLessThan : UFXAutoTriggerBoolTwoScalarParams {
};

// Class FXUtil.FXAutoTriggerBoolLessThanOrEqualTo
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerBoolLessThanOrEqualTo : UFXAutoTriggerBoolTwoScalarParams {
};

// Class FXUtil.FXAutoTriggerBoolGreaterThan
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerBoolGreaterThan : UFXAutoTriggerBoolTwoScalarParams {
};

// Class FXUtil.FXAutoTriggerBoolGreaterThanOrEqualTo
// Size: 0x38 (Inherited: 0x38)
struct UFXAutoTriggerBoolGreaterThanOrEqualTo : UFXAutoTriggerBoolTwoScalarParams {
};

// Class FXUtil.FXAutoTriggerBoolThreeScalarParams
// Size: 0x40 (Inherited: 0x28)
struct UFXAutoTriggerBoolThreeScalarParams : UFXAutoTriggerBool {
	struct UFXAutoTriggerScalar* A; // 0x28(0x08)
	struct UFXAutoTriggerScalar* B; // 0x30(0x08)
	struct UFXAutoTriggerScalar* C; // 0x38(0x08)
};

// Class FXUtil.FXAutoTriggerBoolInBetweenEqual
// Size: 0x40 (Inherited: 0x40)
struct UFXAutoTriggerBoolInBetweenEqual : UFXAutoTriggerBoolThreeScalarParams {
};

// Class FXUtil.FXAutoTriggerBoolInBetween
// Size: 0x40 (Inherited: 0x40)
struct UFXAutoTriggerBoolInBetween : UFXAutoTriggerBoolThreeScalarParams {
};

// Class FXUtil.FXAutoTriggerScalarFromBool
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerScalarFromBool : UFXAutoTriggerScalar {
	struct UFXAutoTriggerBool* Condition; // 0x28(0x08)
	float TrueValue; // 0x30(0x04)
	float FalseValue; // 0x34(0x04)
};

// Class FXUtil.FXAutoTriggerScalarFromBoolSelect
// Size: 0x40 (Inherited: 0x28)
struct UFXAutoTriggerScalarFromBoolSelect : UFXAutoTriggerScalar {
	struct UFXAutoTriggerBool* Condition; // 0x28(0x08)
	struct UFXAutoTriggerScalar* TrueValue; // 0x30(0x08)
	struct UFXAutoTriggerScalar* FalseValue; // 0x38(0x08)
};

// Class FXUtil.FXAutoTriggerLinearColor
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerLinearColor : UFXAutoTriggerValue {
};

// Class FXUtil.FXAutoTriggerLinearColorConstant
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerLinearColorConstant : UFXAutoTriggerLinearColor {
	struct FLinearColor Color; // 0x28(0x10)
};

// Class FXUtil.FXAutoTriggerLinearColorCurve
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerLinearColorCurve : UFXAutoTriggerLinearColor {
	struct UCurveLinearColor* Curve; // 0x28(0x08)
	struct UFXAutoTriggerScalar* XAxis; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerLinearScaleColor
// Size: 0x38 (Inherited: 0x28)
struct UFXAutoTriggerLinearScaleColor : UFXAutoTriggerLinearColor {
	struct UFXAutoTriggerLinearColor* Color; // 0x28(0x08)
	struct UFXAutoTriggerScalar* Scale; // 0x30(0x08)
};

// Class FXUtil.FXAutoTriggerLinearSelectColorConst
// Size: 0x50 (Inherited: 0x28)
struct UFXAutoTriggerLinearSelectColorConst : UFXAutoTriggerLinearColor {
	struct UFXAutoTriggerBool* Condition; // 0x28(0x08)
	struct FLinearColor ColorTrue; // 0x30(0x10)
	struct FLinearColor ColorFalse; // 0x40(0x10)
};

// Class FXUtil.FXAutoTriggerLinearSelectColor
// Size: 0x40 (Inherited: 0x28)
struct UFXAutoTriggerLinearSelectColor : UFXAutoTriggerLinearColor {
	struct UFXAutoTriggerBool* Condition; // 0x28(0x08)
	struct UFXAutoTriggerLinearColor* ColorTrue; // 0x30(0x08)
	struct UFXAutoTriggerLinearColor* ColorFalse; // 0x38(0x08)
};

// Class FXUtil.FXAutoTriggerBoolConsoleVariable
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerBoolConsoleVariable : UFXAutoTriggerBool {
	struct FName ConsoleVariable; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerScalarConsoleVariable
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerScalarConsoleVariable : UFXAutoTriggerScalar {
	struct FName ConsoleVariable; // 0x28(0x08)
};

// Class FXUtil.FXAutoTriggerBoolPIE
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerBoolPIE : UFXAutoTriggerBool {
};

// Class FXUtil.FXAutoTriggerBoolIsDevelopment
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerBoolIsDevelopment : UFXAutoTriggerBool {
};

// Class FXUtil.FXAutoTriggerBoolFloorIsWalkable
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerBoolFloorIsWalkable : UFXAutoTriggerBool {
	int32_t FramesPerUpdate; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class FXUtil.FXAutoTriggerScalarFloorDistance
// Size: 0x30 (Inherited: 0x28)
struct UFXAutoTriggerScalarFloorDistance : UFXAutoTriggerScalar {
	float NoFloorDistance; // 0x28(0x04)
	int32_t FramesPerUpdate; // 0x2c(0x04)
};

// Class FXUtil.FXAutoTriggerScalarEffectAge
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerScalarEffectAge : UFXAutoTriggerScalar {
};

// Class FXUtil.FXAutoTriggerBoolEffectActive
// Size: 0x28 (Inherited: 0x28)
struct UFXAutoTriggerBoolEffectActive : UFXAutoTriggerBool {
};

// Class FXUtil.NiagaraDataInterfaceNonUniformSpline
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraDataInterfaceNonUniformSpline : UNiagaraDataInterface {
	struct AActor* Source; // 0x38(0x08)
	struct FNiagaraUserParameterBinding SplineUserParameter; // 0x40(0x20)
};

// Class FXUtil.NonUniformSplineComponent
// Size: 0x110 (Inherited: 0xc8)
struct UNonUniformSplineComponent : UActorComponent {
	float ParameterizationExponent; // 0xc8(0x04)
	int32_t DistanceSamplesPerInterval; // 0xcc(0x04)
	char pad_D0[0x40]; // 0xd0(0x40)

	void InitializeFromPoints(struct TArray<struct FVector>& InPoints); // Function FXUtil.NonUniformSplineComponent.InitializeFromPoints // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1832ce0
	float GetTimeAtDistance(float Distance); // Function FXUtil.NonUniformSplineComponent.GetTimeAtDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1832c40
	struct FVector GetTangent(float NormalizedTime); // Function FXUtil.NonUniformSplineComponent.GetTangent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1832ba0
	float GetSplineLength(); // Function FXUtil.NonUniformSplineComponent.GetSplineLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1832b70
	struct FVector GetPositionAtDistanceAlongSpline(float Distance); // Function FXUtil.NonUniformSplineComponent.GetPositionAtDistanceAlongSpline // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1832ad0
	struct FVector GetPosition(float NormalizedTime); // Function FXUtil.NonUniformSplineComponent.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1832a30
	float GetDistance(float NormalizedTime); // Function FXUtil.NonUniformSplineComponent.GetDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1832990
	float FindNearestTimeOnSpline(struct FVector& InLocation); // Function FXUtil.NonUniformSplineComponent.FindNearestTimeOnSpline // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x18328f0
	struct FVector FindNearestPointOnSpline(struct FVector& InLocation); // Function FXUtil.NonUniformSplineComponent.FindNearestPointOnSpline // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1832840
	float FindClosestDistanceSqToSpline(struct FVector& InLocation); // Function FXUtil.NonUniformSplineComponent.FindClosestDistanceSqToSpline // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x18327a0
	void DebugDraw(int32_t SegmentsPerPoint, float Duration, bool bDrawTangents, bool bDrawArtificialEndPoints, bool bDrawDistances, struct FVector PruneCenterpoint, float PruneOutsideCenterpointRadius); // Function FXUtil.NonUniformSplineComponent.DebugDraw // (Final|Native|Public|HasDefaults|BlueprintCallable|Const) // @ game+0x1832560
};

// Class FXUtil.OverlapEffectsHandlerEffect
// Size: 0x28 (Inherited: 0x28)
struct UOverlapEffectsHandlerEffect : UObject {
};

// Class FXUtil.OverlapEffectsHandlerEffectSound
// Size: 0x38 (Inherited: 0x28)
struct UOverlapEffectsHandlerEffectSound : UOverlapEffectsHandlerEffect {
	struct UAkAudioEvent* Event; // 0x28(0x08)
	int32_t LastSoundHandle; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class FXUtil.OverlapEffectsHandlerEffectSoundAttached
// Size: 0x40 (Inherited: 0x38)
struct UOverlapEffectsHandlerEffectSoundAttached : UOverlapEffectsHandlerEffectSound {
	enum class EOverlapEffectsAttachment Attachment; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class FXUtil.OverlapEffectsHandlerEffectSoundWorld
// Size: 0x40 (Inherited: 0x38)
struct UOverlapEffectsHandlerEffectSoundWorld : UOverlapEffectsHandlerEffectSound {
	enum class EOverlapEffectsHitPoint HitPoint; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class FXUtil.OverlapEffectsHandler
// Size: 0x30 (Inherited: 0x28)
struct UOverlapEffectsHandler : UObject {
	int32_t ProcessEvents; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class FXUtil.OverlapEffectsHandlerWithConditions
// Size: 0x48 (Inherited: 0x30)
struct UOverlapEffectsHandlerWithConditions : UOverlapEffectsHandler {
	struct FOverlapEffectsHandlerConditions Conditions; // 0x30(0x18)
};

// Class FXUtil.OverlapEffectsHandlerMinimumSpeedBase
// Size: 0x50 (Inherited: 0x48)
struct UOverlapEffectsHandlerMinimumSpeedBase : UOverlapEffectsHandlerWithConditions {
	float MinimumSpeed; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class FXUtil.OverlapEffectsHandlerActorClassOverlap
// Size: 0x98 (Inherited: 0x50)
struct UOverlapEffectsHandlerActorClassOverlap : UOverlapEffectsHandlerMinimumSpeedBase {
	struct TSoftClassPtr<UObject> ActorClass; // 0x50(0x28)
	struct TArray<struct UOverlapEffectsHandlerEffect*> BeginEffects; // 0x78(0x10)
	struct TArray<struct UOverlapEffectsHandlerEffect*> EndEffects; // 0x88(0x10)
};

// Class FXUtil.OverlapEffectsHandlerActorClassHit
// Size: 0x98 (Inherited: 0x50)
struct UOverlapEffectsHandlerActorClassHit : UOverlapEffectsHandlerMinimumSpeedBase {
	struct TSoftClassPtr<UObject> ActorClass; // 0x50(0x28)
	enum class EPhysicalSurface SurfaceType; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct UOverlapEffectsHandlerEffect*> Effects; // 0x80(0x10)
	bool bUseSurfaceType; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class FXUtil.OverlapEffectsDataAsset
// Size: 0x40 (Inherited: 0x30)
struct UOverlapEffectsDataAsset : UDataAsset {
	struct TArray<struct UOverlapEffectsHandler*> OverlapHandlers; // 0x30(0x10)
};

// Class FXUtil.OverlapEffectsComponent
// Size: 0x138 (Inherited: 0xc8)
struct UOverlapEffectsComponent : UActorComponent {
	struct UOverlapEffectsDataAsset* HandlerDefinitions; // 0xc8(0x08)
	struct TArray<struct UOverlapEffectsHandler*> OverlapHandlers; // 0xd0(0x10)
	float CameraCutoffDistance; // 0xe0(0x04)
	struct FName TrueSpeedRTPC; // 0xe4(0x08)
	float TeleportThreshold; // 0xec(0x04)
	float TrueSpeedRTPCThreshold; // 0xf0(0x04)
	char bUseCameraCutoffDistance : 1; // 0xf4(0x01)
	char bSetTrueSpeedRTPC : 1; // 0xf4(0x01)
	char bEnabled : 1; // 0xf4(0x01)
	char pad_F4_3 : 5; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	int32_t LiveEvents; // 0xf8(0x04)
	struct FOverlapEffectsVelocityTracker VelocityTracker; // 0xfc(0x34)
	float LastTrueSpeed; // 0x130(0x04)
	bool bProcessEvents; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)

	void ProcessHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function FXUtil.OverlapEffectsComponent.ProcessHit // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0x1832f30
	void ProcessEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FXUtil.OverlapEffectsComponent.ProcessEndOverlap // (Final|Native|Protected) // @ game+0x1832e60
	void ProcessBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FXUtil.OverlapEffectsComponent.ProcessBeginOverlap // (Final|Native|Protected) // @ game+0x1832d90
};

// Class FXUtil.OverlapEffectsHandlerInstancedFoliageOverlap
// Size: 0x70 (Inherited: 0x50)
struct UOverlapEffectsHandlerInstancedFoliageOverlap : UOverlapEffectsHandlerMinimumSpeedBase {
	struct TArray<struct UOverlapEffectsHandlerEffect*> BeginEffects; // 0x50(0x10)
	struct TArray<struct UOverlapEffectsHandlerEffect*> EndEffects; // 0x60(0x10)
};

// Class FXUtil.OverlapEffectsHandlerInstancedFoliageHit
// Size: 0x68 (Inherited: 0x50)
struct UOverlapEffectsHandlerInstancedFoliageHit : UOverlapEffectsHandlerMinimumSpeedBase {
	enum class EPhysicalSurface SurfaceType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct UOverlapEffectsHandlerEffect*> Effects; // 0x58(0x10)
};

// Class FXUtil.OverlapEffectsHandlerInstancedFoliageBVHTest
// Size: 0x68 (Inherited: 0x50)
struct UOverlapEffectsHandlerInstancedFoliageBVHTest : UOverlapEffectsHandlerMinimumSpeedBase {
	struct TArray<struct FOverlapEffectsHandlerInstancedFoliageBVHTestEntry> TypeEvents; // 0x50(0x10)
	int32_t UpdateRateMS; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class FXUtil.OverlapEffectsHandlerEffectHermes
// Size: 0x30 (Inherited: 0x28)
struct UOverlapEffectsHandlerEffectHermes : UOverlapEffectsHandlerEffect {
	struct FName HermesMessage; // 0x28(0x08)
};

// Class FXUtil.OverlapEffectsHandlerEffectHermesVictimName
// Size: 0x30 (Inherited: 0x30)
struct UOverlapEffectsHandlerEffectHermesVictimName : UOverlapEffectsHandlerEffectHermes {
};

// Class FXUtil.OverlapEffectsHandlerEffectHermesVictimActor
// Size: 0x30 (Inherited: 0x30)
struct UOverlapEffectsHandlerEffectHermesVictimActor : UOverlapEffectsHandlerEffectHermes {
};

// Class FXUtil.OverlapEffectsHandlerEffectSkinFX
// Size: 0x38 (Inherited: 0x28)
struct UOverlapEffectsHandlerEffectSkinFX : UOverlapEffectsHandlerEffect {
	struct ASkinFXDefinition* SkinFX; // 0x28(0x08)
	enum class EOverlapEffectsAttachment Attachment; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class FXUtil.OverlapEffectsHandlerEffectMultiFX
// Size: 0x60 (Inherited: 0x28)
struct UOverlapEffectsHandlerEffectMultiFX : UOverlapEffectsHandlerEffect {
	struct UMultiFX2Asset* FXAsset; // 0x28(0x08)
	enum class EOverlapEffectsAttachment Attachment; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName AttachPointName; // 0x34(0x08)
	struct FVector AttachLocation; // 0x3c(0x0c)
	struct FRotator AttachRotation; // 0x48(0x0c)
	bool bOnlyOneEffectAtATime; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FMultiFX2Handle FXHandle; // 0x58(0x08)
};

// Class FXUtil.OverlapEffectsHandlerEffectDebugHitPoint
// Size: 0x48 (Inherited: 0x28)
struct UOverlapEffectsHandlerEffectDebugHitPoint : UOverlapEffectsHandlerEffect {
	enum class EOverlapEffectsHitPoint HitPoint; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float SphereRadius; // 0x2c(0x04)
	struct FColor SphereColor; // 0x30(0x04)
	int32_t SphereSegments; // 0x34(0x04)
	float SphereThickness; // 0x38(0x04)
	float DurationSeconds; // 0x3c(0x04)
	bool bEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class FXUtil.OverlapEffectsHandlerEffectDebugBox
// Size: 0x40 (Inherited: 0x28)
struct UOverlapEffectsHandlerEffectDebugBox : UOverlapEffectsHandlerEffect {
	enum class EOverlapEffectsAttachment Attachment; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FColor BoxColor; // 0x2c(0x04)
	float BoxThickness; // 0x30(0x04)
	float DurationSeconds; // 0x34(0x04)
	bool bEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class FXUtil.OverlapEffectsHandlerEffectNiagara
// Size: 0x58 (Inherited: 0x28)
struct UOverlapEffectsHandlerEffectNiagara : UOverlapEffectsHandlerEffect {
	struct TSoftObjectPtr<UNiagaraSystem> System; // 0x28(0x28)
	struct UNiagaraComponent* Component; // 0x50(0x08)
};

// Class FXUtil.OverlapEffectsHandlerEffectNiagaraAttached
// Size: 0x80 (Inherited: 0x58)
struct UOverlapEffectsHandlerEffectNiagaraAttached : UOverlapEffectsHandlerEffectNiagara {
	enum class EOverlapEffectsAttachment Attachment; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FName AttachPointName; // 0x5c(0x08)
	struct FVector AttachLocation; // 0x64(0x0c)
	struct FRotator AttachRotation; // 0x70(0x0c)
	bool bOnlyOneEffectActiveAtAnyTime; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
};

// Class FXUtil.OverlapEffectsHandlerEffectNiagaraWorld
// Size: 0x60 (Inherited: 0x58)
struct UOverlapEffectsHandlerEffectNiagaraWorld : UOverlapEffectsHandlerEffectNiagara {
	enum class EOverlapEffectsHitPoint HitPoint; // 0x58(0x01)
	bool bOnlyOneEffectActiveAtAnyTime; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class FXUtil.OverlapEffectsClothingDataAsset
// Size: 0x60 (Inherited: 0x30)
struct UOverlapEffectsClothingDataAsset : UDataAsset {
	struct TArray<struct FString> TightNames; // 0x30(0x10)
	struct TArray<struct FString> LooseNames; // 0x40(0x10)
	struct TArray<struct FString> CapeOrRobeNames; // 0x50(0x10)
};

// Class FXUtil.OverlapEffectsHandlerWindSpeed
// Size: 0x80 (Inherited: 0x30)
struct UOverlapEffectsHandlerWindSpeed : UOverlapEffectsHandler {
	struct TArray<struct FOverlapEffectsHandlerWindSpeedEntry> Events; // 0x30(0x10)
	struct UOverlapEffectsClothingDataAsset* ClothingTypesDatabase; // 0x40(0x08)
	struct FName ActorWindSpeedRTPC; // 0x48(0x08)
	struct FName ActorIndoorsRTPC; // 0x50(0x08)
	struct FName ActorClothingTypeRTPC; // 0x58(0x08)
	int32_t UpdateRateMS; // 0x60(0x04)
	float NextUpdate; // 0x64(0x04)
	int32_t ClothingTypes; // 0x68(0x04)
	float LastActorWindSpeedRTPC; // 0x6c(0x04)
	float LastActorIndoorsRTPC; // 0x70(0x04)
	char LastActorClothingTypeRTPC; // 0x74(0x01)
	bool bUseRelativeWindVelocity; // 0x75(0x01)
	bool bUseActorWindSpeedRTPC; // 0x76(0x01)
	bool bUseActorIndoorsRTPC; // 0x77(0x01)
	bool bUseActorClothingTypeRTPC; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class FXUtil.DecalPointLightComponentBase
// Size: 0x330 (Inherited: 0x310)
struct UDecalPointLightComponentBase : UDecalComponent {
	struct UMaterialInterface* InverseSquaredDecalMaterial; // 0x308(0x08)
	struct UMaterialInterface* FalloffExponentDecalMaterial; // 0x310(0x08)
	struct UMaterialInstanceDynamic* DecalMID; // 0x318(0x08)
	struct UMaterialInterface* DecalMIDParent; // 0x320(0x08)

	void UpdateDecal(); // Function FXUtil.DecalPointLightComponentBase.UpdateDecal // (Final|Native|Public|BlueprintCallable) // @ game+0x18352e0
	void SetInverseSquaredDecalMaterial(struct UMaterialInterface* NewInverseSquaredDecalMaterial); // Function FXUtil.DecalPointLightComponentBase.SetInverseSquaredDecalMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x1834b20
	void SetFalloffExponentDecalMaterial(struct UMaterialInterface* NewFalloffExponentDecalMaterial); // Function FXUtil.DecalPointLightComponentBase.SetFalloffExponentDecalMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x1834910
};

// Class FXUtil.DecalPointLightComponent
// Size: 0x350 (Inherited: 0x330)
struct UDecalPointLightComponent : UDecalPointLightComponentBase {
	struct FDecalPointLightInfo Info; // 0x328(0x28)

	void SetDecalPointLightInfo(struct FDecalPointLightInfo NewInfo); // Function FXUtil.DecalPointLightComponent.SetDecalPointLightInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x1834830
};

// Class FXUtil.FadeToDecalPointLightComponent
// Size: 0x330 (Inherited: 0x330)
struct UFadeToDecalPointLightComponent : UDecalPointLightComponentBase {
	bool bUseLightVisibility; // 0x328(0x01)
	bool bLightParametersCanChange; // 0x329(0x01)

	void SetUseLightVisibility(bool bNewUseLightVisibility); // Function FXUtil.FadeToDecalPointLightComponent.SetUseLightVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x1834de0
	void SetLightParametersCanChange(bool bNewLightParametersCanChange); // Function FXUtil.FadeToDecalPointLightComponent.SetLightParametersCanChange // (Final|Native|Public|BlueprintCallable) // @ game+0x1834bb0
};

// Class FXUtil.FillDecalPointLightComponent
// Size: 0x340 (Inherited: 0x330)
struct UFillDecalPointLightComponent : UFadeToDecalPointLightComponent {
	float IntensityMultiplier; // 0x330(0x04)
	float InnerCutoutRadius; // 0x334(0x04)
	float OuterCutoutRadius; // 0x338(0x04)
	float FullRadius; // 0x33c(0x04)

	void SetRadii(float NewInnerCutoutRadius, float NewOuterCutoutRadius, float NewFullRadius); // Function FXUtil.FillDecalPointLightComponent.SetRadii // (Final|Native|Public|BlueprintCallable) // @ game+0x1834cc0
	void SetOuterCutoutRadius(float NewOuterCutoutRadius); // Function FXUtil.FillDecalPointLightComponent.SetOuterCutoutRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x1834c40
	void SetIntensityMultiplier(float NewIntensityMultiplier); // Function FXUtil.FillDecalPointLightComponent.SetIntensityMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x1834aa0
	void SetInnerCutoutRadius(float NewInnerCutoutRadius); // Function FXUtil.FillDecalPointLightComponent.SetInnerCutoutRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x1834a20
	void SetFullRadius(float NewFullRadius); // Function FXUtil.FillDecalPointLightComponent.SetFullRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x18349a0
};

// Class FXUtil.PointLightDecalLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPointLightDecalLibrary : UBlueprintFunctionLibrary {

	struct FDecalPointLightInfo MakeDecalPointLightInfo(struct UPointLightComponent* PointLightComponent); // Function FXUtil.PointLightDecalLibrary.MakeDecalPointLightInfo // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1834610
};

// Class FXUtil.TimeDilationManager
// Size: 0xd0 (Inherited: 0x28)
struct UTimeDilationManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TMap<struct TWeakObjectPtr<struct UWorld>, struct FActiveTimeDilationEffectGroup> ActiveWorldEffects; // 0x30(0x50)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FActiveTimeDilationEffectGroup> ActiveActorEffects; // 0x80(0x50)

	void StartWorldTimeDilation(struct UObject* WorldContextObject, float Dilation, struct UObject* Provider, float EaseInDuration); // Function FXUtil.TimeDilationManager.StartWorldTimeDilation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1835190
	void StartActorTimeDilation(struct AActor* Actor, float Dilation, struct UObject* Provider, float EaseInDuration); // Function FXUtil.TimeDilationManager.StartActorTimeDilation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1835040
	void StartActorTimeAcceleration(struct AActor* Actor, float AccelerationDilation, float AcceleratedDuration, struct UObject* Provider); // Function FXUtil.TimeDilationManager.StartActorTimeAcceleration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1834ef0
	void StartActorCounterDilation(struct AActor* Actor); // Function FXUtil.TimeDilationManager.StartActorCounterDilation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1834e70
	void PlayWorldTimeDilationEffect(struct UObject* WorldContextObject, struct UCurveFloat* TimeDilationCurve); // Function FXUtil.TimeDilationManager.PlayWorldTimeDilationEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1834770
	void PlayActorTimeDilationEffect(struct AActor* Actor, struct UCurveFloat* TimeDilationCurve); // Function FXUtil.TimeDilationManager.PlayActorTimeDilationEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18346b0
	void FinishWorldTimeDilation(struct UObject* Provider, float EaseOutDuration); // Function FXUtil.TimeDilationManager.FinishWorldTimeDilation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1834550
	void FinishActorTimeDilation(struct UObject* Provider, float EaseOutDuration); // Function FXUtil.TimeDilationManager.FinishActorTimeDilation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1834490
	void FinishActorCounterDilation(struct AActor* Actor); // Function FXUtil.TimeDilationManager.FinishActorCounterDilation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1834410
};

// Class FXUtil.UpdatePumpComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UUpdatePumpComponent : UActorComponent {
	enum class EUpdatePumpComponentMode UpdatePumpMode; // 0xc8(0x01)
	bool bSuspend; // 0xc9(0x01)
	char pad_CA[0x16]; // 0xca(0x16)
};

