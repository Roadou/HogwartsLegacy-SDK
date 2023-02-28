// BlueprintGeneratedClass BP_Mission_VOTrigger.BP_Mission_VOTrigger_C
// Size: 0x37c (Inherited: 0x248)
struct ABP_Mission_VOTrigger_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UTextRenderComponent* TextRender; // 0x250(0x08)
	struct UBoxComponent* Box; // 0x258(0x08)
	struct UStaticMeshComponent* VOTrigger; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	enum class E_Hog_CamTriggerShape TriggerShape; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct TArray<struct FMissionName> Mission_NewSetup; // 0x278(0x10)
	struct TArray<struct FString> StepNickname; // 0x288(0x10)
	struct TArray<struct FCharacterName> VO_Actor; // 0x298(0x10)
	bool PlayerInTrigger; // 0x2a8(0x01)
	bool BipedPlayerInTrigger; // 0x2a9(0x01)
	bool PlayerMountInTrigger; // 0x2aa(0x01)
	char pad_2AB[0x5]; // 0x2ab(0x05)
	struct FDialogueConversationReference DialogueReference; // 0x2b0(0x10)
	struct UAvaAudioDialogueEvent* DialogueEvent (Deprecated); // 0x2c0(0x08)
	int32_t N Shot; // 0x2c8(0x04)
	bool RepeatWhileInTrigger; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float RepeatMinDelay; // 0x2d0(0x04)
	float RepeatMaxDelay; // 0x2d4(0x04)
	bool SuppressWhenMissionGossipMuted; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct TArray<struct AActor*> Students; // 0x2e0(0x10)
	struct AActor* PlayOnThisActor; // 0x2f0(0x08)
	bool TriggerVisibleInGame; // 0x2f8(0x01)
	bool PrintDebug; // 0x2f9(0x01)
	bool PlayOnExit; // 0x2fa(0x01)
	char pad_2FB[0x5]; // 0x2fb(0x05)
	struct TArray<struct FName> LockName; // 0x300(0x10)
	struct TArray<struct FName> MissionNames; // 0x310(0x10)
	struct TArray<struct FString> ActiveStepNicknames; // 0x320(0x10)
	bool Active?; // 0x330(0x01)
	bool MountCheck; // 0x331(0x01)
	enum class EMountTypes MountType; // 0x332(0x01)
	char pad_333[0x1]; // 0x333(0x01)
	float TriggerCooldown; // 0x334(0x04)
	bool StartWithCooldown; // 0x338(0x01)
	bool CompanionCheck; // 0x339(0x01)
	char pad_33A[0x6]; // 0x33a(0x06)
	struct FString Start time; // 0x340(0x10)
	struct FString End time; // 0x350(0x10)
	bool Register for MEP wait event; // 0x360(0x01)
	bool PlayOnlyIfTracked; // 0x361(0x01)
	char pad_362[0x2]; // 0x362(0x02)
	float MEP wait event delay; // 0x364(0x04)
	bool MEPEventRegistered; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	struct FName KillStat; // 0x36c(0x08)
	int32_t KillStatValue; // 0x374(0x04)
	int32_t PlayerOverlapCounter; // 0x378(0x04)

	void CorrectTimeString(struct FString TimeString, struct FString& CorrectedTimeString); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.CorrectTimeString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void GetTimeStringValid(struct FString TimeString, bool& Valid); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.GetTimeStringValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ValidateTimeStrings(); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.ValidateTimeStrings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateIsPlayerInTrigger(); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.UpdateIsPlayerInTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DialogComplete(); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.DialogComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayVO(); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.PlayVO // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PlayVORepeat(); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.PlayVORepeat // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void WhoIsHere(); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.WhoIsHere // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RegisterMEPWait(bool Register); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.RegisterMEPWait // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MEPWaitComplete(struct UObject* Caller, struct FMissionID& MissionID); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.MEPWaitComplete // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Mission_VOTrigger(int32_t EntryPoint); // Function BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.ExecuteUbergraph_BP_Mission_VOTrigger // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

