// WidgetBlueprintGeneratedClass UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C
// Size: 0x298 (Inherited: 0x270)
struct UUI_BP_AspectRatioWidget_C : UCameraAspectRatioWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UImage* BlackBar_Bottom; // 0x278(0x08)
	struct UImage* BlackBar_Left; // 0x280(0x08)
	struct UImage* BlackBar_Right; // 0x288(0x08)
	struct UImage* BlackBar_Top; // 0x290(0x08)

	void UI_HideBars(); // Function UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C.UI_HideBars // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UI_UpdateLetterbox(float InBarScale); // Function UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C.UI_UpdateLetterbox // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UI_UpdatePillarbox(float InBarScale); // Function UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C.UI_UpdatePillarbox // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_AspectRatioWidget(int32_t EntryPoint); // Function UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C.ExecuteUbergraph_UI_BP_AspectRatioWidget // (Final|UbergraphFunction) // @ game+0x38a7480
};

