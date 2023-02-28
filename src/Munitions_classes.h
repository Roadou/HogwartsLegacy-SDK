// Class Munitions.MunitionType_Base
// Size: 0x360 (Inherited: 0x248)
struct AMunitionType_Base : AActor {
	float m_damage; // 0x248(0x04)
	float m_minLifeTime; // 0x24c(0x04)
	float m_maxLifeTime; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct FGameplayTagContainer MunitionImpactTags; // 0x258(0x20)
	struct TArray<struct UInteractionArchitectAsset*> MunitionDataAssets; // 0x278(0x10)
	struct FMulticastInlineDelegate OnOverlap; // 0x288(0x10)
	struct FMulticastInlineDelegate OnImpact; // 0x298(0x10)
	struct FMulticastInlineDelegate OnMunitionDestroyed; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnImpactDamage; // 0x2b8(0x10)
	bool bDOAOnParrySuccess; // 0x2c8(0x01)
	char pad_2C9[0x97]; // 0x2c9(0x97)

	void TargetDestroyed(); // Function Munitions.MunitionType_Base.TargetDestroyed // (Native|Public|BlueprintCallable) // @ game+0x169c770
	void SetVelocityIncludeTarget(bool bInFlag); // Function Munitions.MunitionType_Base.SetVelocityIncludeTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x5e0a170
	void SetTarget(struct AActor* i_pActor); // Function Munitions.MunitionType_Base.SetTarget // (Native|Public|BlueprintCallable) // @ game+0x5e0a0e0
	void SetStartingVelocity(struct FVector InVelocity); // Function Munitions.MunitionType_Base.SetStartingVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5e0a050
	void SetSourcePosition(struct FVector i_sourcePos); // Function Munitions.MunitionType_Base.SetSourcePosition // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5e09fc0
	void SetRemainingLifeTime(float InRemaningTime); // Function Munitions.MunitionType_Base.SetRemainingLifeTime // (Final|Native|Public|BlueprintCallable) // @ game+0x5e09f30
	void SetRecomputeVelocity(bool bInFlag); // Function Munitions.MunitionType_Base.SetRecomputeVelocity // (Final|Native|Public|BlueprintCallable) // @ game+0x5e09ea0
	void SetMunitionOwner(struct AActor* i_pActor); // Function Munitions.MunitionType_Base.SetMunitionOwner // (Native|Public|BlueprintCallable) // @ game+0x34a4de0
	void SetMunitionImpactType(struct FName InMunitionImpactType); // Function Munitions.MunitionType_Base.SetMunitionImpactType // (Final|Native|Public|BlueprintCallable) // @ game+0x5e09e10
	void SetMunitionDataAssets(struct TArray<struct UInteractionArchitectAsset*>& InMunitionDataAssets); // Function Munitions.MunitionType_Base.SetMunitionDataAssets // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5e09d40
	void SetMaxRange(float Range); // Function Munitions.MunitionType_Base.SetMaxRange // (Native|Public|BlueprintCallable) // @ game+0x5e09cb0
	void SetMaxDamage(float InMaxDamage); // Function Munitions.MunitionType_Base.SetMaxDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x5e09c30
	void SetLifeTime(float InMaxTime); // Function Munitions.MunitionType_Base.SetLifeTime // (Final|Native|Public|BlueprintCallable) // @ game+0x5e09bb0
	void SetInstigator(struct AActor* i_pActor); // Function Munitions.MunitionType_Base.SetInstigator // (Native|Public|BlueprintCallable) // @ game+0x34a9830
	void SetFromAimMode(bool bInFlag); // Function Munitions.MunitionType_Base.SetFromAimMode // (Final|Native|Public|BlueprintCallable) // @ game+0x33e4a60
	void SetDestinationPosition(struct FVector i_destPos); // Function Munitions.MunitionType_Base.SetDestinationPosition // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5e09b20
	void SetDamage(float InDamage); // Function Munitions.MunitionType_Base.SetDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x5e09aa0
	void ResetMunitionTagContainer(); // Function Munitions.MunitionType_Base.ResetMunitionTagContainer // (Final|Native|Public|BlueprintCallable) // @ game+0x5e09380
	void ResetMunitionDataAssets(); // Function Munitions.MunitionType_Base.ResetMunitionDataAssets // (Final|Native|Public|BlueprintCallable) // @ game+0x5e09350
	void RemoveMunitionTagContainer(struct FGameplayTagContainer& InMunitionTagContainer); // Function Munitions.MunitionType_Base.RemoveMunitionTagContainer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5e09290
	void RemoveMunitionTag(struct FGameplayTag& InMunitionTag); // Function Munitions.MunitionType_Base.RemoveMunitionTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5e09200
	void RemoveMunitionDataAsset(struct UInteractionArchitectAsset* InMunitionDataAsset); // Function Munitions.MunitionType_Base.RemoveMunitionDataAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x5e090b0
	void OnOverlap__DelegateSignature(struct AMunitionType_Base* MunitionInstance, struct FMunitionImpactData& MunitionImpactData); // DelegateFunction Munitions.MunitionType_Base.OnOverlap__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x38a7480
	void OnImpactDamage__DelegateSignature(struct AMunitionType_Base* MunitionInstance, struct FMunitionImpactData& MunitionImpactData); // DelegateFunction Munitions.MunitionType_Base.OnImpactDamage__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x38a7480
	void OnImpact__DelegateSignature(struct AMunitionType_Base* MunitionInstance, struct FMunitionImpactData& MunitionImpactData); // DelegateFunction Munitions.MunitionType_Base.OnImpact__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x38a7480
	void OnDestroyed__DelegateSignature(struct AMunitionType_Base* MunitionInstance); // DelegateFunction Munitions.MunitionType_Base.OnDestroyed__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	void MunitionIgnored(); // Function Munitions.MunitionType_Base.MunitionIgnored // (Native|Public|BlueprintCallable) // @ game+0x3310030
	void MunitionFailed(); // Function Munitions.MunitionType_Base.MunitionFailed // (Native|Public|BlueprintCallable) // @ game+0x58c79c0
	void MunitionDOA(); // Function Munitions.MunitionType_Base.MunitionDOA // (Native|Public|BlueprintCallable) // @ game+0x3310210
	void MunitionDeflected(); // Function Munitions.MunitionType_Base.MunitionDeflected // (Native|Public|BlueprintCallable) // @ game+0x330dd70
	void MunitionBlocked(); // Function Munitions.MunitionType_Base.MunitionBlocked // (Native|Public|BlueprintCallable) // @ game+0x3311b80
	bool K2_WasMunitionDeflected(); // Function Munitions.MunitionType_Base.K2_WasMunitionDeflected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08f80
	bool IsDeflectedMunition_K2(); // Function Munitions.MunitionType_Base.IsDeflectedMunition_K2 // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08f60
	void IgnoreActor(struct AActor* InActor); // Function Munitions.MunitionType_Base.IgnoreActor // (Native|Public|BlueprintCallable) // @ game+0x5e08ed0
	bool GetVelocityIncludeTarget(); // Function Munitions.MunitionType_Base.GetVelocityIncludeTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08340
	struct AActor* GetTarget(); // Function Munitions.MunitionType_Base.GetTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08300
	struct FVector GetStartingVelocity(); // Function Munitions.MunitionType_Base.GetStartingVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e082d0
	struct FVector GetSourcePosition(); // Function Munitions.MunitionType_Base.GetSourcePosition // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x58c7510
	float GetRemainingLifeTime(); // Function Munitions.MunitionType_Base.GetRemainingLifeTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08280
	bool GetRecomputeVelocity(); // Function Munitions.MunitionType_Base.GetRecomputeVelocity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08260
	struct FGameplayTagContainer GetMunitionTagContainer(); // Function Munitions.MunitionType_Base.GetMunitionTagContainer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e081c0
	struct AActor* GetMunitionOwner(); // Function Munitions.MunitionType_Base.GetMunitionOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08180
	struct FName GetMunitionImpactType(); // Function Munitions.MunitionType_Base.GetMunitionImpactType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08160
	struct TArray<struct UInteractionArchitectAsset*> GetMunitionDataAssets(); // Function Munitions.MunitionType_Base.GetMunitionDataAssets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08130
	float GetMaxRange(); // Function Munitions.MunitionType_Base.GetMaxRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e080f0
	float GetMaxDamage(); // Function Munitions.MunitionType_Base.GetMaxDamage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e080d0
	bool GetFromAimMode(); // Function Munitions.MunitionType_Base.GetFromAimMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x33e13e0
	struct FVector GetDestinationPosition(); // Function Munitions.MunitionType_Base.GetDestinationPosition // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08090
	float GetDamage(); // Function Munitions.MunitionType_Base.GetDamage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08070
	void Fire(); // Function Munitions.MunitionType_Base.Fire // (Native|Public|BlueprintCallable) // @ game+0x31f7fd0
	struct FVector ComputeVelocity_NoGravity(struct FVector i_sourcePos, struct FVector i_destPos, struct FVector i_destVel, float i_speed, float& o_time); // Function Munitions.MunitionType_Base.ComputeVelocity_NoGravity // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5e07e10
	struct FVector ComputeVelocity(struct FVector i_sourcePos, struct FVector i_destPos, struct FVector i_destVel, float i_speed, float i_gravity, float& o_time, bool assertOnError); // Function Munitions.MunitionType_Base.ComputeVelocity // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5e07ba0
	void AddMunitionTagContainer(struct FGameplayTagContainer& InMunitionTagContainer); // Function Munitions.MunitionType_Base.AddMunitionTagContainer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5e07ae0
	void AddMunitionTag(struct FGameplayTag& InMunitionTag); // Function Munitions.MunitionType_Base.AddMunitionTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5e07a50
	void AddMunitionDataAsset(struct UInteractionArchitectAsset* InMunitionDataAsset); // Function Munitions.MunitionType_Base.AddMunitionDataAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x5e07990
};

