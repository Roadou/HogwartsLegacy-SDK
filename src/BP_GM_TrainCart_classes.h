// BlueprintGeneratedClass BP_GM_TrainCart.BP_GM_TrainCart_C
// Size: 0x35c (Inherited: 0x248)
struct ABP_GM_TrainCart_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_GM_TrainCart; // 0x250(0x08)
	struct UArrowComponent* Arrow1; // 0x258(0x08)
	struct UBoxComponent* Back Box; // 0x260(0x08)
	struct UBoxComponent* Front Box; // 0x268(0x08)
	struct UArrowComponent* Arrow; // 0x270(0x08)
	struct UStaticMeshComponent* Cube; // 0x278(0x08)
	struct UChildActorComponent* AccioRingFront; // 0x280(0x08)
	struct UChildActorComponent* AccioRingBack; // 0x288(0x08)
	struct UBoxComponent* BoxBack; // 0x290(0x08)
	struct UBoxComponent* BoxFront; // 0x298(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_GobMine_TrainWheel2; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_GobMine_TrainWheel1; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_GobMine_TrainWheel; // 0x2b8(0x08)
	struct USceneComponent* WheelRotatorC; // 0x2c0(0x08)
	struct USceneComponent* WheelRotatorB; // 0x2c8(0x08)
	struct USceneComponent* WheelRotatorA; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_GobMine_Train; // 0x2d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e0(0x08)
	float Timeline_1_NewTrack_0_55E470EE46456DC693FFFEBCCA1621B5; // 0x2e8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_55E470EE46456DC693FFFEBCCA1621B5; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2f0(0x08)
	float Timeline_0_NewTrack_0_8FF947154425E6464025DD9F7E76BD14; // 0x2f8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_8FF947154425E6464025DD9F7E76BD14; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct UTimelineComponent* Timeline_1; // 0x300(0x08)
	struct ABP_GM_TrainTrackSpline_C* TrainSpline; // 0x308(0x08)
	bool bStartAtEnd; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct TArray<struct ABP_AccioRing_C*> Rings; // 0x318(0x10)
	float ClosestRingDistance; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct ABP_AccioRing_C* CurrentRing; // 0x330(0x08)
	bool bWasCorrectlySpellCasted; // 0x338(0x01)
	bool bSpellHitFront; // 0x339(0x01)
	bool bSpellHitBack; // 0x33a(0x01)
	bool Moving Backward; // 0x33b(0x01)
	bool Moving Forward; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct ABiped_Player* My Player; // 0x340(0x08)
	bool Forward; // 0x348(0x01)
	bool Backward; // 0x349(0x01)
	char pad_34A[0x6]; // 0x34a(0x06)
	struct ACharacter* Player; // 0x350(0x08)
	float MetersPerSEcond; // 0x358(0x04)

	bool AccioStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.AccioStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DepulsoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.DepulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DescendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.DescendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowAccio(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.DisallowAccio // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDepulso(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.DisallowDepulso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDescendo(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.DisallowDescendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowFlipendo(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.DisallowFlipendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowLevioso(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.DisallowLevioso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowWingardium(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.DisallowWingardium // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ExpulsoStart(struct AActor* Instigator, struct FVector Location); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.ExpulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool FlipendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.FlipendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoChargedStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location, struct FVector Velocity, bool InitiatedByPlayer, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.LeviosoChargedStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoStart(struct AActor* Instigator, struct FVector Location, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.LeviosoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool WingardiumStart(struct ASpellTool* SpellTool, struct AActor* Instigator); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.WingardiumStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RingDistanceCheck(struct FVector HitLOC, struct FVector RingLoc, struct ABP_AccioRing_C* Ring); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.RingDistanceCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAccioFailed(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnAccioFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAccioThrow(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector ThrowVelocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnAccioThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoFailed(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnDepulsoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoThrow(struct ASpellTool* SpellTool, struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnDepulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnExpulsoThrow(struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnExpulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoFailed(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnFlipendoFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoThrow(struct ASpellTool* SpellTool, struct FVector ThrowDirection, struct FVector ThrowVelocity, struct FVector AngularVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnFlipendoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoEnd(struct AActor* Instigator, bool InitiatedByPlayer); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnLeviosoEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoFailed(bool InitiatedByPlayer); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnLeviosoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumEnd(struct AActor* Instigator); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnWingardiumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumFailed(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnWingardiumFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumGhostStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnWingardiumGhostStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BoxFront_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.BndEvt__BoxFront_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BoxBack_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.BndEvt__BoxBack_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Back Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.BndEvt__Back Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_GM_TrainCart_Front Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.BndEvt__BP_GM_TrainCart_Front Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_GM_TrainCart_Back Box_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.BndEvt__BP_GM_TrainCart_Back Box_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ForwardKill(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.ForwardKill // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BackwardKill(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.BackwardKill // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAccioEnd(struct AActor* Instigator, bool TransitioningToWingardium); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.OnAccioEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Kill(); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.Kill // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_TrainCart(int32_t EntryPoint); // Function BP_GM_TrainCart.BP_GM_TrainCart_C.ExecuteUbergraph_BP_GM_TrainCart // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

