// BlueprintGeneratedClass BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C
// Size: 0x1f0 (Inherited: 0x150)
struct UBTT_AutoNavigateToLocation_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct AController* PlayerController; // 0x158(0x08)
	struct ASocialTravelerController* SpawnedTravellerController; // 0x160(0x08)
	float PlayerCapsuleRadius; // 0x168(0x04)
	struct FVector NavLocation; // 0x16c(0x0c)
	struct FVector NavDirection; // 0x178(0x0c)
	int32_t NavState; // 0x184(0x04)
	float PathDistance; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FTimerHandle PathDistanceTimerHandle; // 0x190(0x08)
	struct FTimerHandle TimeExpiredHandle; // 0x198(0x08)
	float JogDistance; // 0x1a0(0x04)
	float WalkDistance; // 0x1a4(0x04)
	struct FGameplayTag LastLeaf; // 0x1a8(0x08)
	bool Transit; // 0x1b0(0x01)
	char pad_1B1[0xf]; // 0x1b1(0x0f)
	struct FTransform ConnectionTransform; // 0x1c0(0x30)

	void StationConnectionTransform(struct UBlackboardComponent* ActorBlackboard, bool& IsStation); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.StationConnectionTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NavStage_Sprint2Jog(struct ABiped_Character* BipedCharacter); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.NavStage_Sprint2Jog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NavStage_SprintOrJog(struct ABiped_Character* BipedCharacter); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.NavStage_SprintOrJog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NavStage_Jog2Walk(struct ABiped_Character* BipedCharacter); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.NavStage_Jog2Walk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NavStage_Final(struct ABiped_Character* BipedCharacter); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.NavStage_Final // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NavStage_Walk(struct ABiped_Character* BipedCharacter); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.NavStage_Walk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void GetPathDistance(); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.GetPathDistance // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TimeExpired(); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.TimeExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_AutoNavigateToLocation(int32_t EntryPoint); // Function BTT_AutoNavigateToLocation.BTT_AutoNavigateToLocation_C.ExecuteUbergraph_BTT_AutoNavigateToLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