// Class Munitions.MunitionType_Hitbox
// Size: 0x470 (Inherited: 0x360)
struct AMunitionType_Hitbox : AMunitionType_Base {
	struct FVector m_Extents; // 0x360(0x0c)
	float PhysicsImpulse; // 0x36c(0x04)
	float m_hitVictimInterval; // 0x370(0x04)
	bool bUseMunitionOwnerAtImpactSource; // 0x374(0x01)
	bool bUseTraceAsDamageImpactDirection; // 0x375(0x01)
	char pad_376[0x2]; // 0x376(0x02)
	struct UDamageType* m_damageType; // 0x378(0x08)
	bool bUnblockable; // 0x380(0x01)
	enum class ECollisionChannel CollisionChannel; // 0x381(0x01)
	bool bOnlyDetectBlockingHits; // 0x382(0x01)
	char pad_383[0x5]; // 0x383(0x05)
	struct TSoftObjectPtr<UParticleSystem> m_hitActorFX; // 0x388(0x28)
	struct TSoftObjectPtr<UParticleSystem> m_hitTerrainFX; // 0x3b0(0x28)
	struct TSoftObjectPtr<UParticleSystem> m_hitBlockedFX; // 0x3d8(0x28)
	struct UAkAudioEvent* m_hitActorSfx; // 0x400(0x08)
	struct UAkAudioEvent* m_hitTerrainSfx; // 0x408(0x08)
	struct UAkAudioEvent* m_hitBlockedSfx; // 0x410(0x08)
	char pad_418[0x58]; // 0x418(0x58)
};

