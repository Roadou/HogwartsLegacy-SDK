// BlueprintGeneratedClass SUB_Ravenclaw_TECH_3157322289.SUB_Ravenclaw_TECH_C
// Size: 0x268 (Inherited: 0x250)
struct ASUB_Ravenclaw_TECH_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ULevelStreamingDynamic* ChristmasLevel; // 0x258(0x08)
	struct ABP_FastTravel_C* BP_FastTravel20_ExecuteUbergraph_SUB_Ravenclaw_TECH_RefProperty; // 0x260(0x08)

	void ReceiveBeginPlay(); // Function SUB_Ravenclaw_TECH_3157322289.SUB_Ravenclaw_TECH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_Ravenclaw_TECH_3157322289.SUB_Ravenclaw_TECH_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_Ravenclaw_TECH_3157322289.SUB_Ravenclaw_TECH_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_Ravenclaw_TECH_3157322289.SUB_Ravenclaw_TECH_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_Ravenclaw_TECH(int32_t EntryPoint); // Function SUB_Ravenclaw_TECH_3157322289.SUB_Ravenclaw_TECH_C.ExecuteUbergraph_SUB_Ravenclaw_TECH // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

