// WidgetBlueprintGeneratedClass UI_BP_DamageIndicator.UI_BP_DamageIndicator_C
// Size: 0x290 (Inherited: 0x268)
struct UUI_BP_DamageIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Damage; // 0x270(0x08)
	struct UPhoenixTextBlock* Number; // 0x278(0x08)
	struct UPhoenixTextBlock* Number_Stun; // 0x280(0x08)
	struct UImage* NumberRays; // 0x288(0x08)

	void SetAmount(int32_t Amount, bool IsVulnerableDamage); // Function UI_BP_DamageIndicator.UI_BP_DamageIndicator_C.SetAmount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_Damage_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_DamageIndicator.UI_BP_DamageIndicator_C.WidgetAnimationEvt_Damage_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_DamageIndicator(int32_t EntryPoint); // Function UI_BP_DamageIndicator.UI_BP_DamageIndicator_C.ExecuteUbergraph_UI_BP_DamageIndicator // (Final|UbergraphFunction) // @ game+0x38a7480
};

