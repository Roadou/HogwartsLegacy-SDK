// BlueprintGeneratedClass BP_Sanctuary_Streaming_Biome_Entry.BP_Sanctuary_Streaming_Biome_Entry_C
// Size: 0x2f0 (Inherited: 0x248)
struct ABP_Sanctuary_Streaming_Biome_Entry_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UArrowComponent* Direction; // 0x250(0x08)
	struct UBoxComponent* EntryTrigger; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct FName LandingAreaZone; // 0x268(0x08)
	struct FName MeshFadeTag; // 0x270(0x08)
	struct FHermesBPDelegateHandle HermesHandleUnlockDone; // 0x278(0x10)
	struct TMap<struct FName, enum class ESanctuaryMiniMapType> IslandToMinimapType; // 0x288(0x50)
	bool TransitionInProgress; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FHermesBPDelegateHandle HermesHandleTransitionComplete; // 0x2e0(0x10)

	void FindTeleportTarget(struct APlayerStart*& TeleportTarget); // Function BP_Sanctuary_Streaming_Biome_Entry.BP_Sanctuary_Streaming_Biome_Entry_C.FindTeleportTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FindPlayerStartWithTag(struct FName PlayerStartTag, struct APlayerStart*& Actor); // Function BP_Sanctuary_Streaming_Biome_Entry.BP_Sanctuary_Streaming_Biome_Entry_C.FindPlayerStartWithTag // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__EntryTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Sanctuary_Streaming_Biome_Entry.BP_Sanctuary_Streaming_Biome_Entry_C.BndEvt__EntryTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnZoneIsReady(); // Function BP_Sanctuary_Streaming_Biome_Entry.BP_Sanctuary_Streaming_Biome_Entry_C.OnZoneIsReady // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sanctuary_Streaming_Biome_Entry.BP_Sanctuary_Streaming_Biome_Entry_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TerrariumUnlockDone(struct UObject* Caller, struct FName& String); // Function BP_Sanctuary_Streaming_Biome_Entry.BP_Sanctuary_Streaming_Biome_Entry_C.TerrariumUnlockDone // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Sanctuary_Streaming_Biome_Entry.BP_Sanctuary_Streaming_Biome_Entry_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void RunTransition(); // Function BP_Sanctuary_Streaming_Biome_Entry.BP_Sanctuary_Streaming_Biome_Entry_C.RunTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BiomeTransitionComplete(struct UObject* Caller); // Function BP_Sanctuary_Streaming_Biome_Entry.BP_Sanctuary_Streaming_Biome_Entry_C.BiomeTransitionComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanctuary_Streaming_Biome_Entry(int32_t EntryPoint); // Function BP_Sanctuary_Streaming_Biome_Entry.BP_Sanctuary_Streaming_Biome_Entry_C.ExecuteUbergraph_BP_Sanctuary_Streaming_Biome_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

