// Class BTUtilityAI.QualifierConsideration
// Size: 0x28 (Inherited: 0x28)
struct UQualifierConsideration : UObject {
};

// Class BTUtilityAI.SelfTimeSinceActionStartConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfTimeSinceActionStartConsideration : UQualifierConsideration {
	float WindowOffset; // 0x28(0x04)
	float WindowSize; // 0x2c(0x04)
};

// Class BTUtilityAI.SelfTimeSinceNamedActionStartConsideration
// Size: 0x38 (Inherited: 0x28)
struct USelfTimeSinceNamedActionStartConsideration : UQualifierConsideration {
	struct FName Action; // 0x28(0x08)
	float WindowOffset; // 0x30(0x04)
	float WindowSize; // 0x34(0x04)
};

// Class BTUtilityAI.SelfTimeSinceActionEndConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfTimeSinceActionEndConsideration : UQualifierConsideration {
	float WindowOffset; // 0x28(0x04)
	float WindowSize; // 0x2c(0x04)
};

// Class BTUtilityAI.SelfTimeSinceNamedActionEndConsideration
// Size: 0x38 (Inherited: 0x28)
struct USelfTimeSinceNamedActionEndConsideration : UQualifierConsideration {
	struct FName Action; // 0x28(0x08)
	float WindowOffset; // 0x30(0x04)
	float WindowSize; // 0x34(0x04)
};

// Class BTUtilityAI.SelfOnlyAfterNamedActionEndConsideration
// Size: 0x38 (Inherited: 0x28)
struct USelfOnlyAfterNamedActionEndConsideration : UQualifierConsideration {
	struct FName Action; // 0x28(0x08)
	float WindowSize; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class BTUtilityAI.OptionActorDistanceToSelfConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorDistanceToSelfConsideration : UQualifierConsideration {
	float StartRangeOffset; // 0x28(0x04)
	float EndRangeOffset; // 0x2c(0x04)
};

// Class BTUtilityAI.OptionActorSightDistanceConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorSightDistanceConsideration : UQualifierConsideration {
	bool bUseLoseSightDistance; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class BTUtilityAI.OptionActorMaxPerceptionDistanceConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorMaxPerceptionDistanceConsideration : UQualifierConsideration {
};

// Class BTUtilityAI.OptionActorIsAClassConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsAClassConsideration : UQualifierConsideration {
	struct AActor* ActorClass; // 0x28(0x08)
};

// Class BTUtilityAI.SelfActorIsAClassConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfActorIsAClassConsideration : UQualifierConsideration {
	struct AActor* ActorClass; // 0x28(0x08)
};

// Class BTUtilityAI.SelfActoIsOverlappingOptionActorTrigger
// Size: 0x38 (Inherited: 0x28)
struct USelfActoIsOverlappingOptionActorTrigger : UQualifierConsideration {
	struct FString TriggerName; // 0x28(0x10)
};

// Class BTUtilityAI.OptionActorHasActorTagConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorHasActorTagConsideration : UQualifierConsideration {
	struct FName TagName; // 0x28(0x08)
};

// Class BTUtilityAI.SelfActorHasActorTagConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfActorHasActorTagConsideration : UQualifierConsideration {
	struct FName TagName; // 0x28(0x08)
};

