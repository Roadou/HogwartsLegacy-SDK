// Class Mercuna.BTTask_Mercuna_MoveTo
// Size: 0xa8 (Inherited: 0x98)
struct UBTTask_Mercuna_MoveTo : UBTTask_BlackboardBase {
	float Speed; // 0x98(0x04)
	float EndDistance; // 0x9c(0x04)
	char bObserveBlackboardValue : 1; // 0xa0(0x01)
	char bAllowPartialPath : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Mercuna.MercunaNavigationComponent
// Size: 0x148 (Inherited: 0xc8)
struct UMercunaNavigationComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMoveCompleted; // 0xc8(0x10)
	struct FMercunaNavigationConfiguration Configuration; // 0xd8(0x20)
	struct AMercunaNavOctree* NavOctree; // 0xf8(0x08)
	bool Pathfinding; // 0x100(0x01)
	bool DynamicAvoidance; // 0x101(0x01)
	char pad_102[0x2]; // 0x102(0x02)
	struct FMercunaPawnUsageFlags UsageFlags; // 0x104(0x08)
	char pad_10C[0x3c]; // 0x10c(0x3c)

	void TrackActor(struct AActor* Actor, float Distance, float Speed, bool SkipCheckNav); // Function Mercuna.MercunaNavigationComponent.TrackActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab4d40
	void Stop(); // Function Mercuna.MercunaNavigationComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab4d20
	void SetUsageFlags(struct FMercunaPawnUsageFlags& UsageFlags); // Function Mercuna.MercunaNavigationComponent.SetUsageFlags // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1ab4c00
	void SetNavOctree(struct AMercunaNavOctree* NavOctree); // Function Mercuna.MercunaNavigationComponent.SetNavOctree // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab4a50
	void SetEnabled(bool bEnable); // Function Mercuna.MercunaNavigationComponent.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab4850
	void SetAvoidanceAgainst(struct AActor* Actor, bool Enable); // Function Mercuna.MercunaNavigationComponent.SetAvoidanceAgainst // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab4670
	void ResumeNavigation(); // Function Mercuna.MercunaNavigationComponent.ResumeNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab4650
	void PauseNavigation(); // Function Mercuna.MercunaNavigationComponent.PauseNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab4200
	void MoveToLocations(struct TArray<struct FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath, bool SkipCheckNav); // Function Mercuna.MercunaNavigationComponent.MoveToLocations // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1ab3e80
	void MoveToLocation(struct FVector& Destination, float EndDistance, float Speed, bool UsePartialPath, bool SkipCheckNav); // Function Mercuna.MercunaNavigationComponent.MoveToLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ab3cc0
	void MoveToActor(struct AActor* Actor, float EndDistance, float Speed, bool UsePartialPath, bool SkipCheckNav); // Function Mercuna.MercunaNavigationComponent.MoveToActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab3b20
	void MercunaMoveComplete__DelegateSignature(struct FAIRequestID RequestID, enum class EMercunaMoveResult Result); // DelegateFunction Mercuna.MercunaNavigationComponent.MercunaMoveComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	void LookInDirection(struct FVector Direction, float MaxPitch); // Function Mercuna.MercunaNavigationComponent.LookInDirection // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab32e0
	void LookAt(struct AActor* Actor, float MaxPitch); // Function Mercuna.MercunaNavigationComponent.LookAt // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab3210
	void IsReachable(struct FVector Point, bool& Success, struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function Mercuna.MercunaNavigationComponent.IsReachable // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ab2ed0
	void GetPathInfo(bool& Valid, float& DistanceToEnd, struct FVector& NextPathPoint, bool& bIsFinalPoint); // Function Mercuna.MercunaNavigationComponent.GetPathInfo // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ab28f0
	struct AMercunaNavOctree* GetNavOctree(); // Function Mercuna.MercunaNavigationComponent.GetNavOctree // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab28d0
	void ConfigureMovement(bool bUsePathfinding, bool bUseDynamicAvoidance); // Function Mercuna.MercunaNavigationComponent.ConfigureMovement // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab2200
	void Configure(struct FMercunaNavigationConfiguration& NewConfiguration); // Function Mercuna.MercunaNavigationComponent.Configure // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1ab2130
	void ClearAvoidanceExclusions(); // Function Mercuna.MercunaNavigationComponent.ClearAvoidanceExclusions // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab2110
	void CheckReachable(struct FVector Point, bool& Success, struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function Mercuna.MercunaNavigationComponent.CheckReachable // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ab1d90
	void CancelMovement(); // Function Mercuna.MercunaNavigationComponent.CancelMovement // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab1bb0
	void CancelLookAt(); // Function Mercuna.MercunaNavigationComponent.CancelLookAt // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab1b90
	void AddDestinationLocation(struct FVector NextDestination); // Function Mercuna.MercunaNavigationComponent.AddDestinationLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab1a50
};

// Class Mercuna.BTDecorator_Mercuna_Reachable
// Size: 0xc0 (Inherited: 0x68)
struct UBTDecorator_Mercuna_Reachable : UBTDecorator {
	struct FBlackboardKeySelector Source; // 0x68(0x28)
	struct FBlackboardKeySelector Destination; // 0x90(0x28)
	float MaxPathLength; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Mercuna.EnvQueryGenerator_Mercuna_Sphere
// Size: 0x140 (Inherited: 0x50)
struct UEnvQueryGenerator_Mercuna_Sphere : UEnvQueryGenerator {
	struct FAIDataProviderFloatValue InnerRadius; // 0x50(0x38)
	struct FAIDataProviderFloatValue OuterRadius; // 0x88(0x38)
	struct FAIDataProviderIntValue NumberOfShells; // 0xc0(0x38)
	struct FAIDataProviderIntValue PointsPerShell; // 0xf8(0x38)
	enum class EMercunaPointDistribution Distribution; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct UEnvQueryContext* Center; // 0x138(0x08)
};

// Class Mercuna.EnvQueryGenerator_Mercuna_3DRing
// Size: 0x1e0 (Inherited: 0x50)
struct UEnvQueryGenerator_Mercuna_3DRing : UEnvQueryGenerator {
	struct FAIDataProviderFloatValue InnerRadius; // 0x50(0x38)
	struct FAIDataProviderFloatValue OuterRadius; // 0x88(0x38)
	struct FAIDataProviderIntValue NumberOfRings; // 0xc0(0x38)
	struct FAIDataProviderIntValue PointsPerRing; // 0xf8(0x38)
	struct FAIDataProviderFloatValue MinHeight; // 0x130(0x38)
	struct FAIDataProviderFloatValue MaxHeight; // 0x168(0x38)
	struct FAIDataProviderIntValue NumberOfLayers; // 0x1a0(0x38)
	struct UEnvQueryContext* Center; // 0x1d8(0x08)
};

// Class Mercuna.MercunaQueryTest
// Size: 0x1f8 (Inherited: 0x1f8)
struct UMercunaQueryTest : UEnvQueryTest {
};

// Class Mercuna.EnvQueryTest_Mercuna_NavigableVolume
// Size: 0x1f8 (Inherited: 0x1f8)
struct UEnvQueryTest_Mercuna_NavigableVolume : UMercunaQueryTest {
};

// Class Mercuna.EnvQueryTest_Mercuna_Reachable
// Size: 0x238 (Inherited: 0x1f8)
struct UEnvQueryTest_Mercuna_Reachable : UMercunaQueryTest {
	struct FAIDataProviderFloatValue MaxPathLength; // 0x1f8(0x38)
	struct UEnvQueryContext* Context; // 0x230(0x08)
};

// Class Mercuna.EnvQueryTest_Mercuna_NavRaycast
// Size: 0x200 (Inherited: 0x1f8)
struct UEnvQueryTest_Mercuna_NavRaycast : UMercunaQueryTest {
	struct UEnvQueryContext* Context; // 0x1f8(0x08)
};

// Class Mercuna.EnvQueryTest_Mercuna_Project
// Size: 0x230 (Inherited: 0x1f8)
struct UEnvQueryTest_Mercuna_Project : UMercunaQueryTest {
	struct FAIDataProviderFloatValue MaxSearchRadius; // 0x1f8(0x38)
};

// Class Mercuna.MercunaNavExclusionVolume
// Size: 0x298 (Inherited: 0x280)
struct AMercunaNavExclusionVolume : AVolume {
	bool bApplyToAllNavOctrees; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TArray<struct AMercunaNavOctree*> NavOctrees; // 0x288(0x10)
};

// Class Mercuna.MercunaMoveToProxy
// Size: 0xa0 (Inherited: 0x30)
struct UMercunaMoveToProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	void OnMoveComplete(struct FAIRequestID RequestID, enum class EMercunaMoveResult Result); // Function Mercuna.MercunaMoveToProxy.OnMoveComplete // (Final|Native|Private) // @ game+0x1ab4060
	struct UMercunaMoveToProxy* MercunaMoveToLocations(struct UObject* WorldContextObject, struct APawn*& Pawn, struct TArray<struct FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath); // Function Mercuna.MercunaMoveToProxy.MercunaMoveToLocations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1ab3790
	struct UMercunaMoveToProxy* MercunaMoveToLocation(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector& Destination, float EndDistance, float Speed, bool UsePartialPath); // Function Mercuna.MercunaMoveToProxy.MercunaMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ab3590
	struct UMercunaMoveToProxy* MercunaMoveToActor(struct UObject* WorldContextObject, struct APawn* Pawn, struct AActor* Actor, float EndDistance, float Speed, bool UsePartialPath); // Function Mercuna.MercunaMoveToProxy.MercunaMoveToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ab33c0
};

// Class Mercuna.MercunaTrackActorProxy
// Size: 0x68 (Inherited: 0x30)
struct UMercunaTrackActorProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnFailure; // 0x30(0x10)
	char pad_40[0x28]; // 0x40(0x28)

	void OnMoveComplete(struct FAIRequestID RequestID, enum class EMercunaMoveResult Result); // Function Mercuna.MercunaTrackActorProxy.OnMoveComplete // (Final|Native|Private) // @ game+0x1ab4130
	struct UMercunaTrackActorProxy* MercunaTrackActor(struct UObject* WorldContextObject, struct APawn* Pawn, struct AActor* Actor, float Distance, float Speed); // Function Mercuna.MercunaTrackActorProxy.MercunaTrackActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ab3990
};

// Class Mercuna.MercunaNavModifierVolume
// Size: 0x298 (Inherited: 0x280)
struct AMercunaNavModifierVolume : AVolume {
	bool bEnabled; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float CostMultiplier; // 0x284(0x04)
	float CostMultipler; // 0x288(0x04)
	struct FMercunaNavUsageTypes UsageTypes; // 0x28c(0x04)
	struct AMercunaNavOctree* NavOctree; // 0x290(0x08)

