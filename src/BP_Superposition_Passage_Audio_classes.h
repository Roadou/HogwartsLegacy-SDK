// BlueprintGeneratedClass BP_Superposition_Passage_Audio.BP_Superposition_Passage_Audio_C
// Size: 0x308 (Inherited: 0x2c1)
struct ABP_Superposition_Passage_Audio_C : ABP_WE_Superposition_Experience_C {
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UBoxComponent* PassageAudioTriggerBox; // 0x2d0(0x08)
	int32_t MaxSoundEffectsToPlay; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FTimerHandle PlayAudioTimeHandler; // 0x2e0(0x08)
	struct TArray<struct UAkAudioEvent*> SoundEffects; // 0x2e8(0x10)
	float PlayAudioEventDelay; // 0x2f8(0x04)
	float MinAudioPlayDelay; // 0x2fc(0x04)
	float MaxAudioPlayDelay; // 0x300(0x04)
	int32_t PlayCounter; // 0x304(0x04)

	void OnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Superposition_Passage_Audio.BP_Superposition_Passage_Audio_C.OnEndOverlap // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Superposition_Passage_Audio.BP_Superposition_Passage_Audio_C.OnBeginOverlap // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayAudio(); // Function BP_Superposition_Passage_Audio.BP_Superposition_Passage_Audio_C.PlayAudio // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Uninitialise(); // Function BP_Superposition_Passage_Audio.BP_Superposition_Passage_Audio_C.Uninitialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialise(); // Function BP_Superposition_Passage_Audio.BP_Superposition_Passage_Audio_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Superposition_Passage_Audio.BP_Superposition_Passage_Audio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Superposition_Passage_Audio.BP_Superposition_Passage_Audio_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Superposition_Passage_Audio(int32_t EntryPoint); // Function BP_Superposition_Passage_Audio.BP_Superposition_Passage_Audio_C.ExecuteUbergraph_BP_Superposition_Passage_Audio // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

