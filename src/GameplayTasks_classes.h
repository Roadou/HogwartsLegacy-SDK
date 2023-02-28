// Class GameplayTasks.GameplayTask
// Size: 0x68 (Inherited: 0x28)
struct UGameplayTask : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FName InstanceName; // 0x30(0x08)
	char pad_38[0x2]; // 0x38(0x02)
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a(0x01)
	char pad_3B[0x25]; // 0x3b(0x25)
	struct UGameplayTask* ChildTask; // 0x60(0x08)

	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation // (Final|Native|Public|BlueprintCallable) // @ game+0x5a85f50
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	void EndTask(); // Function GameplayTasks.GameplayTask.EndTask // (Final|Native|Public|BlueprintCallable) // @ game+0x5a85bf0
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x68 (Inherited: 0x68)
struct UGameplayTask_ClaimResource : UGameplayTask {

	struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<struct UGameplayTaskResource*> ResourceClasses, char Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5a85a30
	struct UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct UGameplayTaskResource* ResourceClass, char Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5a858c0
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xa8 (Inherited: 0x68)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastInlineDelegate Success; // 0x68(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)
	struct AActor* ClassToSpawn; // 0xa0(0x08)

	struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct AActor* Class, bool bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5a85f70
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // (Native|Public|BlueprintCallable) // @ game+0x5a85c10
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor*& SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5a857e0
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x98 (Inherited: 0x68)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastInlineDelegate OnFinished; // 0x68(0x10)
	struct FMulticastInlineDelegate OnTimeExpired; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x80 (Inherited: 0x68)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastInlineDelegate OnFinish; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)

	struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5a86140
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
};

// Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayTaskOwnerInterface : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28(0x04)
	int8_t AutoResourceID; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	char bManuallySetID : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GameplayTasks.GameplayTasksComponent
// Size: 0x138 (Inherited: 0xc8)
struct UGameplayTasksComponent : UActorComponent {
	char pad_C8[0xc]; // 0xc8(0x0c)
	char pad_D4_0 : 1; // 0xd4(0x01)
	char bIsNetDirty : 1; // 0xd4(0x01)
	char pad_D4_2 : 6; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct TArray<struct UGameplayTask*> SimulatedTasks; // 0xd8(0x10)
	struct TArray<struct UGameplayTask*> TaskPriorityQueue; // 0xe8(0x10)
	char pad_F8[0x10]; // 0xf8(0x10)
	struct TArray<struct UGameplayTask*> TickingTasks; // 0x108(0x10)
	struct TArray<struct UGameplayTask*> KnownTasks; // 0x118(0x10)
	struct FMulticastInlineDelegate OnClaimedResourcesChange; // 0x128(0x10)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // (Final|Native|Public) // @ game+0x5a85f30
	enum class EGameplayTaskRunResult K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask* Task, char Priority, struct TArray<struct UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<struct UGameplayTaskResource*> AdditionalClaimedResources); // Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5a85ce0
};

