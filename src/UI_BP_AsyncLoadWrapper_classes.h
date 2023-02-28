// WidgetBlueprintGeneratedClass UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C
// Size: 0x320 (Inherited: 0x308)
struct UUI_BP_AsyncLoadWrapper_C : UAsyncLoadWrapper {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UCanvasPanel* Container; // 0x310(0x08)
	struct UCircularThrobber* Loadingwidget; // 0x318(0x08)

	struct UCanvasPanel* GetAttachCanvas(); // Function UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.GetAttachCanvas // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetChild(struct UUserWidget*& AsyncChildWidget); // Function UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.GetChild // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Construct(); // Function UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EditorPreviewConstruct(); // Function UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.EditorPreviewConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitChild(); // Function UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.InitChild // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChildLoadComplete(struct UAsyncLoadWrapper* SelfReference); // Function UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.ChildLoadComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetParent(struct UUserWidget* Parent); // Function UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.SetParent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetThrobberVisibility(enum class ESlateVisibility NewVisibility); // Function UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.SetThrobberVisibility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_AsyncLoadWrapper(int32_t EntryPoint); // Function UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.ExecuteUbergraph_UI_BP_AsyncLoadWrapper // (Final|UbergraphFunction) // @ game+0x38a7480
};

