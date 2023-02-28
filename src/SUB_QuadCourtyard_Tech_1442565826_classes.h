// BlueprintGeneratedClass SUB_QuadCourtyard_Tech_1442565826.SUB_QuadCourtyard_TECH_C
// Size: 0x268 (Inherited: 0x250)
struct ASUB_QuadCourtyard_TECH_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ULevelStreamingDynamic* ChristmasLevel; // 0x258(0x08)
	struct ULevelStreamingDynamic* HalloweenLevel; // 0x260(0x08)

	void CustomEvent_2(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_QuadCourtyard_Tech_1442565826.SUB_QuadCourtyard_TECH_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function SUB_QuadCourtyard_Tech_1442565826.SUB_QuadCourtyard_TECH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_QuadCourtyard_Tech_1442565826.SUB_QuadCourtyard_TECH_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_QuadCourtyard_Tech_1442565826.SUB_QuadCourtyard_TECH_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_QuadCourtyard_TECH(int32_t EntryPoint); // Function SUB_QuadCourtyard_Tech_1442565826.SUB_QuadCourtyard_TECH_C.ExecuteUbergraph_SUB_QuadCourtyard_TECH // (Final|UbergraphFunction) // @ game+0x38a7480
};

