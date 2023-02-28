// BlueprintGeneratedClass BP_WE_Mirage_Dragon.BP_WE_Mirage_Dragon_C
// Size: 0x2b8 (Inherited: 0x280)
struct ABP_WE_Mirage_Dragon_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAkComponent* AK_BP_WE_Mirage_Dragon_Jaw; // 0x288(0x08)
	struct UAkComponent* AK_BP_WE_Mirage_Dragon_Neck; // 0x290(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x298(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x2a0(0x08)
	bool SpellCooldown; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UABP_WE_DragonBush_C* ABP; // 0x2b0(0x08)

	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_Mirage_Dragon.BP_WE_Mirage_Dragon_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_Mirage_Dragon.BP_WE_Mirage_Dragon_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_Mirage_Dragon.BP_WE_Mirage_Dragon_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_Mirage_Dragon.BP_WE_Mirage_Dragon_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_Mirage_Dragon.BP_WE_Mirage_Dragon_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_Mirage_Dragon.BP_WE_Mirage_Dragon_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_Mirage_Dragon.BP_WE_Mirage_Dragon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_Mirage_Dragon.BP_WE_Mirage_Dragon_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExpireSpellCooldown(); // Function BP_WE_Mirage_Dragon.BP_WE_Mirage_Dragon_C.ExpireSpellCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Mirage_Dragon(int32_t EntryPoint); // Function BP_WE_Mirage_Dragon.BP_WE_Mirage_Dragon_C.ExecuteUbergraph_BP_WE_Mirage_Dragon // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

