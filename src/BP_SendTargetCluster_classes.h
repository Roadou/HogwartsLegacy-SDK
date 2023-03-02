// BlueprintGeneratedClass BP_SendTargetCluster.BP_SendTargetCluster_C
// Size: 0x2d0 (Inherited: 0x248)
struct ABP_SendTargetCluster_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USendTargetComponent* SendTarget; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct TArray<struct UChildActorComponent*> SupportComponents; // 0x260(0x10)
	struct TArray<struct UChildActorComponent*> AttachedComponents; // 0x270(0x10)
	struct TArray<struct UStaticMeshComponent*> PhysicsComponents; // 0x280(0x10)
	struct TArray<struct UChildActorComponent*> AllBreakables; // 0x290(0x10)
	struct TArray<struct UActorComponent*> ComponentsToRemove; // 0x2a0(0x10)
	struct FObjectFadeParamsSpeedDuration Setup; // 0x2b0(0x0c)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FMulticastInlineDelegate SendTargetBreak; // 0x2c0(0x10)

	void UserConstructionScript(); // Function BP_SendTargetCluster.BP_SendTargetCluster_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SendTargetCluster.BP_SendTargetCluster_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void RootDestroyed(struct AActor* DestroyedActor); // Function BP_SendTargetCluster.BP_SendTargetCluster_C.RootDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProcessBreak(); // Function BP_SendTargetCluster.BP_SendTargetCluster_C.ProcessBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SendTargetHit(struct AActor* SelfActor, struct AActor* OtherActor); // Function BP_SendTargetCluster.BP_SendTargetCluster_C.SendTargetHit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SendTargetCluster(int32_t EntryPoint); // Function BP_SendTargetCluster.BP_SendTargetCluster_C.ExecuteUbergraph_BP_SendTargetCluster // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void SendTargetBreak__DelegateSignature(); // Function BP_SendTargetCluster.BP_SendTargetCluster_C.SendTargetBreak__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

