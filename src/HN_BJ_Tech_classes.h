// BlueprintGeneratedClass HN_BJ_Tech.HN_BJ_Tech_C
// Size: 0x328 (Inherited: 0x250)
struct AHN_BJ_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TArray<enum class AmbientChatterTopicIDs> Topics Pool; // 0x258(0x10)
	struct ANonCombat_Character* Target; // 0x268(0x08)
	struct TMap<struct FName, struct FDynamicObjectGroupInfo> Spawn Groups; // 0x270(0x50)
	struct ABP_Station_CustomGardenPlow_1p_C* BP_Station_CustomGardenPlow_1p19_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x2c0(0x08)
	struct ABP_StationCustom_Gardening_Kneeling_1p_C* BP_StationCustom_Gardening_Kneeling_1p3_2_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x2c8(0x08)
	struct ANone* BP_Station_Stand_Gardening_Rack_1p_2_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x2d0(0x08)
	struct ABP_Station_CustomGardenPlow_1p_C* BP_Station_CustomGardenPlow_1p3_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x2d8(0x08)
	struct ABP_StationCustom_Gardening_Kneeling_1p_C* BP_StationCustom_Gardening_Kneeling_1p2_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x2e0(0x08)
	struct ABP_Station_CustomGardenPlow_1p_C* BP_Station_CustomGardenPlow_1p_2_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x2e8(0x08)
	struct ABP_StationCustom_Gardening_Kneeling_1p_C* BP_StationCustom_Gardening_Kneeling_1p_2_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x2f0(0x08)
	struct ABP_Station_CustomGardenPlow_1p_C* BP_Station_CustomGardenPlow_1p2_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x2f8(0x08)
	struct ANone* BP_StationCustom_GlaciousFan_1p_2_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x300(0x08)
	struct ABP_StandStation_LookingAt_4p_C* BP_StandStation_LookingAt_4p7_2_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x308(0x08)
	struct ABP_Stand4PFriendlyConvoStation_C* BP_Stand4PFriendlyConvoStation2_2_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x310(0x08)
	struct ABP_Stand4PStation_C* BP_Stand4PStation2_2_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x318(0x08)
	struct ABP_StationCustom_Gardening_Kneeling_1p_C* BP_StationCustom_Gardening_Kneeling_1p9_ExecuteUbergraph_HN_BJ_Tech_RefProperty; // 0x320(0x08)

	void BndEvt__HN_BJ_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_BJ_Tech.HN_BJ_Tech_C.BndEvt__HN_BJ_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HN_BJ_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_BJ_Tech.HN_BJ_Tech_C.BndEvt__HN_BJ_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HN_BJ_Tech.HN_BJ_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void NTR_03_Updated(struct UObject* Caller, struct FName& String); // Function HN_BJ_Tech.HN_BJ_Tech_C.NTR_03_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_BJ_Tech(int32_t EntryPoint); // Function HN_BJ_Tech.HN_BJ_Tech_C.ExecuteUbergraph_HN_BJ_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

