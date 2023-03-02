// BlueprintGeneratedClass BP_LevelChange.BP_LevelChange_C
// Size: 0x2e8 (Inherited: 0x248)
struct ABP_LevelChange_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x250(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct TSoftObjectPtr<UWorld> LevelToLoad; // 0x270(0x28)
	struct FString PlayerStartTag; // 0x298(0x10)
	bool RequiresInteract; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct ALevelSequenceActor* Fade Sequence; // 0x2b0(0x08)
	bool UseFade; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct FString StartPointTag; // 0x2c0(0x10)
	bool UseCustomStartPosString; // 0x2d0(0x01)
	bool PauseTileStreaming; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct FString CustomStartPosString; // 0x2d8(0x10)

	void ReceiveBeginPlay(); // Function BP_LevelChange.BP_LevelChange_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ChangeLevel(); // Function BP_LevelChange.BP_LevelChange_C.ChangeLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_LevelChange.BP_LevelChange_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_LevelChange.BP_LevelChange_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_LevelChange.BP_LevelChange_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_LevelChange.BP_LevelChange_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_LevelChange(int32_t EntryPoint); // Function BP_LevelChange.BP_LevelChange_C.ExecuteUbergraph_BP_LevelChange // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

