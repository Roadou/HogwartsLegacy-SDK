// BlueprintGeneratedClass BP_FastTravel_Statue_TOad.BP_FastTravel_Statue_Toad_C
// Size: 0x288 (Inherited: 0x258)
struct ABP_FastTravel_Statue_Toad_C : AFastTravelStatue {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct UStaticMeshComponent* Pillar; // 0x268(0x08)
	struct USkeletalMeshComponent* Statue; // 0x270(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x278(0x08)
	struct UABP_FastTravel_Statue_Toad_C* ABP Fast Travel Statue Toad; // 0x280(0x08)

	void ReceiveBeginPlay(); // Function BP_FastTravel_Statue_TOad.BP_FastTravel_Statue_Toad_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_FastTravel_Statue_TOad.BP_FastTravel_Statue_Toad_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartTeleport(struct UObject* Caller); // Function BP_FastTravel_Statue_TOad.BP_FastTravel_Statue_Toad_C.StartTeleport // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndTeleport(struct UObject* Caller); // Function BP_FastTravel_Statue_TOad.BP_FastTravel_Statue_Toad_C.EndTeleport // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableCognition(struct UObject* Caller, int32_t int); // Function BP_FastTravel_Statue_TOad.BP_FastTravel_Statue_Toad_C.EnableCognition // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FastTravel_Statue_Toad(int32_t EntryPoint); // Function BP_FastTravel_Statue_TOad.BP_FastTravel_Statue_Toad_C.ExecuteUbergraph_BP_FastTravel_Statue_Toad // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

