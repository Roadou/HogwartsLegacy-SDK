// BlueprintGeneratedClass BP_BoneClusterTarget.BP_BoneClusterTarget_C
// Size: 0x5c8 (Inherited: 0x248)
struct ABP_BoneClusterTarget_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct UBoxComponent* DissalowZone; // 0x258(0x08)
	struct UAkComponent* Ak_BP_BoneClusterTarget; // 0x260(0x08)
	struct UBoxComponent* Box; // 0x268(0x08)
	struct USphereComponent* CollsionCheck; // 0x270(0x08)
	struct USphereComponent* Sphere; // 0x278(0x08)
	struct UStaticMeshComponent* Cube; // 0x280(0x08)
	struct UObjectStateComponent* ObjectState; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct TMap<struct AActor*, bool> BoneClusters; // 0x298(0x50)
	struct UPrimitiveComponent* Leader; // 0x2e8(0x08)
	struct TArray<struct FTransform> PointCloud; // 0x2f0(0x10)
	struct TArray<struct ABP_BoneCluster_C*> ControlledClusters; // 0x300(0x10)
	struct ABP_BoneCluster_C* Current; // 0x310(0x08)
	int32_t CurrentLerpTarget; // 0x318(0x04)
	int32_t Bone count; // 0x31c(0x04)
	bool Busy; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct TArray<struct UStaticMesh*> OrganizedStaticMesh; // 0x328(0x10)
	struct TMap<struct UStaticMeshComponent*, struct FTransform> Working; // 0x338(0x50)
	struct TArray<struct UBoxComponent*> Collision; // 0x388(0x10)
	struct UStaticMeshComponent* Shell; // 0x398(0x08)
	struct TMap<struct UMaterialInterface*, struct UMaterialInterface*> BoneMaterials; // 0x3a0(0x50)
	struct TArray<struct UMaterialInterface*> BoneMatNormal; // 0x3f0(0x10)
	struct TArray<struct UMaterialInterface*> BoneMatBob; // 0x400(0x10)
	struct FTransform TriggerLOC; // 0x410(0x30)
	bool BoxTrigger; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UChildActorComponent* ChildActor; // 0x448(0x08)
	bool BuildOnInitialOverlap; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct TArray<struct FTransform> CompletedTargetLOCS; // 0x458(0x10)
	struct TArray<struct UParticleSystemComponent*> EndParticles; // 0x468(0x10)
	bool Assembled; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct TArray<struct UBoxComponent*> InternalCollision; // 0x480(0x10)
	struct TArray<struct AActor*> Target; // 0x490(0x10)
	float COLCheckOverride; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FMulticastInlineDelegate BridgeComplete; // 0x4a8(0x10)
	struct TArray<struct FTransform> TempList; // 0x4b8(0x10)
	struct TArray<struct UStaticMeshComponent*> CompletionActors; // 0x4c8(0x10)
	struct TArray<struct UStaticMesh*> StaticMesh; // 0x4d8(0x10)
	bool Unbreakable; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct AActor* StructureClass; // 0x4f0(0x08)
	struct TMap<struct AActor*, bool> BoneCluster; // 0x4f8(0x50)
	char pad_548[0x8]; // 0x548(0x08)
	struct FTransform DissalowLOC; // 0x550(0x30)
	bool UseDissalowZone; // 0x580(0x01)
	bool InDissalowZone; // 0x581(0x01)
	char pad_582[0x6]; // 0x582(0x06)
	struct ANone* Beacon; // 0x588(0x08)
	struct TArray<struct FVector> LeaderLocations; // 0x590(0x10)
	int32_t NumLeaders; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct TArray<struct FTransform> LeaderSocketTransforms; // 0x5a8(0x10)
	struct FMulticastInlineDelegate BonesAdded; // 0x5b8(0x10)

	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLeaderLocations(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.SetLeaderLocations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SortPointCloud(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.SortPointCloud // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ScaleCollisionCheck(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.ScaleCollisionCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetBoneCount(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.GetBoneCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Lift(struct UPrimitiveComponent* Target, float PercentageLift); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.Lift // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ANone* AutosaveActor); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void LerpToPoint(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.LerpToPoint // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Break(struct AActor* Who); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.Break // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__CollsionCheck_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.BndEvt__CollsionCheck_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__CollsionCheck_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.BndEvt__CollsionCheck_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Pulse(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.Pulse // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void RevelioPulse(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.RevelioPulse // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevelioStart(struct UObject* Caller, float float); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.RevelioStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RevelioEnd(struct UObject* Caller); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.RevelioEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnComponentBeginOverlap_Event_1(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnComponentBeginOverlap_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnComponentEndOverlap_Event_1(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnComponentEndOverlap_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ANone* AutosaveActor); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_BoneClusterTarget_DissalowZone_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.BndEvt__BP_BoneClusterTarget_DissalowZone_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_BoneClusterTarget_DissalowZone_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.BndEvt__BP_BoneClusterTarget_DissalowZone_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CheckFullyAssembled(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.CheckFullyAssembled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayParticle(struct FVector Location); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.PlayParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BoneClusterTarget(int32_t EntryPoint); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.ExecuteUbergraph_BP_BoneClusterTarget // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void BonesAdded__DelegateSignature(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.BonesAdded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BridgeComplete__DelegateSignature(); // Function BP_BoneClusterTarget.BP_BoneClusterTarget_C.BridgeComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

