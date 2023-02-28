// BlueprintGeneratedClass BP_RotatingMesh.BP_RotatingMesh_C
// Size: 0x284 (Inherited: 0x248)
struct ABP_RotatingMesh_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x250(0x08)
	struct USceneComponent* Scene; // 0x258(0x08)
	struct UArrowComponent* Arrow; // 0x260(0x08)
	struct UStaticMesh* RotatingMesh; // 0x268(0x08)
	float Rotation Rate; // 0x270(0x04)
	bool ReceiveRotation; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct FVector RotationAxis; // 0x278(0x0c)

	void SetRelativeRotation(); // Function BP_RotatingMesh.BP_RotatingMesh_C.SetRelativeRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_RotatingMesh.BP_RotatingMesh_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateRotation(); // Function BP_RotatingMesh.BP_RotatingMesh_C.UpdateRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_RotatingMesh.BP_RotatingMesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_RotatingMesh(int32_t EntryPoint); // Function BP_RotatingMesh.BP_RotatingMesh_C.ExecuteUbergraph_BP_RotatingMesh // (Final|UbergraphFunction) // @ game+0x38a7480
};

