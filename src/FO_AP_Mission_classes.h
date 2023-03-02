// BlueprintGeneratedClass FO_AP_Mission.FO_AP_Mission_C
// Size: 0x278 (Inherited: 0x250)
struct AFO_AP_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct AActor* MamaDragon; // 0x258(0x08)
	struct ASceneRigActor* SceneRigActor_NTR_DragonIntro_ExecuteUbergraph_FO_AP_Mission_RefProperty; // 0x260(0x08)
	struct ATargetPoint* Dragon_AttackPoint_1_ExecuteUbergraph_FO_AP_Mission_RefProperty; // 0x268(0x08)
	struct ASceneRigActor* SR_NTR_01_EndTunnel_2_ExecuteUbergraph_FO_AP_Mission_RefProperty; // 0x270(0x08)

	void ReceiveBeginPlay(); // Function FO_AP_Mission.FO_AP_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DragonIntroFinished(); // Function FO_AP_Mission.FO_AP_Mission_C.DragonIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCurtainRaised_Event_1(); // Function FO_AP_Mission.FO_AP_Mission_C.OnCurtainRaised_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Updated NTR_01_CP02(struct UObject* Caller, struct FMissionID& MissionID); // Function FO_AP_Mission.FO_AP_Mission_C.Updated NTR_01_CP02 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__FO_AP_Mission_TriggerBox_NTR_TunnelVO_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FO_AP_Mission.FO_AP_Mission_C.BndEvt__FO_AP_Mission_TriggerBox_NTR_TunnelVO_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_FO_AP_Mission(int32_t EntryPoint); // Function FO_AP_Mission.FO_AP_Mission_C.ExecuteUbergraph_FO_AP_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

