// BlueprintGeneratedClass BP_M_TreasureChest.BP_M_TreasureChest_C
// Size: 0x389 (Inherited: 0x2b0)
struct ABP_M_TreasureChest_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UChildActorComponent* BP_HM_HW_MappedItems_Marker; // 0x2b8(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x2c0(0x08)
	struct USkeletalMeshComponent* Chest; // 0x2c8(0x08)
	struct ULootDropComponent* LootDrop; // 0x2d0(0x08)
	struct USkeletalMeshComponent* Lock; // 0x2d8(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x2e0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2e8(0x08)
	float Timeline_1_CameraInfluenceWeightReverse_373E94514FC7EB12DDED2C8F6634AB7F; // 0x2f0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_373E94514FC7EB12DDED2C8F6634AB7F; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2f8(0x08)
	float Timeline_0_CameraInfluenceWeight_83AEA17C4C5A1914E5194FBC689C7637; // 0x300(0x04)
	enum class ETimelineDirection Timeline_0__Direction_83AEA17C4C5A1914E5194FBC689C7637; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct UTimelineComponent* Timeline_1; // 0x308(0x08)
	struct FMulticastInlineDelegate ChestOpened; // 0x310(0x10)
	enum class EEnvironment Environment; // 0x320(0x01)
	bool SimulatePhysics; // 0x321(0x01)
	bool LockOn?; // 0x322(0x01)
	bool PlayAnimation; // 0x323(0x01)
	bool bCustomAnimations; // 0x324(0x01)
	bool AutoSelectLoot; // 0x325(0x01)
	bool Env; // 0x326(0x01)
	bool Gain Knowledge On Open?; // 0x327(0x01)
	bool Auto Region Knowledge?; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FKnowledgeInfo Knowledge Card; // 0x330(0x30)
	bool Open; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FMulticastInlineDelegate ChestClosed; // 0x368(0x10)
	struct UCameraStackInfluenceHandle* TransitionCameraInfluence; // 0x378(0x08)
	struct UABP_GAC_TreasureChest_Master_C* AnimBP; // 0x380(0x08)
	bool HasTicked; // 0x388(0x01)

	void Unregister Camera Influence(); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.Unregister Camera Influence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RegisterCameraInfluence(); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.RegisterCameraInfluence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleKnowledgeGain(); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.HandleKnowledgeGain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OpenChest(struct UObject* Caller); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.OpenChest // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseChest(struct UObject* Caller); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.CloseChest // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CameraTransitionStart(struct UObject* Caller); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.CameraTransitionStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CameraTransitionEnd(struct UObject* Caller); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.CameraTransitionEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_M_TreasureChest(int32_t EntryPoint); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.ExecuteUbergraph_BP_M_TreasureChest // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void ChestClosed__DelegateSignature(); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.ChestClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChestOpened__DelegateSignature(); // Function BP_M_TreasureChest.BP_M_TreasureChest_C.ChestOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

