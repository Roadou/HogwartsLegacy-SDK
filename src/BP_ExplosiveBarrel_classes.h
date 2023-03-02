// BlueprintGeneratedClass BP_ExplosiveBarrel.BP_ExplosiveBarrel_C
// Size: 0x3d9 (Inherited: 0x378)
struct ABP_ExplosiveBarrel_C : AExplosiveBarrel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x380(0x08)
	struct UParticleSystemComponent* Smoke; // 0x388(0x08)
	struct UStaticMeshComponent* Barrel; // 0x390(0x08)
	struct FMulticastInlineDelegate BarrelDestroyed; // 0x398(0x10)
	struct FMulticastInlineDelegate BarrelDamaged; // 0x3a8(0x10)
	struct FMulticastInlineDelegate BarrelBroken; // 0x3b8(0x10)
	struct TArray<struct UInteractionArchitectAsset*> Munition Data Assets; // 0x3c8(0x10)
	bool HitByConfringo; // 0x3d8(0x01)

	struct FName GetMainBone(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.GetMainBone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetMainPrimitive(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.GetMainPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseWetness(struct AActor* Instigator, float increaseAmount, struct FVector Location); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.IncreaseWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartWetness(struct AActor* Instigator, float Amount, struct FVector Location); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.StartWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DecreaseFire(float decreaseAmount); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitByOppugnoImpact(struct AActor* Instigator, struct AActor* Object); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnHitByOppugnoImpact // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoEnd(struct AActor* Instigator); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnOppugnoEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoHold(struct AActor* Instigator); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnOppugnoHold // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoImpact(struct AActor* Instigator, struct AActor* Target, struct AActor* HitObject); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnOppugnoImpact // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoThrow(struct AActor* Instigator, struct AActor* Target, struct FVector Velocity); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnOppugnoThrow // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnReset(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetupSfx(struct UAkComponent* AkComponent); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.SetupSfx // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToApplyWetness(float Amount, struct FVector Location); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnAttemptToApplyWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDecreaseWetness(float decreaseAmount); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnDecreaseWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDry(struct AActor* Instigator); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnDry // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToWet(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnFailedToWet // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BarrelDestroyed_Event(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.BarrelDestroyed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExplodeStart(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ExplodeStart // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BarrelDamaged_Event(struct FVector DamageLocation); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.BarrelDamaged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ApplyOnFireDoT(struct AActor* Target, struct AActor* InInstigator); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ApplyOnFireDoT // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoPull(struct AActor* Instigator); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnOppugnoPull // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ExplosiveBarrel(int32_t EntryPoint); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ExecuteUbergraph_BP_ExplosiveBarrel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void BarrelBroken__DelegateSignature(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.BarrelBroken__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BarrelDamaged__DelegateSignature(struct FVector DamageLocation); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.BarrelDamaged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BarrelDestroyed__DelegateSignature(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.BarrelDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

