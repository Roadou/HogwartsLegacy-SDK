// Class DatasmithContent.DatasmithObjectTemplate
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithObjectTemplate : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class DatasmithContent.DatasmithActorTemplate
// Size: 0xd0 (Inherited: 0x30)
struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	struct TSet<struct FName> Layers; // 0x30(0x50)
	struct TSet<struct FName> Tags; // 0x80(0x50)
};

// Class DatasmithContent.DatasmithAdditionalData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithAdditionalData : UObject {
};

// Class DatasmithContent.DatasmithAreaLightActor
// Size: 0x2a0 (Inherited: 0x248)
struct ADatasmithAreaLightActor : AActor {
	enum class EComponentMobility Mobility; // 0x248(0x01)
	enum class EDatasmithAreaLightActorType LightType; // 0x249(0x01)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x24a(0x01)
	char pad_24B[0x1]; // 0x24b(0x01)
	struct FVector2D Dimensions; // 0x24c(0x08)
	float Intensity; // 0x254(0x04)
	enum class ELightUnits IntensityUnits; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	struct FLinearColor Color; // 0x25c(0x10)
	float Temperature; // 0x26c(0x04)
	struct UTextureLightProfile* IESTexture; // 0x270(0x08)
	bool bUseIESBrightness; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float IESBrightnessScale; // 0x27c(0x04)
	struct FRotator Rotation; // 0x280(0x0c)
	float SourceRadius; // 0x28c(0x04)
	float SourceLength; // 0x290(0x04)
	float AttenuationRadius; // 0x294(0x04)
	float SpotlightInnerAngle; // 0x298(0x04)
	float SpotlightOuterAngle; // 0x29c(0x04)
};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
// Size: 0xa0 (Inherited: 0x30)
struct UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate {
	enum class EDatasmithAreaLightActorType LightType; // 0x30(0x01)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FVector2D Dimensions; // 0x34(0x08)
	struct FLinearColor Color; // 0x3c(0x10)
	float Intensity; // 0x4c(0x04)
	enum class ELightUnits IntensityUnits; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float Temperature; // 0x54(0x04)
	struct TSoftObjectPtr<UTextureLightProfile> IESTexture; // 0x58(0x28)
	bool bUseIESBrightness; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float IESBrightnessScale; // 0x84(0x04)
	struct FRotator Rotation; // 0x88(0x0c)
	float SourceRadius; // 0x94(0x04)
	float SourceLength; // 0x98(0x04)
	float AttenuationRadius; // 0x9c(0x04)
};

// Class DatasmithContent.DatasmithAssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithAssetImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithStaticMeshImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshCADImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData {
};

// Class DatasmithContent.DatasmithSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithSceneImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithTranslatedSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithCADImportSceneData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithCADImportSceneData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithMDLSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithMDLSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithGLTFSceneImportData
// Size: 0x70 (Inherited: 0x28)
struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData {
	struct FString Generator; // 0x28(0x10)
	float Version; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString Author; // 0x40(0x10)
	struct FString License; // 0x50(0x10)
	struct FString Source; // 0x60(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	struct FString SourceMeshName; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithFBXSceneImportData
// Size: 0x48 (Inherited: 0x28)
struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString TexturesDir; // 0x30(0x10)
	char IntermediateSerialization; // 0x40(0x01)
	bool bColorizeMaterials; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// Size: 0x90 (Inherited: 0x48)
struct UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48(0x01)
	bool bOptimizeDuplicatedNodes; // 0x49(0x01)
	bool bRemoveInvisibleNodes; // 0x4a(0x01)
	bool bSimplifyNodeHierarchy; // 0x4b(0x01)
	bool bImportVar; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FString VarPath; // 0x50(0x10)
	bool bImportPos; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString PosPath; // 0x68(0x10)
	bool bImportTml; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString TmlPath; // 0x80(0x10)
};

// Class DatasmithContent.DatasmithVREDAssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithVREDAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithVREDSceneImportData
// Size: 0xa8 (Inherited: 0x48)
struct UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48(0x01)
	bool bOptimizeDuplicatedNodes; // 0x49(0x01)
	bool bImportMats; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	struct FString MatsPath; // 0x50(0x10)
	bool bImportVar; // 0x60(0x01)
	bool bCleanVar; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct FString VarPath; // 0x68(0x10)
	bool bImportLightInfo; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString LightInfoPath; // 0x80(0x10)
	bool bImportClipInfo; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString ClipInfoPath; // 0x98(0x10)
};

// Class DatasmithContent.DatasmithIFCSceneImportData
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithIFCSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	struct FString SourceGlobalId; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithAssetUserData
// Size: 0x78 (Inherited: 0x28)
struct UDatasmithAssetUserData : UAssetUserData {
	struct TMap<struct FName, struct FString> MetaData; // 0x28(0x50)
};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
// Size: 0x60 (Inherited: 0x30)
struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30(0x30)
};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// Size: 0x90 (Inherited: 0x30)
struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30(0x08)
	struct FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38(0x04)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c(0x08)
	float CurrentFocalLength; // 0x44(0x04)
	float CurrentAperture; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50(0x40)
};

// Class DatasmithContent.DatasmithContentBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FString GetDatasmithUserDataValueForKey(struct UObject* Object, struct FName Key); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x23fcd70
	void GetDatasmithUserDataKeysAndValuesForValue(struct UObject* Object, struct FString StringToMatch, struct TArray<struct FName>& OutKeys, struct TArray<struct FString>& OutValues); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x23fcbb0
	struct UDatasmithAssetUserData* GetDatasmithUserData(struct UObject* Object); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x23fcb20
};

