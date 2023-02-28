// BlueprintGeneratedClass BP_AOE_Incendio2.BP_AOE_Incendio2_C
// Size: 0x678 (Inherited: 0x658)
struct ABP_AOE_Incendio2_C : AMunitionType_AOE_MultiFX {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x658(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x660(0x08)
	struct TArray<struct UInteractionArchitectAsset*> In Munition Data Assets; // 0x668(0x10)

	void ReceiveBeginPlay(); // Function BP_AOE_Incendio2.BP_AOE_Incendio2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FMunitionImpactData& MunitionImpact, struct FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed); // Function BP_AOE_Incendio2.BP_AOE_Incendio2_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AOE_Incendio2(int32_t EntryPoint); // Function BP_AOE_Incendio2.BP_AOE_Incendio2_C.ExecuteUbergraph_BP_AOE_Incendio2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

