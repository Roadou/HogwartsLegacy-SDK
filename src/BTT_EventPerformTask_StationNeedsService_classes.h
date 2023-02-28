// BlueprintGeneratedClass BTT_EventPerformTask_StationNeedsService.BTT_EventPerformTask_StationNeedsService_C
// Size: 0x128 (Inherited: 0xd0)
struct UBTT_EventPerformTask_StationNeedsService_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct FName StationNeedingServiceKey; // 0xd8(0x08)
	struct FName StationActionNameKey; // 0xe0(0x08)
	struct FName StationConnectionIndexKey; // 0xe8(0x08)
	struct FName StationInteractionTypeKey; // 0xf0(0x08)
	struct FName SkipValidationForTeleportToStation; // 0xf8(0x08)
	struct FStationQueryData StationQueryData; // 0x100(0x20)
	struct FName StationUseDuration; // 0x120(0x08)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_EventPerformTask_StationNeedsService.BTT_EventPerformTask_StationNeedsService_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_EventPerformTask_StationNeedsService.BTT_EventPerformTask_StationNeedsService_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_EventPerformTask_StationNeedsService(int32_t EntryPoint); // Function BTT_EventPerformTask_StationNeedsService.BTT_EventPerformTask_StationNeedsService_C.ExecuteUbergraph_BTT_EventPerformTask_StationNeedsService // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

