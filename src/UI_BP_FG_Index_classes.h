// WidgetBlueprintGeneratedClass UI_BP_FG_Index.UI_BP_FG_Index_C
// Size: 0x5c8 (Inherited: 0x3d8)
struct UUI_BP_FG_Index_C : UIndex_FG {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* IntroAnimation; // 0x3e0(0x08)
	struct UWidgetAnimation* AmbientBackgroundAnimation; // 0x3e8(0x08)
	struct UWidgetAnimation* TutorialBounce_PlayerLevel; // 0x3f0(0x08)
	struct UUI_BP_FG_ActionsButton_C* ActionsButton; // 0x3f8(0x08)
	struct UPhoenixTextBlock* AvailableAssignments; // 0x400(0x08)
	struct UUI_BP_FieldGuideButton_Collections_C* CollectionsButton; // 0x408(0x08)
	struct UUI_BP_ParallaxWidget_C* crestParallax; // 0x410(0x08)
	struct UUI_BP_FieldGuideButton_Gear_C* GearButton; // 0x418(0x08)
	struct UImage* HouseCrest; // 0x420(0x08)
	struct UUI_BP_FieldGuideButton_Inventory_C* InventoryButton; // 0x428(0x08)
	struct UPhoenixTextBlock* LevelTitle; // 0x430(0x08)
	struct UUI_BP_FieldGuideButton_Map_C* MapButton; // 0x438(0x08)
	struct UUI_BP_FieldGuideButton_Owlpost_C* OwlMailButton; // 0x440(0x08)
	struct UBorder* playerLevelBorder; // 0x448(0x08)
	struct UImage* PlayerLevelHouseCrest; // 0x450(0x08)
	struct UPhoenixTextBlock* playerLevelText; // 0x458(0x08)
	struct UUI_BP_FieldGuideButton_Quests_C* QuestsButton; // 0x460(0x08)
	struct UImage* rayBurst; // 0x468(0x08)
	struct UUI_BP_ParallaxWidget_C* rayburstParallax; // 0x470(0x08)
	struct UUI_BP_FieldGuideButton_Settings_C* SettingsButton; // 0x478(0x08)
	struct UUI_BP_FieldGuideButton_Talents_C* TalentsButton; // 0x480(0x08)
	struct UBorder* TUT_PlayerLevel; // 0x488(0x08)
	struct UBorder* TutorialOverlay; // 0x490(0x08)
	struct UImage* XPFill_Image; // 0x498(0x08)
	struct FMulticastInlineDelegate GearScreenSelected; // 0x4a0(0x10)
	struct FMulticastInlineDelegate InventoryScreenSelected; // 0x4b0(0x10)
	struct FMulticastInlineDelegate TalentsScreenSelected; // 0x4c0(0x10)
	struct FMulticastInlineDelegate SettingsScreenSelected; // 0x4d0(0x10)
	struct FMulticastInlineDelegate MapScreenSelected; // 0x4e0(0x10)
	struct FMulticastInlineDelegate CollectionsScreenSelected; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OwlMailScreenSelected; // 0x500(0x10)
	struct FMulticastInlineDelegate QuestsScreenSelected; // 0x510(0x10)
	struct FMulticastInlineDelegate ActionsScreenSelected; // 0x520(0x10)
	struct FString BookHouseCrest; // 0x530(0x10)
	struct FString ActionMeterHouse; // 0x540(0x10)
	struct FString PlayerLevelFill; // 0x550(0x10)
	struct FString PlayerLevelCrest; // 0x560(0x10)
	struct FLinearColor HouseEffectColor; // 0x570(0x10)
	struct TSoftObjectPtr<UMaterialInstance> HouseCrestMaterial; // 0x580(0x28)
	struct TArray<struct UWidget*> TutorialHighlightWidgets; // 0x5a8(0x10)
	struct FHermesBPDelegateHandle HighlightChallengesHandle; // 0x5b8(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void BringWidgetBelowOverlay(struct UWidget* Widget); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BringWidgetBelowOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BringWidgetAboveOverlay(struct UWidget* Widget); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BringWidgetAboveOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideTutorialOverlay(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.HideTutorialOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowTutorialOverlay(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.ShowTutorialOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateNewItemStatus(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.UpdateNewItemStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideTooltip(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.HideTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowYearTooltip(int32_t Year); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.ShowYearTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPlayerXPLevel(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.SetPlayerXPLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHouseAssets(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.SetHouseAssets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetActionCompletionPct(float Percent); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.SetActionCompletionPct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnGetAvailableAssignments(struct FString DisplayText); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.OnGetAvailableAssignments // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetPlayerLevel(int32_t NewLevel); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.OnSetPlayerLevel // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetActionsPct(float OldPct, float NewPct); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.OnSetActionsPct // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetSchoolPct(float OldPct, float NewPct); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.OnSetSchoolPct // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void GoToPage(struct TArray<struct FString>& DestinationStack); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.GoToPage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSchoolProgressTutorialHighlight(bool ShowHighlight); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.SetSchoolProgressTutorialHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPlayerLevelTutorialHighlight(bool ShowHighlight); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.SetPlayerLevelTutorialHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TutorialSaysHighlightChallenges(struct UObject* Caller); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.TutorialSaysHighlightChallenges // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_1_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_1_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_2_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_2_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_4_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_4_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_5_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_5_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_6_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_6_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_7_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_7_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_16_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_16_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_17_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_17_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_18_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_18_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_19_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_19_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_20_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_20_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_21_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_21_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_22_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_22_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_23_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_23_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_24_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_24_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_25_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_25_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_26_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_26_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_27_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_27_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_28_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_28_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_29_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_29_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_30_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_30_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_31_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_31_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_32_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_32_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_33_ButtonClickDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_33_ButtonClickDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_34_ButtonHoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_34_ButtonHoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_35_ButtonUnhoverDelegate__DelegateSignature(struct UIconButtonWidget* IconButton); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_35_ButtonUnhoverDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ShowIndexIntro(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.ShowIndexIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_Index(int32_t EntryPoint); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.ExecuteUbergraph_UI_BP_FG_Index // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void ActionsScreenSelected__DelegateSignature(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.ActionsScreenSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void QuestsScreenSelected__DelegateSignature(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.QuestsScreenSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OwlMailScreenSelected__DelegateSignature(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.OwlMailScreenSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CollectionsScreenSelected__DelegateSignature(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.CollectionsScreenSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MapScreenSelected__DelegateSignature(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.MapScreenSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SettingsScreenSelected__DelegateSignature(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.SettingsScreenSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TalentsScreenSelected__DelegateSignature(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.TalentsScreenSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InventoryScreenSelected__DelegateSignature(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.InventoryScreenSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GearScreenSelected__DelegateSignature(); // Function UI_BP_FG_Index.UI_BP_FG_Index_C.GearScreenSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

