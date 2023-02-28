// WidgetBlueprintGeneratedClass UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C
// Size: 0x501 (Inherited: 0x4b0)
struct UUI_BP_SelectionRingItem_C : USelectionRingItemBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UWidgetAnimation* SlotUpdatedAnimation; // 0x4b8(0x08)
	struct UPhoenixImage* itemBack; // 0x4c0(0x08)
	struct UScaleBox* Outline; // 0x4c8(0x08)
	struct FMulticastInlineDelegate OnSpellDropped; // 0x4d0(0x10)
	int32_t directionIndex; // 0x4e0(0x04)
	float renderAngle; // 0x4e4(0x04)
	bool IsDraggable; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct FMulticastInlineDelegate OnDragInitiated; // 0x4f0(0x10)
	enum class ESpellCategory Category; // 0x500(0x01)

	void I_GetIconName(struct FString& IconName); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.I_GetIconName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellCategory(enum class ESpellCategory Category); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.SetSpellCategory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellCategoryColor(enum class ESpellCategory Category); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.SetSpellCategoryColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIconName(struct FString IconName); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.I_SetIconName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetImage(struct FString ImageName); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.I_SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddExtraContent(struct UWidget* NewContent); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.I_AddExtraContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetIconSize(struct FVector2D Size); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.I_SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIconTextureLoaded(struct UTexture2D* Texture, bool IsBlacklisted); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.OnIconTextureLoaded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBackgroundTextureLoaded(struct UTexture2D* Texture, bool IsBlacklisted); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.OnBackgroundTextureLoaded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnShowUpdateVFX(); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.OnShowUpdateVFX // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_SelectionRingItem(int32_t EntryPoint); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.ExecuteUbergraph_UI_BP_SelectionRingItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnDragInitiated__DelegateSignature(); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.OnDragInitiated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellDropped__DelegateSignature(struct FString ItemName); // Function UI_BP_SelectionRingItem.UI_BP_SelectionRingItem_C.OnSpellDropped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

