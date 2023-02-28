// BlueprintGeneratedClass BP_SubSonic_DragonFire.BP_SubSonic_DragonFire_C
// Size: 0x564 (Inherited: 0x528)
struct ABP_SubSonic_DragonFire_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x530(0x08)
	struct UNiagaraComponent* N_GroundFire_Trail; // 0x538(0x08)
	struct UStaticMeshComponent* SM_Aguamenti_WaterProj; // 0x540(0x08)
	struct UMaterialInstanceDynamic* MAT_RibbonTRail; // 0x548(0x08)
	struct UMaterialInstanceDynamic* MAT_Proj; // 0x550(0x08)
	struct FVector LOC_Target; // 0x558(0x0c)

	void EndTrailFX(); // Function BP_SubSonic_DragonFire.BP_SubSonic_DragonFire_C.EndTrailFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFizzle(); // Function BP_SubSonic_DragonFire.BP_SubSonic_DragonFire_C.OnFizzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFire(struct AActor* Target, struct FVector TargetLocation, struct FVector Velocity); // Function BP_SubSonic_DragonFire.BP_SubSonic_DragonFire_C.OnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_DragonFire.BP_SubSonic_DragonFire_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SubSonic_DragonFire.BP_SubSonic_DragonFire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_DragonFire(int32_t EntryPoint); // Function BP_SubSonic_DragonFire.BP_SubSonic_DragonFire_C.ExecuteUbergraph_BP_SubSonic_DragonFire // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

