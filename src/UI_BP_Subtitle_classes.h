// WidgetBlueprintGeneratedClass UI_BP_Subtitle.UI_BP_Subtitle_C
// Size: 0x478 (Inherited: 0x320)
struct UUI_BP_Subtitle_C : USubtitles {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct FString Subtitle_Name; // 0x328(0x10)
	struct TArray<struct FString> Subtitle_LineID; // 0x338(0x10)
	struct FText StringOutput; // 0x348(0x18)
	struct UObject* SubtitleElementClass; // 0x360(0x08)
	struct TArray<struct FString> Effort_LineID; // 0x368(0x10)
	struct FString DebugKey; // 0x378(0x10)
	struct USubtitleElement* SubtitleElementInstance; // 0x388(0x08)
	struct UUI_BP_Subtitle_Element_C* BPSubtitleElementInstance; // 0x390(0x08)
	struct UUserWidget* UserWidgetInstance; // 0x398(0x08)
	struct FSlateColor SubtitleGray; // 0x3a0(0x28)
	bool bStandaloneSubtitle; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct TMap<struct FString, bool> SubtitleHighPriorityMap; // 0x3d0(0x50)
	struct TMap<struct FString, struct USubtitleElement*> SubtitleElementMap; // 0x420(0x50)
	struct USubtitleElement* RemoveSubtitleElement; // 0x470(0x08)

	void AddStandaloneSubtitle(struct FString InputResolvedSubtitle); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.AddStandaloneSubtitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateStandaloneSubtitle(struct FString InputResolvedSubtitle); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.UpdateStandaloneSubtitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RemoveAllFromSubtitleBox(); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.RemoveAllFromSubtitleBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Add Resolved Subtitle to Panel(struct FAudioDialogueLineData InSubtitleData, struct FString ResolvedSubtitle); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.Add Resolved Subtitle to Panel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RemovefromSubtitleBox(struct FAudioDialogueLineData Subtitle); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.RemovefromSubtitleBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_1643F56B420F3870192A8DBF8E43830F(struct UObject* Loaded); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.OnLoaded_1643F56B420F3870192A8DBF8E43830F // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BPAddSubtitleEvent(struct FAudioDialogueLineData SubtitleData, struct FString ResolvedSubtitle); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.BPAddSubtitleEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BPRemoveSubtitleEvent(struct FAudioDialogueLineData SubtitleData); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.BPRemoveSubtitleEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BPAddStandaloneSubtitle(struct FString ResolvedSubtitle); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.BPAddStandaloneSubtitle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BPRemoveStandaloneSubtitle(); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.BPRemoveStandaloneSubtitle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BPUpdateStandaloneSubtitle(struct FString ResolvedSubtitle); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.BPUpdateStandaloneSubtitle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Subtitle(int32_t EntryPoint); // Function UI_BP_Subtitle.UI_BP_Subtitle_C.ExecuteUbergraph_UI_BP_Subtitle // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

