// BlueprintGeneratedClass BP_WE_CharitableContribution.BP_WE_CharitableContribution_C
// Size: 0x330 (Inherited: 0x280)
struct ABP_WE_CharitableContribution_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USphereComponent* Sphere; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct FString HoboName; // 0x298(0x10)
	struct FTimerHandle Call for help timer; // 0x2a8(0x08)
	struct UScheduledEntity* Hobo; // 0x2b0(0x08)
	struct FName RequestedObjectID; // 0x2b8(0x08)
	struct TArray<struct FName> RewardObjectIDs; // 0x2c0(0x10)
	struct FString ConversationName; // 0x2d0(0x10)
	bool EventFinished; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct AStation* Station; // 0x2e8(0x08)
	struct FDialogueConversationReference Help Dialogue Event; // 0x2f0(0x10)
	struct FDialogueConversationReference Helped Dialogue Event; // 0x300(0x10)
	struct FDialogueConversationReference No Item Dialogue Event; // 0x310(0x10)
	struct FDialogueConversationReference Reject Dialogue Event; // 0x320(0x10)

	void TearDownEvent(); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.TearDownEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateConversation(); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.UpdateConversation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RegisterWorldEventConversation(); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.RegisterWorldEventConversation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupWorldEventConversation(bool& Success); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.SetupWorldEventConversation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CallForHelpEvent(); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.CallForHelpEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndOverlapEvent(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.EndOverlapEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BeginOverlapEvent(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.BeginOverlapEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Conversation Started(); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.Conversation Started // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConversationFinished(); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.ConversationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void On Flesh Load Completed(struct AActor* Actor); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.On Flesh Load Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_CharitableContribution(int32_t EntryPoint); // Function BP_WE_CharitableContribution.BP_WE_CharitableContribution_C.ExecuteUbergraph_BP_WE_CharitableContribution // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

