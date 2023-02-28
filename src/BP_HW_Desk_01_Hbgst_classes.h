// BlueprintGeneratedClass BP_HW_Desk_01_Hbgst.BP_HW_Desk_01_Hbgst_C
// Size: 0x3a8 (Inherited: 0x370)
struct ABP_HW_Desk_01_Hbgst_C : ABP_Sanc_Desk_01_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UDeferredChildActorComponent* Deferred_Dressing02; // 0x378(0x08)
	struct UDeferredChildActorComponent* Deferred_Dressing01; // 0x380(0x08)
	struct UAkComponent* Ak_BP_Sanc_Desk_01_Hbgst; // 0x388(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x390(0x08)
	struct UAkComponent* AkComponent; // 0x398(0x08)
	struct UConjurationSnappingFootprintComponent* ConjurationSnappingFootprint1; // 0x3a0(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_Desk_01_Hbgst.BP_HW_Desk_01_Hbgst_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Sanc_Desk_01_Hbgst_Ak_BP_Sanc_Desk_01_Hbgst_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function BP_HW_Desk_01_Hbgst.BP_HW_Desk_01_Hbgst_C.BndEvt__BP_Sanc_Desk_01_Hbgst_Ak_BP_Sanc_Desk_01_Hbgst_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Desk_01_Hbgst(int32_t EntryPoint); // Function BP_HW_Desk_01_Hbgst.BP_HW_Desk_01_Hbgst_C.ExecuteUbergraph_BP_HW_Desk_01_Hbgst // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

