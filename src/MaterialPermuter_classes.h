// Class MaterialPermuter.MaterialParametersInterface
// Size: 0x28 (Inherited: 0x28)
struct UMaterialParametersInterface : UInterface {

	void SetVectorParameter(struct FName Name, struct FVector Value); // Function MaterialPermuter.MaterialParametersInterface.SetVectorParameter // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1327a60
	void SetVector4Parameter(struct FName Name, struct FVector4 Value); // Function MaterialPermuter.MaterialParametersInterface.SetVector4Parameter // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1327980
	void SetTextureParameter(struct FName Name, struct UTexture* Value); // Function MaterialPermuter.MaterialParametersInterface.SetTextureParameter // (Native|Public|BlueprintCallable) // @ game+0x13277e0
	void SetSimpleParameters(struct FMaterialSwapParametersSimple& Parameters); // Function MaterialPermuter.MaterialParametersInterface.SetSimpleParameters // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1327710
	void SetScalarParameter(struct FName Name, float Value); // Function MaterialPermuter.MaterialParametersInterface.SetScalarParameter // (Native|Public|BlueprintCallable) // @ game+0x1327560
	void SetColorParameter(struct FName Name, struct FLinearColor Value); // Function MaterialPermuter.MaterialParametersInterface.SetColorParameter // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13270e0
};

// Class MaterialPermuter.MaterialPermuter
// Size: 0x28 (Inherited: 0x28)
struct UMaterialPermuter : UBlueprintFunctionLibrary {

	void MaterialPermuterSetBaseMaterial(struct UMeshComponent* Mesh, int32_t Index, struct UMaterialInterface* Material, bool& Success); // Function MaterialPermuter.MaterialPermuter.MaterialPermuterSetBaseMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1326f90
	void MaterialPermuterPrepareSetBaseMaterials(struct UMeshComponent* Mesh, bool& Success); // Function MaterialPermuter.MaterialPermuter.MaterialPermuterPrepareSetBaseMaterials // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1326ec0
	void MaterialPermuterIsMeshSwapped(struct UMeshComponent* Mesh, bool& bIsSwapped); // Function MaterialPermuter.MaterialPermuter.MaterialPermuterIsMeshSwapped // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1326df0
	void MaterialPermuterGetMeshSwapOwner(struct UMeshComponent* Mesh, struct UObject*& SwapOwner); // Function MaterialPermuter.MaterialPermuter.MaterialPermuterGetMeshSwapOwner // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1326d20
	void MaterialPermuterClearMeshSwap(struct UMeshComponent* Mesh, bool& bSuccess); // Function MaterialPermuter.MaterialPermuter.MaterialPermuterClearMeshSwap // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1326c50
	void MaterialPermuterClearAllSwaps(struct AActor* Actor, bool& bSuccess); // Function MaterialPermuter.MaterialPermuter.MaterialPermuterClearAllSwaps // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1326b80
};

// Class MaterialPermuter.HardSwapBatchComponent
// Size: 0x210 (Inherited: 0xc8)
struct UHardSwapBatchComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FMulticastInlineDelegate OnDoneDelegate; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnActorSwappedDelegate; // 0xe0(0x10)
	char pad_F0[0x30]; // 0xf0(0x30)
	struct UMaterialPermuterLibrary* Library; // 0x120(0x08)
	struct FMaterialPermuterHardSwapBase HardSwap; // 0x128(0x58)
	struct FHardSwapBatchComponentSettings Settings; // 0x180(0x0c)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FMaterialSwapSharedMIDCache MIDCache; // 0x190(0x50)
	char pad_1E0[0x10]; // 0x1e0(0x10)
	enum class EHardSwapBatchComponentState State; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FActorToHardSwapList ActorsToSwap; // 0x1f8(0x18)

	void SetTextureParameter(struct FName Name, struct UTexture* Value); // Function MaterialPermuter.HardSwapBatchComponent.SetTextureParameter // (Native|Public|BlueprintCallable) // @ game+0x13278b0
	void SetScalarParameter(struct FName Name, float Value); // Function MaterialPermuter.HardSwapBatchComponent.SetScalarParameter // (Native|Public|BlueprintCallable) // @ game+0x1327630
	void SetColorParameter(struct FName Name, struct FLinearColor Value); // Function MaterialPermuter.HardSwapBatchComponent.SetColorParameter // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13271b0
	void GetActorsToSwap(struct TArray<struct AActor*>& ActorsToSwapList); // Function MaterialPermuter.HardSwapBatchComponent.GetActorsToSwap // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1325800
};

// Class MaterialPermuter.HardSwapBatchComponentRules
// Size: 0x348 (Inherited: 0x210)
struct UHardSwapBatchComponentRules : UHardSwapBatchComponent {
	struct FMaterialPermuterHardSwapRules HardSwapRules; // 0x210(0x138)

	void CreateHardSwapBatchComponentWithRules(struct AActor* Owner, struct FMaterialPermuterHardSwapRules HardSwapSetup, struct TArray<struct AActor*> Actors, struct FHardSwapBatchComponentSettings BatchSettings, struct UHardSwapBatchComponentRules*& HardSwapBatchComponent); // Function MaterialPermuter.HardSwapBatchComponentRules.CreateHardSwapBatchComponentWithRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1325560
};

// Class MaterialPermuter.HardSwapBatchComponentSimple
// Size: 0x270 (Inherited: 0x210)
struct UHardSwapBatchComponentSimple : UHardSwapBatchComponent {
	struct FMaterialPermuterHardSwapSimple HardSwapSimple; // 0x210(0x60)

	void CreateHardSwapBatchComponent(struct AActor* Owner, struct FMaterialPermuterHardSwapSimple HardSwapSetup, struct TArray<struct AActor*> Actors, struct FHardSwapBatchComponentSettings BatchSettings, struct UHardSwapBatchComponentSimple*& HardSwapBatchComponent); // Function MaterialPermuter.HardSwapBatchComponentSimple.CreateHardSwapBatchComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13251c0
};

// Class MaterialPermuter.MaterialPermuterHardSwap
// Size: 0x28 (Inherited: 0x28)
struct UMaterialPermuterHardSwap : UBlueprintFunctionLibrary {

	void SwapFromdHardSwapCacheWithRules(struct AActor* Actor, struct FMaterialPermuterHardSwapRules Swap, struct FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped); // Function MaterialPermuter.MaterialPermuterHardSwap.SwapFromdHardSwapCacheWithRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1328580
	void SwapFromdHardSwapCache(struct AActor* Actor, struct FMaterialPermuterHardSwapSimple Swap, struct FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped); // Function MaterialPermuter.MaterialPermuterHardSwap.SwapFromdHardSwapCache // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1328200
	void SwapActorsFromdHardSwapCacheWithRules(struct TArray<struct AActor*> Actors, struct FMaterialPermuterHardSwapRules Swap, struct FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped); // Function MaterialPermuter.MaterialPermuterHardSwap.SwapActorsFromdHardSwapCacheWithRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1327f10
	void SwapActorsFromdHardSwapCache(struct TArray<struct AActor*> Actors, struct FMaterialPermuterHardSwapSimple Swap, struct FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped); // Function MaterialPermuter.MaterialPermuterHardSwap.SwapActorsFromdHardSwapCache // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1327b40
	void SetMIDArrayVectorParameter(struct TArray<struct UMaterialInstanceDynamic*> MaterialInstanceDynamics, struct FName Parameter, struct FLinearColor Value); // Function MaterialPermuter.MaterialPermuterHardSwap.SetMIDArrayVectorParameter // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1327400
	void SetMIDArrayScalarParameter(struct TArray<struct UMaterialInstanceDynamic*> MaterialInstanceDynamics, struct FName Parameter, float Value); // Function MaterialPermuter.MaterialPermuterHardSwap.SetMIDArrayScalarParameter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1327290
	void HardSwapCacheToMaterials(struct FMaterialSwapSharedMIDCache& HardSwapCache, struct TArray<struct UMaterialInstanceDynamic*>& MaterialInstanceDynamics); // Function MaterialPermuter.MaterialPermuterHardSwap.HardSwapCacheToMaterials // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1326a00
	void HardSwapActorWithRulesNoMIDs(struct AActor* Actor, struct FMaterialPermuterHardSwapRules Swap, int32_t& MaterialsSwapped, bool bForceLoadMaterials); // Function MaterialPermuter.MaterialPermuterHardSwap.HardSwapActorWithRulesNoMIDs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1326170
	void HardSwapActorWithRules(struct AActor* Actor, struct FMaterialPermuterHardSwapRules Swap, int32_t& MaterialsSwapped, struct TArray<struct UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials); // Function MaterialPermuter.MaterialPermuterHardSwap.HardSwapActorWithRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1325f30
	void HardSwapActorsWithRules(struct TArray<struct AActor*> Actors, struct FMaterialPermuterHardSwapRules Swap, int32_t& MaterialsSwapped, struct TArray<struct UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials); // Function MaterialPermuter.MaterialPermuterHardSwap.HardSwapActorsWithRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1326750
	void HardSwapActors(struct TArray<struct AActor*> Actors, struct FMaterialPermuterHardSwapSimple Swap, int32_t& MaterialsSwapped, struct TArray<struct UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials); // Function MaterialPermuter.MaterialPermuterHardSwap.HardSwapActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13263a0
	void HardSwapActorNoMIDs(struct AActor* Actor, struct FMaterialPermuterHardSwapSimple Swap, int32_t& MaterialsSwapped, bool bForceLoadMaterials); // Function MaterialPermuter.MaterialPermuterHardSwap.HardSwapActorNoMIDs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1325c10
	void HardSwapActor(struct AActor* Actor, struct FMaterialPermuterHardSwapSimple Swap, int32_t& MaterialsSwapped, struct TArray<struct UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials); // Function MaterialPermuter.MaterialPermuterHardSwap.HardSwapActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13258b0
	void BuildHardSwapCacheWithRules(struct AActor* Actor, struct FMaterialPermuterHardSwapRules Swap, struct FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials); // Function MaterialPermuter.MaterialPermuterHardSwap.BuildHardSwapCacheWithRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1324f40
	void BuildHardSwapCacheForActorsWithRules(struct TArray<struct AActor*> Actors, struct FMaterialPermuterHardSwapRules Swap, struct FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials); // Function MaterialPermuter.MaterialPermuterHardSwap.BuildHardSwapCacheForActorsWithRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1324c60
	void BuildHardSwapCacheForActors(struct TArray<struct AActor*> Actors, struct FMaterialPermuterHardSwapSimple Swap, struct FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials); // Function MaterialPermuter.MaterialPermuterHardSwap.BuildHardSwapCacheForActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1324890
	void BuildHardSwapCache(struct AActor* Actor, struct FMaterialPermuterHardSwapSimple Swap, struct FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials); // Function MaterialPermuter.MaterialPermuterHardSwap.BuildHardSwapCache // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1324510
};

