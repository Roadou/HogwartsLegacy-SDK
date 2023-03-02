// BlueprintGeneratedClass BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C
// Size: 0x371 (Inherited: 0x357)
struct ABP_LargeBreakableWallBase_C : ABP_Breakable_Persistent_C {
	char pad_357[0x1]; // 0x357(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x360(0x08)
	float Damage; // 0x368(0x04)
	float ExplosionForce; // 0x36c(0x04)
	bool PlayMusicStinger; // 0x370(0x01)

	struct FName GetMainBone(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.GetMainBone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetMainPrimitive(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.GetMainPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnReset(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetupSfx(struct UAkComponent* AkComponent); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.SetupSfx // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void MusicStinger(); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.MusicStinger // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_LargeBreakableWallBase(int32_t EntryPoint); // Function BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.ExecuteUbergraph_BP_LargeBreakableWallBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

