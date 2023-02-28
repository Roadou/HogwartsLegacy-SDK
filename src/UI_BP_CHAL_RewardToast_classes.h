// WidgetBlueprintGeneratedClass UI_BP_CHAL_RewardToast.UI_BP_CHAL_RewardToast_C
// Size: 0x388 (Inherited: 0x328)
struct UUI_BP_CHAL_RewardToast_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixImage* appearanceIcon; // 0x330(0x08)
	struct UCanvasPanel* appearancePanel; // 0x338(0x08)
	struct UPhoenixImage* focusPanel; // 0x340(0x08)
	struct UPhoenixImage* ItemIcon; // 0x348(0x08)
	struct UCanvasPanel* ItemPanel; // 0x350(0x08)
	struct UPhoenixImage* ItemRarity; // 0x358(0x08)
	struct UPhoenixTextBlock* RewardName; // 0x360(0x08)
	struct UPhoenixTextBlock* RewardType; // 0x368(0x08)
	struct UPhoenixImage* talentPanel; // 0x370(0x08)
	struct UPhoenixImage* Trait; // 0x378(0x08)
	struct UCanvasPanel* traitPanel; // 0x380(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_CHAL_RewardToast.UI_BP_CHAL_RewardToast_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetRewardData(struct FString RewardID, struct FString RewardType); // Function UI_BP_CHAL_RewardToast.UI_BP_CHAL_RewardToast_C.SetRewardData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRewardIconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_CHAL_RewardToast.UI_BP_CHAL_RewardToast_C.OnRewardIconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CHAL_RewardToast(int32_t EntryPoint); // Function UI_BP_CHAL_RewardToast.UI_BP_CHAL_RewardToast_C.ExecuteUbergraph_UI_BP_CHAL_RewardToast // (Final|UbergraphFunction) // @ game+0x38a7480
};

