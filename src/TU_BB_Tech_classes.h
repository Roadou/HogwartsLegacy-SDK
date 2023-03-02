// BlueprintGeneratedClass TU_BB_Tech.TU_BB_Tech_C
// Size: 0x280 (Inherited: 0x250)
struct ATU_BB_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct AActor* GoblinActorTalking; // 0x258(0x08)
	int32_t NumberOfDOVsCleared; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct ADynamicObjectVolume* TU_BB_TR01_RowlandsCampGoblins_LOC_Common_1_DOV_0_ExecuteUbergraph_TU_BB_Tech_RefProperty; // 0x268(0x08)
	struct ATriggerBox* TriggerBox_TR01_CampGoblinTalkZone_ExecuteUbergraph_TU_BB_Tech_RefProperty; // 0x270(0x08)
	struct ADynamicObjectVolume* TU_BB_TR01_RowlandsCampGoblins_LOC_Common_1_DOV2_ExecuteUbergraph_TU_BB_Tech_RefProperty; // 0x278(0x08)

	void OnAllEnemiesDeadEvent_Event_1(); // Function TU_BB_Tech.TU_BB_Tech_C.OnAllEnemiesDeadEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function TU_BB_Tech.TU_BB_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnActorSpawnedEvent_Event_1(struct AActor* SpawnedActor, struct FName& GroupName); // Function TU_BB_Tech.TU_BB_Tech_C.OnActorSpawnedEvent_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerBox_TR01_Goblin1TalkZone_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function TU_BB_Tech.TU_BB_Tech_C.BndEvt__TriggerBox_TR01_Goblin1TalkZone_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Updated TR01_01(struct UObject* Caller, struct FMissionID& MissionID); // Function TU_BB_Tech.TU_BB_Tech_C.Updated TR01_01 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAllEnemiesDeadEvent_Event_2(); // Function TU_BB_Tech.TU_BB_Tech_C.OnAllEnemiesDeadEvent_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_TU_BB_Tech(int32_t EntryPoint); // Function TU_BB_Tech.TU_BB_Tech_C.ExecuteUbergraph_TU_BB_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

