// BlueprintGeneratedClass BP_BeastInTrap.BP_BeastInTrap_C
// Size: 0x308 (Inherited: 0x248)
struct ABP_BeastInTrap_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Closed Collision; // 0x250(0x08)
	struct UBP_PadlockComponent_C* BP_PadlockComponent; // 0x258(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x260(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x268(0x08)
	struct USplineComponent* Band_3; // 0x270(0x08)
	struct USplineComponent* Band_2; // 0x278(0x08)
	struct USkeletalMeshComponent* SK_BeastInATrap_Trap; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	float Dissolve_Intensity_8344E2F94719A649A5235CA0183439C0; // 0x290(0x04)
	float Dissolve_Cool_8344E2F94719A649A5235CA0183439C0; // 0x294(0x04)
	float Dissolve_Move_VFX_8344E2F94719A649A5235CA0183439C0; // 0x298(0x04)
	float Dissolve_Appear_8344E2F94719A649A5235CA0183439C0; // 0x29c(0x04)
	enum class ETimelineDirection Dissolve__Direction_8344E2F94719A649A5235CA0183439C0; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UTimelineComponent* Dissolve; // 0x2a8(0x08)
	float Materialise_Intensity_C1CFBBC948249BF715D0819884DF6599; // 0x2b0(0x04)
	float Materialise_Cool_C1CFBBC948249BF715D0819884DF6599; // 0x2b4(0x04)
	float Materialise_Move_VFX_C1CFBBC948249BF715D0819884DF6599; // 0x2b8(0x04)
	float Materialise_Appear_C1CFBBC948249BF715D0819884DF6599; // 0x2bc(0x04)
	enum class ETimelineDirection Materialise__Direction_C1CFBBC948249BF715D0819884DF6599; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UTimelineComponent* Materialise; // 0x2c8(0x08)
	struct UNiagaraComponent* Band_1_VFX; // 0x2d0(0x08)
	struct UNiagaraComponent* Band_2_VFX; // 0x2d8(0x08)
	float VFX_Position; // 0x2e0(0x04)
	bool Locked?; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	float Intensity; // 0x2e8(0x04)
	float Cool; // 0x2ec(0x04)
	float Appear; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FMulticastInlineDelegate OnVFXComplete; // 0x2f8(0x10)

	struct UMeshComponent* GetAttachToMesh(); // Function BP_BeastInTrap.BP_BeastInTrap_C.GetAttachToMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector GetSoundPos(); // Function BP_BeastInTrap.BP_BeastInTrap_C.GetSoundPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetScaleValue(float& Scale); // Function BP_BeastInTrap.BP_BeastInTrap_C.GetScaleValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetScaleValue(float Scale); // Function BP_BeastInTrap.BP_BeastInTrap_C.SetScaleValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Disable_Particles(); // Function BP_BeastInTrap.BP_BeastInTrap_C.Disable_Particles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_BeastInTrap.BP_BeastInTrap_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Materialise__FinishedFunc(); // Function BP_BeastInTrap.BP_BeastInTrap_C.Materialise__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Materialise__UpdateFunc(); // Function BP_BeastInTrap.BP_BeastInTrap_C.Materialise__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Materialise__FinishEvent__EventFunc(); // Function BP_BeastInTrap.BP_BeastInTrap_C.Materialise__FinishEvent__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Dissolve__FinishedFunc(); // Function BP_BeastInTrap.BP_BeastInTrap_C.Dissolve__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Dissolve__UpdateFunc(); // Function BP_BeastInTrap.BP_BeastInTrap_C.Dissolve__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Dissolve__FinishEvent__EventFunc(); // Function BP_BeastInTrap.BP_BeastInTrap_C.Dissolve__FinishEvent__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnLocked(); // Function BP_BeastInTrap.BP_BeastInTrap_C.OnLocked // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetAudioSwitch(struct UAkComponent* AkComponent); // Function BP_BeastInTrap.BP_BeastInTrap_C.SetAudioSwitch // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BeastInTrap.BP_BeastInTrap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ToggleOpenClose(); // Function BP_BeastInTrap.BP_BeastInTrap_C.ToggleOpenClose // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnUnlocked(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool FromMinigame); // Function BP_BeastInTrap.BP_BeastInTrap_C.OnUnlocked // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BeastInTrap(int32_t EntryPoint); // Function BP_BeastInTrap.BP_BeastInTrap_C.ExecuteUbergraph_BP_BeastInTrap // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnVFXComplete__DelegateSignature(); // Function BP_BeastInTrap.BP_BeastInTrap_C.OnVFXComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

