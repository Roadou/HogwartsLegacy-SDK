// Class HairStrandsCore.GroomActor
// Size: 0x250 (Inherited: 0x248)
struct AGroomActor : AActor {
	struct UGroomComponent* GroomComponent; // 0x248(0x08)
};

// Class HairStrandsCore.GroomAsset
// Size: 0xf8 (Inherited: 0x28)
struct UGroomAsset : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct FHairGroupInfoWithVisibility> HairGroupsInfo; // 0x30(0x10)
	struct TArray<struct FHairGroupsRendering> HairGroupsRendering; // 0x40(0x10)
	struct TArray<struct FHairGroupsPhysics> HairGroupsPhysics; // 0x50(0x10)
	struct TArray<struct FHairGroupsInterpolation> HairGroupsInterpolation; // 0x60(0x10)
	struct TArray<struct FHairGroupsLOD> HairGroupsLOD; // 0x70(0x10)
	struct TArray<struct FHairGroupsCardsSourceDescription> HairGroupsCards; // 0x80(0x10)
	struct TArray<struct FHairGroupsMeshesSourceDescription> HairGroupsMeshes; // 0x90(0x10)
	struct TArray<struct FHairGroupsMaterial> HairGroupsMaterials; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
	bool EnableGlobalInterpolation; // 0xc0(0x01)
	enum class EGroomInterpolationType HairInterpolationType; // 0xc1(0x01)
	enum class EHairLODSelectionType LODSelectionType; // 0xc2(0x01)
	char pad_C3[0x1]; // 0xc3(0x01)
	struct FPerPlatformInt MinLOD; // 0xc4(0x04)
	struct FPerPlatformBool DisableBelowMinLodStripping; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TArray<float> EffectiveLODBias; // 0xd0(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0xe0(0x10)
	char pad_F0[0x8]; // 0xf0(0x08)
};

// Class HairStrandsCore.GroomAssetImportData
// Size: 0x30 (Inherited: 0x28)
struct UGroomAssetImportData : UAssetImportData {
	struct UGroomImportOptions* ImportOptions; // 0x28(0x08)
};

// Class HairStrandsCore.GroomBindingAsset
// Size: 0xb0 (Inherited: 0x28)
struct UGroomBindingAsset : UObject {
	enum class EGroomBindingMeshType GroomBindingType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UGroomAsset* Groom; // 0x30(0x08)
	struct USkeletalMesh* SourceSkeletalMesh; // 0x38(0x08)
	struct USkeletalMesh* TargetSkeletalMesh; // 0x40(0x08)
	struct UGeometryCache* SourceGeometryCache; // 0x48(0x08)
	struct UGeometryCache* TargetGeometryCache; // 0x50(0x08)
	int32_t NumInterpolationPoints; // 0x58(0x04)
	int32_t MatchingSection; // 0x5c(0x04)
	struct TArray<struct FGoomBindingGroupInfo> GroupInfos; // 0x60(0x10)
	char pad_70[0x40]; // 0x70(0x40)
};

