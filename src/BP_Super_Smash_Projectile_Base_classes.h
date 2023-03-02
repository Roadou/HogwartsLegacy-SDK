// BlueprintGeneratedClass BP_Super_Smash_Projectile_Base.BP_Super_Smash_Projectile_Base_C
// Size: 0x3f1 (Inherited: 0x248)
struct ABP_Super_Smash_Projectile_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* ProjectileMesh; // 0x250(0x08)
	struct USphereComponent* Sphere1; // 0x258(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x260(0x08)
	float Cooldown_Cooldown_414B3E584571CC167883F2857CB781F5; // 0x268(0x04)
	enum class ETimelineDirection Cooldown__Direction_414B3E584571CC167883F2857CB781F5; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Cooldown; // 0x270(0x08)
	struct ABP_Super_Smash_Bounds_C* Bounds_REF; // 0x278(0x08)
	enum class E_Super_Smash_ObjectList ProjectileType; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	struct FLinearColor LinearColour; // 0x284(0x10)
	char pad_294[0x4]; // 0x294(0x04)
	struct FSTR_SuperSmashObjectProfile ObjectInfo; // 0x298(0x60)
	struct UNiagaraSystem* StudentImpactVFX; // 0x2f8(0x08)
	struct UNiagaraSystem* SurfaceImpactVFX; // 0x300(0x08)
	struct UAkAudioEvent* ImpactAK; // 0x308(0x08)
	struct FVector Impact_Point; // 0x310(0x0c)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct AActor* HitActor; // 0x320(0x08)
	struct ACharacter* HitCharREF; // 0x328(0x08)
	struct FHitResult HitResultsREF; // 0x330(0x88)
	struct UNiagaraComponent* VFX_Liquid; // 0x3b8(0x08)
	struct UDecalComponent* Puddle; // 0x3c0(0x08)
	struct UMaterialInstanceDynamic* MI_Decal; // 0x3c8(0x08)
	struct UMaterialInterface* Student_Decal_Material; // 0x3d0(0x08)
	struct UMaterialInterface* Surface_Decal_Material; // 0x3d8(0x08)
	struct TArray<struct FName> DifferentColorTintParameterNames; // 0x3e0(0x10)
	bool CanThrow; // 0x3f0(0x01)

	void FN_ComposeProjectile(struct FSTR_SuperSmashObjectProfile ObjectInfo); // Function BP_Super_Smash_Projectile_Base.BP_Super_Smash_Projectile_Base_C.FN_ComposeProjectile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cooldown__FinishedFunc(); // Function BP_Super_Smash_Projectile_Base.BP_Super_Smash_Projectile_Base_C.Cooldown__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Cooldown__UpdateFunc(); // Function BP_Super_Smash_Projectile_Base.BP_Super_Smash_Projectile_Base_C.Cooldown__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Super_Smash_Projectile_Base.BP_Super_Smash_Projectile_Base_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__ProjectileMesh_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Super_Smash_Projectile_Base.BP_Super_Smash_Projectile_Base_C.BndEvt__ProjectileMesh_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void Bubble_Cooldown(); // Function BP_Super_Smash_Projectile_Base.BP_Super_Smash_Projectile_Base_C.Bubble_Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Super_Smash_Projectile_Base.BP_Super_Smash_Projectile_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Super_Smash_Projectile_Base(int32_t EntryPoint); // Function BP_Super_Smash_Projectile_Base.BP_Super_Smash_Projectile_Base_C.ExecuteUbergraph_BP_Super_Smash_Projectile_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

