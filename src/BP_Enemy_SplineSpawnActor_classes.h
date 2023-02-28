// BlueprintGeneratedClass BP_Enemy_SplineSpawnActor.BP_Enemy_SplineSpawnActor_C
// Size: 0x3d0 (Inherited: 0x3b0)
struct ABP_Enemy_SplineSpawnActor_C : AEnemy_SplineSpawnActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UNiagaraComponent* Niagara; // 0x3b8(0x08)
	struct UStaticMeshComponent* Sphere; // 0x3c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3c8(0x08)

	void ApplyStartFX(); // Function BP_Enemy_SplineSpawnActor.BP_Enemy_SplineSpawnActor_C.ApplyStartFX // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ApplyStopFX(); // Function BP_Enemy_SplineSpawnActor.BP_Enemy_SplineSpawnActor_C.ApplyStopFX // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Enemy_SplineSpawnActor(int32_t EntryPoint); // Function BP_Enemy_SplineSpawnActor.BP_Enemy_SplineSpawnActor_C.ExecuteUbergraph_BP_Enemy_SplineSpawnActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

