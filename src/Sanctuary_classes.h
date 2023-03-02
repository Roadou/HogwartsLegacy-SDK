// BlueprintGeneratedClass Sanctuary.Sanctuary_C
// Size: 0x398 (Inherited: 0x250)
struct ASanctuary_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TSoftObjectPtr<USceneRig> SR_EXP1_SoftRef; // 0x258(0x28)
	struct TSoftObjectPtr<USceneRig> SR_EXP3_SoftRef; // 0x280(0x28)
	struct FString StartZone; // 0x2a8(0x10)
	bool AnimateForestBiome; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct AActor* ForestTerrarium_SKBlueprint; // 0x2c0(0x08)
	struct TSoftClassPtr<UObject> ForestTerrarium_SKSoftRef; // 0x2c8(0x28)
	struct TArray<struct FName> ZonesToLoad_Coast; // 0x2f0(0x10)
	struct TArray<struct FName> ZonesToLoad_Swamp; // 0x300(0x10)
	bool ExpansionHandledInMission; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct USceneRig* SR_EXP3; // 0x318(0x08)
	struct ASanctuaryStreamingController* SanctuaryStreamingController_1_ExecuteUbergraph_Sanctuary_RefProperty; // 0x320(0x08)
	struct ABP_LevelChange_C* BP_LevelChange_Hogwarts_ExecuteUbergraph_Sanctuary_RefProperty; // 0x328(0x08)
	struct APlayerStart* PlayerStart2_2_ExecuteUbergraph_Sanctuary_RefProperty; // 0x330(0x08)
	struct APlayerStart* PlayerStart2_2_EdGraph_1_RefProperty; // 0x338(0x08)
	struct APlayerStart* PlayerStart_RoHT_EdGraph_1_RefProperty; // 0x340(0x08)
	struct ASanctuaryStreamingController* SanctuaryStreamingController_1_EdGraph_1_RefProperty; // 0x348(0x08)
	struct APlayerStart* PlayerStart_Biome_Forest_EdGraph_1_RefProperty; // 0x350(0x08)
	struct APlayerStart* PlayerStart_Biome_Coastal_EdGraph_1_RefProperty; // 0x358(0x08)
	struct APlayerStart* PlayerStart_Biome_Grasslands_EdGraph_1_RefProperty; // 0x360(0x08)
	struct APlayerStart* PlayerStart_Biome_Swamp_EdGraph_1_RefProperty; // 0x368(0x08)
	struct APlayerStart* PlayerStart_Study_Hub_From_Biome_BOG_EdGraph_1_RefProperty; // 0x370(0x08)
	struct APlayerStart* PlayerStart_Study_Hub_From_Biome_COAST_EdGraph_1_RefProperty; // 0x378(0x08)
	struct APlayerStart* PlayerStart_Study_Hub_From_Biome_GLND_EdGraph_1_RefProperty; // 0x380(0x08)
	struct APlayerStart* PlayerStart_Study_Hub_From_Biome_FRST_EdGraph_1_RefProperty; // 0x388(0x08)
	struct APlayerStart* PlayerStart2_2_EdGraph_4_RefProperty; // 0x390(0x08)

	void CoastUnlock_ShouldExpandExternally(bool& ShouldHandleExternally); // Function Sanctuary.Sanctuary_C.CoastUnlock_ShouldExpandExternally // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConditionalTeleportToPlayerStart(struct APlayerStart* PlayerStart); // Function Sanctuary.Sanctuary_C.ConditionalTeleportToPlayerStart // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CinematicStart(bool ExpansionInCinematic, bool FadeToBlack); // Function Sanctuary.Sanctuary_C.CinematicStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwampUnlock_ShouldExpandExternally(bool& ShouldHandleExternally); // Function Sanctuary.Sanctuary_C.SwampUnlock_ShouldExpandExternally // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinalExpansion_ConditionsMet(bool& ConditionsMet); // Function Sanctuary.Sanctuary_C.FinalExpansion_ConditionsMet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Select Start Zone(struct FString& LoadZone); // Function Sanctuary.Sanctuary_C.Select Start Zone // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AsyncLoadForestTerrariumAssets(); // Function Sanctuary.Sanctuary_C.AsyncLoadForestTerrariumAssets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CurtainRaised_702BD55F40F8BDFF8A5ECC962963B405(); // Function Sanctuary.Sanctuary_C.CurtainRaised_702BD55F40F8BDFF8A5ECC962963B405 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_C05F3FF44872DBD956E94C95D32C4DE3(struct UObject* Loaded); // Function Sanctuary.Sanctuary_C.OnLoaded_C05F3FF44872DBD956E94C95D32C4DE3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_9555DDB84FC502E4456A3DB2A8978660(struct UObject* Loaded); // Function Sanctuary.Sanctuary_C.OnLoaded_9555DDB84FC502E4456A3DB2A8978660 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnlockSwampBiome(); // Function Sanctuary.Sanctuary_C.UnlockSwampBiome // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnlockGrasslandsBiome(); // Function Sanctuary.Sanctuary_C.UnlockGrasslandsBiome // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnlockCoastalBiome(); // Function Sanctuary.Sanctuary_C.UnlockCoastalBiome // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnlockWorkspace_3(); // Function Sanctuary.Sanctuary_C.UnlockWorkspace_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnlockWorkspace_4(); // Function Sanctuary.Sanctuary_C.UnlockWorkspace_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnlockWorkspace_2(); // Function Sanctuary.Sanctuary_C.UnlockWorkspace_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProcessUnlocks(); // Function Sanctuary.Sanctuary_C.ProcessUnlocks // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Sanctuary.Sanctuary_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnStartZoneIsReady(); // Function Sanctuary.Sanctuary_C.OnStartZoneIsReady // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnlockForestBiome(); // Function Sanctuary.Sanctuary_C.UnlockForestBiome // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExpansionLockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function Sanctuary.Sanctuary_C.ExpansionLockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function Sanctuary.Sanctuary_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateMinimapMode(); // Function Sanctuary.Sanctuary_C.UpdateMinimapMode // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function Sanctuary.Sanctuary_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sanctuary_EXP_03_Trigger_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Sanctuary.Sanctuary_C.BndEvt__Sanctuary_EXP_03_Trigger_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PreloadEXP3(); // Function Sanctuary.Sanctuary_C.PreloadEXP3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_Sanctuary(int32_t EntryPoint); // Function Sanctuary.Sanctuary_C.ExecuteUbergraph_Sanctuary // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

