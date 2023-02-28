// BlueprintGeneratedClass BP_AccioPuzzle.BP_AccioPuzzle_C
// Size: 0x478 (Inherited: 0x248)
struct ABP_AccioPuzzle_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* InteractBlocker; // 0x250(0x08)
	struct UTextRenderComponent* TextRender; // 0x258(0x08)
	struct UDayNightBasicLightControllerComponent* DayNightBasicLightController; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HW_LightFixture_Wall_B; // 0x268(0x08)
	struct USpotLightComponent* SpotLight; // 0x270(0x08)
	struct UBoxComponent* PlayerInsideCollision; // 0x278(0x08)
	struct UChildActorComponent* ChildActor_AccioRing; // 0x280(0x08)
	struct USpotLightComponent* Light_UnderStair2; // 0x288(0x08)
	struct USpotLightComponent* Light_UnderStair1; // 0x290(0x08)
	struct USceneComponent* Lighting; // 0x298(0x08)
	struct UStaticMeshComponent* SM_COM03_PortraitWall_Arch; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_COM03_PaintingTrim; // 0x2a8(0x08)
	struct UStaticMeshComponent* COL_Stairs; // 0x2b0(0x08)
	struct UStaticMeshComponent* COL_Ramp; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Mosaic_Circle_CirclePattern; // 0x2c0(0x08)
	struct UStaticMeshComponent* collision_cube; // 0x2c8(0x08)
	struct UNiagaraComponent* VFX_FillDust; // 0x2d0(0x08)
	struct UAkComponent* Ak_BP_AccioPuzzle_Door; // 0x2d8(0x08)
	struct UAkComponent* Ak_BP_AccioPuzzle_Stairs; // 0x2e0(0x08)
	struct UStaticMeshComponent* SM_COM03_PortraitWall_LightBlocker; // 0x2e8(0x08)
	struct UStaticMeshComponent* SM_COM03_PortraitWall_Archway; // 0x2f0(0x08)
	struct UStaticMeshComponent* SM_COM03_PortraitWall_Room; // 0x2f8(0x08)
	struct UBoxComponent* Box_ExitTrigger; // 0x300(0x08)
	struct UStaticMeshComponent* SM_COM03_PortraitWall_StepBlocker; // 0x308(0x08)
	struct UStaticMeshComponent* SM_COM03_PortraitWall_cutout; // 0x310(0x08)
	struct USceneComponent* Wall; // 0x318(0x08)
	struct USkeletalMeshComponent* SK_Stairs; // 0x320(0x08)
	struct USceneComponent* Stairs; // 0x328(0x08)
	struct UStaticMeshComponent* SM_COM03_PaintingFrame_Frame; // 0x330(0x08)
	struct UStaticMeshComponent* SM_COM03_Painting_Door; // 0x338(0x08)
	struct UStaticMeshComponent* SM_COM03_Painting_Painting; // 0x340(0x08)
	struct USceneComponent* Painting; // 0x348(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x350(0x08)
	float CloseDoorTimeline_lightIntensity_72DF402141FDD5B70922A18E72AD2C7A; // 0x358(0x04)
	float CloseDoorTimeline_doorOpacity_72DF402141FDD5B70922A18E72AD2C7A; // 0x35c(0x04)
	float CloseDoorTimeline_DoorCloseTimeline_72DF402141FDD5B70922A18E72AD2C7A; // 0x360(0x04)
	enum class ETimelineDirection CloseDoorTimeline__Direction_72DF402141FDD5B70922A18E72AD2C7A; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	struct UTimelineComponent* CloseDoorTimeline; // 0x368(0x08)
	float StairBlockerFadeIn_FadeIn_2B0F810340BF1A4DB0D61BA86E5E8209; // 0x370(0x04)
	enum class ETimelineDirection StairBlockerFadeIn__Direction_2B0F810340BF1A4DB0D61BA86E5E8209; // 0x374(0x01)
	char pad_375[0x3]; // 0x375(0x03)
	struct UTimelineComponent* StairBlockerFadeIn; // 0x378(0x08)
	float CameraDollyOutTimeline_MaterialSwap_D6F2E72B4A6280D70201DE8BD3BAACD2; // 0x380(0x04)
	float CameraDollyOutTimeline_CamAlpha_D6F2E72B4A6280D70201DE8BD3BAACD2; // 0x384(0x04)
	enum class ETimelineDirection CameraDollyOutTimeline__Direction_D6F2E72B4A6280D70201DE8BD3BAACD2; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UTimelineComponent* CameraDollyOutTimeline; // 0x390(0x08)
	float OpenDoorTimeline_lightIntensity_C45CE41A49E12CE371148DBDF61E7A06; // 0x398(0x04)
	float OpenDoorTimeline_dooropacity_C45CE41A49E12CE371148DBDF61E7A06; // 0x39c(0x04)
	float OpenDoorTimeline_HingeYaw_C45CE41A49E12CE371148DBDF61E7A06; // 0x3a0(0x04)
	enum class ETimelineDirection OpenDoorTimeline__Direction_C45CE41A49E12CE371148DBDF61E7A06; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct UTimelineComponent* OpenDoorTimeline; // 0x3a8(0x08)
	float CameraDollyInTimeline_doorOpacity_629B06B24C51FC207945FCB5ABDAB937; // 0x3b0(0x04)
	float CameraDollyInTimeline_MaterialSwap_629B06B24C51FC207945FCB5ABDAB937; // 0x3b4(0x04)
	float CameraDollyInTimeline_CamAlpha_629B06B24C51FC207945FCB5ABDAB937; // 0x3b8(0x04)
	enum class ETimelineDirection CameraDollyInTimeline__Direction_629B06B24C51FC207945FCB5ABDAB937; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	struct UTimelineComponent* CameraDollyInTimeline; // 0x3c0(0x08)
	float StairBlockerFadeOut_FadeOut_4EA0AA694F8A97E9B4962F8D3288C3B9; // 0x3c8(0x04)
	enum class ETimelineDirection StairBlockerFadeOut__Direction_4EA0AA694F8A97E9B4962F8D3288C3B9; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	struct UTimelineComponent* StairBlockerFadeOut; // 0x3d0(0x08)
	bool IsOpen; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct UMaterialInstanceDynamic* PaintingDMI; // 0x3e0(0x08)
	bool DebugLoop; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	float StairAnimationDuration; // 0x3ec(0x04)
	struct UMaterialInstanceDynamic* MI_StepBlocker; // 0x3f0(0x08)
	enum class E_AccioPuzzleState AccioPuzzleState; // 0x3f8(0x01)
	bool Request_Close; // 0x3f9(0x01)
	bool RingLooping; // 0x3fa(0x01)
	char pad_3FB[0x1]; // 0x3fb(0x01)
	float RingLoopTime; // 0x3fc(0x04)
	struct FRotator RingStartingRotation; // 0x400(0x0c)
	bool DebugAudio; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	float StairConstructRate; // 0x410(0x04)
	float StairResetRate; // 0x414(0x04)
	float DelayBeforeDoorOpens; // 0x418(0x04)
	float DelayBeforeDoorCloses; // 0x41c(0x04)
	float DebugLoopDelay; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct FMulticastInlineDelegate AccioPuzzleOpened; // 0x428(0x10)
	struct FMulticastInlineDelegate AccioPuzzleStateChange; // 0x438(0x10)
	struct UMaterialInstanceDynamic* PaintingDMI_Door; // 0x448(0x08)
	float currentIntensity; // 0x450(0x04)
	bool UseMissionLock; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct FName MissionName; // 0x458(0x08)
	struct AAkAcousticPortal* Acoustic Portal; // 0x460(0x08)
	struct TArray<struct USpotLightComponent*> lightArray; // 0x468(0x10)

	void StairBlockerFadeIn__FinishedFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.StairBlockerFadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void StairBlockerFadeIn__UpdateFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.StairBlockerFadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void CameraDollyInTimeline__FinishedFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.CameraDollyInTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void CameraDollyInTimeline__UpdateFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.CameraDollyInTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void StairBlockerFadeOut__FinishedFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.StairBlockerFadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void StairBlockerFadeOut__UpdateFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.StairBlockerFadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OpenDoorTimeline__FinishedFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.OpenDoorTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void OpenDoorTimeline__UpdateFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.OpenDoorTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void CameraDollyOutTimeline__FinishedFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.CameraDollyOutTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void CameraDollyOutTimeline__UpdateFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.CameraDollyOutTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void CloseDoorTimeline__FinishedFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.CloseDoorTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void CloseDoorTimeline__UpdateFunc(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.CloseDoorTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void StartOpenSequence(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.StartOpenSequence // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenDoor(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.OpenDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseDoor(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.CloseDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_AccioPuzzle_Box_ExitTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.BndEvt__BP_AccioPuzzle_Box_ExitTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Start Close Sequence(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.Start Close Sequence // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartDollyOut(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.StartDollyOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioStartStairs(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.AudioStartStairs // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioStopStairs(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.AudioStopStairs // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioDoorOpen(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.AudioDoorOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioDoorClose(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.AudioDoorClose // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwapCollisionOpen(struct UObject* Caller); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.SwapCollisionOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwapCollisionClose(struct UObject* Caller); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.SwapCollisionClose // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckIsPlayerStuckInRoom(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.CheckIsPlayerStuckInRoom // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PostLoad(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.PostLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_AccioPuzzle_PlayerInsideCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.BndEvt__BP_AccioPuzzle_PlayerInsideCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ForceStartOpen(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.ForceStartOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceStairsOpen(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.ForceStairsOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReactToAccioRingSpellHit(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.ReactToAccioRingSpellHit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableAccioRing(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.EnableAccioRing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AccioPuzzle(int32_t EntryPoint); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.ExecuteUbergraph_BP_AccioPuzzle // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void AccioPuzzleStateChange__DelegateSignature(enum class E_AccioPuzzleState NewState); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.AccioPuzzleStateChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AccioPuzzleOpened__DelegateSignature(); // Function BP_AccioPuzzle.BP_AccioPuzzle_C.AccioPuzzleOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

