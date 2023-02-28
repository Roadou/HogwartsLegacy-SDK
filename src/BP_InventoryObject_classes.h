// BlueprintGeneratedClass BP_InventoryObject.BP_InventoryObject_C
// Size: 0x350 (Inherited: 0x330)
struct ABP_InventoryObject_C : AInventoryObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x338(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x340(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x348(0x08)

	void NewFunction_1(bool NewParam); // Function BP_InventoryObject.BP_InventoryObject_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_InventoryObject.BP_InventoryObject_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void NotifyPickedUp(struct FName ItemId, int32_t ItemCount); // Function BP_InventoryObject.BP_InventoryObject_C.NotifyPickedUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Perceived_Interact(struct UObject* Caller); // Function BP_InventoryObject.BP_InventoryObject_C.Perceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NoLongerPerceived_Interact(struct UObject* Caller); // Function BP_InventoryObject.BP_InventoryObject_C.NoLongerPerceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_InventoryObject(int32_t EntryPoint); // Function BP_InventoryObject.BP_InventoryObject_C.ExecuteUbergraph_BP_InventoryObject // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

