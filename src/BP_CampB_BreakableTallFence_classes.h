// BlueprintGeneratedClass BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C
// Size: 0x390 (Inherited: 0x357)
struct ABP_CampB_BreakableTallFence_C : ABP_Breakable_Persistent_C {
	char pad_357[0x1]; // 0x357(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x360(0x08)
	struct TArray<struct AActor*> Target; // 0x368(0x10)
	struct FName stringtemp; // 0x378(0x08)
	struct FMulticastInlineDelegate TallFenceDestroyed; // 0x380(0x10)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CampB_BreakableTallFence(int32_t EntryPoint); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.ExecuteUbergraph_BP_CampB_BreakableTallFence // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void TallFenceDestroyed__DelegateSignature(); // Function BP_CampB_BreakableTallFence.BP_CampB_BreakableTallFence_C.TallFenceDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

