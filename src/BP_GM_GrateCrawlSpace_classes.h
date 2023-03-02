// BlueprintGeneratedClass BP_GM_GrateCrawlSpace.BP_GM_GrateCrawlSpace_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_GM_GrateCrawlSpace_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* ChildActor; // 0x250(0x08)
	struct UStaticMeshComponent* SM_GobMine_BrickWall_500Hx500W_BOT_G; // 0x258(0x08)
	bool bIsGrateOpened; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct ABP_NavCrawl_C* NavCrawlVolume; // 0x268(0x08)
	struct TArray<struct AActor*> SwitchTargets; // 0x270(0x10)

	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_GM_GrateCrawlSpace.BP_GM_GrateCrawlSpace_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GM_GrateCrawlSpace.BP_GM_GrateCrawlSpace_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OpenPassage(); // Function BP_GM_GrateCrawlSpace.BP_GM_GrateCrawlSpace_C.OpenPassage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_GM_GrateCrawlSpace.BP_GM_GrateCrawlSpace_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_GrateCrawlSpace(int32_t EntryPoint); // Function BP_GM_GrateCrawlSpace.BP_GM_GrateCrawlSpace_C.ExecuteUbergraph_BP_GM_GrateCrawlSpace // (Final|UbergraphFunction) // @ game+0x38a7480
};

