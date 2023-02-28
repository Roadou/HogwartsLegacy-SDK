// BlueprintGeneratedClass BP_RavenProp.BP_RavenProp_C
// Size: 0x334 (Inherited: 0x248)
struct ABP_RavenProp_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USlaveToSplineComponent* SlaveToSpline; // 0x250(0x08)
	struct USplineComponent* Spline2; // 0x258(0x08)
	struct USplineComponent* Spline1; // 0x260(0x08)
	struct USkeletalMeshComponent* Raven; // 0x268(0x08)
	struct USplineComponent* Spline; // 0x270(0x08)
	struct USceneComponent* Scene; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	float ReturnSpeedCurveTimeline_SpeedCurve_B6F16DAB443847743B7F50BDE7D8A4B6; // 0x288(0x04)
	enum class ETimelineDirection ReturnSpeedCurveTimeline__Direction_B6F16DAB443847743B7F50BDE7D8A4B6; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* ReturnSpeedCurveTimeline; // 0x290(0x08)
	float Timeline_0_SpeedCurve3_B32ABCAE4A7CAB3DA82F69AB38AEE824; // 0x298(0x04)
	float Timeline_0_SpeedCurve2_B32ABCAE4A7CAB3DA82F69AB38AEE824; // 0x29c(0x04)
	float Timeline_0_SpeedCurve1_B32ABCAE4A7CAB3DA82F69AB38AEE824; // 0x2a0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B32ABCAE4A7CAB3DA82F69AB38AEE824; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2a8(0x08)
	float SpeedCurveTimeline_SpeedCurve3_FF83D08B41975A149E496B92BF4E71FF; // 0x2b0(0x04)
	float SpeedCurveTimeline_SpeedCurve2_FF83D08B41975A149E496B92BF4E71FF; // 0x2b4(0x04)
	float SpeedCurveTimeline_SpeedCurve1_FF83D08B41975A149E496B92BF4E71FF; // 0x2b8(0x04)
	enum class ETimelineDirection SpeedCurveTimeline__Direction_FF83D08B41975A149E496B92BF4E71FF; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* SpeedCurveTimeline; // 0x2c0(0x08)
	struct USceneComponent* raven_spline; // 0x2c8(0x08)
	struct TArray<struct UAnimSequence*> Anim; // 0x2d0(0x10)
	struct TArray<struct UAnimSequence*> SecondaryAnim; // 0x2e0(0x10)
	struct UABP_WE_Raven_C* ABP; // 0x2f0(0x08)
	int32_t rnd_spline; // 0x2f8(0x04)
	struct FObjectFadeParamsSpeedDuration Raven Fade In; // 0x2fc(0x0c)
	struct FObjectFadeParamsSpeedDuration Raven Fade Out; // 0x308(0x0c)
	float Raven fade time; // 0x314(0x04)
	bool IsReturning; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	struct FRotator StartRotation; // 0x31c(0x0c)
	struct FRotator ReturnRotation; // 0x328(0x0c)

	void SetMeshFade(bool ShouldReturn); // Function BP_RavenProp.BP_RavenProp_C.SetMeshFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartReturning(); // Function BP_RavenProp.BP_RavenProp_C.StartReturning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CastToABP(struct UABP_WE_Raven_C*& ABP); // Function BP_RavenProp.BP_RavenProp_C.CastToABP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AssignRandomAnim(); // Function BP_RavenProp.BP_RavenProp_C.AssignRandomAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_RavenProp.BP_RavenProp_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpeedCurveTimeline__FinishedFunc(); // Function BP_RavenProp.BP_RavenProp_C.SpeedCurveTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void SpeedCurveTimeline__UpdateFunc(); // Function BP_RavenProp.BP_RavenProp_C.SpeedCurveTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void SpeedCurveTimeline__Raven Fade__EventFunc(); // Function BP_RavenProp.BP_RavenProp_C.SpeedCurveTimeline__Raven Fade__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_RavenProp.BP_RavenProp_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_RavenProp.BP_RavenProp_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__Raven Fade__EventFunc(); // Function BP_RavenProp.BP_RavenProp_C.Timeline_0__Raven Fade__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReturnSpeedCurveTimeline__FinishedFunc(); // Function BP_RavenProp.BP_RavenProp_C.ReturnSpeedCurveTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReturnSpeedCurveTimeline__UpdateFunc(); // Function BP_RavenProp.BP_RavenProp_C.ReturnSpeedCurveTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReturnSpeedCurveTimeline__StartLanding__EventFunc(); // Function BP_RavenProp.BP_RavenProp_C.ReturnSpeedCurveTimeline__StartLanding__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Flee(bool ShouldReturn); // Function BP_RavenProp.BP_RavenProp_C.Flee // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_RavenProp.BP_RavenProp_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_RavenProp.BP_RavenProp_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_RavenProp.BP_RavenProp_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReturnToSpot(); // Function BP_RavenProp.BP_RavenProp_C.ReturnToSpot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_RavenProp.BP_RavenProp_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_RavenProp.BP_RavenProp_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_RavenProp.BP_RavenProp_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_RavenProp.BP_RavenProp_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_RavenProp.BP_RavenProp_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void StartHarrass(); // Function BP_RavenProp.BP_RavenProp_C.StartHarrass // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopHarrass(); // Function BP_RavenProp.BP_RavenProp_C.StopHarrass // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_RavenProp(int32_t EntryPoint); // Function BP_RavenProp.BP_RavenProp_C.ExecuteUbergraph_BP_RavenProp // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

