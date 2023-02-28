// Class PersistentData.PersistentData
// Size: 0xd08 (Inherited: 0x28)
struct UPersistentData : UObject {
	struct FMulticastInlineDelegate OnGameToBeSaved; // 0x28(0x10)
	struct FMulticastInlineDelegate OnPostGameToBeSaved; // 0x38(0x10)
	struct FMulticastInlineDelegate PreSaveLoaded; // 0x48(0x10)
	struct FMulticastInlineDelegate OnSaveGameLoaded; // 0x58(0x10)
	struct FMulticastInlineDelegate PreCharacterDeleted; // 0x68(0x10)
	struct FMulticastInlineDelegate OnDBVersionCheck; // 0x78(0x10)
	struct FMulticastInlineDelegate OnSaveGameComplete; // 0x88(0x10)
	struct FMulticastInlineDelegate OnCharacterDeleted; // 0x98(0x10)
	char pad_A8[0x70]; // 0xa8(0x70)
	struct FMulticastInlineDelegate OnCrossGenSaveDataComplete; // 0x118(0x10)
	struct FMulticastInlineDelegate OnAllCrossGenSaveDataComplete; // 0x128(0x10)
	char pad_138[0xbd0]; // 0x138(0xbd0)

	bool UpdatePlayableCharacterVoice(int32_t CharacterID, struct FString CharacterVoice); // Function PersistentData.PersistentData.UpdatePlayableCharacterVoice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x352a090
	bool UpdatePlayableCharacterPronoun(int32_t CharacterID, struct FString CharacterPronoun); // Function PersistentData.PersistentData.UpdatePlayableCharacterPronoun // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3529f60
	bool UpdatePlayableCharacterPresets(int32_t CharacterID, struct TArray<struct FName> CharacterPresets); // Function PersistentData.PersistentData.UpdatePlayableCharacterPresets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3529e30
	bool UpdatePlayableCharacterName(int32_t CharacterID, struct FString CharacterName); // Function PersistentData.PersistentData.UpdatePlayableCharacterName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3529d00
	bool UpdatePlayableCharacterLevel(int32_t CharacterID, int32_t CharacterLevel); // Function PersistentData.PersistentData.UpdatePlayableCharacterLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3529c30
	bool UpdatePlayableCharacterHouse(int32_t CharacterID, struct FString CharacterHouse); // Function PersistentData.PersistentData.UpdatePlayableCharacterHouse // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3529b00
	bool UpdatePlayableCharacterGender(int32_t CharacterID, struct FString CharacterGender); // Function PersistentData.PersistentData.UpdatePlayableCharacterGender // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x35299d0
	bool UpdatePlayableCharacterClothes(int32_t CharacterID, struct TArray<struct FName> CharacterClothes, struct FString AllGearTags); // Function PersistentData.PersistentData.UpdatePlayableCharacterClothes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3529860
	bool SaveGameDataOfType(enum class ESaveType SaveType, int32_t CharacterID, struct FString LocationName, struct FString MissionData, bool bCollectSaveData); // Function PersistentData.PersistentData.SaveGameDataOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3529630
	bool SaveGameDataInSlot(struct FString SlotName, enum class ESaveType SaveType, int32_t CharacterID, struct FString LocationName, struct FString MissionData, bool bCollectSaveData, struct FString CloudLabel); // Function PersistentData.PersistentData.SaveGameDataInSlot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x35292d0
	bool RemoveSaveInSlot(struct FString SlotName, int32_t CharacterID); // Function PersistentData.PersistentData.RemoveSaveInSlot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x35291a0
	bool RemovePlayableCharacter(int32_t CharacterID, bool bSaveFileListAsync); // Function PersistentData.PersistentData.RemovePlayableCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x35290d0
	bool RemoveAllSavesForCharacter(int32_t CharacterID); // Function PersistentData.PersistentData.RemoveAllSavesForCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3529040
	bool RemoveAllSaveData(); // Function PersistentData.PersistentData.RemoveAllSaveData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3529010
	void OnCrossGenSaveDataLoaded(bool Result); // Function PersistentData.PersistentData.OnCrossGenSaveDataLoaded // (Final|Native|Public) // @ game+0x3528f80
	bool LoadLastSaveOfType(enum class ESaveType SaveType, int32_t CharacterID); // Function PersistentData.PersistentData.LoadLastSaveOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3528eb0
	bool LoadGameDataInSlot(struct FString SlotName, int32_t CharacterID); // Function PersistentData.PersistentData.LoadGameDataInSlot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3528d80
	bool LoadCrossGenSaveDataInSlot(struct FString SlotName, struct FString OldSlotName); // Function PersistentData.PersistentData.LoadCrossGenSaveDataInSlot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x33f0ef0
	void LoadCrossGenSaveData(int32_t fromCharacterIndex, int32_t toCharacterIndex, bool SaveFileList); // Function PersistentData.PersistentData.LoadCrossGenSaveData // (Final|Native|Public|BlueprintCallable) // @ game+0x3528c70
	void LoadAllCrossGenSaveData(); // Function PersistentData.PersistentData.LoadAllCrossGenSaveData // (Final|Native|Public|BlueprintCallable) // @ game+0x3528c50
	bool HasEverLaunchedGame(); // Function PersistentData.PersistentData.HasEverLaunchedGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3528c20
	bool HasCreatedPlayableCharacter(); // Function PersistentData.PersistentData.HasCreatedPlayableCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3527630
	bool HasCompletedIntro(); // Function PersistentData.PersistentData.HasCompletedIntro // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3528c20
	bool GetWizardingWorldData(struct FString Attribute, struct FString& OutValue); // Function PersistentData.PersistentData.GetWizardingWorldData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3528ac0
	struct FCharacterSaveGameInfo GetPlayableCharacter(int32_t CharacterID); // Function PersistentData.PersistentData.GetPlayableCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3528a30
	struct FCharacterSaveGameInfo GetLastLoadedPlayableCharacter(); // Function PersistentData.PersistentData.GetLastLoadedPlayableCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x35289f0
	bool GetIsPlayableCharacterUsed(int32_t CharacterID); // Function PersistentData.PersistentData.GetIsPlayableCharacterUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3528960
	struct UPersistentData* GetInstance(); // Function PersistentData.PersistentData.GetInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3528930
	char GetDefaultDifficulty(); // Function PersistentData.PersistentData.GetDefaultDifficulty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dca40
	int32_t GetCurrentPlayerID(); // Function PersistentData.PersistentData.GetCurrentPlayerID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3528900
	struct FCharacterSaveGameInfo GetCurrentPlayableCharacter(); // Function PersistentData.PersistentData.GetCurrentPlayableCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x35288c0
	struct FString GetCrossGenPlayableCharacterName(struct FCharacterSaveGameInfo& CharacterInfo); // Function PersistentData.PersistentData.GetCrossGenPlayableCharacterName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35287b0
	struct TArray<struct FCharacterSaveGameInfo> GetCrossGenCharacterList(); // Function PersistentData.PersistentData.GetCrossGenCharacterList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3528760
	struct TArray<struct FSaveGameInfo> GetAvailableCrossGenSaveData(); // Function PersistentData.PersistentData.GetAvailableCrossGenSaveData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x35285e0
	struct TArray<struct FCharacterSaveGameInfo> GetAllPlayableCharacters(); // Function PersistentData.PersistentData.GetAllPlayableCharacters // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3528590
	void GameUserSave(int32_t CharacterID); // Function PersistentData.PersistentData.GameUserSave // (Final|Exec|Native|Public) // @ game+0x3528500
	void GameTestSaveGameList(int32_t CharacterID); // Function PersistentData.PersistentData.GameTestSaveGameList // (Final|Exec|Native|Public) // @ game+0x3528470
	void GameRemoveSaveSlot(struct FString SlotName, int32_t CharacterID); // Function PersistentData.PersistentData.GameRemoveSaveSlot // (Final|Exec|Native|Public) // @ game+0x3528340
	void GameRemovePlayableCharacter(int32_t CharacterID); // Function PersistentData.PersistentData.GameRemovePlayableCharacter // (Final|Exec|Native|Public) // @ game+0x35282b0
	void GamePurgeAllSaveData(); // Function PersistentData.PersistentData.GamePurgeAllSaveData // (Final|Exec|Native|Public) // @ game+0x3528290
	void GameLogSaveGameList(int32_t CharacterID); // Function PersistentData.PersistentData.GameLogSaveGameList // (Final|Exec|Native|Public) // @ game+0x3528200
	void GameLogSaveDirList(); // Function PersistentData.PersistentData.GameLogSaveDirList // (Final|Exec|Native|Public) // @ game+0x35281e0
	void GameLogPlayableCharacters(); // Function PersistentData.PersistentData.GameLogPlayableCharacters // (Final|Exec|Native|Public) // @ game+0x35281c0
	void GameLoadLastUserSave(int32_t CharacterID); // Function PersistentData.PersistentData.GameLoadLastUserSave // (Final|Exec|Native|Public) // @ game+0x3528130
	void GameLoadLastSave(int32_t CharacterID); // Function PersistentData.PersistentData.GameLoadLastSave // (Final|Exec|Native|Public) // @ game+0x3528130
	void GameLoadLastAutoSave(int32_t CharacterID); // Function PersistentData.PersistentData.GameLoadLastAutoSave // (Final|Exec|Native|Public) // @ game+0x35280a0
	void GameLoad(int32_t CharacterID, struct FString SaveNameOverride); // Function PersistentData.PersistentData.GameLoad // (Final|Exec|Native|Public) // @ game+0x3527f70
	void GameDBSave(struct FString SaveFileNameOverride); // Function PersistentData.PersistentData.GameDBSave // (Final|Exec|Native|Public) // @ game+0x3527e80
	void GameDBLoad(struct FString SaveFileNameOverride); // Function PersistentData.PersistentData.GameDBLoad // (Final|Exec|Native|Public) // @ game+0x3527d90
	void GameCreatePlayableCharacter(struct FString CharacterName, struct FString CharacterHouse); // Function PersistentData.PersistentData.GameCreatePlayableCharacter // (Final|Exec|Native|Public) // @ game+0x3527c10
	void GameAutoSave(int32_t CharacterID); // Function PersistentData.PersistentData.GameAutoSave // (Final|Exec|Native|Public) // @ game+0x3527b80
	void FlushAutoSaveCacheIfNecessary(); // Function PersistentData.PersistentData.FlushAutoSaveCacheIfNecessary // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3527b60
	bool DoesCrossGenSaveDataExist(); // Function PersistentData.PersistentData.DoesCrossGenSaveDataExist // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1039f30
	void CrossGenSaveDataLog(); // Function PersistentData.PersistentData.CrossGenSaveDataLog // (Final|Exec|Native|Public) // @ game+0x1074730
	void CrossGenSaveDataLoad(int32_t fromCharacterIndex, int32_t toCharacterIndex); // Function PersistentData.PersistentData.CrossGenSaveDataLoad // (Final|Exec|Native|Public) // @ game+0x3527a90
	int32_t CreatePlayableCharacter(struct FString CharacterName, struct FString CharacterHouse, struct FString CharacterUID, struct FString CharacterVoice, struct FString CharacterPronoun); // Function PersistentData.PersistentData.CreatePlayableCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3527770
	void CreateHorcruxSlot(); // Function PersistentData.PersistentData.CreateHorcruxSlot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x33264e0
	void CompletedIntro(); // Function PersistentData.PersistentData.CompletedIntro // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3527750
	bool BP_SaveGame(struct FString LocationName); // Function PersistentData.PersistentData.BP_SaveGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3527660
	bool BP_DoesCharacterExistYet(); // Function PersistentData.PersistentData.BP_DoesCharacterExistYet // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3527630
	bool BP_CreateCharacter(struct FString CharacterName, struct FString CharacterHouse); // Function PersistentData.PersistentData.BP_CreateCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x35274c0
	bool AsyncRemovePlayableCharacter(int32_t CharacterID); // Function PersistentData.PersistentData.AsyncRemovePlayableCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3527430
};

