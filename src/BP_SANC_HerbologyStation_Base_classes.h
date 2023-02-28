// BlueprintGeneratedClass BP_SANC_HerbologyStation_Base.BP_SANC_HerbologyStation_Base_C
// Size: 0x2bc (Inherited: 0x2a8)
struct ABP_SANC_HerbologyStation_Base_C : ATransfigurationObjectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)
	int32_t NumActivePlots; // 0x2b8(0x04)

	void ReceiveBeginPlay(); // Function BP_SANC_HerbologyStation_Base.BP_SANC_HerbologyStation_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnNumActivePlotsInitiallySet(int32_t NumActiveSites); // Function BP_SANC_HerbologyStation_Base.BP_SANC_HerbologyStation_Base_C.OnNumActivePlotsInitiallySet // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNumActivePlotsIncreased(int32_t NumActiveSites); // Function BP_SANC_HerbologyStation_Base.BP_SANC_HerbologyStation_Base_C.OnNumActivePlotsIncreased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NumActivePlotsDecreased(int32_t NumActiveSites); // Function BP_SANC_HerbologyStation_Base.BP_SANC_HerbologyStation_Base_C.NumActivePlotsDecreased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPlotBecomeActive(); // Function BP_SANC_HerbologyStation_Base.BP_SANC_HerbologyStation_Base_C.OnPlotBecomeActive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPlotBecomeInactive(); // Function BP_SANC_HerbologyStation_Base.BP_SANC_HerbologyStation_Base_C.OnPlotBecomeInactive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SANC_HerbologyStation_Base(int32_t EntryPoint); // Function BP_SANC_HerbologyStation_Base.BP_SANC_HerbologyStation_Base_C.ExecuteUbergraph_BP_SANC_HerbologyStation_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

