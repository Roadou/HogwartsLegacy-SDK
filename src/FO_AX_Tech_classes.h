// BlueprintGeneratedClass FO_AX_Tech.FO_AX_Tech_C
// Size: 0x278 (Inherited: 0x250)
struct AFO_AX_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ABP_Overland_WoodBridge_C* BP_Overland_WoodBridge_2_ExecuteUbergraph_FO_AX_Tech_RefProperty; // 0x258(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume_NTR_wolf_ExecuteUbergraph_FO_AX_Tech_RefProperty; // 0x260(0x08)
	struct ASceneRigActor* CIV_NTR_01_01_SecondPerchedDragon_SR_2_ExecuteUbergraph_FO_AX_Tech_RefProperty; // 0x268(0x08)
	struct ABP_Mission_VOTrigger_C* BP_Mission_VOTrigger_NTR_brokenBridge_ExecuteUbergraph_FO_AX_Tech_RefProperty; // 0x270(0x08)

	void ReceiveBeginPlay(); // Function FO_AX_Tech.FO_AX_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ActorAffectedBySpell(struct UObject* Caller, struct FHitBySpellData& HitBySpell); // Function FO_AX_Tech.FO_AX_Tech_C.ActorAffectedBySpell // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Updated NTR_01_CP00(struct UObject* Caller, struct FMissionID& MissionID); // Function FO_AX_Tech.FO_AX_Tech_C.Updated NTR_01_CP00 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__FO_AX_Tech_TriggerBox_NTR_Dragon3Fly_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FO_AX_Tech.FO_AX_Tech_C.BndEvt__FO_AX_Tech_TriggerBox_NTR_Dragon3Fly_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Finished(); // Function FO_AX_Tech.FO_AX_Tech_C.Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_FO_AX_Tech(int32_t EntryPoint); // Function FO_AX_Tech.FO_AX_Tech_C.ExecuteUbergraph_FO_AX_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

