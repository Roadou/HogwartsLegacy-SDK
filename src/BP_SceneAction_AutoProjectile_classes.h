// BlueprintGeneratedClass BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C
// Size: 0x178 (Inherited: 0xa8)
struct UBP_SceneAction_AutoProjectile_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FTransform InitialTransform; // 0xb0(0x30)
	struct AActor* ActionObjectActor; // 0xe0(0x08)
	struct UArrowComponent* Arrow; // 0xe8(0x08)
	struct UNiagaraSystem* Muzzle VFX; // 0xf0(0x08)
	struct UNiagaraSystem* Projectile VFX; // 0xf8(0x08)
	struct UNiagaraSystem* Impact VFX; // 0x100(0x08)
	float Distance; // 0x108(0x04)
	struct FVector ProjectileDirection; // 0x10c(0x0c)
	char pad_118[0x8]; // 0x118(0x08)
	struct FTransform TargetTransform; // 0x120(0x30)
	struct USphereComponent* Target; // 0x150(0x08)
	struct UNiagaraComponent* N_Impact; // 0x158(0x08)
	struct UNiagaraComponent* N_Proj; // 0x160(0x08)
	bool UpdateTargetTransform; // 0x168(0x01)
	bool HideDebugComponentsInGame; // 0x169(0x01)
	char pad_16A[0x6]; // 0x16a(0x06)
	struct UNiagaraComponent* N_Muzzle; // 0x170(0x08)

	void PlayMuzzleVFX(bool Scrubbing); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.PlayMuzzleVFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateArrowAndTarget(); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.UpdateArrowAndTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayImpactVFX(); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.PlayImpactVFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RemoveArrowAndTarget(); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.RemoveArrowAndTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitialTransforms(); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.SetInitialTransforms // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MakeArrowAndTarget(); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.MakeArrowAndTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCreate(struct UObject* ActionState); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.OnCreate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetTimeInsideInterval(float Time, float LocalTime, bool IsScrubbing); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.OnSetTimeInsideInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnInstant(float Time, bool IsScrubbing); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.OnInstant // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_AutoProjectile(int32_t EntryPoint); // Function BP_SceneAction_AutoProjectile.BP_SceneAction_AutoProjectile_C.ExecuteUbergraph_BP_SceneAction_AutoProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

