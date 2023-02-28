// WidgetBlueprintGeneratedClass UI_BP_HerbologySeedTooltip.UI_BP_HerbologySeedTooltip_C
// Size: 0x2c0 (Inherited: 0x268)
struct UUI_BP_HerbologySeedTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UVerticalBox* Details; // 0x270(0x08)
	struct UPhoenixTextBlock* GrowthTimeText; // 0x278(0x08)
	struct UPhoenixTextBlock* MultiHarvestText; // 0x280(0x08)
	struct UPhoenixTextBlock* PlotSizeText; // 0x288(0x08)
	struct FSeedInfo PreviewSeedInfo; // 0x290(0x30)

	void Init(struct FSeedInfo Seed Info); // Function UI_BP_HerbologySeedTooltip.UI_BP_HerbologySeedTooltip_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_HerbologySeedTooltip.UI_BP_HerbologySeedTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HerbologySeedTooltip(int32_t EntryPoint); // Function UI_BP_HerbologySeedTooltip.UI_BP_HerbologySeedTooltip_C.ExecuteUbergraph_UI_BP_HerbologySeedTooltip // (Final|UbergraphFunction) // @ game+0x38a7480
};

