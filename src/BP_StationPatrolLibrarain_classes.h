// BlueprintGeneratedClass BP_StationPatrolLibrarain.BP_StationPatrolLibrarain_C
// Size: 0x390 (Inherited: 0x371)
struct ABP_StationPatrolLibrarain_C : ABP_Station_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x380(0x08)
	struct USkeletalMeshComponent* SkelMesh; // 0x388(0x08)

	void ReceiveBeginPlay(); // Function BP_StationPatrolLibrarain.BP_StationPatrolLibrarain_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StationPatrolLibrarain(int32_t EntryPoint); // Function BP_StationPatrolLibrarain.BP_StationPatrolLibrarain_C.ExecuteUbergraph_BP_StationPatrolLibrarain // (Final|UbergraphFunction) // @ game+0x38a7480
};

