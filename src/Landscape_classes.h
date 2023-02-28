// Class Landscape.ControlPointMeshActor
// Size: 0x250 (Inherited: 0x248)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x248(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x520 (Inherited: 0x510)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x510(0x04)
	char pad_514[0xc]; // 0x514(0x0c)
};

// Class Landscape.LandscapeProxy
// Size: 0x5c0 (Inherited: 0x248)
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x248(0x08)
	struct FGuid LandscapeGuid; // 0x250(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x260(0x08)
	int32_t MaxLODLevel; // 0x268(0x04)
	float LODDistanceFactor; // 0x26c(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x274(0x04)
	float LOD0ScreenSize; // 0x278(0x04)
	float LOD0DistributionSetting; // 0x27c(0x04)
	float LODDistributionSetting; // 0x280(0x04)
	float TessellationComponentScreenSize; // 0x284(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float TessellationComponentScreenSizeFalloff; // 0x28c(0x04)
	int32_t OccluderGeometryLOD; // 0x290(0x04)
	int32_t StaticLightingLOD; // 0x294(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x298(0x08)
	float StreamingDistanceMultiplier; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x2a8(0x08)
	char pad_2B0[0x20]; // 0x2b0(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x2d0(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2d8(0x10)
	bool bMeshHoles; // 0x2e8(0x01)
	char MeshHolesMaxLod; // 0x2e9(0x01)
	char pad_2EA[0x6]; // 0x2ea(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2f0(0x10)
	int32_t VirtualTextureNumLods; // 0x300(0x04)
	int32_t VirtualTextureLodBias; // 0x304(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	float NegativeZBoundsExtension; // 0x30c(0x04)
	float PositiveZBoundsExtension; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x318(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x328(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x338(0x10)
	char pad_348[0x64]; // 0x348(0x64)
	bool bHasLandscapeGrass; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	float StaticLightingResolution; // 0x3b0(0x04)
	char CastShadow : 1; // 0x3b4(0x01)
	char bCastDynamicShadow : 1; // 0x3b4(0x01)
	char bCastStaticShadow : 1; // 0x3b4(0x01)
	char pad_3B4_3 : 5; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	char bCastFarShadow : 1; // 0x3b8(0x01)
	char pad_3B8_1 : 7; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	char bCastHiddenShadow : 1; // 0x3bc(0x01)
	char pad_3BC_1 : 7; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	char bCastShadowAsTwoSided : 1; // 0x3c0(0x01)
	char pad_3C0_1 : 7; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x3c4(0x01)
	char pad_3C4_1 : 7; // 0x3c4(0x01)
	struct FLightingChannels LightingChannels; // 0x3c5(0x01)
	char pad_3C6[0x2]; // 0x3c6(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x3c8(0x01)
	char bRenderCustomDepth : 1; // 0x3c8(0x01)
	char pad_3C8_2 : 6; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	int32_t CustomDepthStencilValue; // 0x3d0(0x04)
	float LDMaxDrawDistance; // 0x3d4(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x3d8(0x18)
	int32_t CollisionMipLevel; // 0x3f0(0x04)
	int32_t SimpleCollisionMipLevel; // 0x3f4(0x04)
	float CollisionThickness; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct FBodyInstance BodyInstance; // 0x400(0x158)
	char bGenerateOverlapEvents : 1; // 0x558(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x558(0x01)
	char pad_558_2 : 6; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	int32_t ComponentSizeQuads; // 0x55c(0x04)
	int32_t SubsectionSizeQuads; // 0x560(0x04)
	int32_t NumSubsections; // 0x564(0x04)
	char bUsedForNavigation : 1; // 0x568(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x568(0x01)
	char pad_568_2 : 6; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	bool bUseDynamicMaterialInstance; // 0x56c(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x56d(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x56e(0x01)
	bool bHasLayersContent; // 0x56f(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x570(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4c72340
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x4c72270
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x4c721a0
	bool LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x4c72080
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x1480ed0
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x4c71cf0
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x4c71c60
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x4c71bd0
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize // (Native|Public|BlueprintCallable) // @ game+0x34a97a0
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x3202a70
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x328ac80
};

// Class Landscape.Landscape
// Size: 0x5c0 (Inherited: 0x5c0)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x248 (Inherited: 0x248)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x1074730
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4c6fe50
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x4c6fcd0
	void GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
};

