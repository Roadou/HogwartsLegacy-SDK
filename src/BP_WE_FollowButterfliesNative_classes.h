// BlueprintGeneratedClass BP_WE_FollowButterfliesNative.BP_WE_FollowButterfliesNative_C
// Size: 0x3c4 (Inherited: 0x3b0)
struct ABP_WE_FollowButterfliesNative_C : AWEFollowButterflies {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct FObjectFadeParamsSpeedDuration Setup; // 0x3b8(0x0c)

	void BPHideButterflies(struct AFlockingActor* ButterflyFlock); // Function BP_WE_FollowButterfliesNative.BP_WE_FollowButterfliesNative_C.BPHideButterflies // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideButterflies(struct AFlockingActor* ButterflyFlock); // Function BP_WE_FollowButterfliesNative.BP_WE_FollowButterfliesNative_C.HideButterflies // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BindToChestOpenedEvent(); // Function BP_WE_FollowButterfliesNative.BP_WE_FollowButterfliesNative_C.BindToChestOpenedEvent // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnChestOpened(); // Function BP_WE_FollowButterfliesNative.BP_WE_FollowButterfliesNative_C.OnChestOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_FollowButterfliesNative.BP_WE_FollowButterfliesNative_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_FollowButterfliesNative.BP_WE_FollowButterfliesNative_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_FollowButterfliesNative(int32_t EntryPoint); // Function BP_WE_FollowButterfliesNative.BP_WE_FollowButterfliesNative_C.ExecuteUbergraph_BP_WE_FollowButterfliesNative // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