// Class Munitions.MunitionType_Subsonic
// Size: 0x468 (Inherited: 0x360)
struct AMunitionType_Subsonic : AMunitionType_Base {
	float m_speed; // 0x360(0x04)
	float m_gravity; // 0x364(0x04)
	bool m_explodeOnContactWithActors; // 0x368(0x01)
	bool m_explodeOnContactWithTerrain; // 0x369(0x01)
	bool m_explodeWhenLifetimeExpires; // 0x36a(0x01)
	bool m_deactivteParticlesOnDeath; // 0x36b(0x01)
	float m_delayedDeactivationTime; // 0x36c(0x04)
	float m_delayedDeathTime; // 0x370(0x04)
	float m_physicsImpulse; // 0x374(0x04)
	struct AMunitionType_Base* m_AOE; // 0x378(0x08)
	struct UParticleSystem* m_hitActorFX; // 0x380(0x08)
	struct UParticleSystem* m_hitTerrainFX; // 0x388(0x08)
	struct UParticleSystem* m_hitBlockedFX; // 0x390(0x08)
	struct UParticleSystem* m_fizzleOutFX; // 0x398(0x08)
	struct UNiagaraSystem* m_hitActorNiagaraFX; // 0x3a0(0x08)
	struct UNiagaraSystem* m_hitTerrainNiagaraFX; // 0x3a8(0x08)
	struct UNiagaraSystem* m_hitBlockedNiagaraFX; // 0x3b0(0x08)
	struct UNiagaraSystem* m_fizzleOutNiagaraFX; // 0x3b8(0x08)
	struct UAkAudioEvent* m_destroyedTargetSfx; // 0x3c0(0x08)
	struct UAkAudioEvent* m_hitActorSfx; // 0x3c8(0x08)
	struct UAkAudioEvent* m_hitTerrainSfx; // 0x3d0(0x08)
	struct UAkAudioEvent* m_hitBlockedSfx; // 0x3d8(0x08)
	struct UAkAudioEvent* m_fizzleOutSfx; // 0x3e0(0x08)
	bool m_placeDecal; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UMaterialInterface* m_decalMaterial; // 0x3f0(0x08)
	struct FVector m_decalSize; // 0x3f8(0x0c)
	float m_decalLifeSpan; // 0x404(0x04)
	float m_decalFadeTime; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct UCurveFloat* HomingMarkerOffsetCurve; // 0x410(0x08)
	struct UCurveFloat* HomingAccelerationCurve; // 0x418(0x08)
	struct USphereComponent* m_sphereComp; // 0x420(0x08)
	struct USkeletalMeshComponent* m_meshComp; // 0x428(0x08)
	struct UMunitionMovementComponent* ProjectileMovementComponent; // 0x430(0x08)
	char pad_438[0x30]; // 0x438(0x30)

	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function Munitions.MunitionType_Subsonic.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFire(struct AActor* Target, struct FVector TargetLocation, struct FVector Velocity); // Function Munitions.MunitionType_Subsonic.OnFire // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x38a7480
	struct USphereComponent* GetSphereComp(); // Function Munitions.MunitionType_Subsonic.GetSphereComp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e082b0
	struct UMunitionMovementComponent* GetProjectileMovement(); // Function Munitions.MunitionType_Subsonic.GetProjectileMovement // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08240
	struct USkeletalMeshComponent* GetMeshComp(); // Function Munitions.MunitionType_Subsonic.GetMeshComp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e08110
	void DestroyMunition(); // Function Munitions.MunitionType_Subsonic.DestroyMunition // (Final|Native|Public|BlueprintCallable) // @ game+0x31e1780
};

