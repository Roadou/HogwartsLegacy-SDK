// BlueprintGeneratedClass BTT_BipedUpper_OpenDoor.BTT_BipedUpper_OpenDoor_C
// Size: 0x159 (Inherited: 0x150)
struct UBTT_BipedUpper_OpenDoor_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	bool LeftHand; // 0x158(0x01)

	void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_OpenDoor.BTT_BipedUpper_OpenDoor_C.CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_BipedUpper_OpenDoor.BTT_BipedUpper_OpenDoor_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_BipedUpper_OpenDoor.BTT_BipedUpper_OpenDoor_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_BipedUpper_OpenDoor(int32_t EntryPoint); // Function BTT_BipedUpper_OpenDoor.BTT_BipedUpper_OpenDoor_C.ExecuteUbergraph_BTT_BipedUpper_OpenDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

