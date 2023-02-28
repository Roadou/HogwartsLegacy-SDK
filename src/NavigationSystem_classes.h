// Class NavigationSystem.NavigationData
// Size: 0x450 (Inherited: 0x248)
struct ANavigationData : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	struct UPrimitiveComponent* RenderingComp; // 0x250(0x08)
	struct FNavDataConfig NavDataConfig; // 0x258(0x78)
	char bEnableDrawing : 1; // 0x2d0(0x01)
	char bForceRebuildOnLoad : 1; // 0x2d0(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x2d0(0x01)
	char bCanBeMainNavData : 1; // 0x2d0(0x01)
	char bCanSpawnOnRebuild : 1; // 0x2d0(0x01)
	char bRebuildAtRuntime : 1; // 0x2d0(0x01)
	char pad_2D0_6 : 2; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	float ObservedPathsTickInterval; // 0x2d8(0x04)
	uint32_t DataVersion; // 0x2dc(0x04)
	char pad_2E0[0x108]; // 0x2e0(0x108)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x3e8(0x10)
	char pad_3F8[0x58]; // 0x3f8(0x58)
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xc8(0x04)
	float TileRemovalRadius; // 0xcc(0x04)
};

// Class NavigationSystem.NavArea
// Size: 0x48 (Inherited: 0x30)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x30(0x04)
	float FixedAreaEnteringCost; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x3c(0x04)
	char bSupportsAgent0 : 1; // 0x40(0x01)
	char bSupportsAgent1 : 1; // 0x40(0x01)
	char bSupportsAgent2 : 1; // 0x40(0x01)
	char bSupportsAgent3 : 1; // 0x40(0x01)
	char bSupportsAgent4 : 1; // 0x40(0x01)
	char bSupportsAgent5 : 1; // 0x40(0x01)
	char bSupportsAgent6 : 1; // 0x40(0x01)
	char bSupportsAgent7 : 1; // 0x40(0x01)
	char bSupportsAgent8 : 1; // 0x41(0x01)
	char bSupportsAgent9 : 1; // 0x41(0x01)
	char bSupportsAgent10 : 1; // 0x41(0x01)
	char bSupportsAgent11 : 1; // 0x41(0x01)
	char bSupportsAgent12 : 1; // 0x41(0x01)
	char bSupportsAgent13 : 1; // 0x41(0x01)
	char bSupportsAgent14 : 1; // 0x41(0x01)
	char bSupportsAgent15 : 1; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class NavigationSystem.NavigationSystemV1
// Size: 0x15e0 (Inherited: 0x28)
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; // 0x28(0x08)
	struct ANavigationData* AbstractNavData; // 0x30(0x08)
	struct FName DefaultAgentName; // 0x38(0x08)
	struct TSoftClassPtr<UObject> CrowdManagerClass; // 0x40(0x28)
	char bAutoCreateNavigationData : 1; // 0x68(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x01)
	char bAllowClientSideNavigation : 1; // 0x68(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x68(0x01)
	char bTickWhilePaused : 1; // 0x68(0x01)
	char bSupportRebuilding : 1; // 0x68(0x01)
	char bInitialBuildingLocked : 1; // 0x68(0x01)
	char pad_68_7 : 1; // 0x68(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69(0x01)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x69(0x01)
	char pad_69_2 : 6; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float ActiveTilesUpdateInterval; // 0x6c(0x04)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float DirtyAreaWarningSizeThreshold; // 0x74(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x78(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct ANavigationData*> NavDataSet; // 0x90(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xd0(0x10)
	char pad_E0[0xdc]; // 0xe0(0xdc)
	enum class FNavigationSystemRunMode OperationMode; // 0x1bc(0x01)
	char pad_1BD[0x13ff]; // 0x1bd(0x13ff)
	float DirtyAreasUpdateFreq; // 0x15bc(0x04)
	char pad_15C0[0x20]; // 0x15c0(0x20)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x5ae8b90
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5ae8ad0
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5a06ac0
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x5ae8a40
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode // (Final|Native|Public|BlueprintCallable) // @ game+0x5ae89c0
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x5ae89a0
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x5ae8890
	struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5ae86a0
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated // (Final|Native|Public|BlueprintCallable) // @ game+0x5ae8610
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5ae83e0
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData // (Final|Native|Public|BlueprintCallable) // @ game+0x5ae82d0
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5ae80d0
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5ae7eb0
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5ae7c90
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5ae7c90
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5ae7ba0
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5ae7b10
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5ae7930
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5ae7750
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5ae7520
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5ae72c0
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5ae7200
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5ae6fb0
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5ae6da0
};

