// BlueprintGeneratedClass BP_AccioSwitch.BP_AccioSwitch_C
// Size: 0x30c (Inherited: 0x248)
struct ABP_AccioSwitch_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPointLightComponent* PointLight; // 0x250(0x08)
	struct UAkComponent* Ak_BP_AccioSwitch; // 0x258(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x260(0x08)
	struct UObjectStateComponent* ObjectState; // 0x268(0x08)
	struct UStaticMeshComponent* BlockFrame; // 0x270(0x08)
	struct UStaticMeshComponent* Handle; // 0x278(0x08)
	struct UStaticMeshComponent* AccioBlock; // 0x280(0x08)
	float Timeline_2_NewTrack_0_95AD5F224F3B838710E70199E734AAA0; // 0x288(0x04)
	enum class ETimelineDirection Timeline_2__Direction_95AD5F224F3B838710E70199E734AAA0; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* Timeline_3; // 0x290(0x08)
	float Timeline_1_NewTrack_0_C2BA96CF4D5B858A67F8069BD8BB1EF8; // 0x298(0x04)
	enum class ETimelineDirection Timeline_1__Direction_C2BA96CF4D5B858A67F8069BD8BB1EF8; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2a0(0x08)
	float Timeline_0_NewTrack_0_C299D37F4BAD0EA5271CD1995D25FEDE; // 0x2a8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_C299D37F4BAD0EA5271CD1995D25FEDE; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2b0(0x08)
	struct TArray<struct AActor*> Targets; // 0x2b8(0x10)
	bool Activated; // 0x2c8(0x01)
	bool LockSwitch; // 0x2c9(0x01)
	bool CorrectSwitch; // 0x2ca(0x01)
	bool Timed; // 0x2cb(0x01)
	float WaitTime; // 0x2cc(0x04)
	struct FVector StartingLocation; // 0x2d0(0x0c)
	struct FRotator StartingRotation; // 0x2dc(0x0c)
	struct FMulticastInlineDelegate SwitchedOn; // 0x2e8(0x10)
	struct FMulticastInlineDelegate SwitchedOff; // 0x2f8(0x10)
	bool Busy; // 0x308(0x01)
	bool HasLight; // 0x309(0x01)
	bool SwitchDisabled; // 0x30a(0x01)
	bool DisableOnComplete; // 0x30b(0x01)

	void UserConstructionScript(); // Function BP_AccioSwitch.BP_AccioSwitch_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_AccioSwitch.BP_AccioSwitch_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_AccioSwitch.BP_AccioSwitch_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_AccioSwitch.BP_AccioSwitch_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_AccioSwitch.BP_AccioSwitch_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function BP_AccioSwitch.BP_AccioSwitch_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function BP_AccioSwitch.BP_AccioSwitch_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_AccioSwitch.BP_AccioSwitch_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AccioSwitch.BP_AccioSwitch_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_AccioSwitch.BP_AccioSwitch_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_AccioSwitch.BP_AccioSwitch_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_AccioSwitch.BP_AccioSwitch_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_AccioSwitch.BP_AccioSwitch_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_AccioSwitch.BP_AccioSwitch_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AccioSwitch.BP_AccioSwitch_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void On(); // Function BP_AccioSwitch.BP_AccioSwitch_C.On // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AccioSwitch.BP_AccioSwitch_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Retract(); // Function BP_AccioSwitch.BP_AccioSwitch_C.Retract // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Off(); // Function BP_AccioSwitch.BP_AccioSwitch_C.Off // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceOn(float Play Rate); // Function BP_AccioSwitch.BP_AccioSwitch_C.ForceOn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ForceOff(float Play Rate); // Function BP_AccioSwitch.BP_AccioSwitch_C.ForceOff // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableSwitch(); // Function BP_AccioSwitch.BP_AccioSwitch_C.DisableSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_AccioSwitch.BP_AccioSwitch_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AccioSwitch.BP_AccioSwitch_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AccioSwitch(int32_t EntryPoint); // Function BP_AccioSwitch.BP_AccioSwitch_C.ExecuteUbergraph_BP_AccioSwitch // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void SwitchedOff__DelegateSignature(); // Function BP_AccioSwitch.BP_AccioSwitch_C.SwitchedOff__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchedOn__DelegateSignature(); // Function BP_AccioSwitch.BP_AccioSwitch_C.SwitchedOn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

