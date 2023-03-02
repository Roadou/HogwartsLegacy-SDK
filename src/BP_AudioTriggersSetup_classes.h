// BlueprintGeneratedClass BP_AudioTriggersSetup.BP_AudioTriggersSetup_C
// Size: 0x198 (Inherited: 0xc8)
struct UBP_AudioTriggersSetup_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	float Cooldown; // 0xd0(0x04)
	bool Cooling; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct USpellToolRecord* Spell Tool Record; // 0xd8(0x08)
	struct TArray<struct FSTR_AudioSpellTrigger> SpellEvents; // 0xe0(0x10)
	struct FDialogueConversationReference LookIngAudioEvent; // 0xf0(0x10)
	float LookAtPrecision; // 0x100(0x04)
	bool LookAtDoOnce; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FDialogueConversationReference BreakAudioEvent; // 0x108(0x10)
	float Breakdelay; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FDialogueConversationReference> IdleAudioEvent; // 0x120(0x10)
	float IdleTime; // 0x130(0x04)
	float IdleProximity; // 0x134(0x04)
	bool IdleDoOnce; // 0x138(0x01)
	bool LookAtCoolDownOverride; // 0x139(0x01)
	bool IdleCoolDownOverride; // 0x13a(0x01)
	bool BreakCoolDownOverride; // 0x13b(0x01)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FDialogueConversationReference CustomAudioEvent; // 0x140(0x10)
	bool CustomCoolDownOverride; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct FDialogueConversationReference GoToAudioEvent; // 0x158(0x10)
	struct AActor* GoToLOC; // 0x168(0x08)
	bool PlayerTriggersGoTo; // 0x170(0x01)
	bool GoToDoOnce; // 0x171(0x01)
	bool GoToCoolDownOverride; // 0x172(0x01)
	char pad_173[0x5]; // 0x173(0x05)
	struct UPrimitiveComponent* Trigger; // 0x178(0x08)
	bool LookAtClearOnComplete; // 0x180(0x01)
	bool IdleClearOnComplete; // 0x181(0x01)
	bool CustomClearOnComplete; // 0x182(0x01)
	bool GoToClearOnComplete; // 0x183(0x01)
	bool Kill; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct FName RestoreStat; // 0x188(0x08)
	int32_t StatValue; // 0x190(0x04)
	int32_t IdleIndex; // 0x194(0x04)

	void DisIdleCheck(); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.DisIdleCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DISCheck(); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.DISCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void HitBySpell(struct UObject* Caller, struct FHitBySpellData& HitBySpell); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.HitBySpell // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LookCheck(); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.LookCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnActorHit_Event_1(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.OnActorHit_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Idle(); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.Idle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomAudioTrigger(); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.CustomAudioTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Arrived(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.Arrived // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void KillAudioTimers(); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.KillAudioTimers // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AudioTriggersSetup(int32_t EntryPoint); // Function BP_AudioTriggersSetup.BP_AudioTriggersSetup_C.ExecuteUbergraph_BP_AudioTriggersSetup // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

