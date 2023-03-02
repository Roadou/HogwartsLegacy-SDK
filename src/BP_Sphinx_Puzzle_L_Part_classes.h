// BlueprintGeneratedClass BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C
// Size: 0x2b1 (Inherited: 0x268)
struct ABP_Sphinx_Puzzle_L_Part_C : APhoenixBudgetedStaticMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UAkComponent* Ak_Puzzle_Reparo_Statues; // 0x270(0x08)
	struct USkeletalMeshComponent* Vine; // 0x278(0x08)
	struct UObjectStateComponent* ObjectState; // 0x280(0x08)
	bool bActive; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FMulticastInlineDelegate OnBroken; // 0x290(0x10)
	struct FMulticastInlineDelegate OnRepaired; // 0x2a0(0x10)
	bool bRotate; // 0x2b0(0x01)

	bool Damaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.Damaged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool Destroyed(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.Destroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NearDeathKneeling(float DamageAmount, struct AActor* Instigator, struct FGameplayTagContainer MunitionTagContainer, struct FVector Velocity); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.NearDeathKneeling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToHeal(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnAttemptToHeal // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnBeginRepairing(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnBeginRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCriticalHealthReached(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnCriticalHealthReached // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDamaged(float DamageAmount, struct FVector HitLocation, struct FVector HitDirection, struct UPrimitiveComponent* PrimComp, struct FGameplayTagContainer MunitionTagContainer, struct AActor* Instigator, struct FVector Velocity); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnFailedToBeDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeDestroyed(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnFailedToBeDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToBeHealed(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnFailedToBeHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionCompletelyBroken(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnGeometryCollectionCompletelyBroken // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionDamaged(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnGeometryCollectionDamaged // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnGeometryCollectionSpawned(struct URepairComponent* RepairComponent, struct UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, struct FVector HitLocation, struct FVector HitDirection, bool bCompletelyBroken); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnGeometryCollectionSpawned // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHealed(float healAmount, struct UPrimitiveComponent* PrimComp); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnHealed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Success(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.Success // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDoneRepairing(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnDoneRepairing // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BrokenEvent(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.BrokenEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void VineAnim(bool bGrow); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.VineAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToRepair(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnAttemptToRepair // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Reveal(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.Reveal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadSolution(); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.LoadSolution // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_L_Part(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.ExecuteUbergraph_BP_Sphinx_Puzzle_L_Part // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OnRepaired__DelegateSignature(struct ABP_Sphinx_Puzzle_L_Part_C* Arrow, struct UObjectStateManager* ArrowManager); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnRepaired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBroken__DelegateSignature(bool bActive); // Function BP_Sphinx_Puzzle_L_Part.BP_Sphinx_Puzzle_L_Part_C.OnBroken__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

