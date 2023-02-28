// BlueprintGeneratedClass BP_ConversationMenuAction.BP_ConversationMenuAction_C
// Size: 0x114 (Inherited: 0xa8)
struct UBP_ConversationMenuAction_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct UUI_BP_OptionPanel_C* OptionPanel; // 0xb0(0x08)
	struct AActor* OwningActor; // 0xb8(0x08)
	struct FDialogueSequenceReference DialogueSequence; // 0xc0(0x20)
	struct TArray<struct FName> BranchIDs; // 0xe0(0x10)
	bool IsCancellable; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct UTimeRigPlayer* OwningSRPlayer; // 0xf8(0x08)
	struct FString TranslatedLastLine; // 0x100(0x10)
	int32_t OptionCount; // 0x110(0x04)

	void RemoveAllSubtitles(); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.RemoveAllSubtitles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetDialogueSequenceReference(struct UObject* Caller, struct FDialogueSequenceReference& OutReference); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.GetDialogueSequenceReference // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void CreateConversationOptions(struct UObject* Caller, struct TArray<struct FConversationOption>& outConversationOptions, struct TArray<struct FName>& OutBranchIDs, struct FName& LastLineID); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.CreateConversationOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FLinearColor GetActionColor(); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.GetActionColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool IsProxyRequiredBP(); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.IsProxyRequiredBP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void OnCreate(struct UObject* ActionState); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.OnCreate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOptionSelected(int32_t OptionIndex); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.OnOptionSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMenuCancelled(); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.OnMenuCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ConversationMenuAction(int32_t EntryPoint); // Function BP_ConversationMenuAction.BP_ConversationMenuAction_C.ExecuteUbergraph_BP_ConversationMenuAction // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

