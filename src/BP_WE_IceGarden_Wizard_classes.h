// BlueprintGeneratedClass BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C
// Size: 0x16bc (Inherited: 0x1688)
struct ABP_WE_IceGarden_Wizard_C : ABP_DB_Lightweight_Character_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1688(0x08)
	struct UStaticMeshComponent* Broom; // 0x1690(0x08)
	struct UChildActorComponent* Loot; // 0x1698(0x08)
	float GravityScale; // 0x16a0(0x04)
	char pad_16A4[0x4]; // 0x16a4(0x04)
	struct FTimerHandle ResetDurationTimerHandle; // 0x16a8(0x08)
	struct UObjectStateInfo* Wizard Object State Info; // 0x16b0(0x08)
	float Glacius Duration; // 0x16b8(0x04)

	void ResetWizardMeshCollision(); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.ResetWizardMeshCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetWizardMeshCollision(); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.SetWizardMeshCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetFrozenDuration(); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.ResetFrozenDuration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Thawed(); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.Thawed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_IceGarden_Wizard(int32_t EntryPoint); // Function BP_WE_IceGarden_Wizard.BP_WE_IceGarden_Wizard_C.ExecuteUbergraph_BP_WE_IceGarden_Wizard // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

