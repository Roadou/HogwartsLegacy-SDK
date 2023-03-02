// BlueprintGeneratedClass BP_ShieldSendTarget.BP_ShieldSendTarget_C
// Size: 0x291 (Inherited: 0x248)
struct ABP_ShieldSendTarget_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_CastleDun_WallShield_A; // 0x250(0x08)
	struct USceneComponent* Pivot; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct UObjectStateComponent* ObjectState; // 0x268(0x08)
	struct USceneComponent* Scene; // 0x270(0x08)
	float Timeline_0_NewTrack_2_20DADF324A24C1FF6B64DF8897FC7EA8; // 0x278(0x04)
	float Timeline_0_NewTrack_1_20DADF324A24C1FF6B64DF8897FC7EA8; // 0x27c(0x04)
	float Timeline_0_NewTrack_0_20DADF324A24C1FF6B64DF8897FC7EA8; // 0x280(0x04)
	enum class ETimelineDirection Timeline_0__Direction_20DADF324A24C1FF6B64DF8897FC7EA8; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* Timeline_1; // 0x288(0x08)
	bool Hit; // 0x290(0x01)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_BrickSEndTarget_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.BndEvt__BP_BrickSEndTarget_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ShieldSendTarget(int32_t EntryPoint); // Function BP_ShieldSendTarget.BP_ShieldSendTarget_C.ExecuteUbergraph_BP_ShieldSendTarget // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

