// BlueprintGeneratedClass BP_DungeonLOCs.BP_DungeonLOCs_C
// Size: 0x3d6 (Inherited: 0x248)
struct ABP_DungeonLOCs_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* BP_DungeonLOC_Marker; // 0x250(0x08)
	struct USceneComponent* DungeonLocation; // 0x258(0x08)
	struct UBoxComponent* EntranceBlocker; // 0x260(0x08)
	struct USphereComponent* Sphere; // 0x268(0x08)
	struct UChildActorComponent* InteractChildActor; // 0x270(0x08)
	struct USceneComponent* SwimmingTransform; // 0x278(0x08)
	struct USceneComponent* CairnATransform; // 0x280(0x08)
	struct USceneComponent* SanctumTransform; // 0x288(0x08)
	struct UChildActorComponent* Parent; // 0x290(0x08)
	struct UTargetComponent* Target; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	struct FDataTableRowHandle DungeonNameList; // 0x2a8(0x10)
	struct UChildActorComponent* NewVar_3; // 0x2b8(0x08)
	bool IsExit; // 0x2c0(0x01)
	enum class E_AVA_DungeonType Dungeon Type; // 0x2c1(0x01)
	bool Turn OFF Geo; // 0x2c2(0x01)
	bool Turn OFF Marker; // 0x2c3(0x01)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FString PlayerStartTag; // 0x2c8(0x10)
	bool TurnOnBeaconDebug; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	int32_t ActivationRange; // 0x2dc(0x04)
	int32_t EnterExitRange; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TMap<enum class E_AVA_DungeonType, struct TSoftClassPtr<UObject>> DungeonTypeToMesh; // 0x2e8(0x50)
	enum class E_DungeonEntranceLockTypes LockType; // 0x338(0x01)
	bool UseMissionCheck; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	struct FDatabaseMissionList MissionLock; // 0x33c(0x08)
	enum class MissionStatus MissionStateRequired; // 0x344(0x01)
	bool ToggleOpeningCollision; // 0x345(0x01)
	bool UseStatCheck; // 0x346(0x01)
	char pad_347[0x1]; // 0x347(0x01)
	struct FStatList StatName; // 0x348(0x08)
	int32_t NeededStatValue; // 0x350(0x04)
	bool UseLockCheck; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct FName LockId; // 0x358(0x08)
	enum class ELockStates NeededLockState; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	struct FName DungeonName; // 0x364(0x08)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct TSoftObjectPtr<UWorld> WorldToLoad; // 0x370(0x28)
	int32_t EntranceIndex; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct ABP_DungeonInteract_C* InteractActor; // 0x3a0(0x08)
	bool AlwaysAllowEnter; // 0x3a8(0x01)
	bool RequireSwitch; // 0x3a9(0x01)
	bool SwitchActive; // 0x3aa(0x01)
	bool EnableAudio; // 0x3ab(0x01)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct FString BeaconText; // 0x3b0(0x10)
	bool UseTimeOfDayCheck; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	struct FVector2D TimeOfDayRange; // 0x3c4(0x08)
	bool BlockerCollisionOff; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	float DayOrNight; // 0x3d0(0x04)
	bool DisableCompanionsOnEnter; // 0x3d4(0x01)
	bool BeaconOff; // 0x3d5(0x01)

	struct FName GetUniqueBeaconId(); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DayNightCheck(bool& CheckPassed); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.DayNightCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLockState(); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.SetLockState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MissionStateCheck(bool& MissionCheckPassed); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.MissionStateCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockCheck(bool& LockPassed); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.LockCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StatCheck(bool& Load); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.StatCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteLevelLoad(); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.ExecuteLevelLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BP_IFACE_Sanctum_Dungeon_1_Healed(); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.BP_IFACE_Sanctum_Dungeon_1_Healed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BP_IFACE_Sanctum_Dungeon_1_Destroyed(); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.BP_IFACE_Sanctum_Dungeon_1_Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateInteractCheck(); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.UpdateInteractCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BP_IFACE_Santum_Dungeon_Entrance_START(); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.BP_IFACE_Santum_Dungeon_Entrance_START // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AudioCheck(); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.AudioCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BP_IFACE_Santum_Dungeon_Entrance_END(); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.BP_IFACE_Santum_Dungeon_Entrance_END // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NTR_02_Updated(struct UObject* Caller, struct FName& String); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.NTR_02_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DungeonLocsInteractUpdate(struct UObject* Caller); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.DungeonLocsInteractUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DungeonLOCs(int32_t EntryPoint); // Function BP_DungeonLOCs.BP_DungeonLOCs_C.ExecuteUbergraph_BP_DungeonLOCs // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

