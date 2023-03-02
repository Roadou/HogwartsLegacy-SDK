// BlueprintGeneratedClass BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C
// Size: 0x49c (Inherited: 0x280)
struct ABP_WE_EnchantedScarecrow_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x288(0x08)
	struct USceneComponent* GroundCrowSpawn1; // 0x290(0x08)
	struct USceneComponent* GroundCrowSpawn; // 0x298(0x08)
	struct USceneComponent* GroundCrowSpawn2; // 0x2a0(0x08)
	struct USceneComponent* CrowSpawnLocations; // 0x2a8(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_4SM_Cairn_RockSM_B; // 0x2b0(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_8SM_Cairn_RockSM_D; // 0x2b8(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_4SM_TallGrass_01_Master; // 0x2c0(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_4SM_WheatGrass_C; // 0x2c8(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_3SM_Cairn_RockSM_A; // 0x2d0(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_4SM_Cairn_RockSM_C; // 0x2d8(0x08)
	struct USphereComponent* SpellOverlap; // 0x2e0(0x08)
	struct UCapsuleComponent* BlockingCapsule; // 0x2e8(0x08)
	struct USceneComponent* Dressing; // 0x2f0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2f8(0x08)
	struct UArrowComponent* Arrow; // 0x300(0x08)
	struct USphereComponent* AreaTrigger; // 0x308(0x08)
	struct USceneComponent* Scene; // 0x310(0x08)
	struct UBP_WorldEvent_DropComponentsToGround_C* BP_WorldEvent_DropComponentsToGround; // 0x318(0x08)
	struct UObjectStateComponent* ObjectState; // 0x320(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x328(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x330(0x08)
	float RotateOverTime_Alpha_0685DD304604E6C29BCA779F08F1160D; // 0x338(0x04)
	enum class ETimelineDirection RotateOverTime__Direction_0685DD304604E6C29BCA779F08F1160D; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct UTimelineComponent* RotateOverTime; // 0x340(0x08)
	struct FVector2D MinMaxScarecrowTiredTime; // 0x348(0x08)
	struct FVector2D MinMaxCrowHarrassCooldown; // 0x350(0x08)
	struct FVector2D MinMaxCrowReturnCooldown; // 0x358(0x08)
	int32_t ScarecrowSuccessfulShooChance; // 0x360(0x04)
	int32_t CreatureSpawnChance; // 0x364(0x04)
	struct TArray<struct ABP_RavenProp_C*> Ravens; // 0x368(0x10)
	struct TArray<struct UAnimSequence*> RavenAnims; // 0x378(0x10)
	struct TArray<struct UAnimSequence*> RavenSecondaryAnims; // 0x388(0x10)
	struct TArray<struct AActor*> CreaturesNearby; // 0x398(0x10)
	struct TArray<struct AActor*> StudentsNearby; // 0x3a8(0x10)
	struct UABP_WE_EnchantedScarecrow_Scarecrow_C* ABP; // 0x3b8(0x08)
	bool IsSleeping; // 0x3c0(0x01)
	bool HasCrows; // 0x3c1(0x01)
	bool IsShooing; // 0x3c2(0x01)
	bool CanReactToCreature; // 0x3c3(0x01)
	bool WasShooSuccessful; // 0x3c4(0x01)
	bool ShouldCheckCrowSuccess; // 0x3c5(0x01)
	char pad_3C6[0x2]; // 0x3c6(0x02)
	float CurrentShooDuration; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FTimerHandle ScarecrowShooCooldownHandle; // 0x3d0(0x08)
	struct FTimerHandle ScarecrowTiredBufferHandle; // 0x3d8(0x08)
	struct FTimerHandle ScarecrowShooResultTimerHandle; // 0x3e0(0x08)
	struct FTimerHandle CrowHarrassCooldownHandle; // 0x3e8(0x08)
	struct FTimerHandle CrowReturnBufferHandle; // 0x3f0(0x08)
	float MaxAngleToTurn; // 0x3f8(0x04)
	bool HasRotated; // 0x3fc(0x01)
	bool IsRotating; // 0x3fd(0x01)
	char pad_3FE[0x2]; // 0x3fe(0x02)
	struct FHitResult HitData; // 0x400(0x88)
	struct TArray<struct USceneComponent*> CrowSpawnTransforms; // 0x488(0x10)
	int32_t CrowSpawnIndex; // 0x498(0x04)

	void RotateToPlayer(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.RotateToPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerNearbyCreatureFlee(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.TriggerNearbyCreatureFlee // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScarecrowSleep(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ScarecrowSleep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScarecrowTired(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ScarecrowTired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScarecrowCheckIfTired(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ScarecrowCheckIfTired // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScarecrowShooUnsuccessful(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ScarecrowShooUnsuccessful // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScarecrowShooSuccessful(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ScarecrowShooSuccessful // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScarecrowShoo(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ScarecrowShoo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScarecrowAnnoyed(struct FHitResult Hit); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ScarecrowAnnoyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScarecrowStartled(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ScarecrowStartled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CrowsCheckReturn(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.CrowsCheckReturn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CrowsStopHarrass(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.CrowsStopHarrass // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CrowsHarrass(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.CrowsHarrass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CrowsScareAway(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.CrowsScareAway // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CrowsSpawn(bool& FinishedSpawning); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.CrowsSpawn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CrowCheckSuccessfulShoo(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.CrowCheckSuccessfulShoo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCrowSpawnPoints(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.GetCrowSpawnPoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckIfStudent(struct AActor* OtherActor, bool& Success); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.CheckIfStudent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ClearAllTimerHandles(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ClearAllTimerHandles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartBehaviourTimer(struct FString FunctionName, float Time, bool Looping, struct FTimerHandle& Handle); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.StartBehaviourTimer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RotateOverTime__FinishedFunc(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.RotateOverTime__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void RotateOverTime__UpdateFunc(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.RotateOverTime__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Area_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.BndEvt__Area_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CheckShooSuccess(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.CheckShooSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShooFailed(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ShooFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartRotatingToPlayer(); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.StartRotatingToPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_EnchantedScarecrow(int32_t EntryPoint); // Function BP_WE_EnchantedScarecrow.BP_WE_EnchantedScarecrow_C.ExecuteUbergraph_BP_WE_EnchantedScarecrow // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

