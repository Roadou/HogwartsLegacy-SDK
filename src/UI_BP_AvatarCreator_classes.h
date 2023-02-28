// WidgetBlueprintGeneratedClass UI_BP_AvatarCreator.UI_BP_AvatarCreator_C
// Size: 0x678 (Inherited: 0x370)
struct UUI_BP_AvatarCreator_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* ShowAcceptanceLetter; // 0x378(0x08)
	struct UWidgetAnimation* HideAcceptanceLetter; // 0x380(0x08)
	struct UWidgetAnimation* ShowFinalizeButton; // 0x388(0x08)
	struct UWidgetAnimation* SwitchAnimRB; // 0x390(0x08)
	struct UWidgetAnimation* fadeToIntro; // 0x398(0x08)
	struct UWidgetAnimation* avatarCreated; // 0x3a0(0x08)
	struct UWidgetAnimation* showAvatarCreator; // 0x3a8(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncBody; // 0x3b0(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncComplexion; // 0x3b8(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncEyebrows; // 0x3c0(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncFace; // 0x3c8(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncFinalize; // 0x3d0(0x08)
	struct UUI_BP_AsyncLoadWrapper_C* AsyncHair; // 0x3d8(0x08)
	struct UOverlay* avatarCreatorOverlay; // 0x3e0(0x08)
	struct UUI_BP_SparkleBurst_C* burst1; // 0x3e8(0x08)
	struct UUI_BP_SparkleBurst_C* burst2; // 0x3f0(0x08)
	struct UAsyncWidgetSwitcher* creatorSwitcher; // 0x3f8(0x08)
	struct UUI_BP_MenuFinalized_C* FinalizedButton; // 0x400(0x08)
	struct UPhoenixTextBlock* footerText; // 0x408(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x410(0x08)
	struct UPhoenixTextBlock* letterBody; // 0x418(0x08)
	struct UUI_BP_SparkleBurst_C* letterBurst1; // 0x420(0x08)
	struct UUI_BP_SparkleBurst_C* letterBurst2; // 0x428(0x08)
	struct UUI_BP_FG_CategoryNavBarHorizontal_C* NavBarHorizontal; // 0x430(0x08)
	struct UUI_BP_RotateActorPanel_C* RotateActorPanel; // 0x438(0x08)
	struct UScaleBox* ScaleBox_4; // 0x440(0x08)
	struct UPhoenixTextBlock* sectionText; // 0x448(0x08)
	int32_t PageIndex; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct AUI_BP_DummyActor_C* CharacterModel; // 0x458(0x08)
	enum class EGenderEnum GenderRig; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	struct FName CurrentMaleFullbody; // 0x464(0x08)
	struct FName CurrentFemaleFullbody; // 0x46c(0x08)
	char pad_474[0x4]; // 0x474(0x04)
	struct TMap<enum class EAvatarPresetType, struct TSoftObjectPtr<UAvatarPresetDefinition>> CurrentMalePresets; // 0x478(0x50)
	struct TMap<enum class EAvatarPresetType, struct TSoftObjectPtr<UAvatarPresetDefinition>> CurrentFemalePresets; // 0x4c8(0x50)
	struct TArray<struct UUI_BP_AsyncLoadWrapper_C*> CustomizationPages; // 0x518(0x10)
	struct FMulticastInlineDelegate FinalizeButtonPressed; // 0x528(0x10)
	struct FString CurrentGlasses; // 0x538(0x10)
	struct TArray<struct FName> TEMP_SpellLocks; // 0x548(0x10)
	enum class SocialHeritageStatusIDs CurrentHeritage; // 0x558(0x01)
	enum class EGenderPronoun GenderPronoun; // 0x559(0x01)
	enum class EGenderVoice GenderVoice; // 0x55a(0x01)
	char pad_55B[0x5]; // 0x55b(0x05)
	struct FString FirstName; // 0x560(0x10)
	struct FString lastName; // 0x570(0x10)
	bool CanBackOut; // 0x580(0x01)
	enum class EDifficulty CurrentDifficulty; // 0x581(0x01)
	char pad_582[0x6]; // 0x582(0x06)
	struct TMap<enum class EGenderEnum, struct FVector> GenderToLocationMap; // 0x588(0x50)
	float FemaleZOffset; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct TArray<struct FString> CustomizationPagesTitleKey; // 0x5e0(0x10)
	bool InitialLoadComplete; // 0x5f0(0x01)
	char pad_5F1[0x7]; // 0x5f1(0x07)
	struct FMulticastInlineDelegate CreatorReady; // 0x5f8(0x10)
	struct FString PlayerFullName; // 0x608(0x10)
	int32_t NewPageIndex; // 0x618(0x04)
	struct FVector2D position1; // 0x61c(0x08)
	float MatRef_GlitterSwirls; // 0x624(0x04)
	float MatRef_Erode; // 0x628(0x04)
	float MatRef_Contrast; // 0x62c(0x04)
	float MatRef_Curtain; // 0x630(0x04)
	float MatRef_GlitterSize; // 0x634(0x04)
	struct UUI_BP_CharCreator_Finalize_C* FinalizePage; // 0x638(0x08)
	bool IsFinalizeButtonShowing; // 0x640(0x01)
	char pad_641[0x3]; // 0x641(0x03)
	int32_t HoveredNavBarIndex; // 0x644(0x04)
	bool FirstTabIconsLoaded; // 0x648(0x01)
	bool isLetterShowing; // 0x649(0x01)
	char pad_64A[0x6]; // 0x64a(0x06)
	struct ULegendItem* LegendSelect; // 0x650(0x08)
	struct ULegendItem* LegendBack; // 0x658(0x08)
	struct ULegendItem* LegendStartGame; // 0x660(0x08)
	struct ULegendItem* LegendSliderAdjust; // 0x668(0x08)
	bool InTransition; // 0x670(0x01)
	bool WaitingOnPresetLoad; // 0x671(0x01)
	char pad_672[0x2]; // 0x672(0x02)
	int32_t CurrentVoicePitch; // 0x674(0x04)

	void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_10(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_10 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_9(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_9 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_8(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_8 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_7(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_7 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_6(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_6 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_5(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_4(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_3(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_2(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_1(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Show Avatar Creator If Ready(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.Show Avatar Creator If Ready // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initial Character Loaded(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.Initial Character Loaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetScreenLegend(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SetScreenLegend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTabIconsLoaded(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnTabIconsLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ValidatePlayerName(bool CheckProfanity, struct FString FirstName, struct FString lastName, bool& IsValidName); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.ValidatePlayerName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustForViewportWidth(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.AdjustForViewportWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatorSliderHovered(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.CreatorSliderHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatorItemUnhovered(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.CreatorItemUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatorItemHovered(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.CreatorItemHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void RefreshTitleKey(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.RefreshTitleKey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdatePreviewActorGear(struct FString GearID, enum class EGearSlotIDEnum Slot); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.UpdatePreviewActorGear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AvatarPresetDefinitionsMapToStringMaps(struct TMap<enum class EAvatarPresetType, struct TSoftObjectPtr<UAvatarPresetDefinition>> AvatarPresetDefinitionsMap, struct TMap<struct FString, struct FString>& OutMap); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.AvatarPresetDefinitionsMapToStringMaps // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectDefaultUniform(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SelectDefaultUniform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Character Model(bool& Success); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.Set Character Model // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetActiveFullbody(enum class EGenderEnum Gender, struct FName& CurrentFullbody); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.GetActiveFullbody // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetActivePresets(enum class EGenderEnum Gender, struct TMap<enum class EAvatarPresetType, struct TSoftObjectPtr<UAvatarPresetDefinition>>& CurrentPresets); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.GetActivePresets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GoToPage(int32_t PageIndex); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.GoToPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPresetSelected(enum class EAvatarPresetType PresetType, struct FString PrestName); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnPresetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateChildPages(bool ShouldRefreshIcons); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.UpdateChildPages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void On Body Type Selected(struct FString FullBodyPreset); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.On Body Type Selected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCurrentFullBodyPreset(struct FName FullBodyID); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.UpdateCurrentFullBodyPreset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdatePreviewActorFullBody(struct FName FullBodyPreset); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.UpdatePreviewActorFullBody // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdatePreviewActor(enum class EAvatarPresetType PresetType, struct FName PresetName); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.UpdatePreviewActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdatePreviewActorGender(enum class EGenderEnum Gender); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.UpdatePreviewActorGender // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCurrentPreset(enum class EAvatarPresetType PresetType, struct FName PresetId); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.UpdateCurrentPreset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChildPageLoaded(struct UAsyncLoadWrapper* Child); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.ChildPageLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitializePresetMaps(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.InitializePresetMaps // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CategorySwitch(int32_t NewIndex); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.CategorySwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinalizeCharacter(struct FString PlayerFirstName, struct FString PlayerLastName); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.FinalizeCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RequestCameraPositionChange(int32_t CameraIndex); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.RequestCameraPositionChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetSwitch(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.WidgetSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayBurst1(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.PlayBurst1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayBurst2(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.PlayBurst2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayLetterBurst1(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.PlayLetterBurst1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayLetterBurst2(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.PlayLetterBurst2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowCharacterCreator(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.ShowCharacterCreator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LetterRevealComplete(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.LetterRevealComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LetterHideComplete(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.LetterHideComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BodyButtonClicked(struct UObject* Caller, struct FString String); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BodyButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GenderButtonClicked(struct UObject* Caller, struct FString String); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.GenderButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PresetButtonClicked(struct UObject* Caller, struct FString String); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.PresetButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void VoiceToneSelected(struct UObject* Caller, int32_t int); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.VoiceToneSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GlassesButtonClicked(struct UObject* Caller, struct FString String); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.GlassesButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinalizeClicked(struct UObject* Caller); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.FinalizeClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FirstNameChanged(struct UObject* Caller, struct FString String); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.FirstNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LastNameChanged(struct UObject* Caller, struct FString String); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.LastNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_avatarCreated_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.WidgetAnimationEvt_avatarCreated_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void DifficultyButtonClicked(struct UObject* Caller, int32_t int); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.DifficultyButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_fadeToIntro_K2Node_WidgetAnimationEvent_3(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.WidgetAnimationEvt_fadeToIntro_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCharacterLoaded(struct AActor* Actor); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnCharacterLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_creatorSwitcher_K2Node_ComponentBoundEvent_1_WidgetActiveEvent__DelegateSignature(struct UUserWidget* ActiveWidget); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_creatorSwitcher_K2Node_ComponentBoundEvent_1_WidgetActiveEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_AsyncBody_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncBody_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_AsyncEyebrows_K2Node_ComponentBoundEvent_4_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncEyebrows_K2Node_ComponentBoundEvent_4_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_AsyncFace_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncFace_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_AsyncHair_K2Node_ComponentBoundEvent_6_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncHair_K2Node_ComponentBoundEvent_6_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_AsyncVoice_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncVoice_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_8_HoveredCategory__DelegateSignature(int32_t ButtonIndex, struct UIconButtonWidget* CategoryButton); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_8_HoveredCategory__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_9_UnhoveredCategory__DelegateSignature(int32_t Index, struct UIconButtonWidget* CategoryButton); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_9_UnhoveredCategory__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature(struct UUI_BP_MenuFinalized_C* Button); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_FinalizePage_K2Node_ComponentBoundEvent_12_ActivateFinalizeButton__DelegateSignature(bool Activate); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_FinalizePage_K2Node_ComponentBoundEvent_12_ActivateFinalizeButton__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature(struct UUI_BP_MenuFinalized_C* Button); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_14_MenuTextButtonUnhovered__DelegateSignature(struct UUI_BP_MenuFinalized_C* Button); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_14_MenuTextButtonUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnCharacterLoadComplete(struct AActor* Actor); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnCharacterLoadComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFullBodyPresetLoaded(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnFullBodyPresetLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowLetter(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.ShowLetter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VoicePitchChanged(struct UObject* Caller, int32_t int); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.VoicePitchChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_AvatarCreator(int32_t EntryPoint); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.ExecuteUbergraph_UI_BP_AvatarCreator // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void CreatorReady__DelegateSignature(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.CreatorReady__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinalizeButtonPressed__DelegateSignature(); // Function UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.FinalizeButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

