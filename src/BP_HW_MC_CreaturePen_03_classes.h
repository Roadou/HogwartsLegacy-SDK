// BlueprintGeneratedClass BP_HW_MC_CreaturePen_03.BP_HW_MC_CreaturePen_03_C
// Size: 0x308 (Inherited: 0x248)
struct ABP_HW_MC_CreaturePen_03_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* AkComponentRight; // 0x250(0x08)
	struct UAkComponent* AkComponentLeft; // 0x258(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint1; // 0x260(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x268(0x08)
	struct UChildActorComponent* ChildActor1; // 0x270(0x08)
	struct UChildActorComponent* ChildActor; // 0x278(0x08)
	struct UStaticMeshComponent* SM_Sanc_UniversalBestRLGHTGATE_01A; // 0x280(0x08)
	struct UStaticMeshComponent* SM_Sanc_UniversalBestLEFTGATE_01A; // 0x288(0x08)
	struct UStaticMeshComponent* SM_HW_MC_CreaturePen_03; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x2a0(0x08)
	float Minimum Collision; // 0x2a8(0x04)
	float OtherActorSpeed; // 0x2ac(0x04)
	bool IsDoorMoving; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct TSet<struct UPhysicsConstraintComponent*> Physic Constraint; // 0x2b8(0x50)

	void ReceiveTick(float DeltaSeconds); // Function BP_HW_MC_CreaturePen_03.BP_HW_MC_CreaturePen_03_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SM_Sanc_UniversalBestLEFTGATE_01A_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_HW_MC_CreaturePen_03.BP_HW_MC_CreaturePen_03_C.BndEvt__SM_Sanc_UniversalBestLEFTGATE_01A_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SM_Sanc_UniversalBestLEFTGATE_01A_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_HW_MC_CreaturePen_03.BP_HW_MC_CreaturePen_03_C.BndEvt__SM_Sanc_UniversalBestLEFTGATE_01A_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SM_Sanc_UniversalBestRLGHTGATE_01A_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_HW_MC_CreaturePen_03.BP_HW_MC_CreaturePen_03_C.BndEvt__SM_Sanc_UniversalBestRLGHTGATE_01A_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SM_Sanc_UniversalBestRLGHTGATE_01A_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_HW_MC_CreaturePen_03.BP_HW_MC_CreaturePen_03_C.BndEvt__SM_Sanc_UniversalBestRLGHTGATE_01A_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_MC_CreaturePen_03(int32_t EntryPoint); // Function BP_HW_MC_CreaturePen_03.BP_HW_MC_CreaturePen_03_C.ExecuteUbergraph_BP_HW_MC_CreaturePen_03 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

