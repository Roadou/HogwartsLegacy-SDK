// BlueprintGeneratedClass BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C
// Size: 0x348 (Inherited: 0x2b0)
struct ABP_Overland_WoodBridgeLong_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UChildActorComponent* BP_BridgeRepair_Marker; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_BridgePosts; // 0x2c0(0x08)
	struct UOdcObstacleComponent* OdcObstacle; // 0x2c8(0x08)
	struct UBoxComponent* Box; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_Overland_WoodBridge_END_DM_Base1; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_BridgePosts1; // 0x2e0(0x08)
	struct UStaticMeshComponent* SM_Overland_WoodBridge_END_DM_Base; // 0x2e8(0x08)
	struct UStaticMeshComponent* Overland_BriedgeLongB_RopeB; // 0x2f0(0x08)
	struct UStaticMeshComponent* M_Overland_BriedgeLongB_RopeA; // 0x2f8(0x08)
	struct UStaticMeshComponent* SM_Overland_BriedgeLongB_Walk; // 0x300(0x08)
	struct UStaticMeshComponent* SM_Overland_BriedgeLongB_Struts; // 0x308(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x310(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x318(0x08)
	struct USceneComponent* Scene; // 0x320(0x08)
	bool Start Broken; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct TArray<struct AStation*> Broken Bridge Stations; // 0x330(0x10)
	struct AAIPath* Bridge AIPath; // 0x340(0x08)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FName GetMainBone(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.GetMainBone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetMainPrimitive(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.GetMainPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnReset(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetupSfx(struct UAkComponent* AkComponent); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.SetupSfx // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Break(); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.Break // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Overland_WoodBridgeLong(int32_t EntryPoint); // Function BP_Overland_WoodBridgeLong.BP_Overland_WoodBridgeLong_C.ExecuteUbergraph_BP_Overland_WoodBridgeLong // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

