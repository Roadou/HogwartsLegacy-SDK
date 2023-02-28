// ScriptStruct CISQLite3.SQLiteQueryFinalizedQuery
// Size: 0x10 (Inherited: 0x00)
struct FSQLiteQueryFinalizedQuery {
	struct FString Query; // 0x00(0x10)
};

// ScriptStruct CISQLite3.SQLiteQueryTermExpectedNode
// Size: 0x10 (Inherited: 0x00)
struct FSQLiteQueryTermExpectedNode {
	struct FString Query; // 0x00(0x10)
};

// ScriptStruct CISQLite3.SQLiteQueryLogicExpectedNode
// Size: 0x10 (Inherited: 0x00)
struct FSQLiteQueryLogicExpectedNode {
	struct FString Query; // 0x00(0x10)
};

// ScriptStruct CISQLite3.SQLiteQueryResultMap
// Size: 0x28 (Inherited: 0x00)
struct FSQLiteQueryResultMap {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct CISQLite3.SQLiteQueryResult
// Size: 0x28 (Inherited: 0x00)
struct FSQLiteQueryResult {
	struct TArray<struct FSQLiteQueryResultRow> ResultRows; // 0x00(0x10)
	bool Success; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString ErrorMessage; // 0x18(0x10)
};

// ScriptStruct CISQLite3.SQLiteQueryResultRow
// Size: 0x10 (Inherited: 0x00)
struct FSQLiteQueryResultRow {
	struct TArray<struct FSQLiteKeyValuePair> Fields; // 0x00(0x10)
};

// ScriptStruct CISQLite3.SQLiteKeyValuePair
// Size: 0x20 (Inherited: 0x00)
struct FSQLiteKeyValuePair {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct CISQLite3.SQLiteDatabaseReference
// Size: 0x20 (Inherited: 0x00)
struct FSQLiteDatabaseReference {
	struct FString DatabaseName; // 0x00(0x10)
	struct TArray<struct FString> Tables; // 0x10(0x10)
};

// ScriptStruct CISQLite3.SQLiteTable
// Size: 0x48 (Inherited: 0x00)
struct FSQLiteTable {
	struct FString DatabaseName; // 0x00(0x10)
	struct FString TableName; // 0x10(0x10)
	struct TArray<struct FSQLiteTableField> Fields; // 0x20(0x10)
	struct FSQLitePrimaryKey PK; // 0x30(0x10)
	bool Created; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct CISQLite3.SQLitePrimaryKey
// Size: 0x10 (Inherited: 0x00)
struct FSQLitePrimaryKey {
	struct FString ResultStr; // 0x00(0x10)
};

// ScriptStruct CISQLite3.SQLiteTableField
// Size: 0x40 (Inherited: 0x00)
struct FSQLiteTableField {
	struct FString ResultStr; // 0x00(0x10)
	struct FString FieldName; // 0x10(0x10)
	struct FString FieldType; // 0x20(0x10)
	struct FString FieldValue; // 0x30(0x10)
};

// ScriptStruct CISQLite3.SQLiteTableRowSimulator
// Size: 0x10 (Inherited: 0x00)
struct FSQLiteTableRowSimulator {
	struct TArray<struct FSQLiteTableField> rowsOfFields; // 0x00(0x10)
};

// ScriptStruct CISQLite3.SQLiteIndex
// Size: 0x20 (Inherited: 0x00)
struct FSQLiteIndex {
	struct FString ResultStr; // 0x00(0x10)
	struct FString IndexName; // 0x10(0x10)
};

