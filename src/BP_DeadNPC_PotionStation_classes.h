// BlueprintGeneratedClass BP_DeadNPC_PotionStation.BP_DeadNPC_PotionStation_C
// Size: 0x2f0 (Inherited: 0x248)
struct ABP_DeadNPC_PotionStation_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_Cairn_bag_01; // 0x250(0x08)
	struct UStaticMeshComponent* SM_HM_Potions_SmallTubesRack; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Default_Potion; // 0x260(0x08)
	struct UStaticMeshComponent* SM_TallGrass_01_Master; // 0x268(0x08)
	struct UStaticMeshComponent* SM_GrassMain; // 0x270(0x08)
	struct UStaticMeshComponent* SM_HW_Book; // 0x278(0x08)
	struct UStaticMeshComponent* SM_HW_L_BookRow_Half_B; // 0x280(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_Spoon_002_LOD; // 0x288(0x08)
	struct UStaticMeshComponent* SM_HM_PotionBottle3; // 0x290(0x08)
	struct UStaticMeshComponent* SM_Gear_Bag; // 0x298(0x08)
	struct UStaticMeshComponent* SM_HM_Cloth_04_CProp1; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_HM_PotionBottle14; // 0x2a8(0x08)
	struct UStaticMeshComponent* bag; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_BCProps_Lantern_001; // 0x2b8(0x08)
	struct UBP_WorldEvent_DropComponentsToGround_C* BP_WorldEvent_DropComponentsToGround; // 0x2c0(0x08)
	struct UStaticMeshComponent* Crate_with_Book; // 0x2c8(0x08)
	struct UStaticMeshComponent* Box_of_Books; // 0x2d0(0x08)
	struct UStaticMeshComponent* Bench; // 0x2d8(0x08)
	struct UStaticMeshComponent* Potion_Stool; // 0x2e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e8(0x08)

	void ReceiveBeginPlay(); // Function BP_DeadNPC_PotionStation.BP_DeadNPC_PotionStation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DeadNPC_PotionStation(int32_t EntryPoint); // Function BP_DeadNPC_PotionStation.BP_DeadNPC_PotionStation_C.ExecuteUbergraph_BP_DeadNPC_PotionStation // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

