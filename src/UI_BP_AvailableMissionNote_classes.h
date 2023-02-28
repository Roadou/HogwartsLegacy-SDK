// WidgetBlueprintGeneratedClass UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C
// Size: 0x358 (Inherited: 0x328)
struct UUI_BP_AvailableMissionNote_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* MissionIconLeft; // 0x330(0x08)
	struct UWidgetAnimation* MissionIconRight; // 0x338(0x08)
	struct UImage* mapMissionIcon; // 0x340(0x08)
	struct UImage* mapMissionIcon_2; // 0x348(0x08)
	struct UPhoenixTextBlock* MissionTitle; // 0x350(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetColor(struct FLinearColor Color); // Function UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.SetColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Mission Data(struct FString MissionIcon, struct FString MissionName); // Function UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.Set Mission Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AvailableMissionRight(struct UObject* Caller); // Function UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.AvailableMissionRight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AvailableMissionLeft(struct UObject* Caller); // Function UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.AvailableMissionLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_AvailableMissionNote(int32_t EntryPoint); // Function UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.ExecuteUbergraph_UI_BP_AvailableMissionNote // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

