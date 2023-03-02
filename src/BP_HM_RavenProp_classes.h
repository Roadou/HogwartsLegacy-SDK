// BlueprintGeneratedClass BP_HM_RavenProp.BP_HM_RavenProp_C
// Size: 0x322 (Inherited: 0x268)
struct ABP_HM_RavenProp_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USphereComponent* ColSphere; // 0x270(0x08)
	struct USlaveToSplineComponent* SlaveToSpline; // 0x278(0x08)
	struct USplineComponent* Spline2; // 0x280(0x08)
	struct USplineComponent* Spline1; // 0x288(0x08)
	struct USkeletalMeshComponent* Raven; // 0x290(0x08)
	struct USplineComponent* Spline; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	float ReturnSpeedCurveTimeline_SpeedCurve_94D8D70D4AEA0128C6C0D09069F6D7CB; // 0x2a8(0x04)
	enum class ETimelineDirection ReturnSpeedCurveTimeline__Direction_94D8D70D4AEA0128C6C0D09069F6D7CB; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* ReturnSpeedCurveTimeline; // 0x2b0(0x08)
	float SpeedCurveTimeline_SpeedCurve_85F0A71848B2538B6F4C47956CF109C9; // 0x2b8(0x04)
	enum class ETimelineDirection SpeedCurveTimeline__Direction_85F0A71848B2538B6F4C47956CF109C9; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* SpeedCurveTimeline; // 0x2c0(0x08)
	struct USceneComponent* raven_spline; // 0x2c8(0x08)
	struct TArray<struct UAnimSequence*> Anim; // 0x2d0(0x10)
	struct UNone* ABP; // 0x2e0(0x08)
	struct FObjectFadeParamsSpeedDuration Raven Fade In; // 0x2e8(0x0c)
	struct FObjectFadeParamsSpeedDuration Raven Fade Out; // 0x2f4(0x0c)
	float Raven fade time; // 0x300(0x04)
	bool IsReturning; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct FRotator StartRotation; // 0x308(0x0c)
	struct FRotator ReturnRotation; // 0x314(0x0c)
	bool Collision Vis; // 0x320(0x01)
	bool Should Return; // 0x321(0x01)

	void SetMeshFade(bool ShouldReturn); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.SetMeshFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartReturning(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.StartReturning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AssignRandomAnim(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.AssignRandomAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpeedCurveTimeline__FinishedFunc(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.SpeedCurveTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void SpeedCurveTimeline__UpdateFunc(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.SpeedCurveTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void SpeedCurveTimeline__Raven Fade__EventFunc(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.SpeedCurveTimeline__Raven Fade__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReturnSpeedCurveTimeline__FinishedFunc(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.ReturnSpeedCurveTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReturnSpeedCurveTimeline__UpdateFunc(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.ReturnSpeedCurveTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReturnSpeedCurveTimeline__StartLanding__EventFunc(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.ReturnSpeedCurveTimeline__StartLanding__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Flee(bool ShouldReturn); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.Flee // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReturnToSpot(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.ReturnToSpot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StartHarrass(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.StartHarrass // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopHarrass(); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.StopHarrass // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ColSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.BndEvt__ColSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_RavenProp(int32_t EntryPoint); // Function BP_HM_RavenProp.BP_HM_RavenProp_C.ExecuteUbergraph_BP_HM_RavenProp // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

