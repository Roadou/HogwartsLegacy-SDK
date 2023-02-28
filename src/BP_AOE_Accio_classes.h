// BlueprintGeneratedClass BP_AOE_Accio.BP_AOE_Accio_C
// Size: 0x668 (Inherited: 0x658)
struct ABP_AOE_Accio_C : AMunitionType_AOE_MultiFX {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x658(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x660(0x08)

	void ReceiveBeginPlay(); // Function BP_AOE_Accio.BP_AOE_Accio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_AOE_Accio.BP_AOE_Accio_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FMunitionImpactData& MunitionImpact, struct FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed); // Function BP_AOE_Accio.BP_AOE_Accio_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AOE_Accio(int32_t EntryPoint); // Function BP_AOE_Accio.BP_AOE_Accio_C.ExecuteUbergraph_BP_AOE_Accio // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

