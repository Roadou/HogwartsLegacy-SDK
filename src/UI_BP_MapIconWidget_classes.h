// WidgetBlueprintGeneratedClass UI_BP_MapIconWidget.UI_BP_MapIconWidget_C
// Size: 0x2b3 (Inherited: 0x288)
struct UUI_BP_MapIconWidget_C : UMapIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* ShrinkRegion; // 0x290(0x08)
	struct UWidgetAnimation* FadeRegion; // 0x298(0x08)
	struct UWidgetAnimation* HoverRegion; // 0x2a0(0x08)
	struct UImage* TextShadow; // 0x2a8(0x08)
	bool RegionActive; // 0x2b0(0x01)
	bool RegionFaded; // 0x2b1(0x01)
	bool RegionWasActive; // 0x2b2(0x01)

	void OnHoverRegion(); // Function UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.OnHoverRegion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHoverMap(bool TitleSwitch, struct FString Title, struct TArray<struct FString>& LegendStrings); // Function UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.OnHoverMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_MapTitle_Exit_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.WidgetAnimationEvt_MapTitle_Exit_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void PlayFanfare_Event(); // Function UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.PlayFanfare_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIcon(struct UTexture2D* Texture); // Function UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.SetIcon // (BlueprintEvent) // @ game+0x38a7480
	void RegionIndexEvent(struct UObject* Caller, int32_t int); // Function UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.RegionIndexEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MapIconWidget(int32_t EntryPoint); // Function UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.ExecuteUbergraph_UI_BP_MapIconWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

