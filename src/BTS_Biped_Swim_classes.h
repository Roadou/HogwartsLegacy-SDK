// BlueprintGeneratedClass BTS_Biped_Swim.BTS_Biped_Swim_C
// Size: 0x148 (Inherited: 0xf8)
struct UBTS_Biped_Swim_C : UBTService_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct FTransform TargetTransform; // 0x100(0x30)
	float RiseDelay; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FHermesBPDelegateHandle MovementModeChangedHandle; // 0x138(0x10)

	void PlaySwimAbility(); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.PlaySwimAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SwimDive_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_SwimDive_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Teleport_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_Teleport_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Protego_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_Protego_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void MovementModeChanged(struct UObject* Caller); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ServiceEnd(struct AActor* OwnerActor); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.ServiceEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void LeafNodeSwitched(); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.LeafNodeSwitched // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ServiceBegin(struct AActor* OwnerActor); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.ServiceBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_Biped_Swim(int32_t EntryPoint); // Function BTS_Biped_Swim.BTS_Biped_Swim_C.ExecuteUbergraph_BTS_Biped_Swim // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

