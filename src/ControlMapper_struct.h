// Enum ControlMapper.EInputContextLogicType
enum class EInputContextLogicType : uint8 {
	Binary = 0,
	Fuzzy = 1,
	EInputContextLogicType_MAX = 2
};

// ScriptStruct ControlMapper.InputContextWithType
// Size: 0x0c (Inherited: 0x00)
struct FInputContextWithType {
	struct FName ContextName; // 0x00(0x08)
	enum class EInputContextLogicType ContextLogicType; // 0x08(0x01)
	bool bInitialValue; // 0x09(0x01)
	bool bDebugValueChange; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct ControlMapper.SplitWindow
// Size: 0x08 (Inherited: 0x00)
struct FSplitWindow {
	float QueueOffsetTime; // 0x00(0x04)
	bool bQueueStickDirection; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ControlMapper.InputToGameLogicInfo
// Size: 0x0c (Inherited: 0x00)
struct FInputToGameLogicInfo {
	struct FName_GameLogicVarBool BoolVarName; // 0x00(0x08)
	bool bExecuteWhenPaused; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ControlMapper.AxisToGameLogicInfo
// Size: 0x1c (Inherited: 0x0c)
struct FAxisToGameLogicInfo : FInputToGameLogicInfo {
	struct FName_GameLogicVarFloat FloatVarName; // 0x0c(0x08)
	float EnterValue; // 0x14(0x04)
	float ExitValue; // 0x18(0x04)
};

// ScriptStruct ControlMapper.ActionToGameLogicInfo
// Size: 0x0c (Inherited: 0x0c)
struct FActionToGameLogicInfo : FInputToGameLogicInfo {
};

// ScriptStruct ControlMapper.CustomBlueprintAnalogInputDelegateBinding
// Size: 0x30 (Inherited: 0x18)
struct FCustomBlueprintAnalogInputDelegateBinding : FBlueprintInputActionDelegateBinding {
	struct UWatcherRecord* WatcherRecord; // 0x18(0x08)
	struct FSplitWindow SplitWindow; // 0x20(0x08)
	bool bUsesGameLogic; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlMapper.CustomBlueprintInputDelegateBinding
// Size: 0x30 (Inherited: 0x18)
struct FCustomBlueprintInputDelegateBinding : FBlueprintInputActionDelegateBinding {
	struct UWatcherRecord* WatcherRecord; // 0x18(0x08)
	struct FSplitWindow SplitWindow; // 0x20(0x08)
	bool bUsesGameLogic; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlMapper.BlueprintCustomInputAxisDelegateBinding
// Size: 0x14 (Inherited: 0x04)
struct FBlueprintCustomInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputAxisName; // 0x04(0x08)
	struct FName FunctionNameToBind; // 0x0c(0x08)
};

// ScriptStruct ControlMapper.CustomBlueprintStickInputDelegateBinding
// Size: 0x30 (Inherited: 0x18)
struct FCustomBlueprintStickInputDelegateBinding : FBlueprintInputActionDelegateBinding {
	struct UWatcherRecord* WatcherRecord; // 0x18(0x08)
	struct FSplitWindow SplitWindow; // 0x20(0x08)
	bool bUsesGameLogic; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlMapper.Name_ControlMapperAction
// Size: 0x08 (Inherited: 0x08)
struct FName_ControlMapperAction : FName_GameLogicElement {
};

// ScriptStruct ControlMapper.Name_ControlMapperAxis
// Size: 0x08 (Inherited: 0x08)
struct FName_ControlMapperAxis : FName_GameLogicElement {
};

// ScriptStruct ControlMapper.InputContextWithTypeDef
// Size: 0x0c (Inherited: 0x00)
struct FInputContextWithTypeDef {
	struct FName ContextName; // 0x00(0x08)
	enum class EInputContextLogicType ContextLogicType; // 0x08(0x01)
	bool bInitialValue; // 0x09(0x01)
	bool bDebugValueChange; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct ControlMapper.InputFilterDef
// Size: 0x18 (Inherited: 0x00)
struct FInputFilterDef {
	struct FName FilterName; // 0x00(0x08)
	struct TArray<struct FName> LogicElements; // 0x08(0x10)
};

// ScriptStruct ControlMapper.InputFilter
// Size: 0x08 (Inherited: 0x00)
struct FInputFilter {
	struct FName FilterName; // 0x00(0x08)
};

