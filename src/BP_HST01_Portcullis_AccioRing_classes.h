// BlueprintGeneratedClass BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C
// Size: 0x290 (Inherited: 0x248)
struct ABP_HST01_Portcullis_AccioRing_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPointLightComponent* PointLight; // 0x250(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258(0x08)
	struct USkeletalMeshComponent* Ring; // 0x260(0x08)
	struct USphereComponent* Sphere; // 0x268(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x270(0x08)
	struct UObjectStateComponent* ObjectState; // 0x278(0x08)
	struct FMulticastInlineDelegate OnRingHitBySpell; // 0x280(0x10)

	struct FName GetMainBone(); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.GetMainBone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetMainPrimitive(); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.GetMainPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnReset(); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.OnReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetupSfx(struct UAkComponent* AkComponent); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.SetupSfx // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HST01_Portcullis_AccioRing(int32_t EntryPoint); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.ExecuteUbergraph_BP_HST01_Portcullis_AccioRing // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnRingHitBySpell__DelegateSignature(struct FName SpellType); // Function BP_HST01_Portcullis_AccioRing.BP_HST01_Portcullis_AccioRing_C.OnRingHitBySpell__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

