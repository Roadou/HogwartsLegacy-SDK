// BlueprintGeneratedClass BP_BoneCluster.BP_BoneCluster_C
// Size: 0x426 (Inherited: 0x260)
struct ABP_BoneCluster_C : ABoneClusterActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268(0x08)
	struct UAkComponent* AK_BP_BoneCluster_BreakingBonesSound; // 0x270(0x08)
	struct UAkComponent* AK_BP_BoneCluster_RollingBonesSound; // 0x278(0x08)
	struct UNiagaraComponent* Niagara; // 0x280(0x08)
	struct UObjectStateComponent* ObjectState; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	enum class E_BoneType Type; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct TMap<struct AActor*, bool> BoneClusters; // 0x2a0(0x50)
	struct TArray<struct UStaticMeshComponent*> Bones; // 0x2f0(0x10)
	struct UPrimitiveComponent* Leader; // 0x300(0x08)
	struct TArray<struct UStaticMeshComponent*> WorkingGroup; // 0x308(0x10)
	bool BonesBroken; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	struct FName CurrentSpell; // 0x31c(0x08)
	char pad_324[0x4]; // 0x324(0x04)
	struct FMulticastInlineDelegate OnBreak; // 0x328(0x10)
	bool Accio; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct AWandTool* Wand; // 0x340(0x08)
	bool BonesBusy; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	int32_t Check; // 0x34c(0x04)
	struct TArray<struct UBoxComponent*> Collision; // 0x350(0x10)
	struct TMap<struct UMaterialInterface*, struct UMaterialInterface*> BoneMaterials; // 0x360(0x50)
	struct TArray<struct UMaterialInterface*> BoneMatNormal; // 0x3b0(0x10)
	struct TArray<struct UMaterialInterface*> BoneMatBob; // 0x3c0(0x10)
	bool Spawned; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	int32_t BlockCount; // 0x3d4(0x04)
	float Force; // 0x3d8(0x04)
	bool StructureEffects; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	float ForceOffset; // 0x3e0(0x04)
	enum class ECollisionResponse BlockResponse; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	struct FMulticastInlineDelegate DragStarted; // 0x3e8(0x10)
	struct TArray<struct UStaticMeshComponent*> BonesInert; // 0x3f8(0x10)
	struct TArray<struct UStaticMeshComponent*> BonesActive; // 0x408(0x10)
	bool BonesLocked; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	struct FRandomStream RandomSeed; // 0x41c(0x08)
	bool FollowOn; // 0x424(0x01)
	bool Wingardium; // 0x425(0x01)

	bool DescendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity); // Function BP_BoneCluster.BP_BoneCluster_C.DescendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDescendo(); // Function BP_BoneCluster.BP_BoneCluster_C.DisallowDescendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool AccioStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Velocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_BoneCluster.BP_BoneCluster_C.AccioStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DepulsoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_BoneCluster.BP_BoneCluster_C.DepulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowAccio(); // Function BP_BoneCluster.BP_BoneCluster_C.DisallowAccio // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowDepulso(); // Function BP_BoneCluster.BP_BoneCluster_C.DisallowDepulso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowFlipendo(); // Function BP_BoneCluster.BP_BoneCluster_C.DisallowFlipendo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowLevioso(); // Function BP_BoneCluster.BP_BoneCluster_C.DisallowLevioso // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisallowWingardium(); // Function BP_BoneCluster.BP_BoneCluster_C.DisallowWingardium // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ExpulsoStart(struct AActor* Instigator, struct FVector Location); // Function BP_BoneCluster.BP_BoneCluster_C.ExpulsoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool FlipendoStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location); // Function BP_BoneCluster.BP_BoneCluster_C.FlipendoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoChargedStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector Location, struct FVector Velocity, bool InitiatedByPlayer, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FVector& ImpactDirection); // Function BP_BoneCluster.BP_BoneCluster_C.LeviosoChargedStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool LeviosoStart(struct AActor* Instigator, struct FVector Location, struct FGameplayTagContainer Impact, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects); // Function BP_BoneCluster.BP_BoneCluster_C.LeviosoStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool WingardiumStart(struct ASpellTool* SpellTool, struct AActor* Instigator); // Function BP_BoneCluster.BP_BoneCluster_C.WingardiumStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_BoneCluster.BP_BoneCluster_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_BoneCluster.BP_BoneCluster_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_BoneCluster.BP_BoneCluster_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Sort Bones for Removal(); // Function BP_BoneCluster.BP_BoneCluster_C.Sort Bones for Removal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_BoneCluster.BP_BoneCluster_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAccioEnd(struct AActor* Instigator, bool TransitioningToWingardium); // Function BP_BoneCluster.BP_BoneCluster_C.OnAccioEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAccioFailed(); // Function BP_BoneCluster.BP_BoneCluster_C.OnAccioFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAccioThrow(struct ASpellTool* SpellTool, struct AActor* Instigator, struct FVector ThrowVelocity, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_BoneCluster.BP_BoneCluster_C.OnAccioThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoFailed(); // Function BP_BoneCluster.BP_BoneCluster_C.OnDepulsoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDepulsoThrow(struct ASpellTool* SpellTool, struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_BoneCluster.BP_BoneCluster_C.OnDepulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnExpulsoThrow(struct FVector ThrowVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_BoneCluster.BP_BoneCluster_C.OnExpulsoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoFailed(); // Function BP_BoneCluster.BP_BoneCluster_C.OnFlipendoFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFlipendoThrow(struct ASpellTool* SpellTool, struct FVector ThrowDirection, struct FVector ThrowVelocity, struct FVector AngularVelocity, struct FVector Target, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct FGameplayTagContainer Impact); // Function BP_BoneCluster.BP_BoneCluster_C.OnFlipendoThrow // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoEnd(struct AActor* Instigator, bool InitiatedByPlayer); // Function BP_BoneCluster.BP_BoneCluster_C.OnLeviosoEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLeviosoFailed(bool InitiatedByPlayer); // Function BP_BoneCluster.BP_BoneCluster_C.OnLeviosoFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumEnd(struct AActor* Instigator); // Function BP_BoneCluster.BP_BoneCluster_C.OnWingardiumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumFailed(); // Function BP_BoneCluster.BP_BoneCluster_C.OnWingardiumFailed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnWingardiumGhostStart(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets); // Function BP_BoneCluster.BP_BoneCluster_C.OnWingardiumGhostStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_BoneCluster.BP_BoneCluster_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_BoneCluster.BP_BoneCluster_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_BoneCluster.BP_BoneCluster_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_BoneCluster.BP_BoneCluster_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_BoneCluster.BP_BoneCluster_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_BoneCluster.BP_BoneCluster_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_BoneCluster.BP_BoneCluster_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_BoneCluster.BP_BoneCluster_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_BoneCluster.BP_BoneCluster_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_BoneCluster.BP_BoneCluster_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_BoneCluster.BP_BoneCluster_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_BoneCluster.BP_BoneCluster_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_BoneCluster.BP_BoneCluster_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_BoneCluster.BP_BoneCluster_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_BoneCluster.BP_BoneCluster_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_BoneCluster.BP_BoneCluster_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_BoneCluster.BP_BoneCluster_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_BoneCluster.BP_BoneCluster_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_BoneCluster.BP_BoneCluster_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_BoneCluster.BP_BoneCluster_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EndFlock(); // Function BP_BoneCluster.BP_BoneCluster_C.EndFlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Break(); // Function BP_BoneCluster.BP_BoneCluster_C.Break // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnBreak(); // Function BP_BoneCluster.BP_BoneCluster_C.SpawnBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Pulse(); // Function BP_BoneCluster.BP_BoneCluster_C.Pulse // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BoneCluster.BP_BoneCluster_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Agitated(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_BoneCluster.BP_BoneCluster_C.Agitated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void bLock(); // Function BP_BoneCluster.BP_BoneCluster_C.bLock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Simulate Bones(); // Function BP_BoneCluster.BP_BoneCluster_C.Simulate Bones // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Start Block(); // Function BP_BoneCluster.BP_BoneCluster_C.Start Block // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Force to Leader(); // Function BP_BoneCluster.BP_BoneCluster_C.Force to Leader // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinalLock(); // Function BP_BoneCluster.BP_BoneCluster_C.FinalLock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleParticles(bool ParticlesOn); // Function BP_BoneCluster.BP_BoneCluster_C.ToggleParticles // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLeaderLocation(struct FTransform NewLocation); // Function BP_BoneCluster.BP_BoneCluster_C.SetLeaderLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShortTermFlock(); // Function BP_BoneCluster.BP_BoneCluster_C.ShortTermFlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TurnOnFollow(); // Function BP_BoneCluster.BP_BoneCluster_C.TurnOnFollow // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TargetUpdate(); // Function BP_BoneCluster.BP_BoneCluster_C.TargetUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BoneCluster.BP_BoneCluster_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BoneCluster(int32_t EntryPoint); // Function BP_BoneCluster.BP_BoneCluster_C.ExecuteUbergraph_BP_BoneCluster // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void DragStarted__DelegateSignature(); // Function BP_BoneCluster.BP_BoneCluster_C.DragStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBreak__DelegateSignature(struct AActor* Who); // Function BP_BoneCluster.BP_BoneCluster_C.OnBreak__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

