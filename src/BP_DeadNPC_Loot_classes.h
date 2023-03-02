// BlueprintGeneratedClass BP_DeadNPC_Loot.BP_DeadNPC_Loot_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_DeadNPC_Loot_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UBoxComponent* Box; // 0x2b8(0x08)
	struct ULootDropComponent* LootDrop; // 0x2c0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d0(0x08)

	void ReceiveBeginPlay(); // Function BP_DeadNPC_Loot.BP_DeadNPC_Loot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetSpecificLoot(int32_t NoteIndex); // Function BP_DeadNPC_Loot.BP_DeadNPC_Loot_C.SetSpecificLoot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_DeadNPC_Loot_LootDrop_K2Node_ComponentBoundEvent_0_OnInventoryUpdated__DelegateSignature(struct UObject* i_caller); // Function BP_DeadNPC_Loot.BP_DeadNPC_Loot_C.BndEvt__BP_DeadNPC_Loot_LootDrop_K2Node_ComponentBoundEvent_0_OnInventoryUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DeadNPC_Loot(int32_t EntryPoint); // Function BP_DeadNPC_Loot.BP_DeadNPC_Loot_C.ExecuteUbergraph_BP_DeadNPC_Loot // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

