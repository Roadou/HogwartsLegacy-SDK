// WidgetBlueprintGeneratedClass UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C
// Size: 0x3b2 (Inherited: 0x2e8)
struct UUI_BP_OwlMailNotification_C : UOwlMailNotification {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* ShowSenderNameTransition; // 0x2f0(0x08)
	struct UWidgetAnimation* CloseEnvelope; // 0x2f8(0x08)
	struct UWidgetAnimation* ResetEnvelope; // 0x300(0x08)
	struct UWidgetAnimation* ShowSender; // 0x308(0x08)
	struct UWidgetAnimation* FadeOut; // 0x310(0x08)
	struct UWidgetAnimation* FadeIn; // 0x318(0x08)
	struct UUI_BP_LegendItem_C* ReadLegend; // 0x320(0x08)
	struct UImage* SenderIcon; // 0x328(0x08)
	struct UPhoenixTextBlock* SenderName; // 0x330(0x08)
	bool AwaitingInput; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct TArray<struct FMailEntry> QueuedEntries; // 0x340(0x10)
	struct FMailEntry CurrentMailEntry; // 0x350(0x58)
	float CurrentCountdownTime; // 0x3a8(0x04)
	float MaxCountdownTime; // 0x3ac(0x04)
	bool isSenderShowing; // 0x3b0(0x01)
	bool isAutoPlay; // 0x3b1(0x01)

	void SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_2(); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_1(); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void QueueNotification(struct FMailEntry NewEntry, int32_t DisplayPriority); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.QueueNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideMailNotification(); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.HideMailNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowMailNotification(struct FMailEntry MailEntry); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.ShowMailNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInitialized(); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowOwlMail(struct UObject* Caller); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.ShowOwlMail // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void DialogueLineComplete(); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.DialogueLineComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReadMail(); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.ReadMail // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnEnvelopeClosed(); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.OnEnvelopeClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckToShowNameTransition(); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.CheckToShowNameTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_OwlMailNotification(int32_t EntryPoint); // Function UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.ExecuteUbergraph_UI_BP_OwlMailNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

