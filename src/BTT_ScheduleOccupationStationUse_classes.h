// BlueprintGeneratedClass BTT_ScheduleOccupationStationUse.BTT_ScheduleOccupationStationUse_C
// Size: 0xed (Inherited: 0xd0)
struct UBTT_ScheduleOccupationStationUse_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* Social Reasoning; // 0xd8(0x08)
	float Time Available; // 0xe0(0x04)
	float Min Time Available; // 0xe4(0x04)
	float Max Time Available; // 0xe8(0x04)
	bool NodeActive; // 0xec(0x01)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ScheduleOccupationStationUse.BTT_ScheduleOccupationStationUse_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_ScheduleOccupationStationUse.BTT_ScheduleOccupationStationUse_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_ScheduleOccupationStationUse(int32_t EntryPoint); // Function BTT_ScheduleOccupationStationUse.BTT_ScheduleOccupationStationUse_C.ExecuteUbergraph_BTT_ScheduleOccupationStationUse // (Final|UbergraphFunction) // @ game+0x38a7480
};

