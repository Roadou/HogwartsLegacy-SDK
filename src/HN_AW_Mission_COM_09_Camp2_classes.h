// BlueprintGeneratedClass HN_AW_Mission_COM_09_Camp2.HN_AW_Mission_COM_09_Camp2_C
// Size: 0x2b8 (Inherited: 0x250)
struct AHN_AW_Mission_COM_09_Camp2_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FString Defeat_Goblins; // 0x258(0x10)
	struct AActor* Spawned Actor; // 0x268(0x08)
	struct AActor* Spawned Actor_1; // 0x270(0x08)
	struct TArray<struct AActor*> GoblinCamp1; // 0x278(0x10)
	struct TArray<struct AActor*> GoblinCamp2; // 0x288(0x10)
	int32_t DOVsCompleted; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct ANone* BP_Mission_VOTrigger_COM09_GoblinCamps_FirstCampApproach2_ExecuteUbergraph_HN_AW_Mission_COM_09_Camp2_RefProperty; // 0x2a0(0x08)
	struct ADynamicObjectVolume* ELC_HN_AW_COM_09_GoblinCamp2_LOC_Patrol_1_DOV_0_ExecuteUbergraph_HN_AW_Mission_COM_09_Camp2_RefProperty; // 0x2a8(0x08)
	struct ADynamicObjectVolume* ELC_HN_AW_COM_09_GoblinCamp2_LOC_Patrol_1_DOV_1_ExecuteUbergraph_HN_AW_Mission_COM_09_Camp2_RefProperty; // 0x2b0(0x08)

	void ReceiveBeginPlay(); // Function HN_AW_Mission_COM_09_Camp2.HN_AW_Mission_COM_09_Camp2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void COM_09_Updated(struct UObject* Caller, struct FName& String); // Function HN_AW_Mission_COM_09_Camp2.HN_AW_Mission_COM_09_Camp2_C.COM_09_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__M_COM_09_BP_Mission_VOTrigger_COM09_GoblinCamps_FirstCampApproach2_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_AW_Mission_COM_09_Camp2.HN_AW_Mission_COM_09_Camp2_C.BndEvt__M_COM_09_BP_Mission_VOTrigger_COM09_GoblinCamps_FirstCampApproach2_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void COM_09_Camp2_Spawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AW_Mission_COM_09_Camp2.HN_AW_Mission_COM_09_Camp2_C.COM_09_Camp2_Spawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_1(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_AW_Mission_COM_09_Camp2.HN_AW_Mission_COM_09_Camp2_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_09_Camp2_PercievedPlayer(struct ANPC_Character* NPCChar); // Function HN_AW_Mission_COM_09_Camp2.HN_AW_Mission_COM_09_Camp2_C.COM_09_Camp2_PercievedPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_09_Camp2_PlayerPerceptionLost(); // Function HN_AW_Mission_COM_09_Camp2.HN_AW_Mission_COM_09_Camp2_C.COM_09_Camp2_PlayerPerceptionLost // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void M_COM_09_PlayerCampVOKill(struct UObject* Caller); // Function HN_AW_Mission_COM_09_Camp2.HN_AW_Mission_COM_09_Camp2_C.M_COM_09_PlayerCampVOKill // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FGT_CourtyardGoblins_Dead(); // Function HN_AW_Mission_COM_09_Camp2.HN_AW_Mission_COM_09_Camp2_C.FGT_CourtyardGoblins_Dead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_AW_Mission_COM_09_Camp2(int32_t EntryPoint); // Function HN_AW_Mission_COM_09_Camp2.HN_AW_Mission_COM_09_Camp2_C.ExecuteUbergraph_HN_AW_Mission_COM_09_Camp2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

