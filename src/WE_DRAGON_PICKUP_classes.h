// BlueprintGeneratedClass WE_DRAGON_PICKUP.WE_DRAGON_PICKUP_C
// Size: 0x268 (Inherited: 0x250)
struct AWE_DRAGON_PICKUP_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ABP_StationGuard1P_C* BP_StationGuard1P_2_ExecuteUbergraph_WE_DRAGON_PICKUP_RefProperty; // 0x258(0x08)
	struct ADynamicObjectVolume* DOV_Poacher_ExecuteUbergraph_WE_DRAGON_PICKUP_RefProperty; // 0x260(0x08)

	void CustomEvent_1(struct AActor* SpawnedActor, struct FName& GroupName); // Function WE_DRAGON_PICKUP.WE_DRAGON_PICKUP_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function WE_DRAGON_PICKUP.WE_DRAGON_PICKUP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_WE_DRAGON_PICKUP(int32_t EntryPoint); // Function WE_DRAGON_PICKUP.WE_DRAGON_PICKUP_C.ExecuteUbergraph_WE_DRAGON_PICKUP // (Final|UbergraphFunction) // @ game+0x38a7480
};