// Class HairStrandsCore.GroomBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGroomBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(struct FString InDesiredPackagePath, struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2298b70
	struct UGroomBindingAsset* CreateNewGroomBindingAsset(struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22989e0
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(struct FString DesiredPackagePath, struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2298b70
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22989e0
};

// Class HairStrandsCore.GroomCache
// Size: 0x68 (Inherited: 0x28)
struct UGroomCache : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FGroomCacheInfo GroomCacheInfo; // 0x30(0x28)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class HairStrandsCore.GroomCacheImportOptions
// Size: 0x48 (Inherited: 0x28)
struct UGroomCacheImportOptions : UObject {
	struct FGroomCacheImportSettings ImportSettings; // 0x28(0x20)
};

// Class HairStrandsCore.GroomCacheImportData
// Size: 0x48 (Inherited: 0x28)
struct UGroomCacheImportData : UAssetImportData {
	struct FGroomCacheImportSettings Settings; // 0x28(0x20)
};

// Class HairStrandsCore.GroomComponent
// Size: 0x5d0 (Inherited: 0x4b0)
struct UGroomComponent : UMeshComponent {
	struct UGroomAsset* GroomAsset; // 0x4b0(0x08)
	struct UGroomCache* GroomCache; // 0x4b8(0x08)
	struct TArray<struct UNiagaraComponent*> NiagaraComponents; // 0x4c0(0x10)
	struct USkeletalMesh* SourceSkeletalMesh; // 0x4d0(0x08)
	struct UGroomBindingAsset* BindingAsset; // 0x4d8(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0x4e0(0x08)
	struct UMaterialInterface* Strands_DebugMaterial; // 0x4e8(0x08)
	struct UMaterialInterface* Strands_DefaultMaterial; // 0x4f0(0x08)
	struct UMaterialInterface* Cards_DefaultMaterial; // 0x4f8(0x08)
	struct UMaterialInterface* Meshes_DefaultMaterial; // 0x500(0x08)
	struct UNiagaraSystem* AngularSpringsSystem; // 0x508(0x08)
	struct UNiagaraSystem* CosseratRodsSystem; // 0x510(0x08)
	struct FString AttachmentName; // 0x518(0x10)
	char pad_528[0x48]; // 0x528(0x48)
	struct TArray<struct FHairGroupDesc> GroomGroupsDesc; // 0x570(0x10)
	bool bRunning; // 0x580(0x01)
	bool bLooping; // 0x581(0x01)
	bool bManualTick; // 0x582(0x01)
	char pad_583[0x1]; // 0x583(0x01)
	float ElapsedTime; // 0x584(0x04)
	char pad_588[0x48]; // 0x588(0x48)

	void SetGroomAsset(struct UGroomAsset* Asset); // Function HairStrandsCore.GroomComponent.SetGroomAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x2298de0
	void SetBindingAsset(struct UGroomBindingAsset* InBinding); // Function HairStrandsCore.GroomComponent.SetBindingAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x2298d50
};

// Class HairStrandsCore.GroomCreateBindingOptions
// Size: 0x58 (Inherited: 0x28)
struct UGroomCreateBindingOptions : UObject {
	enum class EGroomBindingMeshType GroomBindingType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct USkeletalMesh* SourceSkeletalMesh; // 0x30(0x08)
	struct USkeletalMesh* TargetSkeletalMesh; // 0x38(0x08)
	struct UGeometryCache* SourceGeometryCache; // 0x40(0x08)
	struct UGeometryCache* TargetGeometryCache; // 0x48(0x08)
	int32_t NumInterpolationPoints; // 0x50(0x04)
	int32_t MatchingSection; // 0x54(0x04)
};

// Class HairStrandsCore.GroomCreateFollicleMaskOptions
// Size: 0x40 (Inherited: 0x28)
struct UGroomCreateFollicleMaskOptions : UObject {
	int32_t Resolution; // 0x28(0x04)
	int32_t RootRadius; // 0x2c(0x04)
	struct TArray<struct FFollicleMaskOptions> Grooms; // 0x30(0x10)
};

// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
// Size: 0x68 (Inherited: 0x28)
struct UGroomCreateStrandsTexturesOptions : UObject {
	int32_t Resolution; // 0x28(0x04)
	enum class EStrandsTexturesTraceType TraceType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float TraceDistance; // 0x30(0x04)
	enum class EStrandsTexturesMeshType MeshType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UStaticMesh* StaticMesh; // 0x38(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x40(0x08)
	int32_t LODIndex; // 0x48(0x04)
	int32_t SectionIndex; // 0x4c(0x04)
	int32_t UVChannelIndex; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<int32_t> GroupIndex; // 0x58(0x10)
};

// Class HairStrandsCore.GroomImportOptions
// Size: 0x50 (Inherited: 0x28)
struct UGroomImportOptions : UObject {
	struct FGroomConversionSettings ConversionSettings; // 0x28(0x18)
	struct TArray<struct FHairGroupsInterpolation> InterpolationSettings; // 0x40(0x10)
};

// Class HairStrandsCore.GroomHairGroupsPreview
// Size: 0x38 (Inherited: 0x28)
struct UGroomHairGroupsPreview : UObject {
	struct TArray<struct FGroomHairGroupPreview> Groups; // 0x28(0x10)
};

// Class HairStrandsCore.GroomPluginSettings
// Size: 0x30 (Inherited: 0x28)
struct UGroomPluginSettings : UObject {
	float GroomCacheLookAheadBuffer; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class HairStrandsCore.MovieSceneGroomCacheSection
// Size: 0x108 (Inherited: 0xe8)
struct UMovieSceneGroomCacheSection : UMovieSceneSection {
	struct FMovieSceneGroomCacheParams Params; // 0xe8(0x20)
};

// Class HairStrandsCore.MovieSceneGroomCacheTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneGroomCacheTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x98(0x10)
};

// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterfaceHairStrands : UNiagaraDataInterface {
	struct UGroomAsset* DefaultSource; // 0x38(0x08)
	struct AActor* SourceActor; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfacePhysicsAsset : UNiagaraDataInterface {
	struct UPhysicsAsset* DefaultSource; // 0x38(0x08)
	struct AActor* SourceActor; // 0x40(0x08)
	char pad_48[0x20]; // 0x48(0x20)
};

// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
// Size: 0xe8 (Inherited: 0xd8)
struct UNiagaraDataInterfaceVelocityGrid : UNiagaraDataInterfaceRWBase {
	struct FIntVector GridSize; // 0xd8(0x0c)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
// Size: 0xe8 (Inherited: 0xe8)
struct UNiagaraDataInterfacePressureGrid : UNiagaraDataInterfaceVelocityGrid {
};

