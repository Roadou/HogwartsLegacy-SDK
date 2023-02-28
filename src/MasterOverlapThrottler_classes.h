// Class MasterOverlapThrottler.MasterOverlapThrottlerSingleton
// Size: 0x298 (Inherited: 0x248)
struct AMasterOverlapThrottlerSingleton : AActor {
	struct TMap<struct TWeakObjectPtr<struct UPrimitiveComponent>, struct FMasterOverlapThrottlerTracker> ThrottlePrimitiveComponents; // 0x248(0x50)

	void RemoveManagedPrimitiveComponent(struct UPrimitiveComponent* Component); // Function MasterOverlapThrottler.MasterOverlapThrottlerSingleton.RemoveManagedPrimitiveComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22ea970
	void IsPrimitiveComponentThrottled(struct UPrimitiveComponent* Component, bool& bIsThrottled); // Function MasterOverlapThrottler.MasterOverlapThrottlerSingleton.IsPrimitiveComponentThrottled // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x22ea8a0
	void IsManagedPrimitiveComponent(struct UPrimitiveComponent* Component, bool& bIsManaged); // Function MasterOverlapThrottler.MasterOverlapThrottlerSingleton.IsManagedPrimitiveComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x22ea7d0
	void EnablePrimitiveComponentThrottling(struct UPrimitiveComponent* Component, bool bEnable); // Function MasterOverlapThrottler.MasterOverlapThrottlerSingleton.EnablePrimitiveComponentThrottling // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22ea710
	void DisablePrimitiveComponentThrottling(struct UPrimitiveComponent* Component); // Function MasterOverlapThrottler.MasterOverlapThrottlerSingleton.DisablePrimitiveComponentThrottling // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22ea690
	void AddManagedPrimitiveComponent(struct UPrimitiveComponent* Component, struct FMasterOverlapThrottlerSettings& Settings); // Function MasterOverlapThrottler.MasterOverlapThrottlerSingleton.AddManagedPrimitiveComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x22ea5a0
};

