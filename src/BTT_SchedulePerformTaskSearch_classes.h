// BlueprintGeneratedClass BTT_SchedulePerformTaskSearch.BTT_SchedulePerformTaskSearch_C
// Size: 0xe9 (Inherited: 0xd0)
struct UBTT_SchedulePerformTaskSearch_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* Social Reasoning; // 0xd8(0x08)
	struct UBlackboardComponent* BB; // 0xe0(0x08)
	bool SideWork; // 0xe8(0x01)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_SchedulePerformTaskSearch.BTT_SchedulePerformTaskSearch_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_SchedulePerformTaskSearch.BTT_SchedulePerformTaskSearch_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PerformTask_Job_OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTT_SchedulePerformTaskSearch.BTT_SchedulePerformTaskSearch_C.PerformTask_Job_OnQueryFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_SchedulePerformTaskSearch(int32_t EntryPoint); // Function BTT_SchedulePerformTaskSearch.BTT_SchedulePerformTaskSearch_C.ExecuteUbergraph_BTT_SchedulePerformTaskSearch // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

