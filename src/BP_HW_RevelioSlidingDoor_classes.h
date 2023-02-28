// BlueprintGeneratedClass BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C
// Size: 0x339 (Inherited: 0x2b0)
struct ABP_HW_RevelioSlidingDoor_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USphereComponent* DoorTrigger; // 0x2b8(0x08)
	struct UChildActorComponent* BP_Depulso_Button; // 0x2c0(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x2c8(0x08)
	struct UStaticMeshComponent* SM_HW_Door_SlidingPannel_Map_Right; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_HW_Door_SlidingPannel_Map_Left; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_HW_Doorway_SlidingPannel_Map; // 0x2e0(0x08)
	float Timeline_Close_Y_984AC144416166984AD466926AA15AB9; // 0x2e8(0x04)
	float Timeline_Close_X_984AC144416166984AD466926AA15AB9; // 0x2ec(0x04)
	enum class ETimelineDirection Timeline_Close__Direction_984AC144416166984AD466926AA15AB9; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct UTimelineComponent* Timeline_Close; // 0x2f8(0x08)
	float Timeline_Open_Y_A64A473645FC226615BAD38A9AF66821; // 0x300(0x04)
	float Timeline_Open_X_A64A473645FC226615BAD38A9AF66821; // 0x304(0x04)
	enum class ETimelineDirection Timeline_Open__Direction_A64A473645FC226615BAD38A9AF66821; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct UTimelineComponent* Timeline_Open; // 0x310(0x08)
	struct FRotator InitialRot; // 0x318(0x0c)
	bool IsOpen; // 0x324(0x01)
	bool IsMoving; // 0x325(0x01)
	char pad_326[0x2]; // 0x326(0x02)
	float Left Panel Starting Relative X; // 0x328(0x04)
	float MaxOpenDistance; // 0x32c(0x04)
	float OpenPercent; // 0x330(0x04)
	float Left Panel Starting Relative Y; // 0x334(0x04)
	bool IsManagedActor; // 0x338(0x01)

	bool AccioStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.AccioStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DepulsoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.DepulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DescendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.DescendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowAccio(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.DisallowAccio // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDepulso(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.DisallowDepulso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDescendo(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.DisallowDescendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowFlipendo(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.DisallowFlipendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowLevioso(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.DisallowLevioso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowWingardium(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.DisallowWingardium // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ExpulsoStart(struct AActor* Instigator, struct FVector Location); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.ExpulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool FlipendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.FlipendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoChargedStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location, struct FVector Velocity, bool InitiatedByPlayer, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.LeviosoChargedStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoStart(struct AActor* Instigator, struct FVector Location, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.LeviosoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool WingardiumStart(struct ASpellTool* SpellTool, struct AActor* Instigator); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.WingardiumStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartReveal(struct AActor* Instigator, bool ShowOccluded); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.StartReveal // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_Open__FinishedFunc(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.Timeline_Open__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_Open__UpdateFunc(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.Timeline_Open__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_Close__FinishedFunc(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.Timeline_Close__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_Close__UpdateFunc(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.Timeline_Close__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoThrow(struct ASpellTool* SpellTool, struct FVector ThrowDirection, struct FVector ThrowVelocity, struct FVector AngularVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnFlipendoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoEnd(struct AActor* Instigator, bool InitiatedByPlayer); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnLeviosoEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoFailed(bool InitiatedByPlayer); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnLeviosoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumEnd(struct AActor* Instigator); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnWingardiumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumFailed(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnWingardiumFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumGhostStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnWingardiumGhostStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRevealFade(struct AActor* Instigator); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnBeginRevealFade // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHiddenObjectHinted(struct AActor* Instigator); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnHiddenObjectHinted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHiddenObjectRevealed(struct AActor* Instigator); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnHiddenObjectRevealed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenDoors(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OpenDoors // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseDoors(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.CloseDoors // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEndReveal(struct AActor* Instigator); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnEndReveal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoFailed(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnFlipendoFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExpulsoThrow(struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnExpulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoFailed(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnDepulsoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoThrow(struct ASpellTool* SpellTool, struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnDepulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAccioThrow(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector ThrowVelocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnAccioThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void AddManagedActor(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.AddManagedActor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAccioFailed(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnAccioFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAccioEnd(struct AActor* Instigator, bool TransitioningToWingardium); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnAccioEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDepulso(); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.OnDepulso // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_HW_RevelioSlidingDoor_DoorTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.BndEvt__BP_HW_RevelioSlidingDoor_DoorTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_HW_RevelioSlidingDoor_DoorTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.BndEvt__BP_HW_RevelioSlidingDoor_DoorTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_RevelioSlidingDoor(int32_t EntryPoint); // Function BP_HW_RevelioSlidingDoor.BP_HW_RevelioSlidingDoor_C.ExecuteUbergraph_BP_HW_RevelioSlidingDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

