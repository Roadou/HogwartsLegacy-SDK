// WidgetBlueprintGeneratedClass UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C
// Size: 0x3e0 (Inherited: 0x328)
struct UUI_BP_FG_ActionSelectionDetails_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* hideDetails; // 0x330(0x08)
	struct UWidgetAnimation* showDetails; // 0x338(0x08)
	struct UCanvasPanel* detailsHeader; // 0x340(0x08)
	struct UCanvasPanel* lockedPanel; // 0x348(0x08)
	struct UImage* noVideoSpell; // 0x350(0x08)
	struct UPhoenixRichTextBlock* spellDescription; // 0x358(0x08)
	struct UPhoenixImage* spellHeaderBack; // 0x360(0x08)
	struct UPhoenixTextBlock* SpellRequirementText; // 0x368(0x08)
	struct UPhoenixTextBlock* spellTitle; // 0x370(0x08)
	struct UPhoenixTextBlock* spellTypeLabel; // 0x378(0x08)
	struct UCanvasPanel* videoPanel; // 0x380(0x08)
	struct UUI_BP_MediaWidget_C* videoPlayer; // 0x388(0x08)
	struct TArray<struct UUI_BP_FG_QuestTask_C*> TaskArray; // 0x390(0x10)
	struct FString CurrentCategory; // 0x3a0(0x10)
	bool isVideoAvailable; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FMulticastInlineDelegate StartLoadingVideo; // 0x3b8(0x10)
	bool isDetailsShowing; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FMulticastInlineDelegate OnHideDetailsComplete; // 0x3d0(0x10)

	void SequenceEvent__ENTRYPOINTUI_BP_FG_ActionSelectionDetails_1(); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.SequenceEvent__ENTRYPOINTUI_BP_FG_ActionSelectionDetails_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void ToggleDetails(bool showDetails); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.ToggleDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSpellTypeDetails(enum class ESpellCategory SpellType); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.SetSpellTypeDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildEmptyDetails(); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.BuildEmptyDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTalentCategory(struct FString NewCategory); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.SetTalentCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildSpellDetails(struct FString SpellID, bool IsSpellUnlocked, enum class ESpellCategory SpellType); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.BuildSpellDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_3AED371F436D6DCB9301C682DA241948(struct UObject* Loaded); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.OnLoaded_3AED371F436D6DCB9301C682DA241948 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideDetailsComplete(); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.HideDetailsComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnStartLoadingVideo(bool IsSpellUnlocked, enum class ESpellCategory SpellType, struct TSoftObjectPtr<UMediaSource> Asset); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.OnStartLoadingVideo // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_ActionSelectionDetails(int32_t EntryPoint); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.ExecuteUbergraph_UI_BP_FG_ActionSelectionDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnHideDetailsComplete__DelegateSignature(); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.OnHideDetailsComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartLoadingVideo__DelegateSignature(bool IsSpellUnlocked, enum class ESpellCategory SpellType, struct TSoftObjectPtr<UMediaSource> Asset); // Function UI_BP_FG_ActionSelectionDetails.UI_BP_FG_ActionSelectionDetails_C.StartLoadingVideo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

