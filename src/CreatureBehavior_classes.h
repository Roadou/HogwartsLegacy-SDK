// Class CreatureBehavior.BTService_CentaurCombatAdjustSpeed
// Size: 0xa0 (Inherited: 0x70)
struct UBTService_CentaurCombatAdjustSpeed : UBTService {
	struct FBlackboardKeySelector MoveToLocationKey; // 0x70(0x28)
	float JogSprintDistanceThreshold; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class CreatureBehavior.BTTask_Centaur_TestTargetLOS
// Size: 0xa8 (Inherited: 0x70)
struct UBTTask_Centaur_TestTargetLOS : UBTTaskNode {
	struct FBlackboardKeySelector TargetActorKey; // 0x70(0x28)
	enum class ECollisionChannel LineOfSightProbeChannel; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float LineOfSightProbeSize; // 0x9c(0x04)
	bool bIgnoreEnemyHit; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class CreatureBehavior.SelfCentaurShouldRepositionConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCentaurShouldRepositionConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCentaurShouldTurnRepositionConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCentaurShouldTurnRepositionConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorCentaurRepositionTurnTargetConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorCentaurRepositionTurnTargetConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorCentaurAttackTargetConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorCentaurAttackTargetConsideration : UQualifierConsideration {
	struct FName AttackDescriptorName; // 0x28(0x08)
};

// Class CreatureBehavior.MarkCentaurAttackActiveQualifierTask
// Size: 0x30 (Inherited: 0x28)
struct UMarkCentaurAttackActiveQualifierTask : UQualifierTask {
	struct FName AttackDescriptorName; // 0x28(0x08)
};

// Class CreatureBehavior.CentaurCopyCombatTargetsQualifierTask
// Size: 0x30 (Inherited: 0x28)
struct UCentaurCopyCombatTargetsQualifierTask : UQualifierTask {
	float WeightThreshold; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class CreatureBehavior.CentaurCombatTargetsQualifierOptions
// Size: 0x28 (Inherited: 0x28)
struct UCentaurCombatTargetsQualifierOptions : UQualifierOptions {
};

// Class CreatureBehavior.SelfActorAttackPatternWeightConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfActorAttackPatternWeightConsideration : UQualifierConsideration {
	struct UCreatureCombatAttackData* AttackData; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorIsAttackPatternAvailableConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsAttackPatternAvailableConsideration : UQualifierConsideration {
	struct UCreatureCombatAttackData* AttackData; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorIsAttackAvailableConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsAttackAvailableConsideration : UQualifierConsideration {
	struct UCreatureCombatAttackData* AttackData; // 0x28(0x08)
};

// Class CreatureBehavior.SelfActorCreatureCombatStage
// Size: 0x30 (Inherited: 0x28)
struct USelfActorCreatureCombatStage : UQualifierConsideration {
	enum class EUtilityArithmeticOperation Operation; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t StageIndex; // 0x2c(0x04)
};

// Class CreatureBehavior.OptionActorInteractionTypeConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorInteractionTypeConsideration : UQualifierConsideration {
	struct FName WantedInteraction; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorContextAwareInteractionTypeConsideration
// Size: 0x38 (Inherited: 0x28)
struct UOptionActorContextAwareInteractionTypeConsideration : UQualifierConsideration {
	struct FName WantedInteraction; // 0x28(0x08)
	bool bConsiderActorDistance; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class CreatureBehavior.OptionActorIsPreferredToyConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsPreferredToyConsideration : UQualifierConsideration {
	float BonusForPreferredToy; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class CreatureBehavior.SelfIsHungryConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsHungryConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfHappinessIsEnoughToPlayConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfHappinessIsEnoughToPlayConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfHappinessPercentageConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfHappinessPercentageConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfActorIsDatabaseNameConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfActorIsDatabaseNameConsideration : UQualifierConsideration {
	struct FName DatabaseName; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorIsDatabaseNameConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsDatabaseNameConsideration : UQualifierConsideration {
	struct FName DatabaseName; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorIsBuffedConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsBuffedConsideration : UQualifierConsideration {
	struct FName EffectIDDBValue; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorIsPlayerWithActiveInventoryToolConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsPlayerWithActiveInventoryToolConsideration : UQualifierConsideration {
	struct ATool* ToolClass; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorIsPlayerWithActiveInventoryItemConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsPlayerWithActiveInventoryItemConsideration : UQualifierConsideration {
	struct FName ItemName; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorIsPlayerWithActiveInventoryItemCountConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsPlayerWithActiveInventoryItemCountConsideration : UQualifierConsideration {
	int32_t ItemCountMinimumScore; // 0x28(0x04)
	int32_t ItemCountMaximumScore; // 0x2c(0x04)
};

// Class CreatureBehavior.SelfCreatureTypeIsAlbinoConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCreatureTypeIsAlbinoConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfLazinessConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfLazinessConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfGrazingConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfGrazingConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfNocturnalConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfNocturnalConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfIsAwareConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsAwareConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorIsFeedingStationWithFeedAvailableConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorIsFeedingStationWithFeedAvailableConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorFeedingStationContentionConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorFeedingStationContentionConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfIsOffspringConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsOffspringConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfIsAdultConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsAdultConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorIsOffspringFollowTargetConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorIsOffspringFollowTargetConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorBonusForPreferedParentConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorBonusForPreferedParentConsideration : UQualifierConsideration {
	float BonusForParent; // 0x28(0x04)
	float BonusForMother; // 0x2c(0x04)
};

// Class CreatureBehavior.SelfActorCloseToOffspring
// Size: 0x30 (Inherited: 0x28)
struct USelfActorCloseToOffspring : UQualifierConsideration {
	float MaximumDistance; // 0x28(0x04)
	bool bOnlyCheckOwnOffspring; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class CreatureBehavior.OptionActorIsAliveConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorIsAliveConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfShouldGrowUpConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfShouldGrowUpConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorIsTaggedByGroupCoordinationConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsTaggedByGroupCoordinationConsideration : UQualifierConsideration {
	struct FName TagID; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorIsTaggedBySelfActorConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorIsTaggedBySelfActorConsideration : UQualifierConsideration {
	struct FName TagID; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorHasTaggedSelfActorConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorHasTaggedSelfActorConsideration : UQualifierConsideration {
	struct FName TagID; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorHasTaggedSelfActorInTimeWindowConsideration
// Size: 0x38 (Inherited: 0x28)
struct UOptionActorHasTaggedSelfActorInTimeWindowConsideration : UQualifierConsideration {
	struct FName TagID; // 0x28(0x08)
	float FalloffStart; // 0x30(0x04)
	float FalloffSize; // 0x34(0x04)
};

// Class CreatureBehavior.SelfActorIsTaggedByBlueprintActorConsideration
// Size: 0x58 (Inherited: 0x28)
struct USelfActorIsTaggedByBlueprintActorConsideration : UQualifierConsideration {
	struct FBlackboardKeySelector BlueprintActor; // 0x28(0x28)
	struct FName TagID; // 0x50(0x08)
};

// Class CreatureBehavior.SelfIsTaggedByGroupCoordinationConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfIsTaggedByGroupCoordinationConsideration : UQualifierConsideration {
	struct FName TagID; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorNumberOfTagsOfTypeGroupCoordinationConsideration
// Size: 0x38 (Inherited: 0x28)
struct UOptionActorNumberOfTagsOfTypeGroupCoordinationConsideration : UQualifierConsideration {
	struct FName TagID; // 0x28(0x08)
	int32_t MaxNumberOfTags; // 0x30(0x04)
	bool bIgnoreSelf; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class CreatureBehavior.OptionActorLastInteractionTimeConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorLastInteractionTimeConsideration : UQualifierConsideration {
	float WindowOffset; // 0x28(0x04)
	float WindowSize; // 0x2c(0x04)
};

// Class CreatureBehavior.OptionActorGreetTimeIntervalConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorGreetTimeIntervalConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorIsCapturingSelfActorConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorIsCapturingSelfActorConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfIsInConflictConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsInConflictConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorIsConflictTargetForSelfActorConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorIsConflictTargetForSelfActorConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCheckSpeciesTeamConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfCheckSpeciesTeamConsideration : UQualifierConsideration {
	struct FName Team; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorCheckSpeciesTeamConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorCheckSpeciesTeamConsideration : UQualifierConsideration {
	struct FName Team; // 0x28(0x08)
};

// Class CreatureBehavior.OptionActorCausedReactionOnSelfActorConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorCausedReactionOnSelfActorConsideration : UQualifierConsideration {
	float TimeWindowOffset; // 0x28(0x04)
	float TimeWindowSize; // 0x2c(0x04)
};

// Class CreatureBehavior.SelfIsInteractionNeedMetConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsInteractionNeedMetConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCanStartByproductProductionConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCanStartByproductProductionConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfIsByproductReadyConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsByproductReadyConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfIsCombatReadyConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsCombatReadyConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCanFlyConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCanFlyConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCanUsePerchesConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCanUsePerchesConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfIsFlyingConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsFlyingConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorIsFlyingConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorIsFlyingConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfIsPerchedConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsPerchedConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorIsPerchedConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorIsPerchedConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfActionEnergyConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfActionEnergyConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCanBeCapturedConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCanBeCapturedConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfIsCapturedConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsCapturedConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfIsPregnantConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsPregnantConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfIsEggConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfIsEggConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfTeamConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfTeamConsideration : UQualifierConsideration {
	struct FName Team; // 0x28(0x08)
};

// Class CreatureBehavior.SelfOnSurfaceConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfOnSurfaceConsideration : UQualifierConsideration {
	enum class EPhysicalSurface DesiredSurface; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class CreatureBehavior.SelfOnGrazingSurfaceConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfOnGrazingSurfaceConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfSurfaceMaxAngleConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfSurfaceMaxAngleConsideration : UQualifierConsideration {
	float MaxAngle; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class CreatureBehavior.SelfPitchAngleConsideration
// Size: 0x40 (Inherited: 0x28)
struct USelfPitchAngleConsideration : UQualifierConsideration {
	float MaxAngle; // 0x28(0x04)
	struct FName HeadBone; // 0x2c(0x08)
	struct FName PelvisBone; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class CreatureBehavior.OptionActorIsNurtureInteractGiverConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorIsNurtureInteractGiverConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorWithinNurtureInteractRangeConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorWithinNurtureInteractRangeConsideration : UQualifierConsideration {
	enum class ECreatureNurtureInteractRange NurtureInteractRange; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class CreatureBehavior.SelfHappinessLevel
// Size: 0x30 (Inherited: 0x28)
struct USelfHappinessLevel : UQualifierConsideration {
	enum class ECreatureHappinessLevel HappinessLevel; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class CreatureBehavior.SelfHerdingConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfHerdingConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCanHerdSleepConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCanHerdSleepConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCanHerdFleeConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCanHerdFleeConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorSameSpeciesConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorSameSpeciesConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorLocationWithinAreaFlagsConsideration
// Size: 0x30 (Inherited: 0x28)
struct UOptionActorLocationWithinAreaFlagsConsideration : UQualifierConsideration {
	enum class EAreaUsageFlagSelection AreaFlagSelection; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FOdcFlags CustomAreaFlags; // 0x2c(0x04)
};

// Class CreatureBehavior.OptionActorInsideCreaturePenConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorInsideCreaturePenConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.AnyPerchAvailableInRangeConsideration
// Size: 0x28 (Inherited: 0x28)
struct UAnyPerchAvailableInRangeConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfStationaryForNurtureInteractConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfStationaryForNurtureInteractConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCreatureWantsNurturingConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCreatureWantsNurturingConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCreatureCirclingConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCreatureCirclingConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCreaturePerchingConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCreaturePerchingConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCreatureFleeFlyingConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfCreatureFleeFlyingConsideration : UQualifierConsideration {
	enum class ECreatureFleeFlyingOption FleeFlyingOption; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class CreatureBehavior.OptionActorCombatTetherConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorCombatTetherConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfActorWaterDepthConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfActorWaterDepthConsideration : UQualifierConsideration {
	float MinDepth; // 0x28(0x04)
	float MaxDepth; // 0x2c(0x04)
};

// Class CreatureBehavior.SelfActorIsInWaterConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfActorIsInWaterConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCreatureFlyOutOfWaterConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCreatureFlyOutOfWaterConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCreatureRelaxStanceConsideration
// Size: 0x30 (Inherited: 0x28)
struct USelfCreatureRelaxStanceConsideration : UQualifierConsideration {
	enum class ECreatureStance Stance; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class CreatureBehavior.SelfActorIsOverlappingCreaturePenOptionActor
// Size: 0x28 (Inherited: 0x28)
struct USelfActorIsOverlappingCreaturePenOptionActor : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCreatureGroomOrLookAroundConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCreatureGroomOrLookAroundConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCreatureGroomingConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCreatureGroomingConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCreatureCanForageConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCreatureCanForageConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.SelfCreatureIsBeingInspectedConsideration
// Size: 0x28 (Inherited: 0x28)
struct USelfCreatureIsBeingInspectedConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionActorIsPlayerCharacterConsideration
// Size: 0x28 (Inherited: 0x28)
struct UOptionActorIsPlayerCharacterConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.OptionCharacterIsOverlappingSelfCreature
// Size: 0x30 (Inherited: 0x28)
struct UOptionCharacterIsOverlappingSelfCreature : UQualifierConsideration {
	float SelfCreatureCapsuleRadiusMultiplier; // 0x28(0x04)
	float OptionCharacterCapsuleRadiusMultiplier; // 0x2c(0x04)
};

// Class CreatureBehavior.TransfigurationActorsQualifierOptions
// Size: 0x28 (Inherited: 0x28)
struct UTransfigurationActorsQualifierOptions : UQualifierOptions {
};

// Class CreatureBehavior.GroupCoordinatedTagLocationsQualifierOptions
// Size: 0x60 (Inherited: 0x28)
struct UGroupCoordinatedTagLocationsQualifierOptions : UQualifierOptions {
	struct FName TagID; // 0x28(0x08)
	float SearchRadius; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FBlackboardKeySelector SearchAreaCentreKey; // 0x38(0x28)
};

// Class CreatureBehavior.GroupCoordinatedActorTagOwnersOptions
// Size: 0x60 (Inherited: 0x28)
struct UGroupCoordinatedActorTagOwnersOptions : UQualifierOptions {
	struct TArray<struct FName> TagIDs; // 0x28(0x10)
	struct FBlackboardKeySelector SubjectToCheck; // 0x38(0x28)
};

// Class CreatureBehavior.PlayWithLeapingToadstoolStatQualifierTask
// Size: 0x28 (Inherited: 0x28)
struct UPlayWithLeapingToadstoolStatQualifierTask : UQualifierTask {
};

// Class CreatureBehavior.ManageActionEnergyQualifierTask
// Size: 0x30 (Inherited: 0x28)
struct UManageActionEnergyQualifierTask : UQualifierTask {
	float EnergyBurnTime; // 0x28(0x04)
	float EnergyResetTime; // 0x2c(0x04)
};

// Class CreatureBehavior.WorldNightDayConsideration
// Size: 0x28 (Inherited: 0x28)
struct UWorldNightDayConsideration : UQualifierConsideration {
};

// Class CreatureBehavior.WorldMoonPhaseConsideration
// Size: 0x30 (Inherited: 0x28)
struct UWorldMoonPhaseConsideration : UQualifierConsideration {
	enum class ESchedulerMoonPhase DesiredMoonPhase; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

