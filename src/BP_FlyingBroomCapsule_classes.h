// BlueprintGeneratedClass BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C
// Size: 0xab2 (Inherited: 0x980)
struct ABP_FlyingBroomCapsule_C : AFlyingBroom {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x980(0x08)
	struct UAkComponent* AkComponent; // 0x988(0x08)
	struct UChildActorComponent* BP_BroomFlightVFXActor; // 0x990(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x998(0x08)
	struct UCapsuleComponent* Capsule1; // 0x9a0(0x08)
	struct UCapsuleComponent* Capsule; // 0x9a8(0x08)
	struct UMountHeightLimitComponent* MountHeightLimit; // 0x9b0(0x08)
	struct UMountStreamingComponent* MountStreaming; // 0x9b8(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x9c0(0x08)
	struct UFlyingBroomMovementComponent* FlyingBroomMovement; // 0x9c8(0x08)
	struct UNiagaraComponent* ImpactEmitter; // 0x9d0(0x08)
	struct FSTR_AccentVFX STR_AccentVFX; // 0x9d8(0xd0)
	struct UCapsuleComponent* Capsule_1; // 0xaa8(0x08)
	bool FlyingUp; // 0xab0(0x01)
	bool FlyingDown; // 0xab1(0x01)

	void OnNPCMountBroom(); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.OnNPCMountBroom // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ApplyBroomStats(); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.ApplyBroomStats // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPlayerDismountBroom(); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.OnPlayerDismountBroom // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPlayerMountBroom(); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.OnPlayerMountBroom // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBarrelRollStart(bool bRollLeft); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.OnBarrelRollStart // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnTurboStart(); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.OnTurboStart // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBoostStart(); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.OnBoostStart // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateBroomAudio(struct UFlyingBroomAudio* BroomAudio); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.UpdateBroomAudio // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdatePitchAudio(struct UFlyingBroomAudio*& BroomAudio); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.UpdatePitchAudio // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateHeightAudio(struct UFlyingBroomAudio*& BroomAudio); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.UpdateHeightAudio // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateSpeedAudio(struct UFlyingBroomAudio*& BroomAudio); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.UpdateSpeedAudio // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableSpellHUD(bool DisableSpellHUD, bool DisableHealtHUD); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.DisableSpellHUD // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void MunitionImpact(struct UObject* Caller, struct FMunitionImpactData& MunitionImpactData); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.MunitionImpact // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FlyingBroomCapsule(int32_t EntryPoint); // Function BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.ExecuteUbergraph_BP_FlyingBroomCapsule // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

