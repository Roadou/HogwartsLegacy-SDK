// WidgetBlueprintGeneratedClass UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C
// Size: 0x308 (Inherited: 0x2c8)
struct UUI_BP_RotateActorPanel_C : UUMGFocusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	bool IsMouseOver; // 0x2d0(0x01)
	bool IsMouseDragging; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct AActor* ActorToRotate; // 0x2d8(0x08)
	struct FVector2D LastCursorPosition; // 0x2e0(0x08)
	bool RotateLeftKeyHeld; // 0x2e8(0x01)
	bool RotateRightKeyHeld; // 0x2e9(0x01)
	bool InputAxisPressed; // 0x2ea(0x01)
	char pad_2EB[0x1]; // 0x2eb(0x01)
	float RotationDirection; // 0x2ec(0x04)
	float MaxRotationSpeed; // 0x2f0(0x04)
	float CurrentRotationSpeed; // 0x2f4(0x04)
	float RotationSpeedMultiplier; // 0x2f8(0x04)
	float MouseRotationScale; // 0x2fc(0x04)
	float MouseMaxRotationSpeed; // 0x300(0x04)
	float RotationInterpSpeed; // 0x304(0x04)

	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddActorRotation(float DeltaYaw); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.AddActorRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CalculateAnalogInput(float Stick, float LeftTrigger, float RightTrigger, float& AnalogInput); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.CalculateAnalogInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BlueprintConsolidatedUMGInputAxis(struct FUMGConsolidatedAxisInputData& AxisInputData); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.BlueprintConsolidatedUMGInputAxis // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_RotateActorPanel(int32_t EntryPoint); // Function UI_BP_RotateActorPanel.UI_BP_RotateActorPanel_C.ExecuteUbergraph_UI_BP_RotateActorPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

