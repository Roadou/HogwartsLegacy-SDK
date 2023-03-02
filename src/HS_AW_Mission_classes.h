// BlueprintGeneratedClass HS_AW_Mission.HS_AW_Mission_C
// Size: 0x2a0 (Inherited: 0x250)
struct AHS_AW_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume; // 0x258(0x08)
	struct ABP_QuestItem_EVL_Conv_08_AnneNote_C* BP_QuestItem_EVL_Conv_08_AnneNote_2_ExecuteUbergraph_HS_AW_Mission_RefProperty; // 0x260(0x08)
	struct AStaticMeshActor* SM_HW_DirtFill_A2_ExecuteUbergraph_HS_AW_Mission_RefProperty; // 0x268(0x08)
	struct AStaticMeshActor* SM_HW_DirtFill_A_22_ExecuteUbergraph_HS_AW_Mission_RefProperty; // 0x270(0x08)
	struct AStaticMeshActor* SM_S_FlowerD2_27_ExecuteUbergraph_HS_AW_Mission_RefProperty; // 0x278(0x08)
	struct AStaticMeshActor* SM_HM_Gravestone_A_4_ExecuteUbergraph_HS_AW_Mission_RefProperty; // 0x280(0x08)
	struct AStaticMeshActor* SM_HM_Light_Post_Flowers_42_ExecuteUbergraph_HS_AW_Mission_RefProperty; // 0x288(0x08)
	struct AStaticMeshActor* SM_GroundFlowers_A_39_ExecuteUbergraph_HS_AW_Mission_RefProperty; // 0x290(0x08)
	struct ABP_Mission_VOTrigger_C* BP_Mission_VOTrigger_COM_17_ExecuteUbergraph_HS_AW_Mission_RefProperty; // 0x298(0x08)

	void BndEvt__HS_AW_Mission_TriggerBox_PRC_RanRookStartTrigger_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HS_AW_Mission.HS_AW_Mission_C.BndEvt__HS_AW_Mission_TriggerBox_PRC_RanRookStartTrigger_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HS_AW_Mission.HS_AW_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void COM_17_Updated(struct UObject* Caller, struct FName& String); // Function HS_AW_Mission.HS_AW_Mission_C.COM_17_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AW_Mission(int32_t EntryPoint); // Function HS_AW_Mission.HS_AW_Mission_C.ExecuteUbergraph_HS_AW_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

