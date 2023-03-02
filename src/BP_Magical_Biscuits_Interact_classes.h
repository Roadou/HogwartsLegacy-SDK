// BlueprintGeneratedClass BP_Magical_Biscuits_Interact.BP_Magical_Biscuits_Interact_C
// Size: 0x348 (Inherited: 0x324)
struct ABP_Magical_Biscuits_Interact_C : ABP_Magical_Candy_Interact_Master_C {
	char pad_324[0x4]; // 0x324(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UStaticMeshComponent* SM_Biscuit_Bowl; // 0x330(0x08)
	struct UStaticMeshComponent* SM_Candy_Bowl_Glass_Inside_A; // 0x338(0x08)
	struct UStaticMeshComponent* SM_Candy_Bowl_Glass_A; // 0x340(0x08)

	void BndEvt__BP_Magical_Biscuits_Interact_Niagara_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function BP_Magical_Biscuits_Interact.BP_Magical_Biscuits_Interact_C.BndEvt__BP_Magical_Biscuits_Interact_Niagara_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Magical_Biscuits_Interact(int32_t EntryPoint); // Function BP_Magical_Biscuits_Interact.BP_Magical_Biscuits_Interact_C.ExecuteUbergraph_BP_Magical_Biscuits_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

