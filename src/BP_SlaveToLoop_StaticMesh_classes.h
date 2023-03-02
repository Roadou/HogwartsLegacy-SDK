// BlueprintGeneratedClass BP_SlaveToLoop_StaticMesh.BP_SlaveToLoop_StaticMesh_C
// Size: 0x300 (Inherited: 0x2ac)
struct ABP_SlaveToLoop_StaticMesh_C : ABP_SlaveToLoop_Base_C {
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2b8(0x08)
	struct UStaticMesh* Mesh; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct FTransform Transform; // 0x2d0(0x30)

	void UserConstructionScript(); // Function BP_SlaveToLoop_StaticMesh.BP_SlaveToLoop_StaticMesh_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SlaveToLoop_StaticMesh.BP_SlaveToLoop_StaticMesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SlaveToLoop_StaticMesh(int32_t EntryPoint); // Function BP_SlaveToLoop_StaticMesh.BP_SlaveToLoop_StaticMesh_C.ExecuteUbergraph_BP_SlaveToLoop_StaticMesh // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