// Class Munitions.MunitionMovementComponent
// Size: 0x1f0 (Inherited: 0x1f0)
struct UMunitionMovementComponent : UProjectileMovementComponent {
};

// Class Munitions.MunitionsBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMunitionsBPLibrary : UBlueprintFunctionLibrary {

	void HermesTargetedByMunitionWithDataDelegate__DelegateSignature(struct UObject* Caller, struct FTargetedByMunition& TargetedByMunitionWithData); // DelegateFunction Munitions.MunitionsBPLibrary.HermesTargetedByMunitionWithDataDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x38a7480
	void HermesMunitionTypeDelegate__DelegateSignature(struct UObject* Caller, struct AMunitionType_Base* MunitionType); // DelegateFunction Munitions.MunitionsBPLibrary.HermesMunitionTypeDelegate__DelegateSignature // (Public|Delegate) // @ game+0x38a7480
	void HermesMunitionImpactDataDelegate__DelegateSignature(struct UObject* Caller, struct FMunitionImpactData& MunitionImpactData); // DelegateFunction Munitions.MunitionsBPLibrary.HermesMunitionImpactDataDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x38a7480
	void HermesExecuteOwnedTargetedByMunitionWithData(struct FString Name, struct UObject* Owner, struct UObject* Caller, struct FTargetedByMunition& TargetedByMunitionWithData); // Function Munitions.MunitionsBPLibrary.HermesExecuteOwnedTargetedByMunitionWithData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e08d00
	void HermesExecuteOwnedMunitionType(struct FString Name, struct UObject* Owner, struct UObject* Caller, struct AMunitionType_Base* MunitionType); // Function Munitions.MunitionsBPLibrary.HermesExecuteOwnedMunitionType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xf5d840
	void HermesExecuteOwnedMunitionImpactData(struct FString Name, struct UObject* Owner, struct UObject* Caller, struct FMunitionImpactData& MunitionImpactData); // Function Munitions.MunitionsBPLibrary.HermesExecuteOwnedMunitionImpactData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e08aa0
	void HermesExecuteAllTargetedByMunitionWithData(struct FString Name, struct UObject* Caller, struct FTargetedByMunition& TargetedByMunitionWithData); // Function Munitions.MunitionsBPLibrary.HermesExecuteAllTargetedByMunitionWithData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e08910
	void HermesExecuteAllMunitionType(struct FString Name, struct UObject* Caller, struct AMunitionType_Base* MunitionType); // Function Munitions.MunitionsBPLibrary.HermesExecuteAllMunitionType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xf5c680
	void HermesExecuteAllMunitionImpactData(struct FString Name, struct UObject* Caller, struct FMunitionImpactData& MunitionImpactData); // Function Munitions.MunitionsBPLibrary.HermesExecuteAllMunitionImpactData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e086f0
	void HermesBindTargetedByMunitionWithData(struct FDelegate Delegate_TargetedByMunitionWithData, struct UObject* Owner, struct FHermesBPDelegateHandle& Handle); // Function Munitions.MunitionsBPLibrary.HermesBindTargetedByMunitionWithData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e085c0
	void HermesBindMunitionType(struct FDelegate Delegate_MunitionType, struct UObject* Owner, struct FHermesBPDelegateHandle& Handle); // Function Munitions.MunitionsBPLibrary.HermesBindMunitionType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e08490
	void HermesBindMunitionImpactData(struct FDelegate Delegate_MunitionImpactData, struct UObject* Owner, struct FHermesBPDelegateHandle& Handle); // Function Munitions.MunitionsBPLibrary.HermesBindMunitionImpactData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e08360
};

