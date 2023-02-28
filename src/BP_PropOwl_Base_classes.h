// BlueprintGeneratedClass BP_PropOwl_Base.BP_PropOwl_Base_C
// Size: 0x461 (Inherited: 0x398)
struct ABP_PropOwl_Base_C : APropOwl {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UAnimationArchitectComponent* AnimationArchitect; // 0x3a0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x3a8(0x08)
	struct UObjectStateComponent* ObjectState; // 0x3b0(0x08)
	struct TArray<struct USkeletalMesh*> RandomMeshes; // 0x3b8(0x10)
	struct TArray<struct FSTR_MaterialSlotArray> RandomMaterials; // 0x3c8(0x10)
	bool RandomizeMeshOnSpawn; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct USkeletalMesh* Mesh; // 0x3e0(0x08)
	bool RandomizeMaterialsOnSpawn; // 0x3e8(0x01)
	bool RandomizeScaleOnSpawn; // 0x3e9(0x01)
	char pad_3EA[0x2]; // 0x3ea(0x02)
	float MinRandomScale; // 0x3ec(0x04)
	float MaxRandomScale; // 0x3f0(0x04)
	bool AutoTargetable; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	struct TArray<struct TSoftObjectPtr<USkeletalMesh>> AllMeshes; // 0x3f8(0x10)
	bool GripFeet; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct TMap<struct FString, float> MeshBaseScales; // 0x410(0x50)
	bool EnableFootstep; // 0x460(0x01)

	void Set Random Materials(); // Function BP_PropOwl_Base.BP_PropOwl_Base_C.Set Random Materials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetBaseScaleForMesh(struct USkeletalMesh* Mesh, float& BaseScale); // Function BP_PropOwl_Base.BP_PropOwl_Base_C.GetBaseScaleForMesh // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRandomScale(); // Function BP_PropOwl_Base.BP_PropOwl_Base_C.SetRandomScale // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CycleMesh(); // Function BP_PropOwl_Base.BP_PropOwl_Base_C.CycleMesh // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_PropOwl_Base.BP_PropOwl_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_PropOwl_Base.BP_PropOwl_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PropOwl_Base(int32_t EntryPoint); // Function BP_PropOwl_Base.BP_PropOwl_Base_C.ExecuteUbergraph_BP_PropOwl_Base // (Final|UbergraphFunction) // @ game+0x38a7480
};

