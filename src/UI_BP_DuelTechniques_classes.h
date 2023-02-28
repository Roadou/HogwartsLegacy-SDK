// WidgetBlueprintGeneratedClass UI_BP_DuelTechniques.UI_BP_DuelTechniques_C
// Size: 0x328 (Inherited: 0x300)
struct UUI_BP_DuelTechniques_C : UDuelTechniquesHUDBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* hideDuelingTechniques; // 0x308(0x08)
	struct UWidgetAnimation* showDuelingTechniques; // 0x310(0x08)
	struct UInvalidationBox* InvalidationBox_DuelTechniques; // 0x318(0x08)
	struct UVerticalBox* techniqueList; // 0x320(0x08)

	void SequenceEvent__ENTRYPOINTUI_BP_DuelTechniques_1(); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.SequenceEvent__ENTRYPOINTUI_BP_DuelTechniques_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearTechniques(); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.ClearTechniques // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindTechnique(struct FName TechniqueID, struct UUI_BP_DuelTechnique_Item_C*& TechniqueItem); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.FindTechnique // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTechnique(struct FName TechniqueID, int32_t NewValue); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.UpdateTechnique // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Add Duel Techniques(struct TArray<struct FDuelTechnique_UIData>& TechniqueData); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.Add Duel Techniques // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFadeDuelTechniquesFinished(); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnFadeDuelTechniquesFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDuelTechniqueUpdatedByID(struct FName TechniqueID, int32_t NewValue); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnDuelTechniqueUpdatedByID // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDuelTechniquesInitialized(struct TArray<struct FDuelTechnique_UIData>& TechniqueUIData); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnDuelTechniquesInitialized // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnDuelTechniqueProgressCompletedByID(struct FName TechniqueID, bool IsNew); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnDuelTechniqueProgressCompletedByID // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnTimedTechniqueUpdated(struct FName TechniqueID, struct FText& TimeStr); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnTimedTechniqueUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnDuelTechniqueProgressFailedByID(struct FName TechniqueID, bool IsNew); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnDuelTechniqueProgressFailedByID // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDuelTechniquesDone(); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.OnDuelTechniquesDone // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_DuelTechniques(int32_t EntryPoint); // Function UI_BP_DuelTechniques.UI_BP_DuelTechniques_C.ExecuteUbergraph_UI_BP_DuelTechniques // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

