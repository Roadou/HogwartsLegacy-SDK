// BlueprintGeneratedClass BP_WE_WNAT_Archway.BP_WE_WNAT_Archway_C
// Size: 0x308 (Inherited: 0x280)
struct ABP_WE_WNAT_Archway_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UObjectStateComponent* ObjectState; // 0x288(0x08)
	struct USceneComponent* BeaconLocation; // 0x290(0x08)
	struct UBoxComponent* InnerMazeTrigger; // 0x298(0x08)
	struct UBoxComponent* HedgeCollisionLeft; // 0x2a0(0x08)
	struct UBoxComponent* HedgeCollisionRight; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_WE_Arch_Flowers1; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_WE_MazeArch_outter_arch; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_WE_MazeArch_leaf_cards; // 0x2c0(0x08)
	struct UStaticMeshComponent* SM_WE_MazeArch_inner_arch; // 0x2c8(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x2d0(0x08)
	struct UBoxComponent* OuterMazeTrigger; // 0x2d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e0(0x08)
	struct ABP_WE_WNAT_MazeLayout_C* Maze; // 0x2e8(0x08)
	bool bEnteredCorrectly; // 0x2f0(0x01)
	bool bMazeSpawned; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct ANoMountZoneVolume* NoMountZone; // 0x2f8(0x08)
	int64_t BeaconHandle; // 0x300(0x08)

	void BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_WNAT_Archway.BP_WE_WNAT_Archway_C.BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_WNAT_Archway.BP_WE_WNAT_Archway_C.BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BoxTrigger1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_WNAT_Archway.BP_WE_WNAT_Archway_C.BndEvt__BoxTrigger1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BroomMount(struct UObject* Caller, struct AActor* Actor); // Function BP_WE_WNAT_Archway.BP_WE_WNAT_Archway_C.BroomMount // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_WNAT_Archway.BP_WE_WNAT_Archway_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CreatureMountComplete(struct UObject* Caller); // Function BP_WE_WNAT_Archway.BP_WE_WNAT_Archway_C.CreatureMountComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinishedWNAT(struct UObject* Caller); // Function BP_WE_WNAT_Archway.BP_WE_WNAT_Archway_C.FinishedWNAT // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_WNAT_Archway.BP_WE_WNAT_Archway_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_WNAT_Archway(int32_t EntryPoint); // Function BP_WE_WNAT_Archway.BP_WE_WNAT_Archway_C.ExecuteUbergraph_BP_WE_WNAT_Archway // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

