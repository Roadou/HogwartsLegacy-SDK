// BlueprintGeneratedClass BP_L_HangingCage.BP_L_HangingCage_C
// Size: 0x424 (Inherited: 0x248)
struct ABP_L_HangingCage_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_L_HangingCage; // 0x250(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x258(0x08)
	struct UTargetComponent* Target; // 0x260(0x08)
	struct UCableComponent* Cable; // 0x268(0x08)
	struct UObjectStateComponent* ObjectState; // 0x270(0x08)
	struct UStaticMeshComponent* Anchor; // 0x278(0x08)
	struct USceneComponent* Scene; // 0x280(0x08)
	struct UStaticMeshComponent* Cage; // 0x288(0x08)
	float Repair_NewTrack_0_BFDAF2734898404386263D98E945E05A; // 0x290(0x04)
	enum class ETimelineDirection Repair__Direction_BFDAF2734898404386263D98E945E05A; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Repair; // 0x298(0x08)
	float CableLength; // 0x2a0(0x04)
	struct FVector BaseLOC; // 0x2a4(0x0c)
	float Dis; // 0x2b0(0x04)
	int32_t PropIndex; // 0x2b4(0x04)
	bool CompiledList; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x2c0(0x50)
	bool Breakable; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct FScheduleEntry Current Activity; // 0x318(0xf8)
	float NewVar_1; // 0x410(0x04)
	float NewVar_2; // 0x414(0x04)
	bool SwingSoundPlaying; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	struct FRandomStream Random Seed; // 0x41c(0x08)

	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_L_HangingCage.BP_L_HangingCage_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_L_HangingCage.BP_L_HangingCage_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_L_HangingCage.BP_L_HangingCage_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_L_HangingCage.BP_L_HangingCage_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Repair__FinishedFunc(); // Function BP_L_HangingCage.BP_L_HangingCage_C.Repair__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Repair__UpdateFunc(); // Function BP_L_HangingCage.BP_L_HangingCage_C.Repair__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_L_HangingCage.BP_L_HangingCage_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_L_HangingCage.BP_L_HangingCage_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_L_HangingCage.BP_L_HangingCage_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_L_HangingCage(int32_t EntryPoint); // Function BP_L_HangingCage.BP_L_HangingCage_C.ExecuteUbergraph_BP_L_HangingCage // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

