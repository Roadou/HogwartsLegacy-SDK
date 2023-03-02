// BlueprintGeneratedClass HS_AY_Tech.HS_AY_Tech_C
// Size: 0x2d8 (Inherited: 0x250)
struct AHS_AY_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TArray<enum class AmbientChatterTopicIDs> Topics Pool; // 0x258(0x10)
	struct TArray<enum class AmbientChatterTopicIDs> Topics Pool_test; // 0x268(0x10)
	struct TArray<enum class AmbientChatterTopicIDs> Topics Pool_test_1; // 0x278(0x10)
	struct ABP_Station_Stand_Kid_Pickflowers_1P_C* BP_Station_Stand_Kid_Pickflowers_1P3_ExecuteUbergraph_HS_AY_Tech_RefProperty; // 0x288(0x08)
	struct ABP_StationCustom_PickFlowers_1p_C* BP_StationCustom_PickFlowers_1p_2_ExecuteUbergraph_HS_AY_Tech_RefProperty; // 0x290(0x08)
	struct ABP_Station_Stand_Kid_Pickflowers_1P_C* BP_Station_Stand_Kid_Pickflowers_1P2_2_ExecuteUbergraph_HS_AY_Tech_RefProperty; // 0x298(0x08)
	struct ANone* BP_Station_Stand_Kid_PretendBroomTakeoff_2P_2_ExecuteUbergraph_HS_AY_Tech_RefProperty; // 0x2a0(0x08)
	struct ANone* BP_StationDrinkTea3_2_ExecuteUbergraph_HS_AY_Tech_RefProperty; // 0x2a8(0x08)
	struct ABP_Station_Stand_Kid_Pickflowers_1P_C* BP_Station_Stand_Kid_Pickflowers_1P_2_ExecuteUbergraph_HS_AY_Tech_RefProperty; // 0x2b0(0x08)
	struct ABP_Station_CustomGardenPlow_1p_C* BP_Station_CustomGardenPlow_1p_2_ExecuteUbergraph_HS_AY_Tech_RefProperty; // 0x2b8(0x08)
	struct ANone* BP_StationDrinkTea4_5_ExecuteUbergraph_HS_AY_Tech_RefProperty; // 0x2c0(0x08)
	struct ABP_Stand4PFriendlyConvoStation_C* BP_Stand4PFriendlyConvoStation_2_ExecuteUbergraph_HS_AY_Tech_RefProperty; // 0x2c8(0x08)
	struct ABP_StationGroundSit4P_C* BP_StationGroundSit4P_2_ExecuteUbergraph_HS_AY_Tech_RefProperty; // 0x2d0(0x08)

	void BndEvt__HS_AY_Tech_ChatterTrigger_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HS_AY_Tech.HS_AY_Tech_C.BndEvt__HS_AY_Tech_ChatterTrigger_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AY_Tech_ChatterTrigger_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HS_AY_Tech.HS_AY_Tech_C.BndEvt__HS_AY_Tech_ChatterTrigger_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HS_AY_Tech.HS_AY_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AY_Tech(int32_t EntryPoint); // Function HS_AY_Tech.HS_AY_Tech_C.ExecuteUbergraph_HS_AY_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

