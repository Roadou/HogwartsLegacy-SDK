// BlueprintGeneratedClass BP_AOE_FieryExplosion_Character.BP_AOE_FieryExplosion_Character_C
// Size: 0x668 (Inherited: 0x658)
struct ABP_AOE_FieryExplosion_Character_C : AMunitionType_AOE_MultiFX {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x658(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x660(0x08)

	void OnHit(struct FMunitionImpactData& MunitionImpact, struct FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed); // Function BP_AOE_FieryExplosion_Character.BP_AOE_FieryExplosion_Character_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AOE_FieryExplosion_Character(int32_t EntryPoint); // Function BP_AOE_FieryExplosion_Character.BP_AOE_FieryExplosion_Character_C.ExecuteUbergraph_BP_AOE_FieryExplosion_Character // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

