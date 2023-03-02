// BlueprintGeneratedClass BP_OL_RockTunnel_A.BP_OL_RockTunnel_A_C
// Size: 0x279 (Inherited: 0x248)
struct ABP_OL_RockTunnel_A_C : AActor {
	struct USplineComponent* Spline; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float SectionLength; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UStaticMesh* Static Mesh 01; // 0x260(0x08)
	struct UStaticMesh* Static Mesh 02; // 0x268(0x08)
	struct FRandomStream Random Seed; // 0x270(0x08)
	bool Random Meshes; // 0x278(0x01)

	void UserConstructionScript(); // Function BP_OL_RockTunnel_A.BP_OL_RockTunnel_A_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

