// BlueprintGeneratedClass BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C
// Size: 0x319 (Inherited: 0x248)
struct ABP_MissionGiver_VO_Trigger_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UTextRenderComponent* TextRender; // 0x250(0x08)
	struct UBoxComponent* Box; // 0x258(0x08)
	struct UStaticMeshComponent* VOTrigger; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	enum class E_Hog_CamTriggerShape TriggerShape; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	struct FCharacterName VO_Actor; // 0x274(0x08)
	bool PlayerInTrigger; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct FDialogueConversationReference HailDialogueReference; // 0x280(0x10)
	int32_t Hail Repeat; // 0x290(0x04)
	bool RepeatWhileInTrigger; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	float RepeatMinDelay; // 0x298(0x04)
	float RepeatMaxDelay; // 0x29c(0x04)
	struct AActor* DialogueSpeakingActor; // 0x2a0(0x08)
	bool TriggerVisibleInGame; // 0x2a8(0x01)
	bool PlayOnExit; // 0x2a9(0x01)
	bool TriggerActive; // 0x2aa(0x01)
	char pad_2AB[0x1]; // 0x2ab(0x01)
	float UpdateSwitchDelay; // 0x2ac(0x04)
	struct FMissionID Mission ID; // 0x2b0(0x08)
	struct FDialogueConversationReference UpdateDialogueRef; // 0x2b8(0x10)
	float HailStartDelay; // 0x2c8(0x04)
	int32_t UpdateRepeat; // 0x2cc(0x04)
	float UpdateVOStartDelay; // 0x2d0(0x04)
	float 1time delay; // 0x2d4(0x04)
	struct TSoftObjectPtr<ABP_MissionEntryPoint_C> MEP Reference; // 0x2d8(0x28)
	bool Allow Repeat on Re-enter; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct FString ReturnStep; // 0x308(0x10)
	bool MuteWhenMissionGossipMuted; // 0x318(0x01)

	void MissionMuteCheck(bool& Play); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.MissionMuteCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HailDialogComplete(); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.HailDialogComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayHailVO(); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.PlayHailVO // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void PlayHailVORepeat(); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.PlayHailVORepeat // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PlayUpdateVO(); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.PlayUpdateVO // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayUpdateVORepeat(); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.PlayUpdateVORepeat // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateVOComplete(); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.UpdateVOComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchToUpdateVO(); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.SwitchToUpdateVO // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PLayed Hail(); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.PLayed Hail // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MissionGiver_VO_Trigger(int32_t EntryPoint); // Function BP_MissionGiver_VO_Trigger.BP_MissionGiver_VO_Trigger_C.ExecuteUbergraph_BP_MissionGiver_VO_Trigger // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

