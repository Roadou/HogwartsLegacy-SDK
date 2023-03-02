// BlueprintGeneratedClass BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_PuzzleCube_Incendio_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UAkComponent* Ak_Ambient_Sound; // 0x2b8(0x08)
	struct UParticleSystemComponent* VFX_P_Incindo_Fire_Pro; // 0x2c0(0x08)
	struct UStaticMeshComponent* SM_Brazier_SpellCubes_Incendio_Interior; // 0x2c8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2d0(0x08)

	bool DecreaseFire(float decreaseAmount); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PuzzleCube_Incendio(int32_t EntryPoint); // Function BP_PuzzleCube_Incendio.BP_PuzzleCube_Incendio_C.ExecuteUbergraph_BP_PuzzleCube_Incendio // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

