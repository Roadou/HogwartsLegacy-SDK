// BlueprintGeneratedClass BP_FakeFog_A.BP_FakeFog_A_C
// Size: 0x2e0 (Inherited: 0x248)
struct ABP_FakeFog_A_C : AActor {
	struct UStaticMeshComponent* SM_Fog; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct UStaticMesh* Sphere; // 0x258(0x08)
	struct UStaticMesh* Cone; // 0x260(0x08)
	bool Use Cone; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UMaterialInstanceDynamic* Fog MID; // 0x270(0x08)
	bool Use TOD adjustment; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float Fog Density Day Max; // 0x27c(0x04)
	float Fog Density Day Min; // 0x280(0x04)
	float Fog Density Night Min; // 0x284(0x04)
	float Fog Density Night Max; // 0x288(0x04)
	float Fade Distance; // 0x28c(0x04)
	float Emissive Multiplier; // 0x290(0x04)
	float Fresnel; // 0x294(0x04)
	float Gradiant; // 0x298(0x04)
	struct FLinearColor Fog Color; // 0x29c(0x10)
	float Depth Fade; // 0x2ac(0x04)
	bool Use Fog Sheets; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float T1_Pan Speed; // 0x2b4(0x04)
	float T2 Pan Speed; // 0x2b8(0x04)
	float T1_Scale; // 0x2bc(0x04)
	float T2_Scale; // 0x2c0(0x04)
	float T3_Pan Speed; // 0x2c4(0x04)
	float T3_Scale; // 0x2c8(0x04)
	bool Set A; // 0x2cc(0x01)
	bool Set B; // 0x2cd(0x01)
	bool Set C; // 0x2ce(0x01)
	char pad_2CF[0x1]; // 0x2cf(0x01)
	struct UStaticMesh* Fog Mesh; // 0x2d0(0x08)
	struct UMaterialInterface* Fog Mat; // 0x2d8(0x08)

	void Construct Fog(); // Function BP_FakeFog_A.BP_FakeFog_A_C.Construct Fog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Fog Sheet Selection(); // Function BP_FakeFog_A.BP_FakeFog_A_C.Fog Sheet Selection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Texture Dependent(); // Function BP_FakeFog_A.BP_FakeFog_A_C.Texture Dependent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Base Fog Parameters(); // Function BP_FakeFog_A.BP_FakeFog_A_C.Base Fog Parameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_FakeFog_A.BP_FakeFog_A_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

