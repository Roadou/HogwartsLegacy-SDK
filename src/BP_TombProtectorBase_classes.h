// BlueprintGeneratedClass BP_TombProtectorBase.BP_TombProtectorBase_C
// Size: 0x259b (Inherited: 0x24c4)
struct ABP_TombProtectorBase_C : ABP_Enemy_Character_C {
	char pad_24C4[0x4]; // 0x24c4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x24c8(0x08)
	struct UCapsuleComponent* ShoulderCapsule; // 0x24d0(0x08)
	struct UAnimationComponent* Animation; // 0x24d8(0x08)
	struct UArrowComponent* LOC_HitLocation; // 0x24e0(0x08)
	struct UWidget_DebugHUD_C* DebugWidget; // 0x24e8(0x08)
	struct UObject* InGameMenuReference; // 0x24f0(0x08)
	bool cloakVis; // 0x24f8(0x01)
	char pad_24F9[0x7]; // 0x24f9(0x07)
	struct UMaterialInstanceDynamic* jacketMAT; // 0x2500(0x08)
	struct TArray<struct UParticleSystemComponent*> JointDebrisParticles; // 0x2508(0x10)
	float DeathChunkImpulseStrength; // 0x2518(0x04)
	float DeathChunkImpulseRadius; // 0x251c(0x04)
	float DeathChunkRadialStrength; // 0x2520(0x04)
	struct FVector LOC_Impact; // 0x2524(0x0c)
	struct FVector VEC_Direction; // 0x2530(0x0c)
	char pad_253C[0x4]; // 0x253c(0x04)
	struct UMaterialInstanceDynamic* MAT_TMBG_Torso; // 0x2540(0x08)
	struct UMaterialInstanceDynamic* MAT_TMBG_Legs; // 0x2548(0x08)
	float VFX_EmissiveStrength; // 0x2550(0x04)
	char pad_2554[0x4]; // 0x2554(0x04)
	struct UNiagaraComponent* N_BodyFX; // 0x2558(0x08)
	float DeathChunkOK_RadStrength; // 0x2560(0x04)
	char pad_2564[0x4]; // 0x2564(0x04)
	struct USkeletalMeshComponent* VFX_DummySampleMesh; // 0x2568(0x08)
	enum class E_TombProtectorSpawnType SpawnType; // 0x2570(0x01)
	bool OverrideSpawnTags; // 0x2571(0x01)
	char pad_2572[0x6]; // 0x2572(0x06)
	struct UExplodingSkeletonPieceSetup* Exploding Skeleton Asset; // 0x2578(0x08)
	struct UNiagaraSystem* JointDebris_System; // 0x2580(0x08)
	bool KilledByFinisher; // 0x2588(0x01)
	char pad_2589[0x3]; // 0x2589(0x03)
	float Linear Impulse Strength; // 0x258c(0x04)
	struct FTimerHandle DeadTimerHandle; // 0x2590(0x08)
	bool DeadTimerCalled; // 0x2598(0x01)
	bool DoneDeathFX; // 0x2599(0x01)
	bool bHandleShoulderCollision; // 0x259a(0x01)

	struct AEnemy_ApparateActor* SpawnApparateActor(struct FTransform SpawnTransform, struct FEnemy_ApparateActorData& Data); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.SpawnApparateActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableCharacterEffects(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.DisableCharacterEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableCharacterEffects(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.EnableCharacterEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.Damaged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectSpawnTags(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.SelectSpawnTags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableMeleeCollision(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.DisableMeleeCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableMeleeCollision(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.EnableMeleeCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Dead(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.Dead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeathVFX(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.DeathVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct FName Name); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AttackCollisionStop(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.AttackCollisionStop // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WeaponAcquire(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.WeaponAcquire // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WeaponLose(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.WeaponLose // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AttackCollisionStart(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.AttackCollisionStart // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckForRagdoll(); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.CheckForRagdoll // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_TombProtectorMinionBase_BP_EnemyAI_K2Node_ComponentBoundEvent_0_OnDeathDelegate__DelegateSignature(struct AActor* pActor); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.BndEvt__BP_TombProtectorMinionBase_BP_EnemyAI_K2Node_ComponentBoundEvent_0_OnDeathDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnCapsuleOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.OnCapsuleOverlapBegin // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TombProtectorBase(int32_t EntryPoint); // Function BP_TombProtectorBase.BP_TombProtectorBase_C.ExecuteUbergraph_BP_TombProtectorBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

