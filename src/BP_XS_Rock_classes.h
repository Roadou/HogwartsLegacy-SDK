// BlueprintGeneratedClass BP_XS_Rock.BP_XS_Rock_C
// Size: 0x2bc (Inherited: 0x248)
struct ABP_XS_Rock_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Rock; // 0x250(0x08)
	enum class EEnvironment Environment; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	int32_t PropIndex; // 0x25c(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x260(0x50)
	int32_t EnvInt; // 0x2b0(0x04)
	struct FRandomStream Random Seed; // 0x2b4(0x08)

	void UserConstructionScript(); // Function BP_XS_Rock.BP_XS_Rock_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_XS_Rock.BP_XS_Rock_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_XS_Rock(int32_t EntryPoint); // Function BP_XS_Rock.BP_XS_Rock_C.ExecuteUbergraph_BP_XS_Rock // (Final|UbergraphFunction) // @ game+0x38a7480
};

