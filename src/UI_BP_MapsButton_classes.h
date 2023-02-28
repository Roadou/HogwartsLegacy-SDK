// WidgetBlueprintGeneratedClass UI_BP_MapsButton.UI_BP_MapsButton_C
// Size: 0x3c0 (Inherited: 0x328)
struct UUI_BP_MapsButton_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* TutorialHighlight; // 0x330(0x08)
	struct UWidgetAnimation* OnHoverAnimation; // 0x338(0x08)
	struct UHorizontalBox* buttonBack; // 0x340(0x08)
	struct UPhoenixTextBlock* ButtonName; // 0x348(0x08)
	struct UBorder* highlightBorder; // 0x350(0x08)
	struct UCanvasPanel* mainPanel; // 0x358(0x08)
	struct UButton* MapButton; // 0x360(0x08)
	struct UImage* MissionsAvailable; // 0x368(0x08)
	struct UHorizontalBox* textBox; // 0x370(0x08)
	struct FMulticastInlineDelegate OnMapsButtonSelected; // 0x378(0x10)
	struct FString MapIconID; // 0x388(0x10)
	enum class UI_BP_FastTravelDirectionEnum buttonDirection; // 0x398(0x01)
	bool IsLocked; // 0x399(0x01)
	char pad_39A[0x6]; // 0x39a(0x06)
	struct FMulticastInlineDelegate OnMapsButtonHovered; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnMapsButtonUnhovered; // 0x3b0(0x10)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetButtonDirection(); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.SetButtonDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopTutorialHighlight(); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.StopTutorialHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayTutorialHighlight(); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.PlayTutorialHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MapsButton(int32_t EntryPoint); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.ExecuteUbergraph_UI_BP_MapsButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnMapsButtonUnhovered__DelegateSignature(); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.OnMapsButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMapsButtonHovered__DelegateSignature(); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.OnMapsButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMapsButtonSelected__DelegateSignature(); // Function UI_BP_MapsButton.UI_BP_MapsButton_C.OnMapsButtonSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

