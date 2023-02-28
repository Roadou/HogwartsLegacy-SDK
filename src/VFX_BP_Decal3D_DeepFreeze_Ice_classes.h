// BlueprintGeneratedClass VFX_BP_Decal3D_DeepFreeze_Ice.VFX_BP_Decal3D_DeepFreeze_Ice_C
// Size: 0x2a0 (Inherited: 0x248)
struct AVFX_BP_Decal3D_DeepFreeze_Ice_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UDecalSphereHelper* DecalSphereHelper; // 0x250(0x08)
	struct UDecalComponent* Decal; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float FadeOut_Alpha_CBDD5DB24FEEC476CCE7BEA947EF4E1D; // 0x268(0x04)
	enum class ETimelineDirection FadeOut__Direction_CBDD5DB24FEEC476CCE7BEA947EF4E1D; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* FadeOut; // 0x270(0x08)
	float FadeIn_Alpha_D7D4FFF14500E1FCDAE266AFE92B9EA3; // 0x278(0x04)
	enum class ETimelineDirection FadeIn__Direction_D7D4FFF14500E1FCDAE266AFE92B9EA3; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* FadeIn; // 0x280(0x08)
	struct UMaterialInstanceDynamic* MAT_Decal; // 0x288(0x08)
	struct FName NewVar_1; // 0x290(0x08)
	struct FRandomStream Random Seed; // 0x298(0x08)

	void UserConstructionScript(); // Function VFX_BP_Decal3D_DeepFreeze_Ice.VFX_BP_Decal3D_DeepFreeze_Ice_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeOut__FinishedFunc(); // Function VFX_BP_Decal3D_DeepFreeze_Ice.VFX_BP_Decal3D_DeepFreeze_Ice_C.FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void FadeOut__UpdateFunc(); // Function VFX_BP_Decal3D_DeepFreeze_Ice.VFX_BP_Decal3D_DeepFreeze_Ice_C.FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void FadeIn__FinishedFunc(); // Function VFX_BP_Decal3D_DeepFreeze_Ice.VFX_BP_Decal3D_DeepFreeze_Ice_C.FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void FadeIn__UpdateFunc(); // Function VFX_BP_Decal3D_DeepFreeze_Ice.VFX_BP_Decal3D_DeepFreeze_Ice_C.FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Fade Decal(); // Function VFX_BP_Decal3D_DeepFreeze_Ice.VFX_BP_Decal3D_DeepFreeze_Ice_C.Fade Decal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Decal3D_DeepFreeze_Ice.VFX_BP_Decal3D_DeepFreeze_Ice_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Fade In Decal(); // Function VFX_BP_Decal3D_DeepFreeze_Ice.VFX_BP_Decal3D_DeepFreeze_Ice_C.Fade In Decal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Decal3D_DeepFreeze_Ice(int32_t EntryPoint); // Function VFX_BP_Decal3D_DeepFreeze_Ice.VFX_BP_Decal3D_DeepFreeze_Ice_C.ExecuteUbergraph_VFX_BP_Decal3D_DeepFreeze_Ice // (Final|UbergraphFunction) // @ game+0x38a7480
};

