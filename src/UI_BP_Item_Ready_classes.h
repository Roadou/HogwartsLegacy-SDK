// WidgetBlueprintGeneratedClass UI_BP_Item_Ready.UI_BP_Item_Ready_C
// Size: 0x28c (Inherited: 0x268)
struct UUI_BP_Item_Ready_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UButton* HitZone; // 0x270(0x08)
	struct UImage* MainImage; // 0x278(0x08)
	struct UPhoenixTextBlock* UncollectedYieldText; // 0x280(0x08)
	float MinimumFill; // 0x288(0x04)

	void SetUncollectedYield(struct FString UncollectedYield); // Function UI_BP_Item_Ready.UI_BP_Item_Ready_C.SetUncollectedYield // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetImageName(struct FString ImageName); // Function UI_BP_Item_Ready.UI_BP_Item_Ready_C.SetImageName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_Item_Ready.UI_BP_Item_Ready_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Item_Ready(int32_t EntryPoint); // Function UI_BP_Item_Ready.UI_BP_Item_Ready_C.ExecuteUbergraph_UI_BP_Item_Ready // (Final|UbergraphFunction) // @ game+0x38a7480
};

