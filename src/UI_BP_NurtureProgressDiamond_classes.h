// WidgetBlueprintGeneratedClass UI_BP_NurtureProgressDiamond.UI_BP_NurtureProgressDiamond_C
// Size: 0x28c (Inherited: 0x268)
struct UUI_BP_NurtureProgressDiamond_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UButton* HitZone; // 0x270(0x08)
	struct UImage* MainImage; // 0x278(0x08)
	struct UImage* progressMeter; // 0x280(0x08)
	float MinimumFill; // 0x288(0x04)

	void SetProgress(float Progress); // Function UI_BP_NurtureProgressDiamond.UI_BP_NurtureProgressDiamond_C.SetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetImageName(struct FString ImageName); // Function UI_BP_NurtureProgressDiamond.UI_BP_NurtureProgressDiamond_C.SetImageName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_NurtureProgressDiamond.UI_BP_NurtureProgressDiamond_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_NurtureProgressDiamond(int32_t EntryPoint); // Function UI_BP_NurtureProgressDiamond.UI_BP_NurtureProgressDiamond_C.ExecuteUbergraph_UI_BP_NurtureProgressDiamond // (Final|UbergraphFunction) // @ game+0x38a7480
};

