// BlueprintGeneratedClass VFX_BP_AncMag_PostProcessFX.VFX_BP_AncMag_PostProcessFX_C
// Size: 0x260 (Inherited: 0x248)
struct AVFX_BP_AncMag_PostProcessFX_C : AActor {
	struct UPostProcessComponent* PostProcess; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float CurrentWeight; // 0x258(0x04)
	float RedBlueAlpha; // 0x25c(0x04)

	void SetRedBlueLerp(float Alpha); // Function VFX_BP_AncMag_PostProcessFX.VFX_BP_AncMag_PostProcessFX_C.SetRedBlueLerp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBlendWeight(float BlendWeight); // Function VFX_BP_AncMag_PostProcessFX.VFX_BP_AncMag_PostProcessFX_C.SetBlendWeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisablePP(); // Function VFX_BP_AncMag_PostProcessFX.VFX_BP_AncMag_PostProcessFX_C.DisablePP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnablePP(); // Function VFX_BP_AncMag_PostProcessFX.VFX_BP_AncMag_PostProcessFX_C.EnablePP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function VFX_BP_AncMag_PostProcessFX.VFX_BP_AncMag_PostProcessFX_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

