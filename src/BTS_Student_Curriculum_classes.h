// BlueprintGeneratedClass BTS_Student_Curriculum.BTS_Student_Curriculum_C
// Size: 0x114 (Inherited: 0xd0)
struct UBTS_Student_Curriculum_C : UBTService_SocialReasoning {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct UScheduledEntity* ScheduledEntity; // 0xd8(0x08)
	enum class EGoalStatusFlags FutureGoalStatus; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FName StationNeedingServiceKey; // 0xe4(0x08)
	struct FName StationActionNameKey; // 0xec(0x08)
	struct FName StationConnectionIndexKey; // 0xf4(0x08)
	struct FName StationInteractionTypeKey; // 0xfc(0x08)
	struct FName StationUseDurationKey; // 0x104(0x08)
	struct FName SkipValidationForTeleportToStation; // 0x10c(0x08)

	void Set SubBehavior(); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.Set SubBehavior // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set New Behavior(); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.Set New Behavior // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Chat(struct ASocialReasoning* SocialReasoning); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.Chat // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void InteractionCallback(struct ASocialReasoning* SocialReasoning, struct UStationComponent* InStation); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.InteractionCallback // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Companionship(struct ASocialReasoning* SocialReasoning); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.Companionship // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Combat(struct ASocialReasoning* SocialReasoning); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.Combat // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PlayerSighted(struct ASocialReasoning* SocialReasoning); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.PlayerSighted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ServiceBegin(struct AActor* OwnerActor); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.ServiceBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StationNeedsService(struct UObject* Caller, struct UStationComponent* StationComponent); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.StationNeedsService // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PerformTask_WaitForPlayer(struct ASocialReasoning* SocialReasoning); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.PerformTask_WaitForPlayer // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void PerformTask_MoveToLocation(struct ASocialReasoning* SocialReasoning); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.PerformTask_MoveToLocation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Think(struct ASocialReasoning* SocialReasoning, struct FTimeEvent& TimeEvent); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.Think // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void PerformTask_MoveToStation(struct ASocialReasoning* SocialReasoning, struct UStationComponent* InStation, enum class EStationInteraction InStationInteractionType, struct FName InActionName, int32_t InConnectionIndex, float InStationUseDuration, bool InSkipValidationForTeleport); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.PerformTask_MoveToStation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RunEQS_FindStations(struct ASocialReasoning* SocialReasoning, enum class EEnvQueryRunMode RunMode, struct FQueryFinishedData& QueryFinishedDelegate); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.RunEQS_FindStations // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void FindStations_QueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.FindStations_QueryFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RunEQS_FindSocialReasonings(struct ASocialReasoning* SocialReasoning, enum class EEnvQueryRunMode RunMode, struct FQueryFinishedData& QueryFinishedDelegate); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.RunEQS_FindSocialReasonings // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void FindSocialReasonings_QueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.FindSocialReasonings_QueryFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_Student_Curriculum(int32_t EntryPoint); // Function BTS_Student_Curriculum.BTS_Student_Curriculum_C.ExecuteUbergraph_BTS_Student_Curriculum // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

