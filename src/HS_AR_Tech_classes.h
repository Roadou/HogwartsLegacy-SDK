// BlueprintGeneratedClass HS_AR_Tech.HS_AR_Tech_C
// Size: 0x2c0 (Inherited: 0x250)
struct AHS_AR_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TArray<enum class AmbientChatterTopicIDs> Topics Pool; // 0x258(0x10)
	struct ABP_StandStation_LookingAt_4p_C* BP_StandStation_LookingAt_4p6_ExecuteUbergraph_HS_AR_Tech_RefProperty; // 0x268(0x08)
	struct ADynamicObjectVolume* DOV_NamedEnemy_Wolf_1_ExecuteUbergraph_HS_AR_Tech_RefProperty; // 0x270(0x08)
	struct ADynamicObjectVolume* DOV_NamedEnemy_Wolf_2_ExecuteUbergraph_HS_AR_Tech_RefProperty; // 0x278(0x08)
	struct ANone* BP_StationDrinkTea_2_ExecuteUbergraph_HS_AR_Tech_RefProperty; // 0x280(0x08)
	struct ABP_StandStation_LookingAt_4p_C* BP_StandStation_LookingAt_4p3_8_ExecuteUbergraph_HS_AR_Tech_RefProperty; // 0x288(0x08)
	struct ABP_StandStation_LookingAt_4p_C* BP_StandStation_LookingAt_4p2_2_ExecuteUbergraph_HS_AR_Tech_RefProperty; // 0x290(0x08)
	struct ANone* BP_StationDrinkTea2_2_ExecuteUbergraph_HS_AR_Tech_RefProperty; // 0x298(0x08)
	struct ABP_StandStation_LookingAt_4p_C* BP_StandStation_LookingAt_4p4_11_ExecuteUbergraph_HS_AR_Tech_RefProperty; // 0x2a0(0x08)
	struct ANone* BP_StationDrinkTea4_8_ExecuteUbergraph_HS_AR_Tech_RefProperty; // 0x2a8(0x08)
	struct ABP_StandStation_LookingAt_4p_C* BP_StandStation_LookingAt_4p5_14_ExecuteUbergraph_HS_AR_Tech_RefProperty; // 0x2b0(0x08)
	struct ABP_Stand4PStation_C* BP_Stand4PStation_2_ExecuteUbergraph_HS_AR_Tech_RefProperty; // 0x2b8(0x08)

	void BndEvt__HS_AR_Tech_HAM_Keenbridge__K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HS_AR_Tech.HS_AR_Tech_C.BndEvt__HS_AR_Tech_HAM_Keenbridge__K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AR_Tech_HAM_Keenbridge__K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HS_AR_Tech.HS_AR_Tech_C.BndEvt__HS_AR_Tech_HAM_Keenbridge__K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HS_AR_Tech.HS_AR_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AR_Tech_DOV_NamedEnemy_Wolves_K2Node_ActorBoundEvent_2_AllEnemiesDeadEvent__DelegateSignature(); // Function HS_AR_Tech.HS_AR_Tech_C.BndEvt__HS_AR_Tech_DOV_NamedEnemy_Wolves_K2Node_ActorBoundEvent_2_AllEnemiesDeadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AR_Tech_DOV_NamedEnemy_Wolf_2_K2Node_ActorBoundEvent_3_AllEnemiesDeadEvent__DelegateSignature(); // Function HS_AR_Tech.HS_AR_Tech_C.BndEvt__HS_AR_Tech_DOV_NamedEnemy_Wolf_2_K2Node_ActorBoundEvent_3_AllEnemiesDeadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AR_Tech(int32_t EntryPoint); // Function HS_AR_Tech.HS_AR_Tech_C.ExecuteUbergraph_HS_AR_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