// Class MaterialPermuter.MaterialPermuterLibrary
// Size: 0x170 (Inherited: 0x30)
struct UMaterialPermuterLibrary : UDataAsset {
	struct UMaterialPermuterInstanceHandCraftedLibrary* InstanceHandCraftedLibrary; // 0x30(0x08)
	bool bEnableMIDCache; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float MIDCacheTimeoutSeconds; // 0x3c(0x04)
	struct TMap<struct FName, struct FMaterialPermuterMaterialMap> Permutations; // 0x40(0x50)
	struct UMaterialPermuterLoadingStrategiesAsset* LoadingStrategiesAsset; // 0x90(0x08)
	struct FMaterialPermuterCopyParameterOverrides CopyParameterOverrides; // 0x98(0x20)
	struct TMap<struct FName, struct FMaterialPermuterKeyMap> ValidPermutations; // 0xb8(0x50)
	struct FMaterialPermuterKeyCache KeyCache; // 0x108(0x68)
};

// Class MaterialPermuter.MaterialPermuterInstanceHandCraftedLibrary
// Size: 0xd0 (Inherited: 0x30)
struct UMaterialPermuterInstanceHandCraftedLibrary : UDataAsset {
	struct TMap<struct TSoftObjectPtr<UMaterialInterface>, struct FMaterialPermuterInstanceHandCraftedKeySet> HandCraftedMap; // 0x30(0x50)
	struct TMap<struct TSoftObjectPtr<UMaterial>, struct FMaterialPermuterInstanceHandCraftedKeySetList> HandCraftedMasterMap; // 0x80(0x50)

	void Build(); // Function MaterialPermuter.MaterialPermuterInstanceHandCraftedLibrary.Build // (Final|Native|Public) // @ game+0x13244f0
};

// Class MaterialPermuter.MaterialPermuterLiveMaterials
// Size: 0x258 (Inherited: 0x28)
struct UMaterialPermuterLiveMaterials : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FMaterialPermuterLoadingTriggers Triggers; // 0x30(0x50)
	struct FMaterialPermuterLoadingBundleList Bundles; // 0x80(0x38)
	struct FMaterialPermuterMaterialAssetIndex Index; // 0xb8(0x38)
	struct FLiveMaterialsLoadedObjects LoadedObjects; // 0xf0(0xf8)
	struct FLiveMaterialsPendingLoads PendingLoads; // 0x1e8(0x50)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> Missing; // 0x238(0x10)
	struct TArray<struct TWeakObjectPtr<struct UWorld>> HasBegunPlayWorlds; // 0x248(0x10)
};

// Class MaterialPermuter.MaterialPermuterLoadingBundle
// Size: 0x1a0 (Inherited: 0xc8)
struct UMaterialPermuterLoadingBundle : UActorComponent {
	struct TSet<struct TSoftObjectPtr<UMaterialInterface>> Assets; // 0xc8(0x50)
	struct TArray<struct UMaterialInterface*> LoadedAssets; // 0x118(0x10)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> MissingAssets; // 0x128(0x10)
	struct FMulticastInlineDelegate OnBundleLoadedDelegate; // 0x138(0x10)
	struct FMulticastInlineDelegate OnBundlePercentLoadedDelegate; // 0x148(0x10)
	char pad_158[0x30]; // 0x158(0x30)
	enum class EMaterialPermuterLoadingPriority Priority; // 0x188(0x01)
	enum class EMaterialPermuterLoadingBundleState State; // 0x189(0x01)
	char pad_18A[0x6]; // 0x18a(0x06)
	struct FTimespan StartTime; // 0x190(0x08)
	int32_t TimeWarnings; // 0x198(0x04)
	float LastPercentageBroadcast; // 0x19c(0x04)

	void ValidBundle(bool& bValid); // Function MaterialPermuter.MaterialPermuterLoadingBundle.ValidBundle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x132e0a0
	struct AActor* GetWorldBundleOwner(struct UObject* WorldContextObject); // Function MaterialPermuter.MaterialPermuterLoadingBundle.GetWorldBundleOwner // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x132dc60
	void GetPercentageLoaded(float& Loaded); // Function MaterialPermuter.MaterialPermuterLoadingBundle.GetPercentageLoaded // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x132dbb0
	void FullyLoaded(bool& bIsFullyLoaded); // Function MaterialPermuter.MaterialPermuterLoadingBundle.FullyLoaded // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x132d9d0
	struct UMaterialPermuterLoadingBundle* CreateMaterialSetBundleForOwnerOnly(struct AActor* Owner, enum class EMaterialPermuterLoadingPriority Priority, bool bAttachedChildren, bool bComponentChildren); // Function MaterialPermuter.MaterialPermuterLoadingBundle.CreateMaterialSetBundleForOwnerOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132d870
	struct UMaterialPermuterLoadingBundle* CreateMaterialSetBundle(struct AActor* Owner, struct FMasterMaterialAssetSet& MaterialAssetSet, enum class EMaterialPermuterLoadingPriority Priority); // Function MaterialPermuter.MaterialPermuterLoadingBundle.CreateMaterialSetBundle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x132d6c0
	struct UMaterialPermuterLoadingBundle* CreateKeysMaterialSetBundle(struct AActor* Owner, struct TArray<struct FMaterialPermuterKey> Keys, struct FMasterMaterialAssetSet& MaterialAssetSet, enum class EMaterialPermuterLoadingPriority Priority); // Function MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeysMaterialSetBundle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x132d470
	struct UMaterialPermuterLoadingBundle* CreateKeysBundleForOwnerOnly(struct AActor* Owner, struct TArray<struct FMaterialPermuterKey> Keys, enum class EMaterialPermuterLoadingPriority Priority, bool bAttachedChildren, bool bComponentChildren); // Function MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeysBundleForOwnerOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132d280
	struct UMaterialPermuterLoadingBundle* CreateKeysBundle(struct AActor* Owner, struct TArray<struct FMaterialPermuterKey> Keys, enum class EMaterialPermuterLoadingPriority Priority); // Function MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeysBundle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132d120
	struct UMaterialPermuterLoadingBundle* CreateKeyMaterialSetBundle(struct AActor* Owner, struct FMaterialPermuterKey Key, struct FMasterMaterialAssetSet& MaterialAssetSet, enum class EMaterialPermuterLoadingPriority Priority); // Function MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeyMaterialSetBundle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x132cf20
	struct UMaterialPermuterLoadingBundle* CreateKeyBundleForOwnerOnly(struct AActor* Owner, struct FMaterialPermuterKey Key, enum class EMaterialPermuterLoadingPriority Priority, bool bAttachedChildren, bool bComponentChildren); // Function MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeyBundleForOwnerOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132cd80
	struct UMaterialPermuterLoadingBundle* CreateKeyBundle(struct AActor* Owner, struct FMaterialPermuterKey Key, enum class EMaterialPermuterLoadingPriority Priority); // Function MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeyBundle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132cc60
};

