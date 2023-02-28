// BlueprintGeneratedClass RootLevel.RootLevel_C
// Size: 0x2b0 (Inherited: 0x250)
struct ARootLevel_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ULevelStreamingDynamic* FrontendLevel; // 0x258(0x08)
	struct ULevelStreamingDynamic* GlobalSkyLevel; // 0x260(0x08)
	struct ULevelStreamingDynamic* IntroRootLevel; // 0x268(0x08)
	struct ULevelStreamingDynamic* AvatarCreatorLevel; // 0x270(0x08)
	struct ULevelStreamingDynamic* LondonLevel; // 0x278(0x08)
	bool bPrintDebugStrings; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct UUI_BP_FirstTimeFlow_C* FirstTimeFlowWidget; // 0x288(0x08)
	struct FHermesBPDelegateHandle NewCharClickedHandle; // 0x290(0x10)
	struct FHermesBPDelegateHandle AvatarFinalizedHandle; // 0x2a0(0x10)

	void ShowLondonLevel(); // Function RootLevel.RootLevel_C.ShowLondonLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnloadLondonLevel(); // Function RootLevel.RootLevel_C.UnloadLondonLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadLondonLevel(); // Function RootLevel.RootLevel_C.LoadLondonLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnloadGlobalSky(); // Function RootLevel.RootLevel_C.UnloadGlobalSky // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowGlobalSky(); // Function RootLevel.RootLevel_C.ShowGlobalSky // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadGlobalSky(bool bShow); // Function RootLevel.RootLevel_C.LoadGlobalSky // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowAvatarCreatorLevel(); // Function RootLevel.RootLevel_C.ShowAvatarCreatorLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnloadAvatarCreatorLevel(); // Function RootLevel.RootLevel_C.UnloadAvatarCreatorLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadAvatarCreatorLevel(bool bShow); // Function RootLevel.RootLevel_C.LoadAvatarCreatorLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnloadFrontEnd(); // Function RootLevel.RootLevel_C.UnloadFrontEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadFrontend(); // Function RootLevel.RootLevel_C.LoadFrontend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsLoadGame(); // Function RootLevel.RootLevel_C.IsLoadGame // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ShowPlayer(bool bShow); // Function RootLevel.RootLevel_C.ShowPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetHUDVisibility(bool bVisible, bool RemovingState); // Function RootLevel.RootLevel_C.SetHUDVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AreAllSublevelsVisible(struct TArray<struct ULevelStreamingDynamic*>& Array, bool& bAllLoaded); // Function RootLevel.RootLevel_C.AreAllSublevelsVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void AreAllSublevelsLoaded(struct TArray<struct ULevelStreamingDynamic*>& Array, bool& bAllLoaded); // Function RootLevel.RootLevel_C.AreAllSublevelsLoaded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void LoadIntroRoot(); // Function RootLevel.RootLevel_C.LoadIntroRoot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PrintString(struct FString String, struct FLinearColor Color); // Function RootLevel.RootLevel_C.PrintString // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainRaised_E8EC53644D53D2AAF6BC15BCA37C5F16(); // Function RootLevel.RootLevel_C.CurtainRaised_E8EC53644D53D2AAF6BC15BCA37C5F16 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainRaised_719B12A84487D57F5F2C03BDBFDB81B0(); // Function RootLevel.RootLevel_C.CurtainRaised_719B12A84487D57F5F2C03BDBFDB81B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainRaised_8E9B3FCE44434535ED1F4898D20AE4A3(); // Function RootLevel.RootLevel_C.CurtainRaised_8E9B3FCE44434535ED1F4898D20AE4A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Complete_18ACD14D4D2AE081A6E8B095185A9E32(); // Function RootLevel.RootLevel_C.Complete_18ACD14D4D2AE081A6E8B095185A9E32 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Complete_2AA0D30B40366D78C9EF3CA710BE16FC(); // Function RootLevel.RootLevel_C.Complete_2AA0D30B40366D78C9EF3CA710BE16FC // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainRaised_B0AA608842C141D688E142948D6B420A(); // Function RootLevel.RootLevel_C.CurtainRaised_B0AA608842C141D688E142948D6B420A // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainRaised_221FAF4A49C5DE0CDD169185CB092566(); // Function RootLevel.RootLevel_C.CurtainRaised_221FAF4A49C5DE0CDD169185CB092566 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainRaised_308763E043A510A6360585929689F005(); // Function RootLevel.RootLevel_C.CurtainRaised_308763E043A510A6360585929689F005 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainRaised_0AB342D049A49891F07D05A20BF48471(); // Function RootLevel.RootLevel_C.CurtainRaised_0AB342D049A49891F07D05A20BF48471 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function RootLevel.RootLevel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnFrontEndLoaded(); // Function RootLevel.RootLevel_C.OnFrontEndLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AvatarFinalized(struct UObject* Caller); // Function RootLevel.RootLevel_C.AvatarFinalized // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFirstTimeFlowWidgetComplete(); // Function RootLevel.RootLevel_C.OnFirstTimeFlowWidgetComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayPortkeyLanding(struct UObject* Caller); // Function RootLevel.RootLevel_C.PlayPortkeyLanding // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAvCreatorLevelLoaded(); // Function RootLevel.RootLevel_C.OnAvCreatorLevelLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAvCreatorLevelShown(); // Function RootLevel.RootLevel_C.OnAvCreatorLevelShown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CarriageRideComplete(struct UObject* Caller); // Function RootLevel.RootLevel_C.CarriageRideComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function RootLevel.RootLevel_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PopupClosedEvent_Event_1(struct UPopupScreen* PopupScreen, int32_t CompletionActionIndex); // Function RootLevel.RootLevel_C.PopupClosedEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroRootLoaded(); // Function RootLevel.RootLevel_C.OnIntroRootLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnIntroRootShown(); // Function RootLevel.RootLevel_C.OnIntroRootShown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GringottsCP2Ready(struct UObject* Caller); // Function RootLevel.RootLevel_C.GringottsCP2Ready // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VoidCP3Ready(struct UObject* Caller); // Function RootLevel.RootLevel_C.VoidCP3Ready // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFrontendHidden(); // Function RootLevel.RootLevel_C.OnFrontendHidden // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLondonLevelLoaded(); // Function RootLevel.RootLevel_C.OnLondonLevelLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLondonLevelShown(); // Function RootLevel.RootLevel_C.OnLondonLevelShown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TransitionToAvatarCreator(bool bCanBackOut); // Function RootLevel.RootLevel_C.TransitionToAvatarCreator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFrontEndShown(); // Function RootLevel.RootLevel_C.OnFrontEndShown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NewCharacterClicked(struct UObject* Caller); // Function RootLevel.RootLevel_C.NewCharacterClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CancelAvatarCreator(struct UObject* Caller); // Function RootLevel.RootLevel_C.CancelAvatarCreator // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VoidCP4Ready(struct UObject* Caller); // Function RootLevel.RootLevel_C.VoidCP4Ready // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VoidCP5Ready(struct UObject* Caller); // Function RootLevel.RootLevel_C.VoidCP5Ready // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToLondon(bool bFromLoad); // Function RootLevel.RootLevel_C.GoToLondon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAllCrossGenSaveData transferred(bool bResult); // Function RootLevel.RootLevel_C.OnAllCrossGenSaveData transferred // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VoidCP6Ready(struct UObject* Caller); // Function RootLevel.RootLevel_C.VoidCP6Ready // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_RootLevel(int32_t EntryPoint); // Function RootLevel.RootLevel_C.ExecuteUbergraph_RootLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

