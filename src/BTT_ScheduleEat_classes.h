// BlueprintGeneratedClass BTT_ScheduleEat.BTT_ScheduleEat_C
// Size: 0xec (Inherited: 0xd0)
struct UBTT_ScheduleEat_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* Social Reasoning; // 0xd8(0x08)
	int32_t Min Time Available; // 0xe0(0x04)
	int32_t Max Time Available; // 0xe4(0x04)
	int32_t Time Available; // 0xe8(0x04)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ScheduleEat.BTT_ScheduleEat_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_ScheduleEat.BTT_ScheduleEat_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_ScheduleEat(int32_t EntryPoint); // Function BTT_ScheduleEat.BTT_ScheduleEat_C.ExecuteUbergraph_BTT_ScheduleEat // (Final|UbergraphFunction) // @ game+0x38a7480
};

