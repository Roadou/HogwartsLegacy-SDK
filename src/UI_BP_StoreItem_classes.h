// WidgetBlueprintGeneratedClass UI_BP_StoreItem.UI_BP_StoreItem_C
// Size: 0x429 (Inherited: 0x328)
struct UUI_BP_StoreItem_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPhoenixImage* detailsDivider; // 0x330(0x08)
	struct UPhoenixTextBlock* ItemCost; // 0x338(0x08)
	struct UPhoenixTextBlock* itemTitle; // 0x340(0x08)
	struct UHorizontalBox* lockedPanel_2; // 0x348(0x08)
	struct UPhoenixTextBlock* lockedText; // 0x350(0x08)
	struct UPhoenixTextBlock* ownedText; // 0x358(0x08)
	struct UImage* storeItemImage; // 0x360(0x08)
	struct FOnlineOfferStruct OfferInfo; // 0x368(0xc0)
	bool canPurchase; // 0x428(0x01)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_StoreItem.UI_BP_StoreItem_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void GetOfferId(struct FString& NewParam); // Function UI_BP_StoreItem.UI_BP_StoreItem_C.GetOfferId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetItemData(struct FOnlineOfferStruct OnlineOffer); // Function UI_BP_StoreItem.UI_BP_StoreItem_C.SetItemData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFail_8FD97C734E427BBCD70210B3E71268DF(struct UTexture2DDynamic* Texture); // Function UI_BP_StoreItem.UI_BP_StoreItem_C.OnFail_8FD97C734E427BBCD70210B3E71268DF // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSuccess_8FD97C734E427BBCD70210B3E71268DF(struct UTexture2DDynamic* Texture); // Function UI_BP_StoreItem.UI_BP_StoreItem_C.OnSuccess_8FD97C734E427BBCD70210B3E71268DF // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetImage(struct FString ImageURL, int32_t SizeX, int32_t SizeY); // Function UI_BP_StoreItem.UI_BP_StoreItem_C.GetImage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateImage(struct FSlateBrush ImageData); // Function UI_BP_StoreItem.UI_BP_StoreItem_C.UpdateImage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_StoreItem(int32_t EntryPoint); // Function UI_BP_StoreItem.UI_BP_StoreItem_C.ExecuteUbergraph_UI_BP_StoreItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

