// BlueprintGeneratedClass BP_BroomRace_ActivityPad.BP_BroomRace_ActivityPad_C
// Size: 0x340 (Inherited: 0x2e0)
struct ABP_BroomRace_ActivityPad_C : ARacePlatform {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UChildActorComponent* BP_HM_OutsideLantern; // 0x2e8(0x08)
	struct UChildActorComponent* BP_HM_Lantern_OL_C_NoMount; // 0x2f0(0x08)
	struct UStaticMeshComponent* SM_HW_MC_Nail2; // 0x2f8(0x08)
	struct UStaticMeshComponent* GC_HW_PaperStack_Small_B_Piece_09; // 0x300(0x08)
	struct UStaticMeshComponent* SM_HW_MC_Nail1; // 0x308(0x08)
	struct UStaticMeshComponent* SM_HW_MC_Nail; // 0x310(0x08)
	struct UChildActorComponent* BP_Broom_Race_Marker; // 0x318(0x08)
	struct USceneComponent* Scene; // 0x320(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x328(0x08)
	struct UStaticMeshComponent* StaticMeshComponent15; // 0x330(0x08)
	struct UStaticMeshComponent* StaticMeshComponent1; // 0x338(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_BroomRace_ActivityPad.BP_BroomRace_ActivityPad_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPlatformUnlocked(); // Function BP_BroomRace_ActivityPad.BP_BroomRace_ActivityPad_C.OnPlatformUnlocked // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BroomRace_ActivityPad(int32_t EntryPoint); // Function BP_BroomRace_ActivityPad.BP_BroomRace_ActivityPad_C.ExecuteUbergraph_BP_BroomRace_ActivityPad // (Final|UbergraphFunction) // @ game+0x38a7480
};

