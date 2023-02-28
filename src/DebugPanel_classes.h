// Class DebugPanel.DebugPanel
// Size: 0x360 (Inherited: 0x28)
struct UDebugPanel : UObject {
	char pad_28[0x30]; // 0x28(0x30)
	struct FDebugPanelControl Controls[0x4]; // 0x58(0x300)
	bool bVisible; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
};

// Class DebugPanel.DebugPanelComponent
// Size: 0x120 (Inherited: 0xc8)
struct UDebugPanelComponent : UActorComponent {
	struct TMap<struct FName, int32_t> IntVariables; // 0xc8(0x50)
	struct UDebugPanel* Panel; // 0x118(0x08)

	void ShowPanel(bool Show); // Function DebugPanel.DebugPanelComponent.ShowPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x13a3360
	bool SetVisible(enum class EDebugPanelControlID controlID, bool Visible); // Function DebugPanel.DebugPanelComponent.SetVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x13a3170
	bool SetupShadow(enum class EDebugPanelControlID controlID, struct FVector2D ShadowOffset, struct FLinearColor shadowColor); // Function DebugPanel.DebugPanelComponent.SetupShadow // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13a3240
	bool SetTextAndColor(enum class EDebugPanelControlID controlID, struct FString Text, struct FLinearColor Color); // Function DebugPanel.DebugPanelComponent.SetTextAndColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13a3030
	bool SetText(enum class EDebugPanelControlID controlID, struct FString Text); // Function DebugPanel.DebugPanelComponent.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x13a2f40
	bool SetFont(enum class EDebugPanelControlID controlID, struct FSlateFontInfo Font); // Function DebugPanel.DebugPanelComponent.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0x13a2de0
	bool SetColor(enum class EDebugPanelControlID controlID, struct FLinearColor Color); // Function DebugPanel.DebugPanelComponent.SetColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13a2d00
	bool PanelVisible(); // Function DebugPanel.DebugPanelComponent.PanelVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13a2cd0
	bool IsMultilineText(enum class EDebugPanelControlID controlID); // Function DebugPanel.DebugPanelComponent.IsMultilineText // (Final|Native|Public|BlueprintCallable) // @ game+0x13a2c40
	void HidePanel(); // Function DebugPanel.DebugPanelComponent.HidePanel // (Final|Native|Public|BlueprintCallable) // @ game+0x13a2c20
	bool EnableMultilineText(enum class EDebugPanelControlID controlID, int32_t lineLimit); // Function DebugPanel.DebugPanelComponent.EnableMultilineText // (Final|Native|Public|BlueprintCallable) // @ game+0x13a2b50
	bool DisableMultilineText(enum class EDebugPanelControlID controlID); // Function DebugPanel.DebugPanelComponent.DisableMultilineText // (Final|Native|Public|BlueprintCallable) // @ game+0x13a2ac0
	bool CreateUnique(struct UWorld* onlyForWorld); // Function DebugPanel.DebugPanelComponent.CreateUnique // (Final|Native|Public|BlueprintCallable) // @ game+0x13a29f0
	bool CreateShared(struct FName ID, struct UWorld* onlyForWorld); // Function DebugPanel.DebugPanelComponent.CreateShared // (Final|Native|Public|BlueprintCallable) // @ game+0x13a2920
	bool Created(); // Function DebugPanel.DebugPanelComponent.Created // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x13a2a90
	bool ClearText(enum class EDebugPanelControlID controlID); // Function DebugPanel.DebugPanelComponent.ClearText // (Final|Native|Public|BlueprintCallable) // @ game+0x13a2890
	bool ClearScrollingText(); // Function DebugPanel.DebugPanelComponent.ClearScrollingText // (Final|Native|Public|BlueprintCallable) // @ game+0x13a2860
	bool AppendTextLine(struct FString Text); // Function DebugPanel.DebugPanelComponent.AppendTextLine // (Final|Native|Public|BlueprintCallable) // @ game+0x13a27b0
};

// Class DebugPanel.DebugPanelImGuiWindow
// Size: 0x40 (Inherited: 0x28)
struct UDebugPanelImGuiWindow : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

