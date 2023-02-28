// Class DbGateway.DbDynamicTableConnector_Interface
// Size: 0x28 (Inherited: 0x28)
struct UDbDynamicTableConnector_Interface : UInterface {
};

// Class DbGateway.DbGateway
// Size: 0x148 (Inherited: 0x28)
struct UDbGateway : UObject {
	char pad_28[0x120]; // 0x28(0x120)

	bool DbWriteMiscSaveDataItem(struct FString InOwner, struct FString InName, struct FString InValue, bool InBackupNow); // Function DbGateway.DbGateway.DbWriteMiscSaveDataItem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5be6d40
	bool DbRemoveMiscSaveDataItem(struct FString InOwner, struct FString InName, struct FString InCallerName); // Function DbGateway.DbGateway.DbRemoveMiscSaveDataItem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5be6bf0
	bool DbRemoveAllMiscSaveDataItems(struct FString InOwner, struct FString InCallerName); // Function DbGateway.DbGateway.DbRemoveAllMiscSaveDataItems // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5be6b00
	bool DbReloadDynDB(); // Function DbGateway.DbGateway.DbReloadDynDB // (Final|Native|Static|Private) // @ game+0x5be6ad0
	bool DbReadMiscSaveDataItem(struct FString InOwner, struct FString InName, struct FString& OutValue); // Function DbGateway.DbGateway.DbReadMiscSaveDataItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5be6970
	bool DbReadMiscSaveDataForOwner(struct FString InOwner, struct FSQLiteQueryResult& OutQueryResults); // Function DbGateway.DbGateway.DbReadMiscSaveDataForOwner // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5be67e0
	bool DbQuerySingleColumnStrings(struct FString InQuery, struct TArray<struct FString>& OutQueryResults); // Function DbGateway.DbGateway.DbQuerySingleColumnStrings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5be66b0
	bool DbQueryMap(struct FString InQuery, struct FSQLiteQueryResultMap& OutQueryResults, bool inIgnoreDUPs); // Function DbGateway.DbGateway.DbQueryMap // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5be6500
	bool DbQuery(struct FString InQuery, struct FSQLiteQueryResult& OutQueryResults); // Function DbGateway.DbGateway.DbQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5be6370
	bool DbPutDynDBImage(struct TArray<char>& RawDbImage); // Function DbGateway.DbGateway.DbPutDynDBImage // (Final|Native|Static|Public|HasOutParms) // @ game+0x5be62c0
	bool DbOperate(struct FString InTransaction, bool InBackupNow); // Function DbGateway.DbGateway.DbOperate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5be61e0
	bool DbGetDynDBImage(struct TArray<char>& RawDbImage); // Function DbGateway.DbGateway.DbGetDynDBImage // (Final|Native|Static|Public|HasOutParms) // @ game+0x5be6130
	bool DbEditorQueryMap(struct FString InQuery, struct FSQLiteQueryResultMap& OutQueryResults, bool inIgnoreDUPs); // Function DbGateway.DbGateway.DbEditorQueryMap // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x5be5f80
	bool DbEditorQuery(struct FString InQuery, struct FSQLiteQueryResult& OutQueryResults); // Function DbGateway.DbGateway.DbEditorQuery // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x5be5df0
	bool DbEditorOperate(struct FString InTransaction, int32_t& outNumRowsChanged, struct FString inTableName); // Function DbGateway.DbGateway.DbEditorOperate // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x5be5ca0
};

