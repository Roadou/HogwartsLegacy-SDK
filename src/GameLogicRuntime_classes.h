// Class GameLogicRuntime.GameLogicBase
// Size: 0x28 (Inherited: 0x28)
struct UGameLogicBase : UObject {
};

// Class GameLogicRuntime.GameLogicBoolBase
// Size: 0x40 (Inherited: 0x28)
struct UGameLogicBoolBase : UGameLogicBase {
	char pad_28[0x18]; // 0x28(0x18)

	bool GetCachedValue(); // Function GameLogicRuntime.GameLogicBoolBase.GetCachedValue // (Native|Public|BlueprintCallable) // @ game+0x170d8d0
};

// Class GameLogicRuntime.GameLogicBoolResultDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UGameLogicBoolResultDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FGameLogicBlueprintActionDelegateBinding> ActionDelegateBindings; // 0x28(0x10)
};

// Class GameLogicRuntime.GameLogicBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameLogicBPFunctionLibrary : UBlueprintFunctionLibrary {

	struct UGameLogicObject* SpawnAndAttachToGameLogicObject(struct UObject* InBlueprint); // Function GameLogicRuntime.GameLogicBPFunctionLibrary.SpawnAndAttachToGameLogicObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d110a0
	void DetachFromGameLogicEvents(struct UObject* InputReceiver, struct UGameLogicObject* GameLogicObject); // Function GameLogicRuntime.GameLogicBPFunctionLibrary.DetachFromGameLogicEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d520
	void AttachToGameLogicEvents(struct UObject* InputReceiver, struct UGameLogicObject* GameLogicObject); // Function GameLogicRuntime.GameLogicBPFunctionLibrary.AttachToGameLogicEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0cc20
};

