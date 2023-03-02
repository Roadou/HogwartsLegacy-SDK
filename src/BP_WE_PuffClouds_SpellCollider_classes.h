// BlueprintGeneratedClass BP_WE_PuffClouds_SpellCollider.BP_WE_PuffClouds_SpellCollider_C
// Size: 0x268 (Inherited: 0x250)
struct ABP_WE_PuffClouds_SpellCollider_C : ATriggerBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ABP_WE_PuffClouds_C* EventManager; // 0x258(0x08)
	struct ANPC_Character* Puffskein; // 0x260(0x08)

	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_PuffClouds_SpellCollider.BP_WE_PuffClouds_SpellCollider_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_PuffClouds_SpellCollider.BP_WE_PuffClouds_SpellCollider_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_PuffClouds_SpellCollider.BP_WE_PuffClouds_SpellCollider_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_PuffClouds_SpellCollider.BP_WE_PuffClouds_SpellCollider_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_PuffClouds_SpellCollider.BP_WE_PuffClouds_SpellCollider_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_PuffClouds_SpellCollider.BP_WE_PuffClouds_SpellCollider_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_PuffClouds_SpellCollider.BP_WE_PuffClouds_SpellCollider_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_PuffClouds_SpellCollider(int32_t EntryPoint); // Function BP_WE_PuffClouds_SpellCollider.BP_WE_PuffClouds_SpellCollider_C.ExecuteUbergraph_BP_WE_PuffClouds_SpellCollider // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

