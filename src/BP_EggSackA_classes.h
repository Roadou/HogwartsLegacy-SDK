// BlueprintGeneratedClass BP_EggSackA.BP_EggSackA_C
// Size: 0x410 (Inherited: 0x380)
struct ABP_EggSackA_C : ASpiderWeb_EggSack {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x388(0x08)
	struct UParticleSystemComponent* Flames; // 0x390(0x08)
	struct UTargetComponent* Target; // 0x398(0x08)
	struct UCapsuleComponent* Capsule; // 0x3a0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x3a8(0x08)
	struct FMulticastInlineDelegate Break; // 0x3b0(0x10)
	struct FMulticastInlineDelegate Wake; // 0x3c0(0x10)
	struct FMulticastInlineDelegate AccioInteraction; // 0x3d0(0x10)
	struct FMulticastInlineDelegate DescendoInteraction; // 0x3e0(0x10)
	struct FMulticastInlineDelegate WingardiumInteraction; // 0x3f0(0x10)
	struct FMulticastInlineDelegate ScaleInteraction; // 0x400(0x10)

	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_EggSackA.BP_EggSackA_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool AccioStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_EggSackA.BP_EggSackA_C.AccioStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DepulsoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_EggSackA.BP_EggSackA_C.DepulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DescendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity); // Function BP_EggSackA.BP_EggSackA_C.DescendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowAccio(); // Function BP_EggSackA.BP_EggSackA_C.DisallowAccio // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDepulso(); // Function BP_EggSackA.BP_EggSackA_C.DisallowDepulso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDescendo(); // Function BP_EggSackA.BP_EggSackA_C.DisallowDescendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowFlipendo(); // Function BP_EggSackA.BP_EggSackA_C.DisallowFlipendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowLevioso(); // Function BP_EggSackA.BP_EggSackA_C.DisallowLevioso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowWingardium(); // Function BP_EggSackA.BP_EggSackA_C.DisallowWingardium // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ExpulsoStart(struct AActor* Instigator, struct FVector Location); // Function BP_EggSackA.BP_EggSackA_C.ExpulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool FlipendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_EggSackA.BP_EggSackA_C.FlipendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoChargedStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location, struct FVector Velocity, bool InitiatedByPlayer, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_EggSackA.BP_EggSackA_C.LeviosoChargedStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoStart(struct AActor* Instigator, struct FVector Location, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects); // Function BP_EggSackA.BP_EggSackA_C.LeviosoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool WingardiumStart(struct ASpellTool* SpellTool, struct AActor* Instigator); // Function BP_EggSackA.BP_EggSackA_C.WingardiumStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DecreaseFire(float decreaseAmount); // Function BP_EggSackA.BP_EggSackA_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_EggSackA.BP_EggSackA_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_EggSackA.BP_EggSackA_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_EggSackA.BP_EggSackA_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_EggSackA.BP_EggSackA_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_EggSackA.BP_EggSackA_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_EggSackA.BP_EggSackA_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_EggSackA.BP_EggSackA_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_EggSackA.BP_EggSackA_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAccioFailed(); // Function BP_EggSackA.BP_EggSackA_C.OnAccioFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAccioThrow(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector ThrowVelocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_EggSackA.BP_EggSackA_C.OnAccioThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoFailed(); // Function BP_EggSackA.BP_EggSackA_C.OnDepulsoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoThrow(struct ASpellTool* SpellTool, struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_EggSackA.BP_EggSackA_C.OnDepulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnExpulsoThrow(struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_EggSackA.BP_EggSackA_C.OnExpulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoFailed(); // Function BP_EggSackA.BP_EggSackA_C.OnFlipendoFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoThrow(struct ASpellTool* SpellTool, struct FVector ThrowDirection, struct FVector ThrowVelocity, struct FVector AngularVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_EggSackA.BP_EggSackA_C.OnFlipendoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoEnd(struct AActor* Instigator, bool InitiatedByPlayer); // Function BP_EggSackA.BP_EggSackA_C.OnLeviosoEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoFailed(bool InitiatedByPlayer); // Function BP_EggSackA.BP_EggSackA_C.OnLeviosoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumFailed(); // Function BP_EggSackA.BP_EggSackA_C.OnWingardiumFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumGhostStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets); // Function BP_EggSackA.BP_EggSackA_C.OnWingardiumGhostStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_EggSackA.BP_EggSackA_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_EggSackA.BP_EggSackA_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_EggSackA.BP_EggSackA_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_EggSackA.BP_EggSackA_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_EggSackA.BP_EggSackA_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_EggSackA.BP_EggSackA_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_EggSackA.BP_EggSackA_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_EggSackA.BP_EggSackA_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_EggSackA.BP_EggSackA_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_EggSackA.BP_EggSackA_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_EggSackA.BP_EggSackA_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_EggSackA.BP_EggSackA_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_EggSackA.BP_EggSackA_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_EggSackA.BP_EggSackA_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_EggSackA.BP_EggSackA_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_EggSackA.BP_EggSackA_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_EggSackA.BP_EggSackA_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_EggSackA.BP_EggSackA_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_EggSackA.BP_EggSackA_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_EggSackA.BP_EggSackA_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_EggSackA.BP_EggSackA_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_EggSackA.BP_EggSackA_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_EggSackA.BP_EggSackA_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SpawnEnemySpiders(); // Function BP_EggSackA.BP_EggSackA_C.SpawnEnemySpiders // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnLoot(); // Function BP_EggSackA.BP_EggSackA_C.SpawnLoot // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnDBObject(); // Function BP_EggSackA.BP_EggSackA_C.SpawnDBObject // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExplodeSack(); // Function BP_EggSackA.BP_EggSackA_C.ExplodeSack // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_EggSackA.BP_EggSackA_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAccioEnd(struct AActor* Instigator, bool TransitioningToWingardium); // Function BP_EggSackA.BP_EggSackA_C.OnAccioEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_EggSackA.BP_EggSackA_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BreakEvent(float Delay, bool bExplode); // Function BP_EggSackA.BP_EggSackA_C.BreakEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumEnd(struct AActor* Instigator); // Function BP_EggSackA.BP_EggSackA_C.OnWingardiumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_EggSackA.BP_EggSackA_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void AccioBreak(); // Function BP_EggSackA.BP_EggSackA_C.AccioBreak // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_EggSackA.BP_EggSackA_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_EggSackA(int32_t EntryPoint); // Function BP_EggSackA.BP_EggSackA_C.ExecuteUbergraph_BP_EggSackA // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void ScaleInteraction__DelegateSignature(bool bStart, bool bScaleUp); // Function BP_EggSackA.BP_EggSackA_C.ScaleInteraction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WingardiumInteraction__DelegateSignature(bool bStart); // Function BP_EggSackA.BP_EggSackA_C.WingardiumInteraction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DescendoInteraction__DelegateSignature(); // Function BP_EggSackA.BP_EggSackA_C.DescendoInteraction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AccioInteraction__DelegateSignature(bool bStarted, float Time); // Function BP_EggSackA.BP_EggSackA_C.AccioInteraction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Wake__DelegateSignature(); // Function BP_EggSackA.BP_EggSackA_C.Wake__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Break__DelegateSignature(float Delay, bool bExplode); // Function BP_EggSackA.BP_EggSackA_C.Break__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

