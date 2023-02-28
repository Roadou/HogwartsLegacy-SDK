// BlueprintGeneratedClass BP_Boat.BP_Boat_C
// Size: 0x34c (Inherited: 0x248)
struct ABP_Boat_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Occluder; // 0x250(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x258(0x08)
	struct USceneComponent* Root; // 0x260(0x08)
	struct UStaticMeshComponent* Anchor; // 0x268(0x08)
	struct UCableComponent* Cable; // 0x270(0x08)
	struct UStaticMeshComponent* Boat; // 0x278(0x08)
	struct UStaticMeshComponent* RopeKnot; // 0x280(0x08)
	struct UObjectStateComponent* ObjectState; // 0x288(0x08)
	enum class EEnvironment Environment; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	int32_t PropIndex; // 0x294(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x298(0x50)
	int32_t EnvInt; // 0x2e8(0x04)
	bool bRope; // 0x2ec(0x01)
	bool bRopeKnot; // 0x2ed(0x01)
	char pad_2EE[0x2]; // 0x2ee(0x02)
	struct FTransform RopeAttach; // 0x2f0(0x30)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> RopeMeshes; // 0x320(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> OccluderMeshes; // 0x330(0x10)
	bool Disable Physics Simulation; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	struct FRandomStream Random Seed; // 0x344(0x08)

	void UserConstructionScript(); // Function BP_Boat.BP_Boat_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Boat.BP_Boat_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Boat(int32_t EntryPoint); // Function BP_Boat.BP_Boat_C.ExecuteUbergraph_BP_Boat // (Final|UbergraphFunction) // @ game+0x38a7480
};

