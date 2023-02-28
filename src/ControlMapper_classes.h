// Class ControlMapper.BaseWatcher
// Size: 0x110 (Inherited: 0x28)
struct UBaseWatcher : UObject {
	char pad_28[0x90]; // 0x28(0x90)
	struct UWatcherRecord* WatcherRecord; // 0xb8(0x08)
	char pad_C0[0x50]; // 0xc0(0x50)

	void FiltersHaveChanged(bool bNewResult); // Function ControlMapper.BaseWatcher.FiltersHaveChanged // (Native|Public) // @ game+0x5d23920
};

// Class ControlMapper.ButtonWatcher
// Size: 0x158 (Inherited: 0x110)
struct UButtonWatcher : UBaseWatcher {
	char pad_110[0x48]; // 0x110(0x48)

	void ModifierChanged(bool NewResult); // Function ControlMapper.ButtonWatcher.ModifierChanged // (Native|Public) // @ game+0x5d23f70
	void FlushQueuedActions(struct UWatcherRecord* InWatcherRecord); // Function ControlMapper.ButtonWatcher.FlushQueuedActions // (Final|Native|Public) // @ game+0x5d239b0
	void ExpressionChanged(bool NewResult); // Function ControlMapper.ButtonWatcher.ExpressionChanged // (Native|Public) // @ game+0x58b66f0
	void ButtonReleased(); // Function ControlMapper.ButtonWatcher.ButtonReleased // (Native|Public) // @ game+0x235e2c0
	void ButtonPressed(); // Function ControlMapper.ButtonWatcher.ButtonPressed // (Native|Public) // @ game+0x235e2e0
	void ActionInitiate(); // Function ControlMapper.ButtonWatcher.ActionInitiate // (Native|Public) // @ game+0x24b2950
	void ActionCancel(); // Function ControlMapper.ButtonWatcher.ActionCancel // (Native|Public) // @ game+0x24b25f0
};

// Class ControlMapper.TimedButtonWatcher
// Size: 0x160 (Inherited: 0x158)
struct UTimedButtonWatcher : UButtonWatcher {
	char pad_158[0x8]; // 0x158(0x08)

	void SetChargeTime(float InChargeTime); // Function ControlMapper.TimedButtonWatcher.SetChargeTime // (Native|Public) // @ game+0x5d240d0
	float RestoreChargeTime(); // Function ControlMapper.TimedButtonWatcher.RestoreChargeTime // (Native|Public) // @ game+0x5d24090
	void ActionStop(); // Function ControlMapper.TimedButtonWatcher.ActionStop // (Native|Public) // @ game+0x5d23360
};

// Class ControlMapper.WatcherRecord
// Size: 0x58 (Inherited: 0x28)
struct UWatcherRecord : UObject {
	struct TArray<struct FInputFilter> LogicFilters; // 0x28(0x10)
	bool bRequireControlReleaseBeforeActionPressed; // 0x38(0x01)
	bool bFilterMustBeTrueAtActionPressed; // 0x39(0x01)
	bool bFilterMustBeTrueAtActionReleased; // 0x3a(0x01)
	bool bActionPressedMustHaveBeenSentToSendActionReleased; // 0x3b(0x01)
	bool bRequireRepressAfterCancel; // 0x3c(0x01)
	bool bExecuteWhenPaused; // 0x3d(0x01)
	bool bModifierRequired; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
	struct FName_GameLogicExpression ModifierName; // 0x40(0x08)
	bool bRequiredModifierValue; // 0x48(0x01)
	char pad_49[0xf]; // 0x49(0x0f)
};

// Class ControlMapper.ButtonWatcherRecord
// Size: 0x58 (Inherited: 0x58)
struct UButtonWatcherRecord : UWatcherRecord {
};

// Class ControlMapper.TimedButtonWatcherRecord
// Size: 0x60 (Inherited: 0x58)
struct UTimedButtonWatcherRecord : UButtonWatcherRecord {
	float ChargeTime; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class ControlMapper.ControlMapperPlayerInput
// Size: 0x3b8 (Inherited: 0x3a8)
struct UControlMapperPlayerInput : UPlayerInput {
	char pad_3A8[0x10]; // 0x3a8(0x10)
};

// Class ControlMapper.StickWatcher
// Size: 0x130 (Inherited: 0x110)
struct UStickWatcher : UBaseWatcher {
	char pad_110[0x20]; // 0x110(0x20)

