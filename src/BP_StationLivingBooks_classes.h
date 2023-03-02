// BlueprintGeneratedClass BP_StationLivingBooks.BP_StationLivingBooks_C
// Size: 0x390 (Inherited: 0x371)
struct ABP_StationLivingBooks_C : ABP_Station_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x380(0x08)
	struct USkeletalMeshComponent* SkelMesh_1; // 0x388(0x08)

	void ReceiveBeginPlay(); // Function BP_StationLivingBooks.BP_StationLivingBooks_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StationLivingBooks(int32_t EntryPoint); // Function BP_StationLivingBooks.BP_StationLivingBooks_C.ExecuteUbergraph_BP_StationLivingBooks // (Final|UbergraphFunction) // @ game+0x38a7480
};

