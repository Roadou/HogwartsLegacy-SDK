// BlueprintGeneratedClass BP_SlaveToLoop_SkeletalMesh.BP_SlaveToLoop_SkeletalMesh_C
// Size: 0x360 (Inherited: 0x2ac)
struct ABP_SlaveToLoop_SkeletalMesh_C : ABP_SlaveToLoop_Base_C {
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2b8(0x08)
	struct USkeletalMesh* Mesh; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct FTransform Transform; // 0x2d0(0x30)
	bool RandomizeMeshOnSpawn; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct TArray<struct USkeletalMesh*> RandomMeshes; // 0x308(0x10)
	bool RandomizeScaleOnSpawn; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float MinRandomScale; // 0x31c(0x04)
	float MaxRandomScale; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct UAnimSequence* Anim; // 0x328(0x08)
	bool RandomizePlayRateOnSpawn; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float MinRandomPlayRate; // 0x334(0x04)
	float MaxRandomPlayRate; // 0x338(0x04)
	float PlayRate; // 0x33c(0x04)
	float Scale; // 0x340(0x04)
	bool RandomizeMaterialsOnSpawn; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	struct TArray<struct FSTR_MaterialSlotArray> RandomMaterials; // 0x348(0x10)
	struct FRandomStream Random Stream; // 0x358(0x08)

	void SetRandomMaterials(); // Function BP_SlaveToLoop_SkeletalMesh.BP_SlaveToLoop_SkeletalMesh_C.SetRandomMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetBaseScaleForMesh(struct USkeletalMesh* Mesh, float& BaseScale); // Function BP_SlaveToLoop_SkeletalMesh.BP_SlaveToLoop_SkeletalMesh_C.GetBaseScaleForMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRandomScale(); // Function BP_SlaveToLoop_SkeletalMesh.BP_SlaveToLoop_SkeletalMesh_C.SetRandomScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_SlaveToLoop_SkeletalMesh.BP_SlaveToLoop_SkeletalMesh_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SlaveToLoop_SkeletalMesh.BP_SlaveToLoop_SkeletalMesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SlaveToLoop_SkeletalMesh(int32_t EntryPoint); // Function BP_SlaveToLoop_SkeletalMesh.BP_SlaveToLoop_SkeletalMesh_C.ExecuteUbergraph_BP_SlaveToLoop_SkeletalMesh // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

