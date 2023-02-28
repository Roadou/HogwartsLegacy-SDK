// WidgetBlueprintGeneratedClass UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C
// Size: 0x3c8 (Inherited: 0x370)
struct UUI_BP_RevelioPageNotification_C : URevelioPageScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* hideRevelioCard; // 0x378(0x08)
	struct UWidgetAnimation* showRevelioCard; // 0x380(0x08)
	struct UImage* categoryIcon; // 0x388(0x08)
	struct UImage* ItemImage; // 0x390(0x08)
	struct UPhoenixTextBlock* ItemName; // 0x398(0x08)
	struct UUI_BP_LegendItem_C* LegendItem; // 0x3a0(0x08)
	struct UPhoenixTextBlock* pageDescription; // 0x3a8(0x08)
	struct UImage* pulseCloud; // 0x3b0(0x08)
	struct UImage* pulseRing; // 0x3b8(0x08)
	struct UPhoenixTextBlock* revelioText; // 0x3c0(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideRevelioNotification(); // Function UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C.HideRevelioNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRevelioItemData(struct FName CollectionID); // Function UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C.SetRevelioItemData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRevelioPageID(struct FName PageID); // Function UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C.SetRevelioPageID // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_RevelioPageNotification(int32_t EntryPoint); // Function UI_BP_RevelioPageNotification.UI_BP_RevelioPageNotification_C.ExecuteUbergraph_UI_BP_RevelioPageNotification // (Final|UbergraphFunction) // @ game+0x38a7480
};

