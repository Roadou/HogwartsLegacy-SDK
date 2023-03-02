// BlueprintGeneratedClass BP_OL_CoastalCliffTall.BP_OL_CoastalCliffTall_C
// Size: 0x2a0 (Inherited: 0x248)
struct ABP_OL_CoastalCliffTall_C : AActor {
	struct USplineComponent* Spline; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	enum class E_CliffEnumerator Type; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float SectionLength; // 0x25c(0x04)
	struct FRandomStream Random Seed; // 0x260(0x08)
	bool Random Meshes; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UStaticMesh* Coastal_2; // 0x270(0x08)
	struct UStaticMesh* Coastal_3; // 0x278(0x08)
	struct UStaticMesh* Coastal_4; // 0x280(0x08)
	struct UStaticMesh* Tundra_2; // 0x288(0x08)
	struct UStaticMesh* Tundra_3; // 0x290(0x08)
	struct UStaticMesh* Tundra_4; // 0x298(0x08)

	void UserConstructionScript(); // Function BP_OL_CoastalCliffTall.BP_OL_CoastalCliffTall_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

