// BlueprintGeneratedClass BP_AccioPuzzleRing.BP_AccioPuzzleRing_C
// Size: 0x2b1 (Inherited: 0x248)
struct ABP_AccioPuzzleRing_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* TargetCube; // 0x250(0x08)
	struct UStaticMeshComponent* Handle; // 0x258(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x260(0x08)
	struct UObjectStateComponent* ObjectState; // 0x268(0x08)
	struct USceneComponent* Scene; // 0x270(0x08)
	float Timeline_0_NewTrack_0_11CC61A54625AD5A15E6AC933E3FE3D3; // 0x278(0x04)
	enum class ETimelineDirection Timeline_0__Direction_11CC61A54625AD5A15E6AC933E3FE3D3; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x280(0x08)
	struct FRotator StartingRotation; // 0x288(0x0c)
	bool Looping; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	float Time; // 0x298(0x04)
	bool startTargetingDisabled; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct FMulticastInlineDelegate CallHit_Open; // 0x2a0(0x10)
	bool isTargetingDisabled; // 0x2b0(0x01)

	struct FName GetMainBone(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.GetMainBone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetMainPrimitive(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.GetMainPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__Loop__EventFunc(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.Timeline_0__Loop__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnReset(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.OnReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetupSfx(struct UAkComponent* AkComponent); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.SetupSfx // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Pull(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.Pull // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Release(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.Release // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CallDisableAccioPuzzleRing(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.CallDisableAccioPuzzleRing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void CallEnableAccioPuzzleRing(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.CallEnableAccioPuzzleRing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AccioPuzzleRing(int32_t EntryPoint); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.ExecuteUbergraph_BP_AccioPuzzleRing // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void CallHit_Open__DelegateSignature(); // Function BP_AccioPuzzleRing.BP_AccioPuzzleRing_C.CallHit_Open__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

