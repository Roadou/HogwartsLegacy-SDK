// BlueprintGeneratedClass BP_Sanc_Desk_01_Potnr.BP_Sanc_Desk_01_Potnr_C
// Size: 0x3a0 (Inherited: 0x370)
struct ABP_Sanc_Desk_01_Potnr_C : ABP_Sanc_Desk_01_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UDeferredChildActorComponent* Deferred_Dressing02; // 0x378(0x08)
	struct UDeferredChildActorComponent* Deferred_Dressing01; // 0x380(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x388(0x08)
	struct UAkComponent* AkComponent; // 0x390(0x08)
	struct UConjurationSnappingFootprintComponent* ConjurationSnappingFootprint1; // 0x398(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_Sanc_Desk_01_Potnr.BP_Sanc_Desk_01_Potnr_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_Desk_01_Potnr(int32_t EntryPoint); // Function BP_Sanc_Desk_01_Potnr.BP_Sanc_Desk_01_Potnr_C.ExecuteUbergraph_BP_Sanc_Desk_01_Potnr // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

