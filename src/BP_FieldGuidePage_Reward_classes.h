// BlueprintGeneratedClass BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C
// Size: 0x2b1 (Inherited: 0x248)
struct ABP_FieldGuidePage_Reward_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct ULocalStencilBoundsHintComponent* LocalStencilBoundsHint; // 0x250(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x258(0x08)
	struct USphereComponent* Sphere1; // 0x260(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268(0x08)
	struct UObjectStateComponent* ObjectState; // 0x270(0x08)
	struct USceneComponent* DefaultScene; // 0x278(0x08)
	struct UABP_FlyingPaper_C* AnimBP; // 0x280(0x08)
	float InterpDuration; // 0x288(0x04)
	float StartInterpTime; // 0x28c(0x04)
	struct FVector StartLocation; // 0x290(0x0c)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FString SaveStateName; // 0x2a0(0x10)
	bool CollectedByAccio; // 0x2b0(0x01)

	void Get_DesiredWorldDirection(struct FVector& OutWorldDirection); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.Get_DesiredWorldDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_DesiredWorldSpeed(float& OutSpeed); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.Get_DesiredWorldSpeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Get_LastDesiredWorldDirection(struct FVector& OutWorldDirection); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.Get_LastDesiredWorldDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AccioStart(); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.AccioStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CollectPage(); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.CollectPage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelfDestruct(); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.SelfDestruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveToDestination(bool& ReachedDestination); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.MoveToDestination // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Set_LastDesiredWorldDirection(struct FVector InWorldDirection); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.Set_LastDesiredWorldDirection // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_DesiredWorldSpeed(float InSpeed); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.Set_DesiredWorldSpeed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set_DesiredWorldDirection(struct FVector InWorldDirection); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.Set_DesiredWorldDirection // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void GoToLoco2(); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.GoToLoco2 // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GoToLoco1(); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.GoToLoco1 // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Perceived_AutoTarget(struct UObject* Caller); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.Perceived_AutoTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NoLongerPerceived_AutoTarget(struct UObject* Caller); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.NoLongerPerceived_AutoTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FieldGuidePage_Reward(int32_t EntryPoint); // Function BP_FieldGuidePage_Reward.BP_FieldGuidePage_Reward_C.ExecuteUbergraph_BP_FieldGuidePage_Reward // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

