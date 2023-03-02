// BlueprintGeneratedClass HN_AK_Mission.HN_AK_Mission_C
// Size: 0x378 (Inherited: 0x250)
struct AHN_AK_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	enum class E_AmbushTriggerType TriggeringType; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct FString Defeat_GoblinsCourtyard; // 0x260(0x10)
	struct FString Setup; // 0x270(0x10)
	struct FString Get_Item; // 0x280(0x10)
	struct FString Complete_EnemyIntro; // 0x290(0x10)
	struct AActor* GobByTent_Actor_ForMissionVO; // 0x2a0(0x08)
	struct AActor* Spawned FireStationGob_Actor_ForMissionVO; // 0x2a8(0x08)
	struct AActor* StaircaseGob_Actor_ForMissionVO; // 0x2b0(0x08)
	struct AEnemy_Character* AssassinEnemy; // 0x2b8(0x08)
	struct AEnemy_Character* GoblinWave2_VO_2; // 0x2c0(0x08)
	struct AEnemy_Character* GoblinWave2_VO_3; // 0x2c8(0x08)
	struct AEnemy_Character* GoblinWave2_VO_4; // 0x2d0(0x08)
	int32_t DOVsCompleted; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct ATriggerBox* TriggerBox4_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x2e0(0x08)
	struct ADynamicObjectVolume* GobByTent_LOC_Guard_1_DOV_0_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x2e8(0x08)
	struct ADynamicObjectVolume* PercivalCourtyardFireStation_LOC_Guard_1_DOV_0_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x2f0(0x08)
	struct ADynamicObjectVolume* GobTentPatrol_LOC_Guard_1_DOV_0_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x2f8(0x08)
	struct ADynamicObjectVolume* GobSniperCourtyard_LOC_Guard_1_DOV_0_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x300(0x08)
	struct ADynamicObjectVolume* GobShiledCourtyard_LOC_Guard_1_DOV_0_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x308(0x08)
	struct ABP_OneWayDoor_Alohomora_C* BP_OneWayDoor_2_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x310(0x08)
	struct ATriggerBox* TriggerBox5_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x318(0x08)
	struct ATriggerBox* TriggerBox_1_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x320(0x08)
	struct ANone* BP_PerformTasksForAI_4_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x328(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume_4_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x330(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume7_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x338(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume10_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x340(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume12_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x348(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume13_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x350(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume14_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x358(0x08)
	struct ADynamicObjectVolume* GobFireKitchen_LOC_Guard_1_DOV_0_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x360(0x08)
	struct ANone* PT_FGT_CP1_A_Stage3_FigOpensTowerDoor_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x368(0x08)
	struct ATriggerVolume* FGT_EnemyCheck_ExecuteUbergraph_HN_AK_Mission_RefProperty; // 0x370(0x08)

	void EnemyDeadCheck(struct AActor* Volume, bool& Dead); // Function HN_AK_Mission.HN_AK_Mission_C.EnemyDeadCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HN_AK_Mission.HN_AK_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_11(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_AK_Mission.HN_AK_Mission_C.CustomEvent_11 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActorSpawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AK_Mission.HN_AK_Mission_C.ActorSpawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnemyTakeDamage(struct AActor* Target, struct AActor* Instigator, float Damage, struct FHitResult& Hit); // Function HN_AK_Mission.HN_AK_Mission_C.EnemyTakeDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnemyAggro(struct ANPC_Character* NPCChar); // Function HN_AK_Mission.HN_AK_Mission_C.EnemyAggro // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAllEnemiesDeadEvent(); // Function HN_AK_Mission.HN_AK_Mission_C.OnAllEnemiesDeadEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_AK_Mission.HN_AK_Mission_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_1(struct UScheduledEntity* ScheduledEntity); // Function HN_AK_Mission.HN_AK_Mission_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FGT_Goblin1_Spawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AK_Mission.HN_AK_Mission_C.FGT_Goblin1_Spawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FGT_Goblin2_Spawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AK_Mission.HN_AK_Mission_C.FGT_Goblin2_Spawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FGT_Goblin3_Spawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AK_Mission.HN_AK_Mission_C.FGT_Goblin3_Spawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GobByTent_Spawned_ForMissionVO(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AK_Mission.HN_AK_Mission_C.GobByTent_Spawned_ForMissionVO // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FireStationGob_Spawned_ForMissionVO(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AK_Mission.HN_AK_Mission_C.FireStationGob_Spawned_ForMissionVO // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StaircaseGob_Spawned_ForMissionVO(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AK_Mission.HN_AK_Mission_C.StaircaseGob_Spawned_ForMissionVO // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FGT_CourtyardGoblins_Dead(); // Function HN_AK_Mission.HN_AK_Mission_C.FGT_CourtyardGoblins_Dead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HN_AK_Mission_TriggerBox2_3_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_AK_Mission.HN_AK_Mission_C.BndEvt__HN_AK_Mission_TriggerBox2_3_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Updated FGT_01_CP1_A_Combat(struct UObject* Caller, struct FMissionID& MissionID); // Function HN_AK_Mission.HN_AK_Mission_C.Updated FGT_01_CP1_A_Combat // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Updated FGT_01_CP1_A(struct UObject* Caller, struct FMissionID& MissionID); // Function HN_AK_Mission.HN_AK_Mission_C.Updated FGT_01_CP1_A // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FGT_PT_FigOpensDoor_Started(struct APerformTasksForAI* InPerformTasksForAI); // Function HN_AK_Mission.HN_AK_Mission_C.FGT_PT_FigOpensDoor_Started // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FGT_AnyGoblin_Spawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AK_Mission.HN_AK_Mission_C.FGT_AnyGoblin_Spawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckAlive(); // Function HN_AK_Mission.HN_AK_Mission_C.CheckAlive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_2(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AK_Mission.HN_AK_Mission_C.CustomEvent_2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FGT_EnemyIntroFinished(struct UObject* Caller); // Function HN_AK_Mission.HN_AK_Mission_C.FGT_EnemyIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_AK_Mission(int32_t EntryPoint); // Function HN_AK_Mission.HN_AK_Mission_C.ExecuteUbergraph_HN_AK_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