// Class NavigationSystem.CrowdManagerBase
// Size: 0x28 (Inherited: 0x28)
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.AbstractNavData
// Size: 0x450 (Inherited: 0x450)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.NavArea_Default
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x48 (Inherited: 0x48)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xc8 (Inherited: 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UNavArea* Agent0Area; // 0x48(0x08)
	struct UNavArea* Agent1Area; // 0x50(0x08)
	struct UNavArea* Agent2Area; // 0x58(0x08)
	struct UNavArea* Agent3Area; // 0x60(0x08)
	struct UNavArea* Agent4Area; // 0x68(0x08)
	struct UNavArea* Agent5Area; // 0x70(0x08)
	struct UNavArea* Agent6Area; // 0x78(0x08)
	struct UNavArea* Agent7Area; // 0x80(0x08)
	struct UNavArea* Agent8Area; // 0x88(0x08)
	struct UNavArea* Agent9Area; // 0x90(0x08)
	struct UNavArea* Agent10Area; // 0x98(0x08)
	struct UNavArea* Agent11Area; // 0xa0(0x08)
	struct UNavArea* Agent12Area; // 0xa8(0x08)
	struct UNavArea* Agent13Area; // 0xb0(0x08)
	struct UNavArea* Agent14Area; // 0xb8(0x08)
	struct UNavArea* Agent15Area; // 0xc0(0x08)
};

// Class NavigationSystem.NavCollision
// Size: 0xd8 (Inherited: 0x70)
struct UNavCollision : UNavCollisionBase {
	char pad_70[0x10]; // 0x70(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x80(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x90(0x10)
	struct UNavArea* AreaClass; // 0xa0(0x08)
	char bGatherConvexGeometry : 1; // 0xa8(0x01)
	char bCreateOnClient : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x2f]; // 0xa9(0x2f)
};

// Class NavigationSystem.NavigationGraph
// Size: 0x450 (Inherited: 0x450)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x248 (Inherited: 0x248)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x240 (Inherited: 0x220)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x218(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x230(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x238(0x08)
};

// Class NavigationSystem.NavigationPath
// Size: 0x88 (Inherited: 0x28)
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints; // 0x38(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x48(0x01)
	char pad_49[0x3f]; // 0x49(0x3f)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ae7c60
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8aa0
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ae7c30
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ae74f0
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ae7290
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ae7180
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation // (Final|Native|Public|BlueprintCallable) // @ game+0x5ae6d20
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5ae6c40
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x28 (Inherited: 0x28)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationQueryFilter
// Size: 0x48 (Inherited: 0x28)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x28(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x38(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x58 (Inherited: 0x50)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50(0x01)
	char bCreateOnClient : 1; // 0x50(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x50(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50(0x01)
	char pad_50_4 : 4; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x338 (Inherited: 0x248)
