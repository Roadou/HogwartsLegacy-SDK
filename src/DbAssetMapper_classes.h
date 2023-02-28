// Class DbAssetMapper.DbAssetMapper
// Size: 0x78 (Inherited: 0x28)
struct UDbAssetMapper : UObject {
	char pad_28[0x50]; // 0x28(0x50)

	struct AActor* SpawnAssetFromDbIdForAutomation(struct UObject* WorldContextObject, struct FTransform& InTransform, struct FString InItemName, int32_t inParentUID, int32_t inOverrideUID, bool bSpawnOnlyShell); // Function DbAssetMapper.DbAssetMapper.SpawnAssetFromDbIdForAutomation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5df2780
	bool SpawnAssetFromDbIdAsync(struct UObject* WorldContextObject, struct FTransform& InTransform, struct FString InItemName, bool bSpawnOnlyShell, struct FDelegate& FinishDelegate); // Function DbAssetMapper.DbAssetMapper.SpawnAssetFromDbIdAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5df2560
	struct AActor* SpawnAssetFromDbId(struct UObject* WorldContextObject, struct FTransform& InTransform, struct FString InItemName, bool bSpawnOnlyShell); // Function DbAssetMapper.DbAssetMapper.SpawnAssetFromDbId // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5df23a0
	bool SetTableColumnInfo(struct FDbSingleColumnInfo& inDbColInfo, struct FDbSingleColumnInfo& outDbColInfo, struct FString inTableName, struct FString inColumnName, bool inEmpty, bool inAddNone); // Function DbAssetMapper.DbAssetMapper.SetTableColumnInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5df2130
	bool IsValidRegistryID(struct FString inRegistryName); // Function DbAssetMapper.DbAssetMapper.IsValidRegistryID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5df2040
	struct FName GetSubtypeID(struct FName& RegistryId); // Function DbAssetMapper.DbAssetMapper.GetSubtypeID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5df1fa0
	struct FName GetSkeletonTypeID(struct FName& RegistryId); // Function DbAssetMapper.DbAssetMapper.GetSkeletonTypeID // (Final|Native|Static|Public|HasOutParms) // @ game+0x5df1f00
	struct FString GetRegistryTypeID(struct FName& inTypeName); // Function DbAssetMapper.DbAssetMapper.GetRegistryTypeID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5df1e30
	struct FName GetRegistryTypeDef(struct FName& RegistryId); // Function DbAssetMapper.DbAssetMapper.GetRegistryTypeDef // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5df1d90
	struct TSoftObjectPtr<UObject> GetItemSpawnAssetFromDbId(struct FString InItemName); // Function DbAssetMapper.DbAssetMapper.GetItemSpawnAssetFromDbId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5df1c70
	struct FName GetEmoteVoiceID(struct FName& RegistryId); // Function DbAssetMapper.DbAssetMapper.GetEmoteVoiceID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5df1bd0
	struct UDbAssetMapper* GetDbAssetMapper(); // Function DbAssetMapper.DbAssetMapper.GetDbAssetMapper // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5df1b80
	struct TArray<struct FString> GetAllRegistryTypeIDs(); // Function DbAssetMapper.DbAssetMapper.GetAllRegistryTypeIDs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5df1b00
	struct TArray<struct FString> GetAllRegistrySubtypeIDs(struct FString RegistryTypeID); // Function DbAssetMapper.DbAssetMapper.GetAllRegistrySubtypeIDs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5df19d0
	struct TArray<struct FString> GetAllRegistryIDsOfType(struct FString SubtypeID); // Function DbAssetMapper.DbAssetMapper.GetAllRegistryIDsOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5df18a0
	struct FName GetAdditionalVoiceID(struct FName& RegistryId); // Function DbAssetMapper.DbAssetMapper.GetAdditionalVoiceID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5df1800
};

// Class DbAssetMapper.DbAssetMapperSpawn_Interface
// Size: 0x28 (Inherited: 0x28)
struct UDbAssetMapperSpawn_Interface : UInterface {

