// BlueprintGeneratedClass BP_ToadstoolRB1.BP_ToadstoolRB1_C
// Size: 0x264 (Inherited: 0x248)
struct ABP_ToadstoolRB1_C : ARigidBodyBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float LifeTime; // 0x260(0x04)

	void ReceiveBeginPlay(); // Function BP_ToadstoolRB1.BP_ToadstoolRB1_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DestroyActor(); // Function BP_ToadstoolRB1.BP_ToadstoolRB1_C.DestroyActor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ToadstoolRB1(int32_t EntryPoint); // Function BP_ToadstoolRB1.BP_ToadstoolRB1_C.ExecuteUbergraph_BP_ToadstoolRB1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

