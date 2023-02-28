// WidgetBlueprintGeneratedClass UI_BP_HowMany.UI_BP_HowMany_C
// Size: 0x3c8 (Inherited: 0x370)
struct UUI_BP_HowMany_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UPhoenixTextBlock* Action; // 0x378(0x08)
	struct UPhoenixTextBlock* CurrentAmount; // 0x380(0x08)
	struct UUI_BP_LegendBox_C* LegendBox; // 0x388(0x08)
	struct UPhoenixTextBlock* MaximumAmount; // 0x390(0x08)
	struct UPhoenixTextBlock* MinimumAmount; // 0x398(0x08)
	struct UUserWidget* Parent; // 0x3a0(0x08)
	int32_t CurrentIntAmount; // 0x3a8(0x04)
	int32_t MaxAmount; // 0x3ac(0x04)
	bool SendEvent; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct TArray<struct FString> Legend; // 0x3b8(0x10)

	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_HowMany.UI_BP_HowMany_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetColors(struct FLinearColor Color); // Function UI_BP_HowMany.UI_BP_HowMany_C.SetColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentAmount(int32_t CurrentIntAmount); // Function UI_BP_HowMany.UI_BP_HowMany_C.SetCurrentAmount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetName(struct FName ItemName, bool Drop); // Function UI_BP_HowMany.UI_BP_HowMany_C.SetName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitAmounts(int32_t Min, int32_t Max); // Function UI_BP_HowMany.UI_BP_HowMany_C.InitAmounts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_HowMany.UI_BP_HowMany_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_HowMany.UI_BP_HowMany_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HowMany(int32_t EntryPoint); // Function UI_BP_HowMany.UI_BP_HowMany_C.ExecuteUbergraph_UI_BP_HowMany // (Final|UbergraphFunction) // @ game+0x38a7480
};