	bool UnregisterSpawnWhenDestroyed(struct AActor* InAssetPtr); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.UnregisterSpawnWhenDestroyed // (Native|Public) // @ game+0x5df6370
	struct AActor* SpawnShell(struct UWorld* InWorld, struct FTransform& InTransform, struct FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, enum class ESpawnActorCollisionHandlingMethod InCollisionMethod, struct ULevel* InOverrideLevel); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.SpawnShell // (Native|Public|HasOutParms|HasDefaults) // @ game+0x5df60a0
	struct AActor* SpawnSEAsset(struct UWorld* InWorld, struct FTransform& InTransform, struct FString InRegistryID, struct FString inOverrideScheduleName, struct FString inOverrideScheduleTable, struct FString inOverrideWorldID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, enum class ESpawnActorCollisionHandlingMethod InCollisionMethod, struct ULevel* InOverrideLevel); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.SpawnSEAsset // (Native|Public|HasOutParms|HasDefaults) // @ game+0x5df5cd0
	struct AActor* SpawnAsync(struct UWorld* InWorld, struct FTransform& InTransform, struct FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, enum class ESpawnActorCollisionHandlingMethod InCollisionMethod, struct ULevel* InOverrideLevel); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.SpawnAsync // (Native|Public|HasOutParms|HasDefaults) // @ game+0x5df5a00
	struct AActor* Spawn(struct UWorld* InWorld, struct FTransform& InTransform, struct FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, enum class ESpawnActorCollisionHandlingMethod InCollisionMethod, struct ULevel* InOverrideLevel, struct UObject* InParentContainer); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.Spawn // (Native|Public|HasOutParms|HasDefaults) // @ game+0x5df56f0
	void SaveData(struct FString InItemID, struct AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.SaveData // (Native|Public) // @ game+0x5df5590
	void RestoreData(struct FString InItemID, struct AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.RestoreData // (Native|Public) // @ game+0x5df5430
	bool RegisterNewSpawn(struct AActor* InAssetPtr); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.RegisterNewSpawn // (Native|Public) // @ game+0x5df5390
	struct FString RedirectObjectToInstance(struct FString InRegistryID); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.RedirectObjectToInstance // (Native|Public) // @ game+0x5df5250
	struct FName RedirectObjectClass(struct FName InRegistryID, struct FString inTableName); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.RedirectObjectClass // (Native|Public) // @ game+0x5df5110
	bool RedirectNamedObject(struct FName InRegistryID, struct FString inTableName, struct FString& outClassID, struct FString& outLootID); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.RedirectNamedObject // (Native|Public|HasOutParms) // @ game+0x5df4f10
	struct FName RedirectInstanceToObject(struct FName InRegistryID); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.RedirectInstanceToObject // (Native|Public) // @ game+0x5df4e70
	bool IsObjectInDefinitionTable(struct FName InRegistryID); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.IsObjectInDefinitionTable // (Native|Public) // @ game+0x5df4dd0
	uint32_t GetUniqueObjectID(struct FString InItemID); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetUniqueObjectID // (Native|Public) // @ game+0x5df4d20
	struct FName GetTableName(); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetTableName // (Native|Public) // @ game+0x5df4ce0
	bool GetSpawnRestrictionsByCategory(struct FString InItemID, struct FString inCategory, struct FSQLiteQueryResultMap& OutQueryResultMap); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetSpawnRestrictionsByCategory // (Native|Public|HasOutParms) // @ game+0x5df4b00
	bool GetSpawnRestrictions(struct FString InItemID, struct FSQLiteQueryResultMap& OutQueryResultMap); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetSpawnRestrictions // (Native|Public|HasOutParms) // @ game+0x5df4970
	bool GetSpawnPath(struct FString InItemID, struct FSoftObjectPath& OutPath); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetSpawnPath // (Native|Public|HasOutParms|HasDefaults) // @ game+0x5df4850
	bool GetSpawnAsset(struct FString InItemID, struct AActor*& OutAsset); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetSpawnAsset // (Native|Public|HasOutParms) // @ game+0x5df4750
	bool GetShellSpawnPath(struct FString InItemID, struct FSoftObjectPath& OutPath); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetShellSpawnPath // (Native|Public|HasOutParms|HasDefaults) // @ game+0x5df4630
	int32_t GetPlayerExperienceLevel(); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetPlayerExperienceLevel // (Native|Public) // @ game+0x5df4600
	bool GetObjectInstanceData(struct FName InRegistryID, struct TArray<struct FNPC_DbObjectInstanceData>& outInstanceData); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetObjectInstanceData // (Native|Public|HasOutParms) // @ game+0x5df4500
	float GetHealth(struct FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetHealth // (Native|Public) // @ game+0x5df43d0
	struct FName GetDynamicTableName(); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetDynamicTableName // (Native|Public) // @ game+0x5df4390
	struct FName GetDynamicPersistenceTableName(); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetDynamicPersistenceTableName // (Native|Public) // @ game+0x5df4350
	bool GetDefinitionIdentifyingColumnName(struct FName& OutFirstColumnName); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetDefinitionIdentifyingColumnName // (Native|Protected|HasOutParms) // @ game+0x5df42a0
	struct FName GetCharacterDerivedClass(struct FName InRegistryID); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetCharacterDerivedClass // (Native|Public) // @ game+0x5df4200
	bool GetActorDefinitionData(struct FString InRegistryID, struct FName& outGenderID, struct FName& OutVoiceID, struct FName& outEmoteID); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.GetActorDefinitionData // (Native|Public|HasOutParms) // @ game+0x5df4020
	bool CreateItemAsScheduledEntity(struct FString InItemID); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.CreateItemAsScheduledEntity // (Native|Public) // @ game+0x5df3f70
	enum class ESpawnRestrictionResponse CheckSpawnRestrictions(struct FRestrictionInfo& ioRestrictionInfo); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.CheckSpawnRestrictions // (Native|Public|HasOutParms) // @ game+0x5df3df0
	enum class ESpawnAllowedResponse AllowSpawn(struct FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent); // Function DbAssetMapper.DbAssetMapperSpawn_Interface.AllowSpawn // (Native|Public) // @ game+0x5df3c80
};

