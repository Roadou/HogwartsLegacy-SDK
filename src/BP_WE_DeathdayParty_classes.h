// BlueprintGeneratedClass BP_WE_DeathdayParty.BP_WE_DeathdayParty_C
// Size: 0x2b8 (Inherited: 0x280)
struct ABP_WE_DeathdayParty_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct TArray<struct FString> GhostNames; // 0x290(0x10)
	struct TArray<struct FSTR_WE_DDP_TableTags> TableDressing; // 0x2a0(0x10)
	bool LoadInProgress; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	int32_t LoadIndex; // 0x2b4(0x04)

	void ScheduleNamedGhosts(bool AddActivity); // Function BP_WE_DeathdayParty.BP_WE_DeathdayParty_C.ScheduleNamedGhosts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateGhostSchedule(bool Activate); // Function BP_WE_DeathdayParty.BP_WE_DeathdayParty_C.ActivateGhostSchedule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_8D6E773C4775620045F5F5B4FE3D7B7E(struct UObject* Loaded); // Function BP_WE_DeathdayParty.BP_WE_DeathdayParty_C.OnLoaded_8D6E773C4775620045F5F5B4FE3D7B7E // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_DeathdayParty.BP_WE_DeathdayParty_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_DeathdayParty.BP_WE_DeathdayParty_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CreateTableDressing(); // Function BP_WE_DeathdayParty.BP_WE_DeathdayParty_C.CreateTableDressing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadTableDressing(); // Function BP_WE_DeathdayParty.BP_WE_DeathdayParty_C.LoadTableDressing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_DeathdayParty(int32_t EntryPoint); // Function BP_WE_DeathdayParty.BP_WE_DeathdayParty_C.ExecuteUbergraph_BP_WE_DeathdayParty // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

