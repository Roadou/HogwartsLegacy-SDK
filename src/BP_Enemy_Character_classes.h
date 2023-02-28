// BlueprintGeneratedClass BP_Enemy_Character.BP_Enemy_Character_C
// Size: 0x24c4 (Inherited: 0x22d0)
struct ABP_Enemy_Character_C : AEnemy_Character {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x22d0(0x08)
	struct UWaterInteractionComponent* WaterInteraction; // 0x22d8(0x08)
	struct UDynamicBranchComponent* DynamicBranch; // 0x22e0(0x08)
	struct ULootDropComponent* LootDrop; // 0x22e8(0x08)
	struct UBP_EnemyAI_C* BP_EnemyAI; // 0x22f0(0x08)
	struct FMulticastInlineDelegate OnDeath; // 0x22f8(0x10)
	struct FMulticastInlineDelegate OnZeroHealth; // 0x2308(0x10)
	struct FMulticastInlineDelegate OnSpawnFinished; // 0x2318(0x10)
	struct UAkAudioEvent* DeathDissolveAudioEvent; // 0x2328(0x08)
	struct TArray<struct UParticleSystemComponent*> DeathDissolveEmitters; // 0x2330(0x10)
	float ParticleFxContainerLifetime; // 0x2340(0x04)
	char pad_2344[0x4]; // 0x2344(0x04)
	struct ASkinFXDefinition* DeathDissolveSkinFx; // 0x2348(0x08)
	struct UParticleSystem* DeathDissolveFlash; // 0x2350(0x08)
	struct UNiagaraSystem* DeathDissolveSparks; // 0x2358(0x08)
	struct UNiagaraSystem* DeathDissolveSparksBones; // 0x2360(0x08)
	struct AActor* ParticleFxContainerClass; // 0x2368(0x08)
	struct FTransform DefaultTransform; // 0x2370(0x30)
	struct ASkinFXDefinition* DeathExplodeSkinFx; // 0x23a0(0x08)
	struct UNiagaraSystem* DeathExplodeSparksBones; // 0x23a8(0x08)
	struct UNiagaraSystem* DeathExplodeSparks; // 0x23b0(0x08)
	struct UParticleSystem* DeathExplodeFlash; // 0x23b8(0x08)
	struct UNiagaraSystem* DeathDissolveShapeFX; // 0x23c0(0x08)
	struct TArray<struct UNiagaraComponent*> DeathDissolveSystems; // 0x23c8(0x10)
	struct FMulticastInlineDelegate OnCharacterHitBySpell; // 0x23d8(0x10)
	struct UParticleSystem* CompanionCombatAUXFX; // 0x23e8(0x08)
	struct UParticleSystemComponent* CompanionCombatAUXEmitter; // 0x23f0(0x08)
	struct ASkinFXDefinition* Protego Skin Fx Strong; // 0x23f8(0x08)
	struct FMaterialSwapParameters Parameter Values; // 0x2400(0x50)
	struct FMaterialSwapParameters Parameter Values_1; // 0x2450(0x50)
	struct FMaterialSwapScalarParameter NewVar_1; // 0x24a0(0x0c)
	char pad_24AC[0x4]; // 0x24ac(0x04)
	struct USkeletalMeshComponent* Mesh_1; // 0x24b0(0x08)
	struct UNiagaraSystem* DeathDisintegrationVFX; // 0x24b8(0x08)
	int32_t Death_customStencilValue; // 0x24c0(0x04)

