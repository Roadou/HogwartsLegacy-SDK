// BlueprintGeneratedClass BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C
// Size: 0x2d2 (Inherited: 0x248)
struct ABP_Sanctuary_TriggerExpansion_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct FName ExpansionLockID; // 0x258(0x08)
	struct FName IslandID; // 0x260(0x08)
	struct TArray<struct FName> ZonesToLoad; // 0x268(0x10)
	struct TSoftObjectPtr<USceneRig> CinematicSR; // 0x278(0x28)
	struct USceneRig* CinematicAsset; // 0x2a0(0x08)
	struct FHermesBPDelegateHandle ExpansionLoadHandle; // 0x2a8(0x10)
	bool InActiveIsland; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	int32_t NumZonesToMakeReady; // 0x2bc(0x04)
	struct FHermesBPDelegateHandle HermesHandle; // 0x2c0(0x10)
	bool TriggerExpansion; // 0x2d0(0x01)
	bool ExpansionHandledExternally; // 0x2d1(0x01)

	void OnLoaded_4C47236C45C66647D982F8A528A69B57(struct UObject* Loaded); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.OnLoaded_4C47236C45C66647D982F8A528A69B57 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SanctuaryExpansionLoadComplete(struct UObject* Caller, struct FName& String); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.SanctuaryExpansionLoadComplete // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CinematicFinished(); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.CinematicFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TriggerExpansionLoad(); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.TriggerExpansionLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExpansionLoaded(); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.OnExpansionLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerCinematicLoad(); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.TriggerCinematicLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCinematicLoaded(); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.OnCinematicLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerZoneLoad(); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.TriggerZoneLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnZoneIsReady(); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.OnZoneIsReady // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ZoneReady(); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.ZoneReady // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void VanishmentQueueBecameEmpty(struct UObject* Caller); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.VanishmentQueueBecameEmpty // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanctuary_TriggerExpansion(int32_t EntryPoint); // Function BP_Sanctuary_TriggerExpansion.BP_Sanctuary_TriggerExpansion_C.ExecuteUbergraph_BP_Sanctuary_TriggerExpansion // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