	void SetUsageTypes(struct FMercunaNavUsageTypes& NewUsageTypes); // Function Mercuna.MercunaNavModifierVolume.SetUsageTypes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1ab4c90
	void SetSize(struct FVector Size); // Function Mercuna.MercunaNavModifierVolume.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab4b70
	void SetLocationAndSize(struct FVector Location, struct FVector Size); // Function Mercuna.MercunaNavModifierVolume.SetLocationAndSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab4970
	void SetLocation(struct FVector Location); // Function Mercuna.MercunaNavModifierVolume.SetLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab48e0
	void SetEnabled(bool Enabled); // Function Mercuna.MercunaNavModifierVolume.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab47c0
	void SetCostMultiplier(float NewCostMultiplier); // Function Mercuna.MercunaNavModifierVolume.SetCostMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab4740
	void AddToOctree(struct AMercunaNavOctree* NavOctree); // Function Mercuna.MercunaNavModifierVolume.AddToOctree // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab1ae0
};

// Class Mercuna.MercunaNavOctree
// Size: 0x310 (Inherited: 0x248)
struct AMercunaNavOctree : AActor {
	bool bUseOverride; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct UMercunaOctreeSettings* SettingsOverride; // 0x250(0x08)
	float CellSize; // 0x258(0x04)
	int32_t MinPawnRadius; // 0x25c(0x04)
	int32_t MaxPawnRadius; // 0x260(0x04)
	bool bNeverSave; // 0x264(0x01)
	bool bAllowOctreeMerging; // 0x265(0x01)
	enum class ECollisionChannel GeometryCollisionChannel; // 0x266(0x01)
	bool bRecordOctreeDeltas; // 0x267(0x01)
	struct FMulticastInlineDelegate OnBuildComplete; // 0x268(0x10)
	struct FMulticastInlineDelegate OnBuildLowResReady; // 0x278(0x10)
	struct FMulticastInlineDelegate OnRebuildComplete; // 0x288(0x10)
	struct FMulticastInlineDelegate OnRebuildLowResReady; // 0x298(0x10)
	struct FMulticastInlineDelegate OnLoadComplete; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnShortRangeLoadComplete; // 0x2b8(0x10)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	enum class EMerOctreeDebugDrawMode DebugDrawMode; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UMerNavOctreeRenderingComponent* MerNavOctreeRenderingComponent; // 0x2d8(0x08)
	bool bBuildAsSublevel; // 0x2e0(0x01)
	bool bNeedsRebuild; // 0x2e1(0x01)
	char pad_2E2[0x2e]; // 0x2e2(0x2e)