	bool DisallowArrestoMomentum(); // Function BP_Enemy_Character.BP_Enemy_Character_C.DisallowArrestoMomentum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct AActor* Disarm(struct AActor* Instigator, struct FVector HitDirection, float ScaleDisarmForce); // Function BP_Enemy_Character.BP_Enemy_Character_C.Disarm // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct AEnemy_SplineSpawnActor* SpawnSplineSpawnActor(struct FTransform SpawnTransform, struct FEnemy_SplineSpawnActorData& Data); // Function BP_Enemy_Character.BP_Enemy_Character_C.SpawnSplineSpawnActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct AEnemy_ApparateActor* SpawnApparateActor(struct FTransform SpawnTransform, struct FEnemy_ApparateActorData& Data); // Function BP_Enemy_Character.BP_Enemy_Character_C.SpawnApparateActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DescendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity); // Function BP_Enemy_Character.BP_Enemy_Character_C.DescendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDescendo(); // Function BP_Enemy_Character.BP_Enemy_Character_C.DisallowDescendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ExpulsoStart(struct AActor* Instigator, struct FVector Location); // Function BP_Enemy_Character.BP_Enemy_Character_C.ExpulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowAccio(); // Function BP_Enemy_Character.BP_Enemy_Character_C.DisallowAccio // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDepulso(); // Function BP_Enemy_Character.BP_Enemy_Character_C.DisallowDepulso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowFlipendo(); // Function BP_Enemy_Character.BP_Enemy_Character_C.DisallowFlipendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowLevioso(); // Function BP_Enemy_Character.BP_Enemy_Character_C.DisallowLevioso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowWingardium(); // Function BP_Enemy_Character.BP_Enemy_Character_C.DisallowWingardium // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoChargedStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location, struct FVector Velocity, bool InitiatedByPlayer, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_Enemy_Character.BP_Enemy_Character_C.LeviosoChargedStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool AccioStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_Enemy_Character.BP_Enemy_Character_C.AccioStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DepulsoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_Enemy_Character.BP_Enemy_Character_C.DepulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool FlipendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_Enemy_Character.BP_Enemy_Character_C.FlipendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoStart(struct AActor* Instigator, struct FVector Location, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects); // Function BP_Enemy_Character.BP_Enemy_Character_C.LeviosoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool WingardiumStart(struct ASpellTool* SpellTool, struct AActor* Instigator); // Function BP_Enemy_Character.BP_Enemy_Character_C.WingardiumStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_Enemy_Character.BP_Enemy_Character_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Enemy_Character.BP_Enemy_Character_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Enemy_Character.BP_Enemy_Character_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Enemy_Character.BP_Enemy_Character_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DiseminateSpawnData(struct UEnemyAISpawnData* SpawnData); // Function BP_Enemy_Character.BP_Enemy_Character_C.DiseminateSpawnData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumBegin(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnArrestoMomentumBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumEnd(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnArrestoMomentumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAccioEnd(struct AActor* Instigator, bool TransitioningToWingardium); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnAccioEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAccioFailed(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnAccioFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAccioThrow(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector ThrowVelocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnAccioThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoFailed(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnDepulsoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoThrow(struct ASpellTool* SpellTool, struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnDepulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnExpulsoThrow(struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnExpulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoFailed(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnFlipendoFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoThrow(struct ASpellTool* SpellTool, struct FVector ThrowDirection, struct FVector ThrowVelocity, struct FVector AngularVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnFlipendoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoEnd(struct AActor* Instigator, bool InitiatedByPlayer); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnLeviosoEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoFailed(bool InitiatedByPlayer); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnLeviosoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumEnd(struct AActor* Instigator); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnWingardiumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumFailed(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnWingardiumFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumGhostStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnWingardiumGhostStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Enemy_Character.BP_Enemy_Character_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DeathDissolve(); // Function BP_Enemy_Character.BP_Enemy_Character_C.DeathDissolve // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeathExplode(); // Function BP_Enemy_Character.BP_Enemy_Character_C.DeathExplode // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void On Death Dissolve Event(struct USkinFXComponent* SkinFXComponent, struct FName FXName, enum class ESkinFXDelegateEvent Event); // Function BP_Enemy_Character.BP_Enemy_Character_C.On Death Dissolve Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void On Death Explode Event(struct USkinFXComponent* SkinFXComponent, struct FName FXName, enum class ESkinFXDelegateEvent Event); // Function BP_Enemy_Character.BP_Enemy_Character_C.On Death Explode Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDeathDissolveFinished(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnDeathDissolveFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void AnimEvent(struct FName Name); // Function BP_Enemy_Character.BP_Enemy_Character_C.AnimEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NPC_Health_HUD_Event(struct AActor* Target, float InHealthChange, bool bIndicateHUD); // Function BP_Enemy_Character.BP_Enemy_Character_C.NPC_Health_HUD_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnFinished(struct AActor* pActor); // Function BP_Enemy_Character.BP_Enemy_Character_C.SpawnFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioStateHeartbeat(enum class ENPC_AudioState State); // Function BP_Enemy_Character.BP_Enemy_Character_C.AudioStateHeartbeat // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NewDeathFade(); // Function BP_Enemy_Character.BP_Enemy_Character_C.NewDeathFade // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Enemy_Character(int32_t EntryPoint); // Function BP_Enemy_Character.BP_Enemy_Character_C.ExecuteUbergraph_BP_Enemy_Character // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnCharacterHitBySpell__DelegateSignature(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult Hit, struct FVector ImpactDirection); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnCharacterHitBySpell__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpawnFinished__DelegateSignature(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnSpawnFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnZeroHealth__DelegateSignature(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnZeroHealth__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDeath__DelegateSignature(); // Function BP_Enemy_Character.BP_Enemy_Character_C.OnDeath__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

