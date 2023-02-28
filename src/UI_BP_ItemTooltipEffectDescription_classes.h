// WidgetBlueprintGeneratedClass UI_BP_ItemTooltipEffectDescription.UI_BP_ItemTooltipEffectDescription_C
// Size: 0x288 (Inherited: 0x268)
struct UUI_BP_ItemTooltipEffectDescription_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* bodyDivider; // 0x270(0x08)
	struct UPhoenixTextBlock* EffectDescription; // 0x278(0x08)
	struct UPhoenixTextBlock* EffectText; // 0x280(0x08)

	void SetItemInfo(struct FString EffectTextKey, struct FString EffectPotionReplacementTextKey, bool PositiveEffect); // Function UI_BP_ItemTooltipEffectDescription.UI_BP_ItemTooltipEffectDescription_C.SetItemInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_ItemTooltipEffectDescription.UI_BP_ItemTooltipEffectDescription_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ItemTooltipEffectDescription.UI_BP_ItemTooltipEffectDescription_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ItemTooltipEffectDescription(int32_t EntryPoint); // Function UI_BP_ItemTooltipEffectDescription.UI_BP_ItemTooltipEffectDescription_C.ExecuteUbergraph_UI_BP_ItemTooltipEffectDescription // (Final|UbergraphFunction) // @ game+0x38a7480
};

