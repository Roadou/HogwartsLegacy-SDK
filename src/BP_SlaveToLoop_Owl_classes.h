// BlueprintGeneratedClass BP_SlaveToLoop_Owl.BP_SlaveToLoop_Owl_C
// Size: 0x3c0 (Inherited: 0x360)
struct ABP_SlaveToLoop_Owl_C : ABP_SlaveToLoop_SkeletalMesh_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	bool GripFeet; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct TMap<struct FString, float> MeshBaseScales; // 0x370(0x50)

	void GetBaseScaleForMesh(struct USkeletalMesh* Mesh, float& BaseScale); // Function BP_SlaveToLoop_Owl.BP_SlaveToLoop_Owl_C.GetBaseScaleForMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SlaveToLoop_Owl.BP_SlaveToLoop_Owl_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SlaveToLoop_Owl(int32_t EntryPoint); // Function BP_SlaveToLoop_Owl.BP_SlaveToLoop_Owl_C.ExecuteUbergraph_BP_SlaveToLoop_Owl // (Final|UbergraphFunction) // @ game+0x38a7480
};

