// BlueprintGeneratedClass BP_DarkWizardWand.BP_DarkWizardWand_C
// Size: 0x6b8 (Inherited: 0x670)
struct ABP_DarkWizardWand_C : AEnemyAIWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x670(0x08)
	struct UParticleSystemComponent* ParticleLiteFx; // 0x678(0x08)
	struct UObjectStateComponent* ObjectState; // 0x680(0x08)
	struct USceneComponent* WeaponFxImpactLocation; // 0x688(0x08)
	struct UStaticMeshComponent* SM_WP_DarkWizard_Wand; // 0x690(0x08)
	struct USphereComponent* Sphere; // 0x698(0x08)
	struct FMultiFX2Var Var; // 0x6a0(0x08)
	struct UParticleSystemComponent* DropEffect; // 0x6a8(0x08)
	struct UNiagaraComponent* OminisWandEffects; // 0x6b0(0x08)

	bool EventTransientWeaponPoweredUp(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventTransientWeaponPoweredUp // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HideWeaponStopFX(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.HideWeaponStopFX // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ShowWeaponStartFX(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.ShowWeaponStartFX // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDisarmedForRecoveryFx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDisarmedForRecoveryFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ActivateWeapon(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.ActivateWeapon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ActivateWeaponThreat(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.ActivateWeaponThreat // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DeactivateWeapon(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.DeactivateWeapon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DeactivateWeaponThreat(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.DeactivateWeaponThreat // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableShieldCollision(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.DisableShieldCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EnableShieldCollision(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EnableShieldCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool SpawnStoredWeapon(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.SpawnStoredWeapon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartWeaponSwing(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.StartWeaponSwing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool WeaponStored(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.WeaponStored // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventTrackPoints(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventTrackPoints // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventTransientWeaponActivate(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventTransientWeaponActivate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventTransientWeaponDeactivate(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventTransientWeaponDeactivate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponImpactGlowFx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponImpactGlowFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponMeleeAttackStartFx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponMeleeAttackStartFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponFireAOE1Fx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponFireAOE1Fx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponMeleePawnSlashFx(struct FHitResult& HitResult, struct FGameplayTagContainer& InMunitionTagContainer); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponMeleePawnSlashFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponThrownPawnStabFx(struct FHitResult& HitResult); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponThrownPawnStabFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UMeshComponent* FireWeaponAOE1(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.FireWeaponAOE1 // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDeactivatedFx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDeactivatedFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponSpawnStoredWeaponFx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponSpawnStoredWeaponFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDisarmedFx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDisarmedFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponActivateBuffEmitterFx(enum class EEnemyBuffTypeEnum InBuffType); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponActivateBuffEmitterFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDeactivateBuffEmitterFx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDeactivateBuffEmitterFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool InterfaceWeaponAcquire(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.InterfaceWeaponAcquire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool InterfaceWeaponRigidBodyActivate(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.InterfaceWeaponRigidBodyActivate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool InterfaceWeaponRigidBodyDeactivate(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.InterfaceWeaponRigidBodyDeactivate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDestroyedFx(struct FHitResult& HitResult); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDestroyedFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponTriggerGenericImpactFx(struct FHitResult& HitResult); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponTriggerGenericImpactFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponTriggerThrownFx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponTriggerThrownFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponTriggerProtegoFx(struct FHitResult& HitResult); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponTriggerProtegoFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponActivateLiteFx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponActivateLiteFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDeactivateLiteFx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDeactivateLiteFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponTriggerImpactFx(struct FHitResult& HitResult); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponTriggerImpactFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EventWeaponDeactivateHeavyFx(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDeactivateHeavyFx // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UCapsuleComponent* GetCapsuleComponent(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.GetCapsuleComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UMeshComponent* GetMeshComponent(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.GetMeshComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableCollision(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.DisableCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableMeleeCollision(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.DisableMeleeCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EnableCollision(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EnableCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EnableMeleeCollision(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EnableMeleeCollision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisablePhysicsSim(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.DisablePhysicsSim // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool EnablePhysicsSim(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EnablePhysicsSim // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct USceneComponent* GetSceneComponent(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.GetSceneComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EventDisableRangedPawnCollision(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.EventDisableRangedPawnCollision // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DarkWizardWand(int32_t EntryPoint); // Function BP_DarkWizardWand.BP_DarkWizardWand_C.ExecuteUbergraph_BP_DarkWizardWand // (Final|UbergraphFunction) // @ game+0x38a7480
};

