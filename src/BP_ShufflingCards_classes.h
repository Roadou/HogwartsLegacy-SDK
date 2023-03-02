// BlueprintGeneratedClass BP_ShufflingCards.BP_ShufflingCards_C
// Size: 0x27d (Inherited: 0x268)
struct ABP_ShufflingCards_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)
	int32_t Trick_Index; // 0x278(0x04)
	bool Collapse_Pyramid?; // 0x27c(0x01)

	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_ShufflingCards.BP_ShufflingCards_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_ShufflingCards.BP_ShufflingCards_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_ShufflingCards.BP_ShufflingCards_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_ShufflingCards.BP_ShufflingCards_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_ShufflingCards.BP_ShufflingCards_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_ShufflingCards.BP_ShufflingCards_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ShufflingCards.BP_ShufflingCards_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Apply_Trick_Index(int32_t Trick_Index); // Function BP_ShufflingCards.BP_ShufflingCards_C.Apply_Trick_Index // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SSC_NewTrick_Notify(); // Function BP_ShufflingCards.BP_ShufflingCards_C.SSC_NewTrick_Notify // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_ShufflingCards.BP_ShufflingCards_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ShufflingCards(int32_t EntryPoint); // Function BP_ShufflingCards.BP_ShufflingCards_C.ExecuteUbergraph_BP_ShufflingCards // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

