// WidgetBlueprintGeneratedClass BP_HUD_Audio.BP_HUD_Audio_C
// Size: 0x2e0 (Inherited: 0x268)
struct UBP_HUD_Audio_C : UUIAccessibilityAudioCueWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* ArrowHolder; // 0x270(0x08)
	struct UImage* Circle; // 0x278(0x08)
	struct UCanvasPanel* CuePanel; // 0x280(0x08)
	struct APawn* Player; // 0x288(0x08)
	struct TMap<struct AActor*, struct UUI_BP_DirectionalArrowWidget_C*> ActorsToVisualize; // 0x290(0x50)

	void Construct(); // Function BP_HUD_Audio.BP_HUD_Audio_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BP_HUD_Audio.BP_HUD_Audio_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HideHUD(struct UObject* Caller); // Function BP_HUD_Audio.BP_HUD_Audio_C.HideHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowHUD(struct UObject* Caller); // Function BP_HUD_Audio.BP_HUD_Audio_C.ShowHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HUD_Audio(int32_t EntryPoint); // Function BP_HUD_Audio.BP_HUD_Audio_C.ExecuteUbergraph_BP_HUD_Audio // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

