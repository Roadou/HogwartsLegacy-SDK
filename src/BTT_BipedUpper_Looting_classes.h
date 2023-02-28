// BlueprintGeneratedClass BTT_BipedUpper_Looting.BTT_BipedUpper_Looting_C
// Size: 0x158 (Inherited: 0x150)
struct UBTT_BipedUpper_Looting_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)

	bool IsCrouching(); // Function BTT_BipedUpper_Looting.BTT_BipedUpper_Looting_C.IsCrouching // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_BipedUpper_Looting.BTT_BipedUpper_Looting_C.CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_BipedUpper_Looting.BTT_BipedUpper_Looting_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_BipedUpper_Looting.BTT_BipedUpper_Looting_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_BipedUpper_Looting(int32_t EntryPoint); // Function BTT_BipedUpper_Looting.BTT_BipedUpper_Looting_C.ExecuteUbergraph_BTT_BipedUpper_Looting // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

