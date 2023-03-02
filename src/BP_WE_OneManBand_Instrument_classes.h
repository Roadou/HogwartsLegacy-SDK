// BlueprintGeneratedClass BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C
// Size: 0x2e0 (Inherited: 0x280)
struct ABP_WE_OneManBand_Instrument_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USkeletalMeshComponent* InstrumentMeshComponent; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct UAnimMontage* Instrument_montage; // 0x298(0x08)
	struct USkeletalMesh* Instrument_Mesh; // 0x2a0(0x08)
	struct FName Wise State Group; // 0x2a8(0x08)
	struct FTransform Instrument Transform; // 0x2b0(0x30)

	void Set Position(); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.Set Position // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Audio State(struct FName State, struct AActor* Instigator); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.Set Audio State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyEnd_AC3C03154699A9547ABD3A9271F00703(struct FName NotifyName); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnNotifyEnd_AC3C03154699A9547ABD3A9271F00703 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyBegin_AC3C03154699A9547ABD3A9271F00703(struct FName NotifyName); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnNotifyBegin_AC3C03154699A9547ABD3A9271F00703 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInterrupted_AC3C03154699A9547ABD3A9271F00703(struct FName NotifyName); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnInterrupted_AC3C03154699A9547ABD3A9271F00703 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBlendOut_AC3C03154699A9547ABD3A9271F00703(struct FName NotifyName); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnBlendOut_AC3C03154699A9547ABD3A9271F00703 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCompleted_AC3C03154699A9547ABD3A9271F00703(struct FName NotifyName); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnCompleted_AC3C03154699A9547ABD3A9271F00703 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Toggle Music On(struct AActor* Stage Actor); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.Toggle Music On // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_OneManBand_Instrument(int32_t EntryPoint); // Function BP_WE_OneManBand_Instrument.BP_WE_OneManBand_Instrument_C.ExecuteUbergraph_BP_WE_OneManBand_Instrument // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

