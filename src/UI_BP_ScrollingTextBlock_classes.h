// WidgetBlueprintGeneratedClass UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C
// Size: 0x410 (Inherited: 0x400)
struct UUI_BP_ScrollingTextBlock_C : UScrollingTextWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* ScrollingTextAnimation; // 0x408(0x08)

	void Construct(); // Function UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ScrollingTextBlock(int32_t EntryPoint); // Function UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C.ExecuteUbergraph_UI_BP_ScrollingTextBlock // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

