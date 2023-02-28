// WidgetBlueprintGeneratedClass UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C
// Size: 0x3b0 (Inherited: 0x328)
struct UUI_BP_CreatureStatusWidget_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* InfoPanel_OUT; // 0x330(0x08)
	struct UWidgetAnimation* InfoContent_OUT; // 0x338(0x08)
	struct UPhoenixRichTextBlock* ButtonText_2; // 0x340(0x08)
	struct UPhoenixTextBlock* descriptionText; // 0x348(0x08)
	struct UHorizontalBox* HarvestPrompt; // 0x350(0x08)
	struct UPhoenixTextBlock* Label_2; // 0x358(0x08)
	struct UPhoenixTextBlock* NurtureDescription; // 0x360(0x08)
	struct UPhoenixTextBlock* NurtureText; // 0x368(0x08)
	struct UPhoenixTextBlock* OffspringText; // 0x370(0x08)
	struct UPhoenixTextBlock* PregnancyStatetext; // 0x378(0x08)
	struct UUI_BP_NurtureProgressDiamond_C* PregnancyStatus; // 0x380(0x08)
	struct UPhoenixTextBlock* PregnancyTimeText; // 0x388(0x08)
	struct UUI_BP_CreatureStatusSummary_C* StatusSummary; // 0x390(0x08)
	struct UWidgetSwitcher* StatusWidgetSwitcher; // 0x398(0x08)
	struct UCreatureState* CreatureState; // 0x3a0(0x08)
	struct FName CreatureTypeID; // 0x3a8(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void Update Pregnancy Status(); // Function UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.Update Pregnancy Status // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update Creature Status(); // Function UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.Update Creature Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCreatureState(struct UCreatureState* CreatureState); // Function UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.SetCreatureState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnPregnancyStateChanged(); // Function UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.OnPregnancyStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreatureStatusWidget(int32_t EntryPoint); // Function UI_BP_CreatureStatusWidget.UI_BP_CreatureStatusWidget_C.ExecuteUbergraph_UI_BP_CreatureStatusWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

