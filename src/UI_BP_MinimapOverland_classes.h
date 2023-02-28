// WidgetBlueprintGeneratedClass UI_BP_MinimapOverland.UI_BP_MinimapOverland_C
// Size: 0x528 (Inherited: 0x4d0)
struct UUI_BP_MinimapOverland_C : UMinimapOverland {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UImage* MinimapBackground; // 0x4d8(0x08)
	struct TArray<struct UTexture2D*> ImageTextureArray; // 0x4e0(0x10)
	struct TArray<int32_t> TileIndices; // 0x4f0(0x10)
	struct TArray<struct FString> ImageNames; // 0x500(0x10)
	struct UTexture2D* BlackTexture_1; // 0x510(0x08)
	struct TArray<struct FString> ImageNamesTest; // 0x518(0x10)

	void ValidateMapIndex(int32_t MapIndex, bool& IsValid); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.ValidateMapIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MapTileLoaded_LowerRight(struct UTexture2D* Texture, struct UObject* Image); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.MapTileLoaded_LowerRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MapTileLoaded_LowerLeft(struct UTexture2D* Texture, struct UObject* Image); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.MapTileLoaded_LowerLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MapTileLoaded_UpperRight(struct UTexture2D* Texture, struct UObject* Image); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.MapTileLoaded_UpperRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MapTileLoaded_UpperLeft(struct UTexture2D* TileTexture, struct UObject* TileImage); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.MapTileLoaded_UpperLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTileIndicesFromImageNames(int32_t UpperLeftIndex); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.UpdateTileIndicesFromImageNames // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DebugPrintPlayerTile(); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.DebugPrintPlayerTile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTileTextures(); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.UpdateTileTextures // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCurrentMapPosition(); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.UpdateCurrentMapPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMapOpacity(float Opacity); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.SetMapOpacity // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowMap(bool Visibile); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.ShowMap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MinimapOverland(int32_t EntryPoint); // Function UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.ExecuteUbergraph_UI_BP_MinimapOverland // (Final|UbergraphFunction) // @ game+0x38a7480
};

