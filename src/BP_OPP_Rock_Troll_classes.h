// BlueprintGeneratedClass BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C
// Size: 0x300 (Inherited: 0x2b0)
struct ABP_OPP_Rock_Troll_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UStaticMeshComponent* Obj; // 0x2b8(0x08)
	bool bDestroyOnHit; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FGameplayTagContainer SpecialTags; // 0x2c8(0x20)
	bool bDestroyTimer; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct TArray<struct FMultiFX2Var> Var; // 0x2f0(0x10)

	struct FGameplayTagContainer GetSpecialTags(); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.GetSpecialTags // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoEnd(struct AActor* Instigator); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnOppugnoEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AddSpecialTag(struct FGameplayTag GameplayTag); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.AddSpecialTag // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitByOppugnoImpact(struct AActor* Instigator, struct AActor* Object); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnHitByOppugnoImpact // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoPull(struct AActor* Instigator); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnOppugnoPull // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoThrow(struct AActor* Instigator, struct AActor* Target, struct FVector Velocity); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnOppugnoThrow // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoImpact(struct AActor* Instigator, struct AActor* Target, struct AActor* HitObject); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnOppugnoImpact // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOppugnoHold(struct AActor* Instigator); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.OnOppugnoHold // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OPP_Rock_Troll(int32_t EntryPoint); // Function BP_OPP_Rock_Troll.BP_OPP_Rock_Troll_C.ExecuteUbergraph_BP_OPP_Rock_Troll // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

