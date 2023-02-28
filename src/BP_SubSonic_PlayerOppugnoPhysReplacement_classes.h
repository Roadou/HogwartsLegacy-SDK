// BlueprintGeneratedClass BP_SubSonic_PlayerOppugnoPhysReplacement.BP_SubSonic_PlayerOppugnoPhysReplacement_C
// Size: 0x4c0 (Inherited: 0x488)
struct ABP_SubSonic_PlayerOppugnoPhysReplacement_C : AMunitionType_PhoenixSubsonic {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UObjectStateComponent* ObjectState; // 0x490(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x498(0x08)
	struct FVector LastVelocity; // 0x4a0(0x0c)
	float VelocityScale; // 0x4ac(0x04)
	struct TArray<struct UInteractionArchitectAsset*> In Munition Data Assets; // 0x4b0(0x10)

	void OnFire(struct AActor* Target, struct FVector TargetLocation, struct FVector Velocity); // Function BP_SubSonic_PlayerOppugnoPhysReplacement.BP_SubSonic_PlayerOppugnoPhysReplacement_C.OnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHit(struct FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed); // Function BP_SubSonic_PlayerOppugnoPhysReplacement.BP_SubSonic_PlayerOppugnoPhysReplacement_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SubSonic_PlayerOppugnoPhysReplacement.BP_SubSonic_PlayerOppugnoPhysReplacement_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_PlayerOppugnoPhysReplacement(int32_t EntryPoint); // Function BP_SubSonic_PlayerOppugnoPhysReplacement.BP_SubSonic_PlayerOppugnoPhysReplacement_C.ExecuteUbergraph_BP_SubSonic_PlayerOppugnoPhysReplacement // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

