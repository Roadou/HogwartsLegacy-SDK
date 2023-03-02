// BlueprintGeneratedClass BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_CampB_5m_PlankA1_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_CampB_5x2_Wall_CoverA; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct UObjectStateComponent* ObjectState; // 0x260(0x08)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CampB_5m_PlankA1(int32_t EntryPoint); // Function BP_CampB_5m_PlankA1.BP_CampB_5m_PlankA1_C.ExecuteUbergraph_BP_CampB_5m_PlankA1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

