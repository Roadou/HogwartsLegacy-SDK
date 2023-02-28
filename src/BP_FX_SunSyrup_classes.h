// BlueprintGeneratedClass BP_FX_SunSyrup.BP_FX_SunSyrup_C
// Size: 0x278 (Inherited: 0x248)
struct ABP_FX_SunSyrup_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x258(0x08)
	struct USpotLightComponent* SpotLight; // 0x260(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x268(0x08)
	struct USceneComponent* Scene; // 0x270(0x08)

	void ReceiveBeginPlay(); // Function BP_FX_SunSyrup.BP_FX_SunSyrup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FX_SunSyrup(int32_t EntryPoint); // Function BP_FX_SunSyrup.BP_FX_SunSyrup_C.ExecuteUbergraph_BP_FX_SunSyrup // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

