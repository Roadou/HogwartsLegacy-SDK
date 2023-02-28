// WidgetBlueprintGeneratedClass UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C
// Size: 0x298 (Inherited: 0x268)
struct UUI_BP_CreatureNeedWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UPhoenixImage* iconBack; // 0x270(0x08)
	struct UPhoenixImage* NeedIcon; // 0x278(0x08)
	struct FVector2D BrushSize; // 0x280(0x08)
	enum class ECreatureNeed CreatureNeed; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UCreatureState* CreatureState; // 0x290(0x08)

	void UpdateWithCreatureState(struct UCreatureState* CreatureState); // Function UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C.UpdateWithCreatureState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update(bool IsNeedMet); // Function UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PreConstruct(bool IsDesignTime); // Function UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnNeedsChanged(); // Function UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C.OnNeedsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreatureNeedWidget(int32_t EntryPoint); // Function UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C.ExecuteUbergraph_UI_BP_CreatureNeedWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

