// WidgetBlueprintGeneratedClass UI_BP_MoneyBar.UI_BP_MoneyBar_C
// Size: 0x37d (Inherited: 0x328)
struct UUI_BP_MoneyBar_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct USizeBox* GalleonsBox; // 0x330(0x08)
	struct UImage* GalleonsImage; // 0x338(0x08)
	struct UPhoenixTextBlock* GalleonsText; // 0x340(0x08)
	struct UImage* Image_ItemValueBox; // 0x348(0x08)
	bool isOnPaper; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int32_t CurrentAmount; // 0x354(0x04)
	int32_t CurrentGalleons; // 0x358(0x04)
	int32_t CurrentSickles; // 0x35c(0x04)
	int32_t CurrentKnuts; // 0x360(0x04)
	int32_t NextAmount; // 0x364(0x04)
	int32_t NextGalleons; // 0x368(0x04)
	int32_t NextSickles; // 0x36c(0x04)
	int32_t NextKnuts; // 0x370(0x04)
	float AnimationTotalDuration; // 0x374(0x04)
	float AnimationCurrentTime; // 0x378(0x04)
	bool ShowEmptyVals; // 0x37c(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void GetContainerVisibility(int32_t CoinAmount, enum class ESlateVisibility& Visibility); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.GetContainerVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ResetFields(); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.ResetFields // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplayTotalWorth(struct FName Character); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.DisplayTotalWorth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplayCostColor(bool canAffordItem); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.DisplayCostColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplayCost(int32_t newCost); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.DisplayCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisplayMoney(struct FName Character); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.DisplayMoney // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimateToNewAmount(int32_t Amount); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.AnimateToNewAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentAmount(int32_t Amount); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.SetCurrentAmount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MoneyBar(int32_t EntryPoint); // Function UI_BP_MoneyBar.UI_BP_MoneyBar_C.ExecuteUbergraph_UI_BP_MoneyBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

