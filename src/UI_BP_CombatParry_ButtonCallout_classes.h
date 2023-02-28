// WidgetBlueprintGeneratedClass UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C
// Size: 0x464 (Inherited: 0x330)
struct UUI_BP_CombatParry_ButtonCallout_C : UCombatParryButtonCallout {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* ResetWidget; // 0x338(0x08)
	struct UWidgetAnimation* OutroNeutral; // 0x340(0x08)
	struct UWidgetAnimation* OutroSuccess; // 0x348(0x08)
	struct UWidgetAnimation* OutroFail; // 0x350(0x08)
	struct UWidgetAnimation* NormalTiming; // 0x358(0x08)
	struct UWidgetAnimation* PerfectTiming; // 0x360(0x08)
	struct UPhoenixRichTextBlock* Button; // 0x368(0x08)
	struct UPhoenixImage* ButtonFlame; // 0x370(0x08)
	struct UImage* ButtonFrame; // 0x378(0x08)
	struct UPhoenixImage* ButtonPulse; // 0x380(0x08)
	struct UCanvasPanel* Canvas; // 0x388(0x08)
	struct UImage* InitialButtonRing; // 0x390(0x08)
	struct UImage* InitialButtonRing_2; // 0x398(0x08)
	struct UImage* Ring; // 0x3a0(0x08)
	struct UBorder* RingBorder; // 0x3a8(0x08)
	struct UImage* ShatterButton; // 0x3b0(0x08)
	struct UImage* ShatterButtonFrame; // 0x3b8(0x08)
	struct UCanvasPanel* ShatteredPanel; // 0x3c0(0x08)
	struct FLinearColor ButtonColor_B; // 0x3c8(0x10)
	struct FLinearColor ButtonColor_Circle; // 0x3d8(0x10)
	struct FLinearColor ButtonColor_Y; // 0x3e8(0x10)
	struct FLinearColor ButtonColor_Triangle; // 0x3f8(0x10)
	struct FLinearColor ButtonColor_Keyboard; // 0x408(0x10)
	enum class ECombatParryType CurrentCombatParryType; // 0x418(0x01)
	enum class EUIPlatformInputDevice CurrentUIPlatformInputDevice; // 0x419(0x01)
	bool CanTweakFrame; // 0x41a(0x01)
	char pad_41B[0x1]; // 0x41b(0x01)
	float ParryTimeProgress; // 0x41c(0x04)
	bool CanPlayPerfectTiming; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	struct FLinearColor Protego_Edge; // 0x424(0x10)
	struct FLinearColor Protego_Center; // 0x434(0x10)
	struct FLinearColor Dodge_Edge; // 0x444(0x10)
	struct FLinearColor Dodge_Center; // 0x454(0x10)

	void Refresh Platform Specific Button(); // Function UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.Refresh Platform Specific Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintSetPerfectTimingState(bool bPerfectTiming); // Function UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.BlueprintSetPerfectTimingState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnInputDeviceChanged(); // Function UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.OnInputDeviceChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintSetParryType(enum class ECombatParryType ParryType); // Function UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.BlueprintSetParryType // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CombatParry_ButtonCallout(int32_t EntryPoint); // Function UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.ExecuteUbergraph_UI_BP_CombatParry_ButtonCallout // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

