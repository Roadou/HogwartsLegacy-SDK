// BlueprintGeneratedClass BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C
// Size: 0x271 (Inherited: 0x248)
struct ABP_WE_HungryForRubbish_TrashObject_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Sphere; // 0x250(0x08)
	struct UStaticMeshComponent* PaperMesh; // 0x258(0x08)
	struct USpellImpactComponent* SpellImpact; // 0x260(0x08)
	struct UObjectStateComponent* ObjectState; // 0x268(0x08)
	bool SpawnedInHand?; // 0x270(0x01)

	void Attach to Hand(struct USkeletalMeshComponent* Attach ref, struct FName Socket Name); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.Attach to Hand // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Perform Throw Impulse(); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.Perform Throw Impulse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void [WE_HungryForRubbish] Trash Object Spawn(struct USkeletalMeshComponent* Attach ref); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.[WE_HungryForRubbish] Trash Object Spawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void [WE_HungryForRubbish] Trash Object Drop(bool Throw?); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.[WE_HungryForRubbish] Trash Object Drop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_HungryForRubbish_TrashObject(int32_t EntryPoint); // Function BP_WE_HungryForRubbish_TrashObject.BP_WE_HungryForRubbish_TrashObject_C.ExecuteUbergraph_BP_WE_HungryForRubbish_TrashObject // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

