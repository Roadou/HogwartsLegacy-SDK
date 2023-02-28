// BlueprintGeneratedClass BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C
// Size: 0x4a0 (Inherited: 0x370)
struct ABP_BroomFlightVFXActor_C : ABroomFlightVFXActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWindPointSourceWithEnvelopeComponent* WindSource; // 0x378(0x08)
	struct UPostProcessComponent* PostProcess; // 0x380(0x08)
	struct UNiagaraComponent* Niagara; // 0x388(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x390(0x08)
	struct FSTR_AccentVFX STR_AccentVFX; // 0x398(0xd0)
	struct USkeletalMeshComponent* BroomMesh; // 0x468(0x08)
	int32_t VFX_MaterialSlot; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct ABP_FlyingBroomCapsule_C* BroomCapsule; // 0x478(0x08)
	struct FMultiFX2Handle FX2Handle; // 0x480(0x08)
	struct UNiagaraComponent* TrailEmitter; // 0x488(0x08)
	struct UFlyingBroomPhysics_FreeRoam* FreeRoamPhysics; // 0x490(0x08)
	struct UNiagaraComponent* BoostGainNiagaraComponent; // 0x498(0x08)

	struct UPostProcessComponent* GetPostProcess(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.GetPostProcess // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UNiagaraComponent* GetNiagara(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.GetNiagara // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct AFlyingBroom* GetBroomCapsule(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.GetBroomCapsule // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UNiagaraComponent* SpawnNiagaraSystem(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SpawnNiagaraSystem // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndBoostGainVFX(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.EndBoostGainVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartBoostGainVFX(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.StartBoostGainVFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupCollisionVFX(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetupCollisionVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.OnHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupVFXRefs(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetupVFXRefs // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetupBroomTrailVFX(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetupBroomTrailVFX // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DestroyNiagaraAndPostProcessComponent(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.DestroyNiagaraAndPostProcessComponent // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CreateBroomMaterialDynamic(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.CreateBroomMaterialDynamic // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetupGroundVFX(); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetupGroundVFX // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetRadialBlurParameterValues(float EffectAmount, struct FLinearColor TargetPos); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetRadialBlurParameterValues // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetRadialBlurToggleParameterValue(float ToggleAmount); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetRadialBlurToggleParameterValue // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BroomFlightVFXActor(int32_t EntryPoint); // Function BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.ExecuteUbergraph_BP_BroomFlightVFXActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

