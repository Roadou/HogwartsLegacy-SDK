// WidgetBlueprintGeneratedClass UI_BP_ChallengeInvitation.UI_BP_ChallengeInvitation_C
// Size: 0x318 (Inherited: 0x2e8)
struct UUI_BP_ChallengeInvitation_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* FadeChallenge; // 0x2f0(0x08)
	struct UOverlay* boxBorder; // 0x2f8(0x08)
	struct UPhoenixTextBlock* Description; // 0x300(0x08)
	struct UUI_BP_Legend_Horizontal_Tooltip_C* PopupLegend; // 0x308(0x08)
	struct UPhoenixTextBlock* Title; // 0x310(0x08)

	void SetTitleAndDescription(struct FString Title, struct FString Desc); // Function UI_BP_ChallengeInvitation.UI_BP_ChallengeInvitation_C.SetTitleAndDescription // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_ChallengeInvitation.UI_BP_ChallengeInvitation_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_ChallengeInvitation.UI_BP_ChallengeInvitation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_ChallengeInvitation(int32_t EntryPoint); // Function UI_BP_ChallengeInvitation.UI_BP_ChallengeInvitation_C.ExecuteUbergraph_UI_BP_ChallengeInvitation // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

