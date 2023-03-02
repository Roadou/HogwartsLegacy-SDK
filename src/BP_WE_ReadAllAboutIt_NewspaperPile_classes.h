// BlueprintGeneratedClass BP_WE_ReadAllAboutIt_NewspaperPile.BP_WE_ReadAllAboutIt_NewspaperPile_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_WE_ReadAllAboutIt_NewspaperPile_C : AActor {
	struct UStaticMeshComponent* PolyImage; // 0x248(0x08)
	struct UStaticMeshComponent* NewspaperPile; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct TArray<struct UMaterialInterface*> NewspaperMaterials; // 0x260(0x10)
	struct TArray<struct UStaticMesh*> PolyImages; // 0x270(0x10)

	void SetNewspaperVisuals(int32_t Index); // Function BP_WE_ReadAllAboutIt_NewspaperPile.BP_WE_ReadAllAboutIt_NewspaperPile_C.SetNewspaperVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

