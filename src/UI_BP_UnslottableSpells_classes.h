// WidgetBlueprintGeneratedClass UI_BP_UnslottableSpells.UI_BP_UnslottableSpells_C
// Size: 0x2d8 (Inherited: 0x268)
struct UUI_BP_UnslottableSpells_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUI_BP_EssentialSpellItem_C* Alohomora; // 0x270(0x08)
	struct UUI_BP_EssentialSpellItem_C* AncientMagic; // 0x278(0x08)
	struct UUI_BP_EssentialSpellItem_C* BasicCast; // 0x280(0x08)
	struct UUI_BP_EssentialSpellItem_C* Oppugno; // 0x288(0x08)
	struct UUI_BP_EssentialSpellItem_C* Petrificus; // 0x290(0x08)
	struct UUI_BP_EssentialSpellItem_C* Protego; // 0x298(0x08)
	struct UUI_BP_EssentialSpellItem_C* Revelio; // 0x2a0(0x08)
	struct UUI_BP_EssentialSpellItem_C* Stupefy; // 0x2a8(0x08)
	struct UUniformGridPanel* UnslottableSpellsGrid; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnItemHovered; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnItemUnhovered; // 0x2c8(0x10)

	void Construct(); // Function UI_BP_UnslottableSpells.UI_BP_UnslottableSpells_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnEssentialItemHovered(struct UUI_BP_EssentialSpellItem_C* essentialItem); // Function UI_BP_UnslottableSpells.UI_BP_UnslottableSpells_C.OnEssentialItemHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEssentialItemUnhovered(); // Function UI_BP_UnslottableSpells.UI_BP_UnslottableSpells_C.OnEssentialItemUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_UnslottableSpells(int32_t EntryPoint); // Function UI_BP_UnslottableSpells.UI_BP_UnslottableSpells_C.ExecuteUbergraph_UI_BP_UnslottableSpells // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnItemUnhovered__DelegateSignature(); // Function UI_BP_UnslottableSpells.UI_BP_UnslottableSpells_C.OnItemUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnItemHovered__DelegateSignature(struct UUI_BP_EssentialSpellItem_C* essentialItem); // Function UI_BP_UnslottableSpells.UI_BP_UnslottableSpells_C.OnItemHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

