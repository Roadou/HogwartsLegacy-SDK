// BlueprintGeneratedClass VFX_BP_Weather_DistantLightning.VFX_BP_Weather_DistantLightning_C
// Size: 0x2c0 (Inherited: 0x268)
struct AVFX_BP_Weather_DistantLightning_C : AWeatherSurfaceWorldFXBlueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UNiagaraComponent* N_Lightning; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float LightIntensity; // 0x280(0x04)
	struct FVector LOC_Camera; // 0x284(0x0c)
	struct FVector LOC_Strike; // 0x290(0x0c)
	float Lightning Delay Max; // 0x29c(0x04)
	float Lightning Delay Min; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FTimerHandle NewVar_1; // 0x2a8(0x08)
	float Base Height; // 0x2b0(0x04)
	bool Debug; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	float DistanceRange; // 0x2b8(0x04)
	float Forward Bias Weight; // 0x2bc(0x04)

	void LightningLoop(); // Function VFX_BP_Weather_DistantLightning.VFX_BP_Weather_DistantLightning_C.LightningLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Weather_DistantLightning.VFX_BP_Weather_DistantLightning_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Weather_DistantLightning(int32_t EntryPoint); // Function VFX_BP_Weather_DistantLightning.VFX_BP_Weather_DistantLightning_C.ExecuteUbergraph_VFX_BP_Weather_DistantLightning // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

