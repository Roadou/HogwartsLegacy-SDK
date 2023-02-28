// BlueprintGeneratedClass BP_SubSonic_DiffindoUpgrade.BP_SubSonic_DiffindoUpgrade_C
// Size: 0x55c (Inherited: 0x528)
struct ABP_SubSonic_DiffindoUpgrade_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UNiagaraComponent* Niagara Diffindo Proj; // 0x530(0x08)
	struct USphereComponent* Sphere2; // 0x538(0x08)
	struct USphereComponent* Sphere1; // 0x540(0x08)
	struct UMaterialInstanceDynamic* MAT_Proj; // 0x548(0x08)
	struct FVector LOC_Target; // 0x550(0x0c)

	void ReceiveBeginPlay(); // Function BP_SubSonic_DiffindoUpgrade.BP_SubSonic_DiffindoUpgrade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnFire(struct AActor* Target, struct FVector TargetLocation, struct FVector Velocity); // Function BP_SubSonic_DiffindoUpgrade.BP_SubSonic_DiffindoUpgrade_C.OnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_DiffindoUpgrade.BP_SubSonic_DiffindoUpgrade_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void CheckForEnd(struct UPrimitiveComponent* CollisionComponent, struct UPrimitiveComponent* Prim, struct FHitResult Hit); // Function BP_SubSonic_DiffindoUpgrade.BP_SubSonic_DiffindoUpgrade_C.CheckForEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_SubSonic_Diffindo_Sphere1_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_SubSonic_DiffindoUpgrade.BP_SubSonic_DiffindoUpgrade_C.BndEvt__BP_SubSonic_Diffindo_Sphere1_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_SubSonic_Diffindo_Sphere2_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_SubSonic_DiffindoUpgrade.BP_SubSonic_DiffindoUpgrade_C.BndEvt__BP_SubSonic_Diffindo_Sphere2_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_SubSonic_Diffindo_SphereComp_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_SubSonic_DiffindoUpgrade.BP_SubSonic_DiffindoUpgrade_C.BndEvt__BP_SubSonic_Diffindo_SphereComp_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_DiffindoUpgrade(int32_t EntryPoint); // Function BP_SubSonic_DiffindoUpgrade.BP_SubSonic_DiffindoUpgrade_C.ExecuteUbergraph_BP_SubSonic_DiffindoUpgrade // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

