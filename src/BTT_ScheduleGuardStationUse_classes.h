// BlueprintGeneratedClass BTT_ScheduleGuardStationUse.BTT_ScheduleGuardStationUse_C
// Size: 0xe0 (Inherited: 0xd0)
struct UBTT_ScheduleGuardStationUse_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* SocialReasoning; // 0xd8(0x08)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ScheduleGuardStationUse.BTT_ScheduleGuardStationUse_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_ScheduleGuardStationUse.BTT_ScheduleGuardStationUse_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_ScheduleGuardStationUse(int32_t EntryPoint); // Function BTT_ScheduleGuardStationUse.BTT_ScheduleGuardStationUse_C.ExecuteUbergraph_BTT_ScheduleGuardStationUse // (Final|UbergraphFunction) // @ game+0x38a7480
};