	void UpdateModifierVolumeParams(struct AMercunaNavModifierVolume* ModifierVolume); // Function Mercuna.MercunaNavOctree.UpdateModifierVolumeParams // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab4ea0
	void SetNavigationRotation(struct FRotator& Rotation); // Function Mercuna.MercunaNavOctree.SetNavigationRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ab4ae0
	void RemoveModifierVolume(struct AMercunaNavModifierVolume* ModifierVolume); // Function Mercuna.MercunaNavOctree.RemoveModifierVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab45c0
	void RebuildVolumes(struct TArray<struct FBox>& Volumes, bool StagedBuild); // Function Mercuna.MercunaNavOctree.RebuildVolumes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1ab44c0
	void RebuildActorVolume(struct AActor* Volume, bool StagedBuild); // Function Mercuna.MercunaNavOctree.RebuildActorVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab43f0
	void Raycast(struct FVector Start, struct FVector End, float NavigationRadius, struct FVector& HitPosition, bool& RayHit); // Function Mercuna.MercunaNavOctree.Raycast // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ab4220
	void MercunaRebuildComplete__DelegateSignature(struct AActor* Volume); // DelegateFunction Mercuna.MercunaNavOctree.MercunaRebuildComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	void MercunaLoadComplete__DelegateSignature(); // DelegateFunction Mercuna.MercunaNavOctree.MercunaLoadComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	void MercunaBuildComplete__DelegateSignature(); // DelegateFunction Mercuna.MercunaNavOctree.MercunaBuildComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	bool IsReachableSingle(struct FVector Start, struct FVector End, float NavigationRadius, float MaxPathLength); // Function Mercuna.MercunaNavOctree.IsReachableSingle // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab3070
	bool IsReachable(struct FVector Start, struct FVector End, float NavigationRadius, float MaxPathLength, bool AccuratePathLength); // Function Mercuna.MercunaNavOctree.IsReachable // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab2d20
	void IsNavigableMulti(struct TArray<struct FVector>& Positions, float NavigationRadius, struct TArray<bool>& Results); // Function Mercuna.MercunaNavOctree.IsNavigableMulti // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1ab2bc0
	void IsNavigable(struct FVector Position, float NavigationRadius, bool& Result); // Function Mercuna.MercunaNavOctree.IsNavigable // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ab2a90
	struct UMercunaSpline* FindSplineToLocation(struct FVector Start, struct FVector End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength); // Function Mercuna.MercunaNavOctree.FindSplineToLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab2670
	struct UMercunaPath* FindPathToLocation(struct FVector Start, struct FVector End, float NavigationRadius, bool AllowPartial, float MaxPathLength); // Function Mercuna.MercunaNavOctree.FindPathToLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab24b0
	struct UMercunaPath* FindPathToActor(struct FVector Start, struct AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength); // Function Mercuna.MercunaNavOctree.FindPathToActor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab22d0
	void ClampToNavigable(struct FVector Position, float NavigationRadius, float SearchRadius, struct FVector& ClampedPosition, bool& Result); // Function Mercuna.MercunaNavOctree.ClampToNavigable // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ab1f30
	void CheckReachable(struct FVector Start, struct FVector End, float NavigationRadius, float MaxPathLength, bool& Result); // Function Mercuna.MercunaNavOctree.CheckReachable // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ab1bd0
	void Build(); // Function Mercuna.MercunaNavOctree.Build // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab1b70
};

// Class Mercuna.MercunaNavSeed
// Size: 0x248 (Inherited: 0x248)
struct AMercunaNavSeed : AActor {
};

// Class Mercuna.MercunaNavSeedComponent
// Size: 0x220 (Inherited: 0x220)
struct UMercunaNavSeedComponent : USceneComponent {
};

// Class Mercuna.MercunaNavStreamingManager
// Size: 0x48 (Inherited: 0x28)
struct UMercunaNavStreamingManager : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class Mercuna.MercunaNavStreamingVolume
// Size: 0x2c8 (Inherited: 0x280)
struct AMercunaNavStreamingVolume : AVolume {
	struct TSoftObjectPtr<UWorld> LevelToStream; // 0x280(0x28)
	struct FVector AdditionalLocation; // 0x2a8(0x0c)
	struct FRotator AdditionalRotation; // 0x2b4(0x0c)
	struct TWeakObjectPtr<struct ULevelStreaming> StreamingLevel; // 0x2c0(0x08)
};

// Class Mercuna.MercunaNavTestingActor
// Size: 0x2a8 (Inherited: 0x248)
struct AMercunaNavTestingActor : AActor {
	float Radius; // 0x248(0x04)
	char bSearchStart : 1; // 0x24c(0x01)
	char pad_24C_1 : 7; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct AMercunaNavTestingActor* OtherActor; // 0x250(0x08)
	struct FMercunaPawnUsageFlags UsageFlags; // 0x258(0x08)
	float HeightChangePenalty; // 0x260(0x04)
	char bContinuouslyRepath : 1; // 0x264(0x01)
	char bDrawSpline : 1; // 0x264(0x01)
	char bDrawToScale : 1; // 0x264(0x01)
	char pad_264_3 : 5; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	float MaxSpeed; // 0x268(0x04)
	float MaxAcceleration; // 0x26c(0x04)
	char bPathExist : 1; // 0x270(0x01)
	char bPathIsPartial : 1; // 0x270(0x01)
	char bPathIsOutOfNodes : 1; // 0x270(0x01)
	char pad_270_3 : 5; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float PathLength; // 0x274(0x04)
	int32_t PathSections; // 0x278(0x04)
	float PathFindTime; // 0x27c(0x04)
	int32_t PathNodesUsed; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct USphereComponent* SphereComponent; // 0x288(0x08)
	struct UMercunaSpline* Spline; // 0x290(0x08)
	struct AMercunaNavOctree* Octree; // 0x298(0x08)
	char pad_2A0[0x8]; // 0x2a0(0x08)

