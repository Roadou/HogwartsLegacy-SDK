// BlueprintGeneratedClass SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C
// Size: 0x2e0 (Inherited: 0x250)
struct ASUB_SlytherinDungeon_TECH_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	bool MissionReady; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct ABP_Torch_C* Torch1; // 0x260(0x08)
	struct ABP_Torch_C* Torch2; // 0x268(0x08)
	struct ABP_Torch_C* Torch3; // 0x270(0x08)
	float CountdownTimer; // 0x278(0x04)
	struct FName EVL_01_CP2; // 0x27c(0x08)
	bool RevelioComplete; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct FTimerHandle Torch1TimerHandle; // 0x288(0x08)
	struct FTimerHandle Torch2TimerHandle; // 0x290(0x08)
	struct FTimerHandle Torch3TimerHandle; // 0x298(0x08)
	struct TArray<struct ABP_Torch_C*> Torches; // 0x2a0(0x10)
	bool EVL_01_CP2_Active; // 0x2b0(0x01)
	bool OnLitBound?; // 0x2b1(0x01)
	char pad_2B2[0x6]; // 0x2b2(0x06)
	struct ABP_FastTravel_C* BP_FastTravel32_ExecuteUbergraph_SUB_SlytherinDungeon_TECH_RefProperty; // 0x2b8(0x08)
	struct ABlockingVolume* BlockingVolume_ScriptoriumEntrance_ExecuteUbergraph_SUB_SlytherinDungeon_TECH_RefProperty; // 0x2c0(0x08)
	struct ABP_EVL_ComplimentDoor_C* BP_EVL_ComplimentDoor_2_EdGraph_0_RefProperty; // 0x2c8(0x08)
	struct ABP_EVL_ComplimentDoor_C* BP_EVL_ComplimentDoor_2_EdGraph_3_RefProperty; // 0x2d0(0x08)
	struct ABP_EVL_ComplimentDoor_C* BP_EVL_ComplimentDoor_2_EdGraph_5_RefProperty; // 0x2d8(0x08)

	bool DecreaseFire(float decreaseAmount); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoorDecalCleanup(); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.DoorDecalCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TorchDecalExtinguish(); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.TorchDecalExtinguish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetDoorDecals(); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.SetDoorDecals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TorchesHighlightable(); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.TorchesHighlightable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LightAllTorches(); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.LightAllTorches // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TorchCleanup(); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.TorchCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void EVL_01_CP2_Updated(struct UObject* Caller, struct FName& String); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.EVL_01_CP2_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVL_01_CP6_Updated(struct UObject* Caller, struct FName& String); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.EVL_01_CP6_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Torch1Lit(struct ABP_Torch_C* Torch); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.Torch1Lit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Torch2Lit(struct ABP_Torch_C* Torch); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.Torch2Lit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Torch3Lit(struct ABP_Torch_C* Torch); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.Torch3Lit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Countdown Finished(); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.Countdown Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVL_01_Updated(struct UObject* Caller, struct FName& String); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.EVL_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Torch1Extinguished(struct ABP_Torch_C* Torch); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.Torch1Extinguished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Torch2Extinguished(struct ABP_Torch_C* Torch); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.Torch2Extinguished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Torch3Extinguished(struct ABP_Torch_C* Torch); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.Torch3Extinguished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_SlytherinDungeon_TECH(int32_t EntryPoint); // Function SUB_SlytherinDungeon_Tech_2328285850.SUB_SlytherinDungeon_TECH_C.ExecuteUbergraph_SUB_SlytherinDungeon_TECH // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

