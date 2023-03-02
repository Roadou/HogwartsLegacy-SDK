// BlueprintGeneratedClass BP_AttachedMesh.BP_AttachedMesh_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_AttachedMesh_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct AActor* Actor; // 0x258(0x08)
	struct ABP_MeshGroupManager_C* Manager; // 0x260(0x08)

	void ReceiveTick(float DeltaSeconds); // Function BP_AttachedMesh.BP_AttachedMesh_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AttachedMesh(int32_t EntryPoint); // Function BP_AttachedMesh.BP_AttachedMesh_C.ExecuteUbergraph_BP_AttachedMesh // (Final|UbergraphFunction) // @ game+0x38a7480
};

