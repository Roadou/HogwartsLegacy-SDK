// BlueprintGeneratedClass BP_Rune.BP_Rune_C
// Size: 0x344 (Inherited: 0x248)
struct ABP_Rune_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_Rune; // 0x250(0x08)
	struct UBoxComponent* Box; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Puzzle_Cube_Reset_InRing; // 0x260(0x08)
	struct UStaticMeshComponent* SM_AncientMagic_Timer_Outer_Circle; // 0x268(0x08)
	struct UStaticMeshComponent* SM_AncientMagic_Timer_Middle_Circle; // 0x270(0x08)
	struct USceneComponent* Outer; // 0x278(0x08)
	struct USceneComponent* middle; // 0x280(0x08)
	struct UStaticMeshComponent* SM_AncientMagic_Timer_Inner_Circle; // 0x288(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x290(0x08)
	struct UObjectStateComponent* ObjectState; // 0x298(0x08)
	struct USceneComponent* Scene; // 0x2a0(0x08)
	float RuneOffTimer_OffTrack_11FD54EC4070A585F1FF989DBC989C39; // 0x2a8(0x04)
	enum class ETimelineDirection RuneOffTimer__Direction_11FD54EC4070A585F1FF989DBC989C39; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* RuneOffTimer; // 0x2b0(0x08)
	float RuneTimer_NewTrack_0_584B8FF14EA9408C55A18F858A653017; // 0x2b8(0x04)
	enum class ETimelineDirection RuneTimer__Direction_584B8FF14EA9408C55A18F858A653017; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* RuneTimer; // 0x2c0(0x08)
	struct FMulticastInlineDelegate RuneCheck; // 0x2c8(0x10)
	struct FMulticastInlineDelegate RuneLockCheck; // 0x2d8(0x10)
	bool Save; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	struct FName Stat; // 0x2ec(0x08)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct UMaterialInstanceDynamic* MAT; // 0x2f8(0x08)
	struct TArray<struct AActor*> Target; // 0x300(0x10)
	float Time; // 0x310(0x04)
	bool Locked; // 0x314(0x01)
	bool Cleared; // 0x315(0x01)
	bool ReadyToPlay; // 0x316(0x01)
	char pad_317[0x1]; // 0x317(0x01)
	struct FMulticastInlineDelegate RuneReset; // 0x318(0x10)
	struct FMulticastInlineDelegate RuneShot; // 0x328(0x10)
	float AdjustedTime; // 0x338(0x04)
	bool IsEasyMode; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	float EmissiveMultiplier; // 0x340(0x04)

	void UserConstructionScript(); // Function BP_Rune.BP_Rune_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RuneTimer__FinishedFunc(); // Function BP_Rune.BP_Rune_C.RuneTimer__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void RuneTimer__UpdateFunc(); // Function BP_Rune.BP_Rune_C.RuneTimer__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void RuneOffTimer__FinishedFunc(); // Function BP_Rune.BP_Rune_C.RuneOffTimer__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void RuneOffTimer__UpdateFunc(); // Function BP_Rune.BP_Rune_C.RuneOffTimer__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_Rune.BP_Rune_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Rune.BP_Rune_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Rune.BP_Rune_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Rune.BP_Rune_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Rune.BP_Rune_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Rune.BP_Rune_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Rune.BP_Rune_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_Rune.BP_Rune_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Rune.BP_Rune_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TurnOff(); // Function BP_Rune.BP_Rune_C.TurnOff // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoorOpened_Event_1(); // Function BP_Rune.BP_Rune_C.DoorOpened_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Rune.BP_Rune_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_Rune.BP_Rune_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_Rune.BP_Rune_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DifficultyChanged(enum class EDifficulty NewDifficulty); // Function BP_Rune.BP_Rune_C.DifficultyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetClearedEvent(); // Function BP_Rune.BP_Rune_C.SetClearedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableRune(); // Function BP_Rune.BP_Rune_C.DisableRune // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Rune(int32_t EntryPoint); // Function BP_Rune.BP_Rune_C.ExecuteUbergraph_BP_Rune // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void RuneShot__DelegateSignature(); // Function BP_Rune.BP_Rune_C.RuneShot__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RuneReset__DelegateSignature(); // Function BP_Rune.BP_Rune_C.RuneReset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RuneLockCheck__DelegateSignature(); // Function BP_Rune.BP_Rune_C.RuneLockCheck__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RuneCheck__DelegateSignature(struct FString Type, float Value); // Function BP_Rune.BP_Rune_C.RuneCheck__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

