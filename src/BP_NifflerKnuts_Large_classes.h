// BlueprintGeneratedClass BP_NifflerKnuts_Large.BP_NifflerKnuts_Large_C
// Size: 0x390 (Inherited: 0x350)
struct ABP_NifflerKnuts_Large_C : ABP_InventoryObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct USceneComponent* Scene; // 0x358(0x08)
	struct UBoxComponent* Box; // 0x360(0x08)
	struct TArray<struct UStaticMesh*> StaticMeshes; // 0x368(0x10)
	struct UStaticMesh* selectedMesh; // 0x378(0x08)
	bool UpdateMesh; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct USkinFXComponent* SkinFXref; // 0x388(0x08)

	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_NifflerKnuts_Large.BP_NifflerKnuts_Large_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_NifflerKnuts_Large.BP_NifflerKnuts_Large_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_NifflerKnuts_Large.BP_NifflerKnuts_Large_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_NifflerKnuts_Large.BP_NifflerKnuts_Large_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_NifflerKnuts_Large.BP_NifflerKnuts_Large_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_NifflerKnuts_Large.BP_NifflerKnuts_Large_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_NifflerKnuts_Large.BP_NifflerKnuts_Large_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_NifflerKnuts_Large.BP_NifflerKnuts_Large_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_NifflerKnuts_Large(int32_t EntryPoint); // Function BP_NifflerKnuts_Large.BP_NifflerKnuts_Large_C.ExecuteUbergraph_BP_NifflerKnuts_Large // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

