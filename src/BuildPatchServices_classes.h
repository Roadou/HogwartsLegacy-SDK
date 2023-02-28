// Class BuildPatchServices.BuildPatchManifest
// Size: 0x120 (Inherited: 0x28)
struct UBuildPatchManifest : UObject {
	char ManifestFileVersion; // 0x28(0x01)
	bool bIsFileData; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	uint32_t AppID; // 0x2c(0x04)
	struct FString AppName; // 0x30(0x10)
	struct FString BuildVersion; // 0x40(0x10)
	struct FString LaunchExe; // 0x50(0x10)
	struct FString LaunchCommand; // 0x60(0x10)
	struct TSet<struct FString> PrereqIds; // 0x70(0x50)
	struct FString PrereqName; // 0xc0(0x10)
	struct FString PrereqPath; // 0xd0(0x10)
	struct FString PrereqArgs; // 0xe0(0x10)
	struct TArray<struct FFileManifestData> FileManifestList; // 0xf0(0x10)
	struct TArray<struct FChunkInfoData> ChunkList; // 0x100(0x10)
	struct TArray<struct FCustomFieldData> CustomFields; // 0x110(0x10)
};