// Class Munitions.MunitionsSystem
// Size: 0x38 (Inherited: 0x28)
struct UMunitionsSystem : UObject {
	struct TArray<struct AMunitionType_Base*> MunitionList; // 0x28(0x10)

	struct AMunitionType_Base* SpawnMunition(struct AMunitionType_Base* MunitionClass, struct AActor* MunitionOwner, struct APawn* Instigator, struct FVector& SourcePos); // Function Munitions.MunitionsSystem.SpawnMunition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5e0a200
	void SetMunitionImpactFailed(); // Function Munitions.MunitionsSystem.SetMunitionImpactFailed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5e09df0
	void SendSpellMadeContact(struct UObject* Owner, struct UObject* Caller, struct FMunitionImpactData& miData); // Function Munitions.MunitionsSystem.SendSpellMadeContact // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e098e0
	void SendMunitionImpactDamage(struct UObject* Owner, struct UObject* Caller, struct FMunitionImpactData& miData); // Function Munitions.MunitionsSystem.SendMunitionImpactDamage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e09720
	bool SendMunitionImpactCombined(struct UObject* Owner, struct UObject* Caller, struct FMunitionImpactData& miData); // Function Munitions.MunitionsSystem.SendMunitionImpactCombined // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e09560
	void SendMunitionImpact(struct UObject* Owner, struct UObject* Caller, struct FMunitionImpactData& miData); // Function Munitions.MunitionsSystem.SendMunitionImpact // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e093a0
	void MunitionToInstigator(struct UObject* Owner, struct UObject* Caller, struct FMunitionToInstigatorData& mtoIData); // Function Munitions.MunitionsSystem.MunitionToInstigator // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5e08fa0
	void DestroySpawnedMunition(struct AMunitionType_Base* Munition); // Function Munitions.MunitionsSystem.DestroySpawnedMunition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5e07ff0
};

// Class Munitions.MunitionType_AOE
// Size: 0x430 (Inherited: 0x360)
struct AMunitionType_AOE : AMunitionType_Base {
	float MinDamage; // 0x360(0x04)
	float m_radiusStart; // 0x364(0x04)
	float m_radiusEnd; // 0x368(0x04)
	bool bUseCustomGrowthDuration; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	float CustomGrowthDuration; // 0x370(0x04)
	float m_hitVictimInterval; // 0x374(0x04)
	struct UDamageType* m_damageType; // 0x378(0x08)
	struct UParticleSystem* m_explosionFX; // 0x380(0x08)
	bool PlayExplosionOnGround; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UAkAudioEvent* m_explosionSfx; // 0x390(0x08)
	float PhysicsImpulse; // 0x398(0x04)
	bool m_stopAtCollision; // 0x39c(0x01)
	bool bUnblockable; // 0x39d(0x01)
	bool bBreakBlockFX; // 0x39e(0x01)
	char pad_39F[0x1]; // 0x39f(0x01)
	struct UParticleSystem* m_hitActorFX; // 0x3a0(0x08)
	struct UParticleSystem* m_hitTerrainFX; // 0x3a8(0x08)
	struct UParticleSystem* m_hitBlockedFX; // 0x3b0(0x08)
	struct UAkAudioEvent* m_hitActorSfx; // 0x3b8(0x08)
	struct UAkAudioEvent* m_hitTerrainSfx; // 0x3c0(0x08)
	struct UAkAudioEvent* m_hitBlockedSfx; // 0x3c8(0x08)
	char pad_3D0[0x60]; // 0x3d0(0x60)
};

