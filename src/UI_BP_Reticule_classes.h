// WidgetBlueprintGeneratedClass UI_BP_Reticule.UI_BP_Reticule_C
// Size: 0x4c0 (Inherited: 0x3c8)
struct UUI_BP_Reticule_C : UReticule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* FadeAimRing; // 0x3d0(0x08)
	struct UWidgetAnimation* FadeDotSkin; // 0x3d8(0x08)
	struct UWidgetAnimation* PulsePrimary; // 0x3e0(0x08)
	struct UWidgetAnimation* FadeOutFinisher; // 0x3e8(0x08)
	struct UImage* Aim_Shot; // 0x3f0(0x08)
	struct UImage* AimModeCircle; // 0x3f8(0x08)
	struct UImage* BestFinisherTargetImage; // 0x400(0x08)
	struct UImage* BestFinisherTargetLinearImage; // 0x408(0x08)
	struct UCanvasPanel* CombatReticule; // 0x410(0x08)
	struct UCanvasPanel* Dot_CP; // 0x418(0x08)
	struct UCanvasPanel* DotSkin_CP; // 0x420(0x08)
	struct UImage* FinisherCircleLinearImage; // 0x428(0x08)
	struct UImage* FinisherRingLinearImage; // 0x430(0x08)
	struct UImage* Glitter; // 0x438(0x08)
	struct UImage* Locking; // 0x440(0x08)
	struct UCanvasPanel* MouseAutoTargetDot; // 0x448(0x08)
	struct UImage* Sub; // 0x450(0x08)
	struct UImage* Sub_Locked; // 0x458(0x08)
	struct UImage* Sub_Weak_Locked; // 0x460(0x08)
	struct UImage* SubWeak; // 0x468(0x08)
	struct UCanvasPanel* TargetReticule; // 0x470(0x08)
	struct UImage* TargetRing; // 0x478(0x08)
	struct UCanvasPanel* TargetRingCanvas; // 0x480(0x08)
	struct UImage* CurrentSub; // 0x488(0x08)
	struct UImage* CurrentFinisherCircleImage; // 0x490(0x08)
	struct UImage* CurrentFinisherRingImage; // 0x498(0x08)
	struct UImage* CurrentBestFinisherTargetImage; // 0x4a0(0x08)
	struct UObject* TestStateMachine; // 0x4a8(0x08)
	struct FVector2D PrimaryPosition; // 0x4b0(0x08)
	struct UGameLogicObject* GameLogicObject; // 0x4b8(0x08)

	void Get Game Logic Object(struct UGameLogicObject*& GameLogicObject); // Function UI_BP_Reticule.UI_BP_Reticule_C.Get Game Logic Object // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTargetRingPosition(struct FVector2D Position); // Function UI_BP_Reticule.UI_BP_Reticule_C.SetTargetRingPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToIdle(); // Function UI_BP_Reticule.UI_BP_Reticule_C.ToIdle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ApplyCircularFinisher(); // Function UI_BP_Reticule.UI_BP_Reticule_C.ApplyCircularFinisher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ApplyLinerFinisher(); // Function UI_BP_Reticule.UI_BP_Reticule_C.ApplyLinerFinisher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStateBP(enum class EReticuleState State); // Function UI_BP_Reticule.UI_BP_Reticule_C.SetStateBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideAll(); // Function UI_BP_Reticule.UI_BP_Reticule_C.HideAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToFinisherInactive(); // Function UI_BP_Reticule.UI_BP_Reticule_C.ToFinisherInactive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToFinisherActive(); // Function UI_BP_Reticule.UI_BP_Reticule_C.ToFinisherActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetVisibilityState(bool Visible, enum class ESlateVisibility& VisibilityState); // Function UI_BP_Reticule.UI_BP_Reticule_C.GetVisibilityState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSubImage(struct UImage*& SubImage); // Function UI_BP_Reticule.UI_BP_Reticule_C.GetSubImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetWeakSubImage(struct UImage*& WeakSubImage); // Function UI_BP_Reticule.UI_BP_Reticule_C.GetWeakSubImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCurrentSub(struct UImage* NewSub); // Function UI_BP_Reticule.UI_BP_Reticule_C.SetCurrentSub // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectWeakSub(bool UseIt); // Function UI_BP_Reticule.UI_BP_Reticule_C.SelectWeakSub // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowAimShot(bool Visible); // Function UI_BP_Reticule.UI_BP_Reticule_C.ShowAimShot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FireFade(); // Function UI_BP_Reticule.UI_BP_Reticule_C.FireFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Fire(); // Function UI_BP_Reticule.UI_BP_Reticule_C.Fire // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToUnlock(); // Function UI_BP_Reticule.UI_BP_Reticule_C.ToUnlock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToLock(); // Function UI_BP_Reticule.UI_BP_Reticule_C.ToLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPrimaryPosition(struct FVector2D Position); // Function UI_BP_Reticule.UI_BP_Reticule_C.SetPrimaryPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowPrimary(bool Visible); // Function UI_BP_Reticule.UI_BP_Reticule_C.ShowPrimary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSubPosition(struct FVector2D Position); // Function UI_BP_Reticule.UI_BP_Reticule_C.SetSubPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowSub(bool Visible); // Function UI_BP_Reticule.UI_BP_Reticule_C.ShowSub // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_ShowDot_K2Node_GameLogicBoolResultEvent_4(bool CachedResult); // Function UI_BP_Reticule.UI_BP_Reticule_C.GameLogicElementEvt_ShowDot_K2Node_GameLogicBoolResultEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_ShowRing_K2Node_GameLogicBoolResultEvent_3(bool CachedResult); // Function UI_BP_Reticule.UI_BP_Reticule_C.GameLogicElementEvt_ShowRing_K2Node_GameLogicBoolResultEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_HasAutoTarget_K2Node_GameLogicBoolResultEvent_2(bool CachedResult); // Function UI_BP_Reticule.UI_BP_Reticule_C.GameLogicElementEvt_HasAutoTarget_K2Node_GameLogicBoolResultEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_HasAimTarget_K2Node_GameLogicBoolResultEvent_1(bool CachedResult); // Function UI_BP_Reticule.UI_BP_Reticule_C.GameLogicElementEvt_HasAimTarget_K2Node_GameLogicBoolResultEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void HandleFadeFinisher(); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleFadeFinisher // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimToIdle(); // Function UI_BP_Reticule.UI_BP_Reticule_C.AnimToIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupForCircularFinisher(); // Function UI_BP_Reticule.UI_BP_Reticule_C.SetupForCircularFinisher // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleOverlapping(bool Overlapping); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleOverlapping // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UseWeakReticuleBP(bool InUseWeakSub); // Function UI_BP_Reticule.UI_BP_Reticule_C.UseWeakReticuleBP // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleFire(); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleShow(bool IsVisible); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleShow // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleShowSub(bool IsVisible); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleShowSub // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleSetPrimaryPosition(struct FVector2D Position); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleSetPrimaryPosition // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleSetSubPosition(struct FVector2D Position); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleSetSubPosition // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleShowTargetReticule(bool IsVisible); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleShowTargetReticule // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleShowCombatReticule(bool IsVisible); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleShowCombatReticule // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleSetTargetRingPosition(struct FVector2D Position); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleSetTargetRingPosition // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleBestOverlapping(bool Overlapping); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleBestOverlapping // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleFinisherActiveChanged(bool FinisherActiveIn); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleFinisherActiveChanged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleShowRing(bool IsVisible); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleShowRing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HandleSetState(enum class EReticuleState State); // Function UI_BP_Reticule.UI_BP_Reticule_C.HandleSetState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Destruct(); // Function UI_BP_Reticule.UI_BP_Reticule_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_Reticule.UI_BP_Reticule_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetupForLinearFinisher(); // Function UI_BP_Reticule.UI_BP_Reticule_C.SetupForLinearFinisher // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_Reticule(int32_t EntryPoint); // Function UI_BP_Reticule.UI_BP_Reticule_C.ExecuteUbergraph_UI_BP_Reticule // (Final|UbergraphFunction) // @ game+0x38a7480
};

