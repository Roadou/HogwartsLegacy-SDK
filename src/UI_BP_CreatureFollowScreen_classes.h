// WidgetBlueprintGeneratedClass UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C
// Size: 0x418 (Inherited: 0x328)
struct UUI_BP_CreatureFollowScreen_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Legend_OUT; // 0x330(0x08)
	struct UWidgetAnimation* ShowErrorMessage; // 0x338(0x08)
	struct UPhoenixTextBlock* CreatureNameText; // 0x340(0x08)
	struct UUI_BP_CreatureStatusWidget_C* creatureStatusWidget; // 0x348(0x08)
	struct UPhoenixRichTextBlock* DPad_Left; // 0x350(0x08)
	struct UPhoenixRichTextBlock* Dpad_Right; // 0x358(0x08)
	struct UHorizontalBox* dpadSwitcher; // 0x360(0x08)
	struct UPhoenixTextBlock* ErrorMessageText; // 0x368(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* ScreenLegend; // 0x370(0x08)
	struct AActor* Creature; // 0x378(0x08)
	struct UCreatureState* CreatureState; // 0x380(0x08)
	struct FMulticastInlineDelegate OnCreatureChanged; // 0x388(0x10)
	float SpecialHoldRequiredDuration; // 0x398(0x04)
	bool RenamePopupIsOpen; // 0x39c(0x01)
	bool IsScreenExitingToRenamePopup; // 0x39d(0x01)
	char pad_39E[0x2]; // 0x39e(0x02)
	struct UUI_BP_CreatureAbandonWidget_C* AbandonWidget; // 0x3a0(0x08)
	struct ULegendItem* LegendItemHarvestReturn; // 0x3a8(0x08)
	struct ULegendItem* LegendItemRename; // 0x3b0(0x08)
	struct ULegendItem* LegendItemRelease; // 0x3b8(0x08)
	struct ULegendItem* LegendItemShowHide; // 0x3c0(0x08)
	struct ULegendItem* LegendItemBack; // 0x3c8(0x08)
	struct ULegendItem* LegendSummonCreature; // 0x3d0(0x08)
	bool UIVisible; // 0x3d8(0x01)
	bool IsScreenExitingFromCreatureReleased; // 0x3d9(0x01)
	bool HidNurturingHUDSocket; // 0x3da(0x01)
	bool RenamePopupLoading; // 0x3db(0x01)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct TArray<struct FLegendItemData> LegendData; // 0x3e0(0x10)
	int32_t LegendIdx; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct FMulticastInlineDelegate OnCreatureSummoned; // 0x3f8(0x10)
	bool CreatureIsSummoned; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UUI_BP_CreatureManagementScreen_C* ParentCreatureManagementScreen; // 0x410(0x08)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool IsInAbandonConfirmation(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.IsInAbandonConfirmation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UpdateDPadVisibility(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.UpdateDPadVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchToPreviousCreature(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.SwitchToPreviousCreature // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchToNextCreature(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.SwitchToNextCreature // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RenamePopupLoaded(struct UScreen* LoadedScreen); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.RenamePopupLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleUIVisible(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.ToggleUIVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Start or Harvest Byproduct(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.Start or Harvest Byproduct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RenameCreature(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.RenameCreature // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowAbandonPopup(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.ShowAbandonPopup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerExitScreen(bool ToRenameScreen); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.TriggerExitScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GiveFocusToStatusWidget(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.GiveFocusToStatusWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateLegend(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.UpdateLegend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplayErrorMessage(struct FString Message); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.DisplayErrorMessage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnRenameConfirmed(struct FText InputText); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnRenameConfirmed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRenameCancelled(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnRenameCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCreatureDestroyed(struct AActor* DestroyedActor); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnCreatureDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCamera(bool RotateToFaceCreature); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.SetCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNeedsChanged(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnNeedsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatureAbandon_OnClosed(struct UObject* Caller); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.CreatureAbandon_OnClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatureAbandon_OnConfirm(struct UObject* Caller); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.CreatureAbandon_OnConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnByproductCooldownEnded(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnByproductCooldownEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCreatureActorSpawned(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnCreatureActorSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreatureFollowScreen(int32_t EntryPoint); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.ExecuteUbergraph_UI_BP_CreatureFollowScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnCreatureSummoned__DelegateSignature(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnCreatureSummoned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCreatureChanged__DelegateSignature(); // Function UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnCreatureChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

