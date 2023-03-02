// BlueprintGeneratedClass BP_Barrels.BP_Barrels_C
// Size: 0x2c4 (Inherited: 0x248)
struct ABP_Barrels_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Mesh; // 0x250(0x08)
	struct UObjectStateComponent* ObjectState; // 0x258(0x08)
	int32_t PropIndex; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x268(0x50)
	bool CompiledList; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	struct FRandomStream Random Seed; // 0x2bc(0x08)

	void UserConstructionScript(); // Function BP_Barrels.BP_Barrels_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Barrels.BP_Barrels_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Barrels(int32_t EntryPoint); // Function BP_Barrels.BP_Barrels_C.ExecuteUbergraph_BP_Barrels // (Final|UbergraphFunction) // @ game+0x38a7480
};

