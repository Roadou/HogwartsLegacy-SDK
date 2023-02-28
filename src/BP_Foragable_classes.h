// BlueprintGeneratedClass BP_Foragable.BP_Foragable_C
// Size: 0x2ed (Inherited: 0x2c0)
struct ABP_Foragable_C : AForagable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2d0(0x08)
	struct FName CharacterID; // 0x2d8(0x08)
	int32_t Delta; // 0x2e0(0x04)
	struct FName InventoryItem; // 0x2e4(0x08)
	bool bIsPickedUp; // 0x2ec(0x01)

	struct FName GetItemID(); // Function BP_Foragable.BP_Foragable_C.GetItemID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	int32_t GetItemCount(); // Function BP_Foragable.BP_Foragable_C.GetItemCount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void AddToInventory(bool& Success); // Function BP_Foragable.BP_Foragable_C.AddToInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Foragable.BP_Foragable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_Foragable.BP_Foragable_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ObjectPickedUp(struct UObject* Caller); // Function BP_Foragable.BP_Foragable_C.ObjectPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPickedUp(); // Function BP_Foragable.BP_Foragable_C.OnPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Perceived_Interact(struct UObject* Caller); // Function BP_Foragable.BP_Foragable_C.Perceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NoLongerPerceived_Interact(struct UObject* Caller); // Function BP_Foragable.BP_Foragable_C.NoLongerPerceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Foragable(int32_t EntryPoint); // Function BP_Foragable.BP_Foragable_C.ExecuteUbergraph_BP_Foragable // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

