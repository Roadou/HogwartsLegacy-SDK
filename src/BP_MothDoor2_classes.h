// BlueprintGeneratedClass BP_MothDoor2.BP_MothDoor2_C
// Size: 0x3e8 (Inherited: 0x248)
struct ABP_MothDoor2_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_Puzzle_Lumos_Moth1; // 0x250(0x08)
	struct UStaticMeshComponent* SM_Puzzle_Lumos_Moth; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Puzzle_Lumos_Moth2; // 0x260(0x08)
	struct UNiagaraComponent* N_LensFlare1; // 0x268(0x08)
	struct UNiagaraComponent* N_LensFlare; // 0x270(0x08)
	struct UNiagaraComponent* N_LensFlare2; // 0x278(0x08)
	struct UChildActorComponent* MothTarget2; // 0x280(0x08)
	struct UChildActorComponent* MothTarget1; // 0x288(0x08)
	struct UChildActorComponent* MothTarget3; // 0x290(0x08)
	struct USphereComponent* Sphere; // 0x298(0x08)
	struct UBoxComponent* PlayerBlocker; // 0x2a0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2a8(0x08)
	struct UParticleSystemComponent* MothDoorFlash_Burst; // 0x2b0(0x08)
	struct UParticleSystemComponent* MothDoorOpenFlow; // 0x2b8(0x08)
	struct UParticleSystemComponent* VFX_P_MothDoorFlash; // 0x2c0(0x08)
	struct UParticleSystemComponent* P_DustFall_GoblinDemo; // 0x2c8(0x08)
	struct USkeletalMeshComponent* MothDoorFlash; // 0x2d0(0x08)
	struct UStaticMeshComponent* OutterDisk; // 0x2d8(0x08)
	struct UStaticMeshComponent* InnerDisk; // 0x2e0(0x08)
	struct UAkComponent* Ak_BP_MothDoor2; // 0x2e8(0x08)
	struct UStaticMeshComponent* Archway; // 0x2f0(0x08)
	struct UStaticMeshComponent* LeftDoor; // 0x2f8(0x08)
	struct UStaticMeshComponent* RightDoor; // 0x300(0x08)
	struct USceneComponent* SharedRoot; // 0x308(0x08)
	struct FLinearColor Timeline_0_NewTrack_0_6FA6F0074FA3D598F7913A9D0009042E; // 0x310(0x10)
	enum class ETimelineDirection Timeline_0__Direction_6FA6F0074FA3D598F7913A9D0009042E; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct UTimelineComponent* Timeline_1; // 0x328(0x08)
	float RotatingDiskTimeline_NewTrack_0_002F86B8423CFCB13232078B010BD07A; // 0x330(0x04)
	enum class ETimelineDirection RotatingDiskTimeline__Direction_002F86B8423CFCB13232078B010BD07A; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct UTimelineComponent* RotatingDiskTimeline; // 0x338(0x08)
	float DoorOpenTimeLine_NewTrack_0_E0E249BB4E610D3DDDD5EBBD54ED44AF; // 0x340(0x04)
	float DoorOpenTimeLine_Lerp_E0E249BB4E610D3DDDD5EBBD54ED44AF; // 0x344(0x04)
	enum class ETimelineDirection DoorOpenTimeLine__Direction_E0E249BB4E610D3DDDD5EBBD54ED44AF; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UTimelineComponent* DoorOpenTimeLine; // 0x350(0x08)
	float LeftDoorOpenAngle; // 0x358(0x04)
	float RightDoorOpenAngle; // 0x35c(0x04)
	bool Ready; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float DelayBeforeDoorOpens; // 0x364(0x04)
	int32_t Counter; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct ABP_CutCam_C* CutCam; // 0x370(0x08)
	struct TArray<struct ABP_MothTarget_C*> MothTargets; // 0x378(0x10)
	struct FName Stat; // 0x388(0x08)
	struct FMulticastInlineDelegate OpenMothDoor; // 0x390(0x10)
	int32_t StatValue; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct UMaterialInstanceDynamic* GlowMaterial; // 0x3a8(0x08)
	struct TArray<struct AActor*> Targets; // 0x3b0(0x10)
	bool IsOpen; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FMulticastInlineDelegate MothJoined; // 0x3c8(0x10)
	struct FMulticastInlineDelegate MothLeft; // 0x3d8(0x10)

	void EndRevelio(); // Function BP_MothDoor2.BP_MothDoor2_C.EndRevelio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleMothSockets(bool TurnOn); // Function BP_MothDoor2.BP_MothDoor2_C.ToggleMothSockets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_MothDoor2.BP_MothDoor2_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoorOpenTimeLine__FinishedFunc(); // Function BP_MothDoor2.BP_MothDoor2_C.DoorOpenTimeLine__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void DoorOpenTimeLine__UpdateFunc(); // Function BP_MothDoor2.BP_MothDoor2_C.DoorOpenTimeLine__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void RotatingDiskTimeline__FinishedFunc(); // Function BP_MothDoor2.BP_MothDoor2_C.RotatingDiskTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void RotatingDiskTimeline__UpdateFunc(); // Function BP_MothDoor2.BP_MothDoor2_C.RotatingDiskTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_MothDoor2.BP_MothDoor2_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_MothDoor2.BP_MothDoor2_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_MothDoor2.BP_MothDoor2_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_MothDoor2.BP_MothDoor2_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_MothDoor2.BP_MothDoor2_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Open(); // Function BP_MothDoor2.BP_MothDoor2_C.Open // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MothDoor2.BP_MothDoor2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TriggerGate(); // Function BP_MothDoor2.BP_MothDoor2_C.TriggerGate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoorFlash(); // Function BP_MothDoor2.BP_MothDoor2_C.DoorFlash // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoorGlow(); // Function BP_MothDoor2.BP_MothDoor2_C.DoorGlow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FallingDust(); // Function BP_MothDoor2.BP_MothDoor2_C.FallingDust // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Is Occupied(); // Function BP_MothDoor2.BP_MothDoor2_C.Is Occupied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Is Vacant(); // Function BP_MothDoor2.BP_MothDoor2_C.Is Vacant // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceOpen(); // Function BP_MothDoor2.BP_MothDoor2_C.ForceOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_MothDoor2.BP_MothDoor2_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_MothDoor2.BP_MothDoor2_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_MothDoor2.BP_MothDoor2_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOffGlow(); // Function BP_MothDoor2.BP_MothDoor2_C.TurnOffGlow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MothDoor2(int32_t EntryPoint); // Function BP_MothDoor2.BP_MothDoor2_C.ExecuteUbergraph_BP_MothDoor2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void MothLeft__DelegateSignature(); // Function BP_MothDoor2.BP_MothDoor2_C.MothLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MothJoined__DelegateSignature(int32_t Counter); // Function BP_MothDoor2.BP_MothDoor2_C.MothJoined__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenMothDoor__DelegateSignature(); // Function BP_MothDoor2.BP_MothDoor2_C.OpenMothDoor__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

