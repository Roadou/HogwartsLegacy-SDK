// BlueprintGeneratedClass BP_WE_RainOnMe.BP_WE_RainOnMe_C
// Size: 0x328 (Inherited: 0x280)
struct ABP_WE_RainOnMe_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAkComponent* Ak_BP_WE_RainOnMe; // 0x288(0x08)
	struct UNiagaraComponent* Clouds; // 0x290(0x08)
	struct USphereComponent* StartTrigger; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	float LerpTimeline_T_8993FBFD4C4F02BC7187969FAF59CBB0; // 0x2a8(0x04)
	enum class ETimelineDirection LerpTimeline__Direction_8993FBFD4C4F02BC7187969FAF59CBB0; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* LerpTimeline; // 0x2b0(0x08)
	float TimeoutDuration; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct ABP_Station_C* Snow Station; // 0x2c0(0x08)
	struct ABP_Station_C* Rain Station; // 0x2c8(0x08)
	float WrongSpellSizeMod; // 0x2d0(0x04)
	float GalciusSizeMod; // 0x2d4(0x04)
	float WrongSpellColorMod; // 0x2d8(0x04)
	struct FLinearColor RainSnowColorMod; // 0x2dc(0x10)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FTimerHandle TimerHandle; // 0x2f0(0x08)
	struct UScheduledEntity* Student; // 0x2f8(0x08)
	struct UNiagaraComponent* VFX_Clouds; // 0x300(0x08)
	struct FLinearColor PrevColor; // 0x308(0x10)
	struct UDecalComponent* Decal; // 0x318(0x08)
	struct ABP_Station_C* Student Station; // 0x320(0x08)

	void OnStudentExitedStation(); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.OnStudentExitedStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinishEvent(); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.FinishEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateVFX(); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.UpdateVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupVFX(); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.SetupVFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spawn Student Hobo(); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.Spawn Student Hobo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LerpTimeline__FinishedFunc(); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.LerpTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void LerpTimeline__UpdateFunc(); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.LerpTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ChangeColor(struct FLinearColor TargetColor); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.ChangeColor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHoboGainFlesh(struct AActor* Actor, struct UScheduledEntity* ScheduledEntity); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.OnHoboGainFlesh // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RainOnMeTimeout(); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.RainOnMeTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_RainOnMe(int32_t EntryPoint); // Function BP_WE_RainOnMe.BP_WE_RainOnMe_C.ExecuteUbergraph_BP_WE_RainOnMe // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

