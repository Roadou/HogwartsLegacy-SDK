// BlueprintGeneratedClass BP_AOE_Levioso.BP_AOE_Levioso_C
// Size: 0x66c (Inherited: 0x658)
struct ABP_AOE_Levioso_C : AMunitionType_AOE_MultiFX {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x658(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x660(0x08)
	float Duration; // 0x668(0x04)

	void ReceiveBeginPlay(); // Function BP_AOE_Levioso.BP_AOE_Levioso_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FMunitionImpactData& MunitionImpact, struct FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed); // Function BP_AOE_Levioso.BP_AOE_Levioso_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AOE_Levioso(int32_t EntryPoint); // Function BP_AOE_Levioso.BP_AOE_Levioso_C.ExecuteUbergraph_BP_AOE_Levioso // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

