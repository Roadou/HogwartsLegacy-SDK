// WidgetBlueprintGeneratedClass UI_BP_StorePopup.UI_BP_StorePopup_C
// Size: 0x361 (Inherited: 0x328)
struct UUI_BP_StorePopup_C : UAvaUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* OnUnhoverAnimation; // 0x330(0x08)
	struct UWidgetAnimation* OnHoverAnimation; // 0x338(0x08)
	struct UWidgetAnimation* hideFocus; // 0x340(0x08)
	struct UWidgetAnimation* showFocus; // 0x348(0x08)
	struct UUI_BP_LegendItem_C* continueCallout; // 0x350(0x08)
	struct UPhoenixTextBlock* popupMessage; // 0x358(0x08)
	bool isCalloutShowing; // 0x360(0x01)

	void I_GetMissionData(struct FMissionLogData& MissionData); // Function UI_BP_StorePopup.UI_BP_StorePopup_C.I_GetMissionData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_StorePopup.UI_BP_StorePopup_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetMessageInfo(struct FString EmptyMessage, bool ShowCallout); // Function UI_BP_StorePopup.UI_BP_StorePopup_C.SetMessageInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetMissionFocus(bool IsFocus); // Function UI_BP_StorePopup.UI_BP_StorePopup_C.I_SetMissionFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetOwner(struct UUserWidget* Owner); // Function UI_BP_StorePopup.UI_BP_StorePopup_C.I_SetOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetMissionData(struct FMissionLogData MissionData); // Function UI_BP_StorePopup.UI_BP_StorePopup_C.I_SetMissionData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_StorePopup.UI_BP_StorePopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_StorePopup(int32_t EntryPoint); // Function UI_BP_StorePopup.UI_BP_StorePopup_C.ExecuteUbergraph_UI_BP_StorePopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

