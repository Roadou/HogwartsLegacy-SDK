// BlueprintGeneratedClass BTT_ScheduleChat.BTT_ScheduleChat_C
// Size: 0xe8 (Inherited: 0xd0)
struct UBTT_ScheduleChat_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* Social Reasoning; // 0xd8(0x08)
	struct UEnvQueryInstanceBlueprintWrapper* EQS Find Stations; // 0xe0(0x08)

	void ExitTask(struct AActor* OwnerActor); // Function BTT_ScheduleChat.BTT_ScheduleChat_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ScheduleChat.BTT_ScheduleChat_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_ScheduleChat(int32_t EntryPoint); // Function BTT_ScheduleChat.BTT_ScheduleChat_C.ExecuteUbergraph_BTT_ScheduleChat // (Final|UbergraphFunction) // @ game+0x38a7480
};

