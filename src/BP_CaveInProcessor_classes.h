// BlueprintGeneratedClass BP_CaveInProcessor.BP_CaveInProcessor_C
// Size: 0x298 (Inherited: 0x248)
struct ABP_CaveInProcessor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct FSTR_CaveInElement Element; // 0x258(0x28)
	struct UStaticMeshComponent* CurrentMesh; // 0x280(0x08)
	struct TArray<struct UStaticMeshComponent*> PhysicsMeshes; // 0x288(0x10)

	void ProcessElement(struct FSTR_CaveInElement InputElement); // Function BP_CaveInProcessor.BP_CaveInProcessor_C.ProcessElement // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CaveInProcessor(int32_t EntryPoint); // Function BP_CaveInProcessor.BP_CaveInProcessor_C.ExecuteUbergraph_BP_CaveInProcessor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

