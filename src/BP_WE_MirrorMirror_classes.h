// BlueprintGeneratedClass BP_WE_MirrorMirror.BP_WE_MirrorMirror_C
// Size: 0x350 (Inherited: 0x280)
struct ABP_WE_MirrorMirror_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UDialogueComponent* Dialogue; // 0x288(0x08)
	struct UAkComponent* Ak_BP_WE_MirrorMirror_SoundPos; // 0x290(0x08)
	struct UBoxComponent* Close Col; // 0x298(0x08)
	struct UBoxComponent* Outer Col; // 0x2a0(0x08)
	struct UBipedStateComponent* BipedState; // 0x2a8(0x08)
	struct USkeletalMeshComponent* MirrorSK; // 0x2b0(0x08)
	struct USceneComponent* MirrorMirror; // 0x2b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c0(0x08)
	struct UAvaAudioDialogueEvent* DialogueEvent; // 0x2c8(0x08)
	bool Dialogue Active; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	int32_t Dialogue Handle; // 0x2d4(0x04)
	struct TArray<struct FAvaAudioPrepareDialogueSequenceResult> DialogueSequenceResults; // 0x2d8(0x10)
	struct TMap<struct FString, struct FString> DialogueParams; // 0x2e8(0x50)
	struct UABP_WE_MirrorMirror_C* ABP; // 0x338(0x08)
	struct FDialogueConversationReference Dialogue Event Name; // 0x340(0x10)

	void GetGenericDialogue(); // Function BP_WE_MirrorMirror.BP_WE_MirrorMirror_C.GetGenericDialogue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCloseDialogue(); // Function BP_WE_MirrorMirror.BP_WE_MirrorMirror_C.GetCloseDialogue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_MirrorMirror.BP_WE_MirrorMirror_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Outer Col_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_MirrorMirror.BP_WE_MirrorMirror_C.BndEvt__Outer Col_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Close Col_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_MirrorMirror.BP_WE_MirrorMirror_C.BndEvt__Close Col_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void AudioDialogueLineEndedData(struct UObject* Caller, struct FAudioDialogueLineData& AudioDialogueLineData); // Function BP_WE_MirrorMirror.BP_WE_MirrorMirror_C.AudioDialogueLineEndedData // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_MirrorMirror(int32_t EntryPoint); // Function BP_WE_MirrorMirror.BP_WE_MirrorMirror_C.ExecuteUbergraph_BP_WE_MirrorMirror // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

