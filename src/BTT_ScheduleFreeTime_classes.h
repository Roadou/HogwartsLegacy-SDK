// BlueprintGeneratedClass BTT_ScheduleFreeTime.BTT_ScheduleFreeTime_C
// Size: 0xf0 (Inherited: 0xd0)
struct UBTT_ScheduleFreeTime_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* Social Reasoning; // 0xd8(0x08)
	float Time Available; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UEnvQueryInstanceBlueprintWrapper* EQSQueryInstance; // 0xe8(0x08)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ScheduleFreeTime.BTT_ScheduleFreeTime_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_ScheduleFreeTime.BTT_ScheduleFreeTime_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void FreeTime_OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTT_ScheduleFreeTime.BTT_ScheduleFreeTime_C.FreeTime_OnQueryFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_ScheduleFreeTime(int32_t EntryPoint); // Function BTT_ScheduleFreeTime.BTT_ScheduleFreeTime_C.ExecuteUbergraph_BTT_ScheduleFreeTime // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

