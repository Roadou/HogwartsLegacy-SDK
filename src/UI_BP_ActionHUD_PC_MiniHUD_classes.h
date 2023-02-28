// WidgetBlueprintGeneratedClass UI_BP_ActionHUD_PC_MiniHUD.UI_BP_ActionHUD_PC_MiniHUD_C
// Size: 0x2b8 (Inherited: 0x268)
struct UUI_BP_ActionHUD_PC_MiniHUD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* Group1; // 0x270(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* Group2; // 0x278(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* Group3; // 0x280(0x08)
	struct UUI_BP_MiniSelectionDiamond_C* Group4; // 0x288(0x08)
	int32_t GroupId; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct TArray<struct UUI_BP_MiniSelectionDiamond_C*> ActionGroupArray; // 0x298(0x10)
	struct TArray<struct UUI_BP_MiniSelectionDiamond_C*> GropuArray; // 0x2a8(0x10)

	void SetHUDGroup(int32_t NewGroupIndex, int32_t AvailableGroups); // Function UI_BP_ActionHUD_PC_MiniHUD.UI_BP_ActionHUD_PC_MiniHUD_C.SetHUDGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ActionHUD_PC_MiniHUD.UI_BP_ActionHUD_PC_MiniHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ActionHUD_PC_MiniHUD(int32_t EntryPoint); // Function UI_BP_ActionHUD_PC_MiniHUD.UI_BP_ActionHUD_PC_MiniHUD_C.ExecuteUbergraph_UI_BP_ActionHUD_PC_MiniHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

