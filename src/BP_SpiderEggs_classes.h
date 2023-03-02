// BlueprintGeneratedClass BP_SpiderEggs.BP_SpiderEggs_C
// Size: 0x6a8 (Inherited: 0x5c0)
struct ABP_SpiderEggs_C : ASpiderEggs {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct UCapsuleComponent* HitBox; // 0x5c8(0x08)
	struct UUprightAttachSceneComponent* UprightAttachScene; // 0x5d0(0x08)
	struct USceneComponent* AlertCalloutAttachComponent; // 0x5d8(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x5e0(0x08)
	int32_t PropIndex; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x5f0(0x50)
	bool CompiledList; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	struct TMap<enum class ESpiderTypeEnum, struct FSTR_SpiderEggsacParams> SpiderDataMap; // 0x648(0x50)
	struct FMulticastInlineDelegate BurstDispatcher; // 0x698(0x10)

	bool DisallowArrestoMomentum(); // Function BP_SpiderEggs.BP_SpiderEggs_C.DisallowArrestoMomentum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_SpiderEggs.BP_SpiderEggs_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseWetness(struct AActor* Instigator, float increaseAmount, struct FVector Location); // Function BP_SpiderEggs.BP_SpiderEggs_C.IncreaseWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartWetness(struct AActor* Instigator, float Amount, struct FVector Location); // Function BP_SpiderEggs.BP_SpiderEggs_C.StartWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_SpiderEggs.BP_SpiderEggs_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_SpiderEggs.BP_SpiderEggs_C.Damaged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_SpiderEggs.BP_SpiderEggs_C.Destroyed // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DecreaseFire(float decreaseAmount); // Function BP_SpiderEggs.BP_SpiderEggs_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_SpiderEggs.BP_SpiderEggs_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_SpiderEggs.BP_SpiderEggs_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_SpiderEggs.BP_SpiderEggs_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupParamsForSpawnType(); // Function BP_SpiderEggs.BP_SpiderEggs_C.SetupParamsForSpawnType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_SpiderEggs.BP_SpiderEggs_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_SpiderEggs.BP_SpiderEggs_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDecreaseWetness(float decreaseAmount); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnDecreaseWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDry(struct AActor* Instigator); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnDry // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToWet(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToWet // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToApplyWetness(float Amount, struct FVector Location); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnAttemptToApplyWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_SpiderEggs.BP_SpiderEggs_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumBegin(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnArrestoMomentumBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumEnd(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnArrestoMomentumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void _StartExplode(); // Function BP_SpiderEggs.BP_SpiderEggs_C._StartExplode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void _CancelExplode(); // Function BP_SpiderEggs.BP_SpiderEggs_C._CancelExplode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void _StartFireLight(); // Function BP_SpiderEggs.BP_SpiderEggs_C._StartFireLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void _StopFireLight(); // Function BP_SpiderEggs.BP_SpiderEggs_C._StopFireLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void _CallDispatcher(); // Function BP_SpiderEggs.BP_SpiderEggs_C._CallDispatcher // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoExplode(); // Function BP_SpiderEggs.BP_SpiderEggs_C.DoExplode // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SpiderEggs.BP_SpiderEggs_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnBurst(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnBurst // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStartPulse(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnStartPulse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStopPulse(); // Function BP_SpiderEggs.BP_SpiderEggs_C.OnStopPulse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SpiderEggs(int32_t EntryPoint); // Function BP_SpiderEggs.BP_SpiderEggs_C.ExecuteUbergraph_BP_SpiderEggs // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void BurstDispatcher__DelegateSignature(); // Function BP_SpiderEggs.BP_SpiderEggs_C.BurstDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