// Class Munitions.Munition
// Size: 0x30 (Inherited: 0x30)
struct UMunition : UDataAsset {
};

// Class Munitions.MunitionType_Cone
// Size: 0x3c8 (Inherited: 0x360)
struct AMunitionType_Cone : AMunitionType_Base {
	float m_Range; // 0x360(0x04)
	float m_endRadius; // 0x364(0x04)
	struct UDamageType* m_damageType; // 0x368(0x08)
	bool m_stopAtCollision; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UParticleSystem* m_explosionFX; // 0x378(0x08)
	struct UParticleSystem* m_hitActorFX; // 0x380(0x08)
	struct UParticleSystem* m_hitTerrainFX; // 0x388(0x08)
	struct UParticleSystem* m_hitBlockedFX; // 0x390(0x08)
	struct UAkAudioEvent* m_explosionSfx; // 0x398(0x08)
	struct UAkAudioEvent* m_hitActorSfx; // 0x3a0(0x08)
	struct UAkAudioEvent* m_hitTerrainSfx; // 0x3a8(0x08)
	struct UAkAudioEvent* m_hitBlockedSfx; // 0x3b0(0x08)
	char pad_3B8[0x10]; // 0x3b8(0x10)
};

// Class Munitions.MunitionType_Physics
// Size: 0x408 (Inherited: 0x360)
struct AMunitionType_Physics : AMunitionType_Base {
	float m_speed; // 0x360(0x04)
	bool m_explodeOnContactWithActors; // 0x364(0x01)
	bool m_explodeOnContactWithTerrain; // 0x365(0x01)
	bool m_explodeWhenLifetimeExpires; // 0x366(0x01)
	char pad_367[0x1]; // 0x367(0x01)
	struct AMunitionType_Base* m_AOE; // 0x368(0x08)
	struct UParticleSystem* m_hitActorFX; // 0x370(0x08)
	struct UParticleSystem* m_hitTerrainFX; // 0x378(0x08)
	struct UParticleSystem* m_hitBlockedFX; // 0x380(0x08)
	struct UParticleSystem* m_hitDeflectedFX; // 0x388(0x08)
	struct UAkAudioEvent* m_hitActorSfx; // 0x390(0x08)
	struct UAkAudioEvent* m_hitTerrainSfx; // 0x398(0x08)
	struct UAkAudioEvent* m_hitBlockedSfx; // 0x3a0(0x08)
	struct UAkAudioEvent* m_hitDeflectedSfx; // 0x3a8(0x08)
	struct UAkAudioEvent* m_destroyedTargetSfx; // 0x3b0(0x08)
	bool m_placeDecal; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct UMaterialInterface* m_decalMaterial; // 0x3c0(0x08)
	struct FVector m_decalSize; // 0x3c8(0x0c)
	float m_decalLifeSpan; // 0x3d4(0x04)
	char pad_3D8[0x30]; // 0x3d8(0x30)
};

// Class Munitions.MunitionType_SuperSonic
// Size: 0x3a8 (Inherited: 0x360)
struct AMunitionType_SuperSonic : AMunitionType_Base {
	struct UParticleSystem* m_hitActorFX; // 0x360(0x08)
	struct UAkAudioEvent* m_hitActorSfx; // 0x368(0x08)
	struct UParticleSystem* m_hitTerrainFX; // 0x370(0x08)
	struct UAkAudioEvent* m_hitTerrainSfx; // 0x378(0x08)
	bool m_placeDecal; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UMaterialInterface* m_decalMaterial; // 0x388(0x08)
	float m_decalSize; // 0x390(0x04)
	float m_decalLifeSpan; // 0x394(0x04)
	char pad_398[0x10]; // 0x398(0x10)
};

