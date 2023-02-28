// Class UtilitiesRuntime.BlueprintHelper
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintHelper : UBlueprintFunctionLibrary {

	struct TArray<struct FString> SortStrings(struct TArray<struct FString> Strings); // Function UtilitiesRuntime.BlueprintHelper.SortStrings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb31d0
	struct TArray<struct FName> SortNames(struct TArray<struct FName> Names); // Function UtilitiesRuntime.BlueprintHelper.SortNames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a47b0
	struct TArray<int32_t> SortInts(struct TArray<int32_t> Ints); // Function UtilitiesRuntime.BlueprintHelper.SortInts // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb30a0
	bool SkipCriticalLoad(); // Function UtilitiesRuntime.BlueprintHelper.SkipCriticalLoad // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb3070
	bool SetSceneComponentMobility(struct USceneComponent* SceneComp, enum class EComponentMobility NewMobility); // Function UtilitiesRuntime.BlueprintHelper.SetSceneComponentMobility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb2c60
	struct UObject* ResolveSoftClassReference(struct TSoftClassPtr<UObject> Class); // Function UtilitiesRuntime.BlueprintHelper.ResolveSoftClassReference // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5bb2810
	void RemoveDataTableRow(struct UDataTable* Table, struct FName RowName); // Function UtilitiesRuntime.BlueprintHelper.RemoveDataTableRow // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb2750
	struct TArray<struct FLandscapeRoadData> RecursiveGetLandscapeRoadsDataFromProxy(struct ALandscapeProxy* Prxy); // Function UtilitiesRuntime.BlueprintHelper.RecursiveGetLandscapeRoadsDataFromProxy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb2680
	struct TArray<struct FLandscapeRoadData> RecursiveGetLandscapeRoadsData(); // Function UtilitiesRuntime.BlueprintHelper.RecursiveGetLandscapeRoadsData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb2610
	bool PositionCameraToFitActor(struct UCameraComponent* Camera, struct AActor* Actor, struct TArray<struct FString> OnlyTheseComponents, float Padding, float AspectRatio); // Function UtilitiesRuntime.BlueprintHelper.PositionCameraToFitActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb2300
	void LoadSyncronousStaticMesh(struct TSoftObjectPtr<UStaticMesh> UnloadedMesh, struct UStaticMesh*& LoadedMesh); // Function UtilitiesRuntime.BlueprintHelper.LoadSyncronousStaticMesh // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb20b0
	void LoadSyncronousActorClass(struct TSoftClassPtr<UObject> UnloadedClass, struct AActor*& LoadedClass); // Function UtilitiesRuntime.BlueprintHelper.LoadSyncronousActorClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb1f60
	bool IsPointOnCamera(struct UObject* WorldContextObject, struct FVector Point, float MarginPercent, int32_t PlayerIndex); // Function UtilitiesRuntime.BlueprintHelper.IsPointOnCamera // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5bb1e00
	void IsPlayerCharacter(struct AActor* Actor, enum class EIsPlayer& Branches); // Function UtilitiesRuntime.BlueprintHelper.IsPlayerCharacter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb1d30
	bool IsObjectInGameWorld(struct UObject* Object); // Function UtilitiesRuntime.BlueprintHelper.IsObjectInGameWorld // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb1ca0
	struct TArray<struct FString> GetWorldOptions(struct UObject* WorldContextObject); // Function UtilitiesRuntime.BlueprintHelper.GetWorldOptions // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5bb1980
	struct UWorld* GetWorldFromLevelScriptable(struct ULevel* InLevel); // Function UtilitiesRuntime.BlueprintHelper.GetWorldFromLevelScriptable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5bb18f0
	struct UWorld* GetWorldFromLevel(struct ULevel* InLevel); // Function UtilitiesRuntime.BlueprintHelper.GetWorldFromLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5bb18f0
	struct ULevel* GetPersistentLevel(struct UObject* WorldContextObject); // Function UtilitiesRuntime.BlueprintHelper.GetPersistentLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bafb90
	struct ULevel* GetLoadedLevelFromStreamingLevel(struct ULevelStreaming* InStreamingLevel); // Function UtilitiesRuntime.BlueprintHelper.GetLoadedLevelFromStreamingLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5bafb00
	struct FString GetLevelName(struct ULevel* InLevel); // Function UtilitiesRuntime.BlueprintHelper.GetLevelName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5baf9b0
	struct ULevel* GetLevelFromActorScriptable(struct AActor* InActor); // Function UtilitiesRuntime.BlueprintHelper.GetLevelFromActorScriptable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5baf920
	struct ULevel* GetLevelFromActor(struct AActor* InActor); // Function UtilitiesRuntime.BlueprintHelper.GetLevelFromActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5baf920
	struct ULevel* GetCurrentLevel(struct UObject* WorldContextObject); // Function UtilitiesRuntime.BlueprintHelper.GetCurrentLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5baf6a0
	bool GetCameraPositionToFitActor(struct AActor* Actor, struct FVector CameraDir, float HorizontalFieldOfView, float AspectRatio, struct FVector& OutCameraPos, struct FVector& OutTargetPos, struct TArray<struct FString> OnlyTheseComponents, float Padding); // Function UtilitiesRuntime.BlueprintHelper.GetCameraPositionToFitActor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5baf330
	void GetActorBounds(struct AActor* Actor, struct FVector& Origin, struct FVector& BoxExtent); // Function UtilitiesRuntime.BlueprintHelper.GetActorBounds // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5baefd0
	struct FBox GetActorBoundingBox(struct AActor* Actor); // Function UtilitiesRuntime.BlueprintHelper.GetActorBoundingBox // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5baef30
	struct FBox GetAccurateActorBounds(struct AActor* Actor, struct TArray<struct FString> OnlyTheseComponents); // Function UtilitiesRuntime.BlueprintHelper.GetAccurateActorBounds // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5baed50
	bool ForceUnloadLevels(); // Function UtilitiesRuntime.BlueprintHelper.ForceUnloadLevels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5baed20
	bool ForceSimpleLevels(); // Function UtilitiesRuntime.BlueprintHelper.ForceSimpleLevels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5baecf0
	bool ForceLoadMaps(); // Function UtilitiesRuntime.BlueprintHelper.ForceLoadMaps // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5baecc0
	bool ForceFullLevels(); // Function UtilitiesRuntime.BlueprintHelper.ForceFullLevels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5baec90
	bool FloatCurve_FindTimeFromValue(struct UCurveFloat* CurveFloat, float InValue, float& OutValue); // Function UtilitiesRuntime.BlueprintHelper.FloatCurve_FindTimeFromValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5baeb80
	struct ULevelStreaming* FindLevelStreamingForLevel(struct ULevel* InLevel); // Function UtilitiesRuntime.BlueprintHelper.FindLevelStreamingForLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5baea20
	float EvaluateFloatCurve(struct FInterpCurveFloat& InterpFloatCurve, float Pos, float DefaultValue); // Function UtilitiesRuntime.BlueprintHelper.EvaluateFloatCurve // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5bae8e0
	bool DisplayMapName(); // Function UtilitiesRuntime.BlueprintHelper.DisplayMapName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bae670
	struct FInterpCurveFloat CreateFloatCurve(struct TArray<float> Values); // Function UtilitiesRuntime.BlueprintHelper.CreateFloatCurve // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bae2f0
	void CompareAgainstHashKey(struct FString S, int32_t Key, enum class ETwoBranches& Branches); // Function UtilitiesRuntime.BlueprintHelper.CompareAgainstHashKey // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5bae1d0
};

