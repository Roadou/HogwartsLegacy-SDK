// BlueprintGeneratedClass FO_AL_Mission.FO_AL_Mission_C
// Size: 0x270 (Inherited: 0x250)
struct AFO_AL_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ANiagaraActor* VFX_NS_CIN_Mooncalf_Pattern_Moonstone_SymbolGlow_2_ExecuteUbergraph_FO_AL_Mission_RefProperty; // 0x258(0x08)
	struct ANiagaraActor* VFX_NS_Mooncalf_Pattern_PostSR_InGame_5_ExecuteUbergraph_FO_AL_Mission_RefProperty; // 0x260(0x08)
	struct ASceneRigActor* SR_NTR_02_WalkToHenge_2_ExecuteUbergraph_FO_AL_Mission_RefProperty; // 0x268(0x08)

	void ReceiveBeginPlay(); // Function FO_AL_Mission.FO_AL_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Updated NTR_02_CP03(struct UObject* Caller, struct FMissionID& MissionID); // Function FO_AL_Mission.FO_AL_Mission_C.Updated NTR_02_CP03 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__FO_AL_Mission_TriggerBox_NTR02_WalkToHenge_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FO_AL_Mission.FO_AL_Mission_C.BndEvt__FO_AL_Mission_TriggerBox_NTR02_WalkToHenge_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void SRfinished(); // Function FO_AL_Mission.FO_AL_Mission_C.SRfinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_FO_AL_Mission(int32_t EntryPoint); // Function FO_AL_Mission.FO_AL_Mission_C.ExecuteUbergraph_FO_AL_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

