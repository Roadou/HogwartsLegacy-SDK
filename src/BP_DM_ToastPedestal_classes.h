// BlueprintGeneratedClass BP_DM_ToastPedestal.BP_DM_ToastPedestal_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_DM_ToastPedestal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Pedestal; // 0x250(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	bool ToastOn; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct ABP_DM_SquidDoors_C* Doors; // 0x270(0x08)
	struct FName BeaconID; // 0x278(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_DM_ToastPedestal.BP_DM_ToastPedestal_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DM_ToastPedestal.BP_DM_ToastPedestal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ToastState(bool Visible); // Function BP_DM_ToastPedestal.BP_DM_ToastPedestal_C.ToastState // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function BP_DM_ToastPedestal.BP_DM_ToastPedestal_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_DM_ToastPedestal.BP_DM_ToastPedestal_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdjustInventory(int32_t NewParam); // Function BP_DM_ToastPedestal.BP_DM_ToastPedestal_C.AdjustInventory // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerInventoryChanged(struct UObject* Caller, struct FInventoryResult& InventoryResult); // Function BP_DM_ToastPedestal.BP_DM_ToastPedestal_C.PlayerInventoryChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChangeText(bool Place); // Function BP_DM_ToastPedestal.BP_DM_ToastPedestal_C.ChangeText // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DM_ToastPedestal(int32_t EntryPoint); // Function BP_DM_ToastPedestal.BP_DM_ToastPedestal_C.ExecuteUbergraph_BP_DM_ToastPedestal // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

