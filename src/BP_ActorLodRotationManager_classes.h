// BlueprintGeneratedClass BP_ActorLodRotationManager.BP_ActorLodRotationManager_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_ActorLodRotationManager_C : ALODActorRotationManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct TArray<struct TSoftObjectPtr<AActor>> LODs; // 0x258(0x10)

	void CheckAnyValidLod(bool& IsValid); // Function BP_ActorLodRotationManager.BP_ActorLodRotationManager_C.CheckAnyValidLod // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_ActorLodRotationManager.BP_ActorLodRotationManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ActorLodRotationManager(int32_t EntryPoint); // Function BP_ActorLodRotationManager.BP_ActorLodRotationManager_C.ExecuteUbergraph_BP_ActorLodRotationManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

