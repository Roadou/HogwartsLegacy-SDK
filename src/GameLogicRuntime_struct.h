// Enum GameLogicRuntime.EGameLogicElementSize
enum class EGameLogicElementSize : uint8 {
	Smallest = 0,
	Small = 1,
	Normal = 2,
	Large = 3,
	Largest = 4,
	MAX_SIZE = 5,
	EGameLogicElementSize_MAX = 6
};

// Enum GameLogicRuntime.EGameLogicPanelOrientation
enum class EGameLogicPanelOrientation : uint8 {
	LeftSide = 0,
	Top = 1,
	TopRight = 2,
	Bottom = 3,
	EGameLogicPanelOrientation_MAX = 4
};

// Enum GameLogicRuntime.EGameLogicRealmPrivacy
enum class EGameLogicRealmPrivacy : uint8 {
	Public = 0,
	Private = 1,
	EGameLogicRealmPrivacy_MAX = 2
};

// Enum GameLogicRuntime.EGameLogicEditorPanel
enum class EGameLogicEditorPanel : uint8 {
	BoolVars = 0,
	Int32Vars = 1,
	Int32Props = 2,
	FloatVars = 3,
	FloatProps = 4,
	Expressions = 5,
	TimerVars = 6,
	EnumVars = 7,
	EnumPropz = 8,
	StringVars = 9,
	StringProps = 10,
	BitfieldVars = 11,
	BitfieldProps = 12,
	EGameLogicEditorPanel_MAX = 13
};

