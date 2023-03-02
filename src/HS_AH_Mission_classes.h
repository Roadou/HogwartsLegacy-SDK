// BlueprintGeneratedClass HS_AH_Mission.HS_AH_Mission_C
// Size: 0x270 (Inherited: 0x250)
struct AHS_AH_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	int32_t NumberOfEVs; // 0x258(0x04)
	int32_t CompeltedEVs; // 0x25c(0x04)
	int32_t EnemiesDead; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct ANone* BP_BalloonGroup_2_ExecuteUbergraph_HS_AH_Mission_RefProperty; // 0x268(0x08)

	void BndEvt__HS_AH_Mission_HS_AH_INF01_D_LOC_Patrol_1_DOV_0_K2Node_ActorBoundEvent_0_AllEnemiesDeadEvent__DelegateSignature(); // Function HS_AH_Mission.HS_AH_Mission_C.BndEvt__HS_AH_Mission_HS_AH_INF01_D_LOC_Patrol_1_DOV_0_K2Node_ActorBoundEvent_0_AllEnemiesDeadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AH_Mission_HS_AH_INF01_A_LOC_Patrol_1_DOV_0_K2Node_ActorBoundEvent_1_AllEnemiesDeadEvent__DelegateSignature(); // Function HS_AH_Mission.HS_AH_Mission_C.BndEvt__HS_AH_Mission_HS_AH_INF01_A_LOC_Patrol_1_DOV_0_K2Node_ActorBoundEvent_1_AllEnemiesDeadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AH_Mission_HS_AH_INF01_C_LOC_Patrol_1_DOV_0_K2Node_ActorBoundEvent_3_AllEnemiesDeadEvent__DelegateSignature(); // Function HS_AH_Mission.HS_AH_Mission_C.BndEvt__HS_AH_Mission_HS_AH_INF01_C_LOC_Patrol_1_DOV_0_K2Node_ActorBoundEvent_3_AllEnemiesDeadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AH_Mission_HS_AH_BanditCamp_Exterior01_LOC_Patrol_1_DOV_0_K2Node_ActorBoundEvent_4_AllEnemiesDeadEvent__DelegateSignature(); // Function HS_AH_Mission.HS_AH_Mission_C.BndEvt__HS_AH_Mission_HS_AH_BanditCamp_Exterior01_LOC_Patrol_1_DOV_0_K2Node_ActorBoundEvent_4_AllEnemiesDeadEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HS_AH_Mission.HS_AH_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ZZM_01_Updated(struct UObject* Caller, struct FName& String); // Function HS_AH_Mission.HS_AH_Mission_C.ZZM_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AH_Mission(int32_t EntryPoint); // Function HS_AH_Mission.HS_AH_Mission_C.ExecuteUbergraph_HS_AH_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

