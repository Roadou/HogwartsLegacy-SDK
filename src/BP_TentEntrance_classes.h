// BlueprintGeneratedClass BP_TentEntrance.BP_TentEntrance_C
// Size: 0x398 (Inherited: 0x248)
struct ABP_TentEntrance_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* InteractPoint; // 0x250(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258(0x08)
	struct UBoxComponent* MissionBlocker; // 0x260(0x08)
	struct UBoxComponent* SpeedMode; // 0x268(0x08)
	struct UBoxComponent* Collision; // 0x270(0x08)
	struct UBoxComponent* TriggerTeleport; // 0x278(0x08)
	struct UChildActorComponent* BP_Textile_CampB_Flap_A1; // 0x280(0x08)
	struct UChildActorComponent* BP_Textile_CampB_Flap_A; // 0x288(0x08)
	struct UCameraStackVolumeComponent* CameraStackVolume; // 0x290(0x08)
	struct UBoxComponent* CameraVolume; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	struct AActor* TeleportLocation; // 0x2a8(0x08)
	int32_t Delta; // 0x2b0(0x04)
	bool NoSprint; // 0x2b4(0x01)
	bool CasualMode; // 0x2b5(0x01)
	bool NoDodge; // 0x2b6(0x01)
	bool NoJump; // 0x2b7(0x01)
	enum class ETargetSpeedMode Speed Mode; // 0x2b8(0x01)
	enum class ETargetSpeedMode Speed Modifier; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)
	struct ABiped_Player* As Biped Player; // 0x2c0(0x08)
	bool MissionCheck; // 0x2c8(0x01)
	bool IsEntrance; // 0x2c9(0x01)
	bool HideGeometry; // 0x2ca(0x01)
	bool UseInteract; // 0x2cb(0x01)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FMulticastInlineDelegate Interacted; // 0x2d0(0x10)
	bool fade; // 0x2e0(0x01)
	bool WaitForCinematic; // 0x2e1(0x01)
	char pad_2E2[0x6]; // 0x2e2(0x06)
	struct FHermesBPDelegateHandle EnteredTentBindHandle; // 0x2e8(0x10)
	struct FText EntranceTargetName; // 0x2f8(0x18)
	struct FText ExitTargetName; // 0x310(0x18)
	struct FStatList MissionNameForAnimationSkip; // 0x328(0x08)
	struct FDatabaseLockList MissionCheckLockName; // 0x330(0x08)
	struct FHermesBPDelegateHandle LockBindHandle; // 0x338(0x10)
	bool UpdateMapOnEnter; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FString MapChangeEventName; // 0x350(0x10)
	struct FString MapUpdateString; // 0x360(0x10)
	bool CheckLevelLoaded; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	struct FName StreamedLevelToCheck; // 0x374(0x08)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FString FTLocationID; // 0x380(0x10)
	struct FName BeaconID; // 0x390(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_TentEntrance.BP_TentEntrance_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllowTentInteract(); // Function BP_TentEntrance.BP_TentEntrance_C.AllowTentInteract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateTentLock(); // Function BP_TentEntrance.BP_TentEntrance_C.EvaluateTentLock // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function BP_TentEntrance.BP_TentEntrance_C.LockChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShouldSkipAnimation(bool& ShouldSkip); // Function BP_TentEntrance.BP_TentEntrance_C.ShouldSkipAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void AdjustInteractText(); // Function BP_TentEntrance.BP_TentEntrance_C.AdjustInteractText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(struct ABiped_Character* InActor, bool InFlag); // Function BP_TentEntrance.BP_TentEntrance_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_TentEntrance.BP_TentEntrance_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_TentEntrance_TriggerTeleport_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_TentEntrance.BP_TentEntrance_C.BndEvt__BP_TentEntrance_TriggerTeleport_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_TentEntrance_SpeedMode_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_TentEntrance.BP_TentEntrance_C.BndEvt__BP_TentEntrance_SpeedMode_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_TentEntrance_SpeedMode_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_TentEntrance.BP_TentEntrance_C.BndEvt__BP_TentEntrance_SpeedMode_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Reset(); // Function BP_TentEntrance.BP_TentEntrance_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_TentEntrance.BP_TentEntrance_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_TentEntrance.BP_TentEntrance_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Her01EnteredTent(struct UObject* Caller, struct FString String); // Function BP_TentEntrance.BP_TentEntrance_C.Her01EnteredTent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TentEntrance(int32_t EntryPoint); // Function BP_TentEntrance.BP_TentEntrance_C.ExecuteUbergraph_BP_TentEntrance // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Interacted__DelegateSignature(); // Function BP_TentEntrance.BP_TentEntrance_C.Interacted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