struct ANavigationTestingActor : AActor {
	char pad_248[0x10]; // 0x248(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x258(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x260(0x08)
	char bActAsNavigationInvoker : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FNavAgentProperties NavAgentProps; // 0x270(0x30)
	struct FVector QueryingExtent; // 0x2a0(0x0c)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct ANavigationData* MyNavData; // 0x2b0(0x08)
	struct FVector ProjectedLocation; // 0x2b8(0x0c)
	char bProjectedLocationValid : 1; // 0x2c4(0x01)
	char bSearchStart : 1; // 0x2c4(0x01)
	char pad_2C4_2 : 6; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	float CostLimitFactor; // 0x2c8(0x04)
	float MinimumCostLimit; // 0x2cc(0x04)
	char bBacktracking : 1; // 0x2d0(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x2d0(0x01)
	char bGatherDetailedInfo : 1; // 0x2d0(0x01)
	char bDrawDistanceToWall : 1; // 0x2d0(0x01)
	char bShowNodePool : 1; // 0x2d0(0x01)
	char bShowBestPath : 1; // 0x2d0(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x2d0(0x01)
	char bShouldBeVisibleInGame : 1; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	enum class ENavCostDisplay CostDisplayMode; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct FVector2D TextCanvasOffset; // 0x2d8(0x08)
	char bPathExist : 1; // 0x2e0(0x01)
	char bPathIsPartial : 1; // 0x2e0(0x01)
	char bPathSearchOutOfNodes : 1; // 0x2e0(0x01)
	char pad_2E0_3 : 5; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float PathfindingTime; // 0x2e4(0x04)
	float PathCost; // 0x2e8(0x04)
	int32_t PathfindingSteps; // 0x2ec(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x2f0(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x2f8(0x08)
	int32_t ShowStepIndex; // 0x300(0x04)
	float OffsetFromCornersDistance; // 0x304(0x04)
	char pad_308[0x30]; // 0x308(0x30)
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x4a0 (Inherited: 0x480)
struct UNavLinkComponent : UPrimitiveComponent {
	char pad_480[0x8]; // 0x480(0x08)
	struct TArray<struct FNavigationLink> Links; // 0x488(0x10)
	char pad_498[0x8]; // 0x498(0x08)
};

// Class NavigationSystem.NavRelevantComponent
// Size: 0xf8 (Inherited: 0xc8)
struct UNavRelevantComponent : UActorComponent {
	char pad_C8[0x24]; // 0xc8(0x24)
	char bAttachToOwnersRoot : 1; // 0xec(0x01)
	char pad_EC_1 : 7; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct UObject* CachedNavParent; // 0xf0(0x08)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy // (Final|Native|Public|BlueprintCallable) // @ game+0x5aeaba0
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x1a8 (Inherited: 0xf8)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	char pad_F8[0x8]; // 0xf8(0x08)
	uint32_t NavLinkUserId; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct UNavArea* EnabledAreaClass; // 0x108(0x08)
	struct UNavArea* DisabledAreaClass; // 0x110(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x118(0x04)
	struct FVector LinkRelativeStart; // 0x11c(0x0c)
	struct FVector LinkRelativeEnd; // 0x128(0x0c)
	enum class ENavLinkDirection LinkDirection; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	char bLinkEnabled : 1; // 0x138(0x01)
	char bNotifyWhenEnabled : 1; // 0x138(0x01)
	char bNotifyWhenDisabled : 1; // 0x138(0x01)
	char bCreateBoxObstacle : 1; // 0x138(0x01)
	char pad_138_4 : 4; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FVector ObstacleOffset; // 0x13c(0x0c)
	struct FVector ObstacleExtent; // 0x148(0x0c)
	char pad_154[0x4]; // 0x154(0x04)
	struct UNavArea* ObstacleAreaClass; // 0x158(0x08)
	float BroadcastRadius; // 0x160(0x04)
	float BroadcastInterval; // 0x164(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x168(0x01)
	char pad_169[0x3f]; // 0x169(0x3f)
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x480 (Inherited: 0x480)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x50 (Inherited: 0x50)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x288 (Inherited: 0x280)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x490 (Inherited: 0x480)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char pad_480[0x10]; // 0x480(0x10)
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x160 (Inherited: 0xf8)
struct UNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; // 0xf8(0x08)
	struct FVector FailsafeExtent; // 0x100(0x0c)
	char bIncludeAgentHeight : 1; // 0x10c(0x01)
	char pad_10C_1 : 7; // 0x10c(0x01)
	char pad_10D[0x53]; // 0x10d(0x53)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x5aeab10
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x298 (Inherited: 0x280)
struct ANavModifierVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	struct UNavArea* AreaClass; // 0x288(0x08)
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x5aeaa80
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x258 (Inherited: 0x248)
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x248(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x250(0x01)
	char bLoadOnClient : 1; // 0x251(0x01)
	char pad_251_1 : 7; // 0x251(0x01)
	char pad_252[0x6]; // 0x252(0x06)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x480 (Inherited: 0x480)
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x48 (Inherited: 0x48)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x500 (Inherited: 0x450)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x450(0x01)
	char bDrawPolyEdges : 1; // 0x450(0x01)
	char bDrawFilledPolys : 1; // 0x450(0x01)
	char bDrawNavMeshEdges : 1; // 0x450(0x01)
	char bDrawTileBounds : 1; // 0x450(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x450(0x01)
	char bDrawTileLabels : 1; // 0x450(0x01)
	char bDrawPolygonLabels : 1; // 0x450(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x451(0x01)
	char bDrawPolygonFlags : 1; // 0x451(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x451(0x01)
	char bDrawNavLinks : 1; // 0x451(0x01)
	char bDrawFailedNavLinks : 1; // 0x451(0x01)
	char bDrawClusters : 1; // 0x451(0x01)
	char bDrawOctree : 1; // 0x451(0x01)
	char bDrawOctreeDetails : 1; // 0x451(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x452(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x452(0x01)
	char pad_452_2 : 6; // 0x452(0x01)
	char pad_453[0x1]; // 0x453(0x01)
	float DrawOffset; // 0x454(0x04)
	char bFixedTilePoolSize : 1; // 0x458(0x01)
	char pad_458_1 : 7; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	int32_t TilePoolSize; // 0x45c(0x04)
	float TileSizeUU; // 0x460(0x04)
	float CellSize; // 0x464(0x04)
	float CellHeight; // 0x468(0x04)
	float AgentRadius; // 0x46c(0x04)
	float AgentHeight; // 0x470(0x04)
	float AgentMaxSlope; // 0x474(0x04)
	float AgentMaxStepHeight; // 0x478(0x04)
	float MinRegionArea; // 0x47c(0x04)
	float MergeRegionSize; // 0x480(0x04)
	float MaxSimplificationError; // 0x484(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x488(0x04)
	int32_t TileNumberHardLimit; // 0x48c(0x04)
	int32_t PolyRefTileBits; // 0x490(0x04)
	int32_t PolyRefNavPolyBits; // 0x494(0x04)
	int32_t PolyRefSaltBits; // 0x498(0x04)
	struct FVector NavMeshOriginOffset; // 0x49c(0x0c)
	float DefaultDrawDistance; // 0x4a8(0x04)
	float DefaultMaxSearchNodes; // 0x4ac(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x4b0(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x4b4(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x4b5(0x01)
	char pad_4B6[0x2]; // 0x4b6(0x02)
	int32_t RegionChunkSplits; // 0x4b8(0x04)
	int32_t LayerChunkSplits; // 0x4bc(0x04)
	char bSortNavigationAreasByCost : 1; // 0x4c0(0x01)
	char bPerformVoxelFiltering : 1; // 0x4c0(0x01)
	char bMarkLowHeightAreas : 1; // 0x4c0(0x01)
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x4c0(0x01)
	char bFilterLowSpanSequences : 1; // 0x4c0(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x4c0(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x4c0(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x4c0(0x01)
	char bStoreEmptyTileLayers : 1; // 0x4c1(0x01)
	char bUseVirtualFilters : 1; // 0x4c1(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x4c1(0x01)
	char bUseVoxelCache : 1; // 0x4c1(0x01)
	char pad_4C1_4 : 4; // 0x4c1(0x01)
	char pad_4C2[0x2]; // 0x4c2(0x02)
	float TileSetUpdateInterval; // 0x4c4(0x04)
	float HeuristicScale; // 0x4c8(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x4cc(0x04)
	char pad_4D0[0x30]; // 0x4d0(0x30)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5aea8e0
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x40 (Inherited: 0x30)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	char pad_30[0x10]; // 0x30(0x10)
};

