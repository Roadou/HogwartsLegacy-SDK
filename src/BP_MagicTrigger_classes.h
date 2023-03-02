// BlueprintGeneratedClass BP_MagicTrigger.BP_MagicTrigger_C
// Size: 0x398 (Inherited: 0x248)
struct ABP_MagicTrigger_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* above_the_floor_audio_location; // 0x250(0x08)
	struct UStaticMeshComponent* FloorPlate; // 0x258(0x08)
	struct UChildActorComponent* BP_CastleDun_SquarePiece_A; // 0x260(0x08)
	struct UNiagaraComponent* NiagaraConstant; // 0x268(0x08)
	struct UObjectStateComponent* ObjectState; // 0x270(0x08)
	struct UNiagaraComponent* Niagara; // 0x278(0x08)
	struct UBoxComponent* Trigger; // 0x280(0x08)
	struct USceneComponent* Scene; // 0x288(0x08)
	float Timeline_0_NewTrack_1_E8601CC941A8164B46E16F8CA0BD9767; // 0x290(0x04)
	float Timeline_0_NewTrack_0_E8601CC941A8164B46E16F8CA0BD9767; // 0x294(0x04)
	enum class ETimelineDirection Timeline_0__Direction_E8601CC941A8164B46E16F8CA0BD9767; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct UTimelineComponent* Timeline_1; // 0x2a0(0x08)
	enum class E_SpellType Spell; // 0x2a8(0x01)
	bool ClearCheck; // 0x2a9(0x01)
	char pad_2AA[0x6]; // 0x2aa(0x06)
	struct TArray<struct AActor*> TagetBPs; // 0x2b0(0x10)
	float DefaultDamp; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UPrimitiveComponent* Current; // 0x2c8(0x08)
	float DefaultAngDamp; // 0x2d0(0x04)
	bool AltFire; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct TArray<struct UStaticMesh*> Mesh; // 0x2d8(0x10)
	struct TArray<struct AActor*> Test; // 0x2e8(0x10)
	struct UMaterialInstanceDynamic* MAT; // 0x2f8(0x08)
	bool AddCompaniionHelpTrigger; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct UBoxComponent* CompanionTrigger; // 0x308(0x08)
	struct TArray<struct AActor*> InTrigger; // 0x310(0x10)
	bool HelpOccupied; // 0x320(0x01)
	bool Opening; // 0x321(0x01)
	char pad_322[0xe]; // 0x322(0x0e)
	struct FTransform Loc; // 0x330(0x30)
	struct TArray<struct UAkAudioEvent*> Sounds; // 0x360(0x10)
	struct FVector SpellFXOffset; // 0x370(0x0c)
	float SpellFXRotationOffset; // 0x37c(0x04)
	struct AActor* FXActor; // 0x380(0x08)
	bool PullToPlate; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UStaticMeshComponent* Floor Plate; // 0x390(0x08)

	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_MagicTrigger.BP_MagicTrigger_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_MagicTrigger.BP_MagicTrigger_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_MagicTrigger.BP_MagicTrigger_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_MagicTrigger.BP_MagicTrigger_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_MagicTrigger.BP_MagicTrigger_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_MagicTrigger.BP_MagicTrigger_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_MagicTrigger.BP_MagicTrigger_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_MagicTrigger.BP_MagicTrigger_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_MagicTrigger.BP_MagicTrigger_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_MagicTrigger.BP_MagicTrigger_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_MagicTrigger.BP_MagicTrigger_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_MagicTrigger.BP_MagicTrigger_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_MagicTrigger.BP_MagicTrigger_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Check(); // Function BP_MagicTrigger.BP_MagicTrigger_C.Check // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_MagicTrigger.BP_MagicTrigger_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__CompanionTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_MagicTrigger.BP_MagicTrigger_C.BndEvt__CompanionTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__CompanionTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_MagicTrigger.BP_MagicTrigger_C.BndEvt__CompanionTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MagicTrigger.BP_MagicTrigger_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_MagicTrigger.BP_MagicTrigger_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_MagicTrigger.BP_MagicTrigger_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MagicTrigger(int32_t EntryPoint); // Function BP_MagicTrigger.BP_MagicTrigger_C.ExecuteUbergraph_BP_MagicTrigger // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

