// BlueprintGeneratedClass VFX_BP_Decal3D_Scorch_Incendio_AOE.VFX_BP_Decal3D_Scorch_Incendio_AOE_C
// Size: 0x2c0 (Inherited: 0x248)
struct AVFX_BP_Decal3D_Scorch_Incendio_AOE_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UDecalComponent* Decal; // 0x250(0x08)
	struct UDecalSphereHelper* DecalSphereHelper; // 0x258(0x08)
	float Emissive_Hot_Color_Multiplyer_9788A9294A5DB11DF324228AAF70ADDD; // 0x260(0x04)
	float Emissive___of_Emiss_Inner_Ring_9788A9294A5DB11DF324228AAF70ADDD; // 0x264(0x04)
	float Emissive_Emis_Inner_Ring_Opacity_9788A9294A5DB11DF324228AAF70ADDD; // 0x268(0x04)
	float Emissive_Emis_Outer_Ring_Opacity_9788A9294A5DB11DF324228AAF70ADDD; // 0x26c(0x04)
	float Emissive___of_Emiss_Outter_Ring_9788A9294A5DB11DF324228AAF70ADDD; // 0x270(0x04)
	float Emissive_Emiss_Driver_9788A9294A5DB11DF324228AAF70ADDD; // 0x274(0x04)
	enum class ETimelineDirection Emissive__Direction_9788A9294A5DB11DF324228AAF70ADDD; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct UTimelineComponent* Emissive; // 0x280(0x08)
	float Diffuse_Diffuse_Inner_Ring_Opacity_3034615D4EB11CF90B38ACB02271AE74; // 0x288(0x04)
	float Diffuse_Diffuse_Outer_Ring_Opacity_3034615D4EB11CF90B38ACB02271AE74; // 0x28c(0x04)
	float Diffuse___of_Diffuse_Inner_Ring_3034615D4EB11CF90B38ACB02271AE74; // 0x290(0x04)
	float Diffuse___of_Diffuse_outter_Ring_3034615D4EB11CF90B38ACB02271AE74; // 0x294(0x04)
	float Diffuse_Diff_Driver_3034615D4EB11CF90B38ACB02271AE74; // 0x298(0x04)
	enum class ETimelineDirection Diffuse__Direction_3034615D4EB11CF90B38ACB02271AE74; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Diffuse; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* MAT_Decal; // 0x2a8(0x08)
	struct UMaterialParameterCollection* Collection; // 0x2b0(0x08)
	struct UMaterialParameterCollection* Collection_1; // 0x2b8(0x08)

	void UserConstructionScript(); // Function VFX_BP_Decal3D_Scorch_Incendio_AOE.VFX_BP_Decal3D_Scorch_Incendio_AOE_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Diffuse__FinishedFunc(); // Function VFX_BP_Decal3D_Scorch_Incendio_AOE.VFX_BP_Decal3D_Scorch_Incendio_AOE_C.Diffuse__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Diffuse__UpdateFunc(); // Function VFX_BP_Decal3D_Scorch_Incendio_AOE.VFX_BP_Decal3D_Scorch_Incendio_AOE_C.Diffuse__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Emissive__FinishedFunc(); // Function VFX_BP_Decal3D_Scorch_Incendio_AOE.VFX_BP_Decal3D_Scorch_Incendio_AOE_C.Emissive__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Emissive__UpdateFunc(); // Function VFX_BP_Decal3D_Scorch_Incendio_AOE.VFX_BP_Decal3D_Scorch_Incendio_AOE_C.Emissive__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Diff Ring(); // Function VFX_BP_Decal3D_Scorch_Incendio_AOE.VFX_BP_Decal3D_Scorch_Incendio_AOE_C.Diff Ring // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Emiss Ring(); // Function VFX_BP_Decal3D_Scorch_Incendio_AOE.VFX_BP_Decal3D_Scorch_Incendio_AOE_C.Emiss Ring // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Decal3D_Scorch_Incendio_AOE.VFX_BP_Decal3D_Scorch_Incendio_AOE_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Decal3D_Scorch_Incendio_AOE(int32_t EntryPoint); // Function VFX_BP_Decal3D_Scorch_Incendio_AOE.VFX_BP_Decal3D_Scorch_Incendio_AOE_C.ExecuteUbergraph_VFX_BP_Decal3D_Scorch_Incendio_AOE // (Final|UbergraphFunction) // @ game+0x38a7480
};

