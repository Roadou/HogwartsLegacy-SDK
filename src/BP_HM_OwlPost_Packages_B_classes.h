// BlueprintGeneratedClass BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_HM_OwlPost_Packages_B_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct ULocalStencilBoundsHintComponent* LocalStencilBoundsHint; // 0x250(0x08)
	struct UStaticMeshComponent* SM_HM_OwlPost_Packages_B; // 0x258(0x08)
	struct UObjectStateComponent* ObjectState; // 0x260(0x08)
	struct TArray<struct AActor*> ActorsToRepair; // 0x268(0x10)
	struct FMulticastInlineDelegate DoneRepairing; // 0x278(0x10)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_OwlPost_Packages_B(int32_t EntryPoint); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.ExecuteUbergraph_BP_HM_OwlPost_Packages_B // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void DoneRepairing__DelegateSignature(); // Function BP_HM_OwlPost_Packages_B.BP_HM_OwlPost_Packages_B_C.DoneRepairing__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