	void StickY(float AxisVal); // Function ControlMapper.StickWatcher.StickY // (Native|Public) // @ game+0x5d24400
	void StickX(float AxisVal); // Function ControlMapper.StickWatcher.StickX // (Native|Public) // @ game+0x5d24370
	struct FVector2D GetInputAxes(); // Function ControlMapper.StickWatcher.GetInputAxes // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5d23e40
	void ActionStop(); // Function ControlMapper.StickWatcher.ActionStop // (Native|Public) // @ game+0x235e2c0
	void ActionStart(); // Function ControlMapper.StickWatcher.ActionStart // (Native|Public) // @ game+0x235e2e0
	void ActionCancel(); // Function ControlMapper.StickWatcher.ActionCancel // (Native|Public) // @ game+0x24b2950
};

// Class ControlMapper.StickWatcherRecord
// Size: 0x60 (Inherited: 0x58)
struct UStickWatcherRecord : UWatcherRecord {
	struct UCurveFloat* StickMagCurve; // 0x58(0x08)
};

// Class ControlMapper.AnalogButtonWatcher
// Size: 0x160 (Inherited: 0x158)
struct UAnalogButtonWatcher : UButtonWatcher {
	char pad_158[0x8]; // 0x158(0x08)

	void AnalogValue(float AxisVal); // Function ControlMapper.AnalogButtonWatcher.AnalogValue // (Native|Public) // @ game+0x5d23410
};

// Class ControlMapper.AnalogButtonWatcherRecord
// Size: 0x60 (Inherited: 0x58)
struct UAnalogButtonWatcherRecord : UButtonWatcherRecord {
	float PressedValue; // 0x58(0x04)
	float ReleasedValue; // 0x5c(0x04)
};

// Class ControlMapper.ContextFilterComponent
// Size: 0x140 (Inherited: 0xd0)
struct UContextFilterComponent : UGameLogicComponent {
	struct TArray<struct FName> StartingContexts; // 0xd0(0x10)
	char pad_E0[0x60]; // 0xe0(0x60)

	void SetContextOnActor(struct AActor* InActor, struct FInputContextWithType Context, bool bFlag); // Function ControlMapper.ContextFilterComponent.SetContextOnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d24250
	void SetContext(struct FInputContextWithType Context, bool bFlag); // Function ControlMapper.ContextFilterComponent.SetContext // (Final|Native|Public|BlueprintCallable) // @ game+0x5d24160
	void RemoveFilter(struct FInputFilter& InFilter); // Function ControlMapper.ContextFilterComponent.RemoveFilter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d24000
	bool GetContextOnActor(struct AActor* InActor, struct FInputContextWithType Context); // Function ControlMapper.ContextFilterComponent.GetContextOnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d23c50
	bool GetContext(struct FInputContextWithType Context); // Function ControlMapper.ContextFilterComponent.GetContext // (Final|Native|Public|BlueprintCallable) // @ game+0x5d23b90
	bool EvaluateFilterOnActor(struct AActor* InActor, struct FInputFilter InputFilter); // Function ControlMapper.ContextFilterComponent.EvaluateFilterOnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d23850
	bool EvaluateFilter(struct FInputFilter& InFilter); // Function ControlMapper.ContextFilterComponent.EvaluateFilter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d237b0
	void ClearContextOnActor(struct AActor* InActor, struct FInputContextWithType Context); // Function ControlMapper.ContextFilterComponent.ClearContextOnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d23550
	void ClearContext(struct FInputContextWithType Context); // Function ControlMapper.ContextFilterComponent.ClearContext // (Final|Native|Public|BlueprintCallable) // @ game+0x5d234a0
	void AddFilter(struct FInputFilter& InFilter); // Function ControlMapper.ContextFilterComponent.AddFilter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d23380
};

// Class ControlMapper.ControlMapperBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UControlMapperBPFunctionLibrary : UBlueprintFunctionLibrary {

	float GetInputAxisValue(struct AActor* InputComponentOwner, struct FName InputAxisName); // Function ControlMapper.ControlMapperBPFunctionLibrary.GetInputAxisValue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d23e80
	void EnableCustomInput(struct UObject* InputReceiver, struct UInputComponent* InputComponent); // Function ControlMapper.ControlMapperBPFunctionLibrary.EnableCustomInput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d236f0
	void DisableCustomInput(struct UObject* InputReceiver, struct UInputComponent* InputComponent); // Function ControlMapper.ControlMapperBPFunctionLibrary.DisableCustomInput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d23630
};

