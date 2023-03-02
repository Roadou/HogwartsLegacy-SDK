// BlueprintGeneratedClass BP_OL2_MossyEmbankment_A.BP_OL2_MossyEmbankment_A_C
// Size: 0x430 (Inherited: 0x3e0)
struct ABP_OL2_MossyEmbankment_A_C : ABP_OL_Spline_Parent_B_C {
	struct USplineComponent* Spline; // 0x3e0(0x08)
	float SectionLength; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UStaticMesh* Static Mesh 01; // 0x3f0(0x08)
	struct UStaticMesh* Static Mesh 02; // 0x3f8(0x08)
	struct UStaticMesh* Static Mesh 03; // 0x400(0x08)
	struct UStaticMesh* Static Mesh 04; // 0x408(0x08)
	struct UStaticMesh* Static Mesh 05; // 0x410(0x08)
	struct UStaticMesh* Static Mesh 06; // 0x418(0x08)
	struct FRandomStream Random Seed; // 0x420(0x08)
	bool Random Meshes; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	float Section offset; // 0x42c(0x04)

	void UserConstructionScript(); // Function BP_OL2_MossyEmbankment_A.BP_OL2_MossyEmbankment_A_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

