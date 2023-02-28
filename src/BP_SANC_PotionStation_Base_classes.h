// BlueprintGeneratedClass BP_SANC_PotionStation_Base.BP_SANC_PotionStation_Base_C
// Size: 0x2bc (Inherited: 0x2a8)
struct ABP_SANC_PotionStation_Base_C : ATransfigurationObjectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)
	int32_t NumActiveSites; // 0x2b8(0x04)

	void ReceiveBeginPlay(); // Function BP_SANC_PotionStation_Base.BP_SANC_PotionStation_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnNumActiveSitesInitiallySet(int32_t NumActiveSites); // Function BP_SANC_PotionStation_Base.BP_SANC_PotionStation_Base_C.OnNumActiveSitesInitiallySet // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNumActiveSitesIncreased(int32_t NumActiveSites); // Function BP_SANC_PotionStation_Base.BP_SANC_PotionStation_Base_C.OnNumActiveSitesIncreased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NumActiveSitesDecreased(int32_t NumActiveSites); // Function BP_SANC_PotionStation_Base.BP_SANC_PotionStation_Base_C.NumActiveSitesDecreased // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSiteBecomeActive(); // Function BP_SANC_PotionStation_Base.BP_SANC_PotionStation_Base_C.OnSiteBecomeActive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSiteBecomeInactive(); // Function BP_SANC_PotionStation_Base.BP_SANC_PotionStation_Base_C.OnSiteBecomeInactive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SANC_PotionStation_Base(int32_t EntryPoint); // Function BP_SANC_PotionStation_Base.BP_SANC_PotionStation_Base_C.ExecuteUbergraph_BP_SANC_PotionStation_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

