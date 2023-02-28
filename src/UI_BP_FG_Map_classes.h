// WidgetBlueprintGeneratedClass UI_BP_FG_Map.UI_BP_FG_Map_C
// Size: 0x3d8 (Inherited: 0x3c8)
struct UUI_BP_FG_Map_C : UTabPageWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct FName CurrentMap; // 0x3d0(0x08)

	void GetAsyncWrapperRenderSize(struct FVector2D& RenderSize); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.GetAsyncWrapperRenderSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.SetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void InEditorPostConstruct(); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.InEditorPostConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialize(); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LeaveFromPage(); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.LeaveFromPage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToPage(struct TArray<struct FString>& DestinationStack); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.GoToPage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToTheMap(struct UObject* Caller); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.ToTheMap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NewMapLegendRequested(struct TArray<struct FLegendItemData>& NewLegendRequest); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.NewMapLegendRequested // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MapToQuestLog(struct UObject* Caller, struct FString String); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.MapToQuestLog // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FG_Map(int32_t EntryPoint); // Function UI_BP_FG_Map.UI_BP_FG_Map_C.ExecuteUbergraph_UI_BP_FG_Map // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

