// BlueprintGeneratedClass BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C
// Size: 0x180 (Inherited: 0x150)
struct UBTT_DeathlyHallows_Action_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct UParticleSystemComponent* EmitterComponent; // 0x158(0x08)
	struct FVariantMapHandle VariantMapHandle; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct ABP_DH_Item_C* InteractActor; // 0x168(0x08)
	struct FName ItemType; // 0x170(0x08)
	struct ABP_Cloak_Prop_C* PropActor; // 0x178(0x08)

	void UseCloak(); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.UseCloak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EquipCloak(); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.EquipCloak // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EquipWand(); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.EquipWand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EquipStone(); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.EquipStone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInteractActor(); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.SetInteractActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeathlyHallowsSetup(); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.DeathlyHallowsSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_DeathlyHallows_Action(int32_t EntryPoint); // Function BTT_DeathlyHallows_Action.BTT_DeathlyHallows_Action_C.ExecuteUbergraph_BTT_DeathlyHallows_Action // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

