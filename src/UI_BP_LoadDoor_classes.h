// WidgetBlueprintGeneratedClass UI_BP_LoadDoor.UI_BP_LoadDoor_C
// Size: 0x289 (Inherited: 0x268)
struct UUI_BP_LoadDoor_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* LoadComplete; // 0x270(0x08)
	struct UWidgetAnimation* fade; // 0x278(0x08)
	struct UImage* LoadBackground; // 0x280(0x08)
	bool IsDoorLoaded; // 0x288(0x01)

	float LoadingComplete(); // Function UI_BP_LoadDoor.UI_BP_LoadDoor_C.LoadingComplete // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent_1(); // Function UI_BP_LoadDoor.UI_BP_LoadDoor_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_LoadDoor.UI_BP_LoadDoor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoorLoaded(); // Function UI_BP_LoadDoor.UI_BP_LoadDoor_C.OnDoorLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideHUD(struct UObject* Caller); // Function UI_BP_LoadDoor.UI_BP_LoadDoor_C.HideHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowHUD(struct UObject* Caller); // Function UI_BP_LoadDoor.UI_BP_LoadDoor_C.ShowHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_LoadDoor(int32_t EntryPoint); // Function UI_BP_LoadDoor.UI_BP_LoadDoor_C.ExecuteUbergraph_UI_BP_LoadDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

