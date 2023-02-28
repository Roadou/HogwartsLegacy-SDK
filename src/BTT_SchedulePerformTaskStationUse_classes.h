// BlueprintGeneratedClass BTT_SchedulePerformTaskStationUse.BTT_SchedulePerformTaskStationUse_C
// Size: 0xed (Inherited: 0xd0)
struct UBTT_SchedulePerformTaskStationUse_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* Social Reasoning; // 0xd8(0x08)
	float Time Available; // 0xe0(0x04)
	float Min Time Available; // 0xe4(0x04)
	float Max Time Available; // 0xe8(0x04)
	bool NodeActive; // 0xec(0x01)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_SchedulePerformTaskStationUse.BTT_SchedulePerformTaskStationUse_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_SchedulePerformTaskStationUse.BTT_SchedulePerformTaskStationUse_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_SchedulePerformTaskStationUse(int32_t EntryPoint); // Function BTT_SchedulePerformTaskStationUse.BTT_SchedulePerformTaskStationUse_C.ExecuteUbergraph_BTT_SchedulePerformTaskStationUse // (Final|UbergraphFunction) // @ game+0x38a7480
};

