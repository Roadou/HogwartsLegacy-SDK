// BlueprintGeneratedClass BP_InstancedFlock.BP_InstancedFlock_C
// Size: 0x6f8 (Inherited: 0x6c0)
struct ABP_InstancedFlock_C : AInstancedFlockingActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	struct FMasterTickThrottlerSettings NewVar_1; // 0x6c8(0x28)
	float Full Tick Radius; // 0x6f0(0x04)
	float No Tick Radius; // 0x6f4(0x04)

	void UserConstructionScript(); // Function BP_InstancedFlock.BP_InstancedFlock_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_InstancedFlock.BP_InstancedFlock_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_InstancedFlock(int32_t EntryPoint); // Function BP_InstancedFlock.BP_InstancedFlock_C.ExecuteUbergraph_BP_InstancedFlock // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