// Class MaterialPermuter.MaterialPermuterLoadingBundleAndSwap
// Size: 0x318 (Inherited: 0x1a0)
struct UMaterialPermuterLoadingBundleAndSwap : UMaterialPermuterLoadingBundle {
	char pad_1A0[0x8]; // 0x1a0(0x08)
	struct FMulticastInlineDelegate OnActorSwapDelegate; // 0x1a8(0x10)
	char pad_1B8[0x18]; // 0x1b8(0x18)
	struct FMaterialSwapKeyUI MaterialSwapInfo; // 0x1d0(0x110)
	enum class EMaterialPermuterLoadingBundleAndSwapState MaterialSwapState; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct TArray<struct UMaterialSwap*> RawMaterialSwaps; // 0x2e8(0x10)
	struct TArray<struct TWeakObjectPtr<struct UMaterialSwapComponent>> MaterialSwapComponents; // 0x2f8(0x10)
	struct TArray<struct TWeakObjectPtr<struct UHardSwapBatchComponent>> HardSwapBatchComponents; // 0x308(0x10)

	void SetTextureParameter(struct FName Name, struct UTexture* Value); // Function MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.SetTextureParameter // (Native|Public|BlueprintCallable) // @ game+0x132dfd0
	void SetScalarParameter(struct FName Name, float Value); // Function MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.SetScalarParameter // (Native|Public|BlueprintCallable) // @ game+0x132def0
	void SetColorParameter(struct FName Name, struct FLinearColor Value); // Function MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.SetColorParameter // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x132de10
	void ReleaseRawMaterialSwaps(bool bUnswap); // Function MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.ReleaseRawMaterialSwaps // (Final|Native|Public|BlueprintCallable) // @ game+0x132dd80
	void HasRawMaterialSwaps(int32_t& RawMaterialsSwapCount); // Function MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.HasRawMaterialSwaps // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x132dcf0
	void GetMaterialSwapState(enum class EMaterialPermuterLoadingBundleAndSwapState& CurrentSwapState); // Function MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.GetMaterialSwapState // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x132db20
	void GetMaterialSwapKey(struct FMaterialPermuterKey& Key); // Function MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.GetMaterialSwapKey // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x132da70
};

// Class MaterialPermuter.MaterialPermuterLoadingBundleAndSwapOwner
// Size: 0x378 (Inherited: 0x318)
struct UMaterialPermuterLoadingBundleAndSwapOwner : UMaterialPermuterLoadingBundleAndSwap {
	struct FMaterialSwapParameters InitialSwapParameters; // 0x318(0x50)
	enum class EMaterialPermuterLoadingBundleAndSwapType SwapType; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	struct FHardSwapBatchComponentSettings HardSwapBatchSettings; // 0x36c(0x0c)

	struct UMaterialPermuterLoadingBundleAndSwapOwner* CreateAndSwapOwner(struct AActor* Owner, struct FMaterialSwapKeyUI SwapInfo, struct FMaterialSwapParameters InitialParameters, enum class EMaterialPermuterLoadingBundleAndSwapType MaterialSwapType, enum class EMaterialPermuterLoadingPriority LoadPriority); // Function MaterialPermuter.MaterialPermuterLoadingBundleAndSwapOwner.CreateAndSwapOwner // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132c8b0
};

// Class MaterialPermuter.MaterialPermuterLoadingBundleAndSwapMulti
// Size: 0x328 (Inherited: 0x318)
struct UMaterialPermuterLoadingBundleAndSwapMulti : UMaterialPermuterLoadingBundleAndSwap {
	struct TArray<struct FMaterialPermuterLoadingBundleAndSwapWeakTarget> TargetsToSwap; // 0x318(0x10)

	struct UMaterialPermuterLoadingBundleAndSwapMulti* CreateAndSwapMultiTargets(struct AActor* Owner, struct FMaterialSwapKeyUI SwapInfo, struct TArray<struct FMaterialPermuterLoadingBundleAndSwapTarget> SwapTargets, enum class EMaterialPermuterLoadingPriority LoadPriority); // Function MaterialPermuter.MaterialPermuterLoadingBundleAndSwapMulti.CreateAndSwapMultiTargets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132c640
	struct UMaterialPermuterLoadingBundleAndSwapMulti* CreateAndSwapMultiTarget(struct AActor* Owner, struct FMaterialSwapKeyUI SwapInfo, struct FMaterialPermuterLoadingBundleAndSwapTarget SwapTarget, enum class EMaterialPermuterLoadingPriority LoadPriority); // Function MaterialPermuter.MaterialPermuterLoadingBundleAndSwapMulti.CreateAndSwapMultiTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132c240
};

// Class MaterialPermuter.MaterialPreLoadKeysActor
// Size: 0x288 (Inherited: 0x248)
struct AMaterialPreLoadKeysActor : AActor {
	struct TArray<struct FMaterialPermuterKeyProperty> MaterialPermuterKeys; // 0x248(0x10)
	enum class EMaterialPermuterLoadingPriority Priority; // 0x258(0x01)
	bool bStaticLoad; // 0x259(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)
	struct TArray<struct UMaterialInterface*> PreLoadedMaterials; // 0x260(0x10)
	struct TArray<struct UMaterialInterface*> DynamicallyLoadedMaterials; // 0x270(0x10)
	struct UMaterialPermuterLoadingBundle* LoadingBundle; // 0x280(0x08)

	void BuildPreLoads(); // Function MaterialPermuter.MaterialPreLoadKeysActor.BuildPreLoads // (Final|Native|Public) // @ game+0x1074730
};

// Class MaterialPermuter.MaterialPreLoadKeysAllActor
// Size: 0x288 (Inherited: 0x288)
struct AMaterialPreLoadKeysAllActor : AMaterialPreLoadKeysActor {
};

// Class MaterialPermuter.MaterialPreLoadKeysActorListActor
// Size: 0x2a0 (Inherited: 0x288)
struct AMaterialPreLoadKeysActorListActor : AMaterialPreLoadKeysActor {
	struct TArray<struct AActor*> ForActors; // 0x288(0x10)
	bool bAttachedChildren; // 0x298(0x01)
	bool bComponentChildren; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
};

// Class MaterialPermuter.MaterialPermuterLoadingStrategiesAsset
// Size: 0xc0 (Inherited: 0x30)
struct UMaterialPermuterLoadingStrategiesAsset : UDataAsset {
	struct TArray<struct UMaterialPermuterDynamicTrigger*> DynamicLoadingTriggers; // 0x30(0x10)
	struct FMaterialPermuterLoadingStrategies Built; // 0x40(0x80)

	void BuildLoadingStrategies(); // Function MaterialPermuter.MaterialPermuterLoadingStrategiesAsset.BuildLoadingStrategies // (Final|Native|Public) // @ game+0x1074730
};

// Class MaterialPermuter.MaterialPermuterDynamicTrigger
// Size: 0x28 (Inherited: 0x28)
struct UMaterialPermuterDynamicTrigger : UObject {
};

// Class MaterialPermuter.MaterialPermuterDynamicTriggerNamed
// Size: 0x38 (Inherited: 0x28)
struct UMaterialPermuterDynamicTriggerNamed : UMaterialPermuterDynamicTrigger {
	struct FMaterialPermuterLoadTriggerProperty Trigger; // 0x28(0x10)
};

// Class MaterialPermuter.MaterialPermuterDynamicTriggerFall
// Size: 0x38 (Inherited: 0x38)
struct UMaterialPermuterDynamicTriggerFall : UMaterialPermuterDynamicTriggerNamed {
};

// Class MaterialPermuter.MaterialPermuterDynamicTriggerWinter
// Size: 0x38 (Inherited: 0x38)
struct UMaterialPermuterDynamicTriggerWinter : UMaterialPermuterDynamicTriggerNamed {
};

// Class MaterialPermuter.MaterialPermuterDynamicTriggerSpring
// Size: 0x38 (Inherited: 0x38)
struct UMaterialPermuterDynamicTriggerSpring : UMaterialPermuterDynamicTriggerNamed {
};

// Class MaterialPermuter.MaterialPermuterDynamicTriggerSummer
// Size: 0x38 (Inherited: 0x38)
struct UMaterialPermuterDynamicTriggerSummer : UMaterialPermuterDynamicTriggerNamed {
};

