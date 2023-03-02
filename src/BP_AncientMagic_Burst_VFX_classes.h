// BlueprintGeneratedClass BP_AncientMagic_Burst_VFX.BP_AncientMagic_Burst_VFX_C
// Size: 0x270 (Inherited: 0x248)
struct ABP_AncientMagic_Burst_VFX_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float VFX_PPDuration; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UMaterialInstanceDynamic* MAT_Decal; // 0x260(0x08)
	struct AVFX_BP_AncMag_PostProcessFX_C* PostProcessVFXActor; // 0x268(0x08)

	void ReceiveBeginPlay(); // Function BP_AncientMagic_Burst_VFX.BP_AncientMagic_Burst_VFX_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DeactivateBurst(); // Function BP_AncientMagic_Burst_VFX.BP_AncientMagic_Burst_VFX_C.DeactivateBurst // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AncientMagic_Burst_VFX.BP_AncientMagic_Burst_VFX_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void KillBurst(); // Function BP_AncientMagic_Burst_VFX.BP_AncientMagic_Burst_VFX_C.KillBurst // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AncientMagic_Burst_VFX(int32_t EntryPoint); // Function BP_AncientMagic_Burst_VFX.BP_AncientMagic_Burst_VFX_C.ExecuteUbergraph_BP_AncientMagic_Burst_VFX // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

