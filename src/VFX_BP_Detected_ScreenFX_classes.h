// BlueprintGeneratedClass VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C
// Size: 0x29c (Inherited: 0x248)
struct AVFX_BP_Detected_ScreenFX_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPostProcessComponent* Radial_Blur_SC_PostProcess; // 0x250(0x08)
	struct UPostProcessComponent* Contrast_PostProcess; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float Camera_Timeline_Blur_Amount_C41BD6754AC3946F7F8B5B883B518082; // 0x268(0x04)
	float Camera_Timeline_Contrast_C41BD6754AC3946F7F8B5B883B518082; // 0x26c(0x04)
	enum class ETimelineDirection Camera_Timeline__Direction_C41BD6754AC3946F7F8B5B883B518082; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct UTimelineComponent* Camera_Timeline; // 0x278(0x08)
	struct UVFX_BP_Detected_HUD_FlashColor_C* Flash; // 0x280(0x08)
	struct FMulticastInlineDelegate Flash_UI; // 0x288(0x10)
	float NewVar_1; // 0x298(0x04)

	void Camera_Timeline__FinishedFunc(); // Function VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C.Camera_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Camera_Timeline__UpdateFunc(); // Function VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C.Camera_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Detected_ScreenFX(int32_t EntryPoint); // Function VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C.ExecuteUbergraph_VFX_BP_Detected_ScreenFX // (Final|UbergraphFunction) // @ game+0x38a7480
	void Flash_UI__DelegateSignature(); // Function VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C.Flash_UI__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