// Class DatasmithContent.DatasmithCustomActionBase
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithCustomActionBase : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class DatasmithContent.DatasmithDecalComponentTemplate
// Size: 0x48 (Inherited: 0x30)
struct UDatasmithDecalComponentTemplate : UDatasmithObjectTemplate {
	int32_t SortOrder; // 0x30(0x04)
	struct FVector DecalSize; // 0x34(0x0c)
	struct UMaterialInterface* Material; // 0x40(0x08)
};

// Class DatasmithContent.DatasmithImportedSequencesActor
// Size: 0x258 (Inherited: 0x248)
struct ADatasmithImportedSequencesActor : AActor {
	struct TArray<struct ULevelSequence*> ImportedSequences; // 0x248(0x10)

	void PlayLevelSequence(struct ULevelSequence* SequenceToPlay); // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x1480ed0
};

// Class DatasmithContent.DatasmithOptionsBase
// Size: 0x28 (Inherited: 0x28)
struct UDatasmithOptionsBase : UObject {
};

// Class DatasmithContent.DatasmithCommonTessellationOptions
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase {
	struct FDatasmithTessellationOptions OPTIONS; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithImportOptions
// Size: 0x70 (Inherited: 0x28)
struct UDatasmithImportOptions : UDatasmithOptionsBase {
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x28(0x01)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x29(0x01)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x2a(0x01)
	enum class EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x2b(0x01)
	enum class EDatasmithImportActorPolicy LightImportPolicy; // 0x2c(0x01)
	enum class EDatasmithImportActorPolicy CameraImportPolicy; // 0x2d(0x01)
	enum class EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x2e(0x01)
	enum class EDatasmithImportMaterialQuality MaterialQuality; // 0x2f(0x01)
	struct FDatasmithImportBaseOptions BaseOptions; // 0x30(0x14)
	struct FDatasmithReimportOptions ReimportOptions; // 0x44(0x02)
	char pad_46[0x2]; // 0x46(0x02)
	struct FString Filename; // 0x48(0x10)
	struct FString FilePath; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class DatasmithContent.DatasmithLandscapeTemplate
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	struct UMaterialInterface* LandscapeMaterial; // 0x30(0x08)
	int32_t StaticLightingLOD; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class DatasmithContent.DatasmithLightComponentTemplate
// Size: 0x68 (Inherited: 0x30)
struct UDatasmithLightComponentTemplate : UDatasmithObjectTemplate {
	char bVisible : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	char CastShadows : 1; // 0x34(0x01)
	char bUseTemperature : 1; // 0x34(0x01)
	char bUseIESBrightness : 1; // 0x34(0x01)
	char pad_34_3 : 5; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float Intensity; // 0x38(0x04)
	float Temperature; // 0x3c(0x04)
	float IESBrightnessScale; // 0x40(0x04)
	struct FLinearColor LightColor; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
	struct UMaterialInterface* LightFunctionMaterial; // 0x58(0x08)
	struct UTextureLightProfile* IESTexture; // 0x60(0x08)
};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// Size: 0x198 (Inherited: 0x30)
struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	struct TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30(0x28)
	struct TMap<struct FName, float> ScalarParameterValues; // 0x58(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues; // 0xa8(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xf8(0x50)
	struct FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148(0x50)
};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ELightUnits IntensityUnits; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float SourceRadius; // 0x34(0x04)
	float SourceLength; // 0x38(0x04)
	float AttenuationRadius; // 0x3c(0x04)
};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// Size: 0x80 (Inherited: 0x30)
struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	struct FDatasmithPostProcessSettingsTemplate Settings; // 0x30(0x40)
	char bEnabled : 1; // 0x70(0x01)
	char bUnbound : 1; // 0x70(0x01)
	char pad_70_2 : 6; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)
};

// Class DatasmithContent.DatasmithScene
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithScene : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class DatasmithContent.DatasmithSceneActor
// Size: 0x2a0 (Inherited: 0x248)
struct ADatasmithSceneActor : AActor {
	struct UDatasmithScene* Scene; // 0x248(0x08)
	struct TMap<struct FName, struct TSoftObjectPtr<AActor>> RelatedActors; // 0x250(0x50)
};

// Class DatasmithContent.DatasmithSceneComponentTemplate
// Size: 0xf0 (Inherited: 0x30)
struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	struct FTransform RelativeTransform; // 0x30(0x30)
	enum class EComponentMobility Mobility; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TSoftObjectPtr<USceneComponent> AttachParent; // 0x68(0x28)
	bool bVisible; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TSet<struct FName> Tags; // 0x98(0x50)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ESkyLightSourceType SourceType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t CubemapResolution; // 0x34(0x04)
	struct UTextureCube* CubeMap; // 0x38(0x08)
};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// Size: 0x38 (Inherited: 0x30)
struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; // 0x30(0x04)
	float OuterConeAngle; // 0x34(0x04)
};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// Size: 0x48 (Inherited: 0x30)
struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	struct UStaticMesh* StaticMesh; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x38(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshTemplate
// Size: 0xa8 (Inherited: 0x30)
struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30(0x50)
	int32_t LightMapCoordinateIndex; // 0x80(0x04)
	int32_t LightMapResolution; // 0x84(0x04)
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88(0x10)
	struct TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98(0x10)
};