// Class BTUtilityAI.SelfActorHasActorComponent
// Size: 0x38 (Inherited: 0x28)
struct USelfActorHasActorComponent : UQualifierConsideration {
	struct UActorComponent* ActorComponentClass; // 0x28(0x08)
	bool bInverseResult; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class BTUtilityAI.SelfBlackboardBool
// Size: 0x30 (Inherited: 0x28)
struct USelfBlackboardBool : UQualifierConsideration {
	struct FName BlackboardKeyName; // 0x28(0x08)
};

// Class BTUtilityAI.OptionActorBlackboardBool
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorBlackboardBool : UQualifierConsideration {
	struct FName BlackboardKeyName; // 0x28(0x08)
};

// Class BTUtilityAI.BTComposite_UtilitySelector
// Size: 0xf0 (Inherited: 0x90)
struct UBTComposite_UtilitySelector : UBTCompositeNode {
	char pad_90[0x8]; // 0x90(0x08)
	enum class EUtilitySelectionMethod SelectionMethod; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float WeightThreshold; // 0x9c(0x04)
	bool bIgnoreRank; // 0xa0(0x01)
	char pad_A1[0x4f]; // 0xa1(0x4f)
};

// Class BTUtilityAI.BTDecorator_IsTrackedErrorReported_Base
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_IsTrackedErrorReported_Base : UBTDecorator {
};

// Class BTUtilityAI.BTDecorator_IsTrackedErrorReported
// Size: 0xa8 (Inherited: 0x68)
struct UBTDecorator_IsTrackedErrorReported : UBTDecorator_IsTrackedErrorReported_Base {
	bool bUseName; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FName ErrorName; // 0x6c(0x08)
	bool bUseAccessory; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FBlackboardKeySelector AccessoryActorKey; // 0x78(0x28)
	bool bUseType; // 0xa0(0x01)
	enum class EUtilityTrackedErrorType ErrorType; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// Class BTUtilityAI.BTDecorator_UtilityQualifier
// Size: 0xe0 (Inherited: 0x68)
struct UBTDecorator_UtilityQualifier : UBTDecorator {
	char pad_68[0x8]; // 0x68(0x08)
	struct FName ActionName; // 0x70(0x08)
	struct TArray<struct FConsiderationWithDisplayName> Considerations; // 0x78(0x10)
	struct UQualifierOptions* QualifierOptions; // 0x88(0x08)
	struct TArray<struct FConsiderationWithDisplayName> OptionConsiderations; // 0x90(0x10)
	struct TArray<struct UQualifierTask*> QualifierTasks; // 0xa0(0x10)
	bool bRestartTreeOnOptionChange; // 0xb0(0x01)
	char pad_B1[0x2f]; // 0xb1(0x2f)
};

// Class BTUtilityAI.BTService_InvalidPathChecker
// Size: 0xb8 (Inherited: 0x70)
struct UBTService_InvalidPathChecker : UBTService {
	int32_t MaxChecksPerTick; // 0x70(0x04)
	float MaxCacheRefreshTime_Empty; // 0x74(0x04)
	float MaxCacheRefreshTime_Valid; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0x80(0x08)
	bool bDisallowPartial; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float ProjectionRadius; // 0x8c(0x04)
	float ProjectionHeight; // 0x90(0x04)
	char pad_94[0x24]; // 0x94(0x24)

	bool CanPath(struct AAIController* AIOwner, struct ANavigationData* NavData, struct FVector From, struct FVector To, struct UNavigationQueryFilter* QueryFilter, bool bAllowPartial, float ProjRadius, float ProjHeight); // Function BTUtilityAI.BTService_InvalidPathChecker.CanPath // (Final|Native|Static|Protected|HasDefaults|BlueprintCallable) // @ game+0x1f55700
};

// Class BTUtilityAI.BTService_MissingNavmeshChecker
// Size: 0xa8 (Inherited: 0x70)
struct UBTService_MissingNavmeshChecker : UBTService {
	struct FName ErrorName; // 0x70(0x08)
	float HorzRadius; // 0x78(0x04)
	float VertRadius; // 0x7c(0x04)
	struct FBlackboardKeySelector LastGoodNavLocKey; // 0x80(0x28)

