// Class OdysseyRuntime.OdcAuthoredObstacleSetupComponent
// Size: 0x270 (Inherited: 0x220)
struct UOdcAuthoredObstacleSetupComponent : USceneComponent {
	enum class EOdcAuthoredObstacleShape ShapeType; // 0x218(0x04)
	float MinHeight; // 0x21c(0x04)
	float MaxHeight; // 0x220(0x04)
	struct TArray<struct FVector> HullPoints; // 0x228(0x10)
	struct FVector BoxCenter; // 0x238(0x0c)
	char pad_248[0x8]; // 0x248(0x08)
	struct FQuat BoxRotation; // 0x250(0x10)
	struct FVector BoxExtent; // 0x260(0x0c)
	char pad_26C[0x4]; // 0x26c(0x04)
};

// Class OdysseyRuntime.Odc_BP
// Size: 0x28 (Inherited: 0x28)
struct UOdc_BP : UObject {

	bool GetNavmeshPoint(int32_t Layer, struct FVector& InLoc, float InRadius, float InUpDist, float InDownDist, struct FVector& OutLoc); // Function OdysseyRuntime.Odc_BP.GetNavmeshPoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1793640
};

// Class OdysseyRuntime.OdcCanvasTextComponent
// Size: 0x480 (Inherited: 0x480)
struct UOdcCanvasTextComponent : UPrimitiveComponent {
};

// Class OdysseyRuntime.OdcDebugDrawActor
// Size: 0x280 (Inherited: 0x248)
struct AOdcDebugDrawActor : AActor {
	struct UOdcCanvasTextComponent* CanvasTextComponent; // 0x248(0x08)
	struct ULineBatchComponent* LineBatchComponent; // 0x250(0x08)
	struct UDebugPanelComponent* DebugPanel; // 0x258(0x08)
	char pad_260[0x20]; // 0x260(0x20)
};

// Class OdysseyRuntime.OdcEnvQueryTest_SphereFit
// Size: 0x250 (Inherited: 0x1f8)
struct UOdcEnvQueryTest_SphereFit : UEnvQueryTest {
	float Radius; // 0x1f8(0x04)
	bool bCustomPathSpec; // 0x1fc(0x01)
	char pad_1FD[0x3]; // 0x1fd(0x03)
	struct FOdcPathSpec CustomPathSpec; // 0x200(0x50)
};

// Class OdysseyRuntime.ExtendedOdcRepulsorComponent
// Size: 0x250 (Inherited: 0x220)
struct UExtendedOdcRepulsorComponent : USceneComponent {
	bool bEnabled; // 0x218(0x01)
	uint32_t RepulsorTickFrameInterval; // 0x21c(0x04)
	float RepulsorDistanceThreshold; // 0x220(0x04)
	float RepulsorRadius; // 0x224(0x04)
	float RepulsorOuterCushion; // 0x228(0x04)
	float RepulsorInnerCushion; // 0x22c(0x04)
	char pad_235[0x1b]; // 0x235(0x1b)
};

// Class OdysseyRuntime.LinkActor
// Size: 0x2d0 (Inherited: 0x248)
struct ALinkActor : AActor {
	enum class ELinkType LinkType; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	int32_t NavLayers; // 0x24c(0x04)
	struct FOdcFlags ForwardLinkUsageFlags; // 0x250(0x04)
	struct FOdcFlags BackwardLinkUsageFlags; // 0x254(0x04)
	bool Bidirectional; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float Cost; // 0x25c(0x04)
	float MustUseDist; // 0x260(0x04)
	int32_t MaxSimultaneous; // 0x264(0x04)
	float DelayBeforeNextUser; // 0x268(0x04)
	char pad_26C[0xc]; // 0x26c(0x0c)
	struct FVector LinkStartPos; // 0x278(0x0c)
	struct FVector LinkEndPos; // 0x284(0x0c)
	char pad_290[0x40]; // 0x290(0x40)
};

// Class OdysseyRuntime.LinkTextRenderComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct ULinkTextRenderComponent : UTextRenderComponent {
};

// Class OdysseyRuntime.LinkStripActor
// Size: 0x2f0 (Inherited: 0x2d0)
struct ALinkStripActor : ALinkActor {
	struct FVector LinkStartPos2; // 0x2d0(0x0c)
	struct FVector LinkEndPos2; // 0x2dc(0x0c)
	char pad_2E8[0x8]; // 0x2e8(0x08)
};

// Class OdysseyRuntime.OdcMoverPathFollowingComponent
// Size: 0x290 (Inherited: 0x268)
struct UOdcMoverPathFollowingComponent : UPathFollowingComponent {
	struct FSoftClassPath ReplacedNavDataClass; // 0x268(0x18)
	char pad_280[0x10]; // 0x280(0x10)
};

// Class OdysseyRuntime.OdcNavData
// Size: 0x458 (Inherited: 0x450)
struct AOdcNavData : ANavigationData {
	uint32_t Layer; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
};

// Class OdysseyRuntime.OdcNavLinkComponent
// Size: 0x280 (Inherited: 0x220)
struct UOdcNavLinkComponent : USceneComponent {
	enum class ELinkType LinkType; // 0x218(0x01)
	int32_t NavLayers; // 0x21c(0x04)
	struct FOdcFlags ForwardLinkUsageFlags; // 0x220(0x04)
	struct FOdcFlags BackwardLinkUsageFlags; // 0x224(0x04)
	bool Bidirectional; // 0x228(0x01)
	float Cost; // 0x22c(0x04)
	float MustUseDist; // 0x230(0x04)
	int32_t MaxSimultaneous; // 0x234(0x04)
	float DelayBeforeNextUser; // 0x238(0x04)
	char pad_23E[0x42]; // 0x23e(0x42)
};

