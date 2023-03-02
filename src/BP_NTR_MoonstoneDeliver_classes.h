// BlueprintGeneratedClass BP_NTR_MoonstoneDeliver.BP_NTR_MoonstoneDeliver_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_NTR_MoonstoneDeliver_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* NTR_MoonDiffuser; // 0x250(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct FText ObjectName; // 0x268(0x18)

	struct FName GetUniqueBeaconId(); // Function BP_NTR_MoonstoneDeliver.BP_NTR_MoonstoneDeliver_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_NTR_MoonstoneDeliver.BP_NTR_MoonstoneDeliver_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_NTR_MoonstoneDeliver.BP_NTR_MoonstoneDeliver_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_NTR_MoonstoneDeliver.BP_NTR_MoonstoneDeliver_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StatChangedEvent_Event_2(struct FName Key, int32_t Value, int32_t Delta); // Function BP_NTR_MoonstoneDeliver.BP_NTR_MoonstoneDeliver_C.StatChangedEvent_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_NTR_MoonstoneDeliver(int32_t EntryPoint); // Function BP_NTR_MoonstoneDeliver.BP_NTR_MoonstoneDeliver_C.ExecuteUbergraph_BP_NTR_MoonstoneDeliver // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

