// BlueprintGeneratedClass BTT_Biped_Talk.BTT_Biped_Talk_C
// Size: 0x2d0 (Inherited: 0x150)
struct UBTT_Biped_Talk_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct FMulticastInlineDelegate StartConversation; // 0x158(0x10)
	struct AActor* Interaction Target; // 0x168(0x08)
	struct UUI_BP_OptionPanel_C* Panel Reference; // 0x170(0x08)
	struct FMulticastInlineDelegate ButtonClicked; // 0x178(0x10)
	struct TArray<struct UUI_BP_InteractButton_C*> Button_Array; // 0x188(0x10)
	struct AActor* Player_Actor Reference; // 0x198(0x08)
	struct FMulticastInlineDelegate Interaction_Event; // 0x1a0(0x10)
	bool Continue; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct FMulticastInlineDelegate Start_Mission_Conversation; // 0x1b8(0x10)
	struct FString Mission_ConversationID; // 0x1c8(0x10)
	int32_t MissionMenuNodeID; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct UUIManager* UI_Manager; // 0x1e0(0x08)
	struct FName TargetActorDBId; // 0x1e8(0x08)
	int32_t MissionTextCount; // 0x1f0(0x04)
	char Conversation_Flags; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	struct UBlackboardComponent* Blackboard; // 0x1f8(0x08)
	struct FHermesBPDelegateHandle RadiantHandle; // 0x200(0x10)
	bool RadiantMission; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct UUI_BP_Vendor_C* VendorWidget; // 0x218(0x08)
	bool PassiveSceneRig; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct USceneRigPlayer* Conversation_SceneRig; // 0x228(0x08)
	struct UUserWidget* OnScreenWidget; // 0x230(0x08)
	bool Conversation_Started; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct TArray<struct FConversationOption> ConversationOptions; // 0x240(0x10)
	struct FHermesBPDelegateHandle SceneRigUpdateMsgHandle; // 0x250(0x10)
	struct TArray<struct FString> AudioConversationNames; // 0x260(0x10)
	bool CurrentlyExtorting; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FString TopItemForSpeakingIntroLine; // 0x278(0x10)
	bool Missions; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct USceneRigPlayer* PreviousConvSceneRig; // 0x290(0x08)
	struct TArray<struct AActor*> AdditionalSpecifiedActors; // 0x298(0x10)
	struct USocialReactor* SocialReactor; // 0x2a8(0x08)
	struct AActor* PlayerProxy; // 0x2b0(0x08)
	bool AudioConversations; // 0x2b8(0x01)
	bool AutomatedMode; // 0x2b9(0x01)
	bool SkipLineSocial; // 0x2ba(0x01)
	char pad_2BB[0x5]; // 0x2bb(0x05)
	struct TArray<struct FString> SkipConversationOptionsArray; // 0x2c0(0x10)

	void AreConversationOptionsNeeded(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.AreConversationOptionsNeeded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FString Player Gender Fixup(struct FString OptionText); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.Player Gender Fixup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOnAbilities(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.TurnOnAbilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOffAbilties(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.TurnOffAbilties // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowWand(struct UObject* Player, bool ShowWand); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.ShowWand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleSceneRigStart(struct UObject* SRPlayerObjectRef); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.HandleSceneRigStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivatePlayerPerception(bool PlayerPerception); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.ActivatePlayerPerception // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopSceneRigIfPlaying(struct USceneRigPlayer* SceneRigPlayer); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.StopSceneRigIfPlaying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetAudioConversationOptions(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.GetAudioConversationOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CleanupBlackboard(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.CleanupBlackboard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PrepareandStartConversation(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.PrepareandStartConversation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddWidgetToScreen(struct UUserWidget* ScreenToAdd); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.AddWidgetToScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IconLookup(enum class EAvaAudioDialogueMenuItemType ConversationIcon, enum class UI_BP_InteractTypeEnum ChatPanelIcon, bool ChatIcon, struct FString& Icon); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.IconLookup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Y_CancelConversation_Setup(struct UObject* Conversation_SceneRig); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.Y_CancelConversation_Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleRadiantMissionInfo(struct UObject* Caller, struct FString Message, struct FString CurrentMission); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.HandleRadiantMissionInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HasMission(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.HasMission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CleanupUIState(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.CleanupUIState // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CompanionSelection(struct UUI_BP_InteractButton_C* Selection); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.CompanionSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowVendorUI(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.ShowVendorUI // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartGearPreview(struct FString PreviewedGearID); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.StartGearPreview // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndGearPreview(struct FString PreviewedGearID); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.EndGearPreview // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VendorUIClosed(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.VendorUIClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Conversation Dialogue Line Complete(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.Conversation Dialogue Line Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelectionMade(int32_t SelectionIndex); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.SelectionMade // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Conversation_Node_Property:MSG_UI(struct UObject* Caller, struct FString String); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.Conversation_Node_Property:MSG_UI // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AbortTask(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.AbortTask // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AbortInteraction(struct UObject* Caller); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.AbortInteraction // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interaction_ChoiceMade_Event(int32_t SelectedIndex); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.Interaction_ChoiceMade_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartInteraction_Event(struct AActor* Actor Reference); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.StartInteraction_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeferStoppingPreviousSceneRig(bool IsCritical); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.DeferStoppingPreviousSceneRig // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FreePlayerFromSceneRig(struct UObject* Caller); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.FreePlayerFromSceneRig // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStationInteractionExitComplete_Event_1(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.OnStationInteractionExitComplete_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CONV_UpdateActiveSceneRig(struct UObject* Caller); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.CONV_UpdateActiveSceneRig // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Talk(int32_t EntryPoint); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.ExecuteUbergraph_BTT_Biped_Talk // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Start_Mission_Conversation__DelegateSignature(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.Start_Mission_Conversation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interaction_Event__DelegateSignature(struct UUI_BP_InteractButton_C* ClickedButton); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.Interaction_Event__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ButtonClicked__DelegateSignature(); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.ButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartConversation__DelegateSignature(struct AActor* Actor Reference); // Function BTT_Biped_Talk.BTT_Biped_Talk_C.StartConversation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

