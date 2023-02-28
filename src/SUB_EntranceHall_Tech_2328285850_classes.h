// BlueprintGeneratedClass SUB_EntranceHall_Tech_2328285850.SUB_EntranceHall_TECH_C
// Size: 0x260 (Inherited: 0x250)
struct ASUB_EntranceHall_TECH_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ULevelStreamingDynamic* ChristmasLevel; // 0x258(0x08)

	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_EntranceHall_Tech_2328285850.SUB_EntranceHall_TECH_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function SUB_EntranceHall_Tech_2328285850.SUB_EntranceHall_TECH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_EntranceHall_Tech_2328285850.SUB_EntranceHall_TECH_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_EntranceHall_TECH(int32_t EntryPoint); // Function SUB_EntranceHall_Tech_2328285850.SUB_EntranceHall_TECH_C.ExecuteUbergraph_SUB_EntranceHall_TECH // (Final|UbergraphFunction) // @ game+0x38a7480
};

