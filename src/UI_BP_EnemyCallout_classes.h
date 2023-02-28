// WidgetBlueprintGeneratedClass UI_BP_EnemyCallout.UI_BP_EnemyCallout_C
// Size: 0x4c8 (Inherited: 0x328)
struct UUI_BP_EnemyCallout_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Outro_SparksTime; // 0x330(0x08)
	struct UWidgetAnimation* Outro_Erode; // 0x338(0x08)
	struct UWidgetAnimation* Outro_Normal; // 0x340(0x08)
	struct UWidgetAnimation* Intro; // 0x348(0x08)
	struct UImage* EmbersCard; // 0x350(0x08)
	struct UImage* EnemyLevelTriangle; // 0x358(0x08)
	struct UImage* EnemyLevelTriangleShadow; // 0x360(0x08)
	struct URetainerBox* ErosionEffect; // 0x368(0x08)
	struct UUI_BP_FancyEnemyHealthBar_C* FancyHealthBar; // 0x370(0x08)
	struct UOverlay* FrameMain; // 0x378(0x08)
	struct UPhoenixTextBlock* LevelText; // 0x380(0x08)
	struct UHorizontalBox* nameBox; // 0x388(0x08)
	struct UOverlay* NPCStatus_Level; // 0x390(0x08)
	struct UPhoenixTextBlock* TargetName_Label; // 0x398(0x08)
	struct UObjectStateInfo* ObjectStateInfo; // 0x3a0(0x08)
	struct ANPC_Character* NPC_Character; // 0x3a8(0x08)
	struct FRuntimeFloatCurve IntroCurve; // 0x3b0(0x88)
	struct FRuntimeFloatCurve OutroCurve; // 0x438(0x88)
	struct UMaterialInstanceDynamic* ErosionMaterial; // 0x4c0(0x08)

	struct UWidget* GetOffscreenIndicator(); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.GetOffscreenIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float GetOutroDuration(int32_t OutroType); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.GetOutroDuration // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NPC Character State Setup(struct ANPC_Character* NPC_Character); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.NPC Character State Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HealthChanged(struct AActor* Target, float InHealthChange, bool IndicateHUD); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.HealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowWidget(bool Revealio); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.ShowWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupWidget(struct AActor* Parent, struct UCallOutComponent* CallOutComponent); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.SetupWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIntroStarted(int32_t IntroType, float IntroDuration); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.OnIntroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UpdateCallOutUI(struct FName CharacterID, float BarPercent); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.UpdateCallOutUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsOffscreenCallout(bool IsOffscreen); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.SetIsOffscreenCallout // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHasOffscreenProxyActive(bool HasOffscreenProxy); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.SetHasOffscreenProxyActive // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AwareStateInfoChanged(bool bFromUpdate); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.AwareStateInfoChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AttackThreatDataChange(bool Revealio); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.AttackThreatDataChange // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_EnemyCallout(int32_t EntryPoint); // Function UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.ExecuteUbergraph_UI_BP_EnemyCallout // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

