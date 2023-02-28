// Class USDClasses.UsdAssetCache
// Size: 0x1e8 (Inherited: 0x28)
struct UUsdAssetCache : UObject {
	struct TMap<struct FString, struct UObject*> TransientStorage; // 0x28(0x50)
	struct TMap<struct FString, struct UObject*> PersistentStorage; // 0x78(0x50)
	bool bAllowPersistentStorage; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TSet<struct UObject*> OwnedAssets; // 0xd0(0x50)
	struct TMap<struct FString, struct UObject*> PrimPathToAssets; // 0x120(0x50)
	char pad_170[0x78]; // 0x170(0x78)
};

// Class USDClasses.UsdAssetImportData
// Size: 0x40 (Inherited: 0x28)
struct UUsdAssetImportData : UAssetImportData {
	struct FString PrimPath; // 0x28(0x10)
	struct UObject* ImportOptions; // 0x38(0x08)
};

// Class USDClasses.UsdProjectSettings
// Size: 0x48 (Inherited: 0x38)
struct UUsdProjectSettings : UDeveloperSettings {
	struct TArray<struct FDirectoryPath> AdditionalPluginDirectories; // 0x38(0x10)
};

