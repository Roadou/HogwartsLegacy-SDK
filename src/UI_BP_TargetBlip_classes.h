// WidgetBlueprintGeneratedClass UI_BP_TargetBlip.UI_BP_TargetBlip_C
// Size: 0x3db (Inherited: 0x2e8)
struct UUI_BP_TargetBlip_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* FadeFinisherOut; // 0x2f0(0x08)
	struct UWidgetAnimation* FadeFinisherIn; // 0x2f8(0x08)
	struct UWidgetAnimation* ShowFinisher; // 0x300(0x08)
	struct UWidgetAnimation* ShowAlertMeter; // 0x308(0x08)
	struct UWidgetAnimation* ShowDiscoveredIcon; // 0x310(0x08)
	struct UImage* AlertBG; // 0x318(0x08)
	struct UImage* Burst; // 0x320(0x08)
	struct UImage* DiscoveredIcon; // 0x328(0x08)
	struct UImage* FadeDiamond; // 0x330(0x08)
	struct UCanvasPanel* FinisherOverlay; // 0x338(0x08)
	struct UOverlay* Left_FinisherBumper; // 0x340(0x08)
	struct UWidgetSwitcher* LeftSideSwitcher; // 0x348(0x08)
	struct UImage* NPC_Alert; // 0x350(0x08)
	struct UImage* NPC_Alert_Fill; // 0x358(0x08)
	struct UCanvasPanel* NPC_AlertMeterGroup; // 0x360(0x08)
	struct UCanvasPanel* NPC_DiscoveredIconGroup; // 0x368(0x08)
	struct UOverlay* Overlay_KBM; // 0x370(0x08)
	struct UCanvasPanel* ResizeCanvas; // 0x378(0x08)
	struct UOverlay* Right_FinisherBumper; // 0x380(0x08)
	struct UWidgetSwitcher* RightSideSwitcher; // 0x388(0x08)
	struct UImage* TargetBlip; // 0x390(0x08)
	struct UOverlay* UsingKBM_Overlay; // 0x398(0x08)
	struct AActor* ParentActor; // 0x3a0(0x08)
	struct UBP_EnemyAI_C* EnemyAIComponent; // 0x3a8(0x08)
	enum class ENPC_TargetAwareState AwareState; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct UObjectStateInfo* ObjectStateInfo; // 0x3b8(0x08)
	struct UCallOutComponent* CallOutComponent; // 0x3c0(0x08)
	bool WidgetSetupComplete; // 0x3c8(0x01)
	bool IsOffscreenWidget; // 0x3c9(0x01)
	bool FinisherState; // 0x3ca(0x01)
	char pad_3CB[0x5]; // 0x3cb(0x05)
	struct ABiped_Player* Biped_Player; // 0x3d0(0x08)
	bool HasOffscreenProxy; // 0x3d8(0x01)
	bool IsLastTarget; // 0x3d9(0x01)
	bool IsAnimating; // 0x3da(0x01)

	struct UWidget* GetOffscreenIndicator(); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.GetOffscreenIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float GetOutroDuration(int32_t OutroType); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.GetOutroDuration // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SequenceEvent__ENTRYPOINTUI_BP_TargetBlip_1(); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.SequenceEvent__ENTRYPOINTUI_BP_TargetBlip_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateFinisherCallout(bool VisibilityCheck); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.UpdateFinisherCallout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateFinisherText(); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.UpdateFinisherText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupBipedPlayer(); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetupBipedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupCharacterBlip(); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetupCharacterBlip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupCreatureBlip(); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetupCreatureBlip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AlertAnimationFinished(); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.AlertAnimationFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Callout_TargetSighted(struct UObject* Object); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.Callout_TargetSighted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Callout_TargetLost(struct UObject* Object); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.Callout_TargetLost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMeterVisibility(bool Visible, bool FromUpdate); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetMeterVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AwareStateChangeHandler(enum class ENPC_TargetAwareState AwareType); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.AwareStateChangeHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AttackStateUpdate(bool Unblockable, bool Revealio, enum class EEnemy_AttackThreatState AttackThreatState); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.AttackStateUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitiateAlert(); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.InitiateAlert // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AlertUpdate(struct FLinearColor Tint Color Specified Color, enum class ESlateVisibility Visibility); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.AlertUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SenseFloatUpdate(float Sense); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.SenseFloatUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AwareStateChange(enum class ENPC_TargetAwareState AlertType, bool FromUpdate); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.AwareStateChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_CriticalHealthFinisherTargeting_K2Node_GameLogicBoolResultEvent_1(bool CachedResult); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.GameLogicElementEvt_CriticalHealthFinisherTargeting_K2Node_GameLogicBoolResultEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ShowWidget(bool Revealio); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.ShowWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AttackThreatDataChange(bool Revealio); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.AttackThreatDataChange // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetIsOffscreenCallout(bool IsOffscreen); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetIsOffscreenCallout // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AwareStateInfoChanged(bool bFromUpdate); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.AwareStateInfoChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateFinisherState(bool NewState); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.UpdateFinisherState // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupWidget(struct AActor* Parent, struct UCallOutComponent* CallOutComponent); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetupWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHasOffscreenProxyActive(bool HasOffscreenProxy); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.SetHasOffscreenProxyActive // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCallOutUI(struct FName CharacterID, float BarPercent); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.UpdateCallOutUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowButtonGraphicsFlagChanged(struct UObject* Caller, int32_t int); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.ShowButtonGraphicsFlagChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RetargetSameEnemy(); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.RetargetSameEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_TargetBlip(int32_t EntryPoint); // Function UI_BP_TargetBlip.UI_BP_TargetBlip_C.ExecuteUbergraph_UI_BP_TargetBlip // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

