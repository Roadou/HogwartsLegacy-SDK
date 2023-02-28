// Class ConsoleMacros.ConsoleMacroConsoleDelegate
// Size: 0x60 (Inherited: 0x28)
struct UConsoleMacroConsoleDelegate : UObject {
	struct FName CommandKey; // 0x28(0x08)
	struct FString Command; // 0x30(0x10)
	struct FString Help; // 0x40(0x10)
	bool bHasExecuted; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// Class ConsoleMacros.ConsoleMacroConsoleDelegateShortcut
// Size: 0x60 (Inherited: 0x60)
struct UConsoleMacroConsoleDelegateShortcut : UConsoleMacroConsoleDelegate {
};

// Class ConsoleMacros.ConsoleMacroConsoleDelegateMacro
// Size: 0x60 (Inherited: 0x60)
struct UConsoleMacroConsoleDelegateMacro : UConsoleMacroConsoleDelegate {
};

// Class ConsoleMacros.ConsoleMacroConsoleDelegateGroup
// Size: 0x60 (Inherited: 0x60)
struct UConsoleMacroConsoleDelegateGroup : UConsoleMacroConsoleDelegate {
};

// Class ConsoleMacros.ConsoleMacrosPluginDefinitions
// Size: 0x58 (Inherited: 0x28)
struct UConsoleMacrosPluginDefinitions : UObject {
	struct TArray<struct FConsoleMacroGroupEntry> Groups; // 0x28(0x10)
	struct TArray<struct FConsoleMacroShortcutEntryNameRequired> Commands; // 0x38(0x10)
	struct TArray<struct FConsoleMacroEntry> Macros; // 0x48(0x10)
};

// Class ConsoleMacros.ConsoleMacrosUserDefinitions
// Size: 0x1a0 (Inherited: 0x28)
struct UConsoleMacrosUserDefinitions : UObject {
	struct TArray<struct FConsoleMacroGroupEntry> Groups; // 0x28(0x10)
	struct TArray<struct FConsoleMacroShortcutEntryNameRequired> Commands; // 0x38(0x10)
	struct TArray<struct FConsoleMacroEntry> Macros; // 0x48(0x10)
	struct TArray<struct FConsoleMacroAnyName> OnGameStartup; // 0x58(0x10)
	struct FConsoleMacrosAutomation EveryLevelAutomation; // 0x68(0x20)
	struct TArray<struct FConsoleMacrosAutomationLevel> PerLevelAutomation; // 0x88(0x10)
	struct TArray<struct FConsoleMacrosBlockAutomationLevel> BlockLevelAutomation; // 0x98(0x10)
	bool bRunOnGameStartup; // 0xa8(0x01)
	bool bRunEveryLevelAutomation; // 0xa9(0x01)
	bool bRunPerLevelAutomation; // 0xaa(0x01)
	bool bBlockAllAutomation; // 0xab(0x01)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FConsoleMacros LiveMacros; // 0xb0(0xf0)
};

// Class ConsoleMacros.ConsoleVariableLienSystem
// Size: 0x40 (Inherited: 0x28)
struct UConsoleVariableLienSystem : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class ConsoleMacros.ConsoleVariableLienAsset
// Size: 0x40 (Inherited: 0x30)
struct UConsoleVariableLienAsset : UDataAsset {
	struct TArray<struct FConsoleVariableLienEntry> ConsoleVariables; // 0x30(0x10)
};

// Class ConsoleMacros.ConsoleVariableLienFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UConsoleVariableLienFunctionLibrary : UBlueprintFunctionLibrary {

	void ConsoleVariableRemoveLiens(struct UObject* LienHolder, bool& bSuccess); // Function ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableRemoveLiens // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c193f0
	void ConsoleVariableRemoveLien(struct UObject* LienHolder, struct FString Variable, bool& bSuccess); // Function ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableRemoveLien // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c19280
	void ConsoleVariableRemoveAssetLiens(struct UObject* LienHolder, struct UConsoleVariableLienAsset* LienAsset, bool& bSuccess); // Function ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableRemoveAssetLiens // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c19170
	void ConsoleVariableHasLien(struct UObject* LienHolder, struct FString Variable, bool& bHasALien); // Function ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableHasLien // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c19000
	void ConsoleVariableHasAnyLiens(struct UObject* LienHolder, bool& bHasALien); // Function ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableHasAnyLiens // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c18f30
	void ConsoleVariableAssetLiensActivate(struct UObject* LienHolder, struct UConsoleVariableLienAsset* LienAsset, bool& bSuccess, bool bActivate); // Function ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAssetLiensActivate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c18c60
	void ConsoleVariableAddStringLien(struct UObject* LienHolder, struct FString Variable, struct FString Value, bool& bSuccess, float Priority); // Function ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAddStringLien // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c18a20
	void ConsoleVariableAddIntegerLien(struct UObject* LienHolder, struct FString Variable, int32_t Value, bool& bSuccess, float Priority); // Function ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAddIntegerLien // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c18830
	void ConsoleVariableAddFloatLien(struct UObject* LienHolder, struct FString Variable, float Value, bool& bSuccess, float Priority); // Function ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAddFloatLien // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c18640
	void ConsoleVariableAddDefaultLien(struct UObject* LienHolder, struct FString Variable, bool& bSuccess, float Priority); // Function ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAddDefaultLien // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c18490
	void ConsoleVariableAddAssetLiens(struct UObject* LienHolder, struct UConsoleVariableLienAsset* LienAsset, bool& bSuccess); // Function ConsoleMacros.ConsoleVariableLienFunctionLibrary.ConsoleVariableAddAssetLiens // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c18380
};

