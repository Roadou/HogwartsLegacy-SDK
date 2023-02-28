// BlueprintGeneratedClass BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C
// Size: 0x161 (Inherited: 0x150)
struct UBTT_Biped_SlipAndFall_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct UAmbulatory_MovementComponent* AmbulatoryMovementComponent; // 0x158(0x08)
	enum class EPhysicalSurface CurrentSurfaceType; // 0x160(0x01)

	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Landed_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_SlipAndFall(int32_t EntryPoint); // Function BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C.ExecuteUbergraph_BTT_Biped_SlipAndFall // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

