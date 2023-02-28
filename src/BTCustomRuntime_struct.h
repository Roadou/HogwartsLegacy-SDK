// Enum BTCustomRuntime.EBTCustomActionType
enum class EBTCustomActionType : uint8 {
	Started = 0,
	Completed = 1,
	Canceled = 2,
	EBTCustomActionType_MAX = 3
};

// ScriptStruct BTCustomRuntime.BTCustomAction
// Size: 0x0c (Inherited: 0x00)
struct FBTCustomAction {
	struct FName ActionName; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct BTCustomRuntime.BTCustomBlueprintActionDelegateBinding
// Size: 0x14 (Inherited: 0x00)
struct FBTCustomBlueprintActionDelegateBinding {
	struct FName ActionName; // 0x00(0x08)
	enum class EBTCustomActionType ActionType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName FunctionNameToBind; // 0x0c(0x08)
};

// ScriptStruct BTCustomRuntime.NameToType
// Size: 0x50 (Inherited: 0x00)
struct FNameToType {
	struct TMap<enum class EBTCustomActionType, struct FBTDelegates> ActionTypeToDelegatesMap; // 0x00(0x50)
};

// ScriptStruct BTCustomRuntime.BTDelegates
// Size: 0x18 (Inherited: 0x00)
struct FBTDelegates {
	struct TArray<struct FMulticastInlineDelegate> DelegateList; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

