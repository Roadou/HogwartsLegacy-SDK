// BlueprintGeneratedClass WE_HOUSE_ELF_JANITOR_LevelInstance_20.WE_HOUSE_ELF_JANITOR_C
// Size: 0x258 (Inherited: 0x250)
struct AWE_HOUSE_ELF_JANITOR_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)

	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function WE_HOUSE_ELF_JANITOR_LevelInstance_20.WE_HOUSE_ELF_JANITOR_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function WE_HOUSE_ELF_JANITOR_LevelInstance_20.WE_HOUSE_ELF_JANITOR_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function WE_HOUSE_ELF_JANITOR_LevelInstance_20.WE_HOUSE_ELF_JANITOR_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function WE_HOUSE_ELF_JANITOR_LevelInstance_20.WE_HOUSE_ELF_JANITOR_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function WE_HOUSE_ELF_JANITOR_LevelInstance_20.WE_HOUSE_ELF_JANITOR_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function WE_HOUSE_ELF_JANITOR_LevelInstance_20.WE_HOUSE_ELF_JANITOR_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function WE_HOUSE_ELF_JANITOR_LevelInstance_20.WE_HOUSE_ELF_JANITOR_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_WE_HOUSE_ELF_JANITOR(int32_t EntryPoint); // Function WE_HOUSE_ELF_JANITOR_LevelInstance_20.WE_HOUSE_ELF_JANITOR_C.ExecuteUbergraph_WE_HOUSE_ELF_JANITOR // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

