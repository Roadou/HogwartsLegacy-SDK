// BlueprintGeneratedClass SUB_NorthHall_INT_1024365954.SUB_NorthHall_INT_C
// Size: 0x278 (Inherited: 0x250)
struct ASUB_NorthHall_INT_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	bool isCOM03EventBound; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct FHermesBPDelegateHandle COM03_MissionUpdates; // 0x260(0x10)
	struct ABP_AccioPuzzle_C* COM03_Painting_ExecuteUbergraph_SUB_NorthHall_INT_RefProperty; // 0x270(0x08)

	void ReceiveBeginPlay(); // Function SUB_NorthHall_INT_1024365954.SUB_NorthHall_INT_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void COM03_MapUpdate(enum class E_AccioPuzzleState NewState); // Function SUB_NorthHall_INT_1024365954.SUB_NorthHall_INT_C.COM03_MapUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_03_Updated(struct UObject* Caller, struct FName& String); // Function SUB_NorthHall_INT_1024365954.SUB_NorthHall_INT_C.COM_03_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_NorthHall_INT_1024365954.SUB_NorthHall_INT_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_NorthHall_INT(int32_t EntryPoint); // Function SUB_NorthHall_INT_1024365954.SUB_NorthHall_INT_C.ExecuteUbergraph_SUB_NorthHall_INT // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