// Class GameLogicRuntime.GameLogicComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UGameLogicComponent : UActorComponent {
	struct UGameLogicObject* GameLogicObject; // 0xc8(0x08)

	void SetInt32Variable_OnActor(struct AActor* InActor, struct FName_GameLogicVarInt32 Int32VarName, int32_t Value); // Function GameLogicRuntime.GameLogicComponent.SetInt32Variable_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d10ba0
	void SetInt32Variable(struct FName_GameLogicVarInt32 Int32VarName, int32_t Value); // Function GameLogicRuntime.GameLogicComponent.SetInt32Variable // (Native|Public|BlueprintCallable) // @ game+0x5d10a00
	void SetFloatVariable_OnActor(struct AActor* InActor, struct FName_GameLogicVarFloat FloatVarName, float Value); // Function GameLogicRuntime.GameLogicComponent.SetFloatVariable_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d108f0
	void SetFloatVariable(struct FName_GameLogicVarFloat FloatVarName, float Value); // Function GameLogicRuntime.GameLogicComponent.SetFloatVariable // (Native|Public|BlueprintCallable) // @ game+0x5d10730
	void SetBoolVariable_OnActor(struct AActor* InActor, struct FName_GameLogicVarBool BoolVarName, bool bValue); // Function GameLogicRuntime.GameLogicComponent.SetBoolVariable_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d10290
	void SetBoolVariable(struct FName_GameLogicVarBool BoolVarName, bool bValue); // Function GameLogicRuntime.GameLogicComponent.SetBoolVariable // (Native|Public|BlueprintCallable) // @ game+0x5d100f0
	void IncrementInt32Variable_OnActor(struct AActor* InActor, struct FName_GameLogicVarInt32 Int32VarName, int32_t Delta); // Function GameLogicRuntime.GameLogicComponent.IncrementInt32Variable_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0f950
	void IncrementInt32Variable(struct FName_GameLogicVarInt32 Int32VarName, int32_t Delta); // Function GameLogicRuntime.GameLogicComponent.IncrementInt32Variable // (Native|Public|BlueprintCallable) // @ game+0x5d0f7b0
	struct UGameLogicVar_Int32* GetReferenceToInt32Variable_OnActor(struct AActor* InActor, struct FName_GameLogicVarInt32 Int32VarName); // Function GameLogicRuntime.GameLogicComponent.GetReferenceToInt32Variable_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0f060
	struct UGameLogicVar_Int32* GetReferenceToInt32Variable(struct FName_GameLogicVarInt32 Int32VarName); // Function GameLogicRuntime.GameLogicComponent.GetReferenceToInt32Variable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0ef20
	struct UGameLogicVar_Float* GetReferenceToFloatVariable_OnActor(struct AActor* InActor, struct FName_GameLogicVarFloat FloatVarName); // Function GameLogicRuntime.GameLogicComponent.GetReferenceToFloatVariable_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0ee50
	struct UGameLogicVar_Float* GetReferenceToFloatVariable(struct FName_GameLogicVarFloat FloatVarName); // Function GameLogicRuntime.GameLogicComponent.GetReferenceToFloatVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0ed10
	struct UGameLogicExpression* GetReferenceToExpression_OnActor(struct AActor* InActor, struct FName_GameLogicExpression ExpressionName); // Function GameLogicRuntime.GameLogicComponent.GetReferenceToExpression_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0ec40
	struct UGameLogicExpression* GetReferenceToExpression(struct FName_GameLogicExpression ExpressionName); // Function GameLogicRuntime.GameLogicComponent.GetReferenceToExpression // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0eb00
	struct UGameLogicVar_Bool* GetReferenceToBoolVariable_OnActor(struct AActor* InActor, struct FName_GameLogicVarBool BoolVarName); // Function GameLogicRuntime.GameLogicComponent.GetReferenceToBoolVariable_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0e990
	struct UGameLogicVar_Bool* GetReferenceToBoolVariable(struct FName_GameLogicVarBool BoolVarName); // Function GameLogicRuntime.GameLogicComponent.GetReferenceToBoolVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0e850
	int32_t GetInt32Variable_OnActor(struct AActor* InActor, struct FName_GameLogicVarInt32 Int32VarName); // Function GameLogicRuntime.GameLogicComponent.GetInt32Variable_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0e6e0
	int32_t GetInt32Variable(struct FName_GameLogicVarInt32 Int32VarName); // Function GameLogicRuntime.GameLogicComponent.GetInt32Variable // (Native|Public|BlueprintCallable) // @ game+0x5d0e5a0
	struct UGameLogicObject* GetGameLogicObject(); // Function GameLogicRuntime.GameLogicComponent.GetGameLogicObject // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0e340
	float GetFloatVariable_OnActor(struct AActor* InActor, struct FName_GameLogicVarFloat FloatVarName); // Function GameLogicRuntime.GameLogicComponent.GetFloatVariable_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0e270
	float GetFloatVariable(struct FName_GameLogicVarFloat FloatVarName); // Function GameLogicRuntime.GameLogicComponent.GetFloatVariable // (Native|Public|BlueprintCallable) // @ game+0x5d0e130
	bool GetExpression_OnActor(struct AActor* InActor, struct FName_GameLogicExpression ExpressionName); // Function GameLogicRuntime.GameLogicComponent.GetExpression_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0dfc0
	bool GetExpression(struct FName_GameLogicExpression ExpressionName); // Function GameLogicRuntime.GameLogicComponent.GetExpression // (Native|Public|BlueprintCallable) // @ game+0x5d0de80
	bool GetBoolVariable_OnActor(struct AActor* InActor, struct FName_GameLogicVarBool BoolVarName); // Function GameLogicRuntime.GameLogicComponent.GetBoolVariable_OnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d9e0
	bool GetBoolVariable(struct FName_GameLogicVarBool BoolVarName); // Function GameLogicRuntime.GameLogicComponent.GetBoolVariable // (Native|Public|BlueprintCallable) // @ game+0x5d0d8a0
};

// Class GameLogicRuntime.GameLogicSentence
// Size: 0x48 (Inherited: 0x40)
struct UGameLogicSentence : UGameLogicBoolBase {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class GameLogicRuntime.GameLogicExpression
// Size: 0x48 (Inherited: 0x48)
struct UGameLogicExpression : UGameLogicSentence {

	void _MemberValueChanged(bool NewResult); // Function GameLogicRuntime.GameLogicExpression._MemberValueChanged // (Final|Native|Protected) // @ game+0x5d11390
};

// Class GameLogicRuntime.GameLogicFloatResultDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UGameLogicFloatResultDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FGameLogicBlueprintActionDelegateBinding> ActionDelegateBindings; // 0x28(0x10)
};

