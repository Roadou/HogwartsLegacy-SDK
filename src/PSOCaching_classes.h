// Class PSOCaching.PSOCachingCameraActor
// Size: 0x2d0 (Inherited: 0x2a8)
struct APSOCachingCameraActor : APawn {
	char pad_2A8[0x28]; // 0x2a8(0x28)
};

// Class PSOCaching.PSOCachingLevelController
// Size: 0x2e0 (Inherited: 0x248)
struct APSOCachingLevelController : AActor {
	float CameraRotationSpeed; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct TArray<struct UObject*> PreviewedAssetTypes; // 0x250(0x10)
	struct TSet<struct FSoftObjectPath> AssetsToIgnore; // 0x260(0x50)
	struct TArray<struct FSoftObjectPath> PredefinedAssetsForPreview; // 0x2b0(0x10)
	int32_t DebugFastAssetsCount; // 0x2c0(0x04)
	enum class EPSOCachingLevelMode Mode; // 0x2c4(0x04)
	char pad_2C8[0x18]; // 0x2c8(0x18)
};

// Class PSOCaching.PSOCachingPreviewActor
// Size: 0x348 (Inherited: 0x248)
struct APSOCachingPreviewActor : AActor {
	char pad_248[0x10]; // 0x248(0x10)
	enum class EPSOCachePreviewMode PreviewMode; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	int32_t PreviewFramesCount; // 0x25c(0x04)
	float PreviewTime; // 0x260(0x04)
	char pad_264[0xe4]; // 0x264(0xe4)

	void SetupManagedPrimitiveComponent(struct UPrimitiveComponent* InComponent); // Function PSOCaching.PSOCachingPreviewActor.SetupManagedPrimitiveComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1fff9b0
	void ResetStaticMeshPreview(struct UPrimitiveComponent* Primitive); // Function PSOCaching.PSOCachingPreviewActor.ResetStaticMeshPreview // (Final|Native|Private) // @ game+0x1fff920
	void ResetNiagaraSystemPreview(struct UPrimitiveComponent* Primitive); // Function PSOCaching.PSOCachingPreviewActor.ResetNiagaraSystemPreview // (Final|Native|Private) // @ game+0x1fff890
	void RegisterPreviewAssetTypeData(struct UObject* AssetType, struct FPreviewAssetTypeData& AssetTypeData); // Function PSOCaching.PSOCachingPreviewActor.RegisterPreviewAssetTypeData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fff7a0
	void RegisterAssetTypePreviewComponent(struct UObject* AssetType, struct UPrimitiveComponent* InComponent); // Function PSOCaching.PSOCachingPreviewActor.RegisterAssetTypePreviewComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1fff6d0
	void ActivateStaticMeshPreview(struct UPrimitiveComponent* Primitive, struct UObject* Asset); // Function PSOCaching.PSOCachingPreviewActor.ActivateStaticMeshPreview // (Final|Native|Private) // @ game+0x1fff600
	void ActivateNiagaraSystemPreview(struct UPrimitiveComponent* Primitive, struct UObject* Asset); // Function PSOCaching.PSOCachingPreviewActor.ActivateNiagaraSystemPreview // (Final|Native|Private) // @ game+0x1fff530
};

