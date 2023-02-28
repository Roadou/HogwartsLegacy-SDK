// BlueprintGeneratedClass BTT_ScheduleBedTimeSearch.BTT_ScheduleBedTimeSearch_C
// Size: 0xe0 (Inherited: 0xd0)
struct UBTT_ScheduleBedTimeSearch_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* Social Reasoning; // 0xd8(0x08)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ScheduleBedTimeSearch.BTT_ScheduleBedTimeSearch_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_ScheduleBedTimeSearch.BTT_ScheduleBedTimeSearch_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BedTime_OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTT_ScheduleBedTimeSearch.BTT_ScheduleBedTimeSearch_C.BedTime_OnQueryFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_ScheduleBedTimeSearch(int32_t EntryPoint); // Function BTT_ScheduleBedTimeSearch.BTT_ScheduleBedTimeSearch_C.ExecuteUbergraph_BTT_ScheduleBedTimeSearch // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