// Class GameLogicRuntime.GameLogicGameSettings
// Size: 0x168 (Inherited: 0x38)
struct UGameLogicGameSettings : UDeveloperSettings {
	struct TArray<struct FName> Realms; // 0x38(0x10)
	struct TMap<struct FName, struct FGameLogicRealmSettings> RealmSettings; // 0x48(0x50)
	struct TArray<struct FGlobal_GameLogicVar_Bool> BoolVars; // 0x98(0x10)
	struct TArray<struct FGlobal_GameLogicVar_Int32> Int32Vars; // 0xa8(0x10)
	struct TArray<struct FGlobal_GameLogicVar_Float> FloatVars; // 0xb8(0x10)
	struct TArray<struct FGlobal_GameLogicVar_Timer> TimerVars; // 0xc8(0x10)
	struct TArray<struct FGlobal_GameLogicVar_Enum> EnumVars; // 0xd8(0x10)
	struct TArray<struct FGlobal_GameLogicVar_Bitfield> BitfieldVars; // 0xe8(0x10)
	struct TArray<struct FGlobal_GameLogicVar_String> StringVars; // 0xf8(0x10)
	struct TArray<struct FGlobal_GameLogicPropositional_Int32> PropInt32s; // 0x108(0x10)
	struct TArray<struct FGlobal_GameLogicPropositional_Float> PropFloats; // 0x118(0x10)
	struct TArray<struct FGlobal_GameLogicPropositional_Enum> PropEnums; // 0x128(0x10)
	struct TArray<struct FGlobal_GameLogicPropositional_Bitfield> PropBitfields; // 0x138(0x10)
	struct TArray<struct FGlobal_GameLogicPropositional_String> PropStrings; // 0x148(0x10)
	struct TArray<struct FGlobal_GameLogicExpression> Expressions; // 0x158(0x10)

	void SetElementSizeByPanelAndRealm(enum class EGameLogicElementSize InSize, enum class EGameLogicEditorPanel ElementType, struct FName RealmName); // Function GameLogicRuntime.GameLogicGameSettings.SetElementSizeByPanelAndRealm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d10390
	void RemoveElementByIndex(enum class EGameLogicEditorPanel ElementType, int32_t Index); // Function GameLogicRuntime.GameLogicGameSettings.RemoveElementByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0fea0
	void MoveElementByIndex(enum class EGameLogicEditorPanel ElementType, int32_t Index, int32_t IndexDelta, bool bUseRealm, struct FName RealmName); // Function GameLogicRuntime.GameLogicGameSettings.MoveElementByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0fb70
	bool IsValidElementName(struct FName& InName); // Function GameLogicRuntime.GameLogicGameSettings.IsValidElementName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0fae0
	bool IsUniqueElementName(struct FName& InName); // Function GameLogicRuntime.GameLogicGameSettings.IsUniqueElementName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0fa50
	int32_t GetIndexFromElement(enum class EGameLogicEditorPanel ElementType, struct FGlobal_GameLogicElement& InElement, bool bUseRealm, struct FName RealmName); // Function GameLogicRuntime.GameLogicGameSettings.GetIndexFromElement // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0e370
	enum class EGameLogicElementSize GetElementSizeByPanelAndRealm(enum class EGameLogicEditorPanel ElementType, struct FName RealmName); // Function GameLogicRuntime.GameLogicGameSettings.GetElementSizeByPanelAndRealm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0dc70
	void GetElementNames(struct TArray<struct FName>& ElementNames); // Function GameLogicRuntime.GameLogicGameSettings.GetElementNames // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d0dbc0
	int32_t GetCountFromElement(enum class EGameLogicEditorPanel ElementType, bool bUseRealm, struct FName RealmName); // Function GameLogicRuntime.GameLogicGameSettings.GetCountFromElement // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0dab0
	bool ElementPanelHasReferences(enum class EGameLogicEditorPanel ElementType, struct FName RealmName); // Function GameLogicRuntime.GameLogicGameSettings.ElementPanelHasReferences // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d670
	bool ElementHasReferences(struct FName ElementName); // Function GameLogicRuntime.GameLogicGameSettings.ElementHasReferences // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d5e0
	void DestroyRealm(struct FName RealmName); // Function GameLogicRuntime.GameLogicGameSettings.DestroyRealm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d4a0
	bool DestroyElementsByRealm(enum class EGameLogicEditorPanel ElementType, struct FName RealmName); // Function GameLogicRuntime.GameLogicGameSettings.DestroyElementsByRealm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d340
	void CreateRealm(struct FName RealmName); // Function GameLogicRuntime.GameLogicGameSettings.CreateRealm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d2c0
	struct FName ComputeUniqueElementName(struct FName& BaseName); // Function GameLogicRuntime.GameLogicGameSettings.ComputeUniqueElementName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0d220
	struct FName AddElementToRealm(enum class EGameLogicEditorPanel ElementType, struct FName RealmName, int32_t Index, bool bCopyIndex, int32_t IndexToCopy); // Function GameLogicRuntime.GameLogicGameSettings.AddElementToRealm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0c8d0
};

