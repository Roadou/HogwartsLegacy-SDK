// BlueprintGeneratedClass BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C
// Size: 0x3e0 (Inherited: 0x2b0)
struct ABP_Brazier_Incendio_Dragon_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UNiagaraComponent* VFX_NS_Fire_Torch_Med_Dynamic; // 0x2b8(0x08)
	struct UAkComponent* Ak; // 0x2c0(0x08)
	struct USphereComponent* Sphere; // 0x2c8(0x08)
	struct UChildActorComponent* BP_HM_HW_MappedItems_Marker; // 0x2d0(0x08)
	struct USkeletalMeshComponent* SK_Brazier_Incendio_Master; // 0x2d8(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x2e0(0x08)
	float Timeline_DecreaseGlow_NewTrack_0_F285F6D946189BA468F40B9F43A97A2A; // 0x2e8(0x04)
	enum class ETimelineDirection Timeline_DecreaseGlow__Direction_F285F6D946189BA468F40B9F43A97A2A; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct UTimelineComponent* Timeline_DecreaseGlow; // 0x2f0(0x08)
	float Timeline_IncreaseGlow_NewTrack_0_5DB3FA3A4F2022BF7670E1B67E5EDDED; // 0x2f8(0x04)
	enum class ETimelineDirection Timeline_IncreaseGlow__Direction_5DB3FA3A4F2022BF7670E1B67E5EDDED; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct UTimelineComponent* Timeline_IncreaseGlow; // 0x300(0x08)
	struct TArray<struct FMultiFX2Var> FireFX; // 0x308(0x10)
	struct FMultiFX2Handle FireFXHandle; // 0x318(0x08)
	struct UMaterialInstanceDynamic* Dragon_MI; // 0x320(0x08)
	struct UMaterialInstanceDynamic* BrazerMI; // 0x328(0x08)
	float EmissiveBrightness; // 0x330(0x04)
	struct FName EmissiveParameter; // 0x334(0x08)
	struct FName FlameSocketName; // 0x33c(0x08)
	struct FName DragonMouthSocketName; // 0x344(0x08)
	enum class E_IncendioBrazierTypeEnum MeshType; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct TMap<enum class E_IncendioBrazierTypeEnum, struct USkeletalMesh*> BrazierData; // 0x350(0x50)
	struct FName Brazier Material Slot Name; // 0x3a0(0x08)
	struct FName Knowledge Subject; // 0x3a8(0x08)
	struct FString PageSpawnedString; // 0x3b0(0x10)
	struct FString PageCollectedString; // 0x3c0(0x10)
	struct ABP_FieldGuidePage_Reward_C* Page; // 0x3d0(0x08)
	struct UNiagaraSystem* DeathDisintigrationVFX; // 0x3d8(0x08)

	void TurnOffMinimap(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.TurnOffMinimap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_IncreaseGlow__FinishedFunc(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.Timeline_IncreaseGlow__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_IncreaseGlow__UpdateFunc(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.Timeline_IncreaseGlow__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_DecreaseGlow__FinishedFunc(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.Timeline_DecreaseGlow__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_DecreaseGlow__UpdateFunc(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.Timeline_DecreaseGlow__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnLight(struct AActor* Instigator); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.OnLight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExtinguish(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.OnExtinguish // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IncreaseGlow(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.IncreaseGlow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartFire(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.StartFire // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DecreaseGlow(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.DecreaseGlow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spawn XP Pages(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.Spawn XP Pages // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void PuzzleComplete(struct UObject* Caller); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.PuzzleComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PageCollected(struct UObject* Caller); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.PageCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Spell_Incendio_Unlocked(struct UObject* Caller); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.Spell_Incendio_Unlocked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateTargetable(); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.UpdateTargetable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableAllSpellsChanged(struct UObject* Caller, int32_t int); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.EnableAllSpellsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Brazier_Incendio_Dragon(int32_t EntryPoint); // Function BP_Brazier_Incendio_Dragon.BP_Brazier_Incendio_Dragon_C.ExecuteUbergraph_BP_Brazier_Incendio_Dragon // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

