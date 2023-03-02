// BlueprintGeneratedClass BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C
// Size: 0x380 (Inherited: 0x357)
struct ABP_HM_Neep_Pumpkin_B_C : ANone {
	char pad_357[0x1]; // 0x357(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UAkComponent* Ak; // 0x360(0x08)
	struct UOdcAuthoredObstacleSetupComponent* ObstacleSetup; // 0x368(0x08)
	struct FMulticastInlineDelegate Pumpkin Dead; // 0x370(0x10)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.Destroyed // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_Neep_Pumpkin_B(int32_t EntryPoint); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.ExecuteUbergraph_BP_HM_Neep_Pumpkin_B // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Pumpkin Dead__DelegateSignature(); // Function BP_HM_Neep_Pumpkin_B.BP_HM_Neep_Pumpkin_B_C.Pumpkin Dead__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