// Class MaterialPermuter.MasterMaterialSetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMasterMaterialSetBlueprintLibrary : UBlueprintFunctionLibrary {

	void RemoveFromMasterMaterialSet(struct FMasterMaterialSet& MaterialMasterSet, struct UMaterialInterface* Material); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.RemoveFromMasterMaterialSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1336fc0
	void MasterMaterialSetToAssets(struct FMasterMaterialSet& MaterialSet, struct TArray<struct TSoftObjectPtr<UMaterial>>& MasterMaterialAssets); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MasterMaterialSetToAssets // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1336c80
	void MasterMaterialSetNum(struct FMasterMaterialSet& MaterialMasterSet, int32_t& NumMaterials); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MasterMaterialSetNum // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1336b50
	void MasterMaterialSetIsEmpty(struct FMasterMaterialSet& MaterialMasterSet, bool& bIsEmpty); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MasterMaterialSetIsEmpty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1336a20
	void MasterMaterialSetContains(struct FMasterMaterialSet& MaterialMasterSet, struct UMaterialInterface* Material); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MasterMaterialSetContains // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13368c0
	struct FMaterialPermuterKey MakePermutationPropertyKey(struct FMaterialPermuterPermutationProperty PermutationProperty); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakePermutationPropertyKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x13356a0
	struct FMasterMaterialSet MakeMeshMasterMaterialSet(struct UMeshComponent* Mesh); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeMeshMasterMaterialSet // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1336500
	struct FMasterMaterialSet MakeMeshesMasterMaterialSet(struct TArray<struct UMeshComponent*> Meshes); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeMeshesMasterMaterialSet // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x13366b0
	struct FMaterialPermuterKey MakeMaterialPermuterKey(struct FName KeyHash); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeMaterialPermuterKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1336470
	struct FMasterMaterialSet MakeMasterMaterialSet(struct TArray<struct UMaterialInterface*> Materials); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeMasterMaterialSet // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1336190
	struct FMasterMaterialAssetSet MakeMasterMaterialAssetSet(struct FMasterMaterialSet& MaterialMasterSet); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeMasterMaterialAssetSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1336080
	void MakeKey(struct FMaterialPermuterKey& Key, struct FName Group, struct FName SubType); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeKey // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1335740
	struct FMaterialPermuterKey MakeGroupPropertyKey(struct FMaterialPermuterGroupProperty GroupProperty); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeGroupPropertyKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x13356a0
	struct FMasterMaterialSet MakeActorsRulesMasterMaterialSet(struct TArray<struct AActor*> Actors, struct FMaterialSwapRules Rules); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeActorsRulesMasterMaterialSet // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x13351c0
	struct FMasterMaterialSet MakeActorsMasterMaterialSet(struct TArray<struct AActor*> Actors, bool bAttachedChildren, bool bComponentChildren); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeActorsMasterMaterialSet // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1334f40
	struct FMasterMaterialSet MakeActorRulesMasterMaterialSet(struct AActor* Actor, struct FMaterialSwapRules Rules); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeActorRulesMasterMaterialSet // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1334ad0
	struct FMasterMaterialSet MakeActorMasterMaterialSet(struct AActor* Actor, bool bAttachedChildren, bool bComponentChildren); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeActorMasterMaterialSet // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x13348c0
	void KeyIsValid(struct FMaterialPermuterKey Key, bool& bIsValid); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.KeyIsValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13346a0
	void KeyHasSubType(struct FMaterialPermuterKey Key, bool& bHasSubType); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.KeyHasSubType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1334590
	void KeyGetSubType(struct FMaterialPermuterKey Key, struct FName& SubType); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.KeyGetSubType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13344c0
	void KeyGetGroup(struct FMaterialPermuterKey Key, struct FName& Group); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.KeyGetGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13343c0
	struct FName GetPermutationPropertyName(struct FMaterialPermuterPermutationProperty PermutationProperty); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.GetPermutationPropertyName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1334280
	struct FName GetMaterialPermuterKeyName(struct FMaterialPermuterKey Key); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.GetMaterialPermuterKeyName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1334310
	struct FName GetGroupPropertyName(struct FMaterialPermuterGroupProperty GroupProperty); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.GetGroupPropertyName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1334280
	struct FMasterMaterialAssetSet CreateMasterMaterialAssetSet(struct TArray<struct TSoftObjectPtr<UMaterial>> MaterialAssets); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.CreateMasterMaterialAssetSet // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1333e90
	void CombineMasterMaterialSets(struct FMasterMaterialSet& A, struct FMasterMaterialSet& B, struct FMasterMaterialSet& Combined); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.CombineMasterMaterialSets // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1333c70
	void AppendMasterMaterialSet(struct FMasterMaterialSet& MaterialMasterSet, struct FMasterMaterialSet& Add); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.AppendMasterMaterialSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1333650
	void AppendActorToMasterMaterialSetWithRules(struct FMasterMaterialSet& MaterialMasterSet, struct AActor* Actor, struct FMaterialSwapRules Rules); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.AppendActorToMasterMaterialSetWithRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1332ab0
	void AppendActorToMasterMaterialSet(struct FMasterMaterialSet& MaterialMasterSet, struct AActor* Actor, bool bAttachedChildren, bool bComponentChildren); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.AppendActorToMasterMaterialSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13328a0
	void AppendActorsToMasterMaterialSetWithRules(struct FMasterMaterialSet& MaterialMasterSet, struct TArray<struct AActor*> Actors, struct FMaterialSwapRules Rules); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.AppendActorsToMasterMaterialSetWithRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1333180
	void AppendActorsToMasterMaterialSet(struct FMasterMaterialSet& MaterialMasterSet, struct TArray<struct AActor*> Actors, bool bAttachedChildren, bool bComponentChildren); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.AppendActorsToMasterMaterialSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1332f10
	void AddToMasterMaterialSet(struct FMasterMaterialSet& MaterialMasterSet, struct UMaterialInterface* Material); // Function MaterialPermuter.MasterMaterialSetBlueprintLibrary.AddToMasterMaterialSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1332760
};

// Class MaterialPermuter.MIDBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMIDBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetMIDParametersVector(struct FMIDParameters& Parameters, struct FMIDVectorParameter Vector); // Function MaterialPermuter.MIDBlueprintLibrary.SetMIDParametersVector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13374e0
	void SetMIDParametersTexture(struct FMIDParameters& Parameters, struct FMIDTextureParameter Texture); // Function MaterialPermuter.MIDBlueprintLibrary.SetMIDParametersTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1337340
	void SetMIDParametersScalar(struct FMIDParameters& Parameters, struct FMIDScalarParameter Scalar); // Function MaterialPermuter.MIDBlueprintLibrary.SetMIDParametersScalar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1337210
	void PrimitiveCreateMIDs(struct UPrimitiveComponent* Component); // Function MaterialPermuter.MIDBlueprintLibrary.PrimitiveCreateMIDs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1336f40
	void PrimitiveApplyMIDParameters(struct UPrimitiveComponent* Component, struct FMIDParameters& Parameters, bool bAutoCreateMIDs); // Function MaterialPermuter.MIDBlueprintLibrary.PrimitiveApplyMIDParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1336de0
	void MIDParametersIsEmpty(struct FMIDParameters& ParameterSet, bool& bIsEmpty); // Function MaterialPermuter.MIDBlueprintLibrary.MIDParametersIsEmpty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1334790
	struct FMIDVectorParameter MakeMIDVectorParameter(struct FName Name, struct FLinearColor Vector); // Function MaterialPermuter.MIDBlueprintLibrary.MakeMIDVectorParameter // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1335fa0
	struct FMIDTextureParameter MakeMIDTextureParameter(struct FName Name, struct UTexture* Texture); // Function MaterialPermuter.MIDBlueprintLibrary.MakeMIDTextureParameter // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1335ec0
	struct FMIDScalarParameter MakeMIDScalarParameter(struct FName Name, float Scalar); // Function MaterialPermuter.MIDBlueprintLibrary.MakeMIDScalarParameter // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1335dd0
	struct FMIDParameters MakeMIDParametersVector(struct FMIDVectorParameter Vector); // Function MaterialPermuter.MIDBlueprintLibrary.MakeMIDParametersVector // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1335c80
	struct FMIDParameters MakeMIDParametersTexture(struct FMIDTextureParameter Texture); // Function MaterialPermuter.MIDBlueprintLibrary.MakeMIDParametersTexture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1335b50
	struct FMIDParameters MakeMIDParametersScalar(struct FMIDScalarParameter Scalar); // Function MaterialPermuter.MIDBlueprintLibrary.MakeMIDParametersScalar // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1335a20
	struct FMIDParameters MakeMIDParameters(struct TArray<struct FMIDScalarParameter>& Scalars, struct TArray<struct FMIDVectorParameter>& Vectors, struct TArray<struct FMIDTextureParameter>& Textures); // Function MaterialPermuter.MIDBlueprintLibrary.MakeMIDParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1335870
	struct FMIDParameters EmptyMIDParameters(struct FMIDParameters& ParameterSet); // Function MaterialPermuter.MIDBlueprintLibrary.EmptyMIDParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1334160
	struct FMIDParameters CombineMIDParameters(struct FMIDParameters A, struct FMIDParameters B); // Function MaterialPermuter.MIDBlueprintLibrary.CombineMIDParameters // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x13338e0
	void ApplyMIDParameters(struct UMaterialInstanceDynamic* Mid, struct FMIDParameters& Parameters); // Function MaterialPermuter.MIDBlueprintLibrary.ApplyMIDParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13337d0
	void ActorCreateMIDs(struct AActor* Actor, bool bIncludeChildActors); // Function MaterialPermuter.MIDBlueprintLibrary.ActorCreateMIDs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13326a0
	void ActorApplyMIDParameters(struct AActor* Actor, struct FMIDParameters& Parameters, bool bIncludeChildActors, bool bAutoCreateMIDs); // Function MaterialPermuter.MIDBlueprintLibrary.ActorApplyMIDParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1332500
};

