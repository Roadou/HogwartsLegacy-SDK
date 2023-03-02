// BlueprintGeneratedClass FO_AU_Tech.FO_AU_Tech_C
// Size: 0x288 (Inherited: 0x250)
struct AFO_AU_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ACameraStackLookAtTargetActor* CameraStackLookAtTargetActor1_Puzzle4_2_ExecuteUbergraph_FO_AU_Tech_RefProperty; // 0x258(0x08)
	struct ATriggerVolume* TriggerVolume_Ledgelookat3_2_ExecuteUbergraph_FO_AU_Tech_RefProperty; // 0x260(0x08)
	struct ANone* BP_WindSpinner_2_ExecuteUbergraph_FO_AU_Tech_RefProperty; // 0x268(0x08)
	struct ADynamicObjectVolume* DOV_RatSpawn_CS_ExecuteUbergraph_FO_AU_Tech_RefProperty; // 0x270(0x08)
	struct ADynamicObjectVolume* DOV_RatSpawn_CS2_ExecuteUbergraph_FO_AU_Tech_RefProperty; // 0x278(0x08)
	struct ANone* BP_CampB_5m_Plank_Scaled_2_ExecuteUbergraph_FO_AU_Tech_RefProperty; // 0x280(0x08)

	void BndEvt__TriggerVolume_Ledgelookat7_K2Node_ActorBoundEvent_15_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FO_AU_Tech.FO_AU_Tech_C.BndEvt__TriggerVolume_Ledgelookat7_K2Node_ActorBoundEvent_15_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function FO_AU_Tech.FO_AU_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ActorHitBySpell(struct UObject* Caller, struct FHitBySpellData& HitBySpell); // Function FO_AU_Tech.FO_AU_Tech_C.ActorHitBySpell // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDestruct(struct AActor* DestroyedActor); // Function FO_AU_Tech.FO_AU_Tech_C.OnDestruct // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_FO_AU_Tech(int32_t EntryPoint); // Function FO_AU_Tech.FO_AU_Tech_C.ExecuteUbergraph_FO_AU_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

