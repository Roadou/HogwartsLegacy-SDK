// BlueprintGeneratedClass BTT_EventOccupation_StationNeedsService.BTT_EventOccupation_StationNeedsService_C
// Size: 0xe0 (Inherited: 0xd0)
struct UBTT_EventOccupation_StationNeedsService_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct FName StationNeedingServiceKey; // 0xd8(0x08)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_EventOccupation_StationNeedsService.BTT_EventOccupation_StationNeedsService_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_EventOccupation_StationNeedsService.BTT_EventOccupation_StationNeedsService_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_EventOccupation_StationNeedsService(int32_t EntryPoint); // Function BTT_EventOccupation_StationNeedsService.BTT_EventOccupation_StationNeedsService_C.ExecuteUbergraph_BTT_EventOccupation_StationNeedsService // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