// Class UtilitiesRuntime.ManagedStateComponent
// Size: 0x170 (Inherited: 0xc8)
struct UManagedStateComponent : UActorComponent {
	char pad_C8[0xa8]; // 0xc8(0xa8)

	void BP_TryFinishSettingHiddenUnprioritized(struct AActor* Actor, struct UObject* Provider); // Function UtilitiesRuntime.ManagedStateComponent.BP_TryFinishSettingHiddenUnprioritized // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x5badea0
	void BP_StartSettingHiddenUnprioritized(struct AActor* Actor, bool IsHidden, struct UObject* Provider); // Function UtilitiesRuntime.ManagedStateComponent.BP_StartSettingHiddenUnprioritized // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x5bae0c0
	void BP_StartSettingHiddenPrioritized(struct AActor* Actor, bool IsHidden, enum class EManagedVisibilityPriority Priority, struct UObject* Provider); // Function UtilitiesRuntime.ManagedStateComponent.BP_StartSettingHiddenPrioritized // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x5badf60
	void BP_FinishSettingHiddenUnprioritized(struct AActor* Actor, struct UObject* Provider); // Function UtilitiesRuntime.ManagedStateComponent.BP_FinishSettingHiddenUnprioritized // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x5badea0
	void BP_FinishSettingHiddenPrioritized(struct AActor* Actor, enum class EManagedVisibilityPriority Priority, struct UObject* Provider); // Function UtilitiesRuntime.ManagedStateComponent.BP_FinishSettingHiddenPrioritized // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x5badda0
};

