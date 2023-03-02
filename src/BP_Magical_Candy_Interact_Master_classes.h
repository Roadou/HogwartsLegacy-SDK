// BlueprintGeneratedClass BP_Magical_Candy_Interact_Master.BP_Magical_Candy_Interact_Master_C
// Size: 0x324 (Inherited: 0x2f4)
struct ABP_Magical_Candy_Interact_Master_C : ABP_HW_PartialBody_Interaction_C {
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UNiagaraComponent* Niagara; // 0x300(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x308(0x08)
	struct TArray<struct ABP_HW_Candy_A_Pink_C*> Candy Spawned; // 0x310(0x10)
	int32_t totalnumber; // 0x320(0x04)

	void InteractionStarted(); // Function BP_Magical_Candy_Interact_Master.BP_Magical_Candy_Interact_Master_C.InteractionStarted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Magical_Candy_Interact_Master.BP_Magical_Candy_Interact_Master_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyCandy(); // Function BP_Magical_Candy_Interact_Master.BP_Magical_Candy_Interact_Master_C.DestroyCandy // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Magical_Candy_Interact_Master(int32_t EntryPoint); // Function BP_Magical_Candy_Interact_Master.BP_Magical_Candy_Interact_Master_C.ExecuteUbergraph_BP_Magical_Candy_Interact_Master // (Final|UbergraphFunction) // @ game+0x38a7480
};

