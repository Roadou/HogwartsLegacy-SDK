// Enum ConsoleMacros.EConsoleMacrosAutomationPhase
enum class EConsoleMacrosAutomationPhase : uint8 {
	OnBeginPlay = 0,
	OnEndPlay = 1,
	OnBeginPlayInEditor = 2,
	OnEndPlayInEditor = 3,
	OnEditorLevelOpen = 4,
	OnEditorLevelClose = 5,
	EConsoleMacrosAutomationPhase_MAX = 6
};

// Enum ConsoleMacros.EConsoleMacrosAutomationLevelType
enum class EConsoleMacrosAutomationLevelType : uint8 {
	ExactMatch = 0,
	PartialMatch = 1,
	EConsoleMacrosAutomationLevelType_MAX = 2
};

// Enum ConsoleMacros.EConsoleMacroCommandMode
enum class EConsoleMacroCommandMode : uint8 {
	Execute = 0,
	Restore = 1,
	Query = 2,
	EConsoleMacroCommandMode_MAX = 3
};

// Enum ConsoleMacros.EConsoleMacroCommandScope
enum class EConsoleMacroCommandScope : uint8 {
	CookedAndEditor = 0,
	CookedOnly = 1,
	EditorOnly = 2,
	EConsoleMacroCommandScope_MAX = 3
};

// Enum ConsoleMacros.EUserConsoleVariableSpecialUsage
enum class EUserConsoleVariableSpecialUsage : uint8 {
	BlendDomain = 0,
	EnvironmentalGlobalsMPC = 1,
	EnvironmentalGlobalsNPC = 2,
	EUserConsoleVariableSpecialUsage_MAX = 3
};

// Enum ConsoleMacros.EUserConsoleVariableBuilds
enum class EUserConsoleVariableBuilds : uint8 {
	Editor = 0,
	Debug = 1,
	Development = 2,
	Test = 3,
	Shipping = 4,
	EUserConsoleVariableBuilds_MAX = 5
};

