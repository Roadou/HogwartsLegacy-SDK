// BlueprintGeneratedClass BP_Phys_HangingCage_05.BP_Phys_HangingCage_05_C
// Size: 0x291 (Inherited: 0x248)
struct ABP_Phys_HangingCage_05_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* AkComponent; // 0x250(0x08)
	struct UStaticMeshComponent* Knot; // 0x258(0x08)
	struct UStaticMeshComponent* cage_01; // 0x260(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x268(0x08)
	struct UCableComponent* Cable; // 0x270(0x08)
	struct UStaticMeshComponent* SM_BCProps_RopeLashing_A; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x288(0x08)
	bool IsCageMoving; // 0x290(0x01)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_Phys_HangingCage_05.BP_Phys_HangingCage_05_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Cage_01_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Phys_HangingCage_05.BP_Phys_HangingCage_05_C.BndEvt__Cage_01_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Phys_HangingCage_05(int32_t EntryPoint); // Function BP_Phys_HangingCage_05.BP_Phys_HangingCage_05_C.ExecuteUbergraph_BP_Phys_HangingCage_05 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