// Class UtilitiesRuntime.ManagedCharacterComponent
// Size: 0x3b0 (Inherited: 0x170)
struct UManagedCharacterComponent : UManagedStateComponent {
	char pad_170[0x240]; // 0x170(0x240)

	void StartSettingMovementMode(enum class EMovementMode InMovementMode, enum class EManagedMovementModePriority Priority, struct UObject* Provider); // Function UtilitiesRuntime.ManagedCharacterComponent.StartSettingMovementMode // (Final|Native|Public|BlueprintCallable) // @ game+0x5bb3390
	void SetStartFacialEmotionWithTags(enum class EFacialEmotion Emotion, struct UObject* Provider, float Transition, enum class EManagedFacialEmotionPriority ManagedFacialEmotionPriority, struct FGameplayTagContainer AnimTags); // Function UtilitiesRuntime.ManagedCharacterComponent.SetStartFacialEmotionWithTags // (Final|Native|Public|BlueprintCallable) // @ game+0x5bb2e90
	void SetStartFacialEmotion(enum class EFacialEmotion Emotion, struct UObject* Provider, float Transition, enum class EManagedFacialEmotionPriority ManagedFacialEmotionPriority); // Function UtilitiesRuntime.ManagedCharacterComponent.SetStartFacialEmotion // (Final|Native|Public|BlueprintCallable) // @ game+0x5bb2d30
	void SetFinishFacialEmotion(struct UObject* Provider, enum class EManagedFacialEmotionPriority ManagedFacialEmotionPriority); // Function UtilitiesRuntime.ManagedCharacterComponent.SetFinishFacialEmotion // (Final|Native|Public|BlueprintCallable) // @ game+0x5bb2b90
	void SetDefaultFacialEmotion(enum class EFacialEmotion Emotion, float Transition); // Function UtilitiesRuntime.ManagedCharacterComponent.SetDefaultFacialEmotion // (Final|Native|Public|BlueprintCallable) // @ game+0x5bb2ac0
	void FinishSettingMovementMode(enum class EManagedMovementModePriority Priority, struct UObject* Provider); // Function UtilitiesRuntime.ManagedCharacterComponent.FinishSettingMovementMode // (Final|Native|Public|BlueprintCallable) // @ game+0x5baeab0
};

// Class UtilitiesRuntime.PreferredNavDataPathFollowingComponent
// Size: 0x298 (Inherited: 0x268)
struct UPreferredNavDataPathFollowingComponent : UPathFollowingComponent {
	struct FSoftClassPath PreferredNavData; // 0x268(0x18)
	struct FSoftClassPath ReplacedNavData; // 0x280(0x18)
};

// Class UtilitiesRuntime.LoadComplete
// Size: 0x30 (Inherited: 0x28)
struct ULoadComplete : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void OnLoadCompleteCallback(); // Function UtilitiesRuntime.LoadComplete.OnLoadCompleteCallback // (Final|Native|Public) // @ game+0x5bb22e0
};