// Class PersistentData.PersistentGameData
// Size: 0x4a8 (Inherited: 0x28)
struct UPersistentGameData : USaveGame {
	int32_t Version; // 0x28(0x04)
	int32_t ChangeList; // 0x2c(0x04)
	int64_t SessionTime; // 0x30(0x08)
	int64_t ExclusiveSessionTime; // 0x38(0x08)
	bool bExclusiveMissionActive; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t ExclusiveVersion; // 0x44(0x04)
	int32_t ExclusiveChangeList; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<char> RawDatabaseImage; // 0x50(0x10)
	struct TArray<char> RawExclusiveImage; // 0x60(0x10)
	struct TArray<char> RawMiniMapImage; // 0x70(0x10)
	struct FCharacterSaveGameInfo CharacterSaveGameInfo; // 0x80(0x350)
	bool bCompletedIntro; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct TMap<struct FString, struct FString> wizardingWorldData; // 0x3d8(0x50)
	struct TArray<struct FString> Entitlements; // 0x428(0x10)
	struct TArray<struct FString> AnalyticsEvents; // 0x438(0x10)
	bool bSkippedLanguageCheck; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct FSaveDirectoryEntry DirectoryEntry; // 0x450(0x58)
};

// Class PersistentData.PersistentGameDataList
// Size: 0x798 (Inherited: 0x28)
struct UPersistentGameDataList : USaveGame {
	int32_t VersionMajor; // 0x28(0x04)
	int32_t VersionMinor; // 0x2c(0x04)
	struct FPersistentGameDataListInfo Info; // 0x30(0x768)
};

// Class PersistentData.PersistentOffline
// Size: 0x38 (Inherited: 0x28)
struct UPersistentOffline : USaveGame {
	struct FString EpicAccountID; // 0x28(0x10)
};

