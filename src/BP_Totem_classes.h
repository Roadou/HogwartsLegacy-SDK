// BlueprintGeneratedClass BP_Totem.BP_Totem_C
// Size: 0x39c (Inherited: 0x248)
struct ABP_Totem_C : ATotem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCineCameraComponent* CineCamera; // 0x250(0x08)
	struct UAkComponent* Ak_BP_Totem; // 0x258(0x08)
	struct UBoxComponent* Box_ColFloor; // 0x260(0x08)
	struct UCapsuleComponent* Capsule_ColC; // 0x268(0x08)
	struct UBoxComponent* Box_ColC; // 0x270(0x08)
	struct UCapsuleComponent* Capsule_ColL; // 0x278(0x08)
	struct UCapsuleComponent* Capsule_ColR; // 0x280(0x08)
	struct USceneComponent* ForTag; // 0x288(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x290(0x08)
	struct UBP_AutosaveComponent_C* BP_AutosaveComponent; // 0x298(0x08)
	struct UNiagaraComponent* ParticleSystem_FireLeftDeluxe1; // 0x2a0(0x08)
	struct UNiagaraComponent* ParticleSystem_FireRightDeluxe; // 0x2a8(0x08)
	struct UOdcObstacleComponent* OdcObstacle; // 0x2b0(0x08)
	struct UBoxComponent* BoxTrigger; // 0x2b8(0x08)
	struct UParticleSystemComponent* ParticleSystem1_FireLeft; // 0x2c0(0x08)
	struct UParticleSystemComponent* ParticleSystem_FireRight; // 0x2c8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)
	struct UPointLightComponent* NewVar_1; // 0x2e0(0x08)
	struct AActor* TeleportArenaLocation; // 0x2e8(0x08)
	float CameraFadeTime; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct TArray<struct ABP_Vase_CombatChallenge_C*> VasesToBreak; // 0x2f8(0x10)
	int32_t VasesDestroyedCounter; // 0x308(0x04)
	int32_t VasesNeeded ToBreak; // 0x30c(0x04)
	struct ABP_CutCam_C* CamCut; // 0x310(0x08)
	struct UUI_BP_ChallengeInvitation_C* UIInvitationRef; // 0x318(0x08)
	struct ATargetPoint* TeleportBackOut; // 0x320(0x08)
	struct ATriggerVolume* TriggerVaseUI; // 0x328(0x08)
	bool EnablesMissionStat; // 0x330(0x01)
	bool armsAreOpen; // 0x331(0x01)
	bool totemActivated; // 0x332(0x01)
	char pad_333[0x1]; // 0x333(0x01)
	struct FName StatKeySaveForLocation; // 0x334(0x08)
	int32_t StatValue; // 0x33c(0x04)
	bool changeNumberOfNeededVases; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	int32_t newNumberOfVases; // 0x344(0x04)
	bool totemEntered; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	struct FVector StartLocation; // 0x34c(0x0c)
	bool HideTotem; // 0x358(0x01)
	bool DeluxeEdition; // 0x359(0x01)
	char pad_35A[0x6]; // 0x35a(0x06)
	struct TArray<struct ABP_Vase_CombatChallenge_C*> VasesToBreakUpdated; // 0x360(0x10)
	struct FString ChallengeTitle; // 0x370(0x10)
	struct TArray<struct ABP_Vase_CombatChallenge_C*> BrokenVases; // 0x380(0x10)
	struct FVector DarkArtsTotemInteractLocation; // 0x390(0x0c)

	void Enable Field Guide(bool Enable); // Function BP_Totem.BP_Totem_C.Enable Field Guide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Activate Odc Obstacle(); // Function BP_Totem.BP_Totem_C.Activate Odc Obstacle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveTotemBack(); // Function BP_Totem.BP_Totem_C.MoveTotemBack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveTotemDown(); // Function BP_Totem.BP_Totem_C.MoveTotemDown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TorchesOn(); // Function BP_Totem.BP_Totem_C.TorchesOn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Totem.BP_Totem_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_AM_Interact_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_Totem.BP_Totem_C.InpActEvt_AM_Interact_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_Totem.BP_Totem_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_Totem.BP_Totem_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Totem.BP_Totem_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void VaseBroken(struct AActor* DestroyedActor); // Function BP_Totem.BP_Totem_C.VaseBroken // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnterTotem(struct UObject* Caller); // Function BP_Totem.BP_Totem_C.EnterTotem // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BindRestart(); // Function BP_Totem.BP_Totem_C.BindRestart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerVaseUI_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_Totem.BP_Totem_C.BndEvt__TriggerVaseUI_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerVaseUI_K2Node_ComponentBoundEvent_2_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_Totem.BP_Totem_C.BndEvt__TriggerVaseUI_K2Node_ComponentBoundEvent_2_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void RestartChallenge(struct UObject* Caller); // Function BP_Totem.BP_Totem_C.RestartChallenge // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RemoveInviteUI(); // Function BP_Totem.BP_Totem_C.RemoveInviteUI // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Totem_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Totem.BP_Totem_C.BndEvt__BP_Totem_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Totem_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Totem.BP_Totem_C.BndEvt__BP_Totem_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_Totem.BP_Totem_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnterTotemUsingInteract(); // Function BP_Totem.BP_Totem_C.EnterTotemUsingInteract // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStartChallengeMode(); // Function BP_Totem.BP_Totem_C.SetStartChallengeMode // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitChallenge(struct UObject* Caller); // Function BP_Totem.BP_Totem_C.ExitChallenge // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HermesExitChallenge(); // Function BP_Totem.BP_Totem_C.HermesExitChallenge // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseGate(); // Function BP_Totem.BP_Totem_C.CloseGate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Totem.BP_Totem_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Totem(int32_t EntryPoint); // Function BP_Totem.BP_Totem_C.ExecuteUbergraph_BP_Totem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