	bool HasNavmesh(struct AAIController* AIOwner, struct ANavigationData* NavData, struct FVector Location, struct FVector Extent, struct FVector& OutLocation); // Function BTUtilityAI.BTService_MissingNavmeshChecker.HasNavmesh // (Final|Native|Static|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1f55d90
};

// Class BTUtilityAI.BTService_UtilityEvaluate
// Size: 0x70 (Inherited: 0x70)
struct UBTService_UtilityEvaluate : UBTService {
};

// Class BTUtilityAI.BTService_UtilityModify
// Size: 0x78 (Inherited: 0x70)
struct UBTService_UtilityModify : UBTService {
	bool bPauseUtilityEvaulation; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class BTUtilityAI.BTTask_ReportTrackedError
// Size: 0xc0 (Inherited: 0x70)
struct UBTTask_ReportTrackedError : UBTTaskNode {
	bool bUseCurrentActionAsError; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FName ErrorName; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FBlackboardKeySelector AccessoryKey; // 0x80(0x28)
	enum class EUtilityTrackedErrorType ErrorType; // 0xa8(0x01)
	bool bWaitForReset; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	float MinTimeout; // 0xac(0x04)
	bool bUseRangeTimeout; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float MaxTimeout; // 0xb4(0x04)
	enum class EBTNodeResult ReturnType; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class BTUtilityAI.BTTask_ResetTrackedError_Base
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_ResetTrackedError_Base : UBTTaskNode {
};

// Class BTUtilityAI.BTTask_ResetTrackedError
// Size: 0xb0 (Inherited: 0x70)
struct UBTTask_ResetTrackedError : UBTTask_ResetTrackedError_Base {
	bool bUseName; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FName ErrorName; // 0x74(0x08)
	bool bUseAccessory; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct FBlackboardKeySelector AccessoryActorKey; // 0x80(0x28)
	bool bUseType; // 0xa8(0x01)
	enum class EUtilityTrackedErrorType ErrorType; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
};

// Class BTUtilityAI.SelfCharacterMovementModeConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfCharacterMovementModeConsideration : UQualifierConsideration {
	enum class EMovementMode MovementMode; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class BTUtilityAI.OptionLocationDistanceToSelfConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionLocationDistanceToSelfConsideration : UQualifierConsideration {
	float StartRangeOffset; // 0x28(0x04)
	float EndRangeOffset; // 0x2c(0x04)
};

// Class BTUtilityAI.OptionLocationSightDistanceConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionLocationSightDistanceConsideration : UQualifierConsideration {
};

// Class BTUtilityAI.TuningConsideration
// Size: 0x38 (Inherited: 0x28)
struct UTuningConsideration : UQualifierConsideration {
	int32_t Rank; // 0x28(0x04)
	float Bonus; // 0x2c(0x04)
	float Multiplier; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class BTUtilityAI.ChainBonusAtMultiplierThresholdConsideration
// Size: 0x38 (Inherited: 0x28)
struct UChainBonusAtMultiplierThresholdConsideration : UQualifierConsideration {
	float Bonus; // 0x28(0x04)
	float MultiplierThreshold; // 0x2c(0x04)
	struct UQualifierConsideration* Consideration; // 0x30(0x08)
};

// Class BTUtilityAI.ChainOnlyWhenActiveConsideration
// Size: 0x30 (Inherited: 0x28)
struct UChainOnlyWhenActiveConsideration : UQualifierConsideration {
	struct UQualifierConsideration* Consideration; // 0x28(0x08)
};

// Class BTUtilityAI.ChainOnlyWhenInactiveConsideration
// Size: 0x30 (Inherited: 0x28)
struct UChainOnlyWhenInactiveConsideration : UQualifierConsideration {
	struct UQualifierConsideration* Consideration; // 0x28(0x08)
};

// Class BTUtilityAI.ChainOnlyWhenNamedActionIsActiveConsideration
// Size: 0x38 (Inherited: 0x28)
struct UChainOnlyWhenNamedActionIsActiveConsideration : UQualifierConsideration {
	struct FName NamedAction; // 0x28(0x08)
	struct UQualifierConsideration* Consideration; // 0x30(0x08)
};

// Class BTUtilityAI.ChainOnlyWhenNamedActionIsInactiveConsideration
// Size: 0x38 (Inherited: 0x28)
struct UChainOnlyWhenNamedActionIsInactiveConsideration : UQualifierConsideration {
	struct FName NamedAction; // 0x28(0x08)
	struct UQualifierConsideration* Consideration; // 0x30(0x08)
};

// Class BTUtilityAI.ChainActionActivityBranchConsideration
// Size: 0x58 (Inherited: 0x28)
struct UChainActionActivityBranchConsideration : UQualifierConsideration {
	struct FString WhenActiveDescription; // 0x28(0x10)
	struct UQualifierConsideration* ConsiderationWhenActive; // 0x38(0x08)
	struct FString WhenInactiveDescription; // 0x40(0x10)
	struct UQualifierConsideration* ConsiderationWhenInactive; // 0x50(0x08)
};

// Class BTUtilityAI.ChainNamedActionActivityBranchConsideration
// Size: 0x60 (Inherited: 0x28)
struct UChainNamedActionActivityBranchConsideration : UQualifierConsideration {
	struct FName NamedAction; // 0x28(0x08)
	struct FString WhenActiveDescription; // 0x30(0x10)
	struct UQualifierConsideration* ConsiderationWhenActive; // 0x40(0x08)
	struct FString WhenInactiveDescription; // 0x48(0x10)
	struct UQualifierConsideration* ConsiderationWhenInactive; // 0x58(0x08)
};

// Class BTUtilityAI.ChainEliminateScoreBelowActiveInactiveThresholdConsideration
// Size: 0x38 (Inherited: 0x28)
struct UChainEliminateScoreBelowActiveInactiveThresholdConsideration : UQualifierConsideration {
	float ThesholdWhenActive; // 0x28(0x04)
	float ThesholdWhenInactive; // 0x2c(0x04)
	struct UQualifierConsideration* Consideration; // 0x30(0x08)
};

// Class BTUtilityAI.ChainInvertMultiplierConsideration
// Size: 0x30 (Inherited: 0x28)
struct UChainInvertMultiplierConsideration : UQualifierConsideration {
	struct UQualifierConsideration* Consideration; // 0x28(0x08)
};

// Class BTUtilityAI.ChainCurveMapMultiplierConsideration
// Size: 0xb8 (Inherited: 0x28)
struct UChainCurveMapMultiplierConsideration : UQualifierConsideration {
	struct FRuntimeFloatCurve Curve; // 0x28(0x88)
	struct UQualifierConsideration* Consideration; // 0xb0(0x08)
};

// Class BTUtilityAI.ChainOverrideMultiplierConsideration
// Size: 0x38 (Inherited: 0x28)
struct UChainOverrideMultiplierConsideration : UQualifierConsideration {
	float MultiplierOverride; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UQualifierConsideration* Consideration; // 0x30(0x08)
};

// Class BTUtilityAI.ChainMultiplierCompareScoreOverrideConsideration
// Size: 0x80 (Inherited: 0x28)
struct UChainMultiplierCompareScoreOverrideConsideration : UQualifierConsideration {
	struct UQualifierConsideration* ConsiderationA; // 0x28(0x08)
	struct UQualifierConsideration* ConsiderationB; // 0x30(0x08)
	struct FScoreOverrideReturnConfiguration ALargerThanB; // 0x38(0x18)
	struct FScoreOverrideReturnConfiguration AEqualToB; // 0x50(0x18)
	struct FScoreOverrideReturnConfiguration ASmallerThanB; // 0x68(0x18)
};

// Class BTUtilityAI.ChainBranchOnMaxMultiplierConsideration
// Size: 0x38 (Inherited: 0x28)
struct UChainBranchOnMaxMultiplierConsideration : UQualifierConsideration {
	struct UQualifierConsideration* ConsiderationA; // 0x28(0x08)
	struct UQualifierConsideration* ConsiderationB; // 0x30(0x08)
};

// Class BTUtilityAI.ChainPickMaxMultiplierConsideration
// Size: 0x38 (Inherited: 0x28)
struct UChainPickMaxMultiplierConsideration : UQualifierConsideration {
	struct TArray<struct UQualifierConsideration*> Considerations; // 0x28(0x10)
};

// Class BTUtilityAI.ChainCombineConsideration
// Size: 0x40 (Inherited: 0x28)
struct UChainCombineConsideration : UQualifierConsideration {
	struct TArray<struct UQualifierConsideration*> Considerations; // 0x28(0x10)
	bool bCounterbalanceScoreDegradation; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class BTUtilityAI.ChainAtMultiplierThresholdConsideration
// Size: 0x40 (Inherited: 0x28)
struct UChainAtMultiplierThresholdConsideration : UQualifierConsideration {
	float MultiplierThreshold; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UQualifierConsideration* TestConsideration; // 0x30(0x08)
	struct UQualifierConsideration* ChainConsideration; // 0x38(0x08)
};

// Class BTUtilityAI.QualifierOptions
// Size: 0x28 (Inherited: 0x28)
struct UQualifierOptions : UObject {
};

// Class BTUtilityAI.BlackboardActorQualifierOptions
// Size: 0x50 (Inherited: 0x28)
struct UBlackboardActorQualifierOptions : UQualifierOptions {
	struct FBlackboardKeySelector ActorKey; // 0x28(0x28)
};

// Class BTUtilityAI.PerceivedActorsQualifierOptions
// Size: 0x28 (Inherited: 0x28)
struct UPerceivedActorsQualifierOptions : UQualifierOptions {
};

// Class BTUtilityAI.ActorsofClassWithinRangeQualifierOptions
// Size: 0x38 (Inherited: 0x28)
struct UActorsofClassWithinRangeQualifierOptions : UQualifierOptions {
	float Range; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct AActor* ActorType; // 0x30(0x08)
};

// Class BTUtilityAI.QualifierTask
// Size: 0x28 (Inherited: 0x28)
struct UQualifierTask : UObject {
};

// Class BTUtilityAI.CopySelfActorLocationToBlackboardQualifierTask
// Size: 0x50 (Inherited: 0x28)
struct UCopySelfActorLocationToBlackboardQualifierTask : UQualifierTask {
	struct FBlackboardKeySelector OutputLocationKey; // 0x28(0x28)
};

// Class BTUtilityAI.CopyOptionActorToBlackboardQualifierTask
// Size: 0x50 (Inherited: 0x28)
struct UCopyOptionActorToBlackboardQualifierTask : UQualifierTask {
	struct FBlackboardKeySelector OutputActorKey; // 0x28(0x28)
};

// Class BTUtilityAI.CopyOptionActorLocationToBlackboardQualifierTask
// Size: 0x50 (Inherited: 0x28)
struct UCopyOptionActorLocationToBlackboardQualifierTask : UQualifierTask {
	struct FBlackboardKeySelector OutputLocationKey; // 0x28(0x28)
};

// Class BTUtilityAI.CopyOptionLocationToBlackboardQualifierTask
// Size: 0x50 (Inherited: 0x28)
struct UCopyOptionLocationToBlackboardQualifierTask : UQualifierTask {
	struct FBlackboardKeySelector OutputLocationKey; // 0x28(0x28)
};

// Class BTUtilityAI.CopyBlackboardLocationToLocationQualifierTask
// Size: 0x78 (Inherited: 0x28)
struct UCopyBlackboardLocationToLocationQualifierTask : UQualifierTask {
	struct FBlackboardKeySelector FromLocationKey; // 0x28(0x28)
	struct FBlackboardKeySelector ToLocationKey; // 0x50(0x28)
};

// Class BTUtilityAI.CopyOptionActorChildLocationToBlackboardQualifierTask
// Size: 0x60 (Inherited: 0x28)
struct UCopyOptionActorChildLocationToBlackboardQualifierTask : UQualifierTask {
	struct FBlackboardKeySelector OutputLocationKey; // 0x28(0x28)
	struct FString ChildName; // 0x50(0x10)
};

// Class BTUtilityAI.SelfActorIsTrackedErrorReported_Base
// Size: 0x30 (Inherited: 0x28)
struct USelfActorIsTrackedErrorReported_Base : UQualifierConsideration {
	bool bUnreported; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class BTUtilityAI.SelfActorIsTrackedErrorReported
// Size: 0x40 (Inherited: 0x30)
struct USelfActorIsTrackedErrorReported : USelfActorIsTrackedErrorReported_Base {
	bool bUseName; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName ErrorName; // 0x34(0x08)
	bool bUseType; // 0x3c(0x01)
	enum class EUtilityTrackedErrorType ErrorType; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// Class BTUtilityAI.OptionActorIsTrackedErrorReported_Base
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsTrackedErrorReported_Base : UQualifierConsideration {
	bool bUnreported; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class BTUtilityAI.OptionActorIsTrackedErrorReported
// Size: 0x40 (Inherited: 0x30)
struct UOptionActorIsTrackedErrorReported : UOptionActorIsTrackedErrorReported_Base {
	bool bUseName; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName ErrorName; // 0x34(0x08)
	bool bUseType; // 0x3c(0x01)
	enum class EUtilityTrackedErrorType ErrorType; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// Class BTUtilityAI.UtilityContext
// Size: 0x118 (Inherited: 0x28)
struct UUtilityContext : UObject {
	struct AActor* SelfActor; // 0x28(0x08)
	struct UBehaviorTreeComponent* SelfBehaviorTree; // 0x30(0x08)
	struct UBlackboardComponent* SelfBlackboard; // 0x38(0x08)
	struct AActor* OptionActor; // 0x40(0x08)
	struct TArray<struct AActor*> OptionActors; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
	struct TArray<struct AActor*> PerceivedActors; // 0x68(0x10)
	char pad_78[0xa0]; // 0x78(0xa0)
};

// Class BTUtilityAI.UtilityContextProvider
// Size: 0x28 (Inherited: 0x28)
struct UUtilityContextProvider : UInterface {
};

// Class BTUtilityAI.UtilityScoreProvider
// Size: 0x28 (Inherited: 0x28)
struct UUtilityScoreProvider : UInterface {
};

// Class BTUtilityAI.UtilityTrackedErrorManager
// Size: 0x120 (Inherited: 0x28)
struct UUtilityTrackedErrorManager : UObject {
	char pad_28[0xf8]; // 0x28(0xf8)

	void ResetError_Type(struct AActor* InOwner, enum class EUtilityTrackedErrorType InType); // Function BTUtilityAI.UtilityTrackedErrorManager.ResetError_Type // (Final|Native|Public|BlueprintCallable) // @ game+0x1f56e20
	void ResetError_NameType(struct AActor* InOwner, struct FName InName, enum class EUtilityTrackedErrorType InType); // Function BTUtilityAI.UtilityTrackedErrorManager.ResetError_NameType // (Final|Native|Public|BlueprintCallable) // @ game+0x1f56d10
	void ResetError_NameAccessory(struct AActor* InOwner, struct FName InName, struct AActor* InAccessory); // Function BTUtilityAI.UtilityTrackedErrorManager.ResetError_NameAccessory // (Final|Native|Public|BlueprintCallable) // @ game+0x1f56c00
	void ResetError_Name(struct AActor* InOwner, struct FName InName); // Function BTUtilityAI.UtilityTrackedErrorManager.ResetError_Name // (Final|Native|Public|BlueprintCallable) // @ game+0x1f56b30
	void ResetError_AccessoryType(struct AActor* InOwner, struct AActor* InAccessory, enum class EUtilityTrackedErrorType InType); // Function BTUtilityAI.UtilityTrackedErrorManager.ResetError_AccessoryType // (Final|Native|Public|BlueprintCallable) // @ game+0x1f56a20
	void ResetError_Accessory(struct AActor* InOwner, struct AActor* InAccessory); // Function BTUtilityAI.UtilityTrackedErrorManager.ResetError_Accessory // (Final|Native|Public|BlueprintCallable) // @ game+0x1f56950
	void ResetError(struct AActor* InOwner, struct FName InName, struct AActor* InAccessory, enum class EUtilityTrackedErrorType InType); // Function BTUtilityAI.UtilityTrackedErrorManager.ResetError // (Final|Native|Public|BlueprintCallable) // @ game+0x1f567f0
	void ReportError(struct AActor* InOwner, struct FName InName, struct AActor* InAccessory, enum class EUtilityTrackedErrorType InType, float InTimeToReset); // Function BTUtilityAI.UtilityTrackedErrorManager.ReportError // (Final|Native|Public|BlueprintCallable) // @ game+0x1f56640
	bool IsReportedError_Type(struct AActor* InOwner, enum class EUtilityTrackedErrorType InType); // Function BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_Type // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f56570
	bool IsReportedError_NameType(struct AActor* InOwner, struct FName InName, enum class EUtilityTrackedErrorType InType); // Function BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_NameType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f56460
	bool IsReportedError_NameAccessory(struct AActor* InOwner, struct FName InName, struct AActor* InAccessory); // Function BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_NameAccessory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f56350
	bool IsReportedError_Name(struct AActor* InOwner, struct FName InName); // Function BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_Name // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f56280
	bool IsReportedError_AccessoryType(struct AActor* InOwner, struct AActor* InAccessory, enum class EUtilityTrackedErrorType InType); // Function BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_AccessoryType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f56170
	bool IsReportedError_Accessory(struct AActor* InOwner, struct AActor* InAccessory); // Function BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_Accessory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f560a0
	bool IsReportedError(struct AActor* InOwner, struct FName InName, struct AActor* InAccessory, enum class EUtilityTrackedErrorType InType); // Function BTUtilityAI.UtilityTrackedErrorManager.IsReportedError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f55f40
	bool GetAccessories_Type(struct AActor* InOwner, enum class EUtilityTrackedErrorType InType, struct TSet<struct AActor*>& OutAccessories); // Function BTUtilityAI.UtilityTrackedErrorManager.GetAccessories_Type // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f55bc0
	bool GetAccessories_NameType(struct AActor* InOwner, struct FName InName, enum class EUtilityTrackedErrorType InType, struct TSet<struct AActor*>& OutAccessories); // Function BTUtilityAI.UtilityTrackedErrorManager.GetAccessories_NameType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f559b0
	struct UUtilityTrackedErrorManager* Get(); // Function BTUtilityAI.UtilityTrackedErrorManager.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1f55980
};

