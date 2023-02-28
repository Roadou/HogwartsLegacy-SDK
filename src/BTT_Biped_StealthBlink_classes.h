// BlueprintGeneratedClass BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C
// Size: 0x170 (Inherited: 0x150)
struct UBTT_Biped_StealthBlink_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	float invulnerableTime; // 0x158(0x04)
	bool IKRestoreState; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	struct UParticleSystemComponent* ShadowParticleEmitter; // 0x160(0x08)
	struct AActor* Victim; // 0x168(0x08)

	void DestroyShadowBlinkFX(); // Function BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.DestroyShadowBlinkFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateShadowBlinkFX(); // Function BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.CreateShadowBlinkFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FallingTest(bool& Falling); // Function BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.FallingTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StealthBlinkTimerExpired(); // Function BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.StealthBlinkTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_StealthBlink(int32_t EntryPoint); // Function BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.ExecuteUbergraph_BTT_Biped_StealthBlink // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

