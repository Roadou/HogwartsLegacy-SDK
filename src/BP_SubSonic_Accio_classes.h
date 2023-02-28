// BlueprintGeneratedClass BP_SubSonic_Accio.BP_SubSonic_Accio_C
// Size: 0x538 (Inherited: 0x528)
struct ABP_SubSonic_Accio_C : AMunitionType_AccioSubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UNiagaraComponent* N_Trail; // 0x530(0x08)

	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_Accio.BP_SubSonic_Accio_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_Accio(int32_t EntryPoint); // Function BP_SubSonic_Accio.BP_SubSonic_Accio_C.ExecuteUbergraph_BP_SubSonic_Accio // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

