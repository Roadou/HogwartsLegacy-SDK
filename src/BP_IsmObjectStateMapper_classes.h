// BlueprintGeneratedClass BP_IsmObjectStateMapper.BP_IsmObjectStateMapper_C
// Size: 0x278 (Inherited: 0x248)
struct ABP_IsmObjectStateMapper_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x258(0x08)
	struct UInstancedStaticMeshComponent* ISMComponent; // 0x260(0x08)
	struct UIsmDestructionManager* ISM Destruction Manager; // 0x268(0x08)
	struct UDataTable* ObjectDataTable; // 0x270(0x08)

	void ReceiveBeginPlay(); // Function BP_IsmObjectStateMapper.BP_IsmObjectStateMapper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_IsmObjectStateMapper(int32_t EntryPoint); // Function BP_IsmObjectStateMapper.BP_IsmObjectStateMapper_C.ExecuteUbergraph_BP_IsmObjectStateMapper // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

