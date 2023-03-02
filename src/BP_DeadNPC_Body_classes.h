// BlueprintGeneratedClass BP_DeadNPC_Body.BP_DeadNPC_Body_C
// Size: 0x260 (Inherited: 0x248)
struct ABP_DeadNPC_Body_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Dead Body; // 0x250(0x08)
	struct UChildActorComponent* Loot; // 0x258(0x08)

	void Assign Loot Level(int32_t NewParam); // Function BP_DeadNPC_Body.BP_DeadNPC_Body_C.Assign Loot Level // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DeadNPC_Body(int32_t EntryPoint); // Function BP_DeadNPC_Body.BP_DeadNPC_Body_C.ExecuteUbergraph_BP_DeadNPC_Body // (Final|UbergraphFunction) // @ game+0x38a7480
};