// Class UtilitiesRuntime.IconEditorFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIconEditorFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateIconTableRow(struct UDataTable* Table, struct FName RowName, struct FIconInfo& IconInfo, bool bSave); // Function UtilitiesRuntime.IconEditorFunctionLibrary.UpdateIconTableRow // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb34a0
	void SaveImageFromRenderTargets(struct FName Name, struct UTextureRenderTarget2D* ColorTextureRenderTarget, int32_t DownResFactor); // Function UtilitiesRuntime.IconEditorFunctionLibrary.SaveImageFromRenderTargets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb29c0
	struct TArray<struct UAnimSequence*> GetAnimationsForSkeleton(struct USkeleton* Skeleton); // Function UtilitiesRuntime.IconEditorFunctionLibrary.GetAnimationsForSkeleton // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5baf260
	struct UTexture2D* CreateTextureFromRenderTargets(struct UTextureRenderTarget2D* ColorTextureRenderTarget, struct FString PackageName, int32_t DownResFactor); // Function UtilitiesRuntime.IconEditorFunctionLibrary.CreateTextureFromRenderTargets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bae430
};

// Class UtilitiesRuntime.CurtainStageSettings
// Size: 0x38 (Inherited: 0x28)
struct UCurtainStageSettings : UObject {
	struct TArray<struct FCurtainStageEntry> CurtainStages; // 0x28(0x10)
};

// Class UtilitiesRuntime.CurtainSubsystem
// Size: 0x140 (Inherited: 0x30)
struct UCurtainSubsystem : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct UUserWidget* CurtainWidgetClass; // 0x38(0x08)
	struct FMulticastInlineDelegate OnCurtainLowered; // 0x40(0x10)
	struct FMulticastInlineDelegate OnCurtainRaised; // 0x50(0x10)
	struct FMulticastInlineDelegate OnLienholdersChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnCurtainStageOptionsChanged; // 0x70(0x10)
	char pad_80[0xa8]; // 0x80(0xa8)
	struct UUserWidget* CurtainWidget; // 0x128(0x08)
	char pad_130[0x10]; // 0x130(0x10)

	void LowerCurtain(struct UObject* WhosAsking, struct FName WhatsYourName); // Function UtilitiesRuntime.CurtainSubsystem.LowerCurtain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb2200
	bool IsCurtainDown(struct UObject* WhosAsking); // Function UtilitiesRuntime.CurtainSubsystem.IsCurtainDown // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5bb1a50
	struct FString GetLienholderNames(); // Function UtilitiesRuntime.CurtainSubsystem.GetLienholderNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5bafa80
};

// Class UtilitiesRuntime.CustomInterp
// Size: 0x28 (Inherited: 0x28)
struct UCustomInterp : UObject {
};

// Class UtilitiesRuntime.HandleLink
// Size: 0x48 (Inherited: 0x28)
struct UHandleLink : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct UObject* m_pObject; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class UtilitiesRuntime.HandleLinkInfo
// Size: 0x98 (Inherited: 0x28)
struct UHandleLinkInfo : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct TMap<uint32_t, struct UHandleLink*> m_handleToLinkMap; // 0x40(0x50)
	char pad_90[0x8]; // 0x90(0x08)
};

// Class UtilitiesRuntime.HandleGenerator
// Size: 0x78 (Inherited: 0x28)
struct UHandleGenerator : UObject {
	struct TMap<uint32_t, struct UHandleLinkInfo*> m_linkInfoMap; // 0x28(0x50)
};

// Class UtilitiesRuntime.KeyboardTrigger
// Size: 0x30 (Inherited: 0x28)
struct UKeyboardTrigger : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class UtilitiesRuntime.PulldownMenu
// Size: 0xe28 (Inherited: 0xe00)
struct UPulldownMenu : UComboBoxString {
	bool LockPulldownWidth; // 0xe00(0x01)
	char pad_E01[0x27]; // 0xe01(0x27)
};

// Class UtilitiesRuntime.RaiseCurtainAction
// Size: 0x50 (Inherited: 0x30)
struct URaiseCurtainAction : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate CurtainRaised; // 0x30(0x10)
	struct UCurtainSubsystem* CurtainSubsystem; // 0x40(0x08)
	struct UObject* WhosAsking; // 0x48(0x08)

	struct URaiseCurtainAction* RaiseCurtain(struct UObject* WhosAsking); // Function UtilitiesRuntime.RaiseCurtainAction.RaiseCurtain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb2580
	void OnCurtainRaised(); // Function UtilitiesRuntime.RaiseCurtainAction.OnCurtainRaised // (Final|Native|Private) // @ game+0x5bb22c0
};

