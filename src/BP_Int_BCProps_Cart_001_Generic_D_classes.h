// BlueprintGeneratedClass BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C
// Size: 0x370 (Inherited: 0x357)
struct ABP_Int_BCProps_Cart_001_Generic_D_C : ABP_Breakable_Persistent_C {
	char pad_357[0x1]; // 0x357(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x360(0x08)
	struct UAkComponent* reparo_wood_big; // 0x368(0x08)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Repair(); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.Repair // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Int_BCProps_Cart_001_Generic_D(int32_t EntryPoint); // Function BP_Int_BCProps_Cart_001_Generic_D.BP_Int_BCProps_Cart_001_Generic_D_C.ExecuteUbergraph_BP_Int_BCProps_Cart_001_Generic_D // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

