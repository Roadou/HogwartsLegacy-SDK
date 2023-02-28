// BlueprintGeneratedClass BP_NoiseFogSimple.BP_NoiseFogSimple_C
// Size: 0x2f0 (Inherited: 0x248)
struct ABP_NoiseFogSimple_C : AActor {
	struct UStaticMeshComponent* Disc; // 0x248(0x08)
	struct UStaticMeshComponent* Sphere; // 0x250(0x08)
	struct UStaticMeshComponent* Box; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct UMaterialInterface* BaseFogMaterialBox; // 0x268(0x08)
	struct UMaterialInterface* BaseFogMaterialSphere; // 0x270(0x08)
	struct UMaterialInterface* BaseFogMaterialDisc; // 0x278(0x08)
	struct UMaterialInstanceDynamic* Mid; // 0x280(0x08)
	struct UTexture2D* NoiseTexture; // 0x288(0x08)
	struct FVector TilingFactor; // 0x290(0x0c)
	struct FVector Noise Speed; // 0x29c(0x0c)
	float SmallNumber; // 0x2a8(0x04)
	float Noise Contrast; // 0x2ac(0x04)
	float Noise Power; // 0x2b0(0x04)
	bool TOD Adjustment; // 0x2b4(0x01)
	enum class BP_NoiseFog_Shape Shape; // 0x2b5(0x01)
	char pad_2B6[0x2]; // 0x2b6(0x02)
	float Shape Hardness; // 0x2b8(0x04)
	struct FLinearColor Albedo; // 0x2bc(0x10)
	float Albedo Min Scale; // 0x2cc(0x04)
	float Albedo Max Scale; // 0x2d0(0x04)
	struct FLinearColor Emissive; // 0x2d4(0x10)
	float Extinction Power; // 0x2e4(0x04)
	struct UMaterialInterface* EmptyMaterial; // 0x2e8(0x08)

	void SelectShape(struct UStaticMeshComponent*& Using Shape); // Function BP_NoiseFogSimple.BP_NoiseFogSimple_C.SelectShape // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetMaterialParams(struct UMaterialInstanceDynamic* Fog MID, struct USceneComponent* ObjectForScale); // Function BP_NoiseFogSimple.BP_NoiseFogSimple_C.SetMaterialParams // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_NoiseFogSimple.BP_NoiseFogSimple_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

