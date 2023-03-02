// BlueprintGeneratedClass BP_Knuts.BP_Knuts_C
// Size: 0x37c (Inherited: 0x350)
struct ABP_Knuts_C : ABP_InventoryObject_C {
	struct TArray<struct UStaticMesh*> StaticMeshes; // 0x350(0x10)
	struct UStaticMesh* selectedMesh; // 0x360(0x08)
	bool UpdateMesh; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	int32_t Min Knuts Count; // 0x36c(0x04)
	int32_t Max Knuts Count; // 0x370(0x04)
	struct FRandomStream Random Seed; // 0x374(0x08)

	void UserConstructionScript(); // Function BP_Knuts.BP_Knuts_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

