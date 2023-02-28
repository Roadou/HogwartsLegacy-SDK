// WidgetBlueprintGeneratedClass UI_BP_StationInteractButton.UI_BP_StationInteractButton_C
// Size: 0x570 (Inherited: 0x3e8)
struct UUI_BP_StationInteractButton_C : UTextButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UWidgetAnimation* OnUnhovered; // 0x3f0(0x08)
	struct UWidgetAnimation* OnHovered; // 0x3f8(0x08)
	struct UPhoenixRichTextBlock* ButtonCalloutText; // 0x400(0x08)
	struct UPhoenixRichTextBlock* DisplayText; // 0x408(0x08)
	struct UBorder* textBorder; // 0x410(0x08)
	struct UImage* typeIcon; // 0x418(0x08)
	struct FText Key_1; // 0x420(0x18)
	struct FString Namespace_1; // 0x438(0x10)
	int32_t FontSize; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FSlateColor TextButtonHoveredTextColor; // 0x450(0x28)
	struct FSlateColor TextButtonUnhoveredTextColor; // 0x478(0x28)
	float TextWidth; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct TMap<enum class UI_BP_InteractTypeEnum, struct FString> interactTypeMap; // 0x4a8(0x50)
	struct TMap<enum class EAvaAudioDialogueMenuItemType, struct FString> ConversationTypeMap; // 0x4f8(0x50)
	bool isOptionAvailable; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	struct FLinearColor OptionColor; // 0x54c(0x10)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct FMulticastInlineDelegate OnStationButtonSelected; // 0x560(0x10)

	void ToggleActive(bool IsActive); // Function UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.ToggleActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTypeIcon(struct FString Type); // Function UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.SetTypeIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScaleButton(bool IsHoveredOver); // Function UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.ScaleButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_StationInteractButton(int32_t EntryPoint); // Function UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.ExecuteUbergraph_UI_BP_StationInteractButton // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnStationButtonSelected__DelegateSignature(struct UUI_BP_StationInteractButton_C* SelectedOption); // Function UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.OnStationButtonSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

