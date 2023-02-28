// Class CISQLite3.SQLiteBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USQLiteBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	struct FSQLiteTableField SQLiteTEXT(struct FString FieldName, bool PK, bool Unique); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.SQLiteTEXT // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xe9bc20
	struct FSQLiteTableField SQLiteREAL(struct FString FieldName, bool PK, bool Unique); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.SQLiteREAL // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xe9ba60
	struct FSQLitePrimaryKey SQLitePrimaryKey(struct TArray<struct FSQLiteTableField> Fields); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.SQLitePrimaryKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xe9b7a0
	struct FSQLiteTableField SQLiteNUMERIC(struct FString FieldName, bool PK, bool Unique); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.SQLiteNUMERIC // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xe9b5e0
	struct FSQLiteTableField SQLiteINTEGER(struct FString FieldName, bool PK, bool AI, bool Unique); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.SQLiteINTEGER // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xe9b000
	struct FSQLiteIndex SQLiteIndexFunction(struct TArray<struct FSQLiteTableField> Fields, struct FString idxName, bool Unique); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.SQLiteIndexFunction // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xe9b210
	struct FSQLiteQueryLogicExpectedNode QueryTerm(struct FSQLiteQueryTermExpectedNode& LogicOperation, struct FString Field, struct FString Operator, struct FString Value); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.QueryTerm // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xe9abd0
	struct FSQLiteQueryTermExpectedNode QueryStart(struct FSQLiteQueryTermExpectedNode LogicOperationOrNone); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.QueryStart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xe9aaa0
	struct FSQLiteQueryTermExpectedNode QueryLogicOr(struct FSQLiteQueryLogicExpectedNode& LHS); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.QueryLogicOr // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xe9a9b0
	struct FSQLiteQueryTermExpectedNode QueryLogicAnd(struct FSQLiteQueryLogicExpectedNode& LHS); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.QueryLogicAnd // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xe9a8c0
	struct FSQLiteQueryFinalizedQuery QueryFinal(struct FSQLiteQueryLogicExpectedNode& QueryEndNode); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.QueryFinal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xe9a7d0
	struct FSQLiteQueryLogicExpectedNode QueryEnd(struct FSQLiteQueryLogicExpectedNode& LastQueryTerm); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.QueryEnd // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xe9a6e0
	int32_t CastToInt(struct FString SQLiteResultValue); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.CastToInt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe99300
	float CastToFloat(struct FString SQLiteResultValue); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.CastToFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe99210
	bool CastToBoolean(struct FString SQLiteResultValue); // Function CISQLite3.SQLiteBlueprintFunctionLibrary.CastToBoolean // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe99120
};

// Class CISQLite3.SQLiteDatabase
// Size: 0x28 (Inherited: 0x28)
struct USQLiteDatabase : UObject {

	bool Vacuum(struct FString DatabaseName); // Function CISQLite3.SQLiteDatabase.Vacuum // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe9bed0
	bool TruncateTable(struct FString DatabaseName, struct FString TableName); // Function CISQLite3.SQLiteDatabase.TruncateTable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe9bde0
	bool RegisterDatabase(struct FString Name, struct FString Filename, bool RelativeToGameContentDirectory, bool InMemoryDatabase); // Function CISQLite3.SQLiteDatabase.RegisterDatabase // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe9ae80
	bool IsTableExists(struct FString DatabaseName, struct FString TableName); // Function CISQLite3.SQLiteDatabase.IsTableExists // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe9a5f0
	bool IsDatabaseRegistered(struct FString DatabaseName); // Function CISQLite3.SQLiteDatabase.IsDatabaseRegistered // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe9a550
	void InsertRowsIntoTable(struct FString DatabaseName, struct FString TableName, struct TArray<struct FSQLiteTableRowSimulator>& rowsOfFields); // Function CISQLite3.SQLiteDatabase.InsertRowsIntoTable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xe9a3e0
	bool GetDataIntoObjectBP(struct FSQLiteDatabaseReference& DataSource, struct TArray<struct FString>& Fields, struct FSQLiteQueryFinalizedQuery& Query, struct UObject* ObjectToPopulate); // Function CISQLite3.SQLiteDatabase.GetDataIntoObjectBP // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xe9a1d0
	bool GetDataIntoObject(struct FString DatabaseName, struct FString Query, struct UObject* ObjectToPopulate); // Function CISQLite3.SQLiteDatabase.GetDataIntoObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe9a090
	struct FSQLiteQueryResult GetDataBP(struct FSQLiteDatabaseReference& DataSource, struct TArray<struct FString>& Fields, struct FSQLiteQueryFinalizedQuery& Query, int32_t MaxResults, int32_t ResultOffset); // Function CISQLite3.SQLiteDatabase.GetDataBP // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xe99de0
	struct FSQLiteQueryResult GetData(struct FString DatabaseName, struct FString Query); // Function CISQLite3.SQLiteDatabase.GetData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe99c90
	bool ExecSql(struct FString DatabaseName, struct FString Query); // Function CISQLite3.SQLiteDatabase.ExecSql // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe99ba0
	bool DropTable(struct FString DatabaseName, struct FString TableName); // Function CISQLite3.SQLiteDatabase.DropTable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe99ab0
	bool DropIndex(struct FString DatabaseName, struct FString IndexName); // Function CISQLite3.SQLiteDatabase.DropIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe999c0
	struct FSQLiteTable CreateTable(struct FString DatabaseName, struct FString TableName, struct TArray<struct FSQLiteTableField>& Fields, struct FSQLitePrimaryKey& PK); // Function CISQLite3.SQLiteDatabase.CreateTable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xe99760
	bool CreateIndexes(struct FString DatabaseName, struct FString TableName, struct TArray<struct FSQLiteIndex>& Indexes); // Function CISQLite3.SQLiteDatabase.CreateIndexes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xe995d0
	bool CreateIndex(struct FString DatabaseName, struct FString TableName, struct FSQLiteIndex Index); // Function CISQLite3.SQLiteDatabase.CreateIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe993f0
};

