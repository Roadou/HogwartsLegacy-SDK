// BlueprintGeneratedClass BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C
// Size: 0x310 (Inherited: 0x2b0)
struct ABP_WO_SeekDiveSpot_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UChildActorComponent* BP_SeekDiveSpot_Marker; // 0x2b8(0x08)
	struct ULootDropComponent* LootDrop; // 0x2c0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c8(0x08)
	struct UAkComponent* Ak_BP_WO_SeekDiveSpot; // 0x2d0(0x08)
	struct UNiagaraComponent* Niagara; // 0x2d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e0(0x08)
	float RippleIntensity; // 0x2e8(0x04)
	float RippleRadius; // 0x2ec(0x04)
	float RippleFrequency; // 0x2f0(0x04)
	float DiveDuration; // 0x2f4(0x04)
	bool LootCollected; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FString SaveDataName; // 0x300(0x10)

	void CheckPlayerMovementMode(); // Function BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.CheckPlayerMovementMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StopAudio(); // Function BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.StopAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MovementModeChanged(struct UObject* Caller); // Function BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WO_SeekDiveSpot(int32_t EntryPoint); // Function BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.ExecuteUbergraph_BP_WO_SeekDiveSpot // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

