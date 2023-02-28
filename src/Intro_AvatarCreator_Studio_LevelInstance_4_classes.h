// BlueprintGeneratedClass Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C
// Size: 0x2a8 (Inherited: 0x250)
struct AIntro_AvatarCreator_Studio_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FDialogueDataTableHandles PlayerMaleFemaleDialogueDataTableForceLoadHandles; // 0x258(0x10)
	float MinCurtainTime; // 0x268(0x04)
	bool CurtainLowered; // 0x26c(0x01)
	bool TimerExpired; // 0x26d(0x01)
	bool AvatarUIReady; // 0x26e(0x01)
	char pad_26F[0x1]; // 0x26f(0x01)
	float ShowLoadScreenTime; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct UUI_BP_AvatarCreator_C* AvatarCreatorUI; // 0x278(0x08)
	struct UDataTable* GlassesDataTable; // 0x280(0x08)
	struct ACineCameraActor* BodyCam_ExecuteUbergraph_Intro_AvatarCreator_Studio_RefProperty; // 0x288(0x08)
	struct ACineCameraActor* HeadCam_ExecuteUbergraph_Intro_AvatarCreator_Studio_RefProperty; // 0x290(0x08)
	struct AUI_BP_DummyActor_C* Player0_ExecuteUbergraph_Intro_AvatarCreator_Studio_RefProperty; // 0x298(0x08)
	struct ACineCameraActor* LetterCam_ExecuteUbergraph_Intro_AvatarCreator_Studio_RefProperty; // 0x2a0(0x08)

	void GetAvatarCreatorGlassesGearAppearanceIDs(struct TArray<struct FName>& OutGearAppearanceIds); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.GetAvatarCreatorGlassesGearAppearanceIDs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnloadSublevels(); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.UnloadSublevels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadIntroRoot(); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.LoadIntroRoot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadSublevels(); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.LoadSublevels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Complete_CFE4BD844A254A5100AA1B938D237B47(); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.Complete_CFE4BD844A254A5100AA1B938D237B47 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainRaised_63EFFFFB4C4496EB09C8CB84C4D01F71(); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.CurtainRaised_63EFFFFB4C4496EB09C8CB84C4D01F71 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnAllAvatarPresetsLoaded(); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.OnAllAvatarPresetsLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FrontendCameraChange(struct UObject* Caller, int32_t int); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.FrontendCameraChange // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AvatarCreatorReady(); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.AvatarCreatorReady // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GotoAvatarUIifReady(); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.GotoAvatarUIifReady // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainTimer(); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.CurtainTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowLoadScreen(); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.ShowLoadScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_Intro_AvatarCreator_Studio(int32_t EntryPoint); // Function Intro_AvatarCreator_Studio_LevelInstance_4.Intro_AvatarCreator_Studio_C.ExecuteUbergraph_Intro_AvatarCreator_Studio // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

