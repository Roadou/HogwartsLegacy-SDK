// BlueprintGeneratedClass BP_WE_VerbalWarning.BP_WE_VerbalWarning_C
// Size: 0x315 (Inherited: 0x280)
struct ABP_WE_VerbalWarning_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ABP_HowlerCharacter_C* Howler Character; // 0x290(0x08)
	struct ATriggerSphere* Trigger; // 0x298(0x08)
	int32_t Dialogue Handle; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct ABP_Station_C* Station; // 0x2a8(0x08)
	struct UScheduledEntity* Student; // 0x2b0(0x08)
	struct ABP_Station_C* Station_Crowd; // 0x2b8(0x08)
	struct TArray<struct FString> HowlerVoice; // 0x2c0(0x10)
	struct ABP_Station_C* Station_Crowd_2; // 0x2d0(0x08)
	struct FTimerHandle ReactionTimerHandle; // 0x2d8(0x08)
	struct TArray<struct UScheduledEntity*> CrowdStudents; // 0x2e0(0x10)
	struct FTimerHandle Jeer Timer Handle; // 0x2f0(0x08)
	int32_t ReactionDialogueHandle; // 0x2f8(0x04)
	int32_t JeerDialogueHandle; // 0x2fc(0x04)
	struct FTimerHandle HowlerDialogueTimerHandle; // 0x300(0x08)
	struct FVector HowlerOriginalPosition; // 0x308(0x0c)
	bool EventFinished; // 0x314(0x01)

	void Check NPC Spawn Success(struct UScheduledEntity* SE); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.Check NPC Spawn Success // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupHowler(); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.SetupHowler // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnCrowdHobos(bool& FinishedSpawning); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.SpawnCrowdHobos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HoverHowler(); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.HoverHowler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetHowlerDialogue(bool& EventActive); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.GetHowlerDialogue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IsBoy(struct UScheduledEntity* ScheduledEntity, bool& IsBoy); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.IsBoy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnHowlerSpeechFinished(); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.OnHowlerSpeechFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StudentExittedStation(); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.StudentExittedStation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetHowlerDialogueEvent(); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.GetHowlerDialogueEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_VerbalWarning(int32_t EntryPoint); // Function BP_WE_VerbalWarning.BP_WE_VerbalWarning_C.ExecuteUbergraph_BP_WE_VerbalWarning // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

