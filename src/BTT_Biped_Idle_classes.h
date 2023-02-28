// BlueprintGeneratedClass BTT_Biped_Idle.BTT_Biped_Idle_C
// Size: 0x17a (Inherited: 0x150)
struct UBTT_Biped_Idle_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	bool StickPressed; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	float DesiredWorldSpeed; // 0x15c(0x04)
	struct FVector DesiredWorldDirection; // 0x160(0x0c)
	float StickPressMinTime; // 0x16c(0x04)
	float StickReleaseMinTime; // 0x170(0x04)
	float StickReleasedTime; // 0x174(0x04)
	bool StickPressedLoop; // 0x178(0x01)
	bool StickReleasedLoop; // 0x179(0x01)

	void Stop(struct AAmbulatory_Character* AmbulatoryCharacter); // Function BTT_Biped_Idle.BTT_Biped_Idle_C.Stop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteWorldStartAbility(); // Function BTT_Biped_Idle.BTT_Biped_Idle_C.ExecuteWorldStartAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Idle.BTT_Biped_Idle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Idle.BTT_Biped_Idle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Idle.BTT_Biped_Idle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Idle.BTT_Biped_Idle_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Idle.BTT_Biped_Idle_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_Idle.BTT_Biped_Idle_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void LeafNodeSwitchRequested(); // Function BTT_Biped_Idle.BTT_Biped_Idle_C.LeafNodeSwitchRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Idle(int32_t EntryPoint); // Function BTT_Biped_Idle.BTT_Biped_Idle_C.ExecuteUbergraph_BTT_Biped_Idle // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