// Class OdysseyRuntime.OdcNavmeshActor
// Size: 0x280 (Inherited: 0x248)
struct AOdcNavmeshActor : AActor {
	struct TArray<struct FOdcNavGraphImage> NavGraphImages; // 0x248(0x10)
	struct FVector NavmeshExtent; // 0x258(0x0c)
	char pad_264[0x4]; // 0x264(0x04)
	int8_t NavGraphImagesVersion; // 0x268(0x01)
	char pad_269[0x17]; // 0x269(0x17)
};

// Class OdysseyRuntime.OdcNavmeshConfig
// Size: 0x238 (Inherited: 0x28)
struct UOdcNavmeshConfig : UObject {
	struct FOdcCollisionChannelSet CollisionChannelsAffectingNavmesh; // 0x28(0x04)
	struct FOdcFlags DefaultAreaUsageFlags; // 0x2c(0x04)
	struct FOdcFlags CrouchAreaUsageFlags; // 0x30(0x04)
	struct FOdcFlags DeepWaterAreaUsageFlags; // 0x34(0x04)
	struct FOdcFlags ShallowWaterAreaUsageFlags; // 0x38(0x04)
	float DefaultPenaltyMultiplier; // 0x3c(0x04)
	struct FString MarkupCollisionPreset; // 0x40(0x10)
	struct TArray<struct FOdcCollisionAreaUsageFlag> CollisionAreaUsageFlags; // 0x50(0x10)
	struct TArray<struct FOdcSlopeAreaUsageFlag> SlopeAreaUsageFlags; // 0x60(0x10)
	struct FOdcLayerConfig LayerConfigs[0x20]; // 0x70(0x180)
	struct FOdcFlagsDefinition AreaUsage; // 0x1f0(0x10)
	struct FOdcFlagsDefinition LinkUsage; // 0x200(0x10)
	struct FOdcFlagsDefinition ObstacleBlockage; // 0x210(0x10)
	struct FOdcGeometryMetrics GeometryMetrics; // 0x220(0x14)
	float DefaultDrawDisttance; // 0x234(0x04)
};

// Class OdysseyRuntime.OdcNavmeshFootprint
// Size: 0x40 (Inherited: 0x28)
struct UOdcNavmeshFootprint : UObject {
	struct TArray<struct FVector> Hull; // 0x28(0x10)
	float Height; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class OdysseyRuntime.OdcObstacleComponent
// Size: 0x260 (Inherited: 0x220)
struct UOdcObstacleComponent : USceneComponent {
	struct FOdcObstacleData ObstacleData; // 0x218(0x28)
	bool bExcludeIfParentHasAuthoredObstacle; // 0x240(0x01)
	char pad_249[0x17]; // 0x249(0x17)

	void SetFlag(struct FName FlagName); // Function OdysseyRuntime.OdcObstacleComponent.SetFlag // (Final|Native|Public|BlueprintCallable) // @ game+0x17938a0
	void ClearFlag(struct FName FlagName); // Function OdysseyRuntime.OdcObstacleComponent.ClearFlag // (Final|Native|Public|BlueprintCallable) // @ game+0x17935b0
	void AddComponentObstaclesBP(struct TArray<struct UActorComponent*> IncludeComponents, bool RemoveUnknownObstacles); // Function OdysseyRuntime.OdcObstacleComponent.AddComponentObstaclesBP // (Final|Native|Public|BlueprintCallable) // @ game+0x1793480
	void AddActorComponentObstaclesBP(bool RemoveUnknownObstacles, struct TArray<struct UActorComponent*> ExcludeComponents); // Function OdysseyRuntime.OdcObstacleComponent.AddActorComponentObstaclesBP // (Final|Native|Public|BlueprintCallable) // @ game+0x1793350
};

// Class OdysseyRuntime.OdcObstacleMeshComponent
// Size: 0x520 (Inherited: 0x510)
struct UOdcObstacleMeshComponent : UStaticMeshComponent {
	struct UStaticMesh* NavStaticMesh; // 0x510(0x08)
	char pad_518[0x8]; // 0x518(0x08)
};

// Class OdysseyRuntime.PathSpecInterface
// Size: 0x28 (Inherited: 0x28)
struct UPathSpecInterface : UInterface {

	struct FOdcPathSpec GetPathSpec(); // Function OdysseyRuntime.PathSpecInterface.GetPathSpec // (Native|Public|Const) // @ game+0x1793860
	int32_t GetLinkUsageFlags(); // Function OdysseyRuntime.PathSpecInterface.GetLinkUsageFlags // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	int32_t GetBlockageFlags(); // Function OdysseyRuntime.PathSpecInterface.GetBlockageFlags // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
};

// Class OdysseyRuntime.OdcRepulsorComponent
// Size: 0x230 (Inherited: 0x220)
struct UOdcRepulsorComponent : USceneComponent {
	float RepulsorRadius; // 0x218(0x04)
	float RepulsorOuterCushion; // 0x21c(0x04)
	float RepulsorInnerCushion; // 0x220(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
};

