// BlueprintGeneratedClass BTS_Student_FreeTime.BTS_Student_FreeTime_C
// Size: 0xec (Inherited: 0xd0)
struct UBTS_Student_FreeTime_C : UBTService_AvaAITree {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	bool DisplayRelationship; // 0xd8(0x01)
	bool DisplaySocialIntention; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
	struct FDateTime TimeOfNextActivity; // 0xe0(0x08)
	float DurationOfCurrentActivity; // 0xe8(0x04)

	void Nevermind(struct UObject* Caller); // Function BTS_Student_FreeTime.BTS_Student_FreeTime_C.Nevermind // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExcuseMe(struct UObject* Caller); // Function BTS_Student_FreeTime.BTS_Student_FreeTime_C.ExcuseMe // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnQueryFinishedEvent_Event_2(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTS_Student_FreeTime.BTS_Student_FreeTime_C.OnQueryFinishedEvent_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ServiceEnd(struct AActor* OwnerActor); // Function BTS_Student_FreeTime.BTS_Student_FreeTime_C.ServiceEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveSearchStart(struct AActor* OwnerActor); // Function BTS_Student_FreeTime.BTS_Student_FreeTime_C.ReceiveSearchStart // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ServiceBegin(struct AActor* OwnerActor); // Function BTS_Student_FreeTime.BTS_Student_FreeTime_C.ServiceBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnQueryFinishedEvent_Event_1(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTS_Student_FreeTime.BTS_Student_FreeTime_C.OnQueryFinishedEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_Student_FreeTime(int32_t EntryPoint); // Function BTS_Student_FreeTime.BTS_Student_FreeTime_C.ExecuteUbergraph_BTS_Student_FreeTime // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

