// ScriptStruct EditorCustomizationHelper.CreatorValidationData
// Size: 0x18 (Inherited: 0x00)
struct FCreatorValidationData {
	bool bCreatorReady; // 0x00(0x01)
	bool bHasUniqueCreatorName; // 0x01(0x01)
	bool bHasScheduleFilter; // 0x02(0x01)
	bool bHasDesiredLocations; // 0x03(0x01)
	bool bHasValidLocationIDs; // 0x04(0x01)
	bool bHasLocationData; // 0x05(0x01)
	bool bHasScheduleData; // 0x06(0x01)
	bool bHasEncounterData; // 0x07(0x01)
	struct TArray<struct FDesiredLocationValidationData> DesiredLocations; // 0x08(0x10)
};

// ScriptStruct EditorCustomizationHelper.DesiredLocationValidationData
// Size: 0x18 (Inherited: 0x00)
struct FDesiredLocationValidationData {
	struct FString DesiredLocation; // 0x00(0x10)
	bool bLocationAvailable; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct EditorCustomizationHelper.CustomButtonWidget
// Size: 0x30 (Inherited: 0x00)
struct FCustomButtonWidget {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct EditorCustomizationHelper.DbDoubleColumnInfo
// Size: 0xd8 (Inherited: 0x00)
struct FDbDoubleColumnInfo {
	struct FString SelectedDataColumn1; // 0x00(0x10)
	struct FString SelectedDataColumn2; // 0x10(0x10)
	struct TArray<struct FString> Column1DataList; // 0x20(0x10)
	struct TArray<struct FString> Column2DataList; // 0x30(0x10)
	char pad_40[0x98]; // 0x40(0x98)
};

// ScriptStruct EditorCustomizationHelper.DbEditorButtonWidget
// Size: 0x80 (Inherited: 0x00)
struct FDbEditorButtonWidget {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct EditorCustomizationHelper.DbEditorColumnDefault
// Size: 0x20 (Inherited: 0x00)
struct FDbEditorColumnDefault {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct EditorCustomizationHelper.DbSingleColumnInfo
// Size: 0x88 (Inherited: 0x00)
struct FDbSingleColumnInfo {
	struct FString SelectedData; // 0x00(0x10)
	struct TArray<struct FString> ColumnDataList; // 0x10(0x10)
	struct FString WidgetItemName; // 0x20(0x10)
	char pad_30[0x58]; // 0x30(0x58)
};

// ScriptStruct EditorCustomizationHelper.KnowledgeInfo
// Size: 0x30 (Inherited: 0x00)
struct FKnowledgeInfo {
	struct FString ObjectGroup; // 0x00(0x10)
	struct TArray<struct FString> AllowedObjectGroupList; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct EditorCustomizationHelper.LootDropInfo
// Size: 0x30 (Inherited: 0x00)
struct FLootDropInfo {
	struct FString ObjectGroup; // 0x00(0x10)
	struct TArray<struct FString> AllowedObjectGroupList; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct EditorCustomizationHelper.NavAgent
// Size: 0x08 (Inherited: 0x00)
struct FNavAgent {
	struct FName AgentName; // 0x00(0x08)
};

// ScriptStruct EditorCustomizationHelper.SelectableSubobjectName
// Size: 0x08 (Inherited: 0x00)
struct FSelectableSubobjectName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct EditorCustomizationHelper.SpawnSelectInfo
// Size: 0x80 (Inherited: 0x00)
struct FSpawnSelectInfo {
	struct FString ObjectType; // 0x00(0x10)
	struct FString ObjectToSpawn; // 0x10(0x10)
	struct TArray<struct FString> AllowedObjectTypeList; // 0x20(0x10)
	struct TArray<struct FString> FilteredObjectList; // 0x30(0x10)
	char pad_40[0x24]; // 0x40(0x24)
	int32_t MyIndex; // 0x64(0x04)
	bool bIsIndexed; // 0x68(0x01)
	bool bIsRedirected; // 0x69(0x01)
	bool bIsExpanded; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
	struct FString GroupName; // 0x70(0x10)
};

