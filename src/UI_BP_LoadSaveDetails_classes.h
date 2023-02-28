// WidgetBlueprintGeneratedClass UI_BP_LoadSaveDetails.UI_BP_LoadSaveDetails_C
// Size: 0x290 (Inherited: 0x268)
struct UUI_BP_LoadSaveDetails_C : UUserWidget {
	struct UPhoenixTextBlock* PlayTime; // 0x268(0x08)
	struct UPhoenixTextBlock* SaveTime; // 0x270(0x08)
	struct UPhoenixTextBlock* SaveTitle; // 0x278(0x08)
	struct UPhoenixTextBlock* SaveType; // 0x280(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* UI_BP_FG_DetailsPanelBack; // 0x288(0x08)

	void Set Details Data(struct FString SaveImage, struct FString SaveName, struct FString SaveType, struct FString SaveDate, struct FString TimePlayed); // Function UI_BP_LoadSaveDetails.UI_BP_LoadSaveDetails_C.Set Details Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

