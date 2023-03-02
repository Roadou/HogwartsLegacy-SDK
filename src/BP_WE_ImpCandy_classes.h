// BlueprintGeneratedClass BP_WE_ImpCandy.BP_WE_ImpCandy_C
// Size: 0x2c0 (Inherited: 0x280)
struct ABP_WE_ImpCandy_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct TArray<struct ABP_Station_C*> ImpCandyWatchers; // 0x290(0x10)
	struct ABP_Station_C* ImpCandyFire; // 0x2a0(0x08)
	struct UScheduledEntity* FireSE; // 0x2a8(0x08)
	struct TArray<struct UScheduledEntity*> WatchersSE; // 0x2b0(0x10)

	void FireGuyExit(); // Function BP_WE_ImpCandy.BP_WE_ImpCandy_C.FireGuyExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TeleportFireToStation(); // Function BP_WE_ImpCandy.BP_WE_ImpCandy_C.TeleportFireToStation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TeleportWatchersToStation(); // Function BP_WE_ImpCandy.BP_WE_ImpCandy_C.TeleportWatchersToStation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_ImpCandy.BP_WE_ImpCandy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_ImpCandy(int32_t EntryPoint); // Function BP_WE_ImpCandy.BP_WE_ImpCandy_C.ExecuteUbergraph_BP_WE_ImpCandy // (Final|UbergraphFunction) // @ game+0x38a7480
};

