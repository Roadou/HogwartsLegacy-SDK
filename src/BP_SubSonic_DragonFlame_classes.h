// BlueprintGeneratedClass BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C
// Size: 0x550 (Inherited: 0x528)
struct ABP_SubSonic_DragonFlame_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UNiagaraComponent* N_GroundFire_Trail; // 0x530(0x08)
	struct UStaticMeshComponent* SM_Aguamenti_WaterProj; // 0x538(0x08)
	float ScaleValue; // 0x540(0x04)
	struct FVector LocTarget; // 0x544(0x0c)

	void ReceiveBeginPlay(); // Function BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFizzle(); // Function BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.OnFizzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFire(struct AActor* Target, struct FVector TargetLocation, struct FVector Velocity); // Function BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.OnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EndTrailFX(); // Function BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.EndTrailFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_DragonFlame(int32_t EntryPoint); // Function BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.ExecuteUbergraph_BP_SubSonic_DragonFlame // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

