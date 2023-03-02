// BlueprintGeneratedClass BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C
// Size: 0x3c8 (Inherited: 0x280)
struct ABP_WE_ReadAllAboutIt_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UDecalComponent* MI_WE_Food_Decal_3; // 0x288(0x08)
	struct UDecalComponent* MI_WE_Food_Decal_01; // 0x290(0x08)
	struct UStaticMeshComponent* SM_BCProps_FloorCloth_B; // 0x298(0x08)
	struct UStaticMeshComponent* SM_BroomRace_ActivityPad_RopeBend; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_WE_NewspaperStack_Sml02; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_CloseCrate_Medium_002_W; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_HW_Trash_PaperScraps_A; // 0x2b8(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_4SM_HW_MC_Nail; // 0x2c0(0x08)
	struct UStaticMeshComponent* SM_WE_ScrunchedPaper; // 0x2c8(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_2SM_Int_BCProps_CloseCrate_Medium_003_W; // 0x2d0(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_8SM_WE_NewspaperStack_SML; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_HW_Trash_PaperScraps_B; // 0x2e0(0x08)
	struct UChildActorComponent* Candle; // 0x2e8(0x08)
	struct UChildActorComponent* Lantern; // 0x2f0(0x08)
	struct UChildActorComponent* Newspaper12; // 0x2f8(0x08)
	struct UChildActorComponent* Newspaper11; // 0x300(0x08)
	struct UChildActorComponent* Newspaper10; // 0x308(0x08)
	struct UChildActorComponent* Newspaper9; // 0x310(0x08)
	struct UChildActorComponent* Newspaper8; // 0x318(0x08)
	struct UChildActorComponent* Newspaper7; // 0x320(0x08)
	struct UChildActorComponent* Newspaper6; // 0x328(0x08)
	struct UChildActorComponent* Newspaper5; // 0x330(0x08)
	struct UChildActorComponent* Newspaper3; // 0x338(0x08)
	struct UChildActorComponent* Newspaper1; // 0x340(0x08)
	struct UChildActorComponent* Newspaper; // 0x348(0x08)
	struct UStaticMeshComponent* SM_HW_Trash_PaperScraps_C; // 0x350(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x358(0x08)
	struct UObjectStateComponent* ObjectState; // 0x360(0x08)
	struct USceneComponent* Newspapers; // 0x368(0x08)
	struct USceneComponent* Dressing; // 0x370(0x08)
	struct ABP_Station_C* Station; // 0x378(0x08)
	struct TArray<struct FString> RichPaperDBVariations; // 0x380(0x10)
	struct UScheduledEntity* NewspaperHawker; // 0x390(0x08)
	struct UNPC_ReactionComponent* ReactionComp; // 0x398(0x08)
	int32_t DialogueSequence; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct FTimerHandle DialogueTimerHandle; // 0x3a8(0x08)
	int32_t WorldEventStage; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct FString CurrentNewspaperEntry; // 0x3b8(0x10)

	void SetNewspaperVisuals(); // Function BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C.SetNewspaperVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStageComplete(); // Function BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C.SetStageComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCurrentNewspaperEntry(struct FString& Entry); // Function BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C.GetCurrentNewspaperEntry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerOngoingVO(); // Function BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C.TriggerOngoingVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddWandToHand(struct AActor* Actor); // Function BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C.AddWandToHand // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StationExited(); // Function BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C.StationExited // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StationEntered(); // Function BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C.StationEntered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HawkerCreated(struct AActor* Actor, struct UScheduledEntity* ScheduledEntity); // Function BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C.HawkerCreated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_ReadAllAboutIt(int32_t EntryPoint); // Function BP_WE_ReadAllAboutIt.BP_WE_ReadAllAboutIt_C.ExecuteUbergraph_BP_WE_ReadAllAboutIt // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

