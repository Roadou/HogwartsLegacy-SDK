// BlueprintGeneratedClass BP_S_BagContainer.BP_S_BagContainer_C
// Size: 0x3c5 (Inherited: 0x2b0)
struct ABP_S_BagContainer_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct ULootDropComponent* LootDrop; // 0x2b8(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2c8(0x08)
	struct UAkComponent* NewVar_1; // 0x2d0(0x08)
	enum class EEnvironment Environment; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	int32_t PropIndex; // 0x2dc(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x2e0(0x50)
	bool AutoSelectLoot; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FMulticastInlineDelegate onBagEmpty; // 0x338(0x10)
	bool BagEmpty; // 0x348(0x01)
	bool Compiled List; // 0x349(0x01)
	char pad_34A[0x2]; // 0x34a(0x02)
	struct FRandomStream Random Seed; // 0x34c(0x08)
	char pad_354[0x4]; // 0x354(0x04)
	struct TSoftObjectPtr<UStaticMesh> OpenedBagMesh; // 0x358(0x28)
	struct TSoftObjectPtr<UStaticMesh> ClosedMesh; // 0x380(0x28)
	struct UStaticMesh* LoadedOpenedMesh; // 0x3a8(0x08)
	struct UStaticMesh* LoadedClosedMesh; // 0x3b0(0x08)
	struct FVector SavedLinearVelocity; // 0x3b8(0x0c)
	bool SavedSimulatePhysics; // 0x3c4(0x01)

	void UserConstructionScript(); // Function BP_S_BagContainer.BP_S_BagContainer_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_7E28B5E6437622A54BEC36AB24E49C42(struct UObject* Loaded); // Function BP_S_BagContainer.BP_S_BagContainer_C.OnLoaded_7E28B5E6437622A54BEC36AB24E49C42 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_F2E9B2D244606875283867BCBE5D873B(struct UObject* Loaded); // Function BP_S_BagContainer.BP_S_BagContainer_C.OnLoaded_F2E9B2D244606875283867BCBE5D873B // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_S_BagContainer.BP_S_BagContainer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_S_BagContainer.BP_S_BagContainer_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(struct UObject* i_caller); // Function BP_S_BagContainer.BP_S_BagContainer_C.BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CloseContainer(struct UObject* Caller); // Function BP_S_BagContainer.BP_S_BagContainer_C.CloseContainer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Perceived_Interact(struct UObject* Caller); // Function BP_S_BagContainer.BP_S_BagContainer_C.Perceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NoLongerPerceived_Interact(struct UObject* Caller); // Function BP_S_BagContainer.BP_S_BagContainer_C.NoLongerPerceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckLoot(); // Function BP_S_BagContainer.BP_S_BagContainer_C.CheckLoot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SavePhysics(); // Function BP_S_BagContainer.BP_S_BagContainer_C.SavePhysics // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RestorePhysics(); // Function BP_S_BagContainer.BP_S_BagContainer_C.RestorePhysics // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_S_BagContainer(int32_t EntryPoint); // Function BP_S_BagContainer.BP_S_BagContainer_C.ExecuteUbergraph_BP_S_BagContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void onBagEmpty__DelegateSignature(); // Function BP_S_BagContainer.BP_S_BagContainer_C.onBagEmpty__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

