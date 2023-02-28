// WidgetBlueprintGeneratedClass UI_BP_Skip.UI_BP_Skip_C
// Size: 0x350 (Inherited: 0x328)
struct UUI_BP_Skip_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* HideAnimation; // 0x330(0x08)
	struct UWidgetAnimation* ShowAnimation; // 0x338(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x340(0x08)
	struct FTimerHandle TimerEventHandle; // 0x348(0x08)

	void SequenceEvent__ENTRYPOINTUI_BP_Skip_1(struct UUI_BP_Legend_Horizontal_Screen_C* Legend); // Function UI_BP_Skip.UI_BP_Skip_C.SequenceEvent__ENTRYPOINTUI_BP_Skip_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct ULegendItem* GetSkipLegendItem(); // Function UI_BP_Skip.UI_BP_Skip_C.GetSkipLegendItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Refresh Timer(); // Function UI_BP_Skip.UI_BP_Skip_C.Refresh Timer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Should Animate Forward(struct UWidgetAnimation* InAnimation); // Function UI_BP_Skip.UI_BP_Skip_C.Should Animate Forward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_Skip.UI_BP_Skip_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Skip.UI_BP_Skip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_Skip.UI_BP_Skip_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Show(); // Function UI_BP_Skip.UI_BP_Skip_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hide(); // Function UI_BP_Skip.UI_BP_Skip_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSkipHoldReleased(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_Skip.UI_BP_Skip_C.OnSkipHoldReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLegendHidden(struct UUI_BP_Legend_Horizontal_Screen_C* Legend); // Function UI_BP_Skip.UI_BP_Skip_C.OnLegendHidden // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Skip(int32_t EntryPoint); // Function UI_BP_Skip.UI_BP_Skip_C.ExecuteUbergraph_UI_BP_Skip // (Final|UbergraphFunction) // @ game+0x38a7480
};

