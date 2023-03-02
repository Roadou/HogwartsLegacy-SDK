// BlueprintGeneratedClass Castle_Chepstow_Tech.Castle_Chepstow_Tech_C
// Size: 0x328 (Inherited: 0x250)
struct ACastle_Chepstow_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ALevelSequenceActor* FadeSequence; // 0x258(0x08)
	struct AActor* Goblin1; // 0x260(0x08)
	struct AActor* Goblin2; // 0x268(0x08)
	struct AEnemy_Character* GoblinSniper; // 0x270(0x08)
	bool EnemyIntroHasPlayed; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct AEnemy_Character* DWTank; // 0x280(0x08)
	bool DWEnemyIntroHasPlayed; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct ATargetPoint* TargetPoint_1_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x290(0x08)
	struct ABP_OneWayDoor_C* BP_OneWayDoor_2_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x298(0x08)
	struct ADynamicObjectVolume* GobsOutside_LOC_Guard_1_DOV_1_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2a0(0x08)
	struct ADynamicObjectVolume* GobsOutside_LOC_Guard_1_DOV_2_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2a8(0x08)
	struct APerceptionPointBox* PerceptionPointBox_PRC_PreCIN_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2b0(0x08)
	struct ADynamicObjectVolume* DOV_Chepstow_Goblin_Sniper_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2b8(0x08)
	struct ADynamicObjectVolume* DOV_Chepstow_DW_Wave1_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2c0(0x08)
	struct ADynamicObjectVolume* ChepstowGoblinsOnMission_LOC_Guard_1_DOV_0_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2c8(0x08)
	struct ABP_TriggerVolume_C* BP_TriggerVolume2_2_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2d0(0x08)
	struct ABP_AutosaveTrigger_C* ChepstowBaseEnemies_AutoSave_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2d8(0x08)
	struct ACombatVolume* CombatVolumeBaseEnemies_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2e0(0x08)
	struct ADynamicObjectVolume* ChepstowOffMissionNamedGob_LOC_Guard_1_DOV_0_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2e8(0x08)
	struct ASceneRigActor* CIV_PRC_01_GoblinConversation_SR_2_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2f0(0x08)
	struct ADynamicObjectVolume* CastleGapGuard_LOC_Guard_1_DOV_0_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x2f8(0x08)
	struct ADynamicObjectVolume* ChepstowSniperGobsOffMission_LOC_Guard_1_DOV_0_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x300(0x08)
	struct ADynamicObjectVolume* ChepstowGobsOffMission2_LOC_Guard_1_DOV_0_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x308(0x08)
	struct ASceneRigActor* CIN_PRC_01_GoblinSniper_Intro_2_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x310(0x08)
	struct ASceneRigActor* CIN_PRC_01_DWTank_Intro_2_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x318(0x08)
	struct ADynamicObjectVolume* DOV_Chepstow_DWTank_ExecuteUbergraph_Castle_Chepstow_Tech_RefProperty; // 0x320(0x08)

	void PlaybackComplete_3FC56219472FAB985A722383C03D99DC(struct USceneRigPlayer* SceneRigPlayer); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.PlaybackComplete_3FC56219472FAB985A722383C03D99DC // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaybackStarted_3FC56219472FAB985A722383C03D99DC(struct USceneRigPlayer* SceneRigPlayer); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.PlaybackStarted_3FC56219472FAB985A722383C03D99DC // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerAssigned_3FC56219472FAB985A722383C03D99DC(struct USceneRigPlayer* SceneRigPlayer); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.PlayerAssigned_3FC56219472FAB985A722383C03D99DC // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaybackComplete_B9E4FEFF4AEFD7EF94E5708DF6304E5A(struct USceneRigPlayer* SceneRigPlayer); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.PlaybackComplete_B9E4FEFF4AEFD7EF94E5708DF6304E5A // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaybackStarted_B9E4FEFF4AEFD7EF94E5708DF6304E5A(struct USceneRigPlayer* SceneRigPlayer); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.PlaybackStarted_B9E4FEFF4AEFD7EF94E5708DF6304E5A // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerAssigned_B9E4FEFF4AEFD7EF94E5708DF6304E5A(struct USceneRigPlayer* SceneRigPlayer); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.PlayerAssigned_B9E4FEFF4AEFD7EF94E5708DF6304E5A // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaybackComplete_F56565B644153DFA0FA4919036588F99(struct USceneRigPlayer* SceneRigPlayer); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.PlaybackComplete_F56565B644153DFA0FA4919036588F99 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaybackStarted_F56565B644153DFA0FA4919036588F99(struct USceneRigPlayer* SceneRigPlayer); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.PlaybackStarted_F56565B644153DFA0FA4919036588F99 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerAssigned_F56565B644153DFA0FA4919036588F99(struct USceneRigPlayer* SceneRigPlayer); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.PlayerAssigned_F56565B644153DFA0FA4919036588F99 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Chepstow_Tech_TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.BndEvt__Castle_Chepstow_Tech_TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PRC_01_CP1_Crtyd_Updated(struct UObject* Caller, struct FName& String); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.PRC_01_CP1_Crtyd_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnActorSpawnedEvent_Event_1(struct AActor* SpawnedActor, struct FName& GroupName); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.OnActorSpawnedEvent_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnActorSpawnedEvent_Event_2(struct AActor* SpawnedActor, struct FName& GroupName); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.OnActorSpawnedEvent_Event_2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Chepstow_Tech_TriggerSphere1_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.BndEvt__Castle_Chepstow_Tech_TriggerSphere1_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Chepstow_Tech_TriggerBox_PRC_GloblinSniperIntro_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.BndEvt__Castle_Chepstow_Tech_TriggerBox_PRC_GloblinSniperIntro_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AW_Mission_TriggerBox_PRC_FigRemark_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.BndEvt__HS_AW_Mission_TriggerBox_PRC_FigRemark_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Chepstow_Tech_ChepstowOffMissionNamedGob_LOC_Guard_1_DOV_0_K2Node_ActorBoundEvent_5_AllEnemiesDeadEvent__DelegateSignature(); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.BndEvt__Castle_Chepstow_Tech_ChepstowOffMissionNamedGob_LOC_Guard_1_DOV_0_K2Node_ActorBoundEvent_5_AllEnemiesDeadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_2(struct AActor* SpawnedActor, struct FName& GroupName); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.CustomEvent_2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_3(struct AActor* SpawnedActor); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct AActor* SpawnedActor, struct FName& GroupName); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.CustomEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_4(struct AActor* SpawnedActor); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.CustomEvent_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Chepstow_Tech_BP_TriggerVolume2_2_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.BndEvt__Castle_Chepstow_Tech_BP_TriggerVolume2_2_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PRC_CombatSetup(struct UObject* Caller); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.PRC_CombatSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_Castle_Chepstow_Tech(int32_t EntryPoint); // Function Castle_Chepstow_Tech.Castle_Chepstow_Tech_C.ExecuteUbergraph_Castle_Chepstow_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

