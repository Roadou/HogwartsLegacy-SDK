// WidgetBlueprintGeneratedClass UI_BP_Salon.UI_BP_Salon_C
// Size: 0x539 (Inherited: 0x370)
struct UUI_BP_Salon_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* hideSalon; // 0x378(0x08)
	struct UWidgetAnimation* showSalon; // 0x380(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncComplexion; // 0x388(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncEyebrows; // 0x390(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncHair; // 0x398(0x08)
	struct UUI_BP_BackgroundSmoke_C* backgroundSmoke; // 0x3a0(0x08)
	struct UAsyncWidgetSwitcher* creatorSwitcher; // 0x3a8(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x3b0(0x08)
	struct UUI_BP_MoneyBar_C* moneyBar; // 0x3b8(0x08)
	struct UUI_BP_FG_CategoryNavBarHorizontal_C* NavBarHorizontal; // 0x3c0(0x08)
	struct UScaleBox* SalonScaleBox; // 0x3c8(0x08)
	struct UPhoenixTextBlock* sectionText; // 0x3d0(0x08)
	int32_t PageIndex; // 0x3d8(0x04)
	enum class EGenderEnum GenderRig; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	struct TArray<struct UUI_BP_AsyncLoadWrapper_C*> CustomizationPages; // 0x3e0(0x10)
	struct ULegendItem* LegendItemConfirm; // 0x3f0(0x08)
	struct UCustomizableCharacterComponent* PlayerCustomizationComponent; // 0x3f8(0x08)
	struct ACharacter* CachedPlayer; // 0x400(0x08)
	struct TMap<enum class EAvatarPresetType, struct TSoftObjectPtr<UAvatarPresetDefinition>> CurrentActivePresets; // 0x408(0x50)
	struct FMulticastInlineDelegate PresetSelected; // 0x458(0x10)
	struct FMulticastInlineDelegate ChangesConfirmed; // 0x468(0x10)
	struct FMulticastInlineDelegate ChangesDiscarded; // 0x478(0x10)
	struct TMap<enum class EAvatarPresetType, struct TSoftObjectPtr<UAvatarPresetDefinition>> NewPresets; // 0x488(0x50)
	bool InitialLoadComplete; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct TArray<struct FString> CustomizationPagesTitleKey; // 0x4e0(0x10)
	int32_t CurrentMoney; // 0x4f0(0x04)
	int32_t SalonCost; // 0x4f4(0x04)
	struct FString CachedHeadAppearance; // 0x4f8(0x10)
	struct FString CachedFaceAppearance; // 0x508(0x10)
	int32_t HoveredNavBarIndex; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct ULegendItem* LegendItemSelect; // 0x520(0x08)
	struct ULegendItem* LegendItemNotEnoughFunds; // 0x528(0x08)
	struct ULegendItem* LegendItemBack; // 0x530(0x08)
	bool ShouldDiscardChanges; // 0x538(0x01)

	void SequenceEvent__ENTRYPOINTUI_BP_Salon_2(); // Function UI_BP_Salon.UI_BP_Salon_C.SequenceEvent__ENTRYPOINTUI_BP_Salon_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_Salon_1(); // Function UI_BP_Salon.UI_BP_Salon_C.SequenceEvent__ENTRYPOINTUI_BP_Salon_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScrollSelectedItemIntoView(int32_t PageIndex); // Function UI_BP_Salon.UI_BP_Salon_C.ScrollSelectedItemIntoView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustForViewportWidth(); // Function UI_BP_Salon.UI_BP_Salon_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RestoreInitialGearAppearances(); // Function UI_BP_Salon.UI_BP_Salon_C.RestoreInitialGearAppearances // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EquipInvisibleGearAppearances(); // Function UI_BP_Salon.UI_BP_Salon_C.EquipInvisibleGearAppearances // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConfirmButtonHoldReleased(struct ULegendItem* LegendItem, bool HoldWasCompleted); // Function UI_BP_Salon.UI_BP_Salon_C.ConfirmButtonHoldReleased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitLegend(); // Function UI_BP_Salon.UI_BP_Salon_C.InitLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshTitleKey(); // Function UI_BP_Salon.UI_BP_Salon_C.RefreshTitleKey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_Salon.UI_BP_Salon_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void VO_OnExitMenu(); // Function UI_BP_Salon.UI_BP_Salon_C.VO_OnExitMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnItemPurchasedFailedNoMoney(); // Function UI_BP_Salon.UI_BP_Salon_C.VO_OnItemPurchasedFailedNoMoney // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnLeavePreview(); // Function UI_BP_Salon.UI_BP_Salon_C.VO_OnLeavePreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnGearPreview(); // Function UI_BP_Salon.UI_BP_Salon_C.VO_OnGearPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnItemPurchased(); // Function UI_BP_Salon.UI_BP_Salon_C.VO_OnItemPurchased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VO_OnEnterVendor(); // Function UI_BP_Salon.UI_BP_Salon_C.VO_OnEnterVendor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_Salon.UI_BP_Salon_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DiscardChanges(); // Function UI_BP_Salon.UI_BP_Salon_C.DiscardChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConfirmChanges(); // Function UI_BP_Salon.UI_BP_Salon_C.ConfirmChanges // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCurrentPreset(enum class EAvatarPresetType PresetType, struct FName PresetId); // Function UI_BP_Salon.UI_BP_Salon_C.UpdateCurrentPreset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdatePreviewActor(enum class EAvatarPresetType PresetType, struct FName PresetName); // Function UI_BP_Salon.UI_BP_Salon_C.UpdatePreviewActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void On Preset Selected(enum class EAvatarPresetType PresetType, struct FString PrestName); // Function UI_BP_Salon.UI_BP_Salon_C.On Preset Selected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AvatarPresetDefinitionsMapToStringMaps(struct TMap<enum class EAvatarPresetType, struct TSoftObjectPtr<UAvatarPresetDefinition>> AvatarPresetDefinitionsMap, struct TMap<struct FString, struct FString>& OutMap); // Function UI_BP_Salon.UI_BP_Salon_C.AvatarPresetDefinitionsMapToStringMaps // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChildPageLoaded(struct UAsyncLoadWrapper* Child); // Function UI_BP_Salon.UI_BP_Salon_C.ChildPageLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Category Switch(int32_t NewIndex); // Function UI_BP_Salon.UI_BP_Salon_C.Category Switch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToPage(int32_t PageIndex); // Function UI_BP_Salon.UI_BP_Salon_C.GoToPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartBackgroundSmokeOutro(); // Function UI_BP_Salon.UI_BP_Salon_C.StartBackgroundSmokeOutro // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Salon.UI_BP_Salon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PresetButtonClicked(struct UObject* Caller, struct FString String); // Function UI_BP_Salon.UI_BP_Salon_C.PresetButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInitialized(); // Function UI_BP_Salon.UI_BP_Salon_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_Salon.UI_BP_Salon_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_Salon.UI_BP_Salon_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_Salon.UI_BP_Salon_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StartBackgroundSmokeIntro(); // Function UI_BP_Salon.UI_BP_Salon_C.StartBackgroundSmokeIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_Salon.UI_BP_Salon_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Salon_AsyncHair_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_AsyncHair_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Salon_AsyncEyebrows_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_AsyncEyebrows_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Salon_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Salon_creatorSwitcher_K2Node_ComponentBoundEvent_4_WidgetActiveEvent__DelegateSignature(struct UUserWidget* ActiveWidget); // Function UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_creatorSwitcher_K2Node_ComponentBoundEvent_4_WidgetActiveEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_5_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex); // Function UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_5_ChangedCategory__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_1_HoveredCategory__DelegateSignature(int32_t ButtonIndex, struct UIconButtonWidget* CategoryButton); // Function UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_1_HoveredCategory__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Salon(int32_t EntryPoint); // Function UI_BP_Salon.UI_BP_Salon_C.ExecuteUbergraph_UI_BP_Salon // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PresetSelected__DelegateSignature(enum class EAvatarPresetType PresetType, struct FString PresetName); // Function UI_BP_Salon.UI_BP_Salon_C.PresetSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChangesDiscarded__DelegateSignature(); // Function UI_BP_Salon.UI_BP_Salon_C.ChangesDiscarded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChangesConfirmed__DelegateSignature(); // Function UI_BP_Salon.UI_BP_Salon_C.ChangesConfirmed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