// ScriptStruct ConsoleMacros.ConsoleVariableLienEntry
// Size: 0x38 (Inherited: 0x00)
struct FConsoleVariableLienEntry {
	struct FString Variable; // 0x00(0x10)
	struct FConsoleVariableFlexValue Value; // 0x10(0x20)
	float Priority; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ConsoleMacros.ConsoleVariableFlexValue
// Size: 0x20 (Inherited: 0x00)
struct FConsoleVariableFlexValue {
	int32_t Integer; // 0x00(0x04)
	float float; // 0x04(0x04)
	struct FString String; // 0x08(0x10)
	char bValidInteger : 1; // 0x18(0x01)
	char bValidFloat : 1; // 0x18(0x01)
	char bValidString : 1; // 0x18(0x01)
	char pad_18_3 : 5; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ConsoleMacros.ConsoleMacrosBlockAutomationLevel
// Size: 0x30 (Inherited: 0x00)
struct FConsoleMacrosBlockAutomationLevel {
	struct FConsoleMacrosAutomationLevelSelect Level; // 0x00(0x28)
	int32_t BlockPhases; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ConsoleMacros.ConsoleMacrosAutomationLevelSelect
// Size: 0x28 (Inherited: 0x00)
struct FConsoleMacrosAutomationLevelSelect {
	enum class EConsoleMacrosAutomationLevelType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FConsoleMacroLevelName LevelName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString PartialLevelName; // 0x10(0x10)
	bool bUseLevelName; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ConsoleMacros.ConsoleMacroLevelName
// Size: 0x08 (Inherited: 0x00)
struct FConsoleMacroLevelName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct ConsoleMacros.ConsoleMacrosAutomationLevel
// Size: 0x50 (Inherited: 0x00)
struct FConsoleMacrosAutomationLevel {
	struct FConsoleMacrosAutomationLevelSelect Level; // 0x00(0x28)
	struct FConsoleMacrosAutomation Automation; // 0x28(0x20)
	int32_t BlockEveryLevelAutomations; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ConsoleMacros.ConsoleMacrosAutomation
// Size: 0x20 (Inherited: 0x00)
struct FConsoleMacrosAutomation {
	struct TArray<struct FConsoleMacroAnyNameWithRestore> OnBeginPlay; // 0x00(0x10)
	struct TArray<struct FConsoleMacroAnyNameWithRestore> OnEndPlay; // 0x10(0x10)
};

// ScriptStruct ConsoleMacros.ConsoleMacroNameBase
// Size: 0x10 (Inherited: 0x00)
struct FConsoleMacroNameBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct ConsoleMacros.ConsoleMacroAnyNameWithRestore
// Size: 0x10 (Inherited: 0x10)
struct FConsoleMacroAnyNameWithRestore : FConsoleMacroNameBase {
};

// ScriptStruct ConsoleMacros.ConsoleMacros
// Size: 0xf0 (Inherited: 0x00)
struct FConsoleMacros {
	struct TMap<struct FName, struct FConsoleMacroGroup> Groups; // 0x00(0x50)
	struct TMap<struct FName, struct FConsoleMacroShortcut> GeneralCommands; // 0x50(0x50)
	struct TMap<struct FName, struct FConsoleMacro> GeneralMacros; // 0xa0(0x50)
};

// ScriptStruct ConsoleMacros.ConsoleMacroCommandBase
// Size: 0x10 (Inherited: 0x00)
struct FConsoleMacroCommandBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct UConsoleMacroConsoleDelegate* ConsoleDelegate; // 0x08(0x08)
};

// ScriptStruct ConsoleMacros.ConsoleMacro
// Size: 0x20 (Inherited: 0x10)
struct FConsoleMacro : FConsoleMacroCommandBase {
	struct TArray<struct FName> Commands; // 0x10(0x10)
};

// ScriptStruct ConsoleMacros.ConsoleMacroShortcut
// Size: 0x38 (Inherited: 0x10)
struct FConsoleMacroShortcut : FConsoleMacroCommandBase {
	struct FName BaseName; // 0x10(0x08)
	struct FName Command; // 0x18(0x08)
	struct FName Value; // 0x20(0x08)
	struct FName RestoreValue; // 0x28(0x08)
	char bNoQuery : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ConsoleMacros.ConsoleMacroGroup
// Size: 0x20 (Inherited: 0x10)
struct FConsoleMacroGroup : FConsoleMacroCommandBase {
	struct TArray<struct FConsoleMacroShortcut> Commands; // 0x10(0x10)
};

// ScriptStruct ConsoleMacros.ConsoleMacroGroupEntry
// Size: 0x18 (Inherited: 0x00)
struct FConsoleMacroGroupEntry {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FConsoleMacroShortcutEntry> Commands; // 0x08(0x10)
};

// ScriptStruct ConsoleMacros.ConsoleMacroShortcutEntryNameBase
// Size: 0x30 (Inherited: 0x00)
struct FConsoleMacroShortcutEntryNameBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Command; // 0x08(0x08)
	struct FName Value; // 0x10(0x08)
	struct FName RestoreValue; // 0x18(0x08)
	struct FName AutoRestoreValue; // 0x20(0x08)
	enum class EConsoleMacroCommandScope Scope; // 0x28(0x01)
	char bNoQuery : 1; // 0x29(0x01)
	char bAutoRestoreValue : 1; // 0x29(0x01)
	char pad_29_2 : 6; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct ConsoleMacros.ConsoleMacroShortcutEntry
// Size: 0x40 (Inherited: 0x30)
struct FConsoleMacroShortcutEntry : FConsoleMacroShortcutEntryNameBase {
	struct FName Name; // 0x30(0x08)
	bool bUseName; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ConsoleMacros.ConsoleMacroEntry
// Size: 0x20 (Inherited: 0x00)
struct FConsoleMacroEntry {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FConsoleMacroAnyName> Commands; // 0x08(0x10)
	enum class EConsoleMacroCommandScope Scope; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ConsoleMacros.ConsoleMacroAnyName
// Size: 0x10 (Inherited: 0x10)
struct FConsoleMacroAnyName : FConsoleMacroNameBase {
};

// ScriptStruct ConsoleMacros.ConsoleMacroShortcutEntryNameRequired
// Size: 0x38 (Inherited: 0x30)
struct FConsoleMacroShortcutEntryNameRequired : FConsoleMacroShortcutEntryNameBase {
	struct FName Name; // 0x30(0x08)
};

// ScriptStruct ConsoleMacros.ConsoleMacroName
// Size: 0x10 (Inherited: 0x10)
struct FConsoleMacroName : FConsoleMacroNameBase {
};

// ScriptStruct ConsoleMacros.ConsoleMacroShortcutName
// Size: 0x10 (Inherited: 0x10)
struct FConsoleMacroShortcutName : FConsoleMacroNameBase {
};

// ScriptStruct ConsoleMacros.ConsoleVariableStringValue
// Size: 0x18 (Inherited: 0x00)
struct FConsoleVariableStringValue {
	struct FString String; // 0x00(0x10)
	bool bValid; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ConsoleMacros.ConsoleVariableFloatValue
// Size: 0x08 (Inherited: 0x00)
struct FConsoleVariableFloatValue {
	float float; // 0x00(0x04)
	bool bValid; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ConsoleMacros.ConsoleVariableIntegerValue
// Size: 0x08 (Inherited: 0x00)
struct FConsoleVariableIntegerValue {
	int32_t Integer; // 0x00(0x04)
	bool bValid; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ConsoleMacros.ConsoleVariableBoolValue
// Size: 0x02 (Inherited: 0x00)
struct FConsoleVariableBoolValue {
	bool bBool; // 0x00(0x01)
	bool bValid; // 0x01(0x01)
};

// ScriptStruct ConsoleMacros.UserConsoleVariable
// Size: 0x30 (Inherited: 0x00)
struct FUserConsoleVariable {
	struct FString Variable; // 0x00(0x10)
	struct FString Help; // 0x10(0x10)
	int32_t Builds; // 0x20(0x04)
	int32_t SpecialUsage; // 0x24(0x04)
	struct FName SpecialUsageName; // 0x28(0x08)
};

// ScriptStruct ConsoleMacros.UserConsoleVariableInt
// Size: 0x38 (Inherited: 0x30)
struct FUserConsoleVariableInt : FUserConsoleVariable {
	int32_t DefaultValue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ConsoleMacros.UserConsoleVariableFloat
// Size: 0x38 (Inherited: 0x30)
struct FUserConsoleVariableFloat : FUserConsoleVariable {
	float DefaultValue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ConsoleMacros.UserConsoleVariableBool
// Size: 0x38 (Inherited: 0x30)
struct FUserConsoleVariableBool : FUserConsoleVariable {
	bool bDefaultValue; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

