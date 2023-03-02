// BlueprintGeneratedClass BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C
// Size: 0x3e9 (Inherited: 0x280)
struct ABP_DevilsSnareDyn_Base_C : ADevilsSnareDynamic {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UBoxComponent* AffectCenter; // 0x288(0x08)
	struct UAkComponent* Ak_BP_DevilsSnare; // 0x290(0x08)
	struct UBoxComponent* DamageBox; // 0x298(0x08)
	struct UOdcObstacleComponent* OdcObstacle; // 0x2a0(0x08)
	float DeathWrapTimeline_VATAlpha_E079D0FB400FAC1875F0EF9AE06CC961; // 0x2a8(0x04)
	enum class ETimelineDirection DeathWrapTimeline__Direction_E079D0FB400FAC1875F0EF9AE06CC961; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* DeathWrapTimeline; // 0x2b0(0x08)
	float Shake_NewTrack_0_619CF2274774D5F64A608FAE2C0E5554; // 0x2b8(0x04)
	enum class ETimelineDirection Shake__Direction_619CF2274774D5F64A608FAE2C0E5554; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* Shake; // 0x2c0(0x08)
	float DeltaTime; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> SnareDMIs; // 0x2d0(0x10)
	float AffectDist; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct UStaticMeshComponent*> Snares; // 0x2e8(0x10)
	float DebugVineLengthAlpha; // 0x2f8(0x04)
	float MinAnimAlpha; // 0x2fc(0x04)
	bool DebugAnimAlpha; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	float FullLimitedMobilitySpeed; // 0x304(0x04)
	bool PlayerInside; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	struct FVector PlayerAttractPos; // 0x30c(0x0c)
	float PlayerAttractRate; // 0x318(0x04)
	float FullAnimAlpha; // 0x31c(0x04)
	bool SpellLightSource; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	struct FVector SpellLightSourceDest; // 0x324(0x0c)
	float SpellLightSourceTravelTime; // 0x330(0x04)
	bool AudioGrowLoopPlaying; // 0x334(0x01)
	bool AudioShrinkLoopPlaying; // 0x335(0x01)
	char pad_336[0x2]; // 0x336(0x02)
	float DamagePeriod; // 0x338(0x04)
	float DamagePercent; // 0x33c(0x04)
	float SlowTimeBeforeExtendedReach; // 0x340(0x04)
	float ExtendedAnimAlpha; // 0x344(0x04)
	float DamageAmtLocal; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UMaterialInstanceDynamic* CoilMIDA; // 0x350(0x08)
	struct UMaterialInstanceDynamic* CoilMIDB; // 0x358(0x08)
	struct UMaterialInstanceDynamic* CoilMIDC; // 0x360(0x08)
	bool UseExtendedAlpha; // 0x368(0x01)
	bool DebugCoil; // 0x369(0x01)
	char pad_36A[0x2]; // 0x36a(0x02)
	struct FVector DamageExtentRetracted; // 0x36c(0x0c)
	struct FVector DamageExtentExtended; // 0x378(0x0c)
	struct FVector DamageRelPosRetracted; // 0x384(0x0c)
	struct FVector DamageRelPosExtended; // 0x390(0x0c)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct FTimerHandle DamageTimer; // 0x3a0(0x08)
	bool DebugPrint; // 0x3a8(0x01)
	bool DoCoilDeath; // 0x3a9(0x01)
	bool IsSlowingPlayer; // 0x3aa(0x01)
	char pad_3AB[0x1]; // 0x3ab(0x01)
	struct FVector AffectPosDesired; // 0x3ac(0x0c)
	struct FVector AffectPos; // 0x3b8(0x0c)
	bool LumosActive; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	float CurrMaxAlpha; // 0x3c8(0x04)
	float AffectRateNormal; // 0x3cc(0x04)
	float AffectRateSpell; // 0x3d0(0x04)
	bool DebugDrawDamage; // 0x3d4(0x01)
	bool InitPositionsSet; // 0x3d5(0x01)
	char pad_3D6[0x2]; // 0x3d6(0x02)
	float ZeroAffectParam; // 0x3d8(0x04)
	float ZeroAffectParamDesired; // 0x3dc(0x04)
	float DisillusionmentCheck; // 0x3e0(0x04)
	float AttractDistCurr; // 0x3e4(0x04)
	bool DamagableLocal; // 0x3e8(0x01)

	bool DisableLightInteraction(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.DisableLightInteraction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableLightRaytrace(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.DisableLightRaytrace // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DecreaseFire(float decreaseAmount); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoAudio(struct FVector Desired, struct FVector Current); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.DoAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Approach(float Current, float Desired, float Rate, float DeltaTime, float& Value); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.Approach // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Shake__FinishedFunc(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.Shake__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Shake__UpdateFunc(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.Shake__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void DeathWrapTimeline__FinishedFunc(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.DeathWrapTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void DeathWrapTimeline__UpdateFunc(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.DeathWrapTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnEnteredLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredNearby(struct AActor* LumosBP); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnEnteredNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnExitedLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedNearby(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnExitedNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TriggerShake(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.TriggerShake // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TestShrinkAFX_Start(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.TestShrinkAFX_Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TestGrowAFX_Start(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.TestGrowAFX_Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TestShrinkAFX_Stop(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.TestShrinkAFX_Stop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TestGrowAFX_Stop(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.TestGrowAFX_Stop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeathCoil(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.DeathCoil // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DamageTimerEvent(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.DamageTimerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TickActivated(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.TickActivated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickDeactivated(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.TickDeactivated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StartDeathCoilFX(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.StartDeathCoilFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLightProximity(struct AActor* LumosBP); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnEnteredLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLightProximity(struct AActor* LumosBP); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.OnExitedLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitPositions(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.SetInitPositions // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckSetPlayerDisillusionment(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.CheckSetPlayerDisillusionment // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateAttractParamsInDMIs(); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.UpdateAttractParamsInDMIs // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DevilsSnareDyn_Base(int32_t EntryPoint); // Function BP_DevilsSnareDyn_Base.BP_DevilsSnareDyn_Base_C.ExecuteUbergraph_BP_DevilsSnareDyn_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

