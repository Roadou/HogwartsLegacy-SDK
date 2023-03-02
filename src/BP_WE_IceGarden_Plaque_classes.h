// BlueprintGeneratedClass BP_WE_IceGarden_Plaque.BP_WE_IceGarden_Plaque_C
// Size: 0x298 (Inherited: 0x248)
struct ABP_WE_IceGarden_Plaque_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x250(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct TArray<struct FString> PlaqueTexts; // 0x270(0x10)
	struct ABP_WE_IceGarden_NPC_C* EventManager; // 0x280(0x08)
	struct FString PlaqueText; // 0x288(0x10)

	void SetStage(int32_t Stage, struct ABP_WE_IceGarden_NPC_C* EventManager); // Function BP_WE_IceGarden_Plaque.BP_WE_IceGarden_Plaque_C.SetStage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_IceGarden_Plaque.BP_WE_IceGarden_Plaque_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_WE_IceGarden_Plaque.BP_WE_IceGarden_Plaque_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_IceGarden_Plaque(int32_t EntryPoint); // Function BP_WE_IceGarden_Plaque.BP_WE_IceGarden_Plaque_C.ExecuteUbergraph_BP_WE_IceGarden_Plaque // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

