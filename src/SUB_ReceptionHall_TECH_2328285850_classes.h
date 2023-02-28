// BlueprintGeneratedClass SUB_ReceptionHall_TECH_2328285850.SUB_ReceptionHall_TECH_C
// Size: 0x268 (Inherited: 0x250)
struct ASUB_ReceptionHall_TECH_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ULevelStreamingDynamic* ChristmasLevel; // 0x258(0x08)
	struct ABP_FastTravel_C* BP_FastTravel25_ExecuteUbergraph_SUB_ReceptionHall_TECH_RefProperty; // 0x260(0x08)

	void ReceiveBeginPlay(); // Function SUB_ReceptionHall_TECH_2328285850.SUB_ReceptionHall_TECH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function SUB_ReceptionHall_TECH_2328285850.SUB_ReceptionHall_TECH_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_ReceptionHall_TECH_2328285850.SUB_ReceptionHall_TECH_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_ReceptionHall_TECH_2328285850.SUB_ReceptionHall_TECH_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_ReceptionHall_TECH(int32_t EntryPoint); // Function SUB_ReceptionHall_TECH_2328285850.SUB_ReceptionHall_TECH_C.ExecuteUbergraph_SUB_ReceptionHall_TECH // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

