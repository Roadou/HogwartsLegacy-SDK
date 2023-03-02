// BlueprintGeneratedClass BP_Disillusionment_Door.BP_Disillusionment_Door_C
// Size: 0x342 (Inherited: 0x248)
struct ABP_Disillusionment_Door_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UBoxComponent* Box1; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct UBP_AutosaveComponent_C* BP_AutosaveComponent; // 0x268(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x270(0x08)
	struct UStaticMeshComponent* SM_GobMine_MedDoor_Frame_03; // 0x278(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x280(0x08)
	struct UStaticMeshComponent* SM_GobMine_MedDoor_Frame_04; // 0x288(0x08)
	struct USceneComponent* Scene; // 0x290(0x08)
	struct UAkComponent* Ak; // 0x298(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2a0(0x08)
	enum class ETimelineDirection Timeline_0__Direction_56C698C14E33920BC96D96A34D0E78DE; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UTimelineComponent* Timeline_1; // 0x2b0(0x08)
	struct UABP_GobMine_MedDoor_C* AnimBP; // 0x2b8(0x08)
	float DistToPlayer; // 0x2c0(0x04)
	float LockDist; // 0x2c4(0x04)
	float SuspectOnDist; // 0x2c8(0x04)
	float UnlockDist; // 0x2cc(0x04)
	float AwakeDist; // 0x2d0(0x04)
	float SuspectOffDist; // 0x2d4(0x04)
	float AsleepDistance; // 0x2d8(0x04)
	bool Awake; // 0x2dc(0x01)
	bool WasAwake; // 0x2dd(0x01)
	bool WasOpen; // 0x2de(0x01)
	bool WasLocked; // 0x2df(0x01)
	bool WasSuspect; // 0x2e0(0x01)
	bool IsRegisteredForSense; // 0x2e1(0x01)
	char pad_2E2[0x6]; // 0x2e2(0x06)
	struct TArray<struct AActor*> Actors to Ignore; // 0x2e8(0x10)
	struct TArray<struct FMultiFX2Var> Exp Page FX; // 0x2f8(0x10)
	bool DoMissionCheck; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	struct FDatabaseMissionList MissionLock; // 0x30c(0x08)
	char pad_314[0x4]; // 0x314(0x04)
	struct FString missionStepNickname; // 0x318(0x10)
	bool Activated; // 0x328(0x01)
	bool Remove DoorFrame; // 0x329(0x01)
	bool AvatarInBox; // 0x32a(0x01)
	char pad_32B[0x5]; // 0x32b(0x05)
	struct TArray<struct AActor*> SwitchTargets; // 0x330(0x10)
	bool OverlapBack; // 0x340(0x01)
	bool bTickPlayerInStealth; // 0x341(0x01)

	void DoorBehaviour(); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.DoorBehaviour // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Landed(struct UObject* Caller); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.Landed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Disillusionment_Door_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.BndEvt__BP_Disillusionment_Door_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Disillusionment_Door_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.BndEvt__BP_Disillusionment_Door_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Disillusionment_Door_Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.BndEvt__BP_Disillusionment_Door_Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Disillusionment_Door_Box1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.BndEvt__BP_Disillusionment_Door_Box1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void GT02_ActivateDungeonEntrance(struct UObject* Caller); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.GT02_ActivateDungeonEntrance // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Disillusionment_Door(int32_t EntryPoint); // Function BP_Disillusionment_Door.BP_Disillusionment_Door_C.ExecuteUbergraph_BP_Disillusionment_Door // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

