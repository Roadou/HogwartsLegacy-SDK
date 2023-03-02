// BlueprintGeneratedClass HN_AN_Tech.HN_AN_Tech_C
// Size: 0x280 (Inherited: 0x250)
struct AHN_AN_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ADynamicObjectVolume* NamedAcromantulaVolume; // 0x258(0x08)
	struct AEnemy_Character* NamedSpiderEnemy; // 0x260(0x08)
	struct ADynamicObjectVolume* COM_30SpiderDOV_ExecuteUbergraph_HN_AN_Tech_RefProperty; // 0x268(0x08)
	struct ASceneRigActor* SR_COM_30_NamedAcromantulaIntro_6_ExecuteUbergraph_HN_AN_Tech_RefProperty; // 0x270(0x08)
	struct ATriggerBox* TriggerBox4_ExecuteUbergraph_HN_AN_Tech_RefProperty; // 0x278(0x08)

	void PlaybackComplete_2AD7AB7041C6DF230BEF579E3524166F(struct USceneRigPlayer* SceneRigPlayer); // Function HN_AN_Tech.HN_AN_Tech_C.PlaybackComplete_2AD7AB7041C6DF230BEF579E3524166F // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlaybackStarted_2AD7AB7041C6DF230BEF579E3524166F(struct USceneRigPlayer* SceneRigPlayer); // Function HN_AN_Tech.HN_AN_Tech_C.PlaybackStarted_2AD7AB7041C6DF230BEF579E3524166F // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerAssigned_2AD7AB7041C6DF230BEF579E3524166F(struct USceneRigPlayer* SceneRigPlayer); // Function HN_AN_Tech.HN_AN_Tech_C.PlayerAssigned_2AD7AB7041C6DF230BEF579E3524166F // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_30_Spider_Dead(); // Function HN_AN_Tech.HN_AN_Tech_C.COM_30_Spider_Dead // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Updated COM_31(struct UObject* Caller, struct FMissionID& MissionID); // Function HN_AN_Tech.HN_AN_Tech_C.Updated COM_31 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_2(struct AActor* SpawnedActor, struct FName& GroupName); // Function HN_AN_Tech.HN_AN_Tech_C.CustomEvent_2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HN_AN_Tech.HN_AN_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_3(struct AActor* SpawnedActor); // Function HN_AN_Tech.HN_AN_Tech_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HN_AN_Tech_TriggerBox4_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_AN_Tech.HN_AN_Tech_C.BndEvt__HN_AN_Tech_TriggerBox4_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_AN_Tech(int32_t EntryPoint); // Function HN_AN_Tech.HN_AN_Tech_C.ExecuteUbergraph_HN_AN_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

