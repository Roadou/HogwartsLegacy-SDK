// BlueprintGeneratedClass BTT_Biped_OpenChest.BTT_Biped_OpenChest_C
// Size: 0x188 (Inherited: 0x150)
struct UBTT_Biped_OpenChest_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct AActor* LootableContainer; // 0x158(0x08)
	struct FVector PlayerLocation; // 0x160(0x0c)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x170(0x08)
	struct UCognitionStimuliSourceComponent* CogStimuliSource; // 0x178(0x08)
	struct ULootDropComponent* LootDrop; // 0x180(0x08)

	void SetAvatarTickPrerequisite(bool SetPrerequisite); // Function BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.SetAvatarTickPrerequisite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CalculateLocation(struct UObject* Chest, struct UObject* Biped, struct UTargetTracker*& FacingTarget, struct FRotator& Rotation, struct FVector& Location, struct FVector& Direction); // Function BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.CalculateLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ShowLootUI_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.CustActionEvt_ShowLootUI_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_OpenChest_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.CustActionEvt_OpenChest_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void LootUIDone(struct UObject* Caller); // Function BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.LootUIDone // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_OpenChest(int32_t EntryPoint); // Function BTT_Biped_OpenChest.BTT_Biped_OpenChest_C.ExecuteUbergraph_BTT_Biped_OpenChest // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