	void OnSplineUpdate(enum class EMercunaSplineEvent SplineEvent); // Function Mercuna.MercunaNavTestingActor.OnSplineUpdate // (Final|Native|Protected) // @ game+0x1ab7b30
	void OnOctreeBuildComplete(); // Function Mercuna.MercunaNavTestingActor.OnOctreeBuildComplete // (Final|Native|Protected) // @ game+0x1ab7b10
};

// Class Mercuna.MercunaNavVolume
// Size: 0x2a0 (Inherited: 0x280)
struct AMercunaNavVolume : AVolume {
	struct AMercunaNavOctree* NavOctree; // 0x280(0x08)
	bool PreciseBoundaries; // 0x288(0x01)
	enum class EMercunaLevelOfDetail LOD; // 0x289(0x01)
	bool FullDetailBuild; // 0x28a(0x01)
	char pad_28B[0x5]; // 0x28b(0x05)
	struct TArray<bool> PreciseDirections; // 0x290(0x10)

	void SetSize(struct FVector Size); // Function Mercuna.MercunaNavVolume.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab7c40
	void SetNavigationRotation(struct FRotator& Rotation); // Function Mercuna.MercunaNavVolume.SetNavigationRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ab7bb0
	void AddToOctree(struct AMercunaNavOctree* NavOctree); // Function Mercuna.MercunaNavVolume.AddToOctree // (Final|Native|Public|BlueprintCallable) // @ game+0x1ab6fe0
};

// Class Mercuna.MercunaObstacleComponent
// Size: 0x220 (Inherited: 0x220)
struct UMercunaObstacleComponent : USceneComponent {
	bool bAutomatic; // 0x218(0x01)
	float Radius; // 0x21c(0x04)
};

// Class Mercuna.MercunaClampToNavigableProxy
// Size: 0x70 (Inherited: 0x30)
struct UMercunaClampToNavigableProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UMercunaClampToNavigableProxy* MercunaClampToNavigable(struct UObject* WorldContextObject, struct FVector Position, float NavigationRadius, float SearchRadius); // Function Mercuna.MercunaClampToNavigableProxy.MercunaClampToNavigable // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab7570
};

