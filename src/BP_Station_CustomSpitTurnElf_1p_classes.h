// BlueprintGeneratedClass BP_Station_CustomSpitTurnElf_1p.BP_Station_CustomSpitTurnElf_1p_C
// Size: 0x430 (Inherited: 0x40c)
struct ABP_Station_CustomSpitTurnElf_1p_C : ANone {
	char pad_40C[0x4]; // 0x40c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UCapsuleComponent* Capsule; // 0x418(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x420(0x08)
	struct USkeletalMeshComponent* SkelMesh_1; // 0x428(0x08)

	void ReceiveBeginPlay(); // Function BP_Station_CustomSpitTurnElf_1p.BP_Station_CustomSpitTurnElf_1p_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Station_CustomSpitTurnElf_1p(int32_t EntryPoint); // Function BP_Station_CustomSpitTurnElf_1p.BP_Station_CustomSpitTurnElf_1p_C.ExecuteUbergraph_BP_Station_CustomSpitTurnElf_1p // (Final|UbergraphFunction) // @ game+0x38a7480
};

