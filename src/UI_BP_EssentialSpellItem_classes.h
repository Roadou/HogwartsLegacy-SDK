// WidgetBlueprintGeneratedClass UI_BP_EssentialSpellItem.UI_BP_EssentialSpellItem_C
// Size: 0x520 (Inherited: 0x4a8)
struct UUI_BP_EssentialSpellItem_C : UIconButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* OnHover; // 0x4b0(0x08)
	struct UPhoenixImage* itemBorder; // 0x4b8(0x08)
	struct UButton* ItemButton; // 0x4c0(0x08)
	struct UPhoenixImage* lockOverlay; // 0x4c8(0x08)
	struct UImage* spellLock; // 0x4d0(0x08)
	struct FMulticastInlineDelegate OnEssentialItemHovered; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnEssentialItemUnhovered; // 0x4e8(0x10)
	struct UUserWidget* ParentWidget; // 0x4f8(0x08)
	bool IsButtonSelected; // 0x500(0x01)
	bool itemIsUnlocked; // 0x501(0x01)
	char pad_502[0x6]; // 0x502(0x06)
	struct FString ItemId; // 0x508(0x10)
	struct FName LockId; // 0x518(0x08)

	void SetLockedState(bool IsUnlocked); // Function UI_BP_EssentialSpellItem.UI_BP_EssentialSpellItem_C.SetLockedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetEssentialSpellIcon(struct FString newIcon); // Function UI_BP_EssentialSpellItem.UI_BP_EssentialSpellItem_C.SetEssentialSpellIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_EssentialSpellItem.UI_BP_EssentialSpellItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_EssentialSpellItem_itemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_EssentialSpellItem.UI_BP_EssentialSpellItem_C.BndEvt__UI_BP_EssentialSpellItem_itemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_EssentialSpellItem_itemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_EssentialSpellItem.UI_BP_EssentialSpellItem_C.BndEvt__UI_BP_EssentialSpellItem_itemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_EssentialSpellItem.UI_BP_EssentialSpellItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_EssentialSpellItem(int32_t EntryPoint); // Function UI_BP_EssentialSpellItem.UI_BP_EssentialSpellItem_C.ExecuteUbergraph_UI_BP_EssentialSpellItem // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnEssentialItemUnhovered__DelegateSignature(); // Function UI_BP_EssentialSpellItem.UI_BP_EssentialSpellItem_C.OnEssentialItemUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEssentialItemHovered__DelegateSignature(struct UUI_BP_EssentialSpellItem_C* essentialItem); // Function UI_BP_EssentialSpellItem.UI_BP_EssentialSpellItem_C.OnEssentialItemHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