// Class MaterialPermuter.MaterialPermuterSingleton
// Size: 0x3d8 (Inherited: 0x248)
struct AMaterialPermuterSingleton : AActor {
	struct UMaterialPermuterLibrary* Library; // 0x248(0x08)
	struct UMaterialPermuterLiveMaterials* LiveMaterials; // 0x250(0x08)
	struct FMaterialPermuterMIDCache MIDCache; // 0x258(0x58)
	struct FMaterialPermuterSwapTracker ActiveSwaps; // 0x2b0(0x50)
	struct FTimerHandle ActiveSwapsUpdateTimerHandle; // 0x300(0x08)
	struct FMaterialSwapActorFadeStates ActorFadeStates; // 0x308(0xd0)

	void SetLoadingTrigger(struct UObject* TriggerOwner, struct FName Trigger); // Function MaterialPermuter.MaterialPermuterSingleton.SetLoadingTrigger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1340a90
	void ProhibitActorFade(struct AActor* Actor, bool bProhibit); // Function MaterialPermuter.MaterialPermuterSingleton.ProhibitActorFade // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13408c0
	void PauseAllActorFading(struct UObject* WorldContextObject, bool bPause); // Function MaterialPermuter.MaterialPermuterSingleton.PauseAllActorFading // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1340800
	void LoadingTriggerSet(struct FName Trigger, bool& bSet); // Function MaterialPermuter.MaterialPermuterSingleton.LoadingTriggerSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x133e180
	void IsLoadingTriggerSet(struct UObject* TriggerOwner, struct FName Trigger, bool& bSet); // Function MaterialPermuter.MaterialPermuterSingleton.IsLoadingTriggerSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x133e070
	bool IsAllActorFadingPaused(struct UObject* WorldContextObject); // Function MaterialPermuter.MaterialPermuterSingleton.IsAllActorFadingPaused // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133dfe0
	bool IsActorFadeProhibited(struct AActor* Actor); // Function MaterialPermuter.MaterialPermuterSingleton.IsActorFadeProhibited // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133df50
	struct FName GetTriggerPropertyName(struct FMaterialPermuterLoadTriggerProperty TriggerProperty); // Function MaterialPermuter.MaterialPermuterSingleton.GetTriggerPropertyName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1334280
	void ClearLoadingTrigger(struct UObject* TriggerOwner, struct FName Trigger); // Function MaterialPermuter.MaterialPermuterSingleton.ClearLoadingTrigger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x133c350
};

// Class MaterialPermuter.MaterialSwapMeshStateData
// Size: 0x28 (Inherited: 0x28)
struct UMaterialSwapMeshStateData : UObject {
};

// Class MaterialPermuter.MaterialSwapMeshState
// Size: 0x28 (Inherited: 0x28)
struct UMaterialSwapMeshState : UObject {
};

// Class MaterialPermuter.MaterialSwap
// Size: 0x50 (Inherited: 0x28)
struct UMaterialSwap : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FMaterialPermuterKey Key; // 0x38(0x10)
	enum class EMaterialSwapPriority Priority; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	void SetVectorParameter(struct FName Name, struct FVector Value); // Function MaterialPermuter.MaterialSwap.SetVectorParameter // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1341f20
	void SetVector4Parameter(struct FName Name, struct FVector4 Value); // Function MaterialPermuter.MaterialSwap.SetVector4Parameter // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1341d60
	void SetTextureParameter(struct FName Name, struct UTexture* Value); // Function MaterialPermuter.MaterialSwap.SetTextureParameter // (Native|Public|BlueprintCallable) // @ game+0x1341c90
	void SetScalarParameter(struct FName Name, float Value); // Function MaterialPermuter.MaterialSwap.SetScalarParameter // (Native|Public|BlueprintCallable) // @ game+0x1341740
	void SetColorParameter(struct FName Name, struct FLinearColor Value); // Function MaterialPermuter.MaterialSwap.SetColorParameter // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13409b0
};

// Class MaterialPermuter.MaterialPermuterBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMaterialPermuterBlueprintLibrary : UBlueprintFunctionLibrary {

	void SimpleMaterialSwapParametersIsEmpty(struct FMaterialSwapParametersSimple& ParameterSet, bool& bIsEmpty); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SimpleMaterialSwapParametersIsEmpty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1334790
	struct FString SimpleMaterialSwapParametersDump(struct FMaterialSwapParametersSimple ParameterSet, struct FString Delimiter); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SimpleMaterialSwapParametersDump // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1342470
	struct FMaterialSwapParametersSimple SimpleCombineMaterialSwapParameters(struct FMaterialSwapParametersSimple A, struct FMaterialSwapParametersSimple B); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SimpleCombineMaterialSwapParameters // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x13420e0
	struct FMaterialSwapParametersSimple SetSimpleMaterialSwapParametersVector(struct FMaterialSwapParametersSimple& Parameters, struct FMaterialSwapVectorParameter Vector); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SetSimpleMaterialSwapParametersVector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1341b40
	struct FMaterialSwapParametersSimple SetSimpleMaterialSwapParametersTexture(struct FMaterialSwapParametersSimple& Parameters, struct FMaterialSwapTextureParameter Texture); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SetSimpleMaterialSwapParametersTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1341960
	struct FMaterialSwapParametersSimple SetSimpleMaterialSwapParametersScalar(struct FMaterialSwapParametersSimple& Parameters, struct FMaterialSwapScalarParameter Scalar); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SetSimpleMaterialSwapParametersScalar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1341810
	void SetMaterialSwapTransformedPairClosestBone(struct FMaterialSwapParameters& Parameters, struct AActor* Actor, struct FName PositionParameterName, struct FName VectorParameterName, struct FVector WorldPosition, struct FVector WorldVector); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapTransformedPairClosestBone // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x13413c0
	struct FMaterialSwapParameters SetMaterialSwapParametersVector(struct FMaterialSwapParameters& Parameters, struct FMaterialSwapVectorParameter Vector); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapParametersVector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1341240
	struct FMaterialSwapParameters SetMaterialSwapParametersTransformedVector(struct FMaterialSwapParameters& Parameters, struct FMaterialSwapTransformedVector TransformedVector); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapParametersTransformedVector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1341090
	struct FMaterialSwapParameters SetMaterialSwapParametersTransformedPosition(struct FMaterialSwapParameters& Parameters, struct FMaterialSwapTransformedPosition TransformedPosition); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapParametersTransformedPosition // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1340ee0
	struct FMaterialSwapParameters SetMaterialSwapParametersTexture(struct FMaterialSwapParameters& Parameters, struct FMaterialSwapTextureParameter Texture); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapParametersTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1340cd0
	struct FMaterialSwapParameters SetMaterialSwapParametersScalar(struct FMaterialSwapParameters& Parameters, struct FMaterialSwapScalarParameter Scalar); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.SetMaterialSwapParametersScalar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1340b50
	void MaterialSwapParametersIsEmpty(struct FMaterialSwapParameters& ParameterSet, bool& bIsEmpty); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MaterialSwapParametersIsEmpty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13403f0
	struct FString MaterialSwapParametersDump(struct FMaterialSwapParameters ParameterSet, struct FString Delimiter); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MaterialSwapParametersDump // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13400f0
	struct FMaterialSwapParametersSimple MakeSimpleMaterialSwapParametersVector(struct FMaterialSwapVectorParameter Vector); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeSimpleMaterialSwapParametersVector // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1335c80
	struct FMaterialSwapParametersSimple MakeSimpleMaterialSwapParametersTexture(struct FMaterialSwapTextureParameter Texture); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeSimpleMaterialSwapParametersTexture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1335b50
	struct FMaterialSwapParametersSimple MakeSimpleMaterialSwapParametersScalar(struct FMaterialSwapScalarParameter Scalar); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeSimpleMaterialSwapParametersScalar // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1335a20
	struct FMaterialSwapParametersSimple MakeSimpleMaterialSwapParameters(struct TArray<struct FMaterialSwapScalarParameter> Scalars, struct TArray<struct FMaterialSwapVectorParameter> Vectors, struct TArray<struct FMaterialSwapTextureParameter> Textures); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeSimpleMaterialSwapParameters // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133fa60
	struct FMaterialSwapTransformedVector MakeMaterialSwapTransformedVectorClosestBone(struct AActor* Actor, struct FName ParameterName, struct FVector WorldPosition, struct FVector WorldVector); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapTransformedVectorClosestBone // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x133f8d0
	struct FMaterialSwapTransformedVector MakeMaterialSwapTransformedVector(struct AActor* Actor, struct FName ParameterName, struct FVector Vector, enum class ETransformedParameterSpace Space, struct FName TransformSource, enum class ETransformedParameterSource TransformType); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapTransformedVector // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x133f6d0
	struct FMaterialSwapTransformedPosition MakeMaterialSwapTransformedPositionClosestBone(struct AActor* Actor, struct FName ParameterName, struct FVector WorldPosition); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapTransformedPositionClosestBone // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x133f570
	struct FMaterialSwapTransformedPosition MakeMaterialSwapTransformedPosition(struct AActor* Actor, struct FName ParameterName, struct FVector Position, enum class ETransformedParameterSpace Space, struct FName TransformSource, enum class ETransformedParameterSource TransformType); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapTransformedPosition // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x133f370
	struct FMaterialSwapParameters MakeMaterialSwapTransformedPairClosestBone(struct AActor* Actor, struct FName PositionParameterName, struct FName VectorParameterName, struct FVector WorldPosition, struct FVector WorldVector); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapTransformedPairClosestBone // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x133f140
	struct FMaterialSwapParameters MakeMaterialSwapParametersVector(struct FMaterialSwapVectorParameter Vector); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParametersVector // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133efd0
	struct FMaterialSwapParameters MakeMaterialSwapParametersTexture(struct FMaterialSwapTextureParameter Texture); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParametersTexture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133ee80
	struct FMaterialSwapParameters MakeMaterialSwapParametersScalar(struct FMaterialSwapScalarParameter Scalar); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParametersScalar // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133ed20
	struct FMaterialSwapParameters MakeMaterialSwapParametersFromSimple(struct FMaterialSwapParametersSimple Parameters); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParametersFromSimple // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133eb30
	struct FMaterialSwapParametersSimple MakeMaterialSwapParametersFromNotSimple(struct FMaterialSwapParameters Parameters); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParametersFromNotSimple // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133e8c0
	struct FMaterialSwapParameters MakeMaterialSwapParameters(struct TArray<struct FMaterialSwapScalarParameter>& Scalars, struct TArray<struct FMaterialSwapVectorParameter>& Vectors, struct TArray<struct FMaterialSwapTextureParameter>& Textures, struct TArray<struct FMaterialSwapTransformedPosition>& TransformedPositions, struct TArray<struct FMaterialSwapTransformedVector>& TransformedVectors); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.MakeMaterialSwapParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x133e620
	struct FMaterialSwapParametersSimple EmptySimpleMaterialSwapParameters(struct FMaterialSwapParametersSimple& ParameterSet); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.EmptySimpleMaterialSwapParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1334160
	struct FMaterialSwapParameters EmptyMaterialSwapParameters(struct FMaterialSwapParameters& ParameterSet); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.EmptyMaterialSwapParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x133d8c0
	struct FMaterialSwapParameters CombineSimpleMaterialSwapParameters(struct FMaterialSwapParameters A, struct FMaterialSwapParametersSimple B); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.CombineSimpleMaterialSwapParameters // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133c960
	struct FMaterialSwapParameters CombineMaterialSwapParameters(struct FMaterialSwapParameters A, struct FMaterialSwapParameters B); // Function MaterialPermuter.MaterialPermuterBlueprintLibrary.CombineMaterialSwapParameters // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133c410
};

