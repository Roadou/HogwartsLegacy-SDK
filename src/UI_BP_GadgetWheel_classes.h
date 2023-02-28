// WidgetBlueprintGeneratedClass UI_BP_GadgetWheel.UI_BP_GadgetWheel_C
// Size: 0x581 (Inherited: 0x328)
struct UUI_BP_GadgetWheel_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* ShowRecipe; // 0x330(0x08)
	struct UWidgetAnimation* showDetails; // 0x338(0x08)
	struct UWidgetAnimation* OutroAnimation; // 0x340(0x08)
	struct UWidgetAnimation* IntroAnimation; // 0x348(0x08)
	struct UHorizontalBox* brewDetails; // 0x350(0x08)
	struct UPhoenixTextBlock* brewLabel; // 0x358(0x08)
	struct UUI_BP_GadgetWheel_StandaloneItem_C* BroomButton; // 0x360(0x08)
	struct UPhoenixRichTextBlock* ButtonPrompt; // 0x368(0x08)
	struct UBorder* detailsBorder; // 0x370(0x08)
	struct UVerticalBox* DurationDetailBox_2; // 0x378(0x08)
	struct UPhoenixTextBlock* durationLabel; // 0x380(0x08)
	struct UUI_BP_GadgetWheelItem_C* FelixFelicisButton; // 0x388(0x08)
	struct UCanvasPanel* FelixFelicisPanel; // 0x390(0x08)
	struct UUI_BP_GadgetWheel_StandaloneItem_C* FlyingMountButton; // 0x398(0x08)
	struct UUI_BP_GadgetWheel_StandaloneItem_C* GroundMountButton; // 0x3a0(0x08)
	struct UUI_BP_IngredientRequirement_C* ingredient1; // 0x3a8(0x08)
	struct UUI_BP_IngredientRequirement_C* ingredient2; // 0x3b0(0x08)
	struct UUI_BP_IngredientRequirement_C* ingredient3; // 0x3b8(0x08)
	struct UVerticalBox* ingredientsList; // 0x3c0(0x08)
	struct UUI_BP_GadgetWheelItem_C* ItemBL; // 0x3c8(0x08)
	struct UUI_BP_GadgetWheelItem_C* ItemBottom; // 0x3d0(0x08)
	struct UUI_BP_GadgetWheelItem_C* ItemBR; // 0x3d8(0x08)
	struct UUI_BP_GadgetWheelItem_C* ItemLeft; // 0x3e0(0x08)
	struct UPhoenixTextBlock* ItemNameText; // 0x3e8(0x08)
	struct UUI_BP_GadgetWheelItem_C* ItemRight; // 0x3f0(0x08)
	struct UUI_BP_GadgetWheelItem_C* ItemTL; // 0x3f8(0x08)
	struct UUI_BP_GadgetWheelItem_C* ItemTop; // 0x400(0x08)
	struct UUI_BP_GadgetWheelItem_C* ItemTR; // 0x408(0x08)
	struct UPhoenixTextBlock* potionDuration; // 0x410(0x08)
	struct UVerticalBox* potionsInfo; // 0x418(0x08)
	struct UBorder* potionsRecipe; // 0x420(0x08)
	struct UPhoenixTextBlock* recipeTitle; // 0x428(0x08)
	struct UPhoenixRichTextBlock* ReleaseText; // 0x430(0x08)
	struct UPhoenixRichTextBlock* StickImage; // 0x438(0x08)
	struct UPhoenixTextBlock* Time; // 0x440(0x08)
	struct UPhoenixTextBlock* UnlockHintText; // 0x448(0x08)
	struct UBorder* WheelBorder; // 0x450(0x08)
	struct UCanvasPanel* WheelCanvasPanel; // 0x458(0x08)
	struct UPhoenixTextBlock* Yield; // 0x460(0x08)
	struct UPhoenixTextBlock* yieldLabel; // 0x468(0x08)
	float StickDeadZone; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct UUI_BP_GadgetWheelItem_C* SelectedWheelItem; // 0x478(0x08)
	struct UUI_BP_GadgetWheelItem_C* LastSelectedWheelItem; // 0x480(0x08)
	struct TArray<struct FName> GadgetItems; // 0x488(0x10)
	struct TArray<struct FName> ItemRecipeLocks; // 0x498(0x10)
	struct FMulticastInlineDelegate ForceCloseUI; // 0x4a8(0x10)
	struct TArray<struct FName> ItemPickupLocks; // 0x4b8(0x10)
	struct TArray<struct UUI_BP_GadgetWheelItem_C*> WheelItemArray; // 0x4c8(0x10)
	struct TArray<struct UUI_BP_GadgetWheel_StandaloneItem_C*> MountItemArray; // 0x4d8(0x10)
	struct UUI_BP_GadgetWheel_StandaloneItem_C* SelectedMountItem; // 0x4e8(0x08)
	bool PlayerOnGround; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct TMap<struct UUI_BP_GadgetWheelItem_C*, bool> UnlockMessageSideMap; // 0x4f8(0x50)
	bool DetailsShowing; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct TArray<struct UUI_BP_IngredientRequirement_C*> PotionIngredientArray; // 0x550(0x10)
	bool RecipeShowing; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float UnselectedTime; // 0x564(0x04)
	float FFButtonHoldTime; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct FMulticastInlineDelegate ResetFFTimer; // 0x570(0x10)
	bool FelixFelicisAvailable; // 0x580(0x01)

	void CanMountCreature(bool& Result); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.CanMountCreature // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void CheckForItemChangeForMenuReader(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.CheckForItemChangeForMenuReader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void HandleButtonReleased(enum class EUMGInputAction InputAction, bool& Handled); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.HandleButtonReleased // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DelayedClearHighlight(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.DelayedClearHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowPotionRecipePanel(struct FName ItemId, bool& ShowRecipe); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.ShowPotionRecipePanel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update Lock Message(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Update Lock Message // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemsHoverable(bool EnableHover); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.SetItemsHoverable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Unbind Cursor Events(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Unbind Cursor Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Confirm Item Selection(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Confirm Item Selection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Bind Cursor Events(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Bind Cursor Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Handle Cursor Mount Selection(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Handle Cursor Mount Selection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Populate Item Arrays(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Populate Item Arrays // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Active Item Text(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Set Active Item Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Handle Cursor Wheel Selection(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Handle Cursor Wheel Selection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Handle Stick Selection(struct FVector2D StickVal, float InputPin); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Handle Stick Selection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Enable Cursor if Required(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Enable Cursor if Required // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResolveSelectedMountBroom(struct UUI_BP_GadgetWheel_StandaloneItem_C* SelectedItem, struct FName HolderID, bool& Success); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.ResolveSelectedMountBroom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindSlottedBroomMountItem(struct FName HolderID, bool& FoundItem, struct FName& ItemName); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.FindSlottedBroomMountItem // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStandaloneButtonData(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.SetStandaloneButtonData // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveStickImage(struct FVector2D StickVal); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.MoveStickImage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Resolve Selected Wheel Item(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Resolve Selected Wheel Item // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetWheelData(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.SetWheelData // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetItemForAngle(float StickAngle, struct UUI_BP_GadgetWheelItem_C*& Item); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.GetItemForAngle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintConsolidatedUMGInputAxis(struct FUMGConsolidatedAxisInputData& AxisInputData); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.BlueprintConsolidatedUMGInputAxis // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideDetailsComplete(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.HideDetailsComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnResetFFButtonHold(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.OnResetFFButtonHold // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_GadgetWheel(int32_t EntryPoint); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.ExecuteUbergraph_UI_BP_GadgetWheel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void ResetFFTimer__DelegateSignature(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.ResetFFTimer__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceCloseUI__DelegateSignature(); // Function UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.ForceCloseUI__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

