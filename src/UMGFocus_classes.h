// Class UMGFocus.UMGFocusManager
// Size: 0x30 (Inherited: 0x28)
struct UUMGFocusManager : UObject {
	struct AUMGInputManager* UMGInputManager; // 0x28(0x08)
};

// Class UMGFocus.UMGFocusWidget
// Size: 0x2c8 (Inherited: 0x268)
struct UUMGFocusWidget : UUserWidget {
	int32_t FocusInputPriority; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TArray<enum class EUMGInputAction> FocusInputActions; // 0x270(0x10)
	struct TArray<enum class EUMGInputAxis> FocusInputAxis; // 0x280(0x10)
	struct FUMGConsolidatedAxisInputData ConsolidatedAxisInputData; // 0x290(0x30)
	bool bHasFocus; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)

	void UnregisterUMGInputAxis(enum class EUMGInputAxis InputAxis); // Function UMGFocus.UMGFocusWidget.UnregisterUMGInputAxis // (Final|Native|Public|BlueprintCallable) // @ game+0x1fce690
	void UnregisterUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UMGFocus.UMGFocusWidget.UnregisterUMGInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x1fce4d0
	void UnregisterAllUMGInputAxis(); // Function UMGFocus.UMGFocusWidget.UnregisterAllUMGInputAxis // (Final|Native|Public|BlueprintCallable) // @ game+0x1fce240
	void UnregisterAllUMGInputActions(enum class EInputEvent InputEvent); // Function UMGFocus.UMGFocusWidget.UnregisterAllUMGInputActions // (Final|Native|Public|BlueprintCallable) // @ game+0x1fce1c0
	void RegisterUMGInputAxis(enum class EUMGInputAxis InputAxis); // Function UMGFocus.UMGFocusWidget.RegisterUMGInputAxis // (Final|Native|Public|BlueprintCallable) // @ game+0x1fce140
	void RegisterUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UMGFocus.UMGFocusWidget.RegisterUMGInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x1fcdf80
	void RegisterAllUMGInputAxis(); // Function UMGFocus.UMGFocusWidget.RegisterAllUMGInputAxis // (Final|Native|Public|BlueprintCallable) // @ game+0x1fcdcf0
	void RegisterAllUMGInputActions(enum class EInputEvent InputEvent); // Function UMGFocus.UMGFocusWidget.RegisterAllUMGInputActions // (Final|Native|Public|BlueprintCallable) // @ game+0x1fcdc70
	void LoseFocus(); // Function UMGFocus.UMGFocusWidget.LoseFocus // (Native|Public|BlueprintCallable) // @ game+0x1fcdab0
	bool HasFocus(); // Function UMGFocus.UMGFocusWidget.HasFocus // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fcda80
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UMGFocus.UMGFocusWidget.BlueprintOnUMGInputAction // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusLost(); // Function UMGFocus.UMGFocusWidget.BlueprintFocusLost // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintFocusAcquired(); // Function UMGFocus.UMGFocusWidget.BlueprintFocusAcquired // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintConsolidatedUMGInputAxis(struct FUMGConsolidatedAxisInputData& AxisInputData); // Function UMGFocus.UMGFocusWidget.BlueprintConsolidatedUMGInputAxis // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void AcquireFocus(); // Function UMGFocus.UMGFocusWidget.AcquireFocus // (Native|Public|BlueprintCallable) // @ game+0x1fcd750
};

// Class UMGFocus.UMGInputManager
// Size: 0x390 (Inherited: 0x248)
struct AUMGInputManager : AActor {
	enum class EUMGInputAction ReferenceUMGInputAction; // 0x248(0x01)
	enum class EUMGInputAxis ReferenceUMGInputAxis; // 0x249(0x01)
	char pad_24A[0xa6]; // 0x24a(0xa6)
	struct TMap<struct FUMGInputActionInfo, struct FUMGInputListenerStack> UMGInputActionListeners; // 0x2f0(0x50)
	struct TMap<enum class EUMGInputAxis, struct FUMGInputListenerStack> UMGInputAxisListeners; // 0x340(0x50)

	void UnregisterUMGInputListener(struct FUMGInputListener& InputListener); // Function UMGFocus.UMGInputManager.UnregisterUMGInputListener // (Final|Native|Public|HasOutParms) // @ game+0x1fce710
	void UnregisterUMGInputAxis(struct FUMGInputListener& InputListener, enum class EUMGInputAxis InputAxis); // Function UMGFocus.UMGInputManager.UnregisterUMGInputAxis // (Final|Native|Public|HasOutParms) // @ game+0x1fce5a0
	void UnregisterUMGInputAction(struct FUMGInputListener& InputListener, enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UMGFocus.UMGInputManager.UnregisterUMGInputAction // (Final|Native|Public|HasOutParms) // @ game+0x1fce3b0
	void UnregisterInputAxis(enum class EUMGInputAxis InputAxis); // Function UMGFocus.UMGInputManager.UnregisterInputAxis // (Final|Native|Protected) // @ game+0x1fce330
	void UnregisterInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UMGFocus.UMGInputManager.UnregisterInputAction // (Final|Native|Protected) // @ game+0x1fce260
	void RegisterUMGInputAxis(struct FUMGInputListener& InputListener, enum class EUMGInputAxis InputAxis); // Function UMGFocus.UMGInputManager.RegisterUMGInputAxis // (Final|Native|Public|HasOutParms) // @ game+0x1fce050
	void RegisterUMGInputAction(struct FUMGInputListener& InputListener, enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UMGFocus.UMGInputManager.RegisterUMGInputAction // (Final|Native|Public|HasOutParms) // @ game+0x1fcde60
	void RegisterInputAxis(enum class EUMGInputAxis InputAxis); // Function UMGFocus.UMGInputManager.RegisterInputAxis // (Final|Native|Protected) // @ game+0x1fcdde0
	void RegisterInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UMGFocus.UMGInputManager.RegisterInputAction // (Final|Native|Protected) // @ game+0x1fcdd10
	void OnInputAxis(enum class EUMGInputAxis InputAxis, float AxisValue); // Function UMGFocus.UMGInputManager.OnInputAxis // (Final|Native|Public) // @ game+0x1fcdba0
	void OnInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UMGFocus.UMGInputManager.OnInputAction // (Final|Native|Public) // @ game+0x1fcdad0
	struct FString GetInputAxisEnumValueAsString(enum class EUMGInputAxis InputAxis); // Function UMGFocus.UMGInputManager.GetInputAxisEnumValueAsString // (Final|Native|Public) // @ game+0x1fcd9a0
	struct FString GetInputActionEnumValueAsString(enum class EUMGInputAction InputAction); // Function UMGFocus.UMGInputManager.GetInputActionEnumValueAsString // (Final|Native|Public) // @ game+0x1fcd8c0
	void CreateInputAxisBinding(enum class EUMGInputAxis InputAxis); // Function UMGFocus.UMGInputManager.CreateInputAxisBinding // (Final|Native|Protected) // @ game+0x1fcd840
	void CreateInputActionBinding(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UMGFocus.UMGInputManager.CreateInputActionBinding // (Final|Native|Protected) // @ game+0x1fcd770
};

