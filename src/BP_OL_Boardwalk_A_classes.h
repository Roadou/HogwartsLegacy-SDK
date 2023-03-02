// BlueprintGeneratedClass BP_OL_Boardwalk_A.BP_OL_Boardwalk_A_C
// Size: 0x400 (Inherited: 0x3c0)
struct ABP_OL_Boardwalk_A_C : ANone {
	struct USplineComponent* Spline; // 0x3c0(0x08)
	float SectionLength; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UStaticMesh* Static Mesh 01; // 0x3d0(0x08)
	struct UStaticMesh* Static Mesh 02; // 0x3d8(0x08)
	struct UStaticMesh* Static Mesh 03; // 0x3e0(0x08)
	struct UStaticMesh* Static Mesh 04; // 0x3e8(0x08)
	struct FRandomStream Random Seed; // 0x3f0(0x08)
	bool Random Meshes; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	float Section offset; // 0x3fc(0x04)

	void UserConstructionScript(); // Function BP_OL_Boardwalk_A.BP_OL_Boardwalk_A_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