// Class MaterialPermuter.MaterialSwapMeshPoolBase
// Size: 0xc0 (Inherited: 0x50)
struct UMaterialSwapMeshPoolBase : UMaterialSwap {
	struct TMap<struct TWeakObjectPtr<struct UMeshComponent>, struct FMeshMaterialSwap> SwappedMeshes; // 0x50(0x50)
	struct FMaterialSwapMeshStatesAndData MeshStates; // 0xa0(0x20)
};

// Class MaterialPermuter.MaterialSwapActor
// Size: 0xe8 (Inherited: 0xc0)
struct UMaterialSwapActor : UMaterialSwapMeshPoolBase {
	struct TWeakObjectPtr<struct AActor> SwappedActor; // 0xc0(0x08)
	struct TArray<struct UMaterialSwapActor*> DependentSwaps; // 0xc8(0x10)
	struct TWeakObjectPtr<struct UMaterialSwapActor> RootSwap; // 0xd8(0x08)
	enum class EMaterialSwapRefreshType RefreshType; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// Class MaterialPermuter.MaterialSwapComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UMaterialSwapComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct UMaterialSwap* MaterialSwap; // 0xd0(0x08)
	struct TWeakObjectPtr<struct UMeshComponent> SpecificMeshComponent; // 0xd8(0x08)

	bool ValidSwap(); // Function MaterialPermuter.MaterialSwapComponent.ValidSwap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1342720
	bool Swapped(); // Function MaterialPermuter.MaterialSwapComponent.Swapped // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13426d0
	void SetVectorParameter(struct FName Name, struct FVector Value); // Function MaterialPermuter.MaterialSwapComponent.SetVectorParameter // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1342000
	void SetVector4Parameter(struct FName Name, struct FVector4 Value); // Function MaterialPermuter.MaterialSwapComponent.SetVector4Parameter // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1341e40
	void SetTextureParameter(struct FName Name, struct UTexture* Value); // Function MaterialPermuter.MaterialSwapComponent.SetTextureParameter // (Native|Public|BlueprintCallable) // @ game+0x13278b0
	void SetScalarParameter(struct FName Name, float Value); // Function MaterialPermuter.MaterialSwapComponent.SetScalarParameter // (Native|Public|BlueprintCallable) // @ game+0x1327630
	void SetParameters(struct FMaterialSwapParameters& Params); // Function MaterialPermuter.MaterialSwapComponent.SetParameters // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1341630
	void SetColorParameter(struct FName Name, struct FLinearColor Value); // Function MaterialPermuter.MaterialSwapComponent.SetColorParameter // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13271b0
	bool RestartSwap(); // Function MaterialPermuter.MaterialSwapComponent.RestartSwap // (Native|Public|BlueprintCallable) // @ game+0x1340980
	bool NewSwapAdvanced(struct FMaterialSwapInfo& SwapInfo); // Function MaterialPermuter.MaterialSwapComponent.NewSwapAdvanced // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x13406c0
	bool NewSwap(enum class EMaterialSwapPriority Priority, struct FName Group, struct FName SubType); // Function MaterialPermuter.MaterialSwapComponent.NewSwap // (Final|Native|Public|BlueprintCallable) // @ game+0x1340560
	void HasMaterialSwap(struct AActor* Actor, bool& bHasMaterialSwap); // Function MaterialPermuter.MaterialSwapComponent.HasMaterialSwap // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x133de50
	void GetMaterialSwap(struct AActor* Actor, struct UMaterialSwapComponent*& MaterialSwapComponent); // Function MaterialPermuter.MaterialSwapComponent.GetMaterialSwap // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x133dc50
	struct FMaterialSwapComponentHandle GetCurrentHandle(); // Function MaterialPermuter.MaterialSwapComponent.GetCurrentHandle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x133dc10
	void EndSwap(bool AllowRestart, bool ReleaseSwap); // Function MaterialPermuter.MaterialSwapComponent.EndSwap // (Native|Public|BlueprintCallable) // @ game+0x133da30
	bool DestroySwapComponent(struct UMaterialSwapComponent* MaterialSwapComponent, bool bUnswap); // Function MaterialPermuter.MaterialSwapComponent.DestroySwapComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x133d7f0
	bool DestroySwap(struct AActor* Actor, bool unswap); // Function MaterialPermuter.MaterialSwapComponent.DestroySwap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x133d720
	bool CreateSwapAdvanced(struct AActor* Actor, struct UMaterialSwapComponent*& MaterialSwapComponent, struct FMaterialSwapInfo& SwapInfo, bool bAlwaysCreateNewComponent); // Function MaterialPermuter.MaterialSwapComponent.CreateSwapAdvanced // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x133d190
	bool CreateSwap(struct AActor* Actor, struct UMaterialSwapComponent*& MaterialSwapComponent, enum class EMaterialSwapPriority Priority, struct FName Group, struct FName SubType); // Function MaterialPermuter.MaterialSwapComponent.CreateSwap // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x133cfe0
	bool CreateMeshSwap(struct UMeshComponent* MeshComponent, struct UMaterialSwapComponent*& MaterialSwapComponent, struct FMaterialSwapInfo& SwapInfo, bool bAlwaysCreateNewComponent); // Function MaterialPermuter.MaterialSwapComponent.CreateMeshSwap // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x133cdd0
};

// Class MaterialPermuter.MaterialSwapComponentAutoRefresh
// Size: 0x138 (Inherited: 0xe0)
struct UMaterialSwapComponentAutoRefresh : UMaterialSwapComponent {
	struct FMaterialSwapParameters Parameters; // 0xe0(0x50)
	struct UMaterialSwapInfoObjectBase* SavedSwapInfo; // 0x130(0x08)