// Class UtilitiesRuntime.SplineHelper
// Size: 0x28 (Inherited: 0x28)
struct USplineHelper : UObject {

	bool IsLocationCloseEnoughToSplineAtDistance(struct USplineComponent* SplineComponent, float DistanceAlongSpline, struct FVector TestLocation, float DistanceRange, bool bDebug); // Function UtilitiesRuntime.SplineHelper.IsLocationCloseEnoughToSplineAtDistance // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5bb1ae0
	float GetDistanceAlongSplineFromWorldLocation(struct USplineComponent* SplineComponent, struct FVector Location, bool& bFound); // Function UtilitiesRuntime.SplineHelper.GetDistanceAlongSplineFromWorldLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5baf730
};

// Class UtilitiesRuntime.VariantMap
// Size: 0x80 (Inherited: 0x28)
struct UVariantMap : UObject {
	char pad_28[0x58]; // 0x28(0x58)

	bool VariantExists_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name); // Function UtilitiesRuntime.VariantMap.VariantExists_FromHandle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb36f0
	bool VariantExists(struct FName Name); // Function UtilitiesRuntime.VariantMap.VariantExists // (Final|Native|Public|BlueprintCallable) // @ game+0x5bb3650
	struct UVariantMap* RetrieveVariantMap(struct FVariantMapHandle VarMapHandle); // Function UtilitiesRuntime.VariantMap.RetrieveVariantMap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bb2920
	struct FName GetVariantName_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FName DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantName_FromHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb1730
	struct FName GetVariantName(struct FName Name, struct FName DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb1600
	int32_t GetVariantInt32_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, int32_t DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantInt32_FromHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb1460
	int32_t GetVariantInt32(struct FName Name, int32_t DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantInt32 // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb1340
	struct FVector GetVariantFVector_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FVector DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFVector_FromHandle // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5bb0e90
	struct FVector2D GetVariantFVector2D_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FVector2D DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFVector2D_FromHandle // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5bb0b70
	struct FVector2D GetVariantFVector2D(struct FName Name, struct FVector2D DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5bb0a40
	struct FVector GetVariantFVector(struct FName Name, struct FVector DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5bb0d30
	struct FTransform GetVariantFTransform_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FTransform DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFTransform_FromHandle // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5bb0800
	struct FTransform GetVariantFTransform(struct FName Name, struct FTransform DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5bb0670
	struct FString GetVariantFString_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FString DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFString_FromHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb0400
	struct FString GetVariantFString(struct FName Name, struct FString DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb0220
	struct FRotator GetVariantFRotator_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FRotator DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFRotator_FromHandle // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5bb0040
	struct FRotator GetVariantFRotator(struct FName Name, struct FRotator DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5bafee0
	float GetVariantFloat_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, float DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFloat_FromHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb11a0
	float GetVariantFloat(struct FName Name, float DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5bb1070
	bool GetVariantBool_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, bool DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantBool_FromHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5bafd40
	bool GetVariantBool(struct FName Name, bool DefaultValue, bool& bFound); // Function UtilitiesRuntime.VariantMap.GetVariantBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5bafc20
	struct FVariantMapHandle GetHandle_FromObject(struct UObject* InObject); // Function UtilitiesRuntime.VariantMap.GetHandle_FromObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5baf860
	struct FVariantMapHandle GetHandle(); // Function UtilitiesRuntime.VariantMap.GetHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x19e8950
	struct FVariantMapHandle DuplicateVariantMap(struct FVariantMapHandle VarMapHandle, bool bDestroy); // Function UtilitiesRuntime.VariantMap.DuplicateVariantMap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bae6a0
	struct FVariantMapHandle DestroyVariantMap(struct FVariantMapHandle VarMapHandle); // Function UtilitiesRuntime.VariantMap.DestroyVariantMap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bae5c0
	struct FVariantMapHandle CreateVariantMap(); // Function UtilitiesRuntime.VariantMap.CreateVariantMap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bae590
	void AddVariantName_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FName Value); // Function UtilitiesRuntime.VariantMap.AddVariantName_FromHandle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5badc60
	void AddVariantName(struct FName Name, struct FName Value); // Function UtilitiesRuntime.VariantMap.AddVariantName // (Final|Native|Public|BlueprintCallable) // @ game+0x5badb90
	void AddVariantInt32_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, int32_t Value); // Function UtilitiesRuntime.VariantMap.AddVariantInt32_FromHandle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bada60
	void AddVariantInt32(struct FName Name, int32_t Value); // Function UtilitiesRuntime.VariantMap.AddVariantInt32 // (Final|Native|Public|BlueprintCallable) // @ game+0x5bad990
	void AddVariantFVector_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FVector Value); // Function UtilitiesRuntime.VariantMap.AddVariantFVector_FromHandle // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5bad630
	void AddVariantFVector2D_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FVector2D Value); // Function UtilitiesRuntime.VariantMap.AddVariantFVector2D_FromHandle // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5bad420
	void AddVariantFVector2D(struct FName Name, struct FVector2D Value); // Function UtilitiesRuntime.VariantMap.AddVariantFVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5bad350
	void AddVariantFVector(struct FName Name, struct FVector Value); // Function UtilitiesRuntime.VariantMap.AddVariantFVector // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5bad550
	void AddVariantFTransform_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FTransform Value); // Function UtilitiesRuntime.VariantMap.AddVariantFTransform_FromHandle // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5bad190
	void AddVariantFTransform(struct FName Name, struct FTransform Value); // Function UtilitiesRuntime.VariantMap.AddVariantFTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5bad050
	void AddVariantFString_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FString Value); // Function UtilitiesRuntime.VariantMap.AddVariantFString_FromHandle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bacea0
	void AddVariantFString(struct FName Name, struct FString Value); // Function UtilitiesRuntime.VariantMap.AddVariantFString // (Final|Native|Public|BlueprintCallable) // @ game+0x5bacd50
	void AddVariantFRotator_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, struct FRotator Value); // Function UtilitiesRuntime.VariantMap.AddVariantFRotator_FromHandle // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5bacc00
	void AddVariantFRotator(struct FName Name, struct FRotator Value); // Function UtilitiesRuntime.VariantMap.AddVariantFRotator // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5bacb20
	void AddVariantFloat_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, float Value); // Function UtilitiesRuntime.VariantMap.AddVariantFloat_FromHandle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bad850
	void AddVariantFloat(struct FName Name, float Value); // Function UtilitiesRuntime.VariantMap.AddVariantFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x5bad780
	void AddVariantBool_FromHandle(struct FVariantMapHandle VarMapHandle, struct FName Name, bool Value); // Function UtilitiesRuntime.VariantMap.AddVariantBool_FromHandle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bac9e0
	void AddVariantBool(struct FName Name, bool Value); // Function UtilitiesRuntime.VariantMap.AddVariantBool // (Final|Native|Public|BlueprintCallable) // @ game+0x5bac910
	void AbsorbVariantMap_FromHandle(struct FVariantMapHandle MasterVarMapHandle, struct FVariantMapHandle VarMapHandleToAbsorb); // Function UtilitiesRuntime.VariantMap.AbsorbVariantMap_FromHandle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bac850
	void AbsorbVariantMap(struct UVariantMap* VarMapHandleToAbsorb); // Function UtilitiesRuntime.VariantMap.AbsorbVariantMap // (Final|Native|Public|BlueprintCallable) // @ game+0x5bac500
};

// Class UtilitiesRuntime.WizardWordsFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWizardWordsFunctionLibrary : UBlueprintFunctionLibrary {

	struct FString EncryptString(struct FString Word); // Function UtilitiesRuntime.WizardWordsFunctionLibrary.EncryptString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5bae7b0
};

// Class UtilitiesRuntime.StaticBP_ActorReferenceHelper
// Size: 0x28 (Inherited: 0x28)
struct UStaticBP_ActorReferenceHelper : UBlueprintFunctionLibrary {

	bool GetActorFromReference(struct UObject* WorldContext, struct FWorldActorReference ActorReference, struct AActor*& Actor); // Function UtilitiesRuntime.StaticBP_ActorReferenceHelper.GetActorFromReference // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5baf0f0
};