// Class GameLogicRuntime.GameLogicMaster
// Size: 0x30 (Inherited: 0x28)
struct UGameLogicMaster : UObject {
	struct UGameLogicGameSettings* GameLogicGameSettings; // 0x28(0x08)
};

// Class GameLogicRuntime.GameLogicInt32ResultDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UGameLogicInt32ResultDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FGameLogicBlueprintActionDelegateBinding> ActionDelegateBindings; // 0x28(0x10)
};

// Class GameLogicRuntime.GameLogicObject
// Size: 0x460 (Inherited: 0x28)
struct UGameLogicObject : UObject {
	struct TMap<struct FName, struct UGameLogicVar_Bool*> InstancedBoolVars; // 0x28(0x50)
	struct TMap<struct FName, struct UGameLogicVar_Int32*> InstancedInt32Vars; // 0x78(0x50)
	struct TMap<struct FName, struct UGameLogicVar_Float*> InstancedFloatVars; // 0xc8(0x50)
	struct TMap<struct FName, struct UGameLogicVar_Timer*> InstancedTimerVars; // 0x118(0x50)
	struct TMap<struct FName, struct UGameLogicVar_Enum*> InstancedEnumVars; // 0x168(0x50)
	struct TMap<struct FName, struct UGameLogicVar_Bitfield*> InstancedBitfieldVars; // 0x1b8(0x50)
	struct TMap<struct FName, struct UGameLogicVar_String*> InstancedStringVars; // 0x208(0x50)
	struct TMap<struct FName, struct UGameLogicPropositional_Int32*> InstancedPropInt32s; // 0x258(0x50)
	struct TMap<struct FName, struct UGameLogicPropositional_Float*> InstancedPropFloats; // 0x2a8(0x50)
	struct TMap<struct FName, struct UGameLogicPropositional_Enum*> InstancedPropEnums; // 0x2f8(0x50)
	struct TMap<struct FName, struct UGameLogicPropositional_Bitfield*> InstancedPropBitfields; // 0x348(0x50)
	struct TMap<struct FName, struct UGameLogicPropositional_String*> InstancedPropStrings; // 0x398(0x50)
	struct TMap<struct FName, struct UGameLogicExpression*> InstancedExpressions; // 0x3e8(0x50)
	char pad_438[0x28]; // 0x438(0x28)

