// WidgetBlueprintGeneratedClass UI_BP_InteractBlip.UI_BP_InteractBlip_C
// Size: 0x3f0 (Inherited: 0x2e8)
struct UUI_BP_InteractBlip_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* FadeintoInteract; // 0x2f0(0x08)
	struct UPhoenixRichTextBlock* ActionText; // 0x2f8(0x08)
	struct UCanvasPanel* Blip; // 0x300(0x08)
	struct UPhoenixRichTextBlock* ButtonCallout; // 0x308(0x08)
	struct UCanvasPanel* ButtonPrompt; // 0x310(0x08)
	struct UPhoenixTextBlock* descriptionText; // 0x318(0x08)
	struct UImage* LockBG; // 0x320(0x08)
	struct UCanvasPanel* Meter; // 0x328(0x08)
	struct UImage* meterBar; // 0x330(0x08)
	struct UImage* MissionImage; // 0x338(0x08)
	struct UCanvasPanel* NoMeterButton; // 0x340(0x08)
	struct UScaleBox* seperator; // 0x348(0x08)
	struct UCanvasPanel* SquareMeter; // 0x350(0x08)
	struct UImage* squareMeterBar_2; // 0x358(0x08)
	struct UImage* TargetBlip; // 0x360(0x08)
	struct UImage* TrackBorder; // 0x368(0x08)
	struct AActor* ParentActor; // 0x370(0x08)
	struct UBP_EnemyAI_C* EnemyAIComponent; // 0x378(0x08)
	struct UObjectStateInfo* ObjectStateInfo; // 0x380(0x08)
	bool Finisher; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UCallOutComponent* CallOutComponent; // 0x390(0x08)
	struct ABiped_Player* PlayerPawn; // 0x398(0x08)
	bool InteractHeld; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	float ChargeTime; // 0x3a4(0x04)
	float HeldTime; // 0x3a8(0x04)
	float FadeSpeed; // 0x3ac(0x04)
	struct FHermesBPDelegateHandle InteractButtonPressedHandle; // 0x3b0(0x10)
	struct FHermesBPDelegateHandle InteractCancelledHandle; // 0x3c0(0x10)
	struct FHermesBPDelegateHandle RefreshCalloutsHandle; // 0x3d0(0x10)
	struct FHermesBPDelegateHandle ShowButtonsFlagChangedHandle; // 0x3e0(0x10)

	struct UWidget* GetOffscreenIndicator(); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.GetOffscreenIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float GetOutroDuration(int32_t OutroType); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.GetOutroDuration // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTrackBorderIcon(struct UTexture2D* LoadedTex, struct UObject* CallbackObj); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.SetTrackBorderIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MeterVisibility(struct UCognitionStimuliSourceComponent* CogStimSource); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.MeterVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowingKeyboard(bool& Result); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.ShowingKeyboard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ShowButtonInfo(bool Condition); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.ShowButtonInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FSlateColor GetTextColor(struct UCognitionStimuliSourceComponent* CognitionStimuliSourceComponent); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.GetTextColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MissionIcon(); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.MissionIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetMeterBar(); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.ResetMeterBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActionSetup(); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.ActionSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_InteractButtonWatcher_Prompt_K2Node_GameLogicBoolResultEvent_1(bool CachedResult); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.GameLogicElementEvt_InteractButtonWatcher_Prompt_K2Node_GameLogicBoolResultEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void UpdateCallOutUI(struct FName CharacterID, float BarPercent); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.UpdateCallOutUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetupWidget(struct AActor* Parent, struct UCallOutComponent* CallOutComponent); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.SetupWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowWidget(bool Revealio); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.ShowWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionButtonPressed(struct UObject* Caller); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.InteractionButtonPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionCancelled(struct UObject* Caller); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.InteractionCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetIsOffscreenCallout(bool IsOffscreen); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.SetIsOffscreenCallout // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHasOffscreenProxyActive(bool HasOffscreenProxy); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.SetHasOffscreenProxyActive // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AwareStateInfoChanged(bool bFromUpdate); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.AwareStateInfoChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AttackThreatDataChange(bool Revealio); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.AttackThreatDataChange // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RefreshButtonCallouts(struct UObject* Caller); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.RefreshButtonCallouts // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BeaconChanged(); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.BeaconChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowButtonGraphicsFlagChanged(struct UObject* Caller, int32_t int); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.ShowButtonGraphicsFlagChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_InteractBlip(int32_t EntryPoint); // Function UI_BP_InteractBlip.UI_BP_InteractBlip_C.ExecuteUbergraph_UI_BP_InteractBlip // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

