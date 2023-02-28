// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8 {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5
};

// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8 {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByHighestImpulse = 3,
	SortByNearestFirst = 4,
	Count = 5,
	EChaosCollisionSortMethod_MAX = 6
};

// Enum GeometryCollectionEngine.EChaosRemovalSortMethod
enum class EChaosRemovalSortMethod : uint8 {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByNearestFirst = 2,
	Count = 3,
	EChaosRemovalSortMethod_MAX = 4
};

// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8 {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5
};

// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8 {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};

// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8 {
	Chaos_Traansform = 0,
	Chaos_Max = 1
};

// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8 {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// Size: 0x58 (Inherited: 0x00)
struct FChaosCollisionEventData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
	struct FVector Velocity1; // 0x18(0x0c)
	struct FVector Velocity2; // 0x24(0x0c)
	float Mass1; // 0x30(0x04)
	float Mass2; // 0x34(0x04)
	struct FVector Impulse; // 0x38(0x0c)
	char pad_44[0x14]; // 0x44(0x14)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// Size: 0x1c (Inherited: 0x00)
struct FChaosBreakingEventData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Mass; // 0x18(0x04)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// Size: 0x2c (Inherited: 0x00)
struct FChaosTrailingEventData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector AngularVelocity; // 0x18(0x0c)
	float Mass; // 0x24(0x04)
	int32_t ParticleIndex; // 0x28(0x04)
};

// ScriptStruct GeometryCollectionEngine.ChaosRemovalEventData
// Size: 0x14 (Inherited: 0x00)
struct FChaosRemovalEventData {
	struct FVector Location; // 0x00(0x0c)
	float Mass; // 0x0c(0x04)
	int32_t ParticleIndex; // 0x10(0x04)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionRepData
// Size: 0x18 (Inherited: 0x00)
struct FGeometryCollectionRepData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// Size: 0x50 (Inherited: 0x00)
struct FGeomComponentCacheParameters {
	enum class EGeometryCollectionCacheType CacheMode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UGeometryCollectionCache* TargetCache; // 0x08(0x08)
	float ReverseCacheBeginTime; // 0x10(0x04)
	bool SaveCollisionData; // 0x14(0x01)
	bool DoGenerateCollisionData; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32_t CollisionDataSizeMax; // 0x18(0x04)
	bool DoCollisionDataSpatialHash; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float CollisionDataSpatialHashRadius; // 0x20(0x04)
	int32_t MaxCollisionPerCell; // 0x24(0x04)
	bool SaveBreakingData; // 0x28(0x01)
	bool DoGenerateBreakingData; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t BreakingDataSizeMax; // 0x2c(0x04)
	bool DoBreakingDataSpatialHash; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float BreakingDataSpatialHashRadius; // 0x34(0x04)
	int32_t MaxBreakingPerCell; // 0x38(0x04)
	bool SaveTrailingData; // 0x3c(0x01)
	bool DoGenerateTrailingData; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	int32_t TrailingDataSizeMax; // 0x40(0x04)
	float TrailingMinSpeedThreshold; // 0x44(0x04)
	float TrailingMinVolumeThreshold; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// Size: 0x18 (Inherited: 0x00)
struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x00(0x04)
	float MinRadius; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinMass; // 0x0c(0x04)
	float MaxDistance; // 0x10(0x04)
	enum class EChaosBreakingSortMethod SortMethod; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// Size: 0x18 (Inherited: 0x00)
struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x00(0x04)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinImpulse; // 0x0c(0x04)
	float MaxDistance; // 0x10(0x04)
	enum class EChaosCollisionSortMethod SortMethod; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct GeometryCollectionEngine.ChaosRemovalEventRequestSettings
// Size: 0x10 (Inherited: 0x00)
struct FChaosRemovalEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x00(0x04)
	float MinMass; // 0x04(0x04)
	float MaxDistance; // 0x08(0x04)
	enum class EChaosRemovalSortMethod SortMethod; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// Size: 0x18 (Inherited: 0x00)
struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x00(0x04)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinAngularSpeed; // 0x0c(0x04)
	float MaxDistance; // 0x10(0x04)
	enum class EChaosTrailingSortMethod SortMethod; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// Size: 0x18 (Inherited: 0x00)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct AChaosSolverActor* Solver; // 0x08(0x08)
	struct AGeometryCollectionActor* GeometryCollection; // 0x10(0x08)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// Size: 0x01 (Inherited: 0x00)
struct FGeometryCollectionDebugDrawWarningMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// Size: 0x30 (Inherited: 0x00)
struct FGeometryCollectionSizeSpecificData {
	float MaxSize; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGeometryCollectionCollisionTypeData> CollisionShapes; // 0x08(0x10)
	int32_t DamageThreshold; // 0x18(0x04)
	struct FGeometryCollectionRemovalData Removal; // 0x1c(0x14)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionRemovalData
// Size: 0x14 (Inherited: 0x00)
struct FGeometryCollectionRemovalData {
	bool bRemoveOnMaxSleep; // 0x00(0x01)
	bool bShrinkOnMaxSleep; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector2D MaximumSleepTime; // 0x04(0x08)
	struct FVector2D RemovalDuration; // 0x0c(0x08)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionCollisionTypeData
// Size: 0x24 (Inherited: 0x00)
struct FGeometryCollectionCollisionTypeData {
	enum class ECollisionTypeEnum CollisionType; // 0x00(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FGeometryCollectionLevelSetData LevelSet; // 0x04(0x10)
	struct FGeometryCollectionCollisionParticleData CollisionParticles; // 0x14(0x08)
	float CollisionObjectReductionPercentage; // 0x1c(0x04)
	float CollisionMarginFraction; // 0x20(0x04)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionCollisionParticleData
// Size: 0x08 (Inherited: 0x00)
struct FGeometryCollectionCollisionParticleData {
	float CollisionParticlesFraction; // 0x00(0x04)
	int32_t MaximumCollisionParticles; // 0x04(0x04)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionLevelSetData
// Size: 0x10 (Inherited: 0x00)
struct FGeometryCollectionLevelSetData {
	int32_t MinLevelSetResolution; // 0x00(0x04)
	int32_t MaxLevelSetResolution; // 0x04(0x04)
	int32_t MinClusterLevelSetResolution; // 0x08(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x0c(0x04)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
// Size: 0x28 (Inherited: 0x00)
struct FGeometryCollectionEmbeddedExemplar {
	struct FSoftObjectPath StaticMeshExemplar; // 0x00(0x18)
	float StartCullDistance; // 0x18(0x04)
	float EndCullDistance; // 0x1c(0x04)
	int32_t InstanceCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSource
// Size: 0x60 (Inherited: 0x00)
struct FGeometryCollectionSource {
	struct FSoftObjectPath SourceGeometryObject; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform LocalTransform; // 0x20(0x30)
	struct TArray<struct UMaterialInterface*> SourceMaterial; // 0x50(0x10)
};

