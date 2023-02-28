// BlueprintGeneratedClass BTT_Biped_Pickup.BTT_Biped_Pickup_C
// Size: 0x180 (Inherited: 0x150)
struct UBTT_Biped_Pickup_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct AActor* PickupTarget; // 0x158(0x08)
	struct FVector PickupTargetLocation; // 0x160(0x0c)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FHermesBPDelegateHandle WandDownHandle; // 0x170(0x10)

	void NotifyCollected(); // Function BTT_Biped_Pickup.BTT_Biped_Pickup_C.NotifyCollected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsCrouching(); // Function BTT_Biped_Pickup.BTT_Biped_Pickup_C.IsCrouching // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchBehavior(); // Function BTT_Biped_Pickup.BTT_Biped_Pickup_C.SwitchBehavior // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsRidingCreature(); // Function BTT_Biped_Pickup.BTT_Biped_Pickup_C.IsRidingCreature // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Pickup.BTT_Biped_Pickup_C.CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void WandDown(struct UObject* Caller); // Function BTT_Biped_Pickup.BTT_Biped_Pickup_C.WandDown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Pickup.BTT_Biped_Pickup_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Pickup.BTT_Biped_Pickup_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Pickup(int32_t EntryPoint); // Function BTT_Biped_Pickup.BTT_Biped_Pickup_C.ExecuteUbergraph_BTT_Biped_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

