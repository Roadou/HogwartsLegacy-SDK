// WidgetBlueprintGeneratedClass UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C
// Size: 0x4f8 (Inherited: 0x328)
struct UUI_BP_BroomRaceHUD_C : UPhoenixUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* ShowTimeSummary; // 0x330(0x08)
	struct UWidgetAnimation* ShowTimePenalty; // 0x338(0x08)
	struct UWidgetAnimation* ShowGatesUI; // 0x340(0x08)
	struct UWidgetAnimation* EndOfRaceTransition; // 0x348(0x08)
	struct UWidgetAnimation* BubbleCountdownOn; // 0x350(0x08)
	struct UWidgetAnimation* BRResultsPopupOff; // 0x358(0x08)
	struct UWidgetAnimation* BRResultsPopupOn; // 0x360(0x08)
	struct UWidgetAnimation* BestTimeResultsOff; // 0x368(0x08)
	struct UWidgetAnimation* BestTimeResultsOn; // 0x370(0x08)
	struct UPhoenixTextBlock* BestTimeAmount; // 0x378(0x08)
	struct UPhoenixTextBlock* BestTimeNumber; // 0x380(0x08)
	struct UPhoenixTextBlock* BestTimeResults; // 0x388(0x08)
	struct UCanvasPanel* BestTimeResultsPopup; // 0x390(0x08)
	struct UCanvasPanel* CountDownGroup; // 0x398(0x08)
	struct UPhoenixTextBlock* CurrentGates; // 0x3a0(0x08)
	struct UOverlay* EndOfRaceBG; // 0x3a8(0x08)
	struct UOverlay* EndOfRaceTimePanel; // 0x3b0(0x08)
	struct UOverlay* ExitLegendPanel; // 0x3b8(0x08)
	struct UPhoenixTextBlock* PenaltyTimeHeader; // 0x3c0(0x08)
	struct UPhoenixTextBlock* PenaltyTimeText; // 0x3c8(0x08)
	struct UPhoenixImage* PhoenixImage_11; // 0x3d0(0x08)
	struct UPhoenixImage* PhoenixImage_252; // 0x3d8(0x08)
	struct UPhoenixTextBlock* PlayerTime; // 0x3e0(0x08)
	struct UPhoenixTextBlock* PlayerTimeResult; // 0x3e8(0x08)
	struct UPhoenixTextBlock* RawTimeText; // 0x3f0(0x08)
	struct UCanvasPanel* ResultsPopup; // 0x3f8(0x08)
	struct UPhoenixTextBlock* TimePenaltyText; // 0x400(0x08)
	struct UPhoenixTextBlock* TotalGates; // 0x408(0x08)
	struct UPhoenixTextBlock* TotalTimeText; // 0x410(0x08)
	struct UUI_BP_BroomHUD_C* UI_BP_BroomHUD; // 0x418(0x08)
	struct UUI_BP_LegendItem_C* UI_BP_LegendItem; // 0x420(0x08)
	struct ARace* RaceObj; // 0x428(0x08)
	struct AFlyingBroom* BroomObj; // 0x430(0x08)
	int32_t OutroType; // 0x438(0x04)
	int32_t MissedGates; // 0x43c(0x04)
	bool IsRaceComplete; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FHermesBPDelegateHandle OnCountdownBeginHandle; // 0x448(0x10)
	struct FHermesBPDelegateHandle CountdownUpdateHandle; // 0x458(0x10)
	struct FHermesBPDelegateHandle CountdownCompleteHandle; // 0x468(0x10)
	struct FHermesBPDelegateHandle GateHitHandle; // 0x478(0x10)
	struct FHermesBPDelegateHandle MissedGateHandle; // 0x488(0x10)
	struct FHermesBPDelegateHandle RaceFinishedHandle; // 0x498(0x10)
	struct FHermesBPDelegateHandle BoostHandle; // 0x4a8(0x10)
	struct FHermesBPDelegateHandle BoostEndHandle; // 0x4b8(0x10)
	struct FHermesBPDelegateHandle BoostGainStartHandle; // 0x4c8(0x10)
	struct FHermesBPDelegateHandle BoostGainEndHandle; // 0x4d8(0x10)
	struct FHermesBPDelegateHandle RaceAbandonedHandle; // 0x4e8(0x10)

	void ClearHUD(); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.ClearHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearRaceInfo(); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.ClearRaceInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRaceInfo(); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.SetRaceInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RaceComplete(bool Abandoned); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.RaceComplete // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayCountdownAnim(int32_t CountdownNum); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.PlayCountdownAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_BestTimeResultsOn_K2Node_WidgetAnimationEvent_1(); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.WidgetAnimationEvt_BestTimeResultsOn_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_BRResultsPopupOn_K2Node_WidgetAnimationEvent_2(); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.WidgetAnimationEvt_BRResultsPopupOn_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void OnOutroStarted(int32_t OutroType, float OutroDuration); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnOutroStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroEnded(int32_t OutroType); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnOutroEnded // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void WidgetAnimationEvt_ShowTimeSummary_K2Node_WidgetAnimationEvent_3(); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.WidgetAnimationEvt_ShowTimeSummary_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void Show(); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hide(); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRaceCountdownBegin(struct UObject* Caller, int32_t int); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnRaceCountdownBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRaceCountdownUpdate(struct UObject* Caller, int32_t int); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnRaceCountdownUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRaceCountdownComplete(struct UObject* Caller, int32_t int); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnRaceCountdownComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitGate(struct UObject* Caller, int32_t int); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnHitGate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMissedGatePenalty(struct UObject* Caller, int32_t int); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnMissedGatePenalty // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRaceFinished(struct UObject* Caller); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnRaceFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HighBoostGainStart(struct UObject* Caller); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.HighBoostGainStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HighBoostGainEnd(struct UObject* Caller); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.HighBoostGainEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BroomBoost(struct UObject* Caller, struct AActor* Actor); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.BroomBoost // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BroomBoostEnd(struct UObject* Caller, struct AActor* Actor); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.BroomBoostEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRaceAbandoned(struct UObject* Caller); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnRaceAbandoned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BroomRaceHUD(int32_t EntryPoint); // Function UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.ExecuteUbergraph_UI_BP_BroomRaceHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