// Class Mercuna.MercunaRaycastProxy
// Size: 0x78 (Inherited: 0x30)
struct UMercunaRaycastProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnHit; // 0x30(0x10)
	struct FMulticastInlineDelegate OnNoHit; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UMercunaRaycastProxy* MercunaRaycast(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float NavigationRadius); // Function Mercuna.MercunaRaycastProxy.MercunaRaycast // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab78b0
};

// Class Mercuna.MercunaOctreeSettings
// Size: 0x50 (Inherited: 0x30)
struct UMercunaOctreeSettings : UDataAsset {
	struct FMercunaOctreeData OctreeData; // 0x30(0x1c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Mercuna.MercunaPath
// Size: 0x40 (Inherited: 0x28)
struct UMercunaPath : UObject {
	struct FMulticastInlineDelegate PathUpdated; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)

	bool IsValid(); // Function Mercuna.MercunaPath.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab7510
	bool IsReady(); // Function Mercuna.MercunaPath.IsReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab74b0
	bool IsPartial(); // Function Mercuna.MercunaPath.IsPartial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab7450
	struct FVector GetPoint(int32_t I); // Function Mercuna.MercunaPath.GetPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab7320
	float GetPathLength(); // Function Mercuna.MercunaPath.GetPathLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab7240
	int32_t GetNumPoints(); // Function Mercuna.MercunaPath.GetNumPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab7210
	void GetDebugInfo(int32_t& nodesUsed, bool& bOutOfNodes, float& queryTime); // Function Mercuna.MercunaPath.GetDebugInfo // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab7070
};

