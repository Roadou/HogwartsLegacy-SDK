// BlueprintGeneratedClass BP_Pensieve.BP_Pensieve_C
// Size: 0x318 (Inherited: 0x248)
struct ABP_Pensieve_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* CallOut; // 0x250(0x08)
	struct UObjectStateComponent* ObjectState; // 0x258(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x260(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268(0x08)
	struct UStaticMeshComponent* Bowl; // 0x270(0x08)
	struct FMissionName MissionNameBAD; // 0x278(0x08)
	struct FString FindPensieve; // 0x280(0x10)
	bool AutoSelect; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	struct FName MissionName; // 0x294(0x08)
	struct FName AchievementToAward; // 0x29c(0x08)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct TArray<struct AActor*> Target; // 0x2a8(0x10)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct FTransform RootTransform; // 0x2c0(0x30)
	struct FName BeaconID; // 0x2f0(0x08)
	struct FName Beacon World; // 0x2f8(0x08)
	struct FString Beacon Name; // 0x300(0x10)
	int64_t BeaconHandle; // 0x310(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_Pensieve.BP_Pensieve_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Pensieve.BP_Pensieve_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_Pensieve.BP_Pensieve_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Pensieve.BP_Pensieve_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_Pensieve.BP_Pensieve_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_Pensieve.BP_Pensieve_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RegisterBeacon(); // Function BP_Pensieve.BP_Pensieve_C.RegisterBeacon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnregisterBeacon(); // Function BP_Pensieve.BP_Pensieve_C.UnregisterBeacon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Pensieve(int32_t EntryPoint); // Function BP_Pensieve.BP_Pensieve_C.ExecuteUbergraph_BP_Pensieve // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