// Class ControlMapper.ControlMapperSettings
// Size: 0xd0 (Inherited: 0x28)
struct UControlMapperSettings : UObject {
	struct FName_GameLogicRealm UsesRealm; // 0x28(0x08)
	struct TMap<struct FName_ControlMapperAction, struct FActionToGameLogicInfo> ActionToGameLogicBool; // 0x30(0x50)
	struct TMap<struct FName_ControlMapperAxis, struct FAxisToGameLogicInfo> AxisToGameLogicBool; // 0x80(0x50)
};

// Class ControlMapper.CustomInputDelegateBinding
// Size: 0x28 (Inherited: 0x28)
struct UCustomInputDelegateBinding : UInputDelegateBinding {
};

// Class ControlMapper.CustomAnalogInputActionDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UCustomAnalogInputActionDelegateBinding : UCustomInputDelegateBinding {
	struct TArray<struct FCustomBlueprintAnalogInputDelegateBinding> InputActionDelegateBindings; // 0x28(0x10)
};

// Class ControlMapper.CustomInputActionDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UCustomInputActionDelegateBinding : UCustomInputDelegateBinding {
	struct TArray<struct FCustomBlueprintInputDelegateBinding> InputActionDelegateBindings; // 0x28(0x10)
};

// Class ControlMapper.CustomInputAxisDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UCustomInputAxisDelegateBinding : UCustomInputDelegateBinding {
	struct TArray<struct FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28(0x10)
};

// Class ControlMapper.CustomStickInputActionDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UCustomStickInputActionDelegateBinding : UCustomInputDelegateBinding {
	struct TArray<struct FCustomBlueprintStickInputDelegateBinding> InputActionDelegateBindings; // 0x28(0x10)
};

// Class ControlMapper.InputToGameLogic
// Size: 0x30 (Inherited: 0x28)
struct UInputToGameLogic : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void InputFlushed(); // Function ControlMapper.InputToGameLogic.InputFlushed // (Final|Native|Public) // @ game+0x5d23f50
};

// Class ControlMapper.ActionToGameLogic
// Size: 0x40 (Inherited: 0x30)
struct UActionToGameLogic : UInputToGameLogic {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class ControlMapper.AxisToGameLogic
// Size: 0x50 (Inherited: 0x30)
struct UAxisToGameLogic : UInputToGameLogic {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class ControlMapper.InputWatcherComponent
// Size: 0x1f0 (Inherited: 0x150)
struct UInputWatcherComponent : UInputComponent {
	struct TArray<struct UBaseWatcher*> Watchers; // 0x150(0x10)
	char pad_160[0x28]; // 0x160(0x28)
	struct TMap<struct FName, struct UInputToGameLogic*> InputToGameLogicMap; // 0x188(0x50)
	struct TArray<struct UBaseWatcher*> UpdateWatcherList; // 0x1d8(0x10)
	struct UGameLogicObject* GameLogicObject; // 0x1e8(0x08)

	struct UGameLogicObject* GetGameLogicObject(); // Function ControlMapper.InputWatcherComponent.GetGameLogicObject // (Final|Native|Public|BlueprintCallable) // @ game+0x5d23e10
	struct FVector2D GetFlickDirection(struct AActor* Owner, struct UStickFlickWatcherRecord* StickFlickWatcherRecord); // Function ControlMapper.InputWatcherComponent.GetFlickDirection // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d23d40
	void FlushQueuedActionsOnOwner(struct AActor* Owner, struct UWatcherRecord* InWatcherRecord); // Function ControlMapper.InputWatcherComponent.FlushQueuedActionsOnOwner // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d23ad0
	void FlushQueuedActions(struct UWatcherRecord* InWatcherRecord); // Function ControlMapper.InputWatcherComponent.FlushQueuedActions // (Final|Native|Public|BlueprintCallable) // @ game+0x5d23a40
};

// Class ControlMapper.StickFlickWatcher
// Size: 0x148 (Inherited: 0x130)
struct UStickFlickWatcher : UStickWatcher {
	char pad_130[0x18]; // 0x130(0x18)
};

// Class ControlMapper.StickFlickWatcherRecord
// Size: 0x70 (Inherited: 0x60)
struct UStickFlickWatcherRecord : UStickWatcherRecord {
	float PreFlickRestTime; // 0x60(0x04)
	float MaxTime; // 0x64(0x04)
	float MinMagnitude; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

