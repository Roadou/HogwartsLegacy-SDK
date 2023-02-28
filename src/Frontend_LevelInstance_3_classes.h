// BlueprintGeneratedClass Frontend_LevelInstance_3.Frontend_C
// Size: 0x3b8 (Inherited: 0x250)
struct AFrontend_C : AFrontendMapScript {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	int32_t MenuMusic; // 0x258(0x04)
	struct FVector CameraLookAtTarget; // 0x25c(0x0c)
	struct UUI_BP_FrontEnd_Menu_C* FrontEndMenuWidget; // 0x268(0x08)
	bool bPrintDebugStrings; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct UUI_BP_StartPage_C* StartPageWidget; // 0x278(0x08)
	struct FFrontendPlayerState FrontendPlayerState; // 0x280(0x50)
	enum class ESanctuaryIdentity LightingIdentity; // 0x2d0(0x01)
	bool SanctuaryAvailable; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct TArray<struct TSoftObjectPtr<UWorld>> Sublevels; // 0x2d8(0x10)
	struct TArray<struct ULevelStreamingDynamic*> SublevelInstances; // 0x2e8(0x10)
	struct TMap<struct FString, struct TSoftObjectPtr<USceneRig>> BackgroundSceneRigs; // 0x2f8(0x50)
	struct TArray<struct USceneRig*> SceneRigPool; // 0x348(0x10)
	bool HasQueuedSceneRig; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct USceneRig* CurrentSceneRig; // 0x360(0x08)
	bool AllUnlocked; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct UUI_BP_PSO_FS_C* PSOScreenWidget; // 0x370(0x08)
	struct USceneRigPlayer* CurrentSceneRigPlayer; // 0x378(0x08)
	struct ASceneRigActor* CIV_Frontend_Ambient_2_ExecuteUbergraph_Frontend_RefProperty; // 0x380(0x08)
	struct AUI_BP_DummyActor_C* UI_BP_DummyActor_2_ExecuteUbergraph_Frontend_RefProperty; // 0x388(0x08)
	struct AUI_BP_DummyActor_C* UI_BP_DummyActor_2_EdGraph_1_RefProperty; // 0x390(0x08)
	struct AUI_BP_DummyActor_C* UI_BP_DummyActor_2_EdGraph_2_RefProperty; // 0x398(0x08)
	struct AUI_BP_DummyActor_C* UI_BP_DummyActor_2_EdGraph_3_RefProperty; // 0x3a0(0x08)
	struct ASceneRigActor* CIV_Frontend_Ambient_2_EdGraph_7_RefProperty; // 0x3a8(0x08)
	struct AUI_BP_DummyActor_C* UI_BP_DummyActor_2_EdGraph_9_RefProperty; // 0x3b0(0x08)

	void SetDummyVisible(bool Override Full Game Check, struct AUIDummyActor* DUMMY); // Function Frontend_LevelInstance_3.Frontend_C.SetDummyVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetUpDummyActorPresets(); // Function Frontend_LevelInstance_3.Frontend_C.SetUpDummyActorPresets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetMostRecentlyPlayedCharacter(struct FCharacterSaveGameInfo& MostRecentCharacter); // Function Frontend_LevelInstance_3.Frontend_C.GetMostRecentlyPlayedCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopSceneRigs(); // Function Frontend_LevelInstance_3.Frontend_C.StopSceneRigs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowStartPage(); // Function Frontend_LevelInstance_3.Frontend_C.ShowStartPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllLevelsVisible(bool& AllVisible); // Function Frontend_LevelInstance_3.Frontend_C.AllLevelsVisible // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void PrintString(struct FString String, struct FLinearColor Color); // Function Frontend_LevelInstance_3.Frontend_C.PrintString // (Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void UpdateLookAt(); // Function Frontend_LevelInstance_3.Frontend_C.UpdateLookAt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetGearAppearance(); // Function Frontend_LevelInstance_3.Frontend_C.ResetGearAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Apply Actor Preset(struct FName FullBodyPresetName, bool ApplyToModel); // Function Frontend_LevelInstance_3.Frontend_C.Apply Actor Preset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetRandomStartingPreset(struct FName& PresetId); // Function Frontend_LevelInstance_3.Frontend_C.GetRandomStartingPreset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_B2E67DF4413723CA78F189B21F27DAC0(struct UObject* Loaded); // Function Frontend_LevelInstance_3.Frontend_C.OnLoaded_B2E67DF4413723CA78F189B21F27DAC0 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void QueueUpNextSceneRig(); // Function Frontend_LevelInstance_3.Frontend_C.QueueUpNextSceneRig // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSRFinished(); // Function Frontend_LevelInstance_3.Frontend_C.OnSRFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InitAndQueueUpBackgroundSceneRigs(); // Function Frontend_LevelInstance_3.Frontend_C.InitAndQueueUpBackgroundSceneRigs // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BeginBackgroundAppearanceTasks(); // Function Frontend_LevelInstance_3.Frontend_C.BeginBackgroundAppearanceTasks // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LightingIdentityInitialized(struct UObject* Caller); // Function Frontend_LevelInstance_3.Frontend_C.LightingIdentityInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLightingIdentity(); // Function Frontend_LevelInstance_3.Frontend_C.SetLightingIdentity // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSublevelShown(); // Function Frontend_LevelInstance_3.Frontend_C.OnSublevelShown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadFrontendSublevels(); // Function Frontend_LevelInstance_3.Frontend_C.LoadFrontendSublevels // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAmbientSRSetPlaying(bool bPlaying); // Function Frontend_LevelInstance_3.Frontend_C.OnAmbientSRSetPlaying // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartAmbientSceneRig(); // Function Frontend_LevelInstance_3.Frontend_C.StartAmbientSceneRig // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function Frontend_LevelInstance_3.Frontend_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Frontend_LevelInstance_3.Frontend_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void GoToMenu(); // Function Frontend_LevelInstance_3.Frontend_C.GoToMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToIntro(); // Function Frontend_LevelInstance_3.Frontend_C.GoToIntro // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideMenuCharacter(struct UObject* Caller); // Function Frontend_LevelInstance_3.Frontend_C.HideMenuCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowMenuCharacter(struct UObject* Caller); // Function Frontend_LevelInstance_3.Frontend_C.ShowMenuCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FrontendOpenFrontendMenu(struct UObject* Caller); // Function Frontend_LevelInstance_3.Frontend_C.FrontendOpenFrontendMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FrontendResetLevelSetup(struct UObject* Caller); // Function Frontend_LevelInstance_3.Frontend_C.FrontendResetLevelSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function Frontend_LevelInstance_3.Frontend_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PSOScreenComplete(); // Function Frontend_LevelInstance_3.Frontend_C.PSOScreenComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CharacterProfileDeleted(struct UObject* Caller); // Function Frontend_LevelInstance_3.Frontend_C.CharacterProfileDeleted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTitleScreenReleased_ToFrontend(); // Function Frontend_LevelInstance_3.Frontend_C.OnTitleScreenReleased_ToFrontend // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadPresetsFromArrayComplete(struct AActor* Actor, bool Success); // Function Frontend_LevelInstance_3.Frontend_C.LoadPresetsFromArrayComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_Frontend(int32_t EntryPoint); // Function Frontend_LevelInstance_3.Frontend_C.ExecuteUbergraph_Frontend // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

