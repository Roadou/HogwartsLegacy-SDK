// BlueprintGeneratedClass BP_Tier3_Character.BP_Tier3_Character_C
// Size: 0x1868 (Inherited: 0x1830)
struct ABP_Tier3_Character_C : ANonCombat_Character {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1830(0x08)
	struct UFacialComponent* Facial; // 0x1838(0x08)
	struct UAnimationComponent* Animation; // 0x1840(0x08)
	struct UCustomizableCharacterComponent* CustomizableCharacter; // 0x1848(0x08)
	struct UCharacterStateComponent* CharacterStateComponent; // 0x1850(0x08)
	struct FMulticastInlineDelegate OnSpellHit; // 0x1858(0x10)

	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Tier3_Character.BP_Tier3_Character_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Tier3_Character.BP_Tier3_Character_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Tier3_Character.BP_Tier3_Character_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Tier3_Character.BP_Tier3_Character_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Tier3_Character.BP_Tier3_Character_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Tier3_Character.BP_Tier3_Character_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Tier3_Character.BP_Tier3_Character_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Tier3_Character(int32_t EntryPoint); // Function BP_Tier3_Character.BP_Tier3_Character_C.ExecuteUbergraph_BP_Tier3_Character // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnSpellHit__DelegateSignature(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult Hit, struct FVector ImpactDirection); // Function BP_Tier3_Character.BP_Tier3_Character_C.OnSpellHit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

