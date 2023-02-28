// BlueprintGeneratedClass SUB_Greenhouses_TECH_1024365954.SUB_Greenhouses_TECH_C
// Size: 0x268 (Inherited: 0x250)
struct ASUB_Greenhouses_TECH_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ULevelStreamingDynamic* ChristmasLevel; // 0x258(0x08)
	struct ULevelStreamingDynamic* HalloweenLevel; // 0x260(0x08)

	void CustomEvent_2(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_Greenhouses_TECH_1024365954.SUB_Greenhouses_TECH_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function SUB_Greenhouses_TECH_1024365954.SUB_Greenhouses_TECH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_Greenhouses_TECH_1024365954.SUB_Greenhouses_TECH_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_Greenhouses_TECH_1024365954.SUB_Greenhouses_TECH_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_Greenhouses_TECH(int32_t EntryPoint); // Function SUB_Greenhouses_TECH_1024365954.SUB_Greenhouses_TECH_C.ExecuteUbergraph_SUB_Greenhouses_TECH // (Final|UbergraphFunction) // @ game+0x38a7480
};

