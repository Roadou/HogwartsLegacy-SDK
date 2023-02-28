// BlueprintGeneratedClass BTT_InteractWithStation.BTT_InteractWithStation_C
// Size: 0x190 (Inherited: 0x150)
struct UBTT_InteractWithStation_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct UStationComponent* StationComponent; // 0x158(0x08)
	struct UUIManager* UIManager; // 0x160(0x08)
	struct UUI_BP_Station_Social_Interaction_C* Station_UI; // 0x168(0x08)
	struct FStationQueryData StationData; // 0x170(0x20)

	void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_InteractWithStation.BTT_InteractWithStation_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_InteractWithStation.BTT_InteractWithStation_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StationInteractionExit(struct UObject* Caller); // Function BTT_InteractWithStation.BTT_InteractWithStation_C.StationInteractionExit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StationInteractionComplete(struct UObject* Caller); // Function BTT_InteractWithStation.BTT_InteractWithStation_C.StationInteractionComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_InteractWithStation.BTT_InteractWithStation_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_InteractWithStation(int32_t EntryPoint); // Function BTT_InteractWithStation.BTT_InteractWithStation_C.ExecuteUbergraph_BTT_InteractWithStation // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

