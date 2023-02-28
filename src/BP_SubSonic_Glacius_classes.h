// BlueprintGeneratedClass BP_SubSonic_Glacius.BP_SubSonic_Glacius_C
// Size: 0x540 (Inherited: 0x528)
struct ABP_SubSonic_Glacius_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UNiagaraComponent* N_Trail; // 0x530(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x538(0x08)

	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_Glacius.BP_SubSonic_Glacius_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnFizzle(); // Function BP_SubSonic_Glacius.BP_SubSonic_Glacius_C.OnFizzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_Glacius(int32_t EntryPoint); // Function BP_SubSonic_Glacius.BP_SubSonic_Glacius_C.ExecuteUbergraph_BP_SubSonic_Glacius // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

