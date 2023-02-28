// BlueprintGeneratedClass BTT_SchedulePatrolSearch.BTT_SchedulePatrolSearch_C
// Size: 0xe9 (Inherited: 0xd0)
struct UBTT_SchedulePatrolSearch_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* Social Reasoning; // 0xd8(0x08)
	struct UBlackboardComponent* BB; // 0xe0(0x08)
	bool SideWork; // 0xe8(0x01)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_SchedulePatrolSearch.BTT_SchedulePatrolSearch_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_SchedulePatrolSearch.BTT_SchedulePatrolSearch_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Patrol_Job_OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTT_SchedulePatrolSearch.BTT_SchedulePatrolSearch_C.Patrol_Job_OnQueryFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_SchedulePatrolSearch(int32_t EntryPoint); // Function BTT_SchedulePatrolSearch.BTT_SchedulePatrolSearch_C.ExecuteUbergraph_BTT_SchedulePatrolSearch // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