// Class ConsoleMacros.WatchedConsoleVariable
// Size: 0x38 (Inherited: 0x28)
struct UWatchedConsoleVariable : UObject {
	struct FString Variable; // 0x28(0x10)
};

// Class ConsoleMacros.WatchedConsoleVariableBool
// Size: 0x50 (Inherited: 0x38)
struct UWatchedConsoleVariableBool : UWatchedConsoleVariable {
	struct FMulticastInlineDelegate ChangedEvent; // 0x38(0x10)
	bool bValue; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class ConsoleMacros.WatchedConsoleVariableFloat
// Size: 0x50 (Inherited: 0x38)
struct UWatchedConsoleVariableFloat : UWatchedConsoleVariable {
	struct FMulticastInlineDelegate ChangedEvent; // 0x38(0x10)
	float Value; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class ConsoleMacros.WatchedConsoleVariableInt
// Size: 0x50 (Inherited: 0x38)
struct UWatchedConsoleVariableInt : UWatchedConsoleVariable {
	struct FMulticastInlineDelegate ChangedEvent; // 0x38(0x10)
	int32_t Value; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class ConsoleMacros.ConsoleVariableWatcher
// Size: 0x288 (Inherited: 0x248)
struct AConsoleVariableWatcher : AActor {
	struct TArray<struct UWatchedConsoleVariableBool*> BoolVariables; // 0x248(0x10)
	struct TArray<struct UWatchedConsoleVariableFloat*> FloatVariables; // 0x258(0x10)
	struct TArray<struct UWatchedConsoleVariableInt*> IntVariables; // 0x268(0x10)
	char pad_278[0x10]; // 0x278(0x10)

	void WatchIntConsoleVariable(struct UObject* WorldContextObject, struct FString ConsoleVariable, struct UWatchedConsoleVariableInt*& Variable); // Function ConsoleMacros.ConsoleVariableWatcher.WatchIntConsoleVariable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c1ad00
	void WatchFloatConsoleVariable(struct UObject* WorldContextObject, struct FString ConsoleVariable, struct UWatchedConsoleVariableFloat*& Variable); // Function ConsoleMacros.ConsoleVariableWatcher.WatchFloatConsoleVariable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c1ab90
	void WatchBoolConsoleVariable(struct UObject* WorldContextObject, struct FString ConsoleVariable, struct UWatchedConsoleVariableBool*& Variable); // Function ConsoleMacros.ConsoleVariableWatcher.WatchBoolConsoleVariable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c1aa20
	void SetConsoleVariableAsInt(struct FString ConsoleVariable, int32_t Value, bool& bExists); // Function ConsoleMacros.ConsoleVariableWatcher.SetConsoleVariableAsInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c1a880
	void SetConsoleVariableAsFloat(struct FString ConsoleVariable, float Value, bool& bExists); // Function ConsoleMacros.ConsoleVariableWatcher.SetConsoleVariableAsFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c1a6d0
	void SetConsoleVariableAsBool(struct FString ConsoleVariable, bool Value, bool& bExists); // Function ConsoleMacros.ConsoleVariableWatcher.SetConsoleVariableAsBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c1a530
	void GetConsoleVariableAsInt(struct FString ConsoleVariable, int32_t& Value, bool& bExists, int32_t DefaultValue); // Function ConsoleMacros.ConsoleVariableWatcher.GetConsoleVariableAsInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c1a350
	void GetConsoleVariableAsFloat(struct FString ConsoleVariable, float& Value, bool& bExists, float DefaultValue); // Function ConsoleMacros.ConsoleVariableWatcher.GetConsoleVariableAsFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c1a170
	void GetConsoleVariableAsBool(struct FString ConsoleVariable, bool& bValue, bool& bExists, bool bDefaultValue); // Function ConsoleMacros.ConsoleVariableWatcher.GetConsoleVariableAsBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c19f80
	void CreateConsoleVariableAsInt(struct FString ConsoleVariable, int32_t DefaultValue, struct FString Help, bool& bSuccess); // Function ConsoleMacros.ConsoleVariableWatcher.CreateConsoleVariableAsInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c19bf0
	void CreateConsoleVariableAsFloat(struct FString ConsoleVariable, float DefaultValue, struct FString Help, bool& bSuccess); // Function ConsoleMacros.ConsoleVariableWatcher.CreateConsoleVariableAsFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c19850
	void CreateConsoleVariableAsBool(struct FString ConsoleVariable, bool DefaultValue, struct FString Help, bool& bSuccess); // Function ConsoleMacros.ConsoleVariableWatcher.CreateConsoleVariableAsBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c194c0
	void ConsoleVariableExists(struct FString ConsoleVariable, bool& bExists); // Function ConsoleMacros.ConsoleVariableWatcher.ConsoleVariableExists // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c18dc0
};

// Class ConsoleMacros.UserConsoleVariables
// Size: 0x60 (Inherited: 0x30)
struct UUserConsoleVariables : UDataAsset {
	struct TArray<struct FUserConsoleVariableBool> Bools; // 0x30(0x10)
	struct TArray<struct FUserConsoleVariableFloat> Floats; // 0x40(0x10)
	struct TArray<struct FUserConsoleVariableInt> Ints; // 0x50(0x10)
};

