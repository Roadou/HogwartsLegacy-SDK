// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// Size: 0x68 (Inherited: 0x38)
struct UAnimNotify_AkEvent_C : UAnimNotify {
	struct FString Attach Name; // 0x38(0x10)
	struct UAkAudioEvent* Event; // 0x48(0x08)
	bool Follow; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString EventName; // 0x58(0x10)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
};

