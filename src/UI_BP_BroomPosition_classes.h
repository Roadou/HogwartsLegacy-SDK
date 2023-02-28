// WidgetBlueprintGeneratedClass UI_BP_BroomPosition.UI_BP_BroomPosition_C
// Size: 0x2a8 (Inherited: 0x268)
struct UUI_BP_BroomPosition_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UPhoenixTextBlock* placeName; // 0x270(0x08)
	struct UPhoenixTextBlock* placeNumber; // 0x278(0x08)
	struct UPhoenixTextBlock* placeTime; // 0x280(0x08)
	struct UImage* playerColorMarker; // 0x288(0x08)
	int32_t positionNumber; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FString Player Name; // 0x298(0x10)

	void SetPositionData(struct FString RacerName, struct FText RacerTime, bool IsPlayer); // Function UI_BP_BroomPosition.UI_BP_BroomPosition_C.SetPositionData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_BroomPosition.UI_BP_BroomPosition_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_BroomPosition.UI_BP_BroomPosition_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BroomPosition(int32_t EntryPoint); // Function UI_BP_BroomPosition.UI_BP_BroomPosition_C.ExecuteUbergraph_UI_BP_BroomPosition // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