// Class Landscape.LandscapeLODStreamingProxy
// Size: 0x68 (Inherited: 0x60)
struct ULandscapeLODStreamingProxy : UStreamableRenderAsset {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class Landscape.LandscapeComponent
// Size: 0x6a0 (Inherited: 0x480)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x480(0x04)
	int32_t SectionBaseY; // 0x484(0x04)
	int32_t ComponentSizeQuads; // 0x488(0x04)
	int32_t SubsectionSizeQuads; // 0x48c(0x04)
	int32_t NumSubsections; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x498(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x4a0(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x4a8(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x4b8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x4c8(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x4d8(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x4e8(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x4f8(0x08)
	struct FVector4 WeightmapScaleBias; // 0x500(0x10)
	float WeightmapSubsectionOffset; // 0x510(0x04)
	char pad_514[0xc]; // 0x514(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x520(0x10)
	struct FBox CachedLocalBox; // 0x530(0x1c)
	LazyObjectProperty CollisionComponent; // 0x54c(0x1c)
	struct UTexture2D* HeightmapTexture; // 0x568(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x570(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x580(0x10)
	struct ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x590(0x08)
	struct FGuid MapBuildDataId; // 0x598(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x5a8(0x10)
	int32_t CollisionMipLevel; // 0x5b8(0x04)
	int32_t SimpleCollisionMipLevel; // 0x5bc(0x04)
	float NegativeZBoundsExtension; // 0x5c0(0x04)
	float PositiveZBoundsExtension; // 0x5c4(0x04)
	float StaticLightingResolution; // 0x5c8(0x04)
	int32_t ForcedLOD; // 0x5cc(0x04)
	int32_t LODBias; // 0x5d0(0x04)
	struct FGuid StateId; // 0x5d4(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x5e4(0x10)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x5f8(0x08)
	char MobileBlendableLayerMask; // 0x600(0x01)
	char pad_601[0x7]; // 0x601(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x608(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x610(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x620(0x10)
	char pad_630[0x70]; // 0x630(0x70)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4c6fc00
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4c6fb20
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4c6fa40
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x248 (Inherited: 0x248)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x298 (Inherited: 0x248)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_248[0x50]; // 0x248(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x480 (Inherited: 0x480)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	char bEnableDensityScaling : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32_t StartCullDistance; // 0x50(0x04)
	int32_t EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x560 (Inherited: 0x480)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x480(0x10)
	int32_t SectionBaseX; // 0x490(0x04)
	int32_t SectionBaseY; // 0x494(0x04)
	int32_t CollisionSizeQuads; // 0x498(0x04)
	float CollisionScale; // 0x49c(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x4a8(0x10)
	struct FGuid HeightfieldGuid; // 0x4b8(0x10)
	struct FBox CachedLocalBox; // 0x4c8(0x1c)
	LazyObjectProperty RenderComponent; // 0x4e4(0x1c)
	char pad_500[0x10]; // 0x500(0x10)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x510(0x10)
	char pad_520[0x40]; // 0x520(0x40)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4c6fca0
};

// Class Landscape.LandscapeInfo
// Size: 0x210 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28(0x1c)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x04)
	int32_t SubsectionSizeQuads; // 0x58(0x04)
	int32_t ComponentNumSubsections; // 0x5c(0x04)
	struct FVector DrawScale; // 0x60(0x0c)
	char pad_6C[0xa4]; // 0x6c(0xa4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x110(0x10)
	char pad_120[0xf0]; // 0x120(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FLandscapeSeasonParameters SeasonParameters; // 0x50(0x30)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x450 (Inherited: 0x438)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x438(0x10)
	char bIsLayerThumbnail : 1; // 0x448(0x01)
	char bDisableTessellation : 1; // 0x448(0x01)
	char bMobile : 1; // 0x448(0x01)
	char bEditorToolUsage : 1; // 0x448(0x01)
	char pad_448_4 : 4; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x580 (Inherited: 0x560)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x560(0x10)
	char pad_570[0x10]; // 0x570(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x250 (Inherited: 0x248)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x248(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x540 (Inherited: 0x510)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x510(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x520(0x10)
	int8_t ProxyLOD; // 0x530(0x01)
	char pad_531[0xf]; // 0x531(0x0f)
};

// Class Landscape.LandscapeSettings
// Size: 0x40 (Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x4b0 (Inherited: 0x480)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x480(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x490(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x4a0(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x3340a50
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xa8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	float Width; // 0x40(0x04)
	float LayerWidthRatio; // 0x44(0x04)
	float SideFalloff; // 0x48(0x04)
	float LeftSideFalloffFactor; // 0x4c(0x04)
	float RightSideFalloffFactor; // 0x50(0x04)
	float LeftSideLayerFalloffFactor; // 0x54(0x04)
	float RightSideLayerFalloffFactor; // 0x58(0x04)
	float EndFalloff; // 0x5c(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xa0(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb0 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x30)
	struct FInterpCurveVector SplineInfo; // 0x58(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa0(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x5e0 (Inherited: 0x5c0)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x5c0(0x1c)
	char pad_5DC[0x4]; // 0x5dc(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x60 (Inherited: 0x40)
struct ULandscapeSubsystem : UTickableWorldSubsystem {
	char pad_40[0x20]; // 0x40(0x20)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x40(0x10)
	struct FGuid ExpressionGUID; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x40(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float MappingScale; // 0x44(0x04)
	float MappingRotation; // 0x48(0x04)
	float MappingPanU; // 0x4c(0x04)
	float MappingPanV; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x40(0x08)
	float PreviewWeight; // 0x48(0x04)
	struct FGuid ExpressionGUID; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x40(0x14)
	struct FExpressionInput LayerNotUsed; // 0x54(0x14)
	struct FName ParameterName; // 0x68(0x08)
	char PreviewUsed : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FGuid ExpressionGUID; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x40(0x14)
	struct FExpressionInput Layer; // 0x54(0x14)
	struct FName ParameterName; // 0x68(0x08)
	float PreviewWeight; // 0x70(0x04)
	struct FVector ConstBase; // 0x74(0x0c)
	struct FGuid ExpressionGUID; // 0x80(0x10)
};

// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FPhysicalMaterialInput> Inputs; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x40(0x10)
};

