// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x6e0 (Inherited: 0x6b0)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x6b0(0x10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x6c0(0x10)
	struct FGuid GenerationGuid; // 0x6d0(0x10)
};

// Class Foliage.FoliageStatistics
// Size: 0x28 (Inherited: 0x28)
struct UFoliageStatistics : UBlueprintFunctionLibrary {

	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4c33cc0
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4c33b80
};

// Class Foliage.FoliageType
// Size: 0x3b8 (Inherited: 0x28)
struct UFoliageType : UObject {
	struct FGuid UpdateGuid; // 0x28(0x10)
	float Density; // 0x38(0x04)
	float DensityAdjustmentFactor; // 0x3c(0x04)
	float Radius; // 0x40(0x04)
	bool bSingleInstanceModeOverrideRadius; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float SingleInstanceModeRadius; // 0x48(0x04)
	enum class EFoliageScaling Scaling; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FFloatInterval ScaleX; // 0x50(0x08)
	struct FFloatInterval ScaleY; // 0x58(0x08)
	struct FFloatInterval ScaleZ; // 0x60(0x08)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x68(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float VertexColorMaskThreshold; // 0x9c(0x04)
	char VertexColorMaskInvert : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FFloatInterval ZOffset; // 0xa4(0x08)
	char AlignToNormal : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float AlignMaxAngle; // 0xb0(0x04)
	char RandomYaw : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float RandomPitchAngle; // 0xb8(0x04)
	struct FFloatInterval GroundSlopeAngle; // 0xbc(0x08)
	struct FFloatInterval Height; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xd0(0x10)
	float MinimumLayerWeight; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xe8(0x10)
	float MinimumExclusionLayerWeight; // 0xf8(0x04)
	struct FName LandscapeLayer; // 0xfc(0x08)
	char CollisionWithWorld : 1; // 0x104(0x01)
	char pad_104_1 : 7; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FVector CollisionScale; // 0x108(0x0c)
	struct FBoxSphereBounds MeshBounds; // 0x114(0x1c)
	struct FVector LowBoundOriginRadius; // 0x130(0x0c)
	enum class EComponentMobility Mobility; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct FInt32Interval CullDistance; // 0x140(0x08)
	char bEnableStaticLighting : 1; // 0x148(0x01)
	char CastShadow : 1; // 0x148(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x148(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x148(0x01)
	char bCastDynamicShadow : 1; // 0x148(0x01)
	char bCastStaticShadow : 1; // 0x148(0x01)
	char bCastShadowAsTwoSided : 1; // 0x148(0x01)
	char bReceivesDecals : 1; // 0x148(0x01)
	char bReceivesWeatherDecals : 1; // 0x149(0x01)
	char pad_149_1 : 7; // 0x149(0x01)
	char pad_14A[0x2]; // 0x14a(0x02)
	char ReceivesWeatherDecalsMask; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	char bOverrideLightMapRes : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	int32_t OverriddenLightMapRes; // 0x154(0x04)
	enum class ELightmapType LightmapType; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	char bUseAsOccluder : 1; // 0x15c(0x01)
	char pad_15C_1 : 7; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	char bVisibleInRayTracing : 1; // 0x160(0x01)
	char bEvaluateWorldPositionOffset : 1; // 0x160(0x01)
	char pad_160_2 : 6; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct FBodyInstance BodyInstance; // 0x168(0x158)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x2c0(0x01)
	struct FLightingChannels LightingChannels; // 0x2c1(0x01)
	char pad_2C2[0x2]; // 0x2c2(0x02)
	char bRenderCustomDepth : 1; // 0x2c4(0x01)
	char pad_2C4_1 : 7; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	int32_t CustomDepthStencilValue; // 0x2cc(0x04)
	int32_t TranslucencySortPriority; // 0x2d0(0x04)
	float CollisionRadius; // 0x2d4(0x04)
	float ShadeRadius; // 0x2d8(0x04)
	int32_t NumSteps; // 0x2dc(0x04)
	float InitialSeedDensity; // 0x2e0(0x04)
	float AverageSpreadDistance; // 0x2e4(0x04)
	float SpreadVariance; // 0x2e8(0x04)
	int32_t SeedsPerStep; // 0x2ec(0x04)
	int32_t DistributionSeed; // 0x2f0(0x04)
	float MaxInitialSeedOffset; // 0x2f4(0x04)
	bool bCanGrowInShade; // 0x2f8(0x01)
	bool bSpawnsInShade; // 0x2f9(0x01)
	char pad_2FA[0x2]; // 0x2fa(0x02)
	float MaxInitialAge; // 0x2fc(0x04)
	float MaxAge; // 0x300(0x04)
	float OverlapPriority; // 0x304(0x04)
	struct FFloatInterval ProceduralScale; // 0x308(0x08)
	struct FRuntimeFloatCurve ScaleCurve; // 0x310(0x88)
	int32_t ChangeCount; // 0x398(0x04)
	char ReapplyDensity : 1; // 0x39c(0x01)
	char ReapplyRadius : 1; // 0x39c(0x01)
	char ReapplyAlignToNormal : 1; // 0x39c(0x01)
	char ReapplyRandomYaw : 1; // 0x39c(0x01)
	char ReapplyScaling : 1; // 0x39c(0x01)
	char ReapplyScaleX : 1; // 0x39c(0x01)
	char ReapplyScaleY : 1; // 0x39c(0x01)
	char ReapplyScaleZ : 1; // 0x39c(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x39d(0x01)
	char ReapplyGroundSlope : 1; // 0x39d(0x01)
	char ReapplyHeight : 1; // 0x39d(0x01)
	char ReapplyLandscapeLayers : 1; // 0x39d(0x01)
	char ReapplyZOffset : 1; // 0x39d(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x39d(0x01)
	char ReapplyVertexColorMask : 1; // 0x39d(0x01)
	char bEnableDensityScaling : 1; // 0x39d(0x01)
	char bEnableDiscardOnLoad : 1; // 0x39e(0x01)
	char pad_39E_1 : 7; // 0x39e(0x01)
	char pad_39F[0x1]; // 0x39f(0x01)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x3a0(0x10)
	int32_t VirtualTextureCullMips; // 0x3b0(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
};

