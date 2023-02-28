// BlueprintGeneratedClass BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C
// Size: 0x381 (Inherited: 0x298)
struct ABP_ViaductBridge_Torch_C : AInteractiveObjectActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UAkComponent* Ak_Large_Cog; // 0x2a0(0x08)
	struct UAkComponent* Ak_Small_Cog; // 0x2a8(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x2b0(0x08)
	struct USkeletalMeshComponent* SK_HW_Brazier_Master; // 0x2b8(0x08)
	struct USphereComponent* PropagateTrigger; // 0x2c0(0x08)
	struct UPointLightComponent* PointLight; // 0x2c8(0x08)
	struct UAnimatedLightComponent* AnimatedLight; // 0x2d0(0x08)
	struct UAkComponent* Fire_Burning_Loop; // 0x2d8(0x08)
	struct UNiagaraComponent* Niagara; // 0x2e0(0x08)
	struct UBP_TorchComponent_C* BP_TorchComponent; // 0x2e8(0x08)
	struct UAkComponent* Ak; // 0x2f0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x300(0x08)
	bool Solved; // 0x308(0x01)
	bool InteractInitiated; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct FMulticastInlineDelegate PuzzleCompleteEvent; // 0x310(0x10)
	struct FMulticastInlineDelegate PuzzleFailedEvent; // 0x320(0x10)
	struct FMulticastInlineDelegate PuzzleStartEvent; // 0x330(0x10)
	struct USphereComponent* Propagate Sphere; // 0x340(0x08)
	struct UPointLightComponent* Point Light; // 0x348(0x08)
	struct UAnimatedLightComponent* Animated Light; // 0x350(0x08)
	bool IsLit; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct TArray<struct UMaterialBillboardComponent*> Fire Billboards; // 0x360(0x10)
	struct UABP_HW_Brazier_Master_C* ABP; // 0x370(0x08)
	int32_t CorrectNumber; // 0x378(0x04)
	int32_t InCorrectPosition; // 0x37c(0x04)
	bool CorrectPosition; // 0x380(0x01)

	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseWetness(struct AActor* Instigator, float increaseAmount, struct FVector Location); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.IncreaseWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartWetness(struct AActor* Instigator, float Amount, struct FVector Location); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.StartWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DecreaseFire(float decreaseAmount); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDecreaseWetness(float decreaseAmount); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnDecreaseWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDry(struct AActor* Instigator); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnDry // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToWet(); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnFailedToWet // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToApplyWetness(float Amount, struct FVector Location); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnAttemptToApplyWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void PuzzleSolved(struct UObject* Caller); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.PuzzleSolved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ViaductBridge_Torch(int32_t EntryPoint); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.ExecuteUbergraph_BP_ViaductBridge_Torch // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PuzzleStartEvent__DelegateSignature(); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.PuzzleStartEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PuzzleFailedEvent__DelegateSignature(); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.PuzzleFailedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PuzzleCompleteEvent__DelegateSignature(); // Function BP_ViaductBridge_Torch.BP_ViaductBridge_Torch_C.PuzzleCompleteEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

