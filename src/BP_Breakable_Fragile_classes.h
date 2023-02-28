// BlueprintGeneratedClass BP_Breakable_Fragile.BP_Breakable_Fragile_C
// Size: 0x354 (Inherited: 0x2b0)
struct ABP_Breakable_Fragile_C : APersistentBreakable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x2b8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2c0(0x08)
	struct FHitResult Hit Result; // 0x2c8(0x88)
	bool NeverRespawn; // 0x350(0x01)
	bool CanAffectNavOverride; // 0x351(0x01)
	bool HasBaseMesh; // 0x352(0x01)
	bool BaseMeshCutsNav; // 0x353(0x01)

	void UserConstructionScript(); // Function BP_Breakable_Fragile.BP_Breakable_Fragile_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Breakable_Fragile.BP_Breakable_Fragile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Breakable_Fragile(int32_t EntryPoint); // Function BP_Breakable_Fragile.BP_Breakable_Fragile_C.ExecuteUbergraph_BP_Breakable_Fragile // (Final|UbergraphFunction) // @ game+0x38a7480
};

