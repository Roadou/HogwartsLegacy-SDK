// BlueprintGeneratedClass BP_Horklump_Baby.BP_Horklump_Baby_C
// Size: 0x264 (Inherited: 0x248)
struct ABP_Horklump_Baby_C : ARigidBodyBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float LifeTime; // 0x260(0x04)

	void ReceiveBeginPlay(); // Function BP_Horklump_Baby.BP_Horklump_Baby_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DestroyActor(); // Function BP_Horklump_Baby.BP_Horklump_Baby_C.DestroyActor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Horklump_Baby(int32_t EntryPoint); // Function BP_Horklump_Baby.BP_Horklump_Baby_C.ExecuteUbergraph_BP_Horklump_Baby // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

