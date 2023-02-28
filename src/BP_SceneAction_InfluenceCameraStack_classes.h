// BlueprintGeneratedClass BP_SceneAction_InfluenceCameraStack.BP_SceneAction_InfluenceCameraStack_C
// Size: 0x1e0 (Inherited: 0xa8)
struct UBP_SceneAction_InfluenceCameraStack_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct UCameraStackVolumePreset* Preset; // 0xb0(0x08)
	float BlendInDuration; // 0xb8(0x04)
	float BlendOutDuration; // 0xbc(0x04)
	struct FRuntimeFloatCurve BlendInCurve; // 0xc0(0x88)
	struct FRuntimeFloatCurve BlendOutCurve; // 0x148(0x88)
	int32_t Priority; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct UCameraStackInfluenceHandle* Influence; // 0x1d8(0x08)

	struct FLinearColor GetActionColor(); // Function BP_SceneAction_InfluenceCameraStack.BP_SceneAction_InfluenceCameraStack_C.GetActionColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	struct FText GetDisplayName(); // Function BP_SceneAction_InfluenceCameraStack.BP_SceneAction_InfluenceCameraStack_C.GetDisplayName // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_InfluenceCameraStack.BP_SceneAction_InfluenceCameraStack_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_InfluenceCameraStack.BP_SceneAction_InfluenceCameraStack_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetTimeInsideInterval(float Time, float LocalTime, bool IsScrubbing); // Function BP_SceneAction_InfluenceCameraStack.BP_SceneAction_InfluenceCameraStack_C.OnSetTimeInsideInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_InfluenceCameraStack(int32_t EntryPoint); // Function BP_SceneAction_InfluenceCameraStack.BP_SceneAction_InfluenceCameraStack_C.ExecuteUbergraph_BP_SceneAction_InfluenceCameraStack // (Final|UbergraphFunction) // @ game+0x38a7480
};

