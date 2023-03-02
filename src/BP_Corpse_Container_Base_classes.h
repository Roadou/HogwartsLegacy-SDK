// BlueprintGeneratedClass BP_Corpse_Container_Base.BP_Corpse_Container_Base_C
// Size: 0x348 (Inherited: 0x2b0)
struct ABP_Corpse_Container_Base_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x2b8(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c0(0x08)
	struct ULootDropComponent* LootDrop; // 0x2c8(0x08)
	bool HasLoot; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FCalloutInformation InteractSettings; // 0x2d8(0x58)
	bool CollideWithPawn; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FMulticastInlineDelegate Looted; // 0x338(0x10)

	void UserConstructionScript(); // Function BP_Corpse_Container_Base.BP_Corpse_Container_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ANone* AutosaveActor); // Function BP_Corpse_Container_Base.BP_Corpse_Container_Base_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_Corpse_Container_Base.BP_Corpse_Container_Base_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Corpse_Container_Base.BP_Corpse_Container_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_Corpse_Container_Base_LootDrop_K2Node_ComponentBoundEvent_0_OnInventoryUpdated__DelegateSignature(struct UObject* i_caller); // Function BP_Corpse_Container_Base.BP_Corpse_Container_Base_C.BndEvt__BP_Corpse_Container_Base_LootDrop_K2Node_ComponentBoundEvent_0_OnInventoryUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ANone* AutosaveActor); // Function BP_Corpse_Container_Base.BP_Corpse_Container_Base_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableLoot(); // Function BP_Corpse_Container_Base.BP_Corpse_Container_Base_C.DisableLoot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Corpse_Container_Base(int32_t EntryPoint); // Function BP_Corpse_Container_Base.BP_Corpse_Container_Base_C.ExecuteUbergraph_BP_Corpse_Container_Base // (Final|UbergraphFunction) // @ game+0x38a7480
	void Looted__DelegateSignature(); // Function BP_Corpse_Container_Base.BP_Corpse_Container_Base_C.Looted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

