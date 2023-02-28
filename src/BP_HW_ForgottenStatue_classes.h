// BlueprintGeneratedClass BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C
// Size: 0x360 (Inherited: 0x357)
struct ABP_HW_ForgottenStatue_C : ABP_Breakable_Persistent_C {
	char pad_357[0x1]; // 0x357(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)

	struct FName GetMainBone(); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.GetMainBone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetMainPrimitive(); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.GetMainPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupSfx(struct UAkComponent* AkComponent); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.SetupSfx // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnReset(); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void StatChangedEvent_Event_2(struct FName Key, int32_t Value, int32_t Delta); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.StatChangedEvent_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_ForgottenStatue(int32_t EntryPoint); // Function BP_HW_ForgottenStatue.BP_HW_ForgottenStatue_C.ExecuteUbergraph_BP_HW_ForgottenStatue // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

