// WidgetBlueprintGeneratedClass VFX_BP_Detected_HUD_FlashColor.VFX_BP_Detected_HUD_FlashColor_C
// Size: 0x280 (Inherited: 0x268)
struct UVFX_BP_Detected_HUD_FlashColor_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Flash_On_Off; // 0x270(0x08)
	struct UImage* DEtected_Flash; // 0x278(0x08)

	void PreConstruct(bool IsDesignTime); // Function VFX_BP_Detected_HUD_FlashColor.VFX_BP_Detected_HUD_FlashColor_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Detected_HUD_FlashColor(int32_t EntryPoint); // Function VFX_BP_Detected_HUD_FlashColor.VFX_BP_Detected_HUD_FlashColor_C.ExecuteUbergraph_VFX_BP_Detected_HUD_FlashColor // (Final|UbergraphFunction) // @ game+0x38a7480
};

