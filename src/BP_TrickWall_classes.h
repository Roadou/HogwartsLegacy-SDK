// BlueprintGeneratedClass BP_TrickWall.BP_TrickWall_C
// Size: 0x4e5 (Inherited: 0x248)
struct ABP_TrickWall_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* Box; // 0x250(0x08)
	struct UBP_AutosaveComponent_C* BP_AutosaveComponent; // 0x258(0x08)
	struct UDecalComponent* FloorDecal2; // 0x260(0x08)
	struct UDecalComponent* FloorDecal4; // 0x268(0x08)
	struct UDecalComponent* FloorDecal3; // 0x270(0x08)
	struct UCameraComponent* Camera; // 0x278(0x08)
	struct UStaticMeshComponent* StaticMesh6; // 0x280(0x08)
	struct UBoxComponent* AIStaticNavigationBlocker1; // 0x288(0x08)
	struct UBoxComponent* AIStaticNavigationBlocker; // 0x290(0x08)
	struct UBoxComponent* AIDynamicNavigationBlocker; // 0x298(0x08)
	struct UDecalComponent* FloorDecal; // 0x2a0(0x08)
	struct UDecalComponent* WallDecal; // 0x2a8(0x08)
	struct UNiagaraComponent* Niagara_OneWay_Rocks; // 0x2b0(0x08)
	struct UStaticMeshComponent* Plane_Trap_Distortion; // 0x2b8(0x08)
	struct UNiagaraComponent* Niagara_Trap_Wind; // 0x2c0(0x08)
	struct UNiagaraComponent* Niagara_Trap_Rocks; // 0x2c8(0x08)
	struct UAkComponent* Ak_BP_TrickWall_C_Dun_BrickWall_OpenB_Anim; // 0x2d0(0x08)
	struct UAkComponent* Ak_BP_TrickWall_C_Dun_BrickWall_Open_Anim; // 0x2d8(0x08)
	struct USceneComponent* SendTarget; // 0x2e0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2e8(0x08)
	struct UArrowComponent* Arrow; // 0x2f0(0x08)
	struct UBoxComponent* ExitBox; // 0x2f8(0x08)
	struct USceneComponent* LOC2; // 0x300(0x08)
	struct USceneComponent* LOC1; // 0x308(0x08)
	struct UStaticMeshComponent* StaticMesh11; // 0x310(0x08)
	struct UStaticMeshComponent* StaticMesh10; // 0x318(0x08)
	struct UStaticMeshComponent* StaticMesh9; // 0x320(0x08)
	struct UStaticMeshComponent* StaticMesh8; // 0x328(0x08)
	struct UStaticMeshComponent* StaticMesh7; // 0x330(0x08)
	struct UStaticMeshComponent* StaticMesh5; // 0x338(0x08)
	struct UStaticMeshComponent* StaticMesh4; // 0x340(0x08)
	struct UStaticMeshComponent* StaticMesh3; // 0x348(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x350(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x358(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x360(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Floor_SquarePiece_F; // 0x368(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Floor_SquarePiece_E; // 0x370(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Floor_SquarePiece_B; // 0x378(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Floor_SquarePiece_A; // 0x380(0x08)
	struct UBoxComponent* EnterBox; // 0x388(0x08)
	struct USkeletalMeshComponent* SK_C_Dun_BrokenWall; // 0x390(0x08)
	struct USceneComponent* Scene; // 0x398(0x08)
	enum class ETimelineDirection Timeline_3__Direction_367EABE14D29C73EA8FA18BD4E3AA2F4; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UTimelineComponent* Timeline_4; // 0x3a8(0x08)
	enum class ETimelineDirection Timeline_2__Direction_A40098C84F3577952233D28A43594E9B; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct UTimelineComponent* Timeline_3; // 0x3b8(0x08)
	float Timeline_1_Blend_4454CD8843D317E7D10C7BB81C43B537; // 0x3c0(0x04)
	float Timeline_1_YTranslation_4454CD8843D317E7D10C7BB81C43B537; // 0x3c4(0x04)
	float Timeline_1_XRotation_4454CD8843D317E7D10C7BB81C43B537; // 0x3c8(0x04)
	float Timeline_1_ZTranslation_4454CD8843D317E7D10C7BB81C43B537; // 0x3cc(0x04)
	float Timeline_1_XTranslation_4454CD8843D317E7D10C7BB81C43B537; // 0x3d0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_4454CD8843D317E7D10C7BB81C43B537; // 0x3d4(0x01)
	char pad_3D5[0x3]; // 0x3d5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x3d8(0x08)
	float Timeline_0_NewTrack_0_60ACE30E410548672DEF289104C9ABD3; // 0x3e0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_60ACE30E410548672DEF289104C9ABD3; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x3e8(0x08)
	struct UAnimInstance* Anim; // 0x3f0(0x08)
	float Pos; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct TArray<struct UStaticMeshComponent*> Floor; // 0x400(0x10)
	struct TArray<struct ABP_MovingFloorMotion_C*> Motion; // 0x410(0x10)
	struct FVector StartLoc; // 0x420(0x0c)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct TArray<struct USceneComponent*> MoveToLOC; // 0x430(0x10)
	struct FVector TargetLoc; // 0x440(0x0c)
	bool Trap; // 0x44c(0x01)
	bool OneWay; // 0x44d(0x01)
	char pad_44E[0x2]; // 0x44e(0x02)
	float Dilation; // 0x450(0x04)
	bool IsPlayer; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct AActor* ActorInDoor; // 0x458(0x08)
	struct USkeletalMesh* SkeletalMesh_Door; // 0x460(0x08)
	struct USkeletalMesh* SkeletalMesh_Trap; // 0x468(0x08)
	struct USkeletalMesh* SkeletalMesh_OneWay; // 0x470(0x08)
	struct UAnimSequence* Anim_Door_Open; // 0x478(0x08)
	struct UAnimSequence* Anim_Trap_Open; // 0x480(0x08)
	struct UAnimSequence* Anim_OneWay_Open; // 0x488(0x08)
	struct UAnimSequence* Anim_Trap_Close; // 0x490(0x08)
	bool Open; // 0x498(0x01)
	bool UseSwitch; // 0x499(0x01)
	bool LeaveOpen; // 0x49a(0x01)
	char pad_49B[0x1]; // 0x49b(0x01)
	int32_t RequiredSwitches; // 0x49c(0x04)
	int32_t SwitchCount; // 0x4a0(0x04)
	struct FName Save Stat; // 0x4a4(0x08)
	int32_t Stat Value; // 0x4ac(0x04)
	float CamOffset; // 0x4b0(0x04)
	float CamDISScale; // 0x4b4(0x04)
	struct FMulticastInlineDelegate TrickWallOpened; // 0x4b8(0x10)
	struct TArray<struct AActor*> Target; // 0x4c8(0x10)
	bool TiedToOtherDoor; // 0x4d8(0x01)
	bool Invert; // 0x4d9(0x01)
	char pad_4DA[0x2]; // 0x4da(0x02)
	float OpenDelay; // 0x4dc(0x04)
	bool TriggerOnPlayerOnly; // 0x4e0(0x01)
	bool Opened; // 0x4e1(0x01)
	bool OpenDoorForOBJ; // 0x4e2(0x01)
	bool HighlightWall; // 0x4e3(0x01)
	bool OneWayUseTarget; // 0x4e4(0x01)

	bool DisallowArrestoMomentum(); // Function BP_TrickWall.BP_TrickWall_C.DisallowArrestoMomentum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetNavigationBlocker(bool IsBlocked); // Function BP_TrickWall.BP_TrickWall_C.SetNavigationBlocker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_TrickWall.BP_TrickWall_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__CloseDoor__EventFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_0__CloseDoor__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__Release__EventFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_1__Release__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_3__FinishedFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_3__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_3__UpdateFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_3__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_3__TurnOff__EventFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_3__TurnOff__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_3__TurnOn__EventFunc(); // Function BP_TrickWall.BP_TrickWall_C.Timeline_3__TurnOn__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_TrickWall.BP_TrickWall_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_TrickWall.BP_TrickWall_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_TrickWall.BP_TrickWall_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ExitBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_TrickWall.BP_TrickWall_C.BndEvt__ExitBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumBegin(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation); // Function BP_TrickWall.BP_TrickWall_C.OnArrestoMomentumBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumEnd(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent); // Function BP_TrickWall.BP_TrickWall_C.OnArrestoMomentumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Finished(); // Function BP_TrickWall.BP_TrickWall_C.Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayDoorFX(); // Function BP_TrickWall.BP_TrickWall_C.PlayDoorFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_TrickWall.BP_TrickWall_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_TrickWall.BP_TrickWall_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerTrap(); // Function BP_TrickWall.BP_TrickWall_C.TriggerTrap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenDelayTimer(); // Function BP_TrickWall.BP_TrickWall_C.OpenDelayTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_TrickWall.BP_TrickWall_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void KeepOpen(); // Function BP_TrickWall.BP_TrickWall_C.KeepOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CollisionOff(); // Function BP_TrickWall.BP_TrickWall_C.CollisionOff // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TrickWall(int32_t EntryPoint); // Function BP_TrickWall.BP_TrickWall_C.ExecuteUbergraph_BP_TrickWall // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void TrickWallOpened__DelegateSignature(); // Function BP_TrickWall.BP_TrickWall_C.TrickWallOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

