// BlueprintGeneratedClass SUB_ViaductBridge_TECH_336208052.SUB_ViaductBridge_TECH_C
// Size: 0x278 (Inherited: 0x250)
struct ASUB_ViaductBridge_TECH_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ULevelStreamingDynamic* ChristmasLevel; // 0x258(0x08)
	struct ULevelStreamingDynamic* ChristmasLevel_2; // 0x260(0x08)
	struct ULevelStreamingDynamic* HalloweenLevel; // 0x268(0x08)
	struct ULevelStreamingDynamic* HalloweenLevel_2; // 0x270(0x08)

	void ReceiveBeginPlay(); // Function SUB_ViaductBridge_TECH_336208052.SUB_ViaductBridge_TECH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_ViaductBridge_TECH_336208052.SUB_ViaductBridge_TECH_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_ViaductBridge_TECH_336208052.SUB_ViaductBridge_TECH_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_ViaductBridge_TECH_336208052.SUB_ViaductBridge_TECH_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_ViaductBridge_TECH(int32_t EntryPoint); // Function SUB_ViaductBridge_TECH_336208052.SUB_ViaductBridge_TECH_C.ExecuteUbergraph_SUB_ViaductBridge_TECH // (Final|UbergraphFunction) // @ game+0x38a7480
};

