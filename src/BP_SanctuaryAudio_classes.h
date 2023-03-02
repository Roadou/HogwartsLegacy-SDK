// BlueprintGeneratedClass BP_SanctuaryAudio.BP_SanctuaryAudio_C
// Size: 0x2a8 (Inherited: 0x248)
struct ABP_SanctuaryAudio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct TMap<enum class ESanctuaryIdentity, struct UAkAudioEvent*> IdentityStateEvents; // 0x258(0x50)

	void ReceiveBeginPlay(); // Function BP_SanctuaryAudio.BP_SanctuaryAudio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnLightingIdentityChanged(enum class ESanctuaryIdentity OldIdentity, enum class ESanctuaryIdentity NewIdentity); // Function BP_SanctuaryAudio.BP_SanctuaryAudio_C.OnLightingIdentityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LightingIdentityInitialized(struct UObject* Caller); // Function BP_SanctuaryAudio.BP_SanctuaryAudio_C.LightingIdentityInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SanctuaryAudio(int32_t EntryPoint); // Function BP_SanctuaryAudio.BP_SanctuaryAudio_C.ExecuteUbergraph_BP_SanctuaryAudio // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

