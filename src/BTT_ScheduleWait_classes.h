// BlueprintGeneratedClass BTT_ScheduleWait.BTT_ScheduleWait_C
// Size: 0xd8 (Inherited: 0xd0)
struct UBTT_ScheduleWait_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ScheduleWait.BTT_ScheduleWait_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_ScheduleWait.BTT_ScheduleWait_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_ScheduleWait(int32_t EntryPoint); // Function BTT_ScheduleWait.BTT_ScheduleWait_C.ExecuteUbergraph_BTT_ScheduleWait // (Final|UbergraphFunction) // @ game+0x38a7480
};

