// BlueprintGeneratedClass BTT_ScheduleNoStation.BTT_ScheduleNoStation_C
// Size: 0xe0 (Inherited: 0xd0)
struct UBTT_ScheduleNoStation_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* SocialReasoning; // 0xd8(0x08)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ScheduleNoStation.BTT_ScheduleNoStation_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_ScheduleNoStation.BTT_ScheduleNoStation_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_ScheduleNoStation(int32_t EntryPoint); // Function BTT_ScheduleNoStation.BTT_ScheduleNoStation_C.ExecuteUbergraph_BTT_ScheduleNoStation // (Final|UbergraphFunction) // @ game+0x38a7480
};

