// BlueprintGeneratedClass BP_StationGuard1P.BP_StationGuard1P_C
// Size: 0x3e0 (Inherited: 0x371)
struct ABP_StationGuard1P_C : ABP_Station_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x380(0x08)
	struct USkeletalMeshComponent* SkelMesh; // 0x388(0x08)
	struct TSoftObjectPtr<UAnimSequence> AnimPose; // 0x390(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Character; // 0x3b8(0x28)

	void UserConstructionScript(); // Function BP_StationGuard1P.BP_StationGuard1P_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_StationGuard1P.BP_StationGuard1P_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StationGuard1P(int32_t EntryPoint); // Function BP_StationGuard1P.BP_StationGuard1P_C.ExecuteUbergraph_BP_StationGuard1P // (Final|UbergraphFunction) // @ game+0x38a7480
};

