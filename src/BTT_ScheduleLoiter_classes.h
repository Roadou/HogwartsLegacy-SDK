// BlueprintGeneratedClass BTT_ScheduleLoiter.BTT_ScheduleLoiter_C
// Size: 0xe4 (Inherited: 0xd0)
struct UBTT_ScheduleLoiter_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* Social Reasoning; // 0xd8(0x08)
	float Time Available; // 0xe0(0x04)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ScheduleLoiter.BTT_ScheduleLoiter_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_ScheduleLoiter.BTT_ScheduleLoiter_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_ScheduleLoiter(int32_t EntryPoint); // Function BTT_ScheduleLoiter.BTT_ScheduleLoiter_C.ExecuteUbergraph_BTT_ScheduleLoiter // (Final|UbergraphFunction) // @ game+0x38a7480
};

