// BlueprintGeneratedClass BP_DoorDepulsoButton.BP_DoorDepulsoButton_C
// Size: 0x291 (Inherited: 0x248)
struct ABP_DoorDepulsoButton_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct FMulticastInlineDelegate DepulsoHit; // 0x268(0x10)
	struct TArray<struct AActor*> Target; // 0x278(0x10)
	bool Resets; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float ResetDelay; // 0x28c(0x04)
	bool IsActive; // 0x290(0x01)

	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_DoorDepulsoButton.BP_DoorDepulsoButton_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_DoorDepulsoButton.BP_DoorDepulsoButton_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_DoorDepulsoButton.BP_DoorDepulsoButton_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_DoorDepulsoButton.BP_DoorDepulsoButton_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_DoorDepulsoButton.BP_DoorDepulsoButton_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_DoorDepulsoButton.BP_DoorDepulsoButton_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_DoorDepulsoButton.BP_DoorDepulsoButton_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DoorDepulsoButton.BP_DoorDepulsoButton_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Reset(); // Function BP_DoorDepulsoButton.BP_DoorDepulsoButton_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DoorDepulsoButton(int32_t EntryPoint); // Function BP_DoorDepulsoButton.BP_DoorDepulsoButton_C.ExecuteUbergraph_BP_DoorDepulsoButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void DepulsoHit__DelegateSignature(); // Function BP_DoorDepulsoButton.BP_DoorDepulsoButton_C.DepulsoHit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

