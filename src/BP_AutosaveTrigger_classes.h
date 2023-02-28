// BlueprintGeneratedClass BP_AutosaveTrigger.BP_AutosaveTrigger_C
// Size: 0x4e0 (Inherited: 0x248)
struct ABP_AutosaveTrigger_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UArrowComponent* Arrow; // 0x250(0x08)
	struct UTextRenderComponent* TextRender; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct UBillboardComponent* Billboard; // 0x268(0x08)
	bool UseTrigger; // 0x270(0x01)
	bool TriggerOnlyOnce; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct FString SaveLocation; // 0x278(0x10)
	bool SetNewRespawnLocation; // 0x288(0x01)
	bool UsePlayerForNewRespawn; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct FTransform Respawnlocation; // 0x290(0x30)
	bool UpdateStat; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct TMap<struct FStatList, int32_t> Stats; // 0x2c8(0x50)
	bool UpdateLock; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct TMap<struct FName, enum class ELockStates> Locks; // 0x320(0x50)
	struct UUI_BP_SavingIcon_C* Widget; // 0x370(0x08)
	struct AEncounterVolume* Encounter; // 0x378(0x08)
	struct ADynamicObjectVolume* DynamicVolume; // 0x380(0x08)
	bool TriggerOnEach; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct TArray<struct AEncounterVolume*> Encounters; // 0x390(0x10)
	struct TArray<struct ADynamicObjectVolume*> DynamicVolumes; // 0x3a0(0x10)
	int32_t NumDynamicVolumes; // 0x3b0(0x04)
	int32_t VolumesCompleted; // 0x3b4(0x04)
	int32_t NumEncounters; // 0x3b8(0x04)
	int32_t EncoutnersCompleted; // 0x3bc(0x04)
	struct FName RestoreStat; // 0x3c0(0x08)
	int32_t RestoreStatValue; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct TArray<struct AActor*> RestoreEventTargets; // 0x3d0(0x10)
	struct TArray<struct AActor*> KillActors; // 0x3e0(0x10)
	struct USkeletalMeshComponentBudgeted* skel; // 0x3f0(0x08)
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FTransform UpdatedSaveTransform; // 0x400(0x30)
	bool TestRestore; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct FMulticastInlineDelegate SaveRestore; // 0x438(0x10)
	struct AActor* CampBeacon; // 0x448(0x08)
	bool IsCampBeaconSave; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FString CampDBName; // 0x458(0x10)
	struct AActor* CampActor; // 0x468(0x08)
	bool IsComplicatedDovSetup; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct TArray<struct FSTR_ComplicatedDOVSaves> ComplicatedDOVs; // 0x478(0x10)
	int32_t NumCompDovsA; // 0x488(0x04)
	int32_t CompDovsACompleted; // 0x48c(0x04)
	int32_t NumCompDOVsB; // 0x490(0x04)
	int32_t CompDovsBCompleted; // 0x494(0x04)
	int32_t CompDovsCCompleted; // 0x498(0x04)
	int32_t NumCompDOVsC; // 0x49c(0x04)
	int32_t CurrentDovSet; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct TArray<struct ADynamicObjectVolume*> DOVsToDisable; // 0x4a8(0x10)
	struct TArray<struct ADynamicObjectVolume*> DOVsToEnable; // 0x4b8(0x10)
	bool AllowSave; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct FMulticastInlineDelegate SaveTriggered; // 0x4d0(0x10)

	void EnableDOVs(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.EnableDOVs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableDOVs(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.DisableDOVs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCampBeacon(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.UpdateCampBeacon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSavePlayerTransform(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.SetSavePlayerTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProcessTargetActors(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.ProcessTargetActors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStats(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.SetStats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLock(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.SetLock // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerSave(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.TriggerSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnAllEnemiesDead(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.OnAllEnemiesDead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EncounterOnAllEnemiesDead(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.EncounterOnAllEnemiesDead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerSaveEvent(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.TriggerSaveEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ComplicatedDOVA(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.ComplicatedDOVA // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateDOVSet(int32_t NewDovSet); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.UpdateDOVSet // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OneEnemySpawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.OneEnemySpawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AutosaveTrigger(int32_t EntryPoint); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.ExecuteUbergraph_BP_AutosaveTrigger // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void SaveTriggered__DelegateSignature(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.SaveTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SaveRestore__DelegateSignature(); // Function BP_AutosaveTrigger.BP_AutosaveTrigger_C.SaveRestore__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

