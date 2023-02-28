// BlueprintGeneratedClass BP_LibrarySecretDoor.BP_LibrarySecretDoor_C
// Size: 0x2b0 (Inherited: 0x248)
struct ABP_LibrarySecretDoor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x250(0x08)
	struct UAkComponent* Ak_BP_LibrarySecretDoor; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268(0x08)
	struct UStaticMeshComponent* SM_HW_BT_OwlcoveSecret_Door1; // 0x270(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	float Timeline_0_NewTrack_0_CD9567594FA2266FA951CF85AE70535E; // 0x288(0x04)
	enum class ETimelineDirection Timeline_0__Direction_CD9567594FA2266FA951CF85AE70535E; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x290(0x08)
	struct FRotator InitialRot; // 0x298(0x0c)
	bool IsOpen; // 0x2a4(0x01)
	bool IsMoving; // 0x2a5(0x01)
	char pad_2A6[0x2]; // 0x2a6(0x02)
	struct AAkAcousticPortal* Acoustic Portal; // 0x2a8(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_LibrarySecretDoor.BP_LibrarySecretDoor_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_LibrarySecretDoor.BP_LibrarySecretDoor_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_LibrarySecretDoor.BP_LibrarySecretDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_LibrarySecretDoor.BP_LibrarySecretDoor_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Open(); // Function BP_LibrarySecretDoor.BP_LibrarySecretDoor_C.Open // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_LibrarySecretDoor.BP_LibrarySecretDoor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_LibrarySecretDoor(int32_t EntryPoint); // Function BP_LibrarySecretDoor.BP_LibrarySecretDoor_C.ExecuteUbergraph_BP_LibrarySecretDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

