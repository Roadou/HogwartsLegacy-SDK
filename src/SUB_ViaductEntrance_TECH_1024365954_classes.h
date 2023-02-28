// BlueprintGeneratedClass SUB_ViaductEntrance_TECH_1024365954.SUB_ViaductEntrance_TECH_C
// Size: 0x2d8 (Inherited: 0x250)
struct ASUB_ViaductEntrance_TECH_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	bool NewVar_1; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct TSoftObjectPtr<UWorld> Level; // 0x260(0x28)
	struct TSoftObjectPtr<UWorld> Level_1; // 0x288(0x28)
	struct ULevelStreamingDynamic* ChristmasLevel; // 0x2b0(0x08)
	struct ULevelStreamingDynamic* HalloweenLevel; // 0x2b8(0x08)
	struct ULevelStreamingDynamic* ChristmasLevel_2; // 0x2c0(0x08)
	struct AAIPath* AIPath_4_ExecuteUbergraph_SUB_ViaductEntrance_TECH_RefProperty; // 0x2c8(0x08)
	struct AAIPath* AIPath_1_ExecuteUbergraph_SUB_ViaductEntrance_TECH_RefProperty; // 0x2d0(0x08)

	void CustomEvent_2(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_ViaductEntrance_TECH_1024365954.SUB_ViaductEntrance_TECH_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_ViaductEntrance_TECH_1024365954.SUB_ViaductEntrance_TECH_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function SUB_ViaductEntrance_TECH_1024365954.SUB_ViaductEntrance_TECH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_ViaductEntrance_TECH_1024365954.SUB_ViaductEntrance_TECH_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_ViaductEntrance_TECH(int32_t EntryPoint); // Function SUB_ViaductEntrance_TECH_1024365954.SUB_ViaductEntrance_TECH_C.ExecuteUbergraph_SUB_ViaductEntrance_TECH // (Final|UbergraphFunction) // @ game+0x38a7480
};

