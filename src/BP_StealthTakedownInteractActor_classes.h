// BlueprintGeneratedClass BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C
// Size: 0x269 (Inherited: 0x248)
struct ABP_StealthTakedownInteractActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct AEnemy_Character* AutoTargetEnemy; // 0x260(0x08)
	bool StealthAttackDisabled; // 0x268(0x01)

	void ReceiveTick(float DeltaSeconds); // Function BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Perceived_Interact(struct UObject* Caller); // Function BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C.Perceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NoLongerPerceived_Interact(struct UObject* Caller); // Function BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C.NoLongerPerceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StealthTakedownInteractActor(int32_t EntryPoint); // Function BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C.ExecuteUbergraph_BP_StealthTakedownInteractActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

