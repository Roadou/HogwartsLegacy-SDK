// BlueprintGeneratedClass BP_SceneAction_DisablePostProcessAnimBP.BP_SceneAction_DisablePostProcessAnimBP_C
// Size: 0xb0 (Inherited: 0xa8)
struct UBP_SceneAction_DisablePostProcessAnimBP_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)

	struct FLinearColor GetActionColor(); // Function BP_SceneAction_DisablePostProcessAnimBP.BP_SceneAction_DisablePostProcessAnimBP_C.GetActionColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	bool IsProxyRequiredBP(); // Function BP_SceneAction_DisablePostProcessAnimBP.BP_SceneAction_DisablePostProcessAnimBP_C.IsProxyRequiredBP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_DisablePostProcessAnimBP.BP_SceneAction_DisablePostProcessAnimBP_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_DisablePostProcessAnimBP.BP_SceneAction_DisablePostProcessAnimBP_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_DisablePostProcessAnimBP(int32_t EntryPoint); // Function BP_SceneAction_DisablePostProcessAnimBP.BP_SceneAction_DisablePostProcessAnimBP_C.ExecuteUbergraph_BP_SceneAction_DisablePostProcessAnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