	void XOrBitfieldVariable(struct FGameLogicVarAndValueBitfield VarAndValue); // Function GameLogicRuntime.GameLogicObject.XOrBitfieldVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d11200
	struct UGameLogicObject* SpawnGameLogicObject(struct UObject* Outer, struct UWorld* World); // Function GameLogicRuntime.GameLogicObject.SpawnGameLogicObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d11130
	void SetTimerVariablePauseAndValue(struct FName_GameLogicVarTimer TimerVarName, bool bFlag, float Value); // Function GameLogicRuntime.GameLogicObject.SetTimerVariablePauseAndValue // (Native|Public|BlueprintCallable) // @ game+0x5d10f80
	void SetTimerVariablePause(struct FName_GameLogicVarTimer TimerVarName, bool bFlag); // Function GameLogicRuntime.GameLogicObject.SetTimerVariablePause // (Native|Public|BlueprintCallable) // @ game+0x5d10eb0
	void SetTimerVariable(struct FName_GameLogicVarTimer TimerVarName, float Value); // Function GameLogicRuntime.GameLogicObject.SetTimerVariable // (Native|Public|BlueprintCallable) // @ game+0x5d10dd0
	void SetStringVariable(struct FName_GameLogicVarString StringVarName, struct FString Value); // Function GameLogicRuntime.GameLogicObject.SetStringVariable // (Native|Public|BlueprintCallable) // @ game+0x5d10ca0
	void SetInt32Variable(struct FName_GameLogicVarInt32 Int32VarName, int32_t Value); // Function GameLogicRuntime.GameLogicObject.SetInt32Variable // (Native|Public|BlueprintCallable) // @ game+0x5d10ad0
	void SetFloatVariable(struct FName_GameLogicVarFloat FloatVarName, float Value); // Function GameLogicRuntime.GameLogicObject.SetFloatVariable // (Native|Public|BlueprintCallable) // @ game+0x5d10810
	void SetEnumVariableWithU8(struct FName_GameLogicVarEnum EnumVarName, char Value); // Function GameLogicRuntime.GameLogicObject.SetEnumVariableWithU8 // (Final|Native|Public|BlueprintCallable) // @ game+0x5d10660
	void SetEnumVariable(struct FGameLogicVarAndValueEnum VarAndValue); // Function GameLogicRuntime.GameLogicObject.SetEnumVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d10490
	void SetBoolVariable(struct FName_GameLogicVarBool BoolVarName, bool bValue); // Function GameLogicRuntime.GameLogicObject.SetBoolVariable // (Native|Public|BlueprintCallable) // @ game+0x5d101c0
	void SetBitfieldVariable(struct FGameLogicVarAndValueBitfield VarAndValue); // Function GameLogicRuntime.GameLogicObject.SetBitfieldVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0ff60
	void OrBitfieldVariable(struct FGameLogicVarAndValueBitfield VarAndValue); // Function GameLogicRuntime.GameLogicObject.OrBitfieldVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0fd10
	void IncrementInt32Variable(struct FName_GameLogicVarInt32 Int32VarName, int32_t Delta); // Function GameLogicRuntime.GameLogicObject.IncrementInt32Variable // (Native|Public|BlueprintCallable) // @ game+0x5d0f880
	float GetTimerVariable(struct FName_GameLogicVarTimer TimerVarName); // Function GameLogicRuntime.GameLogicObject.GetTimerVariable // (Native|Public|BlueprintCallable) // @ game+0x5d0f710
	struct FString GetStringVariable(struct FName_GameLogicVarString StringVarName); // Function GameLogicRuntime.GameLogicObject.GetStringVariable // (Native|Public|BlueprintCallable) // @ game+0x5d0f630
	bool GetStringPropositional(struct FName_GameLogicPropString PropName); // Function GameLogicRuntime.GameLogicObject.GetStringPropositional // (Native|Public|BlueprintCallable) // @ game+0x5d0f590
	struct UGameLogicVar_Timer* GetReferenceToTimerVariable(struct FName_GameLogicVarTimer TimerVarName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToTimerVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0f4f0
	struct UGameLogicVar_String* GetReferenceToStringVariable(struct FName_GameLogicVarString StringVarName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToStringVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0f450
	struct UGameLogicPropositional_String* GetReferenceToPropString(struct FName_GameLogicPropString PropName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToPropString // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0f3b0
	struct UGameLogicPropositional_Int32* GetReferenceToPropInt32(struct FName_GameLogicPropInt32 PropName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToPropInt32 // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0f310
	struct UGameLogicPropositional_Float* GetReferenceToPropFloat(struct FName_GameLogicPropFloat PropName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToPropFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0f270
	struct UGameLogicPropositional_Enum* GetReferenceToPropEnum(struct FName_GameLogicPropEnum PropName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToPropEnum // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0f1d0
	struct UGameLogicPropositional_Bitfield* GetReferenceToPropBitfield(struct FName_GameLogicPropBitfield PropName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToPropBitfield // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0f130
	struct UGameLogicVar_Int32* GetReferenceToInt32Variable(struct FName_GameLogicVarInt32 Int32VarName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToInt32Variable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0efc0
	struct UGameLogicVar_Float* GetReferenceToFloatVariable(struct FName_GameLogicVarFloat FloatVarName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToFloatVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0edb0
	struct UGameLogicExpression* GetReferenceToExpression(struct FName_GameLogicExpression ExpressionName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToExpression // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0eba0
	struct UGameLogicVar_Enum* GetReferenceToEnumVariable(struct FName_GameLogicVarEnum EnumVarName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToEnumVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0ea60
	struct UGameLogicVar_Bool* GetReferenceToBoolVariable(struct FName_GameLogicVarBool BoolVarName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToBoolVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0e8f0
	struct UGameLogicVar_Bitfield* GetReferenceToBitfieldVariable(struct FName_GameLogicVarBitfield BitfieldVarName); // Function GameLogicRuntime.GameLogicObject.GetReferenceToBitfieldVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0e7b0
	int32_t GetInt32Variable(struct FName_GameLogicVarInt32 Int32VarName); // Function GameLogicRuntime.GameLogicObject.GetInt32Variable // (Native|Public|BlueprintCallable) // @ game+0x5d0e640
	bool GetInt32Propositional(struct FName_GameLogicPropInt32 PropName); // Function GameLogicRuntime.GameLogicObject.GetInt32Propositional // (Native|Public|BlueprintCallable) // @ game+0x5d0e500
	float GetFloatVariable(struct FName_GameLogicVarFloat FloatVarName); // Function GameLogicRuntime.GameLogicObject.GetFloatVariable // (Native|Public|BlueprintCallable) // @ game+0x5d0e1d0
	bool GetFloatPropositional(struct FName_GameLogicPropFloat PropName); // Function GameLogicRuntime.GameLogicObject.GetFloatPropositional // (Native|Public|BlueprintCallable) // @ game+0x5d0e090
	bool GetExpression(struct FName_GameLogicExpression ExpressionName); // Function GameLogicRuntime.GameLogicObject.GetExpression // (Native|Public|BlueprintCallable) // @ game+0x5d0df20
	char GetEnumVariable(struct FName_GameLogicVarEnum EnumVarName); // Function GameLogicRuntime.GameLogicObject.GetEnumVariable // (Native|Public|BlueprintCallable) // @ game+0x5d0dde0
	bool GetEnumPropositional(struct FName_GameLogicPropEnum PropName); // Function GameLogicRuntime.GameLogicObject.GetEnumPropositional // (Native|Public|BlueprintCallable) // @ game+0x5d0dd40
	bool GetBoolVariable(struct FName_GameLogicVarBool BoolVarName); // Function GameLogicRuntime.GameLogicObject.GetBoolVariable // (Native|Public|BlueprintCallable) // @ game+0x5d0d940
	struct FBitfield256 GetBitfieldVariable(struct FName_GameLogicVarBitfield BitfieldVarName); // Function GameLogicRuntime.GameLogicObject.GetBitfieldVariable // (Native|Public|BlueprintCallable) // @ game+0x5d0d7e0
	bool GetBitfieldPropositional(struct FName_GameLogicPropBitfield PropName); // Function GameLogicRuntime.GameLogicObject.GetBitfieldPropositional // (Native|Public|BlueprintCallable) // @ game+0x5d0d740
	struct UGameLogicObject* DestroyGameLogicObject(struct UGameLogicObject* InGameLogicObject); // Function GameLogicRuntime.GameLogicObject.DestroyGameLogicObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0d410
	void BitfieldVariable_SetBit(struct FGameLogicVarAndBitBitfield BitfieldVarName); // Function GameLogicRuntime.GameLogicObject.BitfieldVariable_SetBit // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0d090
	void BitfieldVariable_SetAllBits(struct FName_GameLogicVarBitfield VarName); // Function GameLogicRuntime.GameLogicObject.BitfieldVariable_SetAllBits // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0d000
	void BitfieldVariable_FlipBit(struct FGameLogicVarAndBitBitfield BitfieldVarName); // Function GameLogicRuntime.GameLogicObject.BitfieldVariable_FlipBit // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0ce70
	void BitfieldVariable_ClearBit(struct FGameLogicVarAndBitBitfield BitfieldVarName); // Function GameLogicRuntime.GameLogicObject.BitfieldVariable_ClearBit // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0cce0
	void AndBitfieldVariable(struct FGameLogicVarAndValueBitfield VarAndValue); // Function GameLogicRuntime.GameLogicObject.AndBitfieldVariable // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0ca90
};

// Class GameLogicRuntime.GameLogicPropositional
// Size: 0x48 (Inherited: 0x48)
struct UGameLogicPropositional : UGameLogicSentence {
};

// Class GameLogicRuntime.GameLogicPropositional_Bitfield
// Size: 0x48 (Inherited: 0x48)
struct UGameLogicPropositional_Bitfield : UGameLogicPropositional {

	void _MemberValueChanged(struct FBitfield256 NewResult); // Function GameLogicRuntime.GameLogicPropositional_Bitfield._MemberValueChanged // (Final|Native|Protected) // @ game+0x5d18a70
};

// Class GameLogicRuntime.GameLogicPropositional_Enum
// Size: 0x48 (Inherited: 0x48)
struct UGameLogicPropositional_Enum : UGameLogicPropositional {

	void _MemberValueChanged(char NewResult); // Function GameLogicRuntime.GameLogicPropositional_Enum._MemberValueChanged // (Final|Native|Protected) // @ game+0x5d18b20
};

// Class GameLogicRuntime.GameLogicPropositional_Float
// Size: 0x48 (Inherited: 0x48)
struct UGameLogicPropositional_Float : UGameLogicPropositional {

	void _MemberValueChanged(float NewResult); // Function GameLogicRuntime.GameLogicPropositional_Float._MemberValueChanged // (Final|Native|Protected) // @ game+0x5d18bc0
};

// Class GameLogicRuntime.GameLogicPropositional_Int32
// Size: 0x48 (Inherited: 0x48)
struct UGameLogicPropositional_Int32 : UGameLogicPropositional {

	void _MemberValueChanged(int32_t NewResult); // Function GameLogicRuntime.GameLogicPropositional_Int32._MemberValueChanged // (Final|Native|Protected) // @ game+0x5d18c70
};

// Class GameLogicRuntime.GameLogicPropositional_String
// Size: 0x48 (Inherited: 0x48)
struct UGameLogicPropositional_String : UGameLogicPropositional {

	void _MemberValueChanged(struct FString NewResult); // Function GameLogicRuntime.GameLogicPropositional_String._MemberValueChanged // (Final|Native|Protected) // @ game+0x5d18d20
};

// Class GameLogicRuntime.GameLogicVar_Bitfield
// Size: 0x58 (Inherited: 0x28)
struct UGameLogicVar_Bitfield : UGameLogicBase {
	char pad_28[0x30]; // 0x28(0x30)

	void SetCachedValue(struct FBitfield256 Value); // Function GameLogicRuntime.GameLogicVar_Bitfield.SetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d182f0
	struct FBitfield256 GetCachedValue(); // Function GameLogicRuntime.GameLogicVar_Bitfield.GetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d17f60
};

// Class GameLogicRuntime.GameLogicVar_Bool
// Size: 0x40 (Inherited: 0x40)
struct UGameLogicVar_Bool : UGameLogicBoolBase {

	void SetCachedValue(bool bValue); // Function GameLogicRuntime.GameLogicVar_Bool.SetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d183d0
};

// Class GameLogicRuntime.GameLogicVar_Enum
// Size: 0x40 (Inherited: 0x28)
struct UGameLogicVar_Enum : UGameLogicBase {
	char pad_28[0x18]; // 0x28(0x18)

	void SetCachedValue(char Value); // Function GameLogicRuntime.GameLogicVar_Enum.SetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d18470
	char GetCachedValue(); // Function GameLogicRuntime.GameLogicVar_Enum.GetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d17fa0
};

// Class GameLogicRuntime.GameLogicVar_Float
// Size: 0x40 (Inherited: 0x28)
struct UGameLogicVar_Float : UGameLogicBase {
	char pad_28[0x18]; // 0x28(0x18)

	void Subtract(float Delta); // Function GameLogicRuntime.GameLogicVar_Float.Subtract // (Final|Native|Public|BlueprintCallable) // @ game+0x5d18900
	void SetCachedValue(float Value); // Function GameLogicRuntime.GameLogicVar_Float.SetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d18500
	void Multiply(float Factor); // Function GameLogicRuntime.GameLogicVar_Float.Multiply // (Final|Native|Public|BlueprintCallable) // @ game+0x5d181b0
	float GetCachedValue(); // Function GameLogicRuntime.GameLogicVar_Float.GetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x19e8830
	void Divide(float Factor); // Function GameLogicRuntime.GameLogicVar_Float.Divide // (Final|Native|Public|BlueprintCallable) // @ game+0x5d17df0
	void Add(float Delta); // Function GameLogicRuntime.GameLogicVar_Float.Add // (Final|Native|Public|BlueprintCallable) // @ game+0x5d17cb0
};

// Class GameLogicRuntime.GameLogicVar_Int32
// Size: 0x40 (Inherited: 0x28)
struct UGameLogicVar_Int32 : UGameLogicBase {
	char pad_28[0x18]; // 0x28(0x18)

	void Subtract(int32_t Delta); // Function GameLogicRuntime.GameLogicVar_Int32.Subtract // (Final|Native|Public|BlueprintCallable) // @ game+0x5d189a0
	void SetCachedValue(int32_t Value); // Function GameLogicRuntime.GameLogicVar_Int32.SetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d185a0
	void Multiply(int32_t Factor); // Function GameLogicRuntime.GameLogicVar_Int32.Multiply // (Final|Native|Public|BlueprintCallable) // @ game+0x5d18250
	int32_t GetCachedValue(); // Function GameLogicRuntime.GameLogicVar_Int32.GetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x19e8830
	void Divide(int32_t Denominator); // Function GameLogicRuntime.GameLogicVar_Int32.Divide // (Final|Native|Public|BlueprintCallable) // @ game+0x5d17eb0
	void Add(int32_t Delta); // Function GameLogicRuntime.GameLogicVar_Int32.Add // (Final|Native|Public|BlueprintCallable) // @ game+0x5d17d50
};

// Class GameLogicRuntime.GameLogicVar_String
// Size: 0x48 (Inherited: 0x28)
struct UGameLogicVar_String : UGameLogicBase {
	char pad_28[0x20]; // 0x28(0x20)

	void SetCachedValue(struct FString Value); // Function GameLogicRuntime.GameLogicVar_String.SetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d18640
	struct FString GetCachedValue(); // Function GameLogicRuntime.GameLogicVar_String.GetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d17fc0
};

// Class GameLogicRuntime.GameLogicVar_Timer
// Size: 0x60 (Inherited: 0x40)
struct UGameLogicVar_Timer : UGameLogicBoolBase {
	char pad_40[0x20]; // 0x40(0x20)

	void TimerExpired(); // Function GameLogicRuntime.GameLogicVar_Timer.TimerExpired // (Final|Native|Public) // @ game+0x5d18a40
	void SetTimerValue(float Value); // Function GameLogicRuntime.GameLogicVar_Timer.SetTimerValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d18880
	void SetTimerPause(bool bInPaused); // Function GameLogicRuntime.GameLogicVar_Timer.SetTimerPause // (Final|Native|Public|BlueprintCallable) // @ game+0x5d187f0
	void SetCachedValue(bool bValue); // Function GameLogicRuntime.GameLogicVar_Timer.SetCachedValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d183d0
	bool IsTimerPaused(); // Function GameLogicRuntime.GameLogicVar_Timer.IsTimerPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x5d18190
	float GetTimerValue(); // Function GameLogicRuntime.GameLogicVar_Timer.GetTimerValue // (Final|Native|Public|BlueprintCallable) // @ game+0x5d18080
};

