// BlueprintGeneratedClass BP_AccioRing.BP_AccioRing_C
// Size: 0x2ae (Inherited: 0x248)
struct ABP_AccioRing_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_BCProps_RopeKnot_A; // 0x250(0x08)
	struct UStaticMeshComponent* SM_RopeLoop_Small_01; // 0x258(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x260(0x08)
	struct UObjectStateComponent* ObjectState; // 0x268(0x08)
	struct UStaticMeshComponent* Handle; // 0x270(0x08)
	struct UStaticMeshComponent* Anchor; // 0x278(0x08)
	struct USceneComponent* Scene; // 0x280(0x08)
	float Timeline_0_NewTrack_0_F46668384FA271C17171A0A843348714; // 0x288(0x04)
	enum class ETimelineDirection Timeline_0__Direction_F46668384FA271C17171A0A843348714; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x290(0x08)
	struct FRotator StartingRotation; // 0x298(0x0c)
	bool Looping; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	float Time; // 0x2a8(0x04)
	bool Disable Auto-Targeting; // 0x2ac(0x01)
	bool Rope; // 0x2ad(0x01)

	struct FName GetMainBone(); // Function BP_AccioRing.BP_AccioRing_C.GetMainBone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetMainPrimitive(); // Function BP_AccioRing.BP_AccioRing_C.GetMainPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_AccioRing.BP_AccioRing_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_AccioRing.BP_AccioRing_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_AccioRing.BP_AccioRing_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__Loop__EventFunc(); // Function BP_AccioRing.BP_AccioRing_C.Timeline_0__Loop__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnReset(); // Function BP_AccioRing.BP_AccioRing_C.OnReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetupSfx(struct UAkComponent* AkComponent); // Function BP_AccioRing.BP_AccioRing_C.SetupSfx // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AccioRing.BP_AccioRing_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_AccioRing.BP_AccioRing_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AccioRing.BP_AccioRing_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_AccioRing.BP_AccioRing_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_AccioRing.BP_AccioRing_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_AccioRing.BP_AccioRing_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_AccioRing.BP_AccioRing_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Pull(); // Function BP_AccioRing.BP_AccioRing_C.Pull // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Release(); // Function BP_AccioRing.BP_AccioRing_C.Release // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AccioRing.BP_AccioRing_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Turn Off Auto Targeting(); // Function BP_AccioRing.BP_AccioRing_C.Turn Off Auto Targeting // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AccioRing.BP_AccioRing_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AccioRing(int32_t EntryPoint); // Function BP_AccioRing.BP_AccioRing_C.ExecuteUbergraph_BP_AccioRing // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

