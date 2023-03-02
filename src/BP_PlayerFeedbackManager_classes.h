// BlueprintGeneratedClass BP_PlayerFeedbackManager.BP_PlayerFeedbackManager_C
// Size: 0x284 (Inherited: 0x248)
struct ABP_PlayerFeedbackManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct UBillboardComponent* Billboard; // 0x258(0x08)
	struct UMatineeCameraShake* CameraShake; // 0x260(0x08)
	struct FBTCustomAction Player Reaction; // 0x268(0x0c)
	float Delay; // 0x274(0x04)
	struct UForceFeedbackEffect* Rumble Effect; // 0x278(0x08)
	float Rumble Intensity Multiplier; // 0x280(0x04)

	void SwitchOff(struct AActor* SwitchActor); // Function BP_PlayerFeedbackManager.BP_PlayerFeedbackManager_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_PlayerFeedbackManager.BP_PlayerFeedbackManager_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PlayerFeedbackManager(int32_t EntryPoint); // Function BP_PlayerFeedbackManager.BP_PlayerFeedbackManager_C.ExecuteUbergraph_BP_PlayerFeedbackManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

