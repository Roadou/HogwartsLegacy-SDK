// BlueprintGeneratedClass HS_AW_Audio.HS_AW_Audio_C
// Size: 0x261 (Inherited: 0x250)
struct AHS_AW_Audio_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	bool FeldcroftMusicPlaying; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	int32_t FeldcroftMusic; // 0x25c(0x04)
	bool PlayerInFeldcroft; // 0x260(0x01)

	void ReceiveBeginPlay(); // Function HS_AW_Audio.HS_AW_Audio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AW_Audio_TriggerVolume_AudioUse_Feldcroft_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HS_AW_Audio.HS_AW_Audio_C.BndEvt__HS_AW_Audio_TriggerVolume_AudioUse_Feldcroft_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HS_AW_Audio_TriggerVolume_AudioUse_Feldcroft_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HS_AW_Audio.HS_AW_Audio_C.BndEvt__HS_AW_Audio_TriggerVolume_AudioUse_Feldcroft_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AW_Audio(int32_t EntryPoint); // Function HS_AW_Audio.HS_AW_Audio_C.ExecuteUbergraph_HS_AW_Audio // (Final|UbergraphFunction) // @ game+0x38a7480
};

