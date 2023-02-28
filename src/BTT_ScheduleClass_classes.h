// BlueprintGeneratedClass BTT_ScheduleClass.BTT_ScheduleClass_C
// Size: 0xe8 (Inherited: 0xd0)
struct UBTT_ScheduleClass_C : UBTTask_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct ASocialReasoning* Social Reasoning; // 0xd8(0x08)
	struct UEnvQueryInstanceBlueprintWrapper* NewVar_1; // 0xe0(0x08)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ScheduleClass.BTT_ScheduleClass_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_ScheduleClass.BTT_ScheduleClass_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Class_OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTT_ScheduleClass.BTT_ScheduleClass_C.Class_OnQueryFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_ScheduleClass(int32_t EntryPoint); // Function BTT_ScheduleClass.BTT_ScheduleClass_C.ExecuteUbergraph_BTT_ScheduleClass // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

