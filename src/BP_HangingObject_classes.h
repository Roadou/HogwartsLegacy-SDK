// BlueprintGeneratedClass BP_HangingObject.BP_HangingObject_C
// Size: 0x2f1 (Inherited: 0x248)
struct ABP_HangingObject_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCableComponent* Cable1; // 0x250(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint1; // 0x258(0x08)
	struct UObjectStateComponent* ObjectState; // 0x260(0x08)
	struct UStaticMeshComponent* AnchorKnot1; // 0x268(0x08)
	struct UStaticMeshComponent* Pulley; // 0x270(0x08)
	struct UCableComponent* Cable; // 0x278(0x08)
	struct UChildActorComponent* HangingObject; // 0x280(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x288(0x08)
	struct UStaticMeshComponent* AnchorKnot; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct UStaticMeshComponent* CableTarget; // 0x2a0(0x08)
	float RopeLength; // 0x2a8(0x04)
	float HangingObjectOffset; // 0x2ac(0x04)
	struct UStaticMeshComponent* CableTarget2; // 0x2b0(0x08)
	bool IsBroken; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct TArray<struct AActor*> SwitchTargets; // 0x2c0(0x10)
	struct UStaticMeshComponent* Hanging Platform A Mesh; // 0x2d0(0x08)
	float GoToSleepRadius; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FMulticastInlineDelegate Broken; // 0x2e0(0x10)
	bool OverlandUse; // 0x2f0(0x01)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_HangingObject.BP_HangingObject_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_HangingObject.BP_HangingObject_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_HangingObject.BP_HangingObject_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HangingObject.BP_HangingObject_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HangingObject.BP_HangingObject_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_HangingObject.BP_HangingObject_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_HangingObject.BP_HangingObject_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_HangingObject.BP_HangingObject_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_HangingObject.BP_HangingObject_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_HangingObject.BP_HangingObject_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_HangingObject.BP_HangingObject_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ANone* AutosaveActor); // Function BP_HangingObject.BP_HangingObject_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_HangingObject.BP_HangingObject_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_HangingObject.BP_HangingObject_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_HangingObject.BP_HangingObject_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_HangingObject.BP_HangingObject_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_HangingObject.BP_HangingObject_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_HangingObject.BP_HangingObject_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_HangingObject.BP_HangingObject_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_HangingObject.BP_HangingObject_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_HangingObject.BP_HangingObject_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_HangingObject.BP_HangingObject_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_HangingObject.BP_HangingObject_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HangingObject.BP_HangingObject_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ANone* AutosaveActor); // Function BP_HangingObject.BP_HangingObject_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_HangingObject.BP_HangingObject_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_HangingObject.BP_HangingObject_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_HangingObject.BP_HangingObject_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HangingObject.BP_HangingObject_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ForceBreak(); // Function BP_HangingObject.BP_HangingObject_C.ForceBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HangingObject(int32_t EntryPoint); // Function BP_HangingObject.BP_HangingObject_C.ExecuteUbergraph_BP_HangingObject // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Broken__DelegateSignature(); // Function BP_HangingObject.BP_HangingObject_C.Broken__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