	void HasAutoRefreshMaterialSwap(struct AActor* Actor, bool& bHasMaterialSwap); // Function MaterialPermuter.MaterialSwapComponentAutoRefresh.HasAutoRefreshMaterialSwap // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x133dd50
	void GetAutoRefreshMaterialSwap(struct AActor* Actor, struct UMaterialSwapComponentAutoRefresh*& MaterialSwapAutoRefreshComponent); // Function MaterialPermuter.MaterialSwapComponentAutoRefresh.GetAutoRefreshMaterialSwap // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x133db10
	bool CreateSwapAutoRefresh(struct AActor* Actor, struct UMaterialSwapComponentAutoRefresh*& MaterialSwapComponent, enum class EMaterialSwapPriority Priority, struct FName Group, struct FName SubType); // Function MaterialPermuter.MaterialSwapComponentAutoRefresh.CreateSwapAutoRefresh // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x133d570
	bool CreateSwapAdvancedAutoRefresh(struct AActor* Actor, struct UMaterialSwapComponentAutoRefresh*& MaterialSwapComponent, struct FMaterialSwapInfo& SwapInfo); // Function MaterialPermuter.MaterialSwapComponentAutoRefresh.CreateSwapAdvancedAutoRefresh // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x133d3a0
};

// Class MaterialPermuter.MaterialPermuterKeyBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMaterialPermuterKeyBlueprintLibrary : UBlueprintFunctionLibrary {

	void MaterialPermuterKeySplit(struct FMaterialPermuterKey Key, struct FName& Group, struct FName& SubType); // Function MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MaterialPermuterKeySplit // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x133ffb0
	void MaterialPermuterKeyIsValid(struct FMaterialPermuterKey Key, bool& bValid); // Function MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MaterialPermuterKeyIsValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x133fed0
	void MaterialPermuterKeyDropdownSplit(struct FMaterialPermuterKeyProperty KeyDropdown, struct FName& Group, struct FName& SubType); // Function MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MaterialPermuterKeyDropdownSplit // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x133fd90
	void MaterialPermuterKeyDropdownIsValid(struct FMaterialPermuterKeyProperty KeyDropdown, bool& bValid); // Function MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MaterialPermuterKeyDropdownIsValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x133fca0
	struct FString MakeMaterialPermuterKeyHashString(struct FMaterialPermuterKey Key); // Function MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyHashString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133e530
	struct FName MakeMaterialPermuterKeyHash(struct FMaterialPermuterKey Key); // Function MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyHash // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1334310
	struct FMaterialPermuterKey MakeMaterialPermuterKeyFromKeyDropdown(struct FMaterialPermuterKeyProperty KeyDropdown); // Function MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyFromKeyDropdown // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133e490
	struct FMaterialPermuterKey MakeMaterialPermuterKeyFromGroupSubType(struct FName Group, struct FName SubType); // Function MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyFromGroupSubType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133e3b0
	struct FString MakeMaterialPermuterKeyDropdownHashString(struct FMaterialPermuterKeyProperty KeyDropdown); // Function MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyDropdownHashString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x133e250
	struct FName MakeMaterialPermuterKeyDropdownHash(struct FMaterialPermuterKeyProperty KeyDropdown); // Function MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyDropdownHash // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1334280
};

// Class MaterialPermuter.MaterialSwapInfoObjectBase
// Size: 0x28 (Inherited: 0x28)
struct UMaterialSwapInfoObjectBase : UObject {
};

// Class MaterialPermuter.MaterialSwapInfoMaterialPermuterKeyObject
// Size: 0x138 (Inherited: 0x28)
struct UMaterialSwapInfoMaterialPermuterKeyObject : UMaterialSwapInfoObjectBase {
	struct FMaterialSwapKey SwapInfo; // 0x28(0x110)
};

// Class MaterialPermuter.MaterialSwapInfoObject
// Size: 0x28 (Inherited: 0x28)
struct UMaterialSwapInfoObject : UMaterialSwapInfoObjectBase {
};

// Class MaterialPermuter.MaterialSwapInfoInPlaceMIDsObject
// Size: 0x128 (Inherited: 0x28)
struct UMaterialSwapInfoInPlaceMIDsObject : UMaterialSwapInfoObject {
	struct FMaterialSwapInfoInPlaceMIDs SwapInfo; // 0x28(0x100)
};

// Class MaterialPermuter.MaterialSwapInfoOverrideMaterialObject
// Size: 0x138 (Inherited: 0x28)
struct UMaterialSwapInfoOverrideMaterialObject : UMaterialSwapInfoObject {
	struct FMaterialSwapInfoOverrideMaterial SwapInfo; // 0x28(0x110)
};

// Class MaterialPermuter.MaterialSwapInfoOverrideMaterialsObject
// Size: 0x140 (Inherited: 0x28)
struct UMaterialSwapInfoOverrideMaterialsObject : UMaterialSwapInfoObject {
	struct FMaterialSwapInfoOverrideMaterials SwapInfo; // 0x28(0x118)
};

// Class MaterialPermuter.MaterialSwapInfoMaterialPermuterKeyUIObject
// Size: 0x138 (Inherited: 0x28)
struct UMaterialSwapInfoMaterialPermuterKeyUIObject : UMaterialSwapInfoObject {
	struct FMaterialSwapKeyUI SwapInfo; // 0x28(0x110)
};

// Class MaterialPermuter.MaterialSwapSingleMesh
// Size: 0x88 (Inherited: 0x50)
struct UMaterialSwapSingleMesh : UMaterialSwap {
	struct TWeakObjectPtr<struct UMeshComponent> Mesh; // 0x50(0x08)
	struct FMeshMaterialSwap SwappedMesh; // 0x58(0x10)
	struct FMaterialSwapMeshStatesAndData MeshStates; // 0x68(0x20)
};

// Class MaterialPermuter.MaterialSwapMeshPool
// Size: 0xc0 (Inherited: 0xc0)
struct UMaterialSwapMeshPool : UMaterialSwapMeshPoolBase {
};

// Class MaterialPermuter.MaterialSwapMeshStatesBaseComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UMaterialSwapMeshStatesBaseComponent : UActorComponent {
	struct FMaterialSwapMeshStatesAndData MeshStatesAndData; // 0xc8(0x20)
	struct FName MeshStatesTag; // 0xe8(0x08)

	void KillMaterialSwapMeshStatesComponent(struct UMaterialSwapMeshStatesBaseComponent* MaterialSwapMeshStatesComponent, bool& bSuccess); // Function MaterialPermuter.MaterialSwapMeshStatesBaseComponent.KillMaterialSwapMeshStatesComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13482c0
	void KillAllMaterialSwapMeshStatesComponentsByTag(struct AActor* Target, struct FName Tag, int32_t& CountOfDestroyed); // Function MaterialPermuter.MaterialSwapMeshStatesBaseComponent.KillAllMaterialSwapMeshStatesComponentsByTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13481a0
	void CountAllMaterialSwapMeshStatesComponentsByTag(struct AActor* Target, struct FName Tag, int32_t& ActiveCount); // Function MaterialPermuter.MaterialSwapMeshStatesBaseComponent.CountAllMaterialSwapMeshStatesComponentsByTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1347980
};

// Class MaterialPermuter.MaterialSwapMeshStatesComponent
// Size: 0x108 (Inherited: 0xf0)
struct UMaterialSwapMeshStatesComponent : UMaterialSwapMeshStatesBaseComponent {
	struct TArray<struct UMaterialSwapMeshState*> MeshStates; // 0xf0(0x10)
	bool bIncludeChildren; // 0x100(0x01)
	bool bUpdateOnTick; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
};

// Class MaterialPermuter.MaterialSwapMeshStatesRulesComponent
// Size: 0x1e8 (Inherited: 0xf0)
struct UMaterialSwapMeshStatesRulesComponent : UMaterialSwapMeshStatesBaseComponent {
	struct TArray<struct UMaterialSwapMeshState*> MeshStates; // 0xf0(0x10)
	struct FMaterialSwapRules Rules; // 0x100(0xe0)
	bool bUpdateOnTick; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStatesFireAndForgetComponent
// Size: 0x1e0 (Inherited: 0xf0)
struct UMaterialSwapMeshStatesFireAndForgetComponent : UMaterialSwapMeshStatesBaseComponent {
	struct TWeakObjectPtr<struct AActor> OwningActor; // 0xf0(0x08)
	struct FMaterialSwapRules Rules; // 0xf8(0xe0)
	bool bUseRules; // 0x1d8(0x01)
	bool bIncludeChildren; // 0x1d9(0x01)
	bool bUpdateOnTick; // 0x1da(0x01)
	char pad_1DB[0x5]; // 0x1db(0x05)

