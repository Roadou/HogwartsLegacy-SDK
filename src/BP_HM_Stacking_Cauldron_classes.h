// BlueprintGeneratedClass BP_HM_Stacking_Cauldron.BP_HM_Stacking_Cauldron_C
// Size: 0x2d0 (Inherited: 0x248)
struct ABP_HM_Stacking_Cauldron_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_E10; // 0x258(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_F; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_A11; // 0x268(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_C; // 0x270(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_D13; // 0x278(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_B_10; // 0x280(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseB10; // 0x288(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_B10; // 0x290(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseD14; // 0x298(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_D14; // 0x2a0(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseE9; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_E9; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_A_11; // 0x2b8(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HM_Stacking_Cauldron.BP_HM_Stacking_Cauldron_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_Stacking_Cauldron(int32_t EntryPoint); // Function BP_HM_Stacking_Cauldron.BP_HM_Stacking_Cauldron_C.ExecuteUbergraph_BP_HM_Stacking_Cauldron // (Final|UbergraphFunction) // @ game+0x38a7480
};

