// BlueprintGeneratedClass BTT_Biped_Listen.BTT_Biped_Listen_C
// Size: 0x159 (Inherited: 0x150)
struct UBTT_Biped_Listen_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	bool abortAnimUponExit; // 0x158(0x01)

	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Listen.BTT_Biped_Listen_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Listen.BTT_Biped_Listen_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Listen.BTT_Biped_Listen_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Listen(int32_t EntryPoint); // Function BTT_Biped_Listen.BTT_Biped_Listen_C.ExecuteUbergraph_BTT_Biped_Listen // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

