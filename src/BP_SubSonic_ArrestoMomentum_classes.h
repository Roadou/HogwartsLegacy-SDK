// BlueprintGeneratedClass BP_SubSonic_ArrestoMomentum.BP_SubSonic_ArrestoMomentum_C
// Size: 0x538 (Inherited: 0x528)
struct ABP_SubSonic_ArrestoMomentum_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UNiagaraComponent* N_Trail; // 0x530(0x08)

	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_ArrestoMomentum.BP_SubSonic_ArrestoMomentum_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFizzle(); // Function BP_SubSonic_ArrestoMomentum.BP_SubSonic_ArrestoMomentum_C.OnFizzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFire(struct AActor* Target, struct FVector TargetLocation, struct FVector Velocity); // Function BP_SubSonic_ArrestoMomentum.BP_SubSonic_ArrestoMomentum_C.OnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_ArrestoMomentum(int32_t EntryPoint); // Function BP_SubSonic_ArrestoMomentum.BP_SubSonic_ArrestoMomentum_C.ExecuteUbergraph_BP_SubSonic_ArrestoMomentum // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

