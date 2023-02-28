// BlueprintGeneratedClass BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C
// Size: 0x378 (Inherited: 0x354)
struct ABP_Int_Cairn_Vessel_G_W_C : ABP_Breakable_Fragile_C {
	char pad_354[0x4]; // 0x354(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x360(0x08)
	struct FMulticastInlineDelegate Broken; // 0x368(0x10)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Int_Cairn_Vessel_G_W(int32_t EntryPoint); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.ExecuteUbergraph_BP_Int_Cairn_Vessel_G_W // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Broken__DelegateSignature(struct AActor* Who); // Function BP_Int_Cairn_Vessel_G_W.BP_Int_Cairn_Vessel_G_W_C.Broken__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

