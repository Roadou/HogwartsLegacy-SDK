// BlueprintGeneratedClass BP_FieldGuidePage.BP_FieldGuidePage_C
// Size: 0x2f9 (Inherited: 0x248)
struct ABP_FieldGuidePage_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_audio_location_start_stop; // 0x250(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x258(0x08)
	struct USphereComponent* Sphere; // 0x260(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268(0x08)
	struct UObjectStateComponent* ObjectState; // 0x270(0x08)
	struct USceneComponent* DefaultScene; // 0x278(0x08)
	float Timeline_0_Emissive_8071C35F44CBD9FE64FA88AAFB0A9482; // 0x280(0x04)
	enum class ETimelineDirection Timeline_0__Direction_8071C35F44CBD9FE64FA88AAFB0A9482; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* Timeline_1; // 0x288(0x08)
	bool AllowMoveToDestination; // 0x290(0x01)
	char pad_291[0xf]; // 0x291(0x0f)
	struct FTransform Destination; // 0x2a0(0x30)
	bool MoveOutFromPlayer; // 0x2d0(0x01)
	bool MoveToObjectOfInterest; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct AFieldGuideHotSpot* FieldGuideHotSpot; // 0x2d8(0x08)
	float InterpSpeed; // 0x2e0(0x04)
	bool MoveBackIntoBook; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct FTimerHandle SelfDestructTimerHandle; // 0x2e8(0x08)
	struct UABP_PaperAndQuill_C* AnimBP; // 0x2f0(0x08)
	bool CollectedByAccio; // 0x2f8(0x01)

	void AccioStart(); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.AccioStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PageGoAway(); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.PageGoAway // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CollectPage(); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.CollectPage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ComputeMoveToObjectOfInterestDestination(); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.ComputeMoveToObjectOfInterestDestination // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ComputeMoveOutFromPlayerDestination(); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.ComputeMoveOutFromPlayerDestination // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SelfDestruct(); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.SelfDestruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveToDestination(float DeltaTime, float InterpSpeed, bool& ReachedDestination); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.MoveToDestination // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void RevelioEnd(struct UObject* Caller); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.RevelioEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevelioStart(struct UObject* Caller, float float); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.RevelioStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Perceived_AutoTarget(struct UObject* Caller); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.Perceived_AutoTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NoLongerPerceived_AutoTarget(struct UObject* Caller); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.NoLongerPerceived_AutoTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FieldGuidePage(int32_t EntryPoint); // Function BP_FieldGuidePage.BP_FieldGuidePage_C.ExecuteUbergraph_BP_FieldGuidePage // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

