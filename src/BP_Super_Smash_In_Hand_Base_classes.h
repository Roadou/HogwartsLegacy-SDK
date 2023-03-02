// BlueprintGeneratedClass BP_Super_Smash_In_Hand_Base.BP_Super_Smash_In_Hand_Base_C
// Size: 0x2c0 (Inherited: 0x248)
struct ABP_Super_Smash_In_Hand_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Sphere; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x258(0x08)
	struct FSTR_SuperSmashObjectProfile ObjectProfile; // 0x260(0x60)

	void FN_ComposePotionProfile(); // Function BP_Super_Smash_In_Hand_Base.BP_Super_Smash_In_Hand_Base_C.FN_ComposePotionProfile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnProjectileInHand(struct FVector Spawn Transform Location, struct FRotator Spawn Transform Rotation, struct FVector Spawn Transform Scale, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, struct ABP_Super_Smash_Bounds_C* Bounds_REF, bool CanThrow, struct ABP_Super_Smash_Projectile_Base_C*& SpawnedProjectile); // Function BP_Super_Smash_In_Hand_Base.BP_Super_Smash_In_Hand_Base_C.SpawnProjectileInHand // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ConstructObjectProfile(struct FSTR_SuperSmashObjectProfile ObjectProfile); // Function BP_Super_Smash_In_Hand_Base.BP_Super_Smash_In_Hand_Base_C.ConstructObjectProfile // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Super_Smash_In_Hand_Base(int32_t EntryPoint); // Function BP_Super_Smash_In_Hand_Base.BP_Super_Smash_In_Hand_Base_C.ExecuteUbergraph_BP_Super_Smash_In_Hand_Base // (Final|UbergraphFunction) // @ game+0x38a7480
};

