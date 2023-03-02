// BlueprintGeneratedClass BP_GobMine_Drill_A.BP_GobMine_Drill_A_C
// Size: 0x448 (Inherited: 0x2d0)
struct ABP_GobMine_Drill_A_C : ASkeletalMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UNiagaraComponent* Fire_04; // 0x2d8(0x08)
	struct UNiagaraComponent* Fire_Smoke; // 0x2e0(0x08)
	struct UNiagaraComponent* Fire_03; // 0x2e8(0x08)
	struct UNiagaraComponent* Fire_02; // 0x2f0(0x08)
	struct UNiagaraComponent* Fire_01; // 0x2f8(0x08)
	struct USceneComponent* DrillFires; // 0x300(0x08)
	struct UCogTargetAimSceneComponent* Lights; // 0x308(0x08)
	struct UArrowComponent* FX_ExplosionLocation; // 0x310(0x08)
	struct USceneComponent* FXLeviosoLocation; // 0x318(0x08)
	float CannedKnockbackSequence_DrillAnimPlayRate_CABCE6D646FC62C25499728B91004B83; // 0x320(0x04)
	float CannedKnockbackSequence_Yaw_CABCE6D646FC62C25499728B91004B83; // 0x324(0x04)
	float CannedKnockbackSequence_Roll_CABCE6D646FC62C25499728B91004B83; // 0x328(0x04)
	float CannedKnockbackSequence_Pitch_CABCE6D646FC62C25499728B91004B83; // 0x32c(0x04)
	float CannedKnockbackSequence_ZTrack_CABCE6D646FC62C25499728B91004B83; // 0x330(0x04)
	float CannedKnockbackSequence_LerpTrack_CABCE6D646FC62C25499728B91004B83; // 0x334(0x04)
	enum class ETimelineDirection CannedKnockbackSequence__Direction_CABCE6D646FC62C25499728B91004B83; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct UTimelineComponent* CannedKnockbackSequence; // 0x340(0x08)
	char pad_348[0x8]; // 0x348(0x08)
	struct FTransform StartTransform; // 0x350(0x30)
	struct FTransform DeltaMovement; // 0x380(0x30)
	bool Debug_SetEndPosition; // 0x3b0(0x01)
	char pad_3B1[0xf]; // 0x3b1(0x0f)
	struct FTransform FinalTransform; // 0x3c0(0x30)
	struct AActor* EndLocationActor; // 0x3f0(0x08)
	bool Debug_ShowFireInEditor; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FMulticastInlineDelegate DrillInPosition; // 0x400(0x10)
	bool TuneAnim; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UNiagaraComponent* FX_DustPoof; // 0x418(0x08)
	struct UNiagaraComponent* FX_DrillDust; // 0x420(0x08)
	struct UNiagaraComponent* FX_DustPoofGround; // 0x428(0x08)
	struct UNiagaraComponent* FX_DustLinger; // 0x430(0x08)
	bool ParticlesSpawned; // 0x438(0x01)
	bool TuneFires; // 0x439(0x01)
	char pad_43A[0x6]; // 0x43a(0x06)
	struct ABP_GoblinDrillDebris_C* GoblinDrillDebris; // 0x440(0x08)

	void UserConstructionScript(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CannedKnockbackSequence__FinishedFunc(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.CannedKnockbackSequence__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void CannedKnockbackSequence__UpdateFunc(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.CannedKnockbackSequence__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void CannedKnockbackSequence__StartDustLinger__EventFunc(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.CannedKnockbackSequence__StartDustLinger__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void CannedKnockbackSequence__StartCameraShake__EventFunc(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.CannedKnockbackSequence__StartCameraShake__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void CannedKnockbackSequence__StartDrillDust__EventFunc(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.CannedKnockbackSequence__StartDrillDust__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void CannedKnockbackSequence__DustPoofStart__EventFunc(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.CannedKnockbackSequence__DustPoofStart__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CannedKnockbackEvent(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.CannedKnockbackEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetFiresActivation(bool Enable); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.SetFiresActivation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetBlueprint(struct AActor* Actor); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.ResetBlueprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartLandingPoof(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.StartLandingPoof // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartDrillDustFall(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.StartDrillDustFall // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GobMine_Drill_A(int32_t EntryPoint); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.ExecuteUbergraph_BP_GobMine_Drill_A // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void DrillInPosition__DelegateSignature(); // Function BP_GobMine_Drill_A.BP_GobMine_Drill_A_C.DrillInPosition__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

