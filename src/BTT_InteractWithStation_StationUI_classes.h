// BlueprintGeneratedClass BTT_InteractWithStation_StationUI.BTT_InteractWithStation_StationUI_C
// Size: 0x180 (Inherited: 0x150)
struct UBTT_InteractWithStation_StationUI_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	enum class EMobilityActionState StartingMobilityActionState; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct UObject* StationActor; // 0x160(0x08)
	struct UStationComponent* StationComponent; // 0x168(0x08)
	struct UUIManager* UIManager; // 0x170(0x08)
	struct UUI_BP_Station_Social_Interaction_C* Station_UI; // 0x178(0x08)

	void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_InteractWithStation_StationUI.BTT_InteractWithStation_StationUI_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_InteractWithStation_StationUI.BTT_InteractWithStation_StationUI_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_InteractWithStation_StationUI.BTT_InteractWithStation_StationUI_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_InteractWithStation_StationUI(int32_t EntryPoint); // Function BTT_InteractWithStation_StationUI.BTT_InteractWithStation_StationUI_C.ExecuteUbergraph_BTT_InteractWithStation_StationUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

