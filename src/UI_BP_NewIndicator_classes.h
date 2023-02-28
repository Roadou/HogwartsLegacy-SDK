// WidgetBlueprintGeneratedClass UI_BP_NewIndicator.UI_BP_NewIndicator_C
// Size: 0x281 (Inherited: 0x268)
struct UUI_BP_NewIndicator_C : UUserWidget {
	struct UWidgetAnimation* NewPulse; // 0x268(0x08)
	struct UWidgetAnimation* ShowNewIndicator; // 0x270(0x08)
	struct UCanvasPanel* NewItem; // 0x278(0x08)
	bool IsShowing; // 0x280(0x01)

	void StopPulse(); // Function UI_BP_NewIndicator.UI_BP_NewIndicator_C.StopPulse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideAnimationFinished(); // Function UI_BP_NewIndicator.UI_BP_NewIndicator_C.HideAnimationFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideNewItem(); // Function UI_BP_NewIndicator.UI_BP_NewIndicator_C.HideNewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PulseNewIcon(); // Function UI_BP_NewIndicator.UI_BP_NewIndicator_C.PulseNewIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowNewItem(); // Function UI_BP_NewIndicator.UI_BP_NewIndicator_C.ShowNewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

