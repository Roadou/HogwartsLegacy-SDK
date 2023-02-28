// WidgetBlueprintGeneratedClass UI_BP_MissionCompleteBanner.UI_BP_MissionCompleteBanner_C
// Size: 0x2b8 (Inherited: 0x268)
struct UUI_BP_MissionCompleteBanner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* HideMissionComplete_Anim; // 0x270(0x08)
	struct UWidgetAnimation* ShowMissionComplete_Anim; // 0x278(0x08)
	struct UPhoenixTextBlock* CompleteMissionName; // 0x280(0x08)
	struct UPhoenixTextBlock* CompleteTitle; // 0x288(0x08)
	struct UImage* MissionCompleteIcon; // 0x290(0x08)
	struct UImage* WinCloud; // 0x298(0x08)
	enum class BannerUpdateType BannerUpdateType; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FString MissionName; // 0x2a8(0x10)

	void MissionCompleteBannerDone(); // Function UI_BP_MissionCompleteBanner.UI_BP_MissionCompleteBanner_C.MissionCompleteBannerDone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideMissionComplete(); // Function UI_BP_MissionCompleteBanner.UI_BP_MissionCompleteBanner_C.HideMissionComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowMissionComplete(enum class BannerUpdateType updateType, struct FString MissionTitle, struct FString MissionName, struct FString MissionIcon); // Function UI_BP_MissionCompleteBanner.UI_BP_MissionCompleteBanner_C.ShowMissionComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IconLoaded(struct UTexture2D* LoadedTexture, struct UObject* CallbackParam); // Function UI_BP_MissionCompleteBanner.UI_BP_MissionCompleteBanner_C.IconLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MissionCompleteBanner(int32_t EntryPoint); // Function UI_BP_MissionCompleteBanner.UI_BP_MissionCompleteBanner_C.ExecuteUbergraph_UI_BP_MissionCompleteBanner // (Final|UbergraphFunction) // @ game+0x38a7480
};

