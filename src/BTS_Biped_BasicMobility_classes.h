// BlueprintGeneratedClass BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C
// Size: 0x111 (Inherited: 0xf8)
struct UBTS_Biped_BasicMobility_C : UBTService_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct AActor* Debug_SpawnedFaceTarget; // 0x100(0x08)
	struct AActor* Debug_SpawnedLookAtTarget; // 0x108(0x08)
	bool AltModifierPressed; // 0x110(0x01)

	void OnLoaded_809DC56944F42BE29C094A8145446EBA(struct UObject* Loaded); // Function BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.OnLoaded_809DC56944F42BE29C094A8145446EBA // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_BroomFlight_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.CustActionEvt_BroomFlight_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void GameLogicElementEvt_CollapseIntoRagdoll_K2Node_GameLogicBoolResultEvent_1(bool CachedResult); // Function BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.GameLogicElementEvt_CollapseIntoRagdoll_K2Node_GameLogicBoolResultEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ServiceEnd(struct AActor* OwnerActor); // Function BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.ServiceEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ServiceBegin(struct AActor* OwnerActor); // Function BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.ServiceBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MovementModeChanged(struct UObject* Caller); // Function BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_Biped_BasicMobility(int32_t EntryPoint); // Function BTS_Biped_BasicMobility.BTS_Biped_BasicMobility_C.ExecuteUbergraph_BTS_Biped_BasicMobility // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

