// BlueprintGeneratedClass BP_SanctuaryPortal_Capture_Entrance_Base.BP_SanctuaryPortal_Capture_Entrance_Base_C
// Size: 0x288 (Inherited: 0x270)
struct ABP_SanctuaryPortal_Capture_Entrance_Base_C : ASanctuaryPortalCaptureEntrance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FHermesBPDelegateHandle RevokeControlEventHandle; // 0x278(0x10)

	void ReceiveBeginPlay(); // Function BP_SanctuaryPortal_Capture_Entrance_Base.BP_SanctuaryPortal_Capture_Entrance_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BiomeEntryAboutToRevokeControl(struct UObject* Caller, struct FName& String); // Function BP_SanctuaryPortal_Capture_Entrance_Base.BP_SanctuaryPortal_Capture_Entrance_Base_C.BiomeEntryAboutToRevokeControl // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SanctuaryPortal_Capture_Entrance_Base.BP_SanctuaryPortal_Capture_Entrance_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SanctuaryPortal_Capture_Entrance_Base(int32_t EntryPoint); // Function BP_SanctuaryPortal_Capture_Entrance_Base.BP_SanctuaryPortal_Capture_Entrance_Base_C.ExecuteUbergraph_BP_SanctuaryPortal_Capture_Entrance_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

