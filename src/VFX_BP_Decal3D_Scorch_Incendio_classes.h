// BlueprintGeneratedClass VFX_BP_Decal3D_Scorch_Incendio.VFX_BP_Decal3D_Scorch_Incendio_C
// Size: 0x298 (Inherited: 0x248)
struct AVFX_BP_Decal3D_Scorch_Incendio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* VFX_NS_Incendo_Impact_Terrain_Blast1; // 0x250(0x08)
	struct UDecalSphereHelper* DecalSphereHelper; // 0x258(0x08)
	struct UDecalComponent* Decal; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	float Timeline_2_Alpha_215269C84B902FEE4EC214AC9D70525B; // 0x270(0x04)
	enum class ETimelineDirection Timeline_2__Direction_215269C84B902FEE4EC214AC9D70525B; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct UTimelineComponent* Timeline_3; // 0x278(0x08)
	float Timeline_1_Alpha_A8FDB69D4D10A4F7E01C8AA822653F96; // 0x280(0x04)
	enum class ETimelineDirection Timeline_1__Direction_A8FDB69D4D10A4F7E01C8AA822653F96; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* Timeline_2; // 0x288(0x08)
	struct UMaterialInstanceDynamic* MAT_Decal; // 0x290(0x08)

	void UserConstructionScript(); // Function VFX_BP_Decal3D_Scorch_Incendio.VFX_BP_Decal3D_Scorch_Incendio_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function VFX_BP_Decal3D_Scorch_Incendio.VFX_BP_Decal3D_Scorch_Incendio_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function VFX_BP_Decal3D_Scorch_Incendio.VFX_BP_Decal3D_Scorch_Incendio_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function VFX_BP_Decal3D_Scorch_Incendio.VFX_BP_Decal3D_Scorch_Incendio_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function VFX_BP_Decal3D_Scorch_Incendio.VFX_BP_Decal3D_Scorch_Incendio_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Decal3D_Scorch_Incendio.VFX_BP_Decal3D_Scorch_Incendio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Fade Decal(); // Function VFX_BP_Decal3D_Scorch_Incendio.VFX_BP_Decal3D_Scorch_Incendio_C.Fade Decal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Fade Emissive(); // Function VFX_BP_Decal3D_Scorch_Incendio.VFX_BP_Decal3D_Scorch_Incendio_C.Fade Emissive // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Decal3D_Scorch_Incendio(int32_t EntryPoint); // Function VFX_BP_Decal3D_Scorch_Incendio.VFX_BP_Decal3D_Scorch_Incendio_C.ExecuteUbergraph_VFX_BP_Decal3D_Scorch_Incendio // (Final|UbergraphFunction) // @ game+0x38a7480
};

