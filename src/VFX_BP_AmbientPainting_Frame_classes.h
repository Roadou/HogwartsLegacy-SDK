// BlueprintGeneratedClass VFX_BP_AmbientPainting_Frame.VFX_BP_AmbientPainting_Frame_C
// Size: 0x2e0 (Inherited: 0x2d0)
struct AVFX_BP_AmbientPainting_Frame_C : AAmbientPaintingActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UAkComponent* Ak_VFX_BP_AmbientPainting_Frame; // 0x2d8(0x08)

	void ReceiveBeginPlay(); // Function VFX_BP_AmbientPainting_Frame.VFX_BP_AmbientPainting_Frame_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function VFX_BP_AmbientPainting_Frame.VFX_BP_AmbientPainting_Frame_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_AmbientPainting_Frame(int32_t EntryPoint); // Function VFX_BP_AmbientPainting_Frame.VFX_BP_AmbientPainting_Frame_C.ExecuteUbergraph_VFX_BP_AmbientPainting_Frame // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

