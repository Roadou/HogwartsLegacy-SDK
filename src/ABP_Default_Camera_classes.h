// AnimBlueprintGeneratedClass ABP_Default_Camera.ABP_Default_Camera_C
// Size: 0x488 (Inherited: 0x300)
struct UABP_Default_Camera_C : UAnimInstance_ApplyActorTransform {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x30)
	char pad_338[0x8]; // 0x338(0x08)
	struct FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x340(0xb0)
	struct FAnimNode_SceneRigCameraDriver AnimGraphNode_SceneRigCameraDriver; // 0x3f0(0x30)
	struct FAnimNode_CameraFixup AnimGraphNode_CameraFixup; // 0x420(0x68)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Default_Camera.ABP_Default_Camera_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Default_Camera(int32_t EntryPoint); // Function ABP_Default_Camera.ABP_Default_Camera_C.ExecuteUbergraph_ABP_Default_Camera // (Final|UbergraphFunction) // @ game+0x38a7480
};

