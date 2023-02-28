// BlueprintGeneratedClass BP_HouseChest.BP_HouseChest_C
// Size: 0x35c (Inherited: 0x2d0)
struct ABP_HouseChest_C : ASkeletalMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2d8(0x08)
	struct UABP_House_Chests_Collectibles_C* AnimBP; // 0x2e0(0x08)
	struct FString AllTokensAdded; // 0x2e8(0x10)
	int32_t Tokens; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FString SaveStateString; // 0x300(0x10)
	struct FString EarlyCompleteCheck; // 0x310(0x10)
	struct FString AllTokensAdded2; // 0x320(0x10)
	struct FName M_COM_19_ChestOpen; // 0x330(0x08)
	struct FName M_COM_19_ChestOneToken; // 0x338(0x08)
	struct FString AllTokensAdded1; // 0x340(0x10)
	bool DisallowPickup; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	struct FName BeaconID; // 0x354(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_HouseChest.BP_HouseChest_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayTokenVO(); // Function BP_HouseChest.BP_HouseChest_C.PlayTokenVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HouseChest.BP_HouseChest_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HouseChest.BP_HouseChest_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_HouseChest.BP_HouseChest_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TokenCollected(struct UObject* Caller); // Function BP_HouseChest.BP_HouseChest_C.TokenCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HouseChestOpened(struct UObject* Caller); // Function BP_HouseChest.BP_HouseChest_C.HouseChestOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TargetSighted(struct UObject* Caller); // Function BP_HouseChest.BP_HouseChest_C.TargetSighted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AllowPickup(); // Function BP_HouseChest.BP_HouseChest_C.AllowPickup // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HouseChest.BP_HouseChest_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HouseChest(int32_t EntryPoint); // Function BP_HouseChest.BP_HouseChest_C.ExecuteUbergraph_BP_HouseChest // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

