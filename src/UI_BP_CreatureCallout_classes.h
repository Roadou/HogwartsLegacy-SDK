// WidgetBlueprintGeneratedClass UI_BP_CreatureCallout.UI_BP_CreatureCallout_C
// Size: 0x3a0 (Inherited: 0x2e8)
struct UUI_BP_CreatureCallout_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UBorder* Border_AlbinoColour; // 0x2f0(0x08)
	struct UBorder* Border_GenderColor; // 0x2f8(0x08)
	struct UImage* Creature_AlbinoIcon; // 0x300(0x08)
	struct UImage* Creature_GenderIcon; // 0x308(0x08)
	struct UHorizontalBox* CreaturePanel; // 0x310(0x08)
	struct UUI_BP_CreatureStatusSummary_C* CreatureStatusSummary; // 0x318(0x08)
	struct UImage* EnemyLevelTriangle; // 0x320(0x08)
	struct UProgressBar* HealthBar; // 0x328(0x08)
	struct UBorder* HealthBorder; // 0x330(0x08)
	struct UPhoenixTextBlock* LevelText; // 0x338(0x08)
	struct UBorder* nameBorder; // 0x340(0x08)
	struct UHorizontalBox* nameBox; // 0x348(0x08)
	struct UCanvasPanel* NPCStatus_Bottom; // 0x350(0x08)
	struct UBorder* npcStatusBorder; // 0x358(0x08)
	struct UPhoenixTextBlock* TargetName_Label; // 0x360(0x08)
	struct AActor* ParentActor; // 0x368(0x08)
	bool Hide bar when full; // 0x370(0x01)
	bool bHasSetCreatureName; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct UCreature_NurtureComponent* NurtureComponent; // 0x378(0x08)
	struct UCreatureState* CreatureState; // 0x380(0x08)
	struct AActor* CreatureCharacter; // 0x388(0x08)
	bool Allies; // 0x390(0x01)
	bool ForceHideBar; // 0x391(0x01)
	char pad_392[0x6]; // 0x392(0x06)
	struct UObjectStateInfo* ObjectStateInfo; // 0x398(0x08)

	struct UWidget* GetOffscreenIndicator(); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.GetOffscreenIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float GetOutroDuration(int32_t OutroType); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.GetOutroDuration // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsCreatureTame(struct ACreature_Character* Creature, bool& bIsTame); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.IsCreatureTame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateBarPercent(float HealthPercent, float DamageAmount); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.UpdateBarPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void targeted(); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.targeted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupCreatureSpecificUIWild(struct AActor* CreatureCharacterActor); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetupCreatureSpecificUIWild // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCreatureSpecificUI(struct UCreatureState* CreatureState); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.UpdateCreatureSpecificUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupCreatureSpecificUI(struct AActor* CreatureCharacterActor); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetupCreatureSpecificUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCalloutVisibility(bool IsVisible); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetCalloutVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AttackThreatDataChange(bool Revealio); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.AttackThreatDataChange // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AwareStateInfoChanged(bool bFromUpdate); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.AwareStateInfoChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHasOffscreenProxyActive(bool HasOffscreenProxy); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetHasOffscreenProxyActive // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsOffscreenCallout(bool IsOffscreen); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetIsOffscreenCallout // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCallOutUI(struct FName CharacterID, float BarPercent); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.UpdateCallOutUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupWidget(struct AActor* Parent, struct UCallOutComponent* CallOutComponent); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetupWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowWidget(bool Revealio); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.ShowWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupCreatureUI(struct AActor* CreatureActor, bool IsTamed); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetupCreatureUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HealthBarUpdate(struct AActor* Target, float InHealthChange, bool IndicateHUD); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.HealthBarUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreatureCallout(int32_t EntryPoint); // Function UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.ExecuteUbergraph_UI_BP_CreatureCallout // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

