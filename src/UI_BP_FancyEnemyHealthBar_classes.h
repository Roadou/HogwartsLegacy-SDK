// WidgetBlueprintGeneratedClass UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C
// Size: 0x370 (Inherited: 0x348)
struct UUI_BP_FancyEnemyHealthBar_C : UFancyProgressBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Filled; // 0x350(0x08)
	struct UWidgetAnimation* Depleted; // 0x358(0x08)
	struct UImage* TheBar; // 0x360(0x08)
	struct UMaterialInstanceDynamic* CachedMaterial; // 0x368(0x08)

	void Construct(); // Function UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ProgressChanged(float Progress); // Function UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.ProgressChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void GhostProgressChanged(float GhostProgress); // Function UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.GhostProgressChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DepletedFeedback(); // Function UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.DepletedFeedback // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void FilledFeedback(); // Function UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.FilledFeedback // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_FancyEnemyHealthBar(int32_t EntryPoint); // Function UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.ExecuteUbergraph_UI_BP_FancyEnemyHealthBar // (Final|UbergraphFunction) // @ game+0x38a7480
};

