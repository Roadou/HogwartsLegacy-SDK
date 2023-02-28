// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x58 (Inherited: 0x28)
struct UHoudiniAsset : UObject {
	struct FString AssetFileName; // 0x28(0x10)
	struct UThumbnailInfo* ThumbnailInfo; // 0x38(0x08)
	char pad_40[0x18]; // 0x40(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x258 (Inherited: 0x248)
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x248(0x08)
	char pad_250[0x8]; // 0x250(0x08)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0xc10 (Inherited: 0x480)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	char pad_480[0x8]; // 0x480(0x08)
	char bGeneratedDoubleSidedGeometry : 1; // 0x488(0x01)
	char pad_488_1 : 7; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct UPhysicalMaterial* GeneratedPhysMaterial; // 0x490(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0x498(0x158)
	enum class ECollisionTraceFlag GeneratedCollisionTraceFlag; // 0x5f0(0x01)
	char pad_5F1[0x3]; // 0x5f1(0x03)
	int32_t GeneratedLightMapResolution; // 0x5f4(0x04)
	float GeneratedLpvBiasMultiplier; // 0x5f8(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x5fc(0x04)
	struct FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x600(0x10)
	int32_t GeneratedLightMapCoordinateIndex; // 0x610(0x04)
	char bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x614(0x01)
	char pad_614_1 : 7; // 0x614(0x01)
	char pad_615[0x3]; // 0x615(0x03)
	float GeneratedStreamingDistanceMultiplier; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x620(0x08)
	struct TArray<struct UAssetUserData*> GeneratedAssetUserData; // 0x628(0x10)
	char pad_638[0x4c8]; // 0x638(0x4c8)
	struct FText BakeFolder; // 0xb00(0x18)
	struct FText TempCookFolder; // 0xb18(0x18)
	char pad_B30[0xe0]; // 0xb30(0xe0)

	int32_t GetAssetId(); // Function HoudiniEngineRuntime.HoudiniAssetComponent.GetAssetId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fab8a0
};

// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials
// Size: 0xd0 (Inherited: 0x28)
struct UHoudiniAssetComponentMaterials : UObject {
	char pad_28[0xa8]; // 0x28(0xa8)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameter
// Size: 0xa0 (Inherited: 0x28)
struct UHoudiniAssetParameter : UObject {
	char pad_28[0x78]; // 0x28(0x78)
};

// Class HoudiniEngineRuntime.HoudiniAssetInput
// Size: 0x220 (Inherited: 0xa0)
struct UHoudiniAssetInput : UHoudiniAssetParameter {
	char pad_A0[0x180]; // 0xa0(0x180)
};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
// Size: 0x180 (Inherited: 0xa0)
struct UHoudiniAssetInstanceInput : UHoudiniAssetParameter {
	char pad_A0[0xe0]; // 0xa0(0xe0)
};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
// Size: 0x1a0 (Inherited: 0x28)
struct UHoudiniAssetInstanceInputField : UObject {
	char pad_28[0x178]; // 0x28(0x178)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// Size: 0xa0 (Inherited: 0xa0)
struct UHoudiniAssetParameterButton : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// Size: 0xd8 (Inherited: 0xa0)
struct UHoudiniAssetParameterChoice : UHoudiniAssetParameter {
	char pad_A0[0x38]; // 0xa0(0x38)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// Size: 0xb0 (Inherited: 0xa0)
struct UHoudiniAssetParameterColor : UHoudiniAssetParameter {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// Size: 0xc8 (Inherited: 0xa0)
struct UHoudiniAssetParameterFile : UHoudiniAssetParameter {
	char pad_A0[0x28]; // 0xa0(0x28)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// Size: 0xd8 (Inherited: 0xa0)
struct UHoudiniAssetParameterFloat : UHoudiniAssetParameter {
	char pad_A0[0x38]; // 0xa0(0x38)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// Size: 0xa0 (Inherited: 0xa0)
struct UHoudiniAssetParameterFolder : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// Size: 0xa0 (Inherited: 0xa0)
struct UHoudiniAssetParameterFolderList : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// Size: 0xd0 (Inherited: 0xa0)
struct UHoudiniAssetParameterInt : UHoudiniAssetParameter {
	char pad_A0[0x30]; // 0xa0(0x30)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// Size: 0xa0 (Inherited: 0xa0)
struct UHoudiniAssetParameterLabel : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// Size: 0xb0 (Inherited: 0xa0)
struct UHoudiniAssetParameterMultiparm : UHoudiniAssetParameter {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveFloat
// Size: 0xc0 (Inherited: 0xb8)
struct UHoudiniAssetParameterRampCurveFloat : UCurveFloat {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveColor
// Size: 0x268 (Inherited: 0x250)
struct UHoudiniAssetParameterRampCurveColor : UCurveLinearColor {
	char pad_250[0x18]; // 0x250(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// Size: 0xc8 (Inherited: 0xb0)
struct UHoudiniAssetParameterRamp : UHoudiniAssetParameterMultiparm {
	char pad_B0[0x18]; // 0xb0(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// Size: 0xa0 (Inherited: 0xa0)
struct UHoudiniAssetParameterSeparator : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterString
// Size: 0xb0 (Inherited: 0xa0)
struct UHoudiniAssetParameterString : UHoudiniAssetParameter {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// Size: 0xb0 (Inherited: 0xa0)
struct UHoudiniAssetParameterToggle : UHoudiniAssetParameter {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAttributeDataComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UHoudiniAttributeDataComponent : UActorComponent {
	char pad_C8[0x10]; // 0xc8(0x10)
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniEngineConvertBgeoCommandlet : UCommandlet {
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniEngineConvertBgeoDirCommandlet : UCommandlet {
};

// Class HoudiniEngineRuntime.TestHoudiniParameterBuilder
// Size: 0xc8 (Inherited: 0x28)
struct UTestHoudiniParameterBuilder : UObject {
	char pad_28[0xa0]; // 0x28(0xa0)
};

// Class HoudiniEngineRuntime.HoudiniHandleComponent
// Size: 0x2d0 (Inherited: 0x220)
struct UHoudiniHandleComponent : USceneComponent {
	char pad_220[0xa8]; // 0x220(0xa8)
	enum class EHoudiniHandleType HandleType; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
};

// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// Size: 0x230 (Inherited: 0x220)
struct UHoudiniInstancedActorComponent : USceneComponent {
	struct UObject* InstancedAsset; // 0x218(0x08)
	struct TArray<struct AActor*> Instances; // 0x220(0x10)
};

// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// Size: 0x240 (Inherited: 0x220)
struct UHoudiniMeshSplitInstancerComponent : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x218(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x228(0x08)
	struct UStaticMesh* InstancedMesh; // 0x230(0x08)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x3c8 (Inherited: 0x28)
struct UHoudiniRuntimeSettings : UObject {
	enum class EHoudiniRuntimeSettingsSessionType SessionType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString ServerHost; // 0x30(0x10)
	int32_t ServerPort; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ServerPipeName; // 0x48(0x10)
	bool bStartAutomaticServer; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float AutomaticServerTimeout; // 0x5c(0x04)
	bool bShowMultiAssetDialog; // 0x60(0x01)
	bool bPauseCookingOnStart; // 0x61(0x01)
	bool bEnableCooking; // 0x62(0x01)
	bool bUploadTransformsToHoudiniEngine; // 0x63(0x01)
	bool bTransformChangeTriggersCooks; // 0x64(0x01)
	bool bDisplaySlateCookingNotifications; // 0x65(0x01)
	bool bCookCurvesOnMouseRelease; // 0x66(0x01)
	char pad_67[0x1]; // 0x67(0x01)
	struct FText TemporaryCookFolder; // 0x68(0x18)
	bool bTreatRampParametersAsMultiparms; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString CollisionGroupNamePrefix; // 0x88(0x10)
	struct FString RenderedCollisionGroupNamePrefix; // 0x98(0x10)
	struct FString UCXCollisionGroupNamePrefix; // 0xa8(0x10)
	struct FString UCXRenderedCollisionGroupNamePrefix; // 0xb8(0x10)
	struct FString SimpleCollisionGroupNamePrefix; // 0xc8(0x10)
	struct FString SimpleRenderedCollisionGroupNamePrefix; // 0xd8(0x10)
	struct FString MarshallingAttributeMaterial; // 0xe8(0x10)
	struct FString MarshallingAttributeMaterialHole; // 0xf8(0x10)
	struct FString MarshallingAttributeInstanceOverride; // 0x108(0x10)
	struct FString MarshallingAttributeFaceSmoothingMask; // 0x118(0x10)
	struct FString MarshallingAttributeLightmapResolution; // 0x128(0x10)
	struct FString MarshallingAttributeGeneratedMeshName; // 0x138(0x10)
	struct FString MarshallingAttributeInputMeshName; // 0x148(0x10)
	struct FString MarshallingAttributeInputSourceFile; // 0x158(0x10)
	float MarshallingSplineResolution; // 0x168(0x04)
	bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x16c(0x01)
	bool MarshallingLandscapesUseFullResolution; // 0x16d(0x01)
	bool MarshallingLandscapesForceMinMaxValues; // 0x16e(0x01)
	char pad_16F[0x1]; // 0x16f(0x01)
	float MarshallingLandscapesForcedMinValue; // 0x170(0x04)
	float MarshallingLandscapesForcedMaxValue; // 0x174(0x04)
	float GeneratedGeometryScaleFactor; // 0x178(0x04)
	float TransformScaleFactor; // 0x17c(0x04)
	enum class EHoudiniRuntimeSettingsAxisImport ImportAxis; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	char bDoubleSidedGeometry : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x188(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0x190(0x158)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	int32_t LightMapResolution; // 0x2ec(0x04)
	float LpvBiasMultiplier; // 0x2f0(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x2f4(0x04)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0x2f8(0x10)
	int32_t LightMapCoordinateIndex; // 0x308(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x30c(0x01)
	char pad_30C_1 : 7; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	float StreamingDistanceMultiplier; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct UFoliageType_InstancedStaticMesh* FoliageDefaultSettings; // 0x318(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x320(0x10)
	bool bUseFullPrecisionUVs; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	int32_t SrcLightmapIndex; // 0x334(0x04)
	int32_t DstLightmapIndex; // 0x338(0x04)
	int32_t MinLightmapResolution; // 0x33c(0x04)
	bool bRemoveDegenerates; // 0x340(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag; // 0x341(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag; // 0x342(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag; // 0x343(0x01)
	bool bUseMikkTSpace; // 0x344(0x01)
	bool bBuildAdjacencyBuffer; // 0x345(0x01)
	bool bUseCustomHoudiniLocation; // 0x346(0x01)
	char pad_347[0x1]; // 0x347(0x01)
	struct FDirectoryPath CustomHoudiniLocation; // 0x348(0x10)
	bool bHidePlacementModeHoudiniTools; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct TArray<struct FHoudiniToolDirectory> CustomHoudiniToolsLocation; // 0x360(0x10)
	int32_t CookingThreadStackSize; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x378(0x10)
	struct FString OtlSearchPath; // 0x388(0x10)
	struct FString DsoSearchPath; // 0x398(0x10)
	struct FString ImageDsoSearchPath; // 0x3a8(0x10)
	struct FString AudioDsoSearchPath; // 0x3b8(0x10)
};

// Class HoudiniEngineRuntime.HoudiniSplineComponent
// Size: 0x320 (Inherited: 0x220)
struct UHoudiniSplineComponent : USceneComponent {
	char pad_220[0x100]; // 0x220(0x100)
};

