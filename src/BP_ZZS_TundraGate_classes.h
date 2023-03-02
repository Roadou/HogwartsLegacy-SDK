// BlueprintGeneratedClass BP_ZZS_TundraGate.BP_ZZS_TundraGate_C
// Size: 0x3a9 (Inherited: 0x248)
struct ABP_ZZS_TundraGate_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_FreeStandingClock_HandMinutes_Dwiz3; // 0x250(0x08)
	struct UStaticMeshComponent* SM_FreeStandingClock_HandMinutes_Dwiz2; // 0x258(0x08)
	struct UOdcObstacleComponent* OdcObstacle; // 0x260(0x08)
	struct UStaticMeshComponent* NavBlocker; // 0x268(0x08)
	struct UStaticMeshComponent* SM_FreeStandingClock_HandMinutes_Dwiz1; // 0x270(0x08)
	struct USceneComponent* Hand2; // 0x278(0x08)
	struct UStaticMeshComponent* SM_FreeStandingClock_HandMinutes_Dwiz; // 0x280(0x08)
	struct USceneComponent* Hand1; // 0x288(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays6; // 0x290(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays5; // 0x298(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays4; // 0x2a0(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays3; // 0x2a8(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays2; // 0x2b0(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays1; // 0x2b8(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays; // 0x2c0(0x08)
	struct UBoxComponent* Col03; // 0x2c8(0x08)
	struct UBoxComponent* Col02; // 0x2d0(0x08)
	struct UBoxComponent* Col01; // 0x2d8(0x08)
	struct UAkComponent* ZZS_rune_puzzle_start_sequence; // 0x2e0(0x08)
	struct UStaticMeshComponent* GlowPlane_06; // 0x2e8(0x08)
	struct UStaticMeshComponent* GlowPlane_00; // 0x2f0(0x08)
	struct UStaticMeshComponent* GlowPlane_05; // 0x2f8(0x08)
	struct UStaticMeshComponent* GlowPlane_01; // 0x300(0x08)
	struct UStaticMeshComponent* GlowPlane_04; // 0x308(0x08)
	struct UStaticMeshComponent* GlowPlane_03; // 0x310(0x08)
	struct UStaticMeshComponent* GlowPlane_02; // 0x318(0x08)
	struct UTargetComponent* Target; // 0x320(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x328(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x330(0x08)
	struct UAnimSequence* AnimForward; // 0x338(0x08)
	float Position; // 0x340(0x04)
	int32_t Counter; // 0x344(0x04)
	struct FName emissivePower; // 0x348(0x08)
	float GlowSequenceDelay; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct TArray<struct UStaticMeshComponent*> Symbols; // 0x358(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Mats; // 0x368(0x10)
	int32_t Solution1; // 0x378(0x04)
	int32_t Solution2; // 0x37c(0x04)
	struct FDatabaseLockList Database Lock List; // 0x380(0x08)
	struct TArray<struct AActor*> SwitchTargets; // 0x388(0x10)
	struct TArray<struct UNiagaraComponent*> SymbolRays; // 0x398(0x10)
	bool Ready; // 0x3a8(0x01)

	void Setup(); // Function BP_ZZS_TundraGate.BP_ZZS_TundraGate_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSymbols(bool On); // Function BP_ZZS_TundraGate.BP_ZZS_TundraGate_C.SetSymbols // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ANone* AutosaveActor); // Function BP_ZZS_TundraGate.BP_ZZS_TundraGate_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ZZS_TundraGate.BP_ZZS_TundraGate_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CollisionState(bool Open); // Function BP_ZZS_TundraGate.BP_ZZS_TundraGate_C.CollisionState // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_ZZS_TundraGate.BP_ZZS_TundraGate_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_ZZS_TundraGate.BP_ZZS_TundraGate_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ANone* AutosaveActor); // Function BP_ZZS_TundraGate.BP_ZZS_TundraGate_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Open(); // Function BP_ZZS_TundraGate.BP_ZZS_TundraGate_C.Open // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ZZS_TundraGate(int32_t EntryPoint); // Function BP_ZZS_TundraGate.BP_ZZS_TundraGate_C.ExecuteUbergraph_BP_ZZS_TundraGate // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

