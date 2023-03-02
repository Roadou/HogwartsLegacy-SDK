// BlueprintGeneratedClass FO_AP_Tech.FO_AP_Tech_C
// Size: 0x2a8 (Inherited: 0x250)
struct AFO_AP_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct AActor* SpawnedDragon; // 0x258(0x08)
	bool PlayEnemyVO; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct AActor* EnemyA; // 0x268(0x08)
	struct AActor* EnemyB; // 0x270(0x08)
	struct AActor* EnemyC; // 0x278(0x08)
	struct AActor* EnemyD; // 0x280(0x08)
	struct AActor* EnemyE; // 0x288(0x08)
	struct AActor* CurrentEnemy; // 0x290(0x08)
	struct ATargetPoint* Dragon_AttackPoint_3_ExecuteUbergraph_FO_AP_Tech_RefProperty; // 0x298(0x08)
	struct ATargetPoint* Dragon_AttackPoint_2_ExecuteUbergraph_FO_AP_Tech_RefProperty; // 0x2a0(0x08)

	void ReceiveBeginPlay(); // Function FO_AP_Tech.FO_AP_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerVolume_3_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FO_AP_Tech.FO_AP_Tech_C.BndEvt__TriggerVolume_3_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerVolume2_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FO_AP_Tech.FO_AP_Tech_C.BndEvt__TriggerVolume2_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerVolume3_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FO_AP_Tech.FO_AP_Tech_C.BndEvt__TriggerVolume3_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DragonAdvanceTrigger4_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FO_AP_Tech.FO_AP_Tech_C.BndEvt__DragonAdvanceTrigger4_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DragonAdvanceTrigger5_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FO_AP_Tech.FO_AP_Tech_C.BndEvt__DragonAdvanceTrigger5_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void MamaDragonSpawned(struct UObject* Caller, struct AActor* Actor); // Function FO_AP_Tech.FO_AP_Tech_C.MamaDragonSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__CaveEntranceTriggerVolume_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FO_AP_Tech.FO_AP_Tech_C.BndEvt__CaveEntranceTriggerVolume_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DragonAdvanceTrigger6_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function FO_AP_Tech.FO_AP_Tech_C.BndEvt__DragonAdvanceTrigger6_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void NTR_01_CP01_Updated(struct UObject* Caller, struct FName& String); // Function FO_AP_Tech.FO_AP_Tech_C.NTR_01_CP01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DialogueFinished(); // Function FO_AP_Tech.FO_AP_Tech_C.DialogueFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_FO_AP_Tech(int32_t EntryPoint); // Function FO_AP_Tech.FO_AP_Tech_C.ExecuteUbergraph_FO_AP_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

