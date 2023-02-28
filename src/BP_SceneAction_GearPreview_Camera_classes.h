// BlueprintGeneratedClass BP_SceneAction_GearPreview_Camera.BP_SceneAction_GearPreview_Camera_C
// Size: 0x120 (Inherited: 0xa8)
struct UBP_SceneAction_GearPreview_Camera_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct UActorProvider* CameraTransitionController; // 0xb0(0x08)
	struct TMap<enum class EGearSlotIDEnum, struct UActorProvider*> GearSlotCameras; // 0xb8(0x50)
	float TransitionDuration; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FHermesBPDelegateHandle Handle; // 0x110(0x10)

	void TransitionToCameraForSlot(enum class EGearSlotIDEnum GearSlot, float Duration, bool& Result); // Function BP_SceneAction_GearPreview_Camera.BP_SceneAction_GearPreview_Camera_C.TransitionToCameraForSlot // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_GearPreview_Camera.BP_SceneAction_GearPreview_Camera_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_GearPreview_Camera.BP_SceneAction_GearPreview_Camera_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void UpdateVendorPreviewGearCamera(struct UObject* Caller); // Function BP_SceneAction_GearPreview_Camera.BP_SceneAction_GearPreview_Camera_C.UpdateVendorPreviewGearCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_GearPreview_Camera(int32_t EntryPoint); // Function BP_SceneAction_GearPreview_Camera.BP_SceneAction_GearPreview_Camera_C.ExecuteUbergraph_BP_SceneAction_GearPreview_Camera // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

