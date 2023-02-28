// BlueprintGeneratedClass BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C
// Size: 0x320 (Inherited: 0x280)
struct ABP_WE_House_Elf_Janitor_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UBoxComponent* Box; // 0x288(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x290(0x08)
	struct USceneComponent* Scene; // 0x298(0x08)
	float EventDuration; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FTimerHandle Natural Apparate Timeout; // 0x2a8(0x08)
	struct TArray<struct TSoftObjectPtr<UAnimSequence>> Anims Floor; // 0x2b0(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimSequence>> Anims Wall; // 0x2c0(0x10)
	struct FGameplayTagContainer Wall Socket Descriptor; // 0x2d0(0x20)
	struct FGameplayTagContainer Floor Socket Descriptor; // 0x2f0(0x20)
	struct UWorldEventSocketComponent* FloorSocket; // 0x310(0x08)
	struct UWorldEventSocketComponent* WallSocket; // 0x318(0x08)

	void OnLoaded_DB2401E047622F70F53814A18A60BFCF(struct UObject* Loaded); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.OnLoaded_DB2401E047622F70F53814A18A60BFCF // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_F4ACF5104B5145A028F37C8A2857FDF3(struct UObject* Loaded); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.OnLoaded_F4ACF5104B5145A028F37C8A2857FDF3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Apparate House Elf Out(); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.Apparate House Elf Out // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_House_Elf_Janitor(int32_t EntryPoint); // Function BP_WE_House_Elf_Janitor.BP_WE_House_Elf_Janitor_C.ExecuteUbergraph_BP_WE_House_Elf_Janitor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

