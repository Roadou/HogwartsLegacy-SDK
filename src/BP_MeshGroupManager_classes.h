// BlueprintGeneratedClass BP_MeshGroupManager.BP_MeshGroupManager_C
// Size: 0x2f4 (Inherited: 0x248)
struct ABP_MeshGroupManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct URadialForceComponent* RadialForce; // 0x250(0x08)
	struct UBillboardComponent* Billboard; // 0x258(0x08)
	struct USceneComponent* Scene; // 0x260(0x08)
	int32_t Key Roots; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TArray<struct AActor*> RootMeshes; // 0x270(0x10)
	struct TArray<struct AActor*> AttachedMeshes; // 0x280(0x10)
	struct TArray<struct AActor*> Target; // 0x290(0x10)
	float SwitchDelay; // 0x2a0(0x04)
	bool Repairable; // 0x2a4(0x01)
	bool Auto-Repair; // 0x2a5(0x01)
	char pad_2A6[0x2]; // 0x2a6(0x02)
	float Wait time for Auto-Repair; // 0x2a8(0x04)
	float DestructionDelay; // 0x2ac(0x04)
	struct FMulticastInlineDelegate MeshBroken; // 0x2b0(0x10)
	struct FMulticastInlineDelegate MeshRepaired; // 0x2c0(0x10)
	int32_t Counter; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct AActor*> AllMeshes; // 0x2d8(0x10)
	bool DestroyManager; // 0x2e8(0x01)
	bool ApplyRadialForce; // 0x2e9(0x01)
	char pad_2EA[0x2]; // 0x2ea(0x02)
	float ImpulseRadius; // 0x2ec(0x04)
	float ImpulseStrength; // 0x2f0(0x04)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BreakCheck(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.BreakCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Custom 1(struct AActor* DestroyedActor); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.Custom 1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Custom 2(struct AActor* RepairedActor); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.Custom 2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RepairAll(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.RepairAll // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_3(struct AActor* DestroyedActor); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RepairCheck(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.RepairCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Custom4(struct AActor* RepairedActor); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.Custom4 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MeshGroupManager(int32_t EntryPoint); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.ExecuteUbergraph_BP_MeshGroupManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void MeshRepaired__DelegateSignature(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.MeshRepaired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MeshBroken__DelegateSignature(); // Function BP_MeshGroupManager.BP_MeshGroupManager_C.MeshBroken__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

