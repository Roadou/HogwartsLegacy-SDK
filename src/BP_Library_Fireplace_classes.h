// BlueprintGeneratedClass BP_Library_Fireplace.BP_Library_Fireplace_C
// Size: 0x30c (Inherited: 0x248)
struct ABP_Library_Fireplace_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_HW_L_FireplaceB; // 0x250(0x08)
	struct UBoxComponent* StoppingCollision; // 0x258(0x08)
	struct UAkComponent* Ak_BP_CavernDun_Glacius_Fireplace; // 0x260(0x08)
	struct UNiagaraComponent* XXLSteam02; // 0x268(0x08)
	struct UNiagaraComponent* XXLSteam01; // 0x270(0x08)
	struct UDecalSphereHelper* DecalSphereHelper; // 0x278(0x08)
	struct UDecalComponent* Decal; // 0x280(0x08)
	struct UStaticMeshComponent* SM_HM_Ember_A5; // 0x288(0x08)
	struct UStaticMeshComponent* SM_HM_Ember_A4; // 0x290(0x08)
	struct UStaticMeshComponent* SM_HM_Ember_A3; // 0x298(0x08)
	struct UStaticMeshComponent* SM_HM_Ember_A2; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_HM_Ember_A1; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_HM_Ember_A; // 0x2b0(0x08)
	struct USceneComponent* NavCrawlLocation; // 0x2b8(0x08)
	struct UPointLightComponent* PointLight; // 0x2c0(0x08)
	struct UBoxComponent* Box; // 0x2c8(0x08)
	struct UNiagaraComponent* XXLFire02; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_CavernDun_Glacius_Fireplace; // 0x2d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e0(0x08)
	float Timeline_1_NewTrack_0_CA0C6E3845290EE1686D029DDB2F665F; // 0x2e8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_CA0C6E3845290EE1686D029DDB2F665F; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2f0(0x08)
	struct UMaterialInstanceDynamic* EmberDynMaterial; // 0x2f8(0x08)
	bool Glacius Cast on Fireplace; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	struct FName Save Stat; // 0x304(0x08)

	void Timeline_1__FinishedFunc(); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void GlaciusCast(); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.GlaciusCast // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Library_Fireplace(int32_t EntryPoint); // Function BP_Library_Fireplace.BP_Library_Fireplace_C.ExecuteUbergraph_BP_Library_Fireplace // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

