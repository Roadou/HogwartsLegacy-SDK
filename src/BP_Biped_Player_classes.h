// BlueprintGeneratedClass BP_Biped_Player.BP_Biped_Player_C
// Size: 0x3ee4 (Inherited: 0x3e50)
struct ABP_Biped_Player_C : ABiped_Player {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e50(0x08)
	struct UOverlapAudioComponent* OverlapAudio; // 0x3e58(0x08)
	struct UWaterInteractionComponent* WaterInteraction; // 0x3e60(0x08)
	struct UExtendedOdcRepulsorComponent* OdcRepulsor; // 0x3e68(0x08)
	struct UCameraStackComponent* CameraStack; // 0x3e70(0x08)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0x3e78(0x08)
	struct UBP_PlayerPerceptionPoint_C* PlayerPerceptionPoint; // 0x3e80(0x08)
	struct UWidget_DebugHUD_C* DebugWidget; // 0x3e88(0x08)
	struct UObject* InGameMenuReference; // 0x3e90(0x08)
	bool cloakVis; // 0x3e98(0x01)
	char pad_3E99[0x7]; // 0x3e99(0x07)
	struct UMaterialInstanceDynamic* jacketMAT; // 0x3ea0(0x08)
	bool TestingAsync; // 0x3ea8(0x01)
	char pad_3EA9[0x7]; // 0x3ea9(0x07)
	struct ABP_Avatar_Dynamic_LightRig_C* DynamicLightRigClass; // 0x3eb0(0x08)
	struct ADynamicCharacterLightRig* DynamicLightRig; // 0x3eb8(0x08)
	bool IsAttacking; // 0x3ec0(0x01)
	bool ChainAttack; // 0x3ec1(0x01)
	char pad_3EC2[0x2]; // 0x3ec2(0x02)
	int32_t Combo; // 0x3ec4(0x04)
	struct UAnimMontage* Combo_AllMontage; // 0x3ec8(0x08)
	bool LandscapeDebugActive; // 0x3ed0(0x01)
	char pad_3ED1[0x7]; // 0x3ed1(0x07)
	struct FTimerHandle LandscapeLogTimer; // 0x3ed8(0x08)
	bool Disable_alt_cast; // 0x3ee0(0x01)
	bool R3Pressed; // 0x3ee1(0x01)
	bool L2Pressed; // 0x3ee2(0x01)
	bool R1Pressed; // 0x3ee3(0x01)

	void AttachLightRig(bool Attach The Light Rig); // Function BP_Biped_Player.BP_Biped_Player_C.AttachLightRig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupDamageEffect(); // Function BP_Biped_Player.BP_Biped_Player_C.SetupDamageEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateDebugHUD(); // Function BP_Biped_Player.BP_Biped_Player_C.UpdateDebugHUD // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_7(struct FKey Key); // Function BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_6(struct FKey Key); // Function BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_LeftTrigger_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_5(struct FKey Key); // Function BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_RightShoulder_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_ThumbStickButtonRIght_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_CM_GamePad_DpadUp_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_Biped_Player.BP_Biped_Player_C.InpActEvt_CM_GamePad_DpadUp_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void OnBuffStatusApplied(struct FString SourceID, int32_t SlotNo, float Ticks); // Function BP_Biped_Player.BP_Biped_Player_C.OnBuffStatusApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBuffStatusRemoved(struct FString SourceID, int32_t SlotNo); // Function BP_Biped_Player.BP_Biped_Player_C.OnBuffStatusRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableDebug(); // Function BP_Biped_Player.BP_Biped_Player_C.DisableDebug // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableDebug(); // Function BP_Biped_Player.BP_Biped_Player_C.EnableDebug // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Toggle Debug(); // Function BP_Biped_Player.BP_Biped_Player_C.Toggle Debug // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Biped_Player.BP_Biped_Player_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitComplete(); // Function BP_Biped_Player.BP_Biped_Player_C.ExitComplete // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StationStoryEndedWithoutConsent(struct UStationComponent* InStationComponent); // Function BP_Biped_Player.BP_Biped_Player_C.StationStoryEndedWithoutConsent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Biped_Player(int32_t EntryPoint); // Function BP_Biped_Player.BP_Biped_Player_C.ExecuteUbergraph_BP_Biped_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

