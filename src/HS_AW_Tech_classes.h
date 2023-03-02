// BlueprintGeneratedClass HS_AW_Tech.HS_AW_Tech_C
// Size: 0x2a8 (Inherited: 0x250)
struct AHS_AW_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TArray<enum class AmbientChatterTopicIDs> Topics Pool; // 0x258(0x10)
	struct ABP_Stand4PGossipStation_C* BP_Stand4PGossipStation2_4_ExecuteUbergraph_HS_AW_Tech_RefProperty; // 0x268(0x08)
	struct ASceneRigActor* CIN_FIG_01_Rackham_Pensieve_1A_A_SR_2_ExecuteUbergraph_HS_AW_Tech_RefProperty; // 0x270(0x08)
	struct ASceneRigActor* CIN_EVT_Isidora_Pensieve_4_B_SR_8_ExecuteUbergraph_HS_AW_Tech_RefProperty; // 0x278(0x08)
	struct ABP_Station_CustomGardenPlow_1p_C* BP_Station_CustomGardenPlow_1p4_ExecuteUbergraph_HS_AW_Tech_RefProperty; // 0x280(0x08)
	struct ANone* BP_Station_CustomChickenFeed_1p_2_ExecuteUbergraph_HS_AW_Tech_RefProperty; // 0x288(0x08)
	struct ABP_Station_CustomGardenPlow_1p_C* BP_Station_CustomGardenPlow_1p2_2_ExecuteUbergraph_HS_AW_Tech_RefProperty; // 0x290(0x08)
	struct ABP_Station_CustomGardenPlow_1p_C* BP_Station_CustomGardenPlow_1p3_ExecuteUbergraph_HS_AW_Tech_RefProperty; // 0x298(0x08)
	struct ANone* BP_StationDrinkTea2_2_ExecuteUbergraph_HS_AW_Tech_RefProperty; // 0x2a0(0x08)

	void ReceiveBeginPlay(); // Function HS_AW_Tech.HS_AW_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void EVL_02_Updated(struct UObject* Caller, struct FName& String); // Function HS_AW_Tech.HS_AW_Tech_C.EVL_02_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVL_03_Updated(struct UObject* Caller, struct FName& String); // Function HS_AW_Tech.HS_AW_Tech_C.EVL_03_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AW_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HS_AW_Tech.HS_AW_Tech_C.BndEvt__HS_AW_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AW_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HS_AW_Tech.HS_AW_Tech_C.BndEvt__HS_AW_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CIN_FIG_01_Rackham_Pensieve_1A_A(); // Function HS_AW_Tech.HS_AW_Tech_C.CIN_FIG_01_Rackham_Pensieve_1A_A // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CIN_EVT_Isidora_Pensieve_4_B(); // Function HS_AW_Tech.HS_AW_Tech_C.CIN_EVT_Isidora_Pensieve_4_B // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AW_Tech(int32_t EntryPoint); // Function HS_AW_Tech.HS_AW_Tech_C.ExecuteUbergraph_HS_AW_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

