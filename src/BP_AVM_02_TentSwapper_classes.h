// BlueprintGeneratedClass BP_AVM_02_TentSwapper.BP_AVM_02_TentSwapper_C
// Size: 0x260 (Inherited: 0x248)
struct ABP_AVM_02_TentSwapper_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* ChildActorTent; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)

	void ReceiveBeginPlay(); // Function BP_AVM_02_TentSwapper.BP_AVM_02_TentSwapper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function BP_AVM_02_TentSwapper.BP_AVM_02_TentSwapper_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AVM_02_TentSwapper(int32_t EntryPoint); // Function BP_AVM_02_TentSwapper.BP_AVM_02_TentSwapper_C.ExecuteUbergraph_BP_AVM_02_TentSwapper // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

