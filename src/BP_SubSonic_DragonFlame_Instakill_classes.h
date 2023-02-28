// BlueprintGeneratedClass BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C
// Size: 0x551 (Inherited: 0x528)
struct ABP_SubSonic_DragonFlame_Instakill_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct USphereComponent* MunitionShape; // 0x530(0x08)
	struct UNiagaraComponent* N_GroundFire_Trail; // 0x538(0x08)
	float ScaleValue; // 0x540(0x04)
	struct FVector LocTarget; // 0x544(0x0c)
	bool DebugVisualization; // 0x550(0x01)

	void OnFizzle(); // Function BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C.OnFizzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnFire(struct AActor* Target, struct FVector TargetLocation, struct FVector Velocity); // Function BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C.OnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EndTrailFX(); // Function BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C.EndTrailFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_DragonFlame_Instakill(int32_t EntryPoint); // Function BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C.ExecuteUbergraph_BP_SubSonic_DragonFlame_Instakill // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

