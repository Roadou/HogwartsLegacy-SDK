// BlueprintGeneratedClass BTT_Biped_PotionStation.BTT_Biped_PotionStation_C
// Size: 0x195 (Inherited: 0x150)
struct UBTT_Biped_PotionStation_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct AActor* PotionStation; // 0x158(0x08)
	struct FVector PlayerToStation; // 0x160(0x0c)
	struct FRotator DesiredRotation; // 0x16c(0x0c)
	struct FVector Up; // 0x178(0x0c)
	float InterpSpeed; // 0x184(0x04)
	float RotationSpeed; // 0x188(0x04)
	float InterpPosSpeed; // 0x18c(0x04)
	float DistFromSite; // 0x190(0x04)
	bool ExitingStation; // 0x194(0x01)

	void SetDesiredRotation(struct AActor* Player); // Function BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.SetDesiredRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_PotionStation(int32_t EntryPoint); // Function BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.ExecuteUbergraph_BTT_Biped_PotionStation // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