// ScriptStruct GameLogicRuntime.Bitfield256
// Size: 0x20 (Inherited: 0x00)
struct FBitfield256 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicElement
// Size: 0x08 (Inherited: 0x00)
struct FName_GameLogicElement {
	struct FName ElementName; // 0x00(0x08)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicVarBool
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicVarBool : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Name_GameLogicVarInt32
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicVarInt32 : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.GameLogicBlueprintActionDelegateBinding
// Size: 0x10 (Inherited: 0x00)
struct FGameLogicBlueprintActionDelegateBinding {
	struct FName ElementName; // 0x00(0x08)
	struct FName FunctionNameToBind; // 0x08(0x08)
};

// ScriptStruct GameLogicRuntime.GameLogicRealmSettings
// Size: 0x60 (Inherited: 0x00)
struct FGameLogicRealmSettings {
	enum class EGameLogicRealmPrivacy RealmPrivacy; // 0x00(0x01)
	bool bLocked; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t ElementPanelBitFlags; // 0x04(0x04)
	int32_t ElementPanelMinimized; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<enum class EGameLogicEditorPanel, enum class EGameLogicElementSize> ElementSize; // 0x10(0x50)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicBoolResult
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicBoolResult : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicElement
// Size: 0x20 (Inherited: 0x00)
struct FGlobal_GameLogicElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ElementName; // 0x08(0x08)
	struct FName RealmName; // 0x10(0x08)
	bool bGenerateEvent; // 0x18(0x01)
	bool bDebugValueChange; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicExpression
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicExpression : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicSentence
// Size: 0x30 (Inherited: 0x20)
struct FGlobal_GameLogicSentence : FGlobal_GameLogicElement {
	struct TArray<struct FName> LogicElements; // 0x20(0x10)
};

// ScriptStruct GameLogicRuntime.Global_GameLogicExpression
// Size: 0x30 (Inherited: 0x30)
struct FGlobal_GameLogicExpression : FGlobal_GameLogicSentence {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicPropositional
// Size: 0x30 (Inherited: 0x30)
struct FGlobal_GameLogicPropositional : FGlobal_GameLogicSentence {
};

// ScriptStruct GameLogicRuntime.Name_GameLogicPropBitfield
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicPropBitfield : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicPropositional_Bitfield
// Size: 0x50 (Inherited: 0x30)
struct FGlobal_GameLogicPropositional_Bitfield : FGlobal_GameLogicPropositional {
	struct FString BitfieldType; // 0x30(0x10)
	struct TArray<struct FString> Values; // 0x40(0x10)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicPropEnum
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicPropEnum : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicPropositional_Enum
// Size: 0x50 (Inherited: 0x30)
struct FGlobal_GameLogicPropositional_Enum : FGlobal_GameLogicPropositional {
	struct FString EnumType; // 0x30(0x10)
	struct TArray<struct FString> Values; // 0x40(0x10)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicPropFloat
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicPropFloat : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicPropositional_Float
// Size: 0x40 (Inherited: 0x30)
struct FGlobal_GameLogicPropositional_Float : FGlobal_GameLogicPropositional {
	struct TArray<float> Values; // 0x30(0x10)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicPropInt32
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicPropInt32 : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicPropositional_Int32
// Size: 0x40 (Inherited: 0x30)
struct FGlobal_GameLogicPropositional_Int32 : FGlobal_GameLogicPropositional {
	struct TArray<int32_t> Values; // 0x30(0x10)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicPropString
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicPropString : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicPropositional_String
// Size: 0x40 (Inherited: 0x30)
struct FGlobal_GameLogicPropositional_String : FGlobal_GameLogicPropositional {
	struct TArray<struct FString> Values; // 0x30(0x10)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicRealm
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicRealm : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.GameLogicVarAndBitBitfield
// Size: 0x28 (Inherited: 0x08)
struct FGameLogicVarAndBitBitfield : FName_GameLogicElement {
	struct FString BitfieldType; // 0x08(0x10)
	struct FString BitValue; // 0x18(0x10)
};

// ScriptStruct GameLogicRuntime.GameLogicVarAndValueBitfield
// Size: 0x28 (Inherited: 0x08)
struct FGameLogicVarAndValueBitfield : FName_GameLogicElement {
	struct FString BitfieldType; // 0x08(0x10)
	struct FString BitfieldValue; // 0x18(0x10)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicVarBitfield
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicVarBitfield : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicVar_Bitfield
// Size: 0x40 (Inherited: 0x20)
struct FGlobal_GameLogicVar_Bitfield : FGlobal_GameLogicElement {
	struct FString BitfieldType; // 0x20(0x10)
	struct FString BitfieldValue; // 0x30(0x10)
};

// ScriptStruct GameLogicRuntime.Global_GameLogicVar_Bool
// Size: 0x28 (Inherited: 0x20)
struct FGlobal_GameLogicVar_Bool : FGlobal_GameLogicElement {
	bool bInitialValue; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameLogicRuntime.GameLogicVarAndValueEnum
// Size: 0x28 (Inherited: 0x08)
struct FGameLogicVarAndValueEnum : FName_GameLogicElement {
	struct FString EnumType; // 0x08(0x10)
	struct FString EnumValue; // 0x18(0x10)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicVarEnum
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicVarEnum : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicVar_Enum
// Size: 0x40 (Inherited: 0x20)
struct FGlobal_GameLogicVar_Enum : FGlobal_GameLogicElement {
	struct FString EnumType; // 0x20(0x10)
	struct FString EnumValue; // 0x30(0x10)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicVarFloat
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicVarFloat : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicVar_Float
// Size: 0x28 (Inherited: 0x20)
struct FGlobal_GameLogicVar_Float : FGlobal_GameLogicElement {
	float InitialValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GameLogicRuntime.Global_GameLogicVar_Int32
// Size: 0x28 (Inherited: 0x20)
struct FGlobal_GameLogicVar_Int32 : FGlobal_GameLogicElement {
	int32_t InitialValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicVarString
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicVarString : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicVar_String
// Size: 0x30 (Inherited: 0x20)
struct FGlobal_GameLogicVar_String : FGlobal_GameLogicElement {
	struct FString InitialValue; // 0x20(0x10)
};

// ScriptStruct GameLogicRuntime.Name_GameLogicVarTimer
// Size: 0x08 (Inherited: 0x08)
struct FName_GameLogicVarTimer : FName_GameLogicElement {
};

// ScriptStruct GameLogicRuntime.Global_GameLogicVar_Timer
// Size: 0x28 (Inherited: 0x20)
struct FGlobal_GameLogicVar_Timer : FGlobal_GameLogicElement {
	float InitialValue; // 0x20(0x04)
	bool bInitiallyPaused; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

