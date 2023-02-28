// BlueprintGeneratedClass BP_AOE_FieryExplosion_M.BP_AOE_FieryExplosion_M_C
// Size: 0x678 (Inherited: 0x658)
struct ABP_AOE_FieryExplosion_M_C : AMunitionType_AOE_MultiFX {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x658(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x660(0x08)
	struct TArray<struct UInteractionArchitectAsset*> Munition Data Assets; // 0x668(0x10)

	void OnHit(struct FMunitionImpactData& MunitionImpact, struct FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed); // Function BP_AOE_FieryExplosion_M.BP_AOE_FieryExplosion_M_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AOE_FieryExplosion_M(int32_t EntryPoint); // Function BP_AOE_FieryExplosion_M.BP_AOE_FieryExplosion_M_C.ExecuteUbergraph_BP_AOE_FieryExplosion_M // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

