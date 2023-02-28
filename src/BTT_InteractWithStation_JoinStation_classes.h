// BlueprintGeneratedClass BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C
// Size: 0x19c (Inherited: 0x150)
struct UBTT_InteractWithStation_JoinStation_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	enum class EMobilityActionState StartingMobilityActionState; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct UObject* StationActor; // 0x160(0x08)
	struct UStationComponent* StationComponent; // 0x168(0x08)
	struct UUIManager* UIManager; // 0x170(0x08)
	struct UUI_BP_Station_Social_Interaction_C* Station_UI; // 0x178(0x08)
	bool StickPressed; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	float DesiredWorldSpeed; // 0x184(0x04)
	struct FVector DesiredWorldDirection; // 0x188(0x0c)
	float StickReleasedTime; // 0x194(0x04)
	float StickMinTime; // 0x198(0x04)

	void LeaveStation(); // Function BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.LeaveStation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ResetGate(); // Function BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.ResetGate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitComplete(struct UObject* Caller); // Function BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.ExitComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_InteractWithStation_JoinStation(int32_t EntryPoint); // Function BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.ExecuteUbergraph_BTT_InteractWithStation_JoinStation // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

