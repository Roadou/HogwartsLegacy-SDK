// BlueprintGeneratedClass BP_NTR_MoonstonePickup.BP_NTR_MoonstonePickup_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_NTR_MoonstonePickup_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258(0x08)
	struct UStaticMeshComponent* NTR_MoonDiffuser; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct FText ObjectName; // 0x270(0x18)

	struct FName GetUniqueBeaconId(); // Function BP_NTR_MoonstonePickup.BP_NTR_MoonstonePickup_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_NTR_MoonstonePickup.BP_NTR_MoonstonePickup_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_NTR_MoonstonePickup.BP_NTR_MoonstonePickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_NTR_MoonstonePickup.BP_NTR_MoonstonePickup_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Updated NTR_02_CP03(struct UObject* Caller, struct FMissionID& MissionID); // Function BP_NTR_MoonstonePickup.BP_NTR_MoonstonePickup_C.Updated NTR_02_CP03 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_NTR_MoonstonePickup(int32_t EntryPoint); // Function BP_NTR_MoonstonePickup.BP_NTR_MoonstonePickup_C.ExecuteUbergraph_BP_NTR_MoonstonePickup // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

