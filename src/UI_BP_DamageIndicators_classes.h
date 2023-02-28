// WidgetBlueprintGeneratedClass UI_BP_DamageIndicators.UI_BP_DamageIndicators_C
// Size: 0x2f8 (Inherited: 0x2e8)
struct UUI_BP_DamageIndicators_C : UDamageIndicatorsBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UCanvasPanel* Root; // 0x2f0(0x08)

	void Construct(); // Function UI_BP_DamageIndicators.UI_BP_DamageIndicators_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnNPC_Damaged(struct FVector2D& ScreenPos, float Damage, bool IsVulnerableDamage); // Function UI_BP_DamageIndicators.UI_BP_DamageIndicators_C.OnNPC_Damaged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_DamageIndicators(int32_t EntryPoint); // Function UI_BP_DamageIndicators.UI_BP_DamageIndicators_C.ExecuteUbergraph_UI_BP_DamageIndicators // (Final|UbergraphFunction) // @ game+0x38a7480
};