	void RestartMeshStates(struct TArray<struct UMaterialSwapMeshState*>& MeshStates); // Function MaterialPermuter.MaterialSwapMeshStatesFireAndForgetComponent.RestartMeshStates // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1348390
	struct UMaterialSwapMeshStatesFireAndForgetComponent* CreateMeshStatesFireAndForgetComponentRules(struct AActor* Owner, struct AActor* Target, struct TArray<struct UMaterialSwapMeshState*>& MeshStates, struct FMaterialSwapRules UseRules, bool bAutoUpdate, struct FName Tag); // Function MaterialPermuter.MaterialSwapMeshStatesFireAndForgetComponent.CreateMeshStatesFireAndForgetComponentRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1347ca0
	struct UMaterialSwapMeshStatesFireAndForgetComponent* CreateMeshStatesFireAndForgetComponent(struct AActor* Owner, struct AActor* Target, struct TArray<struct UMaterialSwapMeshState*>& MeshStates, bool bShouldIncludeChildren, bool bAutoUpdate, struct FName Tag); // Function MaterialPermuter.MaterialSwapMeshStatesFireAndForgetComponent.CreateMeshStatesFireAndForgetComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1347aa0
};

// Class MaterialPermuter.MaterialSwapMeshStateDataBoolMap
// Size: 0x78 (Inherited: 0x28)
struct UMaterialSwapMeshStateDataBoolMap : UMaterialSwapMeshStateData {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class MaterialPermuter.MaterialSwapMeshStateBoolMap
// Size: 0x28 (Inherited: 0x28)
struct UMaterialSwapMeshStateBoolMap : UMaterialSwapMeshState {
};

// Class MaterialPermuter.MaterialSwapMeshStateIgnoreLightLeakingCorrection
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateIgnoreLightLeakingCorrection : UMaterialSwapMeshStateBoolMap {
	bool bIgnoreLightLeakingCorrection; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateReceivesWeatherDecals
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateReceivesWeatherDecals : UMaterialSwapMeshStateBoolMap {
	bool bReceivesWeatherDecals; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateReceivesDecals
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateReceivesDecals : UMaterialSwapMeshStateBoolMap {
	bool bReceivesDecals; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateRenderCustomDepth
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateRenderCustomDepth : UMaterialSwapMeshStateBoolMap {
	bool bRenderCustomDepth; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateCastShadow
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateCastShadow : UMaterialSwapMeshStateBoolMap {
	bool bCastShadow; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateContactShadow
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateContactShadow : UMaterialSwapMeshStateBoolMap {
	bool bCastContactShadow; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateDynamicShadow
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateDynamicShadow : UMaterialSwapMeshStateBoolMap {
	bool bCastDynamicShadow; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateHiddenShadow
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateHiddenShadow : UMaterialSwapMeshStateBoolMap {
	bool bCastHiddenShadow; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateShadowAsTwoSided
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateShadowAsTwoSided : UMaterialSwapMeshStateBoolMap {
	bool bCastShadowAsTwoSided; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateSelfShadowOnly
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateSelfShadowOnly : UMaterialSwapMeshStateBoolMap {
	bool bSelfShadowOnly; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateTreatAsBackgroundForOcclusion
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateTreatAsBackgroundForOcclusion : UMaterialSwapMeshStateBoolMap {
	bool bTreatAsBackgroundForOcclusion; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateUseAsOccluder
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateUseAsOccluder : UMaterialSwapMeshStateBoolMap {
	bool bUseAsOccluder; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateTag
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateTag : UMaterialSwapMeshStateBoolMap {
	struct FName Tag; // 0x28(0x08)
};

// Class MaterialPermuter.MaterialSwapMeshStateAddTag
// Size: 0x30 (Inherited: 0x30)
struct UMaterialSwapMeshStateAddTag : UMaterialSwapMeshStateTag {
};

// Class MaterialPermuter.MaterialSwapMeshStateRemoveTag
// Size: 0x30 (Inherited: 0x30)
struct UMaterialSwapMeshStateRemoveTag : UMaterialSwapMeshStateTag {
};

// Class MaterialPermuter.MaterialSwapMeshStateDataIntMap
// Size: 0x78 (Inherited: 0x28)
struct UMaterialSwapMeshStateDataIntMap : UMaterialSwapMeshStateData {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class MaterialPermuter.MaterialSwapMeshStateIntMap
// Size: 0x28 (Inherited: 0x28)
struct UMaterialSwapMeshStateIntMap : UMaterialSwapMeshState {
};

// Class MaterialPermuter.MaterialSwapMeshStateTranslucencySortPriority
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateTranslucencySortPriority : UMaterialSwapMeshStateIntMap {
	int32_t TranslucencySortPriority; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class MaterialPermuter.MaterialSwapMeshStateCustomDepthStencilValue
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateCustomDepthStencilValue : UMaterialSwapMeshStateIntMap {
	int32_t CustomDepthStencilValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class MaterialPermuter.MaterialSwapMeshStateLightingChannels
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateLightingChannels : UMaterialSwapMeshStateIntMap {
	struct FLightingChannels LightingChannels; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class MaterialPermuter.MaterialSwapMeshStateForcedLodModel
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateForcedLodModel : UMaterialSwapMeshStateIntMap {
	int32_t ForcedLodModel; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class MaterialPermuter.MaterialSwapMeshStateDataFloatMap
// Size: 0x78 (Inherited: 0x28)
struct UMaterialSwapMeshStateDataFloatMap : UMaterialSwapMeshStateData {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class MaterialPermuter.MaterialSwapMeshStateFloatMap
// Size: 0x28 (Inherited: 0x28)
struct UMaterialSwapMeshStateFloatMap : UMaterialSwapMeshState {
};

// Class MaterialPermuter.MaterialSwapMeshStateTranslucencySortDistanceOffset
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateTranslucencySortDistanceOffset : UMaterialSwapMeshStateFloatMap {
	float TranslucencySortDistanceOffset; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class MaterialPermuter.MaterialSwapMeshStateBoundsScale
// Size: 0x30 (Inherited: 0x28)
struct UMaterialSwapMeshStateBoundsScale : UMaterialSwapMeshStateFloatMap {
	float BoundsScale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class MaterialPermuter.MaterialSwapSphereSelectionComponent
// Size: 0x500 (Inherited: 0x220)
struct UMaterialSwapSphereSelectionComponent : USceneComponent {
	enum class EMaterialSwapSphereSelectionType SphereType; // 0x218(0x01)
	struct FVector ManualPosition; // 0x21c(0x0c)
	float SphereRadiusMeters; // 0x228(0x04)
	float UnswapDelaySeconds; // 0x22c(0x04)
	struct FMaterialSwapActorRules ActorEventRules; // 0x230(0x40)
	struct FMulticastInlineDelegate ActorEventDelegate; // 0x270(0x10)
	char pad_285[0x13]; // 0x285(0x13)
	struct FName SwapSphereMaterialParameter; // 0x298(0x08)
	bool bSwapSphereMaterialParameter; // 0x2a0(0x01)
	bool bSwapOwner; // 0x2a1(0x01)
	char pad_2A2[0x6]; // 0x2a2(0x06)
	struct FMaterialSwapInfo SwapInfo; // 0x2a8(0x180)
	struct TMap<struct TWeakObjectPtr<struct UMeshComponent>, struct FMaterialSwapSphereSelectionMesh> MaterialSwaps; // 0x428(0x50)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FMaterialSwapSphereSelectionActor> ActorsInside; // 0x478(0x50)
	char pad_4C8[0x8]; // 0x4c8(0x08)
	struct FVector4 SwapSphereMaterialParameterValue; // 0x4d0(0x10)
	bool bSwapping; // 0x4e0(0x01)
	char pad_4E1[0x1f]; // 0x4e1(0x1f)

	bool Swapping(); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.Swapping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x134b2c0
	int32_t Swapped(); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.Swapped // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x134b290
	void StartSwapping(struct FMaterialSwapInfo& NewSwapInfo); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.StartSwapping // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x134b160
	void SetVectorParameter(struct FName Name, struct FVector Value); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.SetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x134b080
	void SetVector4Parameter(struct FName Name, struct FVector4 Value); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.SetVector4Parameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x134afa0
	void SetTextureParameter(struct FName Name, struct UTexture* Value); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x134aed0
	void SetScalarParameter(struct FName Name, float Value); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.SetScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x134ae00
	void SetParameters(struct FMaterialSwapParameters& Params); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.SetParameters // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x134ad00
	void SetColorParameter(struct FName Name, struct FLinearColor Value); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.SetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x134ac30
	void IsWeatherOnly(bool& OnlySwappingWeather); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.IsWeatherOnly // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x134ab90
	bool IsInside(struct AActor* Actor); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.IsInside // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x134aaf0
	void GetCurrentSwapInfo(struct FMaterialSwapInfo& CurrentSwapInfo); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.GetCurrentSwapInfo // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x134a940
	void EndSwapping(); // Function MaterialPermuter.MaterialSwapSphereSelectionComponent.EndSwapping // (Final|Native|Public|BlueprintCallable) // @ game+0x134a920
};

// Class MaterialPermuter.MaterialPermuterUnswapInterface
// Size: 0x28 (Inherited: 0x28)
struct UMaterialPermuterUnswapInterface : UInterface {
};

// Class MaterialPermuter.SimpleDataSet
// Size: 0xa8 (Inherited: 0x28)
struct USimpleDataSet : UObject {
	struct TSet<struct UObject*> LoadedObjects; // 0x28(0x50)
	struct TArray<struct FSimpleDataSetPendingLoad> PendingLoads; // 0x78(0x10)
	enum class ESimpleDataSetPreloadState PreloadState; // 0x88(0x01)
	char pad_89[0x1f]; // 0x89(0x1f)
};