// Class Mercuna.MercunaSpline
// Size: 0x40 (Inherited: 0x28)
struct UMercunaSpline : UObject {
	struct FMulticastInlineDelegate SplineUpdated; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)

	bool IsValid(); // Function Mercuna.MercunaSpline.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab7540
	bool IsReady(); // Function Mercuna.MercunaSpline.IsReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab74e0
	bool IsPartial(); // Function Mercuna.MercunaSpline.IsPartial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab7480
	struct TArray<struct FSplinePoint> GetSplinePoints(); // Function Mercuna.MercunaSpline.GetSplinePoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab73d0
	struct FVector GetPathPoint(int32_t I); // Function Mercuna.MercunaSpline.GetPathPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab7270
	int32_t GetNumPathPoints(); // Function Mercuna.MercunaSpline.GetNumPathPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab71e0
	float GetLength(); // Function Mercuna.MercunaSpline.GetLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ab71b0
};

// Class Mercuna.MercunaTask_MoveTo
// Size: 0xe0 (Inherited: 0x70)
struct UMercunaTask_MoveTo : UAITask {
	struct FMulticastInlineDelegate OnRequestFailed; // 0x70(0x10)
	struct FMulticastInlineDelegate OnMoveFinished; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)

	void OnMoveComplete(struct FAIRequestID RequestID, enum class EMercunaMoveResult Result); // Function Mercuna.MercunaTask_MoveTo.OnMoveComplete // (Final|Native|Protected) // @ game+0x1ab7a40
	struct UMercunaTask_MoveTo* MercunaMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic); // Function Mercuna.MercunaTask_MoveTo.MercunaMoveTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1ab76d0
};

// Class Mercuna.MerNavOctreeRenderingComponent
// Size: 0x4b0 (Inherited: 0x4b0)
struct UMerNavOctreeRenderingComponent : UMeshComponent {
};

// Class Mercuna.MerSettings
// Size: 0x60 (Inherited: 0x28)
struct UMerSettings : UObject {
	float DebugLengthScale; // 0x28(0x04)
	float NumVoxelsPerSide; // 0x2c(0x04)
	struct FVector NumVoxelsEachSide; // 0x30(0x0c)
	bool bAlwaysShowErrors; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float CellSize; // 0x40(0x04)
	int32_t MinPawnRadius; // 0x44(0x04)
	int32_t MaxPawnRadius; // 0x48(0x04)
	bool bAutoLinkNavVolumesWithOctrees; // 0x4c(0x01)
	bool bAllowOctreeMerging; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct TArray<struct FName> ModifierUsageTypes; // 0x50(0x10)
};

// Class Mercuna.MerEditorSettings
// Size: 0x78 (Inherited: 0x28)
struct UMerEditorSettings : UObject {
	bool bEnableExtraLogging; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FLinearColor NavigableColor; // 0x2c(0x10)
	struct FLinearColor HighCostColor; // 0x3c(0x10)
	struct FLinearColor UnnavigableColor; // 0x4c(0x10)
	char pad_5C[0x1c]; // 0x5c(0x1c)
};

