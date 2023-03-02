// BlueprintGeneratedClass BP_WE_WNAT_BookPlinth.BP_WE_WNAT_BookPlinth_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_WE_WNAT_BookPlinth_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* LorebookSpawn; // 0x250(0x08)
	struct UArrowComponent* Arrow; // 0x258(0x08)
	struct UStaticMeshComponent* SW_WE_WNAT_BookHolder1; // 0x260(0x08)
	struct UBillboardComponent* Billboard; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	struct ABP_WE_WNAT_Lorebook1_C* LorebookToSpawn; // 0x278(0x08)
	struct ABP_WE_WNAT_MazeLayout_C* EventManager; // 0x280(0x08)

	void SpawnLorebook(struct FGameplayTag LorebookTag); // Function BP_WE_WNAT_BookPlinth.BP_WE_WNAT_BookPlinth_C.SpawnLorebook // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LorebookSpawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function BP_WE_WNAT_BookPlinth.BP_WE_WNAT_BookPlinth_C.LorebookSpawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_WE_WNAT_BookPlinth.BP_WE_WNAT_BookPlinth_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_WNAT_BookPlinth(int32_t EntryPoint); // Function BP_WE_WNAT_BookPlinth.BP_WE_WNAT_BookPlinth_C.ExecuteUbergraph_BP_WE_WNAT_BookPlinth // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

