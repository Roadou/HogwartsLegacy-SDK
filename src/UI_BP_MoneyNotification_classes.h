// WidgetBlueprintGeneratedClass UI_BP_MoneyNotification.UI_BP_MoneyNotification_C
// Size: 0x2c0 (Inherited: 0x268)
struct UUI_BP_MoneyNotification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* AnimateOut; // 0x270(0x08)
	struct UWidgetAnimation* AnimateIn; // 0x278(0x08)
	struct UUI_BP_MoneyBar_C* UI_BP_MoneyBar; // 0x280(0x08)
	float Duration; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FTimerHandle DurationHandle; // 0x290(0x08)
	int32_t CurrentAmount; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FMulticastInlineDelegate NotificationComplete; // 0x2a0(0x10)
	struct FMulticastInlineDelegate AnimatingOut; // 0x2b0(0x10)

	void Increment(int32_t AddVal, bool& Success); // Function UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.Increment // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Show(int32_t Amount); // Function UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_AnimateIn_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.WidgetAnimationEvt_AnimateIn_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_AnimateOut_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.WidgetAnimationEvt_AnimateOut_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void DurationComplete(); // Function UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.DurationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MoneyNotification(int32_t EntryPoint); // Function UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.ExecuteUbergraph_UI_BP_MoneyNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void AnimatingOut__DelegateSignature(); // Function UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.AnimatingOut__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NotificationComplete__DelegateSignature(); // Function UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.NotificationComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

