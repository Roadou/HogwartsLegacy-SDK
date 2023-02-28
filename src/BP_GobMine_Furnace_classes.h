// BlueprintGeneratedClass BP_GobMine_Furnace.BP_GobMine_Furnace_C
// Size: 0x2d0 (Inherited: 0x248)
struct ABP_GobMine_Furnace_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_GobMine_Furnace_Steam; // 0x250(0x08)
	struct UAkComponent* Ak_BP_GobMine_Furnace_Bellow; // 0x258(0x08)
	struct UAkComponent* Ak_BP_GobMine_Furnace_Fire; // 0x260(0x08)
	struct USkeletalMeshComponent* SK_GobMine_Furnace_Handles; // 0x268(0x08)
	struct UPointLightComponent* PointLight; // 0x270(0x08)
	struct UStaticMeshComponent* PlaneLeft4; // 0x278(0x08)
	struct UStaticMeshComponent* PlaneLeft3; // 0x280(0x08)
	struct UStaticMeshComponent* PlaneLeft2; // 0x288(0x08)
	struct UStaticMeshComponent* PlaneLeft1; // 0x290(0x08)
	struct UStaticMeshComponent* PlaneRight; // 0x298(0x08)
	struct UStaticMeshComponent* PlaneLeft; // 0x2a0(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_GobMine_Furnace_Top_A; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_GobMine_Furnace_Mid_A; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_GobMine_Furnace_Base_A; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)

	void ReceiveBeginPlay(); // Function BP_GobMine_Furnace.BP_GobMine_Furnace_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GobMine_Furnace(int32_t EntryPoint); // Function BP_GobMine_Furnace.BP_GobMine_Furnace_C.ExecuteUbergraph_BP_GobMine_Furnace // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

