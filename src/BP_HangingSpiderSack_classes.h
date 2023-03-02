// BlueprintGeneratedClass BP_HangingSpiderSack.BP_HangingSpiderSack_C
// Size: 0x400 (Inherited: 0x348)
struct ABP_HangingSpiderSack_C : ASpiderWeb_HangingBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UChildActorComponent* EggSack; // 0x350(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x358(0x08)
	struct UPoseableMeshComponent* PoseableMesh; // 0x360(0x08)
	struct UStaticMeshComponent* Anchor; // 0x368(0x08)
	struct USceneComponent* Root; // 0x370(0x08)
	int32_t PropIndex; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x380(0x50)
	bool CompiledList; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct ABP_EggSackA_C* SpawnedSackBP; // 0x3d8(0x08)
	struct FMulticastInlineDelegate Break; // 0x3e0(0x10)
	struct UPhysicsConstraintComponent* Physics Constraint; // 0x3f0(0x08)
	struct FRandomStream Random Seed; // 0x3f8(0x08)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_1_Break__DelegateSignature(float Delay, bool bExplode); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_1_Break__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_2_AccioInteraction__DelegateSignature(bool bStarted, float Time); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_2_AccioInteraction__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_3_DescendoInteraction__DelegateSignature(); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_3_DescendoInteraction__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_4_WingardiumInteraction__DelegateSignature(bool bStart); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_4_WingardiumInteraction__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_5_ScaleInteraction__DelegateSignature(bool bStart, bool bScaleUp); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_5_ScaleInteraction__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_6_ComponentWakeSignature__DelegateSignature(struct UPrimitiveComponent* WakingComponent, struct FName BoneName); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_6_ComponentWakeSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_7_ComponentSleepSignature__DelegateSignature(struct UPrimitiveComponent* SleepingComponent, struct FName BoneName); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_7_ComponentSleepSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HangingSpiderSack(int32_t EntryPoint); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.ExecuteUbergraph_BP_HangingSpiderSack // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Break__DelegateSignature(); // Function BP_HangingSpiderSack.BP_HangingSpiderSack_C.Break__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

