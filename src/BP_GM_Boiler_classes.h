// BlueprintGeneratedClass BP_GM_Boiler.BP_GM_Boiler_C
// Size: 0x3f3 (Inherited: 0x248)
struct ABP_GM_Boiler_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* VFX_NS_GM_Boiler_BillowSteam1; // 0x250(0x08)
	struct UNiagaraComponent* VFX_NS_GM_Boiler_BillowSteam; // 0x258(0x08)
	struct UNiagaraComponent* VFX_NS_GM_Boiler_PipeSteam2; // 0x260(0x08)
	struct UNiagaraComponent* VFX_NS_GM_Boiler_PipeSteam1; // 0x268(0x08)
	struct UNiagaraComponent* VFX_NS_GM_Boiler_PipeSteam; // 0x270(0x08)
	struct UNiagaraComponent* VFX_NS_GM_BoilerWindow_Steam; // 0x278(0x08)
	struct UStaticMeshComponent* SM_HM_Ember_A; // 0x280(0x08)
	struct UAkComponent* Ak_BP_GM_Boiler_Loop; // 0x288(0x08)
	struct UAkComponent* Ak_BP_GM_Boiler_Steam_Loop; // 0x290(0x08)
	struct USkeletalMeshComponent* Gear; // 0x298(0x08)
	struct USkeletalMeshComponent* Bellow; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_GobMine_Boiler_Tank_A; // 0x2a8(0x08)
	struct UCapsuleComponent* Capsule; // 0x2b0(0x08)
	struct USphereComponent* BoilerSphere5; // 0x2b8(0x08)
	struct USphereComponent* BoilerSphere1; // 0x2c0(0x08)
	struct USphereComponent* BoilerSphere2; // 0x2c8(0x08)
	struct UChildActorComponent* PuzzleTargetChild; // 0x2d0(0x08)
	struct UBoxComponent* SnapBox; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_GM_BoilerBurnerBase; // 0x2e0(0x08)
	struct UParticleSystemComponent* Steam001; // 0x2e8(0x08)
	struct UChildActorComponent* InternalBurner; // 0x2f0(0x08)
	struct UStaticMeshComponent* Boiler; // 0x2f8(0x08)
	struct USceneComponent* SharedRoot; // 0x300(0x08)
	float Timeline_0_NewTrack_0_DCA94F924EE0CD4F248C8A8CC9B26C9B; // 0x308(0x04)
	enum class ETimelineDirection Timeline_0__Direction_DCA94F924EE0CD4F248C8A8CC9B26C9B; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x310(0x08)
	bool StartBoilerLit; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UMaterialInstanceDynamic* BottomBoilerMat; // 0x320(0x08)
	struct ABP_GM_BoilerPipeBase_C* CurrentChainPiece; // 0x328(0x08)
	int32_t NextConnexionPieceNdx; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct ABP_GM_BoilerPipeBase_C* FirstBoilerPipePiece; // 0x338(0x08)
	struct ABP_GM_BoilerPipeBase_C* SecondBoilerPipePiece; // 0x340(0x08)
	struct ABP_GM_BoilerPipeBase_C* FifthBoilerPipePiece; // 0x348(0x08)
	struct TArray<struct ABP_GM_BoilerPipeBase_C*> SteamChainObjects_01; // 0x350(0x10)
	struct TArray<struct ABP_GM_BoilerPipeBase_C*> SteamChainObjects_02; // 0x360(0x10)
	struct TArray<struct ABP_GM_BoilerPipeBase_C*> SteamChainObjects_05; // 0x370(0x10)
	bool BIsChainInterupted_01; // 0x380(0x01)
	bool BIsChainInterupted_02; // 0x381(0x01)
	bool BIsChainInterupted_05; // 0x382(0x01)
	char pad_383[0x1]; // 0x383(0x01)
	int32_t LargetsStreamChainArray; // 0x384(0x04)
	int32_t ChainArrayLoopIndex; // 0x388(0x04)
	bool bHasExternalBurner; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct ABP_PuzzleTarget_C* PuzzleTarget; // 0x390(0x08)
	struct ABP_Torch_C* CurrentBurner; // 0x398(0x08)
	struct ASpellTool* ExtinguishSpellTool; // 0x3a0(0x08)
	float PipeSequenceDelay; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct FMulticastInlineDelegate BoilerLit; // 0x3b0(0x10)
	struct ABP_Torch_C* StaticTorch; // 0x3c0(0x08)
	struct FName Stat; // 0x3c8(0x08)
	struct FString GobMine_Dungeon_06; // 0x3d0(0x10)
	struct TArray<struct AActor*> Target; // 0x3e0(0x10)
	bool NoSwitchEventOnRestoreFromSave; // 0x3f0(0x01)
	bool TestStat; // 0x3f1(0x01)
	bool SwitchEventExclude; // 0x3f2(0x01)

	void GetNextBaseSteamPiece(struct ABP_GM_BoilerPipeBase_C* CurrentSteamObject, struct ABP_GM_BoilerPipeBase_C*& NextSteamObject); // Function BP_GM_Boiler.BP_GM_Boiler_C.GetNextBaseSteamPiece // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetBoilerPipeConnexions(); // Function BP_GM_Boiler.BP_GM_Boiler_C.GetBoilerPipeConnexions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_GM_Boiler.BP_GM_Boiler_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_GM_Boiler.BP_GM_Boiler_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_GM_Boiler.BP_GM_Boiler_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_GM_Boiler.BP_GM_Boiler_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_GM_Boiler.BP_GM_Boiler_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_GM_Boiler.BP_GM_Boiler_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_GM_Boiler.BP_GM_Boiler_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_GM_Boiler.BP_GM_Boiler_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_GM_Boiler.BP_GM_Boiler_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GM_Boiler.BP_GM_Boiler_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void LightItUp(struct ABP_Torch_C* Torch); // Function BP_GM_Boiler.BP_GM_Boiler_C.LightItUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExtinguishItUp(struct ABP_Torch_C* Torch); // Function BP_GM_Boiler.BP_GM_Boiler_C.ExtinguishItUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ColorBoilerOn(); // Function BP_GM_Boiler.BP_GM_Boiler_C.ColorBoilerOn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ColorBoilerOff(); // Function BP_GM_Boiler.BP_GM_Boiler_C.ColorBoilerOff // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChainPipeHot(); // Function BP_GM_Boiler.BP_GM_Boiler_C.ChainPipeHot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChainPipeCold(); // Function BP_GM_Boiler.BP_GM_Boiler_C.ChainPipeCold // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_GM_Boiler.BP_GM_Boiler_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_GM_Boiler.BP_GM_Boiler_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CollisionOff(struct AActor* newActor); // Function BP_GM_Boiler.BP_GM_Boiler_C.CollisionOff // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExternalStartLit(); // Function BP_GM_Boiler.BP_GM_Boiler_C.ExternalStartLit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_GM_Boiler.BP_GM_Boiler_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ColorBoilerFrozen(); // Function BP_GM_Boiler.BP_GM_Boiler_C.ColorBoilerFrozen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChainPipeFrozen(); // Function BP_GM_Boiler.BP_GM_Boiler_C.ChainPipeFrozen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__PuzzleTargetChild_K2Node_ComponentBoundEvent_5_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function BP_GM_Boiler.BP_GM_Boiler_C.BndEvt__PuzzleTargetChild_K2Node_ComponentBoundEvent_5_ActorComponentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__PuzzleTargetChild_K2Node_ComponentBoundEvent_6_ActorComponentDeactivateSignature__DelegateSignature(struct UActorComponent* Component); // Function BP_GM_Boiler.BP_GM_Boiler_C.BndEvt__PuzzleTargetChild_K2Node_ComponentBoundEvent_6_ActorComponentDeactivateSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void AnimateMeshes(bool Activated); // Function BP_GM_Boiler.BP_GM_Boiler_C.AnimateMeshes // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_GM_Boiler.BP_GM_Boiler_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_GM_Boiler.BP_GM_Boiler_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void TorchLit(struct ABP_Torch_C* Torch); // Function BP_GM_Boiler.BP_GM_Boiler_C.TorchLit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TorchOff(struct ABP_Torch_C* Torch); // Function BP_GM_Boiler.BP_GM_Boiler_C.TorchOff // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_Boiler(int32_t EntryPoint); // Function BP_GM_Boiler.BP_GM_Boiler_C.ExecuteUbergraph_BP_GM_Boiler // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void BoilerLit__DelegateSignature(); // Function BP_GM_Boiler.BP_GM_Boiler_C.BoilerLit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

