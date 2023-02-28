// BlueprintGeneratedClass BP_Breakable_Persistent.BP_Breakable_Persistent_C
// Size: 0x357 (Inherited: 0x2b0)
struct ABP_Breakable_Persistent_C : APersistentBreakable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2b8(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x2c0(0x08)
	bool NeverRespawn; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct FHitResult Hit Result; // 0x2cc(0x88)
	bool CanAffectNavOverride; // 0x354(0x01)
	bool BaseMeshCutsNav; // 0x355(0x01)
	bool HasBaseMesh; // 0x356(0x01)

	void UserConstructionScript(); // Function BP_Breakable_Persistent.BP_Breakable_Persistent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Breakable_Persistent.BP_Breakable_Persistent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Breakable_Persistent(int32_t EntryPoint); // Function BP_Breakable_Persistent.BP_Breakable_Persistent_C.ExecuteUbergraph_BP_Breakable_Persistent // (Final|UbergraphFunction) // @ game+0x38a7480
};

