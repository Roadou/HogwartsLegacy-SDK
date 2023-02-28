// BlueprintGeneratedClass BP_HW_Cabinet_Potnr.BP_HW_Cabinet_Potnr_C
// Size: 0x2f0 (Inherited: 0x2a8)
struct ABP_HW_Cabinet_Potnr_C : ATransfigurationObjectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UDeferredChildActorComponent* Deferred_Dressing02; // 0x2b0(0x08)
	struct UDeferredChildActorComponent* Deferred_Dressing01; // 0x2b8(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x2c0(0x08)
	struct UConjurationSnappingFootprintComponent* ConjurationSnappingFootprint; // 0x2c8(0x08)
	struct UAkComponent* AkComponent; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_Sanc_Cabinet_Potnr; // 0x2d8(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse45; // 0x2e0(0x08)
	struct USceneComponent* Scene; // 0x2e8(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_Cabinet_Potnr.BP_HW_Cabinet_Potnr_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Cabinet_Potnr(int32_t EntryPoint); // Function BP_HW_Cabinet_Potnr.BP_HW_Cabinet_Potnr_C.ExecuteUbergraph_BP_HW_Cabinet_Potnr // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

