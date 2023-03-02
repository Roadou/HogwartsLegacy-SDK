// BlueprintGeneratedClass BP_Roots.BP_Roots_C
// Size: 0x2c4 (Inherited: 0x248)
struct ABP_Roots_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UStaticMeshComponent* roots; // 0x258(0x08)
	enum class None Environment; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	int32_t PropIndex; // 0x264(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x268(0x50)
	int32_t EnvInt; // 0x2b8(0x04)
	struct FRandomStream Random Seed; // 0x2bc(0x08)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Roots.BP_Roots_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Roots.BP_Roots_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Roots.BP_Roots_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Roots.BP_Roots_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_Roots.BP_Roots_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_Roots.BP_Roots_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_Roots.BP_Roots_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_Roots.BP_Roots_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_Roots.BP_Roots_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Roots.BP_Roots_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_Roots.BP_Roots_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_Roots.BP_Roots_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Roots.BP_Roots_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Roots.BP_Roots_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_Roots.BP_Roots_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_Roots.BP_Roots_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Roots(int32_t EntryPoint); // Function BP_Roots.BP_Roots_C.ExecuteUbergraph_BP_Roots // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

