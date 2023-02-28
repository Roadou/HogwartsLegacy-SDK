// BlueprintGeneratedClass Overland.Overland_C
// Size: 0x3c0 (Inherited: 0x250)
struct AOverland_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TSoftObjectPtr<UWorld> Hogwarts; // 0x258(0x28)
	struct TSoftObjectPtr<UWorld> LOC_Hogsmeade_STREAM; // 0x280(0x28)
	struct TSoftObjectPtr<UWorld> Intro_Sky; // 0x2a8(0x28)
	struct TSoftObjectPtr<UWorld> Intro_SkyLighting; // 0x2d0(0x28)
	bool IntroPlaying; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct TSoftObjectPtr<UWorld> Bandit_Camp_TentIntA5 Tile 4,3; // 0x300(0x28)
	struct TSoftObjectPtr<UWorld> Tent Interior B04; // 0x328(0x28)
	struct TSoftObjectPtr<UWorld> ChepstowBasement; // 0x350(0x28)
	struct ULevelStreamingDynamic* HogwartsTourLevel; // 0x378(0x08)
	struct TSoftObjectPtr<UWorld> Combat_Challenge_Cave_Gameplay; // 0x380(0x28)
	struct ABP_OverlandVars_C* __BP_OverlandVars___ExecuteUbergraph_Overland_RefProperty; // 0x3a8(0x08)
	struct APlayerStart* PlayerStart_HogwartsTour_ExecuteUbergraph_Overland_RefProperty; // 0x3b0(0x08)
	struct APostProcessVolumeWithBlendDomain* PPV_LowEnd_fog_ExecuteUbergraph_Overland_RefProperty; // 0x3b8(0x08)

	bool IsHogwartsTourInProgress(); // Function Overland.Overland_C.IsHogwartsTourInProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void LoadHogwarts(); // Function Overland.Overland_C.LoadHogwarts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckIfIntro(bool& IntroPlaying); // Function Overland.Overland_C.CheckIfIntro // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void CurtainRaised_90C5F4824ECBF8EBAC311A85808C8D3F(); // Function Overland.Overland_C.CurtainRaised_90C5F4824ECBF8EBAC311A85808C8D3F // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainRaised_8B5AF4C442552B1CC0F60D805B0C825E(); // Function Overland.Overland_C.CurtainRaised_8B5AF4C442552B1CC0F60D805B0C825E // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function Overland.Overland_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StreamingComplete(); // Function Overland.Overland_C.StreamingComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FirstDay(); // Function Overland.Overland_C.FirstDay // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LevelsStreamed(); // Function Overland.Overland_C.LevelsStreamed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartHogwartsTour(); // Function Overland.Overland_C.StartHogwartsTour // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WakeUpComplete(struct UObject* Caller); // Function Overland.Overland_C.WakeUpComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHogwartsTourLevelShown(); // Function Overland.Overland_C.OnHogwartsTourLevelShown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerSorted(struct UObject* Caller); // Function Overland.Overland_C.PlayerSorted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_09_Updated(struct UObject* Caller, struct FName& String); // Function Overland.Overland_C.COM_09_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadDarkArtsGameplay(struct UObject* Caller); // Function Overland.Overland_C.LoadDarkArtsGameplay // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_Overland(int32_t EntryPoint); // Function Overland.Overland_C.ExecuteUbergraph_Overland // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

