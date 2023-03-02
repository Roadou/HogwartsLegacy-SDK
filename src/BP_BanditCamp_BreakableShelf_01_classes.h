// BlueprintGeneratedClass BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C
// Size: 0x360 (Inherited: 0x357)
struct ABP_BanditCamp_BreakableShelf_01_C : ABP_Breakable_Persistent_C {
	char pad_357[0x1]; // 0x357(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BanditCamp_BreakableShelf_01(int32_t EntryPoint); // Function BP_BanditCamp_BreakableShelf_01.BP_BanditCamp_BreakableShelf_01_C.ExecuteUbergraph_BP_BanditCamp_BreakableShelf_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

