// BlueprintGeneratedClass BP_Ladder_Div.BP_Ladder_Div_C
// Size: 0x2d8 (Inherited: 0x29c)
struct ABP_Ladder_Div_C : ABP_Ladder_C {
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UBoxComponent* TriggerBox2; // 0x2a8(0x08)
	struct UBoxComponent* TriggerBox1; // 0x2b0(0x08)
	struct USkeletalMeshComponentBudgeted* SK_Divination_Ladder_Budgeted; // 0x2b8(0x08)
	struct UABP_Ladder_Div_C* LadderDivABP; // 0x2c0(0x08)
	struct FTimerHandle ExitTimerHandle; // 0x2c8(0x08)
	struct FTimerHandle LadderThrottleHandle; // 0x2d0(0x08)

	void EnableLadderCollision(bool EnableCollision); // Function BP_Ladder_Div.BP_Ladder_Div_C.EnableLadderCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitTimerExpired(); // Function BP_Ladder_Div.BP_Ladder_Div_C.OnExitTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_Ladder_Div.BP_Ladder_Div_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_Ladder_Div.BP_Ladder_Div_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFinishExtending(); // Function BP_Ladder_Div.BP_Ladder_Div_C.OnFinishExtending // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStartRetracting(); // Function BP_Ladder_Div.BP_Ladder_Div_C.OnStartRetracting // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Ladder_Div.BP_Ladder_Div_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Enable Throttling(); // Function BP_Ladder_Div.BP_Ladder_Div_C.Enable Throttling // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Ladder_Div(int32_t EntryPoint); // Function BP_Ladder_Div.BP_Ladder_Div_C.ExecuteUbergraph_BP_Ladder_Div // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

