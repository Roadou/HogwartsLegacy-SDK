// BlueprintGeneratedClass BP_SubSonic_ConfringoProjectile.BP_SubSonic_ConfringoProjectile_C
// Size: 0x4c0 (Inherited: 0x468)
struct ABP_SubSonic_ConfringoProjectile_C : AMunitionType_Subsonic {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UNiagaraComponent* N_Trail; // 0x470(0x08)
	float ScaleValue; // 0x478(0x04)
	float Field Radius; // 0x47c(0x04)
	struct FTransform Field Transform; // 0x480(0x30)
	struct TArray<struct UInteractionArchitectAsset*> Munition Data Assets; // 0x4b0(0x10)

	void ReceiveBeginPlay(); // Function BP_SubSonic_ConfringoProjectile.BP_SubSonic_ConfringoProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_ConfringoProjectile.BP_SubSonic_ConfringoProjectile_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(); // Function BP_SubSonic_ConfringoProjectile.BP_SubSonic_ConfringoProjectile_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_3(); // Function BP_SubSonic_ConfringoProjectile.BP_SubSonic_ConfringoProjectile_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_ConfringoProjectile(int32_t EntryPoint); // Function BP_SubSonic_ConfringoProjectile.BP_SubSonic_ConfringoProjectile_C.ExecuteUbergraph_BP_SubSonic_ConfringoProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

