// WidgetBlueprintGeneratedClass UI_BP_DraggedSpellIconButton.UI_BP_DraggedSpellIconButton_C
// Size: 0x4e0 (Inherited: 0x4a8)
struct UUI_BP_DraggedSpellIconButton_C : UIconButtonWidget {
	struct UImage* buttonBack_old; // 0x4a8(0x08)
	struct UPhoenixImage* categoryBack; // 0x4b0(0x08)
	struct UCanvasPanel* contentHolder; // 0x4b8(0x08)
	struct UImage* SelectedIcon; // 0x4c0(0x08)
	struct USizeBox* spellSizeBox; // 0x4c8(0x08)
	struct FString Icon Name; // 0x4d0(0x10)

	void SetSpellType(enum class ESpellCategory SpellType); // Function UI_BP_DraggedSpellIconButton.UI_BP_DraggedSpellIconButton_C.SetSpellType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellIcon(struct FString IconName); // Function UI_BP_DraggedSpellIconButton.UI_BP_DraggedSpellIconButton_C.SetSpellIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

