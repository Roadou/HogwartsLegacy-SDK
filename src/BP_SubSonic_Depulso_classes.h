// BlueprintGeneratedClass BP_SubSonic_Depulso.BP_SubSonic_Depulso_C
// Size: 0x540 (Inherited: 0x528)
struct ABP_SubSonic_Depulso_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWindDirectionalSourceWithEnvelopeComponent* WindSource; // 0x530(0x08)
	struct UNiagaraComponent* N_Trail; // 0x538(0x08)

	void ReceiveBeginPlay(); // Function BP_SubSonic_Depulso.BP_SubSonic_Depulso_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_Depulso.BP_SubSonic_Depulso_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFizzle(); // Function BP_SubSonic_Depulso.BP_SubSonic_Depulso_C.OnFizzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFire(struct AActor* Target, struct FVector TargetLocation, struct FVector Velocity); // Function BP_SubSonic_Depulso.BP_SubSonic_Depulso_C.OnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_Depulso(int32_t EntryPoint); // Function BP_SubSonic_Depulso.BP_SubSonic_Depulso_C.ExecuteUbergraph_BP_SubSonic_Depulso // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

