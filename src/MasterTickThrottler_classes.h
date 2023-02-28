// Class MasterTickThrottler.MasterTickThrottlerSingletonEditorUpdate
// Size: 0xd8 (Inherited: 0xc8)
struct UMasterTickThrottlerSingletonEditorUpdate : UActorComponent {
	char pad_C8[0x10]; // 0xc8(0x10)
};

// Class MasterTickThrottler.MasterTickThrottlerSingleton
// Size: 0x2f8 (Inherited: 0x248)
struct AMasterTickThrottlerSingleton : AActor {
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FMasterTickThrottlerTracker> ThrottleActors; // 0x248(0x50)
	struct TMap<struct TWeakObjectPtr<struct UActorComponent>, struct FMasterTickThrottlerTracker> ThrottleComponents; // 0x298(0x50)
	struct FVector LastEye; // 0x2e8(0x0c)
	bool bLastEyeValid; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)

	void RemoveManagedComponent(struct UActorComponent* Component); // Function MasterTickThrottler.MasterTickThrottlerSingleton.RemoveManagedComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10577f0
	void RemoveManagedActor(struct AActor* Actor); // Function MasterTickThrottler.MasterTickThrottlerSingleton.RemoveManagedActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1057770
	void IsManagedComponent(struct UActorComponent* Component, bool& bIsManaged); // Function MasterTickThrottler.MasterTickThrottlerSingleton.IsManagedComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10576a0
	void IsManagedActor(struct AActor* Actor, bool& bIsManaged); // Function MasterTickThrottler.MasterTickThrottlerSingleton.IsManagedActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10575d0
	void IsComponentThrottled(struct UActorComponent* Component, bool& bIsThrottled); // Function MasterTickThrottler.MasterTickThrottlerSingleton.IsComponentThrottled // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1057500
	void IsActorThrottled(struct AActor* Actor, bool& bIsThrottled); // Function MasterTickThrottler.MasterTickThrottlerSingleton.IsActorThrottled // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1057430
	void EnableComponentThrottling(struct UActorComponent* Component, bool bEnable); // Function MasterTickThrottler.MasterTickThrottlerSingleton.EnableComponentThrottling // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1057370
	void EnableActorThrottling(struct AActor* Actor, bool bEnable); // Function MasterTickThrottler.MasterTickThrottlerSingleton.EnableActorThrottling // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10572b0
	void DisableComponentThrottling(struct UActorComponent* Component); // Function MasterTickThrottler.MasterTickThrottlerSingleton.DisableComponentThrottling // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1057230
	void DisableActorThrottling(struct AActor* Actor); // Function MasterTickThrottler.MasterTickThrottlerSingleton.DisableActorThrottling // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10571b0
	void AddManagedComponent(struct UActorComponent* Component, struct FMasterTickThrottlerSettings& Settings); // Function MasterTickThrottler.MasterTickThrottlerSingleton.AddManagedComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10570c0
	void AddManagedActor(struct AActor* Actor, struct FMasterTickThrottlerSettings& Settings); // Function MasterTickThrottler.MasterTickThrottlerSingleton.AddManagedActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1056fd0
};

// Class MasterTickThrottler.Interface_TickThrottlerKeepAlive
// Size: 0x28 (Inherited: 0x28)
struct UInterface_TickThrottlerKeepAlive : UInterface {

	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function MasterTickThrottler.Interface_TickThrottlerKeepAlive.TickThrottler_WakeUp // (Native|Event|Public|BlueprintEvent) // @ game+0x10579d0
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function MasterTickThrottler.Interface_TickThrottlerKeepAlive.TickThrottler_KeepAlive // (Native|Event|Public|BlueprintEvent) // @ game+0x1057900
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function MasterTickThrottler.Interface_TickThrottlerKeepAlive.TickThrottler_GoToSleep // (Native|Event|Public|BlueprintEvent) // @ game+0x1057870
};

