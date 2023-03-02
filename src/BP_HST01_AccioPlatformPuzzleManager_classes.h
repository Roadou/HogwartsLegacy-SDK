// BlueprintGeneratedClass BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C
// Size: 0x2a2 (Inherited: 0x248)
struct ABP_HST01_AccioPlatformPuzzleManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* CollisionCheck; // 0x250(0x08)
	struct UBillboardComponent* Billboard; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct TArray<struct AActor*> PuzzleAreaBoundaries; // 0x268(0x10)
	struct ABP_Uni_M_PlatformD_C* AccioBoxActor; // 0x278(0x08)
	struct ATargetPoint* ResetPoint; // 0x280(0x08)
	struct FVector ResetOffset; // 0x288(0x0c)
	char pad_294[0x4]; // 0x294(0x04)
	struct ADynamicObjectVolume* DOV; // 0x298(0x08)
	bool IsPlayerOverlappingResetPoint; // 0x2a0(0x01)
	bool IsResetPending; // 0x2a1(0x01)

	void GetResetTransform(bool WithOffset, struct FTransform& ResetTransform); // Function BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C.GetResetTransform // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void ActorSpawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C.ActorSpawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetPuzzleBox(); // Function BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C.ResetPuzzleBox // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_HST01_AccioPlatformPuzzleManager_CollisionCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C.BndEvt__BP_HST01_AccioPlatformPuzzleManager_CollisionCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_HST01_AccioPlatformPuzzleManager_CollisionCheck_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C.BndEvt__BP_HST01_AccioPlatformPuzzleManager_CollisionCheck_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReenableBox(); // Function BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C.ReenableBox // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnActorOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C.OnActorOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TagCheck(); // Function BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C.TagCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetAfterTagGone(); // Function BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C.ResetAfterTagGone // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HST01_AccioPlatformPuzzleManager(int32_t EntryPoint); // Function BP_HST01_AccioPlatformPuzzleManager.BP_HST01_AccioPlatformPuzzleManager_C.ExecuteUbergraph_BP_HST01_AccioPlatformPuzzleManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

