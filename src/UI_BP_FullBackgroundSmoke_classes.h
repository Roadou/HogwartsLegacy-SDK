// WidgetBlueprintGeneratedClass UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C
// Size: 0x42c (Inherited: 0x370)
struct UUI_BP_FullBackgroundSmoke_C : UScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UPhoenixImage* PhoenixImage_Aurora; // 0x378(0x08)
	struct UPhoenixImage* PhoenixImage_BackSmokePlate; // 0x380(0x08)
	struct UPhoenixImage* PhoenixImage_FrontGlow; // 0x388(0x08)
	struct FMulticastInlineDelegate AbortInteraction; // 0x390(0x10)
	struct FMulticastInlineDelegate StartPreview; // 0x3a0(0x10)
	struct FMulticastInlineDelegate LeavePreview; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnItemPurchased; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnItemSold; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnItemPurchaseFailedNoMoney; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnItemPurchaseFailedNoSpace; // 0x3f0(0x10)
	float MatRef_BorderGlow; // 0x400(0x04)
	float MatRef_FillGlow; // 0x404(0x04)
	float MatRef_MoveY; // 0x408(0x04)
	float MatRef_Rotate; // 0x40c(0x04)
	float MatRef_MaskLerpAlpha; // 0x410(0x04)
	float MatRef_Move; // 0x414(0x04)
	float MatRef_Move2; // 0x418(0x04)
	enum class UI_BP_BackgroundSmoke_Enum BackSmokeType; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	float MaterialOpacity; // 0x420(0x04)
	float GlowOpacity; // 0x424(0x04)
	float AuroraOpacity; // 0x428(0x04)

	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroEnded(int32_t IntroType); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnIntroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent_2(); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.SequenceEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FullBackgroundSmoke(int32_t EntryPoint); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.ExecuteUbergraph_UI_BP_FullBackgroundSmoke // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnItemPurchaseFailedNoSpace__DelegateSignature(); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnItemPurchaseFailedNoSpace__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemPurchaseFailedNoMoney__DelegateSignature(); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnItemPurchaseFailedNoMoney__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemSold__DelegateSignature(); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnItemSold__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemPurchased__DelegateSignature(); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnItemPurchased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LeavePreview__DelegateSignature(struct FString PreviewedGearID); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.LeavePreview__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartPreview__DelegateSignature(struct FString PreviewedGearID); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.StartPreview__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AbortInteraction__DelegateSignature(); // Function UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.AbortInteraction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

