// Enum PersistentData.ECharacterNameFormat
enum class ECharacterNameFormat : uint8 {
	NONE = 0,
	ANSI = 1,
	WIDE = 2,
	ECharacterNameFormat_MAX = 3
};

// Enum PersistentData.EUDSMissionHideReason
enum class EUDSMissionHideReason : uint8 {
	MISSION_PREREQ_GATED = 0,
	EXCLUSIVE_MISSION_GATED = 1,
	EUDSMissionHideReason_MAX = 2
};

// Enum PersistentData.ESaveType
enum class ESaveType : uint8 {
	NONE = 0,
	AUTO = 1,
	USER = 2,
	ALL = 3,
	ESaveType_MAX = 4
};

// ScriptStruct PersistentData.PersistentGameDataListInfo
// Size: 0x768 (Inherited: 0x00)
struct FPersistentGameDataListInfo {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Filename; // 0x08(0x10)
	int32_t AccountUserIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FDateTime LastEditTimeStamp; // 0x20(0x08)
	struct FCharacterSaveGameInfo LastLoadedCharacter; // 0x28(0x350)
	struct FCharacterSaveGameInfo CurrentCharacter; // 0x378(0x350)
	struct TArray<struct FCharacterSaveGameInfo> CharacterList; // 0x6c8(0x10)
	struct TArray<struct FSaveDirectoryEntry> SaveFileList; // 0x6d8(0x10)
	bool bCompletedIntro; // 0x6e8(0x01)
	char pad_6E9[0x7]; // 0x6e9(0x07)
	struct TMap<struct FString, struct FString> wizardingWorldData; // 0x6f0(0x50)
	struct TArray<struct FString> Entitlements; // 0x740(0x10)
	struct TArray<struct FString> AnalyticsEvents; // 0x750(0x10)
	bool bSkippedLanguageCheck; // 0x760(0x01)
	char pad_761[0x7]; // 0x761(0x07)
};

// ScriptStruct PersistentData.SaveDirectoryEntry
// Size: 0x58 (Inherited: 0x00)
struct FSaveDirectoryEntry {
	struct FString FilenameSlot; // 0x00(0x10)
	int32_t AccountUserIndex; // 0x10(0x04)
	int32_t CharacterID; // 0x14(0x04)
	enum class ESaveType SaveType; // 0x18(0x01)
	bool bIsUsed; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FDateTime GameTime; // 0x20(0x08)
	struct FDateTime SaveTime; // 0x28(0x08)
	struct FString CurrentMap; // 0x30(0x10)
	struct FString CurrentAction; // 0x40(0x10)
	int32_t MajorVersion; // 0x50(0x04)
	int32_t MinorVersion; // 0x54(0x04)
};

// ScriptStruct PersistentData.CharacterSaveGameInfo
// Size: 0x350 (Inherited: 0x00)
struct FCharacterSaveGameInfo {
	int32_t CharacterID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString CharacterName; // 0x08(0x10)
	struct FString CharacterPronoun; // 0x18(0x10)
	struct FString CharacterVoice; // 0x28(0x10)
	struct FString CharacterHouse; // 0x38(0x10)
	struct FString CharacterGender; // 0x48(0x10)
	int32_t CharacterLevel; // 0x58(0x04)
	char CharacterGameDifficulty; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct FName> CharacterPresetData; // 0x60(0x10)
	struct TArray<struct FName> CharacterClothesData; // 0x70(0x10)
	struct FString GearTags; // 0x80(0x10)
	bool bIsUsed; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString CharacterUID; // 0x98(0x10)
	struct FUDSPlayerState UDSPlayerState; // 0xa8(0x240)
	struct FFrontendPlayerState FrontendPlayerState; // 0x2e8(0x50)
	int32_t VoicePitch; // 0x338(0x04)
	enum class ECharacterNameFormat CurrentFormat; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct TArray<char> CharacterNameBytes; // 0x340(0x10)
};

// ScriptStruct PersistentData.FrontendPlayerState
// Size: 0x50 (Inherited: 0x00)
struct FFrontendPlayerState {
	struct TMap<struct FString, struct FString> Values; // 0x00(0x50)
};

// ScriptStruct PersistentData.UDSPlayerState
// Size: 0x240 (Inherited: 0x00)
struct FUDSPlayerState {
	struct TSet<struct FString> AvailableMissions; // 0x00(0x50)
	struct TSet<struct FString> ActiveMissions; // 0x50(0x50)
	struct TSet<struct FString> CompletedMissions; // 0xa0(0x50)
	struct TMap<enum class EUDSMissionHideReason, struct FMissions> HiddenMissions; // 0xf0(0x50)
	struct TMap<struct FString, struct FUDSMissionTasks> MissionToTasksMap; // 0x140(0x50)
	struct TSet<struct FString> AvailableMechanics; // 0x190(0x50)
	struct TSet<struct FString> EquippedLoadoutMechanics; // 0x1e0(0x50)
	struct FString EquippedInventoryItem; // 0x230(0x10)
};

// ScriptStruct PersistentData.UDSMissionTasks
// Size: 0x108 (Inherited: 0x00)
struct FUDSMissionTasks {
	struct TSet<struct FString> AvailableTasks; // 0x00(0x50)
	struct TSet<struct FString> ActiveTasks; // 0x50(0x50)
	struct TSet<struct FString> CompletedTasks; // 0xa0(0x50)
	struct FString BranchStallTask; // 0xf0(0x10)
	float BranchStallTaskNumber; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct PersistentData.Missions
// Size: 0x50 (Inherited: 0x00)
struct FMissions {
	struct TSet<struct FString> Missions; // 0x00(0x50)
};

// ScriptStruct PersistentData.SaveGameInfo
// Size: 0x78 (Inherited: 0x00)
struct FSaveGameInfo {
	struct FString SlotName; // 0x00(0x10)
	int32_t AccountUserIndex; // 0x10(0x04)
	int32_t CharacterID; // 0x14(0x04)
	enum class ESaveType SaveType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString PlayedTime; // 0x20(0x10)
	struct FString PlatformSaveTime; // 0x30(0x10)
	struct FString CurrentMap; // 0x40(0x10)
	struct FString CurrentAction; // 0x50(0x10)
	struct FString SaveVersion; // 0x60(0x10)
	bool bIsUsed; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

