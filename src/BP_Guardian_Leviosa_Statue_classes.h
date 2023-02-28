// BlueprintGeneratedClass BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C
// Size: 0x340 (Inherited: 0x2b0)
struct ABP_Guardian_Leviosa_Statue_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UAkComponent* Ak; // 0x2b8(0x08)
	struct USphereComponent* Sphere; // 0x2c0(0x08)
	struct UChildActorComponent* BP_HM_HW_MappedItems_Marker; // 0x2c8(0x08)
	struct USkeletalMeshComponent* SK_HW_Guardian_Leviosa_Statue; // 0x2d0(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x2d8(0x08)
	float Timeline_0_NewTrack_0_AC1E3AF84904FB27B6BFB994D6178C6C; // 0x2e0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_AC1E3AF84904FB27B6BFB994D6178C6C; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2e8(0x08)
	struct FName Knowledge Subject; // 0x2f0(0x08)
	struct ABP_FieldGuidePage_Reward_C* SpawnedFieldGuidePage; // 0x2f8(0x08)
	float StartLoweringPageTime; // 0x300(0x04)
	float SocketLoweringDuration; // 0x304(0x04)
	struct FString PageSpawnedString; // 0x308(0x10)
	struct FString PageCollectedString; // 0x318(0x10)
	struct FObjectFadeParamsSpeedDuration Setup; // 0x328(0x0c)
	char pad_334[0x4]; // 0x334(0x04)
	struct UNiagaraSystem* DeathDisintigrationVFX; // 0x338(0x08)

	void TurnOffMinimap(); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.TurnOffMinimap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Spawn XP Pages(); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.Spawn XP Pages // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLevioso(); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.OnLevioso // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PuzzleComplete(struct UObject* Caller); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.PuzzleComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PageCollected(struct UObject* Caller); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.PageCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void UpdateTargetable(); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.UpdateTargetable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spell_Levioso_Unlocked(struct UObject* Caller); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.Spell_Levioso_Unlocked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableAllSpellsChanged(struct UObject* Caller, int32_t int); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.EnableAllSpellsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LowerPage(); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.LowerPage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Guardian_Leviosa_Statue(int32_t EntryPoint); // Function BP_Guardian_Leviosa_Statue.BP_Guardian_Leviosa_Statue_C.ExecuteUbergraph_BP_Guardian_Leviosa_Statue // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

