// Class NiagaraStarField.NiagaraDataInterfaceHYGStarCatalog
// Size: 0x88 (Inherited: 0x38)
struct UNiagaraDataInterfaceHYGStarCatalog : UNiagaraDataInterface {
	struct UStarCatalog* StarCatalogAsset; // 0x38(0x08)
	struct FStarRenderingParameters RenderingParams; // 0x40(0x14)
	struct FPixelStarRenderingParameters PixelRenderingParams; // 0x54(0x18)
	struct FStarScalabilityParameters ScalabilityParams; // 0x6c(0x18)
	bool bStarSpawnValuesGPUBufferDirty; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// Class NiagaraStarField.StarCatalog
// Size: 0xa0 (Inherited: 0x30)
struct UStarCatalog : UDataAsset {
	struct FStarCatalogEntryConvert Convert; // 0x30(0x38)
	struct FStarCatalogNameIDMap ConstellationIDMap; // 0x68(0x10)
	struct FStarCatalogNameIDMap ExtraIDMap; // 0x78(0x10)
	struct TArray<struct FStar> Stars; // 0x88(0x10)
	int32_t TotalStars; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)

	void ForceRebuild(); // Function NiagaraStarField.StarCatalog.ForceRebuild // (Final|Native|Public) // @ game+0x1074730
};

