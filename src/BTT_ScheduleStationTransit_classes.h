// BlueprintGeneratedClass BTT_ScheduleStationTransit.BTT_ScheduleStationTransit_C
// Size: 0xfc (Inherited: 0xd0)
struct UBTT_ScheduleStationTransit_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* Social Reasoning; // 0xd8(0x08)
	int32_t Min Time Available; // 0xe0(0x04)
	int32_t Max Time Available; // 0xe4(0x04)
	int32_t Time Available; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UEnvQueryInstanceBlueprintWrapper* StationTransit EQS Acknowledge Friends; // 0xf0(0x08)
	float Simulated Second Multiplier; // 0xf8(0x04)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ScheduleStationTransit.BTT_ScheduleStationTransit_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_ScheduleStationTransit.BTT_ScheduleStationTransit_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StationTransit_AcknowledgeFriends_OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTT_ScheduleStationTransit.BTT_ScheduleStationTransit_C.StationTransit_AcknowledgeFriends_OnQueryFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_ScheduleStationTransit(int32_t EntryPoint); // Function BTT_ScheduleStationTransit.BTT_ScheduleStationTransit_C.ExecuteUbergraph_BTT_ScheduleStationTransit // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

