// BlueprintGeneratedClass BP_Plant_VenomousTentacula.BP_Plant_VenomousTentacula_C
// Size: 0x400 (Inherited: 0x3c4)
struct ABP_Plant_VenomousTentacula_C : ABP_Herb_C {
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct USkeletalMeshComponent* SkeletalBody; // 0x3d0(0x08)
	struct UCapsuleComponent* Capsule; // 0x3d8(0x08)
	struct UAkComponent* venomous_tentacula_idle; // 0x3e0(0x08)
	struct USkeletalMeshComponent* SkeletalFlower2; // 0x3e8(0x08)
	struct USkeletalMeshComponent* SkeletalFlower1; // 0x3f0(0x08)
	struct USkeletalMeshComponent* SkeletalFlower; // 0x3f8(0x08)

	int32_t GetNumStages(); // Function BP_Plant_VenomousTentacula.BP_Plant_VenomousTentacula_C.GetNumStages // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void GetPlantExtent(struct FVector& Box Extent); // Function BP_Plant_VenomousTentacula.BP_Plant_VenomousTentacula_C.GetPlantExtent // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SwitchMesh(int32_t New Stage); // Function BP_Plant_VenomousTentacula.BP_Plant_VenomousTentacula_C.SwitchMesh // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Plant_VenomousTentacula.BP_Plant_VenomousTentacula_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Plant_VenomousTentacula.BP_Plant_VenomousTentacula_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Plant_VenomousTentacula(int32_t EntryPoint); // Function BP_Plant_VenomousTentacula.BP_Plant_VenomousTentacula_C.ExecuteUbergraph_BP_Plant_VenomousTentacula // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