// Class Foliage.FoliageType_Actor
// Size: 0x3c8 (Inherited: 0x3b8)
struct UFoliageType_Actor : UFoliageType {
	struct AActor* ActorClass; // 0x3b8(0x08)
	bool bShouldAttachToBaseComponent; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x468 (Inherited: 0x3b8)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x3b8(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x3c0(0x10)
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3d0(0x08)
	struct TMap<enum class ESeasonEnum, struct TSoftObjectPtr<UStaticMesh>> OverrideMeshes; // 0x3d8(0x50)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> SpringOverrideMaterials; // 0x428(0x10)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> SummerOverrideMaterials; // 0x438(0x10)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> FallOverrideMaterials; // 0x448(0x10)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> WinterOverrideMaterials; // 0x458(0x10)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x298 (Inherited: 0x248)
struct AInstancedFoliageActor : AActor {
	char pad_248[0x50]; // 0x248(0x50)
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x2b8 (Inherited: 0x258)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x258(0x08)
	struct FVector TouchingActorEntryPosition; // 0x260(0x0c)
	struct FVector FoliageVelocity; // 0x26c(0x0c)
	struct FVector FoliageForce; // 0x278(0x0c)
	struct FVector FoliagePosition; // 0x284(0x0c)
	float FoliageDamageImpulseScale; // 0x290(0x04)
	float FoliageTouchImpulseScale; // 0x294(0x04)
	float FoliageStiffness; // 0x298(0x04)
	float FoliageStiffnessQuadratic; // 0x29c(0x04)
	float FoliageDamping; // 0x2a0(0x04)
	float MaxDamageImpulse; // 0x2a4(0x04)
	float MaxTouchImpulse; // 0x2a8(0x04)
	float MaxForce; // 0x2ac(0x04)
	float Mass; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)

	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // (Final|Native|Protected|HasOutParms) // @ game+0x4c33960
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0x520 (Inherited: 0x510)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
	char pad_510[0x10]; // 0x510(0x10)
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x288 (Inherited: 0x280)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x280(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xc8(0x08)
	float TileOverlap; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct AVolume* SpawningVolume; // 0xd8(0x08)
	struct FGuid ProceduralGuid; // 0xe0(0x10)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x68 (Inherited: 0x28)
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28(0x04)
	float TileSize; // 0x2c(0x04)
	int32_t NumUniqueTiles; // 0x30(0x04)
	float MinimumQuadTreeSize; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate // (Final|Native|Public|BlueprintCallable) // @ game+0x4c33e20
};

// Class Foliage.ProceduralFoliageTile
// Size: 0x158 (Inherited: 0x28)
struct UProceduralFoliageTile : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x28(0x08)
	char pad_30[0xa0]; // 0x30(0xa0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xd0(0x10)
	char pad_E0[0x78]; // 0xe0(0x78)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x288 (Inherited: 0x280)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x280(0x08)
};

