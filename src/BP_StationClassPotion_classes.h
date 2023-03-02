// BlueprintGeneratedClass BP_StationClassPotion.BP_StationClassPotion_C
// Size: 0x430 (Inherited: 0x40c)
struct ABP_StationClassPotion_C : ANone {
	char pad_40C[0x4]; // 0x40c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UArrowComponent* Arrow; // 0x418(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x420(0x08)
	struct USkeletalMeshComponent* SkelMesh_1; // 0x428(0x08)

	void ReceiveBeginPlay(); // Function BP_StationClassPotion.BP_StationClassPotion_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StationClassPotion(int32_t EntryPoint); // Function BP_StationClassPotion.BP_StationClassPotion_C.ExecuteUbergraph_BP_StationClassPotion // (Final|UbergraphFunction) // @ game+0x38a7480
};

