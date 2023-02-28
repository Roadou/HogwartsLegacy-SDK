// BlueprintGeneratedClass BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C
// Size: 0x578 (Inherited: 0x248)
struct ABP_HW_FlyingKey_Cabinet_C : AFlyingKeyCabinet {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UCineCameraComponent* Camera; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x268(0x08)
	struct UTargetComponent* Right_Target_3; // 0x270(0x08)
	struct UTargetComponent* Right_Target_2; // 0x278(0x08)
	struct UTargetComponent* Left_Target_5; // 0x280(0x08)
	struct UTargetComponent* Left_Target_4; // 0x288(0x08)
	struct UTargetComponent* Left_Target_3; // 0x290(0x08)
	struct UTargetComponent* Left_Target_2; // 0x298(0x08)
	struct UTargetComponent* Right_Target_5; // 0x2a0(0x08)
	struct UTargetComponent* Right_Target_4; // 0x2a8(0x08)
	struct USceneComponent* Scene1; // 0x2b0(0x08)
	struct USkeletalMeshComponent* SK_TreasureCabinet_Wall; // 0x2b8(0x08)
	struct USceneComponent* Scene; // 0x2c0(0x08)
	struct UStaticMeshComponent* Coin; // 0x2c8(0x08)
	struct UCapsuleComponent* Capsule; // 0x2d0(0x08)
	struct UCapsuleComponent* WingCapsule; // 0x2d8(0x08)
	struct UCapsuleComponent* WingCapsule3; // 0x2e0(0x08)
	struct UCapsuleComponent* WingCapsule2; // 0x2e8(0x08)
	struct UCapsuleComponent* WingCapsule1; // 0x2f0(0x08)
	struct UBillboardComponent* Billboard; // 0x2f8(0x08)
	struct UBillboardComponent* L_Billboard4; // 0x300(0x08)
	struct UBillboardComponent* L_Billboard3; // 0x308(0x08)
	struct UBillboardComponent* L_Billboard2; // 0x310(0x08)
	struct UBillboardComponent* L_Billboard1; // 0x318(0x08)
	struct UBillboardComponent* Billboard4; // 0x320(0x08)
	struct UBillboardComponent* Billboard3; // 0x328(0x08)
	struct UBillboardComponent* Billboard2; // 0x330(0x08)
	struct UStaticMeshComponent* SM_HW_TreasureCabinet_Wall_Key_Wing3; // 0x338(0x08)
	struct UStaticMeshComponent* SM_HW_TreasureCabinet_Wall_Key_Wing2; // 0x340(0x08)
	struct UStaticMeshComponent* SM_HW_TreasureCabinet_Wall_Key_Wing1; // 0x348(0x08)
	struct UStaticMeshComponent* SM_HW_TreasureCabinet_Wall_Key_Wing; // 0x350(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x358(0x08)
	struct ASkeletalMeshActor* FlyingKey; // 0x360(0x08)
	bool InteractInitiated; // 0x368(0x01)
	bool PuzzleComplete; // 0x369(0x01)
	char pad_36A[0x2]; // 0x36a(0x02)
	float KeyInterpSpeed; // 0x36c(0x04)
	struct FVector KeyTargetPosition; // 0x370(0x0c)
	bool OnLeftSide; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	int32_t NumTimesChangeLocationBeforeCrossing; // 0x380(0x04)
	int32_t LocationChanges; // 0x384(0x04)
	int32_t CurrentLocation; // 0x388(0x04)
	float TimeStartedAtLocation; // 0x38c(0x04)
	float TimeToChangeLocations; // 0x390(0x04)
	float KeyYaw; // 0x394(0x04)
	float DeltaSeconds; // 0x398(0x04)
	float KeyRotateSpeed; // 0x39c(0x04)
	bool Splatting; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	float SplatRotateSpeed; // 0x3a4(0x04)
	float NormalRotateSpeed; // 0x3a8(0x04)
	float DistToWin; // 0x3ac(0x04)
	float KeyPitch; // 0x3b0(0x04)
	float DistToResetPitch; // 0x3b4(0x04)
	float BigPitcch; // 0x3b8(0x04)
	float SmallPitch; // 0x3bc(0x04)
	float TimeLastSplat; // 0x3c0(0x04)
	float MinTimeBetweenSplats; // 0x3c4(0x04)
	bool LeftSplatA; // 0x3c8(0x01)
	bool RightSplatA; // 0x3c9(0x01)
	bool ContainsLoot; // 0x3ca(0x01)
	bool WingsEnabled; // 0x3cb(0x01)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UStaticMeshComponent* TempWing; // 0x3d0(0x08)
	struct UCapsuleComponent* TempCapsule; // 0x3d8(0x08)
	bool DebugDraw; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x3e8(0x50)
	enum class EEnvironment Environment; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FPropList CabinetProps; // 0x440(0xb0)
	int32_t PropIndex; // 0x4f0(0x04)
	int32_t EnvInt; // 0x4f4(0x04)
	float SplatSoundDelay; // 0x4f8(0x04)
	bool CheatEnabled; // 0x4fc(0x01)
	char pad_4FD[0x3]; // 0x4fd(0x03)
	int32_t NumTokensToAward; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct UNiagaraComponent* TrailFX; // 0x508(0x08)
	struct UUI_BP_SimpleLegend_Screen_C* LegendWidget; // 0x510(0x08)
	struct FString CabinetActivatedString; // 0x518(0x10)
	struct FString CabinetCompleteString; // 0x528(0x10)
	float StoryRadius; // 0x538(0x04)
	float EasyRadius; // 0x53c(0x04)
	float MediumRadius; // 0x540(0x04)
	float HardRadius; // 0x544(0x04)
	float StorySpeed; // 0x548(0x04)
	float EasySpeed; // 0x54c(0x04)
	float MediumSpeed; // 0x550(0x04)
	float HardSpeed; // 0x554(0x04)
	bool Use Stat Lock; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	struct FName Stat Lock; // 0x55c(0x08)
	bool CabinetLock; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)
	struct FName FDG_01; // 0x568(0x08)
	struct FName BeaconID; // 0x570(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetShouldAbortInteract(bool& Abort Interact); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.GetShouldAbortInteract // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ForceCabinetToOpenStatus(); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.ForceCabinetToOpenStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCompletedStatus(bool& Completed); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.GetCompletedStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetPlayerIsProfBlack(bool& IsProfBlack); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.GetPlayerIsProfBlack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UnlockCabinet(); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.UnlockCabinet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCabinetKeyStatus(bool& Cabinet Active); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.GetCabinetKeyStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void LockCabinet(); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.LockCabinet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCabinetStatus(); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.UpdateCabinetStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetChanceToPlay(bool& PlayVO); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.GetChanceToPlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetShouldPlayAvatarVO(bool& PlayVO); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.GetShouldPlayAvatarVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void AttemptAvatarVO(struct FDialogueConversationReference DialogueEventName); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.AttemptAvatarVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetLockStatus(bool& Locked); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.GetLockStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void IncrementHouseTokenStat(); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.IncrementHouseTokenStat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateUI(bool Activate); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.ActivateUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChooseNextLocation(); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.ChooseNextLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOnKey(struct UObject* Caller); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.TurnOnKey // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SlapKeyPressed(struct UObject* Caller); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.SlapKeyPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RightButtonPressed(struct UObject* Caller); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.RightButtonPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoneSplatting(struct UObject* Caller); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.DoneSplatting // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CabinetOpen(struct UObject* Caller); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.CabinetOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void WatchFGD01Updates(); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.WatchFGD01Updates // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Updated FGD_01(struct UObject* Caller, struct FMissionID& MissionID); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.Updated FGD_01 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_FlyingKey_Cabinet(int32_t EntryPoint); // Function BP_HW_FlyingKey_Cabinet.BP_HW_FlyingKey_Cabinet_C.ExecuteUbergraph_BP_HW_FlyingKey_Cabinet // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

